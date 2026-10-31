/**
 * Mercenaries - Recompiled code chunk 35
 * Functions: 250 (0x001C6730 - 0x001CF000)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001C6730
 * Original: 0x001C6730 - 0x001C673F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6730(void)
{

loc_001C6730: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C673Eu); RECOMP_ABI_CALL(0x001BD110u, sub_001BD110); /* call 0x001BD110 */

loc_001C673E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C6740
 * Original: 0x001C6740 - 0x001C6746 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6740(void)
{

loc_001C6740: ;
    eax = 0x440DF0;
    esp += 4; return; /* ret */

}

/**
 * sub_001C6750
 * Original: 0x001C6750 - 0x001C6815 (197 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6750(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C6750: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0xC11CCCCDu;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = 0x400;
    PUSH32(esp, esi);
    SET_LO8(edx, 1);
    MEM8(eax + 0x10) = LO8(edx);
    esi = 0xC3FA0000u;
    MEM32(eax + 0x20) = esi;
    MEM32(eax + 0x24) = esi;
    MEM32(eax + 0x28) = esi;
    MEM32(eax + 0x2C) = ecx;
    esi = 0x43FA0000;
    MEM32(eax + 0x30) = esi;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = esi;
    MEM32(eax + 0x3C) = ecx;
    esi = 0x3E4CCCCD;
    MEM32(eax + 0x40) = ecx;
    MEM8(eax + 0x50) = LO8(ecx);
    MEM8(eax + 0x51) = LO8(ecx);
    ecx = 0x3C23D70A;
    MEM32(eax + 0x6C) = esi;
    MEM32(eax + 0x88) = esi;
    MEM32(eax + 0x44) = 0x3F19999A;
    MEM32(eax + 0x48) = 0x3F800000;
    MEM32(eax + 0x4C) = 4;
    MEM32(eax + 0x54) = 0xBCF5C28Fu;
    MEM32(eax + 0x58) = 0x3E99999A;
    MEM32(eax + 0x5C) = 0x3A83126F;
    MEM32(eax + 0x60) = 0x3DCCCCCD;
    MEM8(eax + 0x64) = LO8(edx);
    MEM32(eax + 0x68) = 0x3D4CCCCD;
    MEM32(eax + 0x70) = ecx;
    MEM32(eax + 0x74) = 0x3F7FBE77;
    MEM8(eax + 0x78) = LO8(edx);
    MEM32(eax + 0x7C) = ecx;
    MEM32(eax + 0x80) = 0x14;
    MEM8(eax + 0x84) = LO8(edx);
    MEM32(eax + 0x8C) = 0x41200000;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C6820
 * Original: 0x001C6820 - 0x001C682E (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C6820: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C682D; /* je: equal / zero */

loc_001C6828: ;
    g_seh_ebp = ebp; sub_001C6750(); return; /* tail jmp 0x001C6750 */

loc_001C682D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C6830
 * Original: 0x001C6830 - 0x001C6835 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C6830: ;
    g_seh_ebp = ebp; sub_001CE830(); return; /* tail jmp 0x001CE830 */

}

/**
 * sub_001C6840
 * Original: 0x001C6840 - 0x001C6892 (82 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C6840: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(esp + 0x1C));
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x40);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(esp + 0x10) = LO8(eax);
    MEM32(esp + 8) = edi;
    eax = ecx;
    MEM32(esp + 0x14) = eax;
    if ((_fas < 0)) goto loc_001C688A; /* js: sign (negative) */

loc_001C686E: ;
    edi = edi;

loc_001C6870: ;
    edx = MEM32(edi + 0x3C);
    ecx = MEM32(edx + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C6883; /* je: equal / zero */

loc_001C687A: ;
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001C6883u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C6881u); } /* indirect call */
    }

loc_001C6883: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C6870; /* jns: not sign (positive) */

loc_001C6886: ;
    eax = MEM32(esp + 0x14);

loc_001C688A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C68A0
 * Original: 0x001C68A0 - 0x001C68E0 (64 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C68A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C68A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x40);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ecx, MEM8(esp + 0x1C));
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 8) = edi;
    MEM8(esp + 0x10) = LO8(ecx);
    if ((_fas < 0)) goto loc_001C68D8; /* js: sign (negative) */

loc_001C68C1: ;
    edx = MEM32(edi + 0x3C);
    ecx = MEM32(edx + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C68D5; /* je: equal / zero */

loc_001C68CB: ;
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C68D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C68D2u); } /* indirect call */
    }

loc_001C68D5: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C68C1; /* jns: not sign (positive) */

loc_001C68D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C68E0
 * Original: 0x001C68E0 - 0x001C69E4 (260 bytes, 93 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C68E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C68E0: ;
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
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi);
    MEM16(edi + 6) = MEM16(edi + 6) + 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esi = ecx;
    ecx = edi;
    MEM32(esp + 0x14) = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C6900u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C68FDu); } /* indirect call */
    }

loc_001C6900: ;
    ecx = MEM32(esi + 0xC);
    MEM32(esi + 0x54) = eax;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(ecx + 6));
    if ((_fa != 0)) goto loc_001C6916; /* jne: not equal / not zero */

loc_001C6910: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001C6916u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C6914u); } /* indirect call */
    }

loc_001C6916: ;
    eax = MEM32(esi + 8);
    MEM32(esi + 0xC) = edi;
    ecx = MEM32(eax + 0xCC);
    eax = MEM32(esi + 0xC4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = eax;
    if ((_fas < 0)) goto loc_001C69AB; /* js: sign (negative) */

loc_001C6933: ;
    goto loc_001C6940;

loc_001C6935: ;
    eax = MEM32(esp + 0x10);
    /* nop */

loc_001C6940: ;
    edx = MEM32(esi + 0xC0);
    ecx = MEM32(edx + eax * 8);
    edi = edx + eax * 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C6951u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C694Eu); } /* indirect call */
    }

loc_001C6951: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(esi + 0xC);
    ebx = MEM32(edi + 4);
    eax = esi + 0xC;
    eax = MEM32(ecx);
    MEM32(esp + 0x1C) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C6969u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C6966u); } /* indirect call */
    }

loc_001C6969: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C6972u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C696Fu); } /* indirect call */
    }

loc_001C6972: ;
    ecx = MEM32(esp + 0x18);
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x1C);
    esi = MEM32(eax + esi * 4 + 0x18C);
    eax = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001C6994u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C6992u); } /* indirect call */
    }

loc_001C6994: ;
    esi = MEM32(esp + 0x24);
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fas >= 0)) goto loc_001C6935; /* jns: not sign (positive) */

loc_001C69A8: ;
    edi = MEM32(ebp + 8);

loc_001C69AB: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C69DB; /* je: equal / zero */

loc_001C69B2: ;
    eax = MEM32(eax + 0xCC);
    edx = MEM32(edi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    eax = esi + 0x80;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001C69CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C69CCu); } /* indirect call */
    }

loc_001C69CF: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C69DBu); RECOMP_ABI_CALL(0x001CE8F0u, sub_001CE8F0); /* call 0x001CE8F0 */

loc_001C69DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C69F0
 * Original: 0x001C69F0 - 0x001C6AF4 (260 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C69F0(void)
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

loc_001C69F0: ;
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
    ebx = MEM32(ebp + 8);
    xmm0 = XMM_MEM(ebx); /* movaps */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 8);
    XMM_STORE(esi + 0xB0, xmm0); /* movaps */
    edx = MEM32(edx + 0xCC);
    fp_push(MEMF(edx + 8)); /* fld float */
    eax = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x14)); /* fadd dword ptr [edi + 0x14] */
    PUSH32(esp, ecx);
    edx = esi + 0x80;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001C6A35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C6A32u); } /* indirect call */
    }

loc_001C6A35: ;
    xmm1 = XMM_MEM(ebx); /* movaps */
    xmm0 = XMM_MEM(edi); /* movaps */
    xmm3 = XMM_MEM(esp + 0x20); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_MIN(xmm2, xmm0); /* minps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm1 = XMM_MAX(xmm1, xmm0); /* maxps */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    eax = esp + 0x20;
    xmm3 = XMM_ADD(xmm3, xmm2); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    PUSH32(esp, eax);
    ecx = esi;
    XMM_STORE(esp + 0x24, xmm3); /* movaps */
    XMM_STORE(esp + 0x34, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C6A75u); RECOMP_ABI_CALL(0x001CE8F0u, sub_001CE8F0); /* call 0x001CE8F0 */

loc_001C6A75: ;
    ecx = MEM32(esi + 8);
    MEM32(esp + 0x60) = 0x34000000;
    eax = MEM32(ecx + 0xCC);
    edx = MEM32(eax);
    MEM32(esp + 0x40) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x44) = ecx;
    edx = MEM32(eax + 8);
    ecx = MEM32(edi + 0x14);
    MEM32(esp + 0x48) = edx;
    eax = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esp + 0x48;
    MEM32(esp + 0x54) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C6AB3u); RECOMP_ABI_CALL(0x00191E50u, sub_00191E50); /* call 0x00191E50 */

loc_001C6AB3: ;
    eax = MEM32(edi + 0x10);
    edi = MEM32(esi + 0xC4);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x60) = eax;
    if ((_fas < 0)) goto loc_001C6AEB; /* js: sign (negative) */

loc_001C6AC3: ;
    ebx = MEM32(ebp + 0x14);
    ecx = MEM32(esi + 0xC0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    eax = ecx + edi * 8;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = esp + 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001C6AE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C6AE5u); } /* indirect call */
    }

loc_001C6AE8: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C6AC3; /* jns: not sign (positive) */

loc_001C6AEB: ;
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
 * sub_001C6B00
 * Original: 0x001C6B00 - 0x001C6B4B (75 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C6B00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    esi = MEM32(edi + 0xC4);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(eax + 0xCC);
    MEM32(esp + 8) = ecx;
    if ((_fas < 0)) goto loc_001C6B45; /* js: sign (negative) */

loc_001C6B1B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = edi + 0xC;

loc_001C6B20: ;
    edx = MEM32(edi + 0xC0);
    ebp = MEM32(esp + 0x18);
    ecx = MEM32(edx + esi * 8);
    eax = edx + esi * 8;
    eax = MEM32(eax + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001C6B40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C6B3Du); } /* indirect call */
    }

loc_001C6B40: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C6B20; /* jns: not sign (positive) */

loc_001C6B43: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001C6B45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C6B50
 * Original: 0x001C6B50 - 0x001C6B9B (75 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C6B50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    esi = MEM32(edi + 0xC4);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(eax + 0xCC);
    MEM32(esp + 8) = ecx;
    if ((_fas < 0)) goto loc_001C6B95; /* js: sign (negative) */

loc_001C6B6B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = edi + 0xC;

loc_001C6B70: ;
    edx = MEM32(edi + 0xC0);
    ebp = MEM32(esp + 0x18);
    ecx = MEM32(edx + esi * 8);
    eax = edx + esi * 8;
    eax = MEM32(eax + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001C6B90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C6B8Du); } /* indirect call */
    }

loc_001C6B90: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C6B70; /* jns: not sign (positive) */

loc_001C6B93: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001C6B95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C6BA0
 * Original: 0x001C6BA0 - 0x001C6C4A (170 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C6BA0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001C6BF9; /* je: equal / zero */

loc_001C6BB0: ;
    edi = MEM32(esi + 0xC4);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001C6BCF; /* js: sign (negative) */

loc_001C6BB9: ;
    eax = MEM32(esi + 0xC0);
    eax = eax + edi * 8 + 4;

loc_001C6BC3: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C6C01; /* je: equal / zero */

loc_001C6BC7: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C6BC3; /* jge: greater or equal (signed >=) */

loc_001C6BCF: ;
    edi = MEM32(esi + 0x40);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 8) = esi;
    MEM8(esp + 0x10) = 0;
    if ((_fas < 0)) goto loc_001C6BF9; /* js: sign (negative) */

loc_001C6BE2: ;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C6BF6; /* je: equal / zero */

loc_001C6BEC: ;
    edx = MEM32(ecx);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001C6BF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C6BF3u); } /* indirect call */
    }

loc_001C6BF6: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C6BE2; /* jns: not sign (positive) */

loc_001C6BF9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001C6C01: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax) = 1;
    PUSH32(esp, 0x001C6C0Fu); RECOMP_ABI_CALL(0x001C68A0u, sub_001C68A0); /* call 0x001C68A0 */

loc_001C6C0F: ;
    ecx = MEM32(esi + 0xC0);
    ecx = MEM32(ecx + edi * 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C6C21; /* je: equal / zero */

loc_001C6C1C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C6C21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C6C1Eu); } /* indirect call */
    }

loc_001C6C21: ;
    eax = MEM32(esi + 0xC4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC4) = eax;
    esi = MEM32(esi + 0xC0);
    ecx = MEM32(esi + eax * 8);
    MEM32(esi + edi * 8) = ecx;
    edx = MEM32(esi + eax * 8 + 4);
    MEM32(esi + edi * 8 + 4) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C6C50
 * Original: 0x001C6C50 - 0x001C6CA0 (80 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C6C50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6C9D; /* jle: less or equal (signed <=) */

loc_001C6C60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = esi + 0xC;
    goto loc_001C6C70;

    /* nop */
    edi = edi;

loc_001C6C70: ;
    eax = MEM32(esi + 0xC0);
    ebp = MEM32(esi + 8);
    ecx = MEM32(eax + edi * 8);
    ebp = MEM32(ebp + 0xCC);
    edx = MEM32(ecx);
    eax = eax + edi * 8;
    eax = MEM32(eax + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001C6C90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C6C8Du); } /* indirect call */
    }

loc_001C6C90: ;
    eax = MEM32(esi + 0xC4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C6C70; /* jl: less (signed <) */

loc_001C6C9B: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001C6C9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C6CA0
 * Original: 0x001C6CA0 - 0x001C6D90 (240 bytes, 92 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C6CA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001C6D83; /* je: equal / zero */

loc_001C6CB2: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    MEM8(esp + 0x10) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001C6CEB; /* je: equal / zero */

loc_001C6CC2: ;
    edx = MEM32(ebp + 0xC4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C6CEB; /* jle: less or equal (signed <=) */

loc_001C6CCE: ;
    eax = MEM32(ebp + 0xC0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C6CD7: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C6CE5; /* je: equal / zero */

loc_001C6CDB: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C6CD7; /* jl: less (signed <) */

loc_001C6CE3: ;
    goto loc_001C6CEB;

loc_001C6CE5: ;
    SET_LO8(ebx, 1);
    MEM8(esp + 0x10) = LO8(ebx);

loc_001C6CEB: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x001C6CF8u); RECOMP_ABI_CALL(0x001C6840u, sub_001C6840); /* call 0x001C6840 */

loc_001C6CF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C6D81; /* jne: not equal / not zero */

loc_001C6D00: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C6D81; /* jne: not equal / not zero */

loc_001C6D04: ;
    ecx = MEM32(ebp + 0xC8);
    eax = MEM32(ebp + 0xC4);
    esi = ebp + 0xC0;
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C6D2B; /* jne: not equal / not zero */

loc_001C6D20: ;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C6D28u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C6D28: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C6D2B: ;
    eax = MEM32(esi + 4);
    edx = MEM32(esi);
    edi = edx + eax * 8;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + 8);
    ebx = MEM32(eax + 0xCC);
    ecx = MEM32(ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(ebp);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C6D51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C6D4Eu); } /* indirect call */
    }

loc_001C6D51: ;
    esi = eax;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C6D5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C6D5Bu); } /* indirect call */
    }

loc_001C6D5E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x24);
    esi = MEM32(eax + esi * 4 + 0x18C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x001C6D79u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C6D77u); } /* indirect call */
    }

loc_001C6D79: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    MEM32(edi + 4) = ebx;

loc_001C6D81: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001C6D83: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C6D90
 * Original: 0x001C6D90 - 0x001C6DC1 (49 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C6D90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001C6D9Du); RECOMP_ABI_CALL(0x001C7160u, sub_001C7160); /* call 0x001C7160 */

loc_001C6D9D: ;
    MEM32(esi) = 0x2F9244;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC0) = eax;
    MEM32(esi + 0xC4) = eax;
    MEM32(esi + 0xC8) = 0x80000000u;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C6DD0
 * Original: 0x001C6DD0 - 0x001C6E7A (170 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C6DD0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245E36);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    MEM32(esi) = 0x2F9244;
    eax = MEM32(esi + 0xC4);
    edi = eax + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x14) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_001C6E24; /* jl: less (signed <) */

loc_001C6E09: ;
    /* nop */

loc_001C6E10: ;
    eax = MEM32(esi + 0xC0);
    ecx = MEM32(eax + edi * 8);
    edx = MEM32(ecx);
    eax = eax + edi * 8;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C6E21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C6E1Eu); } /* indirect call */
    }

loc_001C6E21: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C6E10; /* jns: not sign (positive) */

loc_001C6E24: ;
    MEM32(esi + 0xC4) = 0;
    eax = MEM32(esi + 0xC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C6E5A; /* js: sign (negative) */

loc_001C6E3D: ;
    edx = MEM32(esi + 0xC0);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C6E5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C6E57u); } /* indirect call */
    }

loc_001C6E5A: ;
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001C6E69u); RECOMP_ABI_CALL(0x001CE830u, sub_001CE830); /* call 0x001CE830 */

loc_001C6E69: ;
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
 * sub_001C6E80
 * Original: 0x001C6E80 - 0x001C6EA8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C6E80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C6E88u); RECOMP_ABI_CALL(0x001C6DD0u, sub_001C6DD0); /* call 0x001C6DD0 */

loc_001C6E88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C6EA2; /* je: equal / zero */

loc_001C6E8F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C6EA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C6E9Fu); } /* indirect call */
    }

loc_001C6EA2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C6EB0
 * Original: 0x001C6EB0 - 0x001C6F25 (117 bytes, 46 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C6EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C6EB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x13;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C6ED1u); RECOMP_ABI_CALL(0x001CF560u, sub_001CF560); /* call 0x001CF560 */

loc_001C6ED1: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C6F16; /* je: equal / zero */

loc_001C6ED6: ;
    edx = MEM32(ebp + 0x10);
    xmm0 = XMM_MEM(0x2F6A20); /* movaps */
    xmm1 = XMM_MEM(edi + 0x30); /* movaps */
    xmm2 = XMM_MEM(esi + 0x30); /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm1); /* subps */
    xmm2 = XMM_AND(xmm2, xmm0); /* andps */
    MEM32(esp + 0xC) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm0 = XMM_CMP_PRED(xmm0, xmm2, 1); /* cmpltps */
    eax = XMM_MOVEMASK(xmm0); /* movmskps */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 7 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C6F16; /* jne: not equal / not zero */

loc_001C6F07: ;
    eax = MEM32(ebp + 8);
    SET_LO8(ecx, 1);
    MEM8(eax) = LO8(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_001C6F16: ;
    eax = MEM32(ebp + 8);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM8(eax) = LO8(ecx);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001C6F30
 * Original: 0x001C6F30 - 0x001C6F6F (63 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6F30(void)
{

loc_001C6F30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001C6F3Eu); RECOMP_ABI_CALL(0x001CB390u, sub_001CB390); /* call 0x001CB390 */

loc_001C6F3E: ;
    xmm0 = XMM_MEM(esi + 0x80); /* movaps */
    XMM_STORE(edi + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x90); /* movaps */
    XMM_STORE(edi + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0xA0); /* movaps */
    XMM_STORE(edi + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0xB0); /* movaps */
    XMM_STORE(edi + 0x50, xmm0); /* movaps */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C6F70
 * Original: 0x001C6F70 - 0x001C6FDA (106 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C6F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C6F70: ;
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
    xmm0 = XMM_MEM(eax); /* movaps */
    PUSH32(esp, esi);
    esi = ecx;
    XMM_STORE(esi + 0x80, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(esi + 0x90, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    XMM_STORE(esi + 0xA0, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(esi + 0xB0, xmm0); /* movaps */
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    edi = esp + 0x10;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    edi = MEM32(edi + 0xCC);
    edi = MEM32(edi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001C6FC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C6FC3u); } /* indirect call */
    }

loc_001C6FC6: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C6FD2u); RECOMP_ABI_CALL(0x001CE8F0u, sub_001CE8F0); /* call 0x001CE8F0 */

loc_001C6FD2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C6FE0
 * Original: 0x001C6FE0 - 0x001C702D (77 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C6FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C6FE0: ;
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
    xmm0 = XMM_MEM(eax); /* movaps */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    XMM_STORE(esi + 0xB0, xmm0); /* movaps */
    eax = MEM32(eax + 0xCC);
    eax = MEM32(eax + 8);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    eax = esi + 0x80;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001C701Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C7017u); } /* indirect call */
    }

loc_001C701A: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C7026u); RECOMP_ABI_CALL(0x001CE8F0u, sub_001CE8F0); /* call 0x001CE8F0 */

loc_001C7026: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C7030
 * Original: 0x001C7030 - 0x001C7057 (39 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C7030: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    eax = ecx;
    esi = MEM32(eax + 8);
    esi = MEM32(esi + 0xCC);
    ecx = MEM32(eax + 0xC);
    esi = MEM32(esi + 8);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001C7053u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C7050u); } /* indirect call */
    }

loc_001C7053: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C7060
 * Original: 0x001C7060 - 0x001C709B (59 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C7060: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001C706Eu); RECOMP_ABI_CALL(0x001CB420u, sub_001CB420); /* call 0x001CB420 */

loc_001C706E: ;
    PUSH32(esp, 0x38D1B717);
    eax = esi + 0x80;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001C7089u); RECOMP_ABI_CALL(0x001C6EB0u, sub_001C6EB0); /* call 0x001C6EB0 */

loc_001C7089: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C7096; /* jne: not equal / not zero */

loc_001C708E: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001C7096u); RECOMP_ABI_CALL(0x001C6F70u, sub_001C6F70); /* call 0x001C6F70 */

loc_001C7096: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C70A0
 * Original: 0x001C70A0 - 0x001C70F7 (87 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C70A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C70A0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2F8430;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM32(eax + 0x24) = esi;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = 0x80000000u;
    MEM32(eax + 0x2C) = eax;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001C70F4; /* je: equal / zero */

loc_001C70F0: ;
    MEM16(edx + 6) = MEM16(edx + 6) + 1;
    _fa = (uint32_t)(MEM16(edx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_001C70F4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C7100
 * Original: 0x001C7100 - 0x001C7128 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C7100: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C7108u); RECOMP_ABI_CALL(0x001CE830u, sub_001CE830); /* call 0x001CE830 */

loc_001C7108: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C7122; /* je: equal / zero */

loc_001C710F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C7122u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C711Fu); } /* indirect call */
    }

loc_001C7122: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C7130
 * Original: 0x001C7130 - 0x001C7158 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C7130: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C7138u); RECOMP_ABI_CALL(0x001C6830u, sub_001C6830); /* call 0x001C6830 */

loc_001C7138: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C7152; /* je: equal / zero */

loc_001C713F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C7152u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C714Fu); } /* indirect call */
    }

loc_001C7152: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C7160
 * Original: 0x001C7160 - 0x001C7226 (198 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C7160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C7160: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245E48);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 4);
    PUSH32(esp, 2);
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C7194u); RECOMP_ABI_CALL(0x001C70A0u, sub_001C70A0); /* call 0x001C70A0 */

loc_001C7194: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    ecx = 0x80000000u;
    MEM32(esi + 0x44) = ecx;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = ecx;
    MEM32(esi + 0x2C) = esi;
    MEM32(esi) = 0x2F92AC;
    MEM32(esp + 0x1C) = eax;
    eax = esi + 0x60;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(eax, xmm0); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    ecx = 0x7149F2CA;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(edi);
    MEM32(esi + 0x28) = ecx;
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C71E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C71DFu); } /* indirect call */
    }

loc_001C71E2: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x54) = eax;
    xmm0 = XMM_MEM(edi + 0x20); /* movaps */
    XMM_STORE(esi + 0x80, xmm0); /* movaps */
    xmm0 = XMM_MEM(edi + 0x30); /* movaps */
    XMM_STORE(esi + 0x90, xmm0); /* movaps */
    xmm0 = XMM_MEM(edi + 0x40); /* movaps */
    XMM_STORE(esi + 0xA0, xmm0); /* movaps */
    xmm0 = XMM_MEM(edi + 0x50); /* movaps */
    XMM_STORE(esi + 0xB0, xmm0); /* movaps */
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C7230
 * Original: 0x001C7230 - 0x001C723F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7230(void)
{

loc_001C7230: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C723Eu); RECOMP_ABI_CALL(0x001C6F30u, sub_001C6F30); /* call 0x001C6F30 */

loc_001C723E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C7240
 * Original: 0x001C7240 - 0x001C724F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7240(void)
{

loc_001C7240: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C724Eu); RECOMP_ABI_CALL(0x001C7060u, sub_001C7060); /* call 0x001C7060 */

loc_001C724E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001C7250
 * Original: 0x001C7250 - 0x001C7256 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7250(void)
{

loc_001C7250: ;
    eax = 0x440E18;
    esp += 4; return; /* ret */

}

/**
 * sub_001C7260
 * Original: 0x001C7260 - 0x001C72B4 (84 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C7260: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245E6B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0xD0);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001C7288u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C7285u); } /* indirect call */
    }

loc_001C7288: ;
    MEM16(eax + 4) = 0xD0;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001C72A5u); RECOMP_ABI_CALL(0x001C6D90u, sub_001C6D90); /* call 0x001C6D90 */

loc_001C72A5: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C72C0
 * Original: 0x001C72C0 - 0x001C72CC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C72C0(void)
{

loc_001C72C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C72C8u); RECOMP_ABI_CALL(0x001CEA30u, sub_001CEA30); /* call 0x001CEA30 */

loc_001C72C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001C72D0
 * Original: 0x001C72D0 - 0x001C730D (61 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C72D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C72D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245E91);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(esp) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001C72FE; /* je: equal / zero */

loc_001C72F9: ;
    PUSH32(esp, 0x001C72FEu); RECOMP_ABI_CALL(0x001CEA30u, sub_001CEA30); /* call 0x001CEA30 */

loc_001C72FE: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C7310
 * Original: 0x001C7310 - 0x001C732F (31 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C7310: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7322; /* je: equal / zero */

loc_001C7314: ;
    eax = ecx + 8;
    MEM32(eax) = 0x2F8098;
    g_seh_ebp = ebp; sub_00015C50(); return; /* tail jmp 0x00015C50 */

loc_001C7322: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x2F8098;
    g_seh_ebp = ebp; sub_00015C50(); return; /* tail jmp 0x00015C50 */

}

/**
 * sub_001C7330
 * Original: 0x001C7330 - 0x001C7338 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C7330: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001C7450(); return; /* tail jmp 0x001C7450 */

}

/**
 * sub_001C7340
 * Original: 0x001C7340 - 0x001C7358 (24 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C7340: ;
    eax = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7355; /* je: equal / zero */

loc_001C7349: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_001BD180(); return; /* tail jmp 0x001BD180 */

loc_001C7355: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C7360
 * Original: 0x001C7360 - 0x001C73E0 (128 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C7360: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245EA8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2F9324;
    MEM32(esi + 8) = 0x2F9314;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001C73BA; /* je: equal / zero */

loc_001C7399: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C739Fu); RECOMP_ABI_CALL(0x001C28F0u, sub_001C28F0); /* call 0x001C28F0 */

loc_001C739F: ;
    ecx = MEM32(esi + 0x18);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C73B3; /* jne: not equal / not zero */

loc_001C73AD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001C73B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C73B1u); } /* indirect call */
    }

loc_001C73B3: ;
    MEM32(esi + 0x18) = 0;

loc_001C73BA: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEM32(esi + 8) = 0x2F8098;
    PUSH32(esp, 0x001C73D0u); RECOMP_ABI_CALL(0x00015C50u, sub_00015C50); /* call 0x00015C50 */

loc_001C73D0: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C73E0
 * Original: 0x001C73E0 - 0x001C744F (111 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C73E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C73E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245EA8);
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
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esi) = 0x2F9324;
    MEM32(esi + 8) = 0x2F9314;
    MEM32(esi + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001C743B; /* je: equal / zero */

loc_001C742E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C7434u); RECOMP_ABI_CALL(0x001C2A80u, sub_001C2A80); /* call 0x001C2A80 */

loc_001C7434: ;
    eax = MEM32(esi + 0x18);
    MEM16(eax + 6) = MEM16(eax + 6) + 1;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_001C743B: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C7450
 * Original: 0x001C7450 - 0x001C7478 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C7450: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C7458u); RECOMP_ABI_CALL(0x001C7360u, sub_001C7360); /* call 0x001C7360 */

loc_001C7458: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C7472; /* je: equal / zero */

loc_001C745F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C7472u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C746Fu); } /* indirect call */
    }

loc_001C7472: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C7480
 * Original: 0x001C7480 - 0x001C74B7 (55 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C7480: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x18);
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C74A3; /* jne: not equal / not zero */

loc_001C7498: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C74A0u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C74A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C74A3: ;
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
 * sub_001C74C0
 * Original: 0x001C74C0 - 0x001C74C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C74C0(void)
{

loc_001C74C0: ;
    eax = 0x440E40;
    esp += 4; return; /* ret */

}

/**
 * sub_001C74D0
 * Original: 0x001C74D0 - 0x001C753C (108 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C74D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C74D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    MEM16(esi + 6) = MEM16(esi + 6) + 1;
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C74EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C74E8u); } /* indirect call */
    }

loc_001C74EB: ;
    ecx = MEM32(edi + 0xC);
    MEM32(edi + 0x54) = eax;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(ecx + 6));
    if ((_fa != 0)) goto loc_001C7501; /* jne: not equal / not zero */

loc_001C74FB: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001C7501u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C74FFu); } /* indirect call */
    }

loc_001C7501: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0xC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001C7534; /* je: equal / zero */

loc_001C750B: ;
    eax = MEM32(eax + 0xCC);
    edx = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    eax = edi + 0x80;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001C7528u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C7525u); } /* indirect call */
    }

loc_001C7528: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C7534u); RECOMP_ABI_CALL(0x001CE8F0u, sub_001CE8F0); /* call 0x001CE8F0 */

loc_001C7534: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C7540
 * Original: 0x001C7540 - 0x001C7669 (297 bytes, 98 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C7540(void)
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

loc_001C7540: ;
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
    ebx = MEM32(ebp + 8);
    xmm0 = XMM_MEM(ebx); /* movaps */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 8);
    XMM_STORE(esi + 0xB0, xmm0); /* movaps */
    edx = MEM32(edx + 0xCC);
    fp_push(MEMF(edx + 8)); /* fld float */
    eax = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x14)); /* fadd dword ptr [edi + 0x14] */
    PUSH32(esp, ecx);
    edx = esi + 0x80;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001C7585u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C7582u); } /* indirect call */
    }

loc_001C7585: ;
    xmm1 = XMM_MEM(ebx); /* movaps */
    xmm0 = XMM_MEM(edi); /* movaps */
    xmm3 = XMM_MEM(esp + 0x20); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_MIN(xmm2, xmm0); /* minps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm1 = XMM_MAX(xmm1, xmm0); /* maxps */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    eax = esp + 0x20;
    xmm3 = XMM_ADD(xmm3, xmm2); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    PUSH32(esp, eax);
    ecx = esi;
    XMM_STORE(esp + 0x24, xmm3); /* movaps */
    XMM_STORE(esp + 0x34, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C75C5u); RECOMP_ABI_CALL(0x001CE8F0u, sub_001CE8F0); /* call 0x001CE8F0 */

loc_001C75C5: ;
    ebx = MEM32(esi + 8);
    MEM32(esp + 0x60) = 0x34000000;
    eax = MEM32(ebx + 0xCC);
    ecx = MEM32(eax);
    MEM32(esp + 0x40) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x44) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x48) = ecx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0x48;
    MEM32(esp + 0x54) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C7603u); RECOMP_ABI_CALL(0x00191E50u, sub_00191E50); /* call 0x00191E50 */

loc_001C7603: ;
    edx = MEM32(edi + 0x10);
    edi = MEM32(esi + 0xC4);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x60) = edx;
    eax = MEM32(ebx + 0xC8);
    MEM32(esp + 0xC) = eax;
    if ((_fas < 0)) goto loc_001C7660; /* js: sign (negative) */

loc_001C761D: ;
    /* nop */

loc_001C7620: ;
    ecx = MEM32(esi + 0xC0);
    edx = MEM32(ecx + edi * 4);
    ebx = ecx + edi * 4;
    ecx = MEM32(edx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C7633u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C7630u); } /* indirect call */
    }

loc_001C7633: ;
    ecx = MEM32(esi + 0x54);
    edx = MEM32(ebp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + ecx * 4 + 0x318C); PUSH32(esp, 0x001C765Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C7653u); } /* indirect call */
    }

loc_001C765A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C7620; /* jns: not sign (positive) */

loc_001C7660: ;
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
 * sub_001C7670
 * Original: 0x001C7670 - 0x001C76D1 (97 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C7670: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    ebp = MEM32(eax + 0xCC);
    ebx = MEM32(edi + 0xC4);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(ebp);
    MEM32(esp + 0xC) = ecx;
    if ((_fas < 0)) goto loc_001C76CA; /* js: sign (negative) */

loc_001C768F: ;
    PUSH32(esp, esi);

loc_001C7690: ;
    edx = MEM32(edi + 0xC0);
    eax = MEM32(edx + ebx * 4);
    ecx = MEM32(eax);
    esi = edx + ebx * 4;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C76A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C76A0u); } /* indirect call */
    }

loc_001C76A3: ;
    ecx = MEM32(edi + 0x54);
    edx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + ecx * 4 + 0x218C); PUSH32(esp, 0x001C76C3u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C76BCu); } /* indirect call */
    }

loc_001C76C3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C7690; /* jns: not sign (positive) */

loc_001C76C9: ;
    POP32(esp, esi);

loc_001C76CA: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C76E0
 * Original: 0x001C76E0 - 0x001C7741 (97 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C76E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C76E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    ebp = MEM32(eax + 0xCC);
    ebx = MEM32(edi + 0xC4);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(ebp);
    MEM32(esp + 0xC) = ecx;
    if ((_fas < 0)) goto loc_001C773A; /* js: sign (negative) */

loc_001C76FF: ;
    PUSH32(esp, esi);

loc_001C7700: ;
    edx = MEM32(edi + 0xC0);
    eax = MEM32(edx + ebx * 4);
    ecx = MEM32(eax);
    esi = edx + ebx * 4;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C7713u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C7710u); } /* indirect call */
    }

loc_001C7713: ;
    ecx = MEM32(edi + 0x54);
    edx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + ecx * 4 + 0x118C); PUSH32(esp, 0x001C7733u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001C772Cu); } /* indirect call */
    }

loc_001C7733: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C7700; /* jns: not sign (positive) */

loc_001C7739: ;
    POP32(esp, esi);

loc_001C773A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C7750
 * Original: 0x001C7750 - 0x001C77DF (143 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C7750: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001C77A8; /* je: equal / zero */

loc_001C7760: ;
    edi = MEM32(esi + 0xC4);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001C777E; /* js: sign (negative) */

loc_001C7769: ;
    eax = MEM32(esi + 0xC0);
    eax = eax + edi * 4;

loc_001C7772: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C77B0; /* je: equal / zero */

loc_001C7776: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C7772; /* jge: greater or equal (signed >=) */

loc_001C777E: ;
    edi = MEM32(esi + 0x40);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 8) = esi;
    MEM8(esp + 0x10) = 0;
    if ((_fas < 0)) goto loc_001C77A8; /* js: sign (negative) */

loc_001C7791: ;
    edx = MEM32(esi + 0x3C);
    ecx = MEM32(edx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C77A5; /* je: equal / zero */

loc_001C779B: ;
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001C77A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C77A2u); } /* indirect call */
    }

loc_001C77A5: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C7791; /* jns: not sign (positive) */

loc_001C77A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001C77B0: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax) = 1;
    PUSH32(esp, 0x001C77BEu); RECOMP_ABI_CALL(0x001C68A0u, sub_001C68A0); /* call 0x001C68A0 */

loc_001C77BE: ;
    eax = MEM32(esi + 0xC4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC4) = eax;
    esi = MEM32(esi + 0xC0);
    ecx = MEM32(esi + eax * 4);
    MEM32(esi + edi * 4) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C77E0
 * Original: 0x001C77E0 - 0x001C7876 (150 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C77E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C77E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001C7871; /* je: equal / zero */

loc_001C77F1: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x10) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001C7826; /* je: equal / zero */

loc_001C7800: ;
    edx = MEM32(esi + 0xC4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7826; /* jle: less or equal (signed <=) */

loc_001C780C: ;
    ecx = MEM32(esi + 0xC0);

loc_001C7812: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7820; /* je: equal / zero */

loc_001C7816: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C7812; /* jl: less (signed <) */

loc_001C781E: ;
    goto loc_001C7826;

loc_001C7820: ;
    SET_LO8(ebx, 1);
    MEM8(esp + 0x10) = LO8(ebx);

loc_001C7826: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001C7833u); RECOMP_ABI_CALL(0x001C6840u, sub_001C6840); /* call 0x001C6840 */

loc_001C7833: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C7870; /* jne: not equal / not zero */

loc_001C7837: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C7870; /* jne: not equal / not zero */

loc_001C783B: ;
    ecx = MEM32(esi + 0xC8);
    eax = MEM32(esi + 0xC4);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C7862; /* jne: not equal / not zero */

loc_001C7857: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C785Fu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C785F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C7862: ;
    eax = MEM32(esi + 4);
    edx = MEM32(esi);
    ecx = edx + eax * 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    MEM32(ecx) = edi;

loc_001C7870: ;
    POP32(esp, ebx);

loc_001C7871: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C7880
 * Original: 0x001C7880 - 0x001C78B1 (49 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C7880: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001C788Du); RECOMP_ABI_CALL(0x001C7160u, sub_001C7160); /* call 0x001C7160 */

loc_001C788D: ;
    MEM32(esi) = 0x2F9370;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC0) = eax;
    MEM32(esi + 0xC4) = eax;
    MEM32(esi + 0xC8) = 0x80000000u;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C78C0
 * Original: 0x001C78C0 - 0x001C7933 (115 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C78C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C78C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245EC8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2F9370;
    eax = MEM32(esi + 0xC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C7914; /* js: sign (negative) */

loc_001C78F5: ;
    edx = MEM32(esi + 0xC0);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C7913u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C7910u); } /* indirect call */
    }

loc_001C7913: ;
    POP32(esp, edi);

loc_001C7914: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001C7923u); RECOMP_ABI_CALL(0x001CE830u, sub_001CE830); /* call 0x001CE830 */

loc_001C7923: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C7940
 * Original: 0x001C7940 - 0x001C7968 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C7940: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C7948u); RECOMP_ABI_CALL(0x001C78C0u, sub_001C78C0); /* call 0x001C78C0 */

loc_001C7948: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C7962; /* je: equal / zero */

loc_001C794F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C7962u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C795Fu); } /* indirect call */
    }

loc_001C7962: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C7970
 * Original: 0x001C7970 - 0x001C7976 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7970(void)
{

loc_001C7970: ;
    eax = 0x440E68;
    esp += 4; return; /* ret */

}

/**
 * sub_001C7980
 * Original: 0x001C7980 - 0x001C79D4 (84 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C7980: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245EEB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0xD0);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001C79A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C79A5u); } /* indirect call */
    }

loc_001C79A8: ;
    MEM16(eax + 4) = 0xD0;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001C79C5u); RECOMP_ABI_CALL(0x001C7880u, sub_001C7880); /* call 0x001C7880 */

loc_001C79C5: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C79E0
 * Original: 0x001C79E0 - 0x001C7A1D (61 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C79E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C79E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245F11);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(esp) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001C7A0E; /* je: equal / zero */

loc_001C7A09: ;
    PUSH32(esp, 0x001C7A0Eu); RECOMP_ABI_CALL(0x001CEA30u, sub_001CEA30); /* call 0x001CEA30 */

loc_001C7A0E: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C7A20
 * Original: 0x001C7A20 - 0x001C7A2F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7A20(void)
{

loc_001C7A20: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2F93D8;
    esp += 4; return; /* ret */

}

/**
 * sub_001C7A30
 * Original: 0x001C7A30 - 0x001C7A36 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7A30(void)
{

loc_001C7A30: ;
    eax = 0x3E9;
    esp += 4; return; /* ret */

}

/**
 * sub_001C7A40
 * Original: 0x001C7A40 - 0x001C7A68 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C7A40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C7A48u); RECOMP_ABI_CALL(0x001CC0E0u, sub_001CC0E0); /* call 0x001CC0E0 */

loc_001C7A48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C7A62; /* je: equal / zero */

loc_001C7A4F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x26);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C7A62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C7A5Fu); } /* indirect call */
    }

loc_001C7A62: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C7A70
 * Original: 0x001C7A70 - 0x001C7A76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7A70(void)
{

loc_001C7A70: ;
    eax = 0x440E98;
    esp += 4; return; /* ret */

}

/**
 * sub_001C7A80
 * Original: 0x001C7A80 - 0x001C7AFA (122 bytes, 54 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C7A80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C7AB5; /* jne: not equal / not zero */

loc_001C7A8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7A96; /* je: equal / zero */

loc_001C7A91: ;
    ecx = eax + -16;
    goto loc_001C7A98;

loc_001C7A96: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C7A98: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7AA4; /* je: equal / zero */

loc_001C7A9F: ;
    edx = eax + -16;
    goto loc_001C7AA6;

loc_001C7AA4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C7AA6: ;
    ecx = MEM32(ecx + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM8(eax) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001C7AB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C7AB2u); } /* indirect call */
    }

loc_001C7AB5: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C7AF6; /* jne: not equal / not zero */

loc_001C7ABE: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7AC9; /* je: equal / zero */

loc_001C7AC4: ;
    edx = eax + -16;
    goto loc_001C7ACB;

loc_001C7AC9: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C7ACB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7AE5; /* je: equal / zero */

loc_001C7ACF: ;
    eax = ecx + -16;
    ecx = MEM32(eax + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM8(eax) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001C7AE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C7ADEu); } /* indirect call */
    }

loc_001C7AE1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001C7AE5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM8(eax) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001C7AF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C7AF3u); } /* indirect call */
    }

loc_001C7AF6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C7B00
 * Original: 0x001C7B00 - 0x001C7B61 (97 bytes, 41 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C7B00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C7B2F; /* jne: not equal / not zero */

loc_001C7B0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7B16; /* je: equal / zero */

loc_001C7B11: ;
    ecx = eax + -16;
    goto loc_001C7B18;

loc_001C7B16: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C7B18: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7B24; /* je: equal / zero */

loc_001C7B1F: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001C7B26;

loc_001C7B24: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C7B26: ;
    ecx = MEM32(ecx + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x001C7B2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C7B2Cu); } /* indirect call */
    }

loc_001C7B2F: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C7B5D; /* jne: not equal / not zero */

loc_001C7B38: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7B43; /* je: equal / zero */

loc_001C7B3E: ;
    edx = eax + -16;
    goto loc_001C7B45;

loc_001C7B43: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C7B45: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7B4E; /* je: equal / zero */

loc_001C7B49: ;
    eax = ecx + -16;
    goto loc_001C7B50;

loc_001C7B4E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C7B50: ;
    ecx = MEM32(eax + 0x20);
    eax = MEM32(ecx);
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x20)); return; /* indirect tail jmp */

loc_001C7B5D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C7B70
 * Original: 0x001C7B70 - 0x001C7BB4 (68 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C7B70: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7B80; /* jle: less or equal (signed <=) */

loc_001C7B7E: ;
    eax = esi;

loc_001C7B80: ;
    MEM32(ecx + 8) = eax;
    esi = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001C7B8C; /* jg: greater (signed >) */

loc_001C7B8A: ;
    eax = esi;

loc_001C7B8C: ;
    esi = MEM32(ecx + 0xC);
    MEM32(ecx + 8) = eax;
    eax = MEM32(edx + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0xC) = esi;
    eax = MEM32(edx + 8);
    esi = MEM32(ecx + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 0x18);
    MEM32(ecx + 0x10) = esi;
    edx = MEM32(edx + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C7BC0
 * Original: 0x001C7BC0 - 0x001C7BE5 (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C7BC0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 4);
    PUSH32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) - edx;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(eax + 8);
    esi = MEM32(ecx + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 0x18);
    MEM32(ecx + 0x10) = esi;
    eax = MEM32(eax + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 0x18) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C7BF0
 * Original: 0x001C7BF0 - 0x001C7BFF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7BF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C7BF0: ;
    edx = MEM32(ecx + 0x14);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x14) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C7C00
 * Original: 0x001C7C00 - 0x001C7C0F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7C00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C7C00: ;
    edx = MEM32(ecx + 0x14);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 0x14) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C7C10
 * Original: 0x001C7C10 - 0x001C7C62 (82 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C7C10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(esi + 0x40);
    edx = MEM32(ecx + edx * 4 + -4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x5C);
    MEM32(ecx + edi * 4) = edx;
    ecx = MEM32(eax + 0x5C);
    edx = MEM32(esi + 0x3C);
    edx = MEM32(edx + ecx * 4);
    MEM32(edx + 0x5C) = ecx;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0x44) = 0;
    MEM32(eax + 0x5C) = 0xFFFFFFFFu;
    eax = MEM32(eax + 0x3C);
    edx = MEM32(eax);
    edi = MEM32(esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C7C51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C7C4Eu); } /* indirect call */
    }

loc_001C7C51: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x10); PUSH32(esp, 0x001C7C59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C7C56u); } /* indirect call */
    }

loc_001C7C59: ;
    POP32(esp, edi);
    MEM8(esi + 0x28) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C7C70
 * Original: 0x001C7C70 - 0x001C7CF8 (136 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C7C70: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x5C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    if (CMP_LE(_fas, _fbs)) goto loc_001C7C94; /* jle: less or equal (signed <=) */

loc_001C7C85: ;
    edx = MEM32(esi + 0x58);

loc_001C7C88: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7C97; /* je: equal / zero */

loc_001C7C8C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C7C88; /* jl: less (signed <) */

loc_001C7C94: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001C7C97: ;
    ebx = MEM32(esi + 0x5C);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x5C) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7CB8; /* jge: greater or equal (signed >=) */

loc_001C7CA4: ;
    ecx = MEM32(esi + 0x58);
    edx = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edx;
    ecx = MEM32(esi + 0x5C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C7CA4; /* jl: less (signed <) */

loc_001C7CB8: ;
    eax = MEM32(edi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x001C7CC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C7CC1u); } /* indirect call */
    }

loc_001C7CC4: ;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001C7CD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C7CCEu); } /* indirect call */
    }

loc_001C7CD1: ;
    MEM8(esi + 0x28) = 1;
    MEM16(edi + 6) = MEM16(edi + 6) - 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 6), 0 (16-bit) */
    MEM32(edi + 0x14) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001C7CEF; /* jne: not equal / not zero */

loc_001C7CE7: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001C7CEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C7CEDu); } /* indirect call */
    }

loc_001C7CEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C7D00
 * Original: 0x001C7D00 - 0x001C7FA8 (680 bytes, 249 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C7D00: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x80);
    ebx = MEM32(edi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(edi + 0xC) = 1;
    if (CMP_AE(_fa, _fb)) goto loc_001C7D53; /* jae: above or equal (unsigned >=) */

loc_001C7D21: ;
    ecx = MEM32(edx);
    esi = MEM32(ecx + 4);

loc_001C7D26: ;
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C7D44; /* jb: below (unsigned <) */

loc_001C7D2F: ;
    if (CMP_NE(_fa, _fb)) goto loc_001C7D51; /* jne: not equal / not zero */

loc_001C7D31: ;
    ecx = MEM32(eax + 4);
    ecx = MEM32(ecx + 4);
    ebp = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 4) (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7D51; /* je: equal / zero */

loc_001C7D44: ;
    ecx = MEM32(edi + 0x84);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C7D26; /* jb: below (unsigned <) */

loc_001C7D51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */

loc_001C7D53: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001C7E06; /* je: equal / zero */

loc_001C7D59: ;
    ecx = MEM32(eax);
    esi = MEM32(edx);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C7E06; /* jne: not equal / not zero */

loc_001C7D69: ;
    ecx = MEM32(eax + 4);
    esi = MEM32(edx + 4);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C7E06; /* jne: not equal / not zero */

loc_001C7D7B: ;
    _fa = (uint32_t)(MEM32(edi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x80), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001C7DD9; /* jae: above or equal (unsigned >=) */

loc_001C7D83: ;
    goto loc_001C7D90;

    /* nop */
    /* nop */

loc_001C7D90: ;
    edx = MEM32(edi + 0x80);
    esi = MEM32(edx);
    ecx = MEM32(edi + 0x88);
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(ecx + 8) = esi;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(edi + 0x80);
    esi = MEM32(edi + 0x88);
    ecx = 0x10;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(edi + 0x88) = esi;
    MEM32(edi + 0x80) = edx;
    if (CMP_B(_fa, _fb)) goto loc_001C7D90; /* jb: below (unsigned <) */

loc_001C7DD9: ;
    eax = MEM32(edi + 0x80);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7DF5; /* je: equal / zero */

loc_001C7DE6: ;
    eax = MEM32(ecx);
    esi = MEM32(ecx + 8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C7DEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C7DEBu); } /* indirect call */
    }

loc_001C7DEE: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001C7DF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C7DF2u); } /* indirect call */
    }

loc_001C7DF5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + 0x80) = MEM32(edi + 0x80) + 0x10;
    _fa = (uint32_t)(MEM32(edi + 0x80)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001C7E06: ;
    ebx = MEM32(edx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001C7E15; /* je: equal / zero */

loc_001C7E10: ;
    eax = ebx + -16;
    goto loc_001C7E17;

loc_001C7E15: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C7E17: ;
    eax = MEM32(eax + 0x20);
    eax = MEM32(eax + 0x44);
    esi = MEM32(eax + 0x78);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x74;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7E64; /* jle: less or equal (signed <=) */

loc_001C7E29: ;
    esi = MEM32(ebx + 4);
    edx = MEM32(eax);
    MEM32(esp + 0x10) = esi;
    esi = edx;

loc_001C7E34: ;
    ebx = MEM32(esi);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C7E51; /* jne: not equal / not zero */

loc_001C7E3F: ;
    ebx = MEM32(esi + 4);
    ebp = MEM32(esp + 0x1C);
    ebp = MEM32(ebp + 4);
    ebx = MEM32(ebx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7E74; /* je: equal / zero */

loc_001C7E51: ;
    ebx = MEM32(eax + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C7E34; /* jl: less (signed <) */

loc_001C7E5C: ;
    edx = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x14);

loc_001C7E64: ;
    ebp = MEM32(edx + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x1C) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_001C7E93; /* je: equal / zero */

loc_001C7E6F: ;
    eax = ebp + -16;
    goto loc_001C7E95;

loc_001C7E74: ;
    esi = MEM32(eax + 4);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = esi;
    eax = MEM32(edx + esi * 8);
    POP32(esp, edi);
    MEM32(edx + ecx * 8) = eax;
    eax = MEM32(edx + esi * 8 + 4);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx + ecx * 8 + 4) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001C7E93: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C7E95: ;
    ecx = MEM32(eax + 0x20);
    eax = MEM32(ecx + 0x44);
    edx = MEM32(eax + 0x78);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x74;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7EDB; /* jle: less or equal (signed <=) */

loc_001C7EA7: ;
    esi = MEM32(ebx + 4);
    edx = MEM32(eax);
    MEM32(esp + 0x10) = esi;
    esi = edx;

loc_001C7EB2: ;
    ebp = MEM32(esp + 0x10);
    ebx = MEM32(esi);
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), ebp (32-bit) */
    ebp = MEM32(esp + 0x1C);
    if (CMP_NE(_fa, _fb)) goto loc_001C7ECC; /* jne: not equal / not zero */

loc_001C7EC1: ;
    ebx = MEM32(esi + 4);
    ebx = MEM32(ebx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7E74; /* je: equal / zero */

loc_001C7ECC: ;
    ebx = MEM32(eax + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C7EB2; /* jl: less (signed <) */

loc_001C7ED7: ;
    ebx = MEM32(esp + 0x14);

loc_001C7EDB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7EE4; /* je: equal / zero */

loc_001C7EDF: ;
    eax = ebx + -16;
    goto loc_001C7EE6;

loc_001C7EE4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C7EE6: ;
    ecx = MEM32(eax + 0x20);
    esi = MEM32(ecx + 0x44);
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFE4u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C7F04; /* jne: not equal / not zero */

loc_001C7EF3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7EFC; /* je: equal / zero */

loc_001C7EF7: ;
    eax = ebp + -16;
    goto loc_001C7EFE;

loc_001C7EFC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C7EFE: ;
    edx = MEM32(eax + 0x20);
    esi = MEM32(edx + 0x44);

loc_001C7F04: ;
    eax = MEM32(esi + 0x6C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C7F9E; /* jle: less or equal (signed <=) */

loc_001C7F11: ;
    ecx = MEM32(esi + 0x68);
    ebx = MEM32(ebx + 4);
    eax = ecx;
    /* nop */

loc_001C7F20: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C7F32; /* jne: not equal / not zero */

loc_001C7F27: ;
    edx = MEM32(eax + 4);
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7F47; /* je: equal / zero */

loc_001C7F32: ;
    edx = MEM32(esi + 0x6C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C7F20; /* jl: less (signed <) */

loc_001C7F3D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001C7F47: ;
    ebx = edi;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ecx + ebx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C7F64; /* je: equal / zero */

loc_001C7F54: ;
    eax = MEM32(ecx);
    ebp = MEM32(ecx + 8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C7F5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C7F59u); } /* indirect call */
    }

loc_001C7F5C: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001C7F64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C7F61u); } /* indirect call */
    }

loc_001C7F64: ;
    ebp = MEM32(esi + 0x6C);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esi + 0x6C) = ebp;
    ecx = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_001C7F9E; /* jge: greater or equal (signed >=) */

loc_001C7F73: ;
    edx = ebx;

loc_001C7F75: ;
    eax = MEM32(esi + 0x68);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 0x10;
    ebx = MEM32(edi);
    MEM32(eax) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(edi + 8);
    MEM32(eax + 8) = ebx;
    edi = MEM32(edi + 0xC);
    MEM32(eax + 0xC) = edi;
    eax = MEM32(esi + 0x6C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C7F75; /* jl: less (signed <) */

loc_001C7F9E: ;
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
 * sub_001C7FB0
 * Original: 0x001C7FB0 - 0x001C8047 (151 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C7FB0(void)
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

loc_001C7FB0: ;
    fp_push(MEMF(0x2F9448)); /* fld float */
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C801B; /* jl: less (signed <) */

loc_001C7FC5: ;
    ecx = MEM32(ebx);
    edx = esi + -4;
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edx * 4;

loc_001C7FD8: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + -48)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx - 0x30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C7FE7; /* jne: not equal / not zero */

loc_001C7FE2: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + -48)); /* fld float */

loc_001C7FE7: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C7FF4; /* jne: not equal / not zero */

loc_001C7FF0: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx)); /* fld float */

loc_001C7FF4: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 0x30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C8003; /* jne: not equal / not zero */

loc_001C7FFE: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 0x30)); /* fld float */

loc_001C8003: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x60)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 0x60] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C8012; /* jne: not equal / not zero */

loc_001C800D: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 0x60)); /* fld float */

loc_001C8012: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C7FD8; /* jne: not equal / not zero */

loc_001C801B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C8043; /* jge: greater or equal (signed >=) */

loc_001C801F: ;
    edx = MEM32(ebx);
    ecx = edi + edi * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + edx + 0xC;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001C8030: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C803D; /* jne: not equal / not zero */

loc_001C8039: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx)); /* fld float */

loc_001C803D: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C8030; /* jne: not equal / not zero */

loc_001C8043: ;
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

/**
 * sub_001C8050
 * Original: 0x001C8050 - 0x001C85A9 (1369 bytes, 440 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8050(void)
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

loc_001C8050: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    eax = MEM32(esi);
    edx = MEM32(esi + 4);
    ebx = ecx;
    ecx = MEM32(eax + 0x10);
    eax = MEM32(edx + 0x10);
    edx = MEM32(eax + 0x3C);
    ecx = MEM32(ecx + 0x3C);
    eax = MEM32(ecx + 0x7C);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(edx + 0x7C);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(esp + 0x10) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = MEM32(esp + 0x10);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001C809B; /* jnp: not parity */

loc_001C8097: ;
    eax = MEM32(esp + 0x14);

loc_001C809B: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    edi = MEM32(esp + 0x38);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ebp = MEM32(esp + 0x30);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    MEM32(esp + 0x20) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001C8321; /* jnp: not parity */

loc_001C80BC: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C80D1; /* jne: not equal / not zero */

loc_001C80CB: ;
    MEM32(esp + 0x30) = ecx;
    goto loc_001C80D7;

loc_001C80D1: ;
    MEM32(esp + 0x30) = edx;
    ecx = edx;

loc_001C80D7: ;
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x001C80E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C80E2u); } /* indirect call */
    }

loc_001C80E5: ;
    ecx = MEM32(edi);
    MEM32(ecx + 4) = 0;
    edx = MEM32(ebx + 0x20);
    eax = MEM32(edx + 0x254);
    MEM32(eax + 0xC) = 2;
    ecx = MEM32(ebx + 0x20);
    edx = MEM32(ecx + 0x254);
    eax = MEM32(esp + 0x3C);
    MEM32(edx + 0x10) = eax;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001C8125u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8122u); } /* indirect call */
    }

loc_001C8125: ;
    eax = MEM32(ebx + 0x20);
    ecx = MEM32(eax + 0x254);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C8139; /* jne: not equal / not zero */

loc_001C8135: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001C8189;

loc_001C8139: ;
    eax = MEM32(edi);
    edx = MEM32(eax + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x38) = 2;
    if (CMP_LE(_fas, _fbs)) goto loc_001C8185; /* jle: less or equal (signed <=) */

loc_001C814C: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x34) = eax;
    goto loc_001C8160;

loc_001C8157: ;
    eax = MEM32(esp + 0x34);
    goto loc_001C8160;

    /* nop */

loc_001C8160: ;
    fp_push(MEMF(eax)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x3C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x3c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001C8135; /* jnp: not parity */

loc_001C816D: ;
    eax = MEM32(esp + 0x34);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x38) = 1;
    MEM32(esp + 0x34) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001C8157; /* jl: less (signed <) */

loc_001C8185: ;
    eax = MEM32(esp + 0x38);

loc_001C8189: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001C859F; /* je: equal / zero */

loc_001C8190: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C8319; /* jne: not equal / not zero */

loc_001C8197: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = MEM32(ebx + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 0x24C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 0x24c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C82DA; /* jne: not equal / not zero */

loc_001C81C9: ;
    /* nop */

loc_001C81D0: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x001C81E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C81DFu); } /* indirect call */
    }

loc_001C81E2: ;
    ecx = MEM32(edi);
    MEM32(ecx + 4) = 0;
    edx = MEM32(ebx + 0x20);
    eax = MEM32(edx + 0x254);
    MEM32(eax + 0xC) = 2;
    ecx = MEM32(ebx + 0x20);
    edx = MEM32(ecx + 0x254);
    eax = MEM32(esp + 0x3C);
    MEM32(edx + 0x10) = eax;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001C8222u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C821Fu); } /* indirect call */
    }

loc_001C8222: ;
    eax = MEM32(ebx + 0x20);
    ecx = MEM32(eax + 0x254);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C8236; /* jne: not equal / not zero */

loc_001C8232: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001C8281;

loc_001C8236: ;
    eax = MEM32(edi);
    edx = MEM32(eax + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x28) = 2;
    if (CMP_LE(_fas, _fbs)) goto loc_001C827D; /* jle: less or equal (signed <=) */

loc_001C8249: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = eax;
    goto loc_001C8258;

loc_001C8254: ;
    eax = MEM32(esp + 0x24);

loc_001C8258: ;
    fp_push(MEMF(eax)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x3C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x3c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001C8232; /* jnp: not parity */

loc_001C8265: ;
    eax = MEM32(esp + 0x24);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x28) = 1;
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001C8254; /* jl: less (signed <) */

loc_001C827D: ;
    eax = MEM32(esp + 0x28);

loc_001C8281: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001C82A8; /* je: equal / zero */

loc_001C8286: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001C859F; /* je: equal / zero */

loc_001C828D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C82C2; /* jne: not equal / not zero */

loc_001C8290: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    goto loc_001C82BE;

loc_001C82A8: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */

loc_001C82BE: ;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */

loc_001C82C2: ;
    eax = MEM32(ebx + 0x20);
    fp_push(MEMF(esp + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 0x24C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 0x24c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C81D0; /* je: equal / zero */

loc_001C82DA: ;
    edx = MEM32(ebx + 0x20);
    eax = MEM32(edx + 0x254);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8333; /* je: equal / zero */

loc_001C82EA: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x34) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001C8319; /* jle: less or equal (signed <=) */

loc_001C82F9: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_001C8300: ;
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x3C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x3c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001C8333; /* jnp: not parity */

loc_001C830D: ;
    eax = MEM32(esp + 0x34);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C8300; /* jl: less (signed <) */

loc_001C8319: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);

loc_001C8321: ;
    fp_push(MEMF(ecx + 0x7C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x7C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0x7c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C8396; /* jp: parity */

loc_001C832E: ;
    fp_push(MEMF(ecx + 0x7C)); /* fld float */
    goto loc_001C8399;

loc_001C8333: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x001C8345u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8342u); } /* indirect call */
    }

loc_001C8345: ;
    MEM32(esi + 0xC) = 0xFFFFFFFDu;
    ecx = MEM32(edi);
    MEM32(ecx + 4) = 0;
    edx = MEM32(ebx + 0x20);
    eax = MEM32(edx + 0x254);
    MEM32(eax + 0xC) = 2;
    ecx = MEM32(ebx + 0x20);
    edx = MEM32(ecx + 0x254);
    MEM32(edx + 0x10) = 0xC47A0000u;
    edx = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001C838Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8389u); } /* indirect call */
    }

loc_001C838C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_001C8396: ;
    fp_push(MEMF(edx + 0x7C)); /* fld float */

loc_001C8399: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    eax = MEM32(ebx + 0x20);
    MEMF(esp + 0x38) = (float)fp_top(); /* fst */
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 0x24C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 0x24c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C84D8; /* jne: not equal / not zero */

loc_001C83BB: ;
    goto loc_001C83C0;

    /* nop */

loc_001C83C0: ;
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x001C83CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C83CBu); } /* indirect call */
    }

loc_001C83CE: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x001C83E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C83DDu); } /* indirect call */
    }

loc_001C83E0: ;
    ecx = MEM32(ebx + 0x20);
    edx = MEM32(ecx + 0x254);
    MEM32(edx + 0xC) = 2;
    eax = MEM32(ebx + 0x20);
    ecx = MEM32(eax + 0x254);
    edx = MEM32(esp + 0x3C);
    MEM32(ecx + 0x10) = edx;
    eax = MEM32(edi);
    MEM32(eax + 4) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001C8420u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C841Du); } /* indirect call */
    }

loc_001C8420: ;
    eax = MEM32(ebx + 0x20);
    ecx = MEM32(eax + 0x254);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C8434; /* jne: not equal / not zero */

loc_001C8430: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001C847F;

loc_001C8434: ;
    eax = MEM32(edi);
    edx = MEM32(eax + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x28) = 2;
    if (CMP_LE(_fas, _fbs)) goto loc_001C847B; /* jle: less or equal (signed <=) */

loc_001C8447: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x30) = eax;
    goto loc_001C8456;

loc_001C8452: ;
    eax = MEM32(esp + 0x30);

loc_001C8456: ;
    fp_push(MEMF(eax)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x3C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x3c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001C8430; /* jnp: not parity */

loc_001C8463: ;
    eax = MEM32(esp + 0x30);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x28) = 1;
    MEM32(esp + 0x30) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001C8452; /* jl: less (signed <) */

loc_001C847B: ;
    eax = MEM32(esp + 0x28);

loc_001C847F: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001C84A2; /* je: equal / zero */

loc_001C8484: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001C859F; /* je: equal / zero */

loc_001C848B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001C84BC; /* jne: not equal / not zero */

loc_001C848E: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    goto loc_001C84B8;

loc_001C84A2: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */

loc_001C84B8: ;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */

loc_001C84BC: ;
    eax = MEM32(ebx + 0x20);
    fp_push(MEMF(esp + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 0x24C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 0x24c] */
    ecx = MEM32(esp + 0x18);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C83C0; /* je: equal / zero */

loc_001C84D8: ;
    edx = MEM32(ebx + 0x20);
    fp_push(MEMF(esp + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x24C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0x24c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001C859F; /* jp: parity */

loc_001C84F0: ;
    edx = MEM32(edx + 0x254);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8548; /* je: equal / zero */

loc_001C84FD: ;
    eax = MEM32(edi);
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_001C859F; /* jle: less or equal (signed <=) */

loc_001C8516: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001C8520;

    /* nop */

loc_001C8520: ;
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x3C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x3c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001C8548; /* jnp: not parity */

loc_001C852D: ;
    MEM32(esp + 0x34) = MEM32(esp + 0x34) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x34), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C8520; /* jl: less (signed <) */

loc_001C853E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_001C8548: ;
    MEM32(esi + 0xC) = 0xFFFFFFFDu;
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x001C855Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C855Au); } /* indirect call */
    }

loc_001C855D: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x001C856Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C856Cu); } /* indirect call */
    }

loc_001C856F: ;
    ecx = MEM32(ebx + 0x20);
    edx = MEM32(ecx + 0x254);
    MEM32(edx + 0x10) = 0xC47A0000u;
    eax = MEM32(edi);
    MEM32(eax + 4) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001C859Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C859Cu); } /* indirect call */
    }

loc_001C859F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C85B0
 * Original: 0x001C85B0 - 0x001C8605 (85 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C85B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C85B0: ;
    edx = MEM32(ecx + 0x50);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_LE(_fas, _fbs)) goto loc_001C85CF; /* jle: less or equal (signed <=) */

loc_001C85C0: ;
    esi = MEM32(ecx + 0x4C);

loc_001C85C3: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C85D2; /* je: equal / zero */

loc_001C85C7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C85C3; /* jl: less (signed <) */

loc_001C85CF: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001C85D2: ;
    ebp = MEM32(ecx + 0x50);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ecx + 0x50) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_001C85F4; /* jge: greater or equal (signed >=) */

loc_001C85DF: ;
    /* nop */

loc_001C85E0: ;
    edx = MEM32(ecx + 0x4C);
    esi = MEM32(edx + eax * 4 + 4);
    edx = edx + eax * 4;
    MEM32(edx) = esi;
    edx = MEM32(ecx + 0x50);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C85E0; /* jl: less (signed <) */

loc_001C85F4: ;
    MEM32(edi + 0x10) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ecx + 0x28) = 1;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C8610
 * Original: 0x001C8610 - 0x001C8711 (257 bytes, 98 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C8610: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x4C);
    eax = MEM32(edi + 0x50);
    ecx = esi;
    ebx = ecx + eax * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C863F; /* je: equal / zero */

loc_001C8626: ;
    ebp = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_001C8630: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C8638u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8635u); } /* indirect call */
    }

loc_001C8638: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C8630; /* jne: not equal / not zero */

loc_001C863F: ;
    eax = MEM32(edi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C86D9; /* jne: not equal / not zero */

loc_001C864A: ;
    ecx = MEM32(0x4409E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4409E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x4409E8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001C8674; /* jae: above or equal (unsigned >=) */

loc_001C8658: ;
    MEM32(ecx) = 0x2F944C;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001C8674: ;
    ebx = MEM32(edi + 0x40);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001C86AD; /* js: sign (negative) */

loc_001C867A: ;
    ebp = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C8681: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx + ebx * 4);
    ecx = MEM32(edi + 0x20);
    esi = MEM32(edx + 0x3C);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xE0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001C869Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8699u); } /* indirect call */
    }

loc_001C869C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001C86A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C86A1u); } /* indirect call */
    }

loc_001C86A4: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C8681; /* jns: not sign (positive) */

loc_001C86A7: ;
    ecx = MEM32(0x4409E4);

loc_001C86AD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4409E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x4409E8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001C8709; /* jae: above or equal (unsigned >=) */

loc_001C86B5: ;
    MEM32(ecx) = 0x2F19C0;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(0x4409E4) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001C86D9: ;
    ecx = MEM32(edi + 0x58);
    edx = MEM32(edi + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xE0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = eax + 0x50;
    PUSH32(esp, edx);
    ecx = eax + 0x20;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C8706u); RECOMP_ABI_CALL(0x001CEA70u, sub_001CEA70); /* call 0x001CEA70 */

loc_001C8706: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C8709: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C8720
 * Original: 0x001C8720 - 0x001C8840 (288 bytes, 119 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8720(void)
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

loc_001C8720: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x34)); /* fadd dword ptr [esi + 0x34] */
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0x34)); /* fld float */
    MEM32(esi + 0x38) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C8755; /* jne: not equal / not zero */

loc_001C8751: ;
    SET_LO8(edx, 1);
    goto loc_001C8757;

loc_001C8755: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001C8757: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C8769; /* jne: not equal / not zero */

loc_001C8765: ;
    SET_LO8(eax, 1);
    goto loc_001C876B;

loc_001C8769: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001C876B: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C87E0; /* je: equal / zero */

loc_001C876F: ;
    fp_push(MEMF(esi + 0x34)); /* fld float */
    eax = MEM32(esi + 0x40);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x30)); /* fsub dword ptr [ecx + 0x30] */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ebx, 1);
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_001C87B6; /* jle: less or equal (signed <=) */

loc_001C8783: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx + edi * 4);
    eax = ecx + edi * 4;
    ecx = MEM32(edx + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C87A8; /* je: equal / zero */

loc_001C8793: ;
    eax = edx;
    ecx = MEM32(eax + 0x58);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C87A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C87A0u); } /* indirect call */
    }

loc_001C87A3: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C87AA; /* jne: not equal / not zero */

loc_001C87A8: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001C87AA: ;
    eax = MEM32(esi + 0x40);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C8783; /* jl: less (signed <) */

loc_001C87B2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8833; /* je: equal / zero */

loc_001C87B6: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C87CF; /* jge: greater or equal (signed >=) */

loc_001C87BD: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x2C) = LO8(eax);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax) = 0;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001C87CF: ;
    MEM8(esi + 0x2C) = 0;

loc_001C87D3: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax) = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001C87E0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8833; /* je: equal / zero */

loc_001C87E4: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = MEM32(esi + 0x40);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x34)); /* fsub dword ptr [ecx + 0x34] */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ebx, 1);
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_001C87D3; /* jle: less or equal (signed <=) */

loc_001C87F9: ;
    /* nop */

loc_001C8800: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx + edi * 4);
    eax = ecx + edi * 4;
    ecx = MEM32(edx + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8825; /* je: equal / zero */

loc_001C8810: ;
    eax = edx;
    ecx = MEM32(eax + 0x58);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001C8820u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C881Du); } /* indirect call */
    }

loc_001C8820: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C8827; /* jne: not equal / not zero */

loc_001C8825: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001C8827: ;
    eax = MEM32(esi + 0x40);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C8800; /* jl: less (signed <) */

loc_001C882F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C87D3; /* jne: not equal / not zero */

loc_001C8833: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax) = 0;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C8840
 * Original: 0x001C8840 - 0x001C8880 (64 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C8840: ;
    eax = MEM32(ecx + 0x7C);
    PUSH32(esp, esi);
    esi = ecx + 0x74;
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001C885F; /* jne: not equal / not zero */

loc_001C8854: ;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C885Cu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C885C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C885F: ;
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
 * sub_001C8880
 * Original: 0x001C8880 - 0x001C88D1 (81 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C8880: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x3C;
    MEM32(ebx + 0x44) = edi;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C88A9; /* jne: not equal / not zero */

loc_001C889E: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C88A6u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C88A6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C88A9: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    MEM32(edx + ecx * 4) = ebx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi + 0x40);
    ecx = MEM32(ebx + 0x3C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 0x5C) = eax;
    edx = MEM32(ecx);
    esi = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C88C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C88C2u); } /* indirect call */
    }

loc_001C88C5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(esi + 0x10); PUSH32(esp, 0x001C88CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C88C8u); } /* indirect call */
    }

loc_001C88CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C88E0
 * Original: 0x001C88E0 - 0x001C8941 (97 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C88E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C88E0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x60);
    ecx = MEM32(ebx + 0x5C);
    PUSH32(esp, edi);
    edi = ebx + 0x58;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C8905; /* jne: not equal / not zero */

loc_001C88FA: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C8902u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C8902: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C8905: ;
    ecx = MEM32(edi + 4);
    esi = MEM32(esp + 0x20);
    edx = MEM32(edi);
    MEM32(edx + ecx * 4) = esi;
    eax = MEM32(edi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esp + 0xC;
    MEM32(edi + 4) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x001C8924u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8921u); } /* indirect call */
    }

loc_001C8924: ;
    edx = MEM32(ebx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001C8931u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C892Eu); } /* indirect call */
    }

loc_001C8931: ;
    MEM16(esi + 6) = MEM16(esi + 6) + 1;
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x14) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C8950
 * Original: 0x001C8950 - 0x001C8988 (56 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C8950: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x54);
    ecx = MEM32(edi + 0x50);
    esi = edi + 0x4C;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C8971; /* jne: not equal / not zero */

loc_001C8966: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C896Eu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001C896E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C8971: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = MEM32(esp + 0xC);
    MEM32(edx + ecx * 4) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C8990
 * Original: 0x001C8990 - 0x001C8C14 (644 bytes, 229 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C8990: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x84)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x84) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001C8A24; /* jae: above or equal (unsigned >=) */

loc_001C89A6: ;
    goto loc_001C89B0;

    /* nop */
    /* nop */

loc_001C89B0: ;
    eax = MEM32(edi + 0x80);
    esi = MEM32(esp + 0x1C);
    ecx = MEM32(esi);
    edx = MEM32(eax);
    ecx = MEM32(ecx + 4);
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C89DD; /* jb: below (unsigned <) */

loc_001C89C8: ;
    if (CMP_NE(_fa, _fb)) goto loc_001C8A28; /* jne: not equal / not zero */

loc_001C89CA: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(esi + 4);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 4) (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8A28; /* je: equal / zero */

loc_001C89DD: ;
    ecx = MEM32(eax);
    edx = MEM32(edi + 0x88);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    edx = MEM32(edi + 0x88);
    ecx = MEM32(edi + 0x80);
    eax = 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x88) = edx;
    MEM32(edi + 0x80) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x84)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x84) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C89B0; /* jb: below (unsigned <) */

loc_001C8A22: ;
    goto loc_001C8A28;

loc_001C8A24: ;
    esi = MEM32(esp + 0x1C);

loc_001C8A28: ;
    eax = MEM32(edi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8A5B; /* je: equal / zero */

loc_001C8A2F: ;
    eax = MEM32(edi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x84)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x84) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8A5B; /* je: equal / zero */

loc_001C8A3D: ;
    edx = MEM32(esi);
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C8A5B; /* jne: not equal / not zero */

loc_001C8A49: ;
    edx = MEM32(eax + 4);
    eax = MEM32(esi + 4);
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8C0B; /* je: equal / zero */

loc_001C8A5B: ;
    ecx = MEM32(edi + 0x88);
    PUSH32(esp, ebp);
    ebp = MEM32(esi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001C8A71; /* je: equal / zero */

loc_001C8A6C: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xFFFFFFF0u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001C8A73;

loc_001C8A71: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C8A73: ;
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8A7F; /* je: equal / zero */

loc_001C8A7A: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001C8A81;

loc_001C8A7F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C8A81: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8A8A; /* je: equal / zero */

loc_001C8A85: ;
    eax = ebp + 0x10;
    goto loc_001C8A8C;

loc_001C8A8A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C8A8C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001C8A97; /* je: equal / zero */

loc_001C8A92: ;
    eax = ebx + 0x10;
    goto loc_001C8A99;

loc_001C8A97: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C8A99: ;
    MEM32(ecx + 4) = eax;
    edx = MEM32(ebx + 0x20);
    esi = MEM32(ebp + 0x20);
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x44) (32-bit) */
    MEM32(esp + 0x18) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001C8B19; /* je: equal / zero */

loc_001C8AAE: ;
    ecx = edi + -28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C8ABE; /* jne: not equal / not zero */

loc_001C8AB5: ;
    ecx = MEM32(edx + 0x44);
    MEM32(esp + 0x10) = ecx;
    goto loc_001C8AC4;

loc_001C8ABE: ;
    MEM32(esp + 0x10) = eax;
    ecx = eax;

loc_001C8AC4: ;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8AE2; /* je: equal / zero */

loc_001C8ACA: ;
    SET_LO8(eax, MEM8(ecx + 0x29));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C8AE2; /* jne: not equal / not zero */

loc_001C8AD1: ;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0x001C8ADAu); RECOMP_ABI_CALL(0x001BDA30u, sub_001BDA30); /* call 0x001BDA30 */

loc_001C8ADA: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);

loc_001C8AE2: ;
    SET_LO8(eax, MEM8(ecx + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C8AFD; /* jne: not equal / not zero */

loc_001C8AE9: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001C8AF3u); RECOMP_ABI_CALL(0x001C8840u, sub_001C8840); /* call 0x001C8840 */

loc_001C8AF3: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001C8AFD: ;
    SET_LO8(eax, MEM8(esi + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C8B19; /* jne: not equal / not zero */

loc_001C8B04: ;
    SET_LO8(eax, MEM8(edx + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C8B19; /* jne: not equal / not zero */

loc_001C8B0B: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001C8B15u); RECOMP_ABI_CALL(0x001BDED0u, sub_001BDED0); /* call 0x001BDED0 */

loc_001C8B15: ;
    edx = MEM32(esp + 0x18);

loc_001C8B19: ;
    edx = (uint32_t)(int32_t)SMEM8(edx + 0x48);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x48);
    eax = MEM32(edi + 0x7C);
    ecx = edx + ecx * 8;
    edx = MEM32(eax);
    ecx = MEM32(edx + ecx * 4 + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001C8B35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8B32u); } /* indirect call */
    }

loc_001C8B35: ;
    ecx = MEM32(ebp);
    edx = MEM32(ecx);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(edi + 0x7C);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(eax);
    MEM32(esp + 0x20) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C8B4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8B4Bu); } /* indirect call */
    }

loc_001C8B4E: ;
    ecx = MEM32(ebx);
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C8B57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8B54u); } /* indirect call */
    }

loc_001C8B57: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x10);
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + esi * 4 + 0x18C);
    esi = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001C8B75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8B73u); } /* indirect call */
    }

loc_001C8B75: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001C8BF5; /* je: equal / zero */

loc_001C8B83: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8BF5; /* je: equal / zero */

loc_001C8B8A: ;
    esi = MEM32(ebp + 0x20);
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ebx + 0x20);
    edx = MEM32(ecx);
    MEM32(esp + 0x20) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001C8B9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8B99u); } /* indirect call */
    }

loc_001C8B9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8BA8; /* je: equal / zero */

loc_001C8BA1: ;
    SET_LO8(eax, MEM8(esi + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8BC0; /* je: equal / zero */

loc_001C8BA8: ;
    esi = MEM32(esp + 0x20);
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001C8BB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8BB1u); } /* indirect call */
    }

loc_001C8BB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8BE8; /* je: equal / zero */

loc_001C8BB9: ;
    SET_LO8(eax, MEM8(esi + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C8BE8; /* jne: not equal / not zero */

loc_001C8BC0: ;
    ecx = MEM32(edi + 4);
    ecx = MEM32(ecx + 0x250);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001C8BD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8BD2u); } /* indirect call */
    }

loc_001C8BD5: ;
    SET_LO8(edx, MEM8(eax));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    edx = MEM32(esp + 0x14);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edx + 0xC) = ecx;
    goto loc_001C8C03;

loc_001C8BE8: ;
    eax = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    goto loc_001C8C03;

loc_001C8BF5: ;
    MEM32(ecx + 8) = 0;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001C8C03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8C00u); } /* indirect call */
    }

loc_001C8C03: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + 0x88) = MEM32(edi + 0x88) + 0x10;
    _fa = (uint32_t)(MEM32(edi + 0x88)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);

loc_001C8C0B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C8C20
 * Original: 0x001C8C20 - 0x001C8CB1 (145 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C8C20: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245F28);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0x80000000u;
    edi = MEM32(esp + 0x1C);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx + 0xC);
    MEM32(esp + 0x14) = eax;
    eax = edi + edi * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C8C75; /* jle: less or equal (signed <=) */

loc_001C8C6D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001C8C73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8C70u); } /* indirect call */
    }

loc_001C8C73: ;
    goto loc_001C8C89;

loc_001C8C75: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 8);
    PUSH32(esp, ebp);
    ebp = ebx + eax;
    MEM32(ecx + 8) = ebp;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    eax = ebx;
    MEM32(ecx + 0xC) = edx;
    POP32(esp, ebx);

loc_001C8C89: ;
    ecx = edi;
    ecx = ecx | 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x10) = edi;
    MEM32(esi) = eax;
    MEM32(esi + 0xC) = eax;
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
 * sub_001C8CC0
 * Original: 0x001C8CC0 - 0x001C8D60 (160 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C8CC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245F28);
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
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = 0;
    if ((_fa == 0)) goto loc_001C8D14; /* je: equal / zero */

loc_001C8D00: ;
    edi = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C8D0B; /* je: equal / zero */

loc_001C8D07: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C8D14; /* jne: not equal / not zero */

loc_001C8D0B: ;
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x2C); PUSH32(esp, 0x001C8D12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8D0Fu); } /* indirect call */
    }

loc_001C8D12: ;
    goto loc_001C8D24;

loc_001C8D14: ;
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

loc_001C8D24: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C8D4F; /* js: sign (negative) */

loc_001C8D33: ;
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
    eax = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C8D4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8D4Cu); } /* indirect call */
    }

loc_001C8D4F: ;
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
 * sub_001C8D60
 * Original: 0x001C8D60 - 0x001C8E0B (171 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C8D60: ;
    eax = ecx;
    edx = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = 0x2F80E8;
    MEM32(eax + 0x20) = edx;
    MEM32(eax) = 0x2F9464;
    MEM32(eax + 0x1C) = 0x2F9458;
    MEM8(eax + 0x28) = LO8(ecx);
    SET_LO8(edx, 1);
    MEM8(eax + 0x29) = LO8(edx);
    MEM8(eax + 0x2C) = LO8(ecx);
    MEM8(eax + 0x30) = LO8(edx);
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = 0x80000001u;
    edx = eax + 0x48;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    edx = 0x80000000u;
    MEM32(eax + 0x54) = edx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x60) = 0x80000001u;
    PUSH32(esp, edi);
    edi = eax + 0x64;
    MEM32(eax + 0x58) = edi;
    MEM32(eax + 0x68) = ecx;
    MEM32(eax + 0x6C) = ecx;
    MEM32(eax + 0x70) = edx;
    MEM32(eax + 0x74) = ecx;
    MEM32(eax + 0x78) = ecx;
    MEM32(eax + 0x7C) = edx;
    MEM32(eax + 0x80) = ecx;
    MEM32(eax + 0x84) = ecx;
    MEM32(eax + 0x88) = edx;
    MEM32(eax + 0x8C) = ecx;
    MEM32(eax + 0x90) = ecx;
    MEM32(eax + 0x94) = edx;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C8E10
 * Original: 0x001C8E10 - 0x001C8E18 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C8E10: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001C9B60(); return; /* tail jmp 0x001C9B60 */

}

/**
 * sub_001C8E20
 * Original: 0x001C8E20 - 0x001C8F84 (356 bytes, 111 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C8E20: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245FB4);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    MEM32(esi) = 0x2F9464;
    MEM32(esi + 0x1C) = 0x2F9458;
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = 7;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C8E7C; /* js: sign (negative) */

loc_001C8E5F: ;
    edx = MEM32(esi + 0x8C);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C8E7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8E79u); } /* indirect call */
    }

loc_001C8E7C: ;
    eax = MEM32(esi + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x18) = 6;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C8EA8; /* js: sign (negative) */

loc_001C8E8B: ;
    edx = MEM32(esi + 0x80);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C8EA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8EA5u); } /* indirect call */
    }

loc_001C8EA8: ;
    eax = MEM32(esi + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x18) = 5;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C8ECE; /* js: sign (negative) */

loc_001C8EB4: ;
    edx = MEM32(esi + 0x74);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C8ECEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8ECBu); } /* indirect call */
    }

loc_001C8ECE: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x18) = 4;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C8EF4; /* js: sign (negative) */

loc_001C8EDA: ;
    edx = MEM32(esi + 0x68);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C8EF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8EF1u); } /* indirect call */
    }

loc_001C8EF4: ;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x18) = 3;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C8F1A; /* js: sign (negative) */

loc_001C8F00: ;
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C8F1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8F17u); } /* indirect call */
    }

loc_001C8F1A: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x18) = 2;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C8F40; /* js: sign (negative) */

loc_001C8F26: ;
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001C8F40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8F3Du); } /* indirect call */
    }

loc_001C8F40: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x18) = 1;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C8F66; /* js: sign (negative) */

loc_001C8F4C: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C8F66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C8F63u); } /* indirect call */
    }

loc_001C8F66: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x1C) = 0x2F80E8;
    MEM32(esi) = 0x2DC684;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001C8F90
 * Original: 0x001C8F90 - 0x001C9177 (487 bytes, 150 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C8F90: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x245FC8);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001C8FC1; /* jne: not equal / not zero */

loc_001C8FB9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C9163; /* je: equal / zero */

loc_001C8FC1: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001C8FCDu); RECOMP_ABI_CALL(0x00230790u, sub_00230790); /* call 0x00230790 */

loc_001C8FCD: ;
    eax = MEM32(esp + 0x44);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C8FD8u); RECOMP_ABI_CALL(0x00230790u, sub_00230790); /* call 0x00230790 */

loc_001C8FD8: ;
    eax = MEM32(esi + 0x6C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x001C8FEAu); RECOMP_ABI_CALL(0x001BE690u, sub_001BE690); /* call 0x001BE690 */

loc_001C8FEA: ;
    eax = MEM32(esi + 0x68);
    edx = MEM32(esp + 0x10);
    MEM32(esi + 0x9C) = eax;
    ecx = MEM32(esi + 0x6C);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x20);
    MEM32(esi + 0xA0) = ecx;
    MEM32(esi + 0xA4) = edx;
    ecx = MEM32(eax + 0xCC);
    MEM32(esi + 0x98) = ecx;
    eax = MEM32(eax + 0x138);
    ecx = esi + 0x1C;
    MEM32(eax + 0x24) = ecx;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0xD0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x2C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001C9040; /* je: equal / zero */

loc_001C903B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001C9042;

loc_001C9040: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C9042: ;
    eax = MEM32(eax + 0x138);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x001C9058u); RECOMP_ABI_CALL(0x00230500u, sub_00230500); /* call 0x00230500 */

loc_001C9058: ;
    edx = MEM32(esi + 0x20);
    eax = MEM32(edx + 0x138);
    ecx = eax + 0x100;
    MEM32(eax + 0x24) = ecx;
    edx = MEM32(esi + 0x9C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xA0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0xA0) (32-bit) */
    edi = 0x10;
    if (CMP_AE(_fa, _fb)) goto loc_001C90C6; /* jae: above or equal (unsigned >=) */

loc_001C907D: ;
    /* nop */

loc_001C9080: ;
    eax = MEM32(esi + 0x9C);
    edx = MEM32(eax);
    ecx = MEM32(esi + 0xA4);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    edx = MEM32(esi + 0xA4);
    ecx = MEM32(esi + 0x9C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA4) = edx;
    MEM32(esi + 0x9C) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xA0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0xA0) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001C9080; /* jb: below (unsigned <) */

loc_001C90C6: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esi + 0xA4);
    ecx = MEM32(esi + 0x70);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001C9120; /* jge: greater or equal (signed >=) */

loc_001C90E8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C9105; /* js: sign (negative) */

loc_001C90EC: ;
    eax = MEM32(esi + 0x68);
    ecx = MEM32(0x4409AC);
    ebx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x001C9101u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C90FEu); } /* indirect call */
    }

loc_001C9101: ;
    eax = MEM32(esp + 0x14);

loc_001C9105: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001C9116u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C9113u); } /* indirect call */
    }

loc_001C9116: ;
    MEM32(esi + 0x68) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x70) = eax;

loc_001C9120: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esi + 0x68);
    MEM32(esi + 0x6C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001C9151; /* jle: less or equal (signed <=) */

loc_001C912A: ;
    ecx = MEM32(esp + 0x10);
    edi = edi;

loc_001C9130: ;
    esi = ecx;
    ebp = MEM32(esi);
    ebx = edx;
    MEM32(ebx) = ebp;
    ebp = MEM32(esi + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(esi + 8);
    MEM32(ebx + 8) = ebp;
    esi = MEM32(esi + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 0xC) = esi;
    if ((_fa != 0)) goto loc_001C9130; /* jne: not equal / not zero */

loc_001C9151: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x2C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001C9162u); RECOMP_ABI_CALL(0x001BE720u, sub_001BE720); /* call 0x001BE720 */

loc_001C9162: ;
    POP32(esp, ebp);

loc_001C9163: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001C9180
 * Original: 0x001C9180 - 0x001C94EB (875 bytes, 278 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9180(void)
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

loc_001C9180: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x245FF0);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x4409E8);
    ebp = ecx;
    ecx = MEM32(0x4409E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001C91CF; /* je: equal / zero */

loc_001C91B3: ;
    MEM32(ecx) = 0x2F9498;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001C91CF: ;
    ecx = MEM32(ebp + 0x20);
    edx = MEM32(ecx + 0x238);
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x001C91E2u); RECOMP_ABI_CALL(0x001BE430u, sub_001BE430); /* call 0x001BE430 */

loc_001C91E2: ;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(eax + 0x238);
    PUSH32(esp, ecx);
    ecx = esp + 0x40;
    MEM32(esp + 0x5C) = 0;
    PUSH32(esp, 0x001C91FDu); RECOMP_ABI_CALL(0x001BE430u, sub_001BE430); /* call 0x001BE430 */

loc_001C91FD: ;
    esi = MEM32(ebp + 0x40);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx + 0xC);
    edx = esi;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM8(esp + 0x58) = 1;
    MEM32(esp + 0x24) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_001C922D; /* jle: less or equal (signed <=) */

loc_001C9221: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x001C9227u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C9224u); } /* indirect call */
    }

loc_001C9227: ;
    MEM32(esp + 0x14) = eax;
    goto loc_001C923F;

loc_001C922D: ;
    edi = MEM32(ecx + 8);
    ebx = edi + edx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 8) = ebx;
    MEM32(ecx + 0xC) = eax;
    MEM32(esp + 0x14) = edi;

loc_001C923F: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx + 0xC);
    eax = esi * 4 + 0xF;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001C9266; /* jle: less or equal (signed <=) */

loc_001C925A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001C9260u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C925Du); } /* indirect call */
    }

loc_001C9260: ;
    MEM32(esp + 0x10) = eax;
    goto loc_001C9278;

loc_001C9266: ;
    esi = MEM32(ecx + 8);
    edi = esi + eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 8) = edi;
    MEM32(ecx + 0xC) = edx;
    MEM32(esp + 0x10) = esi;

loc_001C9278: ;
    eax = MEM32(ebp + 0x20);
    eax = MEM32(eax + 0xCC);
    fp_push(MEMF(eax + 8)); /* fld float */
    ecx = MEM32(0x4409E4);
    esi = MEM32(0x4409E8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_001C92BF; /* je: equal / zero */

loc_001C92A3: ;
    MEM32(ecx) = 0x2F948C;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x18) = eax;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001C92BF: ;
    eax = MEM32(ebp + 0x40);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = MEM32(esp + 0x14);
    ebx = MEM32(ebp + 0x3C);
    edi = MEM32(esp + 0x10);
    if ((_fas < 0)) goto loc_001C9312; /* js: sign (negative) */

loc_001C92D0: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;

loc_001C92D5: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_001C92E1; /* je: equal / zero */

loc_001C92DC: ;
    ecx = eax + 0x10;
    goto loc_001C92E3;

loc_001C92E1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C92E3: ;
    MEM32(edi) = ecx;
    ecx = MEM32(eax);
    eax = MEM32(eax + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x20));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001C92F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C92F5u); } /* indirect call */
    }

loc_001C92F8: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_001C92D5; /* jne: not equal / not zero */

loc_001C930C: ;
    ecx = MEM32(0x4409E4);

loc_001C9312: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4409E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x4409E8) (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C933B; /* je: equal / zero */

loc_001C931F: ;
    MEM32(ecx) = 0x2F947C;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x1C) = eax;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001C933B: ;
    eax = MEM32(ebp + 0x40);
    ebx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x60);
    edx = MEM32(ecx);
    esi = esp + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = esp + 0x2C;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001C935Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C9359u); } /* indirect call */
    }

loc_001C935C: ;
    ecx = MEM32(0x4409E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4409E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x4409E8) (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C938B; /* je: equal / zero */

loc_001C936F: ;
    MEM32(ecx) = 0x2F7520;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x60) = eax;
    edx = MEM32(esp + 0x60);
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001C938B: ;
    ecx = MEM32(ebp + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C93FF; /* jle: less or equal (signed <=) */

loc_001C9392: ;
    eax = MEM32(esp + 0x2C);
    esi = eax + ecx;
    edi = eax;
    eax = MEM32(esp + 0x30);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C93C0; /* jge: greater or equal (signed >=) */

loc_001C93A8: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C93B0; /* jl: less (signed <) */

loc_001C93AE: ;
    eax = esi;

loc_001C93B0: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001C93BDu); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001C93BD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C93C0: ;
    ecx = MEM32(ebp + 0x78);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x2C) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_001C93F8; /* jle: less or equal (signed <=) */

loc_001C93CD: ;
    ecx = edi * 8;

loc_001C93D4: ;
    edx = MEM32(ebp + 0x74);
    esi = MEM32(edx + eax * 8);
    edi = MEM32(esp + 0x28);
    MEM32(ecx + edi) = esi;
    edx = MEM32(edx + eax * 8 + 4);
    esi = MEM32(esp + 0x28);
    MEM32(ecx + esi + 4) = edx;
    edx = MEM32(ebp + 0x78);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C93D4; /* jl: less (signed <) */

loc_001C93F8: ;
    MEM32(ebp + 0x78) = 0;

loc_001C93FF: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x4409AC);
    if (CMP_EQ(_fa, _fb)) goto loc_001C9425; /* je: equal / zero */

loc_001C940D: ;
    edx = MEM32(ecx + 0x14);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C941C; /* je: equal / zero */

loc_001C9418: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C9425; /* jne: not equal / not zero */

loc_001C941C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x001C9423u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C9420u); } /* indirect call */
    }

loc_001C9423: ;
    goto loc_001C9435;

loc_001C9425: ;
    esi = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = esi;
    MEM32(ecx + 0xC) = edx;

loc_001C9435: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x4409AC);
    if (CMP_EQ(_fa, _fb)) goto loc_001C9457; /* je: equal / zero */

loc_001C9443: ;
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C944E; /* je: equal / zero */

loc_001C944A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C9457; /* jne: not equal / not zero */

loc_001C944E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x001C9455u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C9452u); } /* indirect call */
    }

loc_001C9455: ;
    goto loc_001C9467;

loc_001C9457: ;
    esi = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = esi;
    MEM32(ecx + 0xC) = edx;

loc_001C9467: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x001C9482u); RECOMP_ABI_CALL(0x001C8F90u, sub_001C8F90); /* call 0x001C8F90 */

loc_001C9482: ;
    MEM8(ebp + 0x30) = 1;
    esi = MEM32(0x4409E8);
    ecx = MEM32(0x4409E4);
    POP32(esp, edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001C94BB; /* je: equal / zero */

loc_001C949F: ;
    MEM32(ecx) = 0x2F7504;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x50) = eax;
    edx = MEM32(esp + 0x50);
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001C94BB: ;
    ecx = esp + 0x2C;
    MEM8(esp + 0x48) = 0;
    PUSH32(esp, 0x001C94C9u); RECOMP_ABI_CALL(0x001BE5F0u, sub_001BE5F0); /* call 0x001BE5F0 */

loc_001C94C9: ;
    ecx = esp + 0x18;
    MEM32(esp + 0x48) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001C94DAu); RECOMP_ABI_CALL(0x001BE5F0u, sub_001BE5F0); /* call 0x001BE5F0 */

loc_001C94DA: ;
    ecx = MEM32(esp + 0x40);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_001C94F0
 * Original: 0x001C94F0 - 0x001C9797 (679 bytes, 205 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C94F0(void)
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

loc_001C94F0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246008);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x4409E8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x4409E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C953D; /* je: equal / zero */

loc_001C9521: ;
    MEM32(ecx) = 0x2F94B0;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001C953D: ;
    PUSH32(esp, 0x40);
    ecx = esp + 0x18;
    PUSH32(esp, 0x001C9548u); RECOMP_ABI_CALL(0x001C8C20u, sub_001C8C20); /* call 0x001C8C20 */

loc_001C9548: ;
    eax = MEM32(edi + 0x6C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = MEM32(edi + 0x68);
    ecx = esp + 0x14;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 8) = ecx;
    if ((_fas < 0)) goto loc_001C9749; /* js: sign (negative) */

loc_001C9565: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = eax;
    ecx = 2;
    PUSH32(esp, ebp);

loc_001C9571: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C9735; /* je: equal / zero */

loc_001C957C: ;
    edx = MEM32(esp + 0x10);
    ebp = esp + 0x10;
    MEM32(edx + 4) = 0;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x44);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, ebp);
    if (CMP_L(_fas, _fbs)) goto loc_001C9691; /* jl: less (signed <) */

loc_001C95A0: ;
    eax = MEM32(edi + 0x20);
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x248)); /* fmul dword ptr [eax + 0x248] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x244)); /* fadd dword ptr [eax + 0x244] */
    eax = MEM32(eax + 0x254);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(ecx + 0x254);
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    MEMF(edx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 4);
    edx = MEM32(esi);
    ecx = MEM32(esi + 8);
    ebx = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ebx + 0x10); PUSH32(esp, 0x001C95E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C95DEu); } /* indirect call */
    }

loc_001C95E1: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(eax + 0x254);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C9661; /* je: equal / zero */

loc_001C95F1: ;
    eax = MEM32(esp + 0x10);
    ebx = MEM32(eax + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C9618; /* jle: less or equal (signed <=) */

loc_001C95FE: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C9603: ;
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001C9661; /* jnp: not parity */

loc_001C9610: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C9603; /* jl: less (signed <) */

loc_001C9618: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C970E; /* jle: less or equal (signed <=) */

loc_001C9623: ;
    ebx = eax + -1;
    eax = MEM32(edi + 0x20);
    MEM32(esp + 0x14) = ebx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x248)); /* fmul dword ptr [eax + 0x248] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x244)); /* fadd dword ptr [eax + 0x244] */
    eax = esp + 0x10;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001C964Au); RECOMP_ABI_CALL(0x001C7FB0u, sub_001C7FB0); /* call 0x001C7FB0 */

loc_001C964A: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001C970E; /* jne: not equal / not zero */

loc_001C9659: ;
    MEM32(esi + 0xC) = ebx;
    goto loc_001C970E;

loc_001C9661: ;
    eax = MEM32(esi + 0xC);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    edx = MEM32(edi + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x248)); /* fadd dword ptr [edx + 0x248] */
    ecx = esp + 0x10;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x001C968Cu); RECOMP_ABI_CALL(0x001C8050u, sub_001C8050); /* call 0x001C8050 */

loc_001C968C: ;
    goto loc_001C970E;

loc_001C9691: ;
    edx = MEM32(edi + 0x20);
    eax = MEM32(edx + 0x254);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(ecx + 0x254);
    MEM32(edx + 0x10) = 0xC47A0000u;
    eax = MEM32(esi + 4);
    edx = MEM32(esi);
    ecx = MEM32(esi + 8);
    ebx = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ebx + 0x10); PUSH32(esp, 0x001C96C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C96BFu); } /* indirect call */
    }

loc_001C96C2: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C970E; /* jne: not equal / not zero */

loc_001C96C8: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(eax + 0x254);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C970E; /* je: equal / zero */

loc_001C96D8: ;
    eax = MEM32(esp + 0x10);
    ebx = MEM32(eax + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C9707; /* jle: less or equal (signed <=) */

loc_001C96E5: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_001C96F0: ;
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001C970E; /* jnp: not parity */

loc_001C96FF: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C96F0; /* jl: less (signed <) */

loc_001C9707: ;
    MEM32(esi + 0xC) = 0;

loc_001C970E: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(edx + 8);
    eax = MEM32(esi + 4);
    edx = MEM32(esi);
    ebx = MEM32(ecx);
    ebp = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x44);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ebx + 0xC); PUSH32(esp, 0x001C9730u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C972Du); } /* indirect call */
    }

loc_001C9730: ;
    ecx = 2;

loc_001C9735: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_001C9571; /* jne: not equal / not zero */

loc_001C9747: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001C9749: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001C975Au); RECOMP_ABI_CALL(0x001C8CC0u, sub_001C8CC0); /* call 0x001C8CC0 */

loc_001C975A: ;
    ecx = MEM32(0x4409E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4409E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x4409E8) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_001C9786; /* jae: above or equal (unsigned >=) */

loc_001C976A: ;
    MEM32(ecx) = 0x2F19C0;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x30);
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001C9786: ;
    ecx = MEM32(esp + 0x20);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001C97A0
 * Original: 0x001C97A0 - 0x001C98CF (303 bytes, 97 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001C97A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C97A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246028);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x4409E8);
    esi = ecx;
    ecx = MEM32(0x4409E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C97F4; /* je: equal / zero */

loc_001C97D8: ;
    MEM32(ecx) = 0x2F94B0;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001C97F4: ;
    PUSH32(esp, 0x40);
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C97FFu); RECOMP_ABI_CALL(0x001C8C20u, sub_001C8C20); /* call 0x001C8C20 */

loc_001C97FF: ;
    ebx = MEM32(esi + 0x68);
    esi = MEM32(esi + 0x6C);
    eax = esi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esp + 0x2C;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001C9880; /* jl: less (signed <) */

loc_001C981C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = eax;

loc_001C9821: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C9872; /* je: equal / zero */

loc_001C9828: ;
    edx = MEM32(esp + 0x10);
    MEM32(edx + 4) = 0;
    edi = MEM32(ebx + 4);
    esi = MEM32(ebx);
    ecx = MEM32(ebx + 8);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001C9851u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C984Eu); } /* indirect call */
    }

loc_001C9851: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C9872; /* je: equal / zero */

loc_001C985C: ;
    ecx = MEM32(ebx + 8);
    ecx = MEM32(ecx + 8);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001C9872u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C986Fu); } /* indirect call */
    }

loc_001C9872: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = eax;
    if ((_fa != 0)) goto loc_001C9821; /* jne: not equal / not zero */

loc_001C9880: ;
    ecx = esp + 0x2C;
    MEM32(esp + 0x4C) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001C9891u); RECOMP_ABI_CALL(0x001C8CC0u, sub_001C8CC0); /* call 0x001C8CC0 */

loc_001C9891: ;
    ecx = MEM32(0x4409E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4409E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x4409E8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001C98BB; /* jae: above or equal (unsigned >=) */

loc_001C989F: ;
    MEM32(ecx) = 0x2F19C0;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x28) = eax;
    edx = MEM32(esp + 0x28);
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001C98BB: ;
    ecx = MEM32(esp + 0x44);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C98D0
 * Original: 0x001C98D0 - 0x001C9907 (55 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C98D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C98D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001C98E3u); RECOMP_ABI_CALL(0x001C9180u, sub_001C9180); /* call 0x001C9180 */

loc_001C98E3: ;
    ecx = MEM32(esi + 0x20);
    SET_LO8(eax, MEM8(ecx + 0x23E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi;
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001C98FD; /* je: equal / zero */

loc_001C98F3: ;
    PUSH32(esp, 0x001C98F8u); RECOMP_ABI_CALL(0x001C94F0u, sub_001C94F0); /* call 0x001C94F0 */

loc_001C98F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001C98FD: ;
    PUSH32(esp, 0x001C9902u); RECOMP_ABI_CALL(0x001C97A0u, sub_001C97A0); /* call 0x001C97A0 */

loc_001C9902: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001C9910
 * Original: 0x001C9910 - 0x001C9B60 (592 bytes, 209 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C9910: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246048);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x5C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    edx = esp + 0x24;
    eax = 0x8000000Au;
    MEM32(esp + 0x10) = esi;
    MEM32(edi + 4) = ebx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = eax;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x54) = ebx;
    MEM32(esp + 0x5C) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_001C9A1D; /* jle: less or equal (signed <=) */

loc_001C9963: ;
    eax = MEM32(esi + 0x4C);
    ecx = MEM32(esp + 0x5C);
    MEM32(esp + 0x1C) = ebx;
    ecx = MEM32(eax + ecx * 4);
    edx = MEM32(ecx);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001C997Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C9978u); } /* indirect call */
    }

loc_001C997B: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001C9988: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C9A03; /* jge: greater or equal (signed >=) */

loc_001C998C: ;
    eax = MEM32(edx + ebp * 4);
    _fa = (uint32_t)(MEM8(eax + 0x40)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x40), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C9997; /* jne: not equal / not zero */

loc_001C9995: ;
    ebx = ebp;

loc_001C9997: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C9988; /* je: equal / zero */

loc_001C999D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C9A03; /* jge: greater or equal (signed >=) */

loc_001C99A1: ;
    eax = MEM32(edx + ebp * 4);
    _fa = (uint32_t)(MEM8(eax + 0x40)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x40), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C99FE; /* jne: not equal / not zero */

loc_001C99AA: ;
    eax = MEM32(edi + 4);
    esi = eax + 1;
    eax = MEM32(edi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C99D4; /* jge: greater or equal (signed >=) */

loc_001C99BC: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C99C4; /* jl: less (signed <) */

loc_001C99C2: ;
    eax = esi;

loc_001C99C4: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C99CDu); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001C99CD: ;
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C99D4: ;
    ecx = MEM32(edi);
    MEM32(edi + 4) = esi;
    edx = MEM32(edx + ebx * 4);
    eax = ecx + esi * 8 + -8;
    ecx = MEM32(edx + 0x5C);
    esi = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(edx + ebp * 4);
    ecx = MEM32(ecx + 0x5C);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);

loc_001C99FE: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C99A1; /* jl: less (signed <) */

loc_001C9A03: ;
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(esi + 0x50);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x5C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001C9963; /* jl: less (signed <) */

loc_001C9A19: ;
    eax = MEM32(esp + 0x20);

loc_001C9A1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x54) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001C9A40; /* js: sign (negative) */

loc_001C9A29: ;
    ecx = MEM32(0x4409AC);
    ebp = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ebp + 0x14); PUSH32(esp, 0x001C9A40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C9A3Du); } /* indirect call */
    }

loc_001C9A40: ;
    eax = MEM32(esi + 0x5C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001C9AC6; /* jle: less or equal (signed <=) */

loc_001C9A49: ;
    /* nop */

loc_001C9A50: ;
    edx = MEM32(esi + 0x58);
    eax = MEM32(edx + ebp * 4);
    ecx = MEM32(eax + 0xC);
    SET_LO8(edx, MEM8(ecx + 0x40));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C9ABE; /* jne: not equal / not zero */

loc_001C9A60: ;
    edx = MEM32(eax + 0x10);
    SET_LO8(eax, MEM8(edx + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C9ABE; /* jne: not equal / not zero */

loc_001C9A6A: ;
    esi = MEM32(edi + 4);
    eax = MEM32(edi + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C9A8E; /* jge: greater or equal (signed >=) */

loc_001C9A7A: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C9A82; /* jl: less (signed <) */

loc_001C9A80: ;
    eax = esi;

loc_001C9A82: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C9A8Bu); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001C9A8B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C9A8E: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edi);
    MEM32(edi + 4) = esi;
    edx = MEM32(ecx + 0x58);
    edx = MEM32(edx + ebp * 4);
    edx = MEM32(edx + 0xC);
    edx = MEM32(edx + 0x5C);
    eax = eax + esi * 8 + -8;
    esi = MEM32(esp + 0x10);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 0x58);
    edx = MEM32(ecx + ebp * 4);
    ecx = MEM32(edx + 0x10);
    edx = MEM32(ecx + 0x5C);
    MEM32(eax + 4) = edx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001C9ABE: ;
    eax = MEM32(esi + 0x5C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C9A50; /* jl: less (signed <) */

loc_001C9AC6: ;
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x6C), ebx (32-bit) */
    MEM32(esp + 0x5C) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_001C9B4B; /* jle: less or equal (signed <=) */

loc_001C9ACF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;

loc_001C9AD5: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(eax + ecx);
    ebp = MEM32(edx + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 4);
    ebx = MEM32(eax + 0x10);
    SET_LO8(eax, MEM8(ebp + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C9B30; /* jne: not equal / not zero */

loc_001C9AED: ;
    SET_LO8(eax, MEM8(ebx + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C9B30; /* jne: not equal / not zero */

loc_001C9AF4: ;
    esi = MEM32(edi + 4);
    eax = MEM32(edi + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001C9B18; /* jge: greater or equal (signed >=) */

loc_001C9B04: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C9B0C; /* jl: less (signed <) */

loc_001C9B0A: ;
    eax = esi;

loc_001C9B0C: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001C9B15u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001C9B15: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001C9B18: ;
    ecx = MEM32(edi);
    MEM32(edi + 4) = esi;
    edx = MEM32(ebp + 0x5C);
    eax = ecx + esi * 8 + -8;
    esi = MEM32(esp + 0x10);
    MEM32(eax) = edx;
    ecx = MEM32(ebx + 0x5C);
    MEM32(eax + 4) = ecx;

loc_001C9B30: ;
    ecx = MEM32(esp + 0x5C);
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi + 0x6C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x5C) = ecx;
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001C9AD5; /* jl: less (signed <) */

loc_001C9B4B: ;
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

}

/**
 * sub_001C9B60
 * Original: 0x001C9B60 - 0x001C9B88 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C9B60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001C9B68u); RECOMP_ABI_CALL(0x001C8E20u, sub_001C8E20); /* call 0x001C8E20 */

loc_001C9B68: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001C9B82; /* je: equal / zero */

loc_001C9B6F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2D);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001C9B82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C9B7Fu); } /* indirect call */
    }

loc_001C9B82: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C9B90
 * Original: 0x001C9B90 - 0x001C9BFB (107 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C9B90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x40);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001C9BB4; /* js: sign (negative) */

loc_001C9B9D: ;
    ebx = MEM32(esp + 0x14);

loc_001C9BA1: ;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C9BB1; /* je: equal / zero */

loc_001C9BAB: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001C9BB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C9BAEu); } /* indirect call */
    }

loc_001C9BB1: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C9BA1; /* jns: not sign (positive) */

loc_001C9BB4: ;
    edx = MEM32(esi + 0x40);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001C9BF7; /* js: sign (negative) */

loc_001C9BBA: ;
    /* nop */

loc_001C9BC0: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C9BF4; /* jne: not equal / not zero */

loc_001C9BC9: ;
    ebx = MEM32(esi + 0x40);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0x40) = ebx;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001C9BF4; /* jge: greater or equal (signed >=) */

loc_001C9BD8: ;
    goto loc_001C9BE0;

    /* nop */

loc_001C9BE0: ;
    ecx = MEM32(esi + 0x3C);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0x40);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C9BE0; /* jl: less (signed <) */

loc_001C9BF4: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C9BC0; /* jns: not sign (positive) */

loc_001C9BF7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C9C00
 * Original: 0x001C9C00 - 0x001C9C6B (107 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C9C00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x40);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001C9C24; /* js: sign (negative) */

loc_001C9C0D: ;
    ebx = MEM32(esp + 0x14);

loc_001C9C11: ;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C9C21; /* je: equal / zero */

loc_001C9C1B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001C9C21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C9C1Eu); } /* indirect call */
    }

loc_001C9C21: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C9C11; /* jns: not sign (positive) */

loc_001C9C24: ;
    edx = MEM32(esi + 0x40);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001C9C67; /* js: sign (negative) */

loc_001C9C2A: ;
    /* nop */

loc_001C9C30: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C9C64; /* jne: not equal / not zero */

loc_001C9C39: ;
    ebx = MEM32(esi + 0x40);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0x40) = ebx;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001C9C64; /* jge: greater or equal (signed >=) */

loc_001C9C48: ;
    goto loc_001C9C50;

    /* nop */

loc_001C9C50: ;
    ecx = MEM32(esi + 0x3C);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0x40);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C9C50; /* jl: less (signed <) */

loc_001C9C64: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C9C30; /* jns: not sign (positive) */

loc_001C9C67: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C9C70
 * Original: 0x001C9C70 - 0x001C9CDB (107 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C9C70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001C9C94; /* js: sign (negative) */

loc_001C9C7D: ;
    ebx = MEM32(esp + 0x14);

loc_001C9C81: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C9C91; /* je: equal / zero */

loc_001C9C8B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001C9C91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C9C8Eu); } /* indirect call */
    }

loc_001C9C91: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C9C81; /* jns: not sign (positive) */

loc_001C9C94: ;
    edx = MEM32(esi + 0x4C);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001C9CD7; /* js: sign (negative) */

loc_001C9C9A: ;
    /* nop */

loc_001C9CA0: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C9CD4; /* jne: not equal / not zero */

loc_001C9CA9: ;
    ebx = MEM32(esi + 0x4C);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0x4C) = ebx;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001C9CD4; /* jge: greater or equal (signed >=) */

loc_001C9CB8: ;
    goto loc_001C9CC0;

    /* nop */

loc_001C9CC0: ;
    ecx = MEM32(esi + 0x48);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0x4C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C9CC0; /* jl: less (signed <) */

loc_001C9CD4: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C9CA0; /* jns: not sign (positive) */

loc_001C9CD7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C9CE0
 * Original: 0x001C9CE0 - 0x001C9D4B (107 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C9CE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001C9D04; /* js: sign (negative) */

loc_001C9CED: ;
    ebx = MEM32(esp + 0x14);

loc_001C9CF1: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C9D01; /* je: equal / zero */

loc_001C9CFB: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001C9D01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C9CFEu); } /* indirect call */
    }

loc_001C9D01: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C9CF1; /* jns: not sign (positive) */

loc_001C9D04: ;
    edx = MEM32(esi + 0x4C);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001C9D47; /* js: sign (negative) */

loc_001C9D0A: ;
    /* nop */

loc_001C9D10: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C9D44; /* jne: not equal / not zero */

loc_001C9D19: ;
    ebx = MEM32(esi + 0x4C);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0x4C) = ebx;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001C9D44; /* jge: greater or equal (signed >=) */

loc_001C9D28: ;
    goto loc_001C9D30;

    /* nop */

loc_001C9D30: ;
    ecx = MEM32(esi + 0x48);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0x4C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C9D30; /* jl: less (signed <) */

loc_001C9D44: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C9D10; /* jns: not sign (positive) */

loc_001C9D47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C9D50
 * Original: 0x001C9D50 - 0x001C9DBB (107 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C9D50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x58);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001C9D74; /* js: sign (negative) */

loc_001C9D5D: ;
    ebx = MEM32(esp + 0x14);

loc_001C9D61: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C9D71; /* je: equal / zero */

loc_001C9D6B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001C9D71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C9D6Eu); } /* indirect call */
    }

loc_001C9D71: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C9D61; /* jns: not sign (positive) */

loc_001C9D74: ;
    edx = MEM32(esi + 0x58);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001C9DB7; /* js: sign (negative) */

loc_001C9D7A: ;
    /* nop */

loc_001C9D80: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C9DB4; /* jne: not equal / not zero */

loc_001C9D89: ;
    ebx = MEM32(esi + 0x58);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0x58) = ebx;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001C9DB4; /* jge: greater or equal (signed >=) */

loc_001C9D98: ;
    goto loc_001C9DA0;

    /* nop */

loc_001C9DA0: ;
    ecx = MEM32(esi + 0x54);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0x58);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C9DA0; /* jl: less (signed <) */

loc_001C9DB4: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C9D80; /* jns: not sign (positive) */

loc_001C9DB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C9DC0
 * Original: 0x001C9DC0 - 0x001C9E2B (107 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C9DC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x58);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001C9DE4; /* js: sign (negative) */

loc_001C9DCD: ;
    ebx = MEM32(esp + 0x14);

loc_001C9DD1: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C9DE1; /* je: equal / zero */

loc_001C9DDB: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001C9DE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C9DDEu); } /* indirect call */
    }

loc_001C9DE1: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C9DD1; /* jns: not sign (positive) */

loc_001C9DE4: ;
    edx = MEM32(esi + 0x58);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001C9E27; /* js: sign (negative) */

loc_001C9DEA: ;
    /* nop */

loc_001C9DF0: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C9E24; /* jne: not equal / not zero */

loc_001C9DF9: ;
    ebx = MEM32(esi + 0x58);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0x58) = ebx;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001C9E24; /* jge: greater or equal (signed >=) */

loc_001C9E08: ;
    goto loc_001C9E10;

    /* nop */

loc_001C9E10: ;
    ecx = MEM32(esi + 0x54);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0x58);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C9E10; /* jl: less (signed <) */

loc_001C9E24: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C9DF0; /* jns: not sign (positive) */

loc_001C9E27: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C9E30
 * Original: 0x001C9E30 - 0x001C9E9B (107 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C9E30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x64);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001C9E54; /* js: sign (negative) */

loc_001C9E3D: ;
    ebx = MEM32(esp + 0x14);

loc_001C9E41: ;
    eax = MEM32(esi + 0x60);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C9E51; /* je: equal / zero */

loc_001C9E4B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001C9E51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C9E4Eu); } /* indirect call */
    }

loc_001C9E51: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C9E41; /* jns: not sign (positive) */

loc_001C9E54: ;
    edx = MEM32(esi + 0x64);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001C9E97; /* js: sign (negative) */

loc_001C9E5A: ;
    /* nop */

loc_001C9E60: ;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C9E94; /* jne: not equal / not zero */

loc_001C9E69: ;
    ebx = MEM32(esi + 0x64);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0x64) = ebx;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001C9E94; /* jge: greater or equal (signed >=) */

loc_001C9E78: ;
    goto loc_001C9E80;

    /* nop */

loc_001C9E80: ;
    ecx = MEM32(esi + 0x60);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0x64);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C9E80; /* jl: less (signed <) */

loc_001C9E94: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C9E60; /* jns: not sign (positive) */

loc_001C9E97: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C9EA0
 * Original: 0x001C9EA0 - 0x001C9F0B (107 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C9EA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x64);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001C9EC4; /* js: sign (negative) */

loc_001C9EAD: ;
    ebx = MEM32(esp + 0x14);

loc_001C9EB1: ;
    eax = MEM32(esi + 0x60);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C9EC1; /* je: equal / zero */

loc_001C9EBB: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001C9EC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C9EBEu); } /* indirect call */
    }

loc_001C9EC1: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C9EB1; /* jns: not sign (positive) */

loc_001C9EC4: ;
    edx = MEM32(esi + 0x64);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001C9F07; /* js: sign (negative) */

loc_001C9ECA: ;
    /* nop */

loc_001C9ED0: ;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C9F04; /* jne: not equal / not zero */

loc_001C9ED9: ;
    ebx = MEM32(esi + 0x64);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0x64) = ebx;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001C9F04; /* jge: greater or equal (signed >=) */

loc_001C9EE8: ;
    goto loc_001C9EF0;

    /* nop */

loc_001C9EF0: ;
    ecx = MEM32(esi + 0x60);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0x64);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C9EF0; /* jl: less (signed <) */

loc_001C9F04: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C9ED0; /* jns: not sign (positive) */

loc_001C9F07: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C9F10
 * Original: 0x001C9F10 - 0x001C9F92 (130 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C9F10: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    MEM32(ebx + 0x10) = 0;
    edi = MEM32(esi + 0xB8);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001C9F45; /* js: sign (negative) */

loc_001C9F2B: ;
    goto loc_001C9F30;

    /* nop */

loc_001C9F30: ;
    eax = MEM32(esi + 0xB4);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C9F42; /* je: equal / zero */

loc_001C9F3D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001C9F42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C9F40u); } /* indirect call */
    }

loc_001C9F42: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C9F30; /* jns: not sign (positive) */

loc_001C9F45: ;
    edx = MEM32(esi + 0xB8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001C9F8E; /* js: sign (negative) */

loc_001C9F4E: ;
    edi = edi;

loc_001C9F50: ;
    eax = MEM32(esi + 0xB4);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001C9F8B; /* jne: not equal / not zero */

loc_001C9F5C: ;
    ebx = MEM32(esi + 0xB8);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0xB8) = ebx;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001C9F8B; /* jge: greater or equal (signed >=) */

loc_001C9F71: ;
    ecx = MEM32(esi + 0xB4);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0xB8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001C9F71; /* jl: less (signed <) */

loc_001C9F8B: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C9F50; /* jns: not sign (positive) */

loc_001C9F8E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001C9FA0
 * Original: 0x001C9FA0 - 0x001CA022 (130 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001C9FA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    MEM32(ebx + 0x10) = 0;
    edi = MEM32(esi + 0xB8);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001C9FD6; /* js: sign (negative) */

loc_001C9FBB: ;
    goto loc_001C9FC0;

    /* nop */

loc_001C9FC0: ;
    eax = MEM32(esi + 0xB4);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001C9FD3; /* je: equal / zero */

loc_001C9FCD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001C9FD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001C9FD0u); } /* indirect call */
    }

loc_001C9FD3: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C9FC0; /* jns: not sign (positive) */

loc_001C9FD6: ;
    edx = MEM32(esi + 0xB8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CA01E; /* js: sign (negative) */

loc_001C9FDF: ;
    /* nop */

loc_001C9FE0: ;
    eax = MEM32(esi + 0xB4);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CA01B; /* jne: not equal / not zero */

loc_001C9FEC: ;
    ebx = MEM32(esi + 0xB8);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0xB8) = ebx;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001CA01B; /* jge: greater or equal (signed >=) */

loc_001CA001: ;
    ecx = MEM32(esi + 0xB4);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0xB8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CA001; /* jl: less (signed <) */

loc_001CA01B: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001C9FE0; /* jns: not sign (positive) */

loc_001CA01E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CA030
 * Original: 0x001CA030 - 0x001CA0B2 (130 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CA030: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    MEM32(ebx + 0x10) = 0;
    edi = MEM32(esi + 0xB8);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CA066; /* js: sign (negative) */

loc_001CA04B: ;
    goto loc_001CA050;

    /* nop */

loc_001CA050: ;
    eax = MEM32(esi + 0xB4);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA063; /* je: equal / zero */

loc_001CA05D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CA063u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CA060u); } /* indirect call */
    }

loc_001CA063: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CA050; /* jns: not sign (positive) */

loc_001CA066: ;
    edx = MEM32(esi + 0xB8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CA0AE; /* js: sign (negative) */

loc_001CA06F: ;
    /* nop */

loc_001CA070: ;
    eax = MEM32(esi + 0xB4);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CA0AB; /* jne: not equal / not zero */

loc_001CA07C: ;
    ebx = MEM32(esi + 0xB8);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0xB8) = ebx;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001CA0AB; /* jge: greater or equal (signed >=) */

loc_001CA091: ;
    ecx = MEM32(esi + 0xB4);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0xB8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CA091; /* jl: less (signed <) */

loc_001CA0AB: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CA070; /* jns: not sign (positive) */

loc_001CA0AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CA0C0
 * Original: 0x001CA0C0 - 0x001CA12A (106 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CA0C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x70);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CA0E3; /* js: sign (negative) */

loc_001CA0CC: ;
    /* nop */

loc_001CA0D0: ;
    eax = MEM32(esi + 0x6C);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA0E0; /* je: equal / zero */

loc_001CA0DA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001CA0E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CA0DDu); } /* indirect call */
    }

loc_001CA0E0: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CA0D0; /* jns: not sign (positive) */

loc_001CA0E3: ;
    edx = MEM32(esi + 0x70);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CA127; /* js: sign (negative) */

loc_001CA0E9: ;
    /* nop */

loc_001CA0F0: ;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CA124; /* jne: not equal / not zero */

loc_001CA0F9: ;
    eax = MEM32(esi + 0x70);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0x70) = eax;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001CA124; /* jge: greater or equal (signed >=) */

loc_001CA108: ;
    goto loc_001CA110;

    /* nop */

loc_001CA110: ;
    ecx = MEM32(esi + 0x6C);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0x70);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CA110; /* jl: less (signed <) */

loc_001CA124: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CA0F0; /* jns: not sign (positive) */

loc_001CA127: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CA130
 * Original: 0x001CA130 - 0x001CA20A (218 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CA130: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x7C);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CA155; /* js: sign (negative) */

loc_001CA142: ;
    eax = MEM32(esi + 0x78);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA152; /* je: equal / zero */

loc_001CA14C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001CA152u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CA14Fu); } /* indirect call */
    }

loc_001CA152: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CA142; /* jns: not sign (positive) */

loc_001CA155: ;
    edx = MEM32(esi + 0x7C);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CA197; /* js: sign (negative) */

loc_001CA15B: ;
    goto loc_001CA160;

    /* nop */

loc_001CA160: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CA194; /* jne: not equal / not zero */

loc_001CA169: ;
    ebx = MEM32(esi + 0x7C);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0x7C) = ebx;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001CA194; /* jge: greater or equal (signed >=) */

loc_001CA178: ;
    goto loc_001CA180;

    /* nop */

loc_001CA180: ;
    ecx = MEM32(esi + 0x78);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0x7C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CA180; /* jl: less (signed <) */

loc_001CA194: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CA160; /* jns: not sign (positive) */

loc_001CA197: ;
    eax = MEM32(ebp + 0x40);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CA205; /* jle: less or equal (signed <=) */

loc_001CA1A0: ;
    edx = MEM32(ebp + 0x3C);
    esi = MEM32(edx + ebx * 4);
    edi = MEM32(esi + 0x78);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x74;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CA1C8; /* js: sign (negative) */

loc_001CA1AF: ;
    /* nop */

loc_001CA1B0: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA1C5; /* je: equal / zero */

loc_001CA1B9: ;
    eax = MEM32(ebp + 0x3C);
    eax = MEM32(eax + ebx * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CA1C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CA1C2u); } /* indirect call */
    }

loc_001CA1C5: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CA1B0; /* jns: not sign (positive) */

loc_001CA1C8: ;
    edx = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CA1FD; /* js: sign (negative) */

loc_001CA1CE: ;
    edi = edi;

loc_001CA1D0: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CA1FA; /* jne: not equal / not zero */

loc_001CA1D8: ;
    eax = MEM32(esi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 4) = eax;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001CA1FA; /* jge: greater or equal (signed >=) */

loc_001CA1E7: ;
    ecx = MEM32(esi);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CA1E7; /* jl: less (signed <) */

loc_001CA1FA: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CA1D0; /* jns: not sign (positive) */

loc_001CA1FD: ;
    eax = MEM32(ebp + 0x40);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CA1A0; /* jl: less (signed <) */

loc_001CA205: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CA210
 * Original: 0x001CA210 - 0x001CA2EA (218 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CA210: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x7C);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CA235; /* js: sign (negative) */

loc_001CA222: ;
    eax = MEM32(esi + 0x78);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA232; /* je: equal / zero */

loc_001CA22C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CA232u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CA22Fu); } /* indirect call */
    }

loc_001CA232: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CA222; /* jns: not sign (positive) */

loc_001CA235: ;
    edx = MEM32(esi + 0x7C);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CA277; /* js: sign (negative) */

loc_001CA23B: ;
    goto loc_001CA240;

    /* nop */

loc_001CA240: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CA274; /* jne: not equal / not zero */

loc_001CA249: ;
    ebx = MEM32(esi + 0x7C);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0x7C) = ebx;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001CA274; /* jge: greater or equal (signed >=) */

loc_001CA258: ;
    goto loc_001CA260;

    /* nop */

loc_001CA260: ;
    ecx = MEM32(esi + 0x78);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0x7C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CA260; /* jl: less (signed <) */

loc_001CA274: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CA240; /* jns: not sign (positive) */

loc_001CA277: ;
    eax = MEM32(ebp + 0x40);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CA2E5; /* jle: less or equal (signed <=) */

loc_001CA280: ;
    edx = MEM32(ebp + 0x3C);
    esi = MEM32(edx + ebx * 4);
    edi = MEM32(esi + 0x78);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x74;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CA2A8; /* js: sign (negative) */

loc_001CA28F: ;
    /* nop */

loc_001CA290: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA2A5; /* je: equal / zero */

loc_001CA299: ;
    eax = MEM32(ebp + 0x3C);
    eax = MEM32(eax + ebx * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001CA2A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CA2A2u); } /* indirect call */
    }

loc_001CA2A5: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CA290; /* jns: not sign (positive) */

loc_001CA2A8: ;
    edx = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CA2DD; /* js: sign (negative) */

loc_001CA2AE: ;
    edi = edi;

loc_001CA2B0: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CA2DA; /* jne: not equal / not zero */

loc_001CA2B8: ;
    eax = MEM32(esi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 4) = eax;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001CA2DA; /* jge: greater or equal (signed >=) */

loc_001CA2C7: ;
    ecx = MEM32(esi);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CA2C7; /* jl: less (signed <) */

loc_001CA2DA: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CA2B0; /* jns: not sign (positive) */

loc_001CA2DD: ;
    eax = MEM32(ebp + 0x40);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CA280; /* jl: less (signed <) */

loc_001CA2E5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CA2F0
 * Original: 0x001CA2F0 - 0x001CA385 (149 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CA2F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x88);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CA31B; /* js: sign (negative) */

loc_001CA304: ;
    eax = MEM32(esi + 0x84);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA318; /* je: equal / zero */

loc_001CA311: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001CA318u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CA315u); } /* indirect call */
    }

loc_001CA318: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CA304; /* jns: not sign (positive) */

loc_001CA31B: ;
    edx = MEM32(esi + 0x88);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CA36D; /* js: sign (negative) */

loc_001CA324: ;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CA36A; /* jne: not equal / not zero */

loc_001CA330: ;
    eax = MEM32(esi + 0x88);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0x88) = eax;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001CA36A; /* jge: greater or equal (signed >=) */

loc_001CA345: ;
    goto loc_001CA350;

    /* nop */
    edi = edi;

loc_001CA350: ;
    ecx = MEM32(esi + 0x84);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0x88);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CA350; /* jl: less (signed <) */

loc_001CA36A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CA324; /* jns: not sign (positive) */

loc_001CA36D: ;
    ecx = esi;
    PUSH32(esp, 0x001CA374u); RECOMP_ABI_CALL(0x001BCFA0u, sub_001BCFA0); /* call 0x001BCFA0 */

loc_001CA374: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA381; /* je: equal / zero */

loc_001CA378: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001CA381u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CA37Eu); } /* indirect call */
    }

loc_001CA381: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CA390
 * Original: 0x001CA390 - 0x001CA411 (129 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CA390: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x94);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CA3BB; /* js: sign (negative) */

loc_001CA3A0: ;
    ebx = MEM32(esp + 0x14);

loc_001CA3A4: ;
    eax = MEM32(esi + 0x90);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA3B8; /* je: equal / zero */

loc_001CA3B1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001CA3B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CA3B5u); } /* indirect call */
    }

loc_001CA3B8: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CA3A4; /* jns: not sign (positive) */

loc_001CA3BB: ;
    edx = MEM32(esi + 0x94);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CA40D; /* js: sign (negative) */

loc_001CA3C4: ;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CA40A; /* jne: not equal / not zero */

loc_001CA3D0: ;
    ebx = MEM32(esi + 0x94);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0x94) = ebx;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001CA40A; /* jge: greater or equal (signed >=) */

loc_001CA3E5: ;
    goto loc_001CA3F0;

    /* nop */
    edi = edi;

loc_001CA3F0: ;
    ecx = MEM32(esi + 0x90);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0x94);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CA3F0; /* jl: less (signed <) */

loc_001CA40A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CA3C4; /* jns: not sign (positive) */

loc_001CA40D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CA420
 * Original: 0x001CA420 - 0x001CA4A3 (131 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CA420: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xA0);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CA458; /* js: sign (negative) */

loc_001CA430: ;
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    /* nop */

loc_001CA440: ;
    eax = MEM32(esi + 0x9C);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA454; /* je: equal / zero */

loc_001CA44D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001CA454u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CA451u); } /* indirect call */
    }

loc_001CA454: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CA440; /* jns: not sign (positive) */

loc_001CA457: ;
    POP32(esp, ebp);

loc_001CA458: ;
    edx = MEM32(esi + 0xA0);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CA49F; /* js: sign (negative) */

loc_001CA461: ;
    eax = MEM32(esi + 0x9C);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CA49C; /* jne: not equal / not zero */

loc_001CA46D: ;
    ebx = MEM32(esi + 0xA0);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0xA0) = ebx;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001CA49C; /* jge: greater or equal (signed >=) */

loc_001CA482: ;
    ecx = MEM32(esi + 0x9C);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0xA0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CA482; /* jl: less (signed <) */

loc_001CA49C: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CA461; /* jns: not sign (positive) */

loc_001CA49F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CA4B0
 * Original: 0x001CA4B0 - 0x001CA533 (131 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA4B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CA4B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xAC);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CA4E8; /* js: sign (negative) */

loc_001CA4C0: ;
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    /* nop */

loc_001CA4D0: ;
    eax = MEM32(esi + 0xA8);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA4E4; /* je: equal / zero */

loc_001CA4DD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001CA4E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CA4E1u); } /* indirect call */
    }

loc_001CA4E4: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CA4D0; /* jns: not sign (positive) */

loc_001CA4E7: ;
    POP32(esp, ebp);

loc_001CA4E8: ;
    edx = MEM32(esi + 0xAC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CA52F; /* js: sign (negative) */

loc_001CA4F1: ;
    eax = MEM32(esi + 0xA8);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CA52C; /* jne: not equal / not zero */

loc_001CA4FD: ;
    ebx = MEM32(esi + 0xAC);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0xAC) = ebx;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001CA52C; /* jge: greater or equal (signed >=) */

loc_001CA512: ;
    ecx = MEM32(esi + 0xA8);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0xAC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CA512; /* jl: less (signed <) */

loc_001CA52C: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CA4F1; /* jns: not sign (positive) */

loc_001CA52F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CA540
 * Original: 0x001CA540 - 0x001CA5A4 (100 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CA540: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO16(eax, MEM16(esp + 0x18));
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x10);
    edx = esp + 8;
    MEM16(esp + 8) = LO16(eax);
    eax = MEM32(ecx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0x001CA56Fu); RECOMP_ABI_CALL(0x001C9FA0u, sub_001C9FA0); /* call 0x001C9FA0 */

loc_001CA56F: ;
    eax = MEM32(esi + 0x68);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA587; /* je: equal / zero */

loc_001CA579: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CA584u); RECOMP_ABI_CALL(0x001CB0C0u, sub_001CB0C0); /* call 0x001CB0C0 */

loc_001CA584: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CA587: ;
    eax = MEM32(edi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA59C; /* je: equal / zero */

loc_001CA58E: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CA599u); RECOMP_ABI_CALL(0x001CB0C0u, sub_001CB0C0); /* call 0x001CB0C0 */

loc_001CA599: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CA59C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CA5B0
 * Original: 0x001CA5B0 - 0x001CA63F (143 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA5B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CA5B0: ;
    eax = MEM32(ecx + 0x14);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x14) = eax;
    if ((_fa != 0)) goto loc_001CA639; /* jne: not equal / not zero */

loc_001CA5BC: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x20);
    SET_LO16(eax, MEM16(ebp + 0x60));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    esi = MEM32(edi + 0x20);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 0x60));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001CA5DF; /* jae: above or equal (unsigned >=) */

loc_001CA5DD: ;
    eax = edx;

loc_001CA5DF: ;
    edx = MEM32(esp + 0x34);
    eax = ZX16(LO16(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x14) = eax;
    eax = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0x001CA608u); RECOMP_ABI_CALL(0x001CA030u, sub_001CA030); /* call 0x001CA030 */

loc_001CA608: ;
    eax = MEM32(esi + 0x68);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA620; /* je: equal / zero */

loc_001CA612: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CA61Du); RECOMP_ABI_CALL(0x001CB130u, sub_001CB130); /* call 0x001CB130 */

loc_001CA61D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CA620: ;
    eax = MEM32(ebp + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA635; /* je: equal / zero */

loc_001CA627: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001CA632u); RECOMP_ABI_CALL(0x001CB130u, sub_001CB130); /* call 0x001CB130 */

loc_001CA632: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CA635: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001CA639: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001CA640
 * Original: 0x001CA640 - 0x001CA64B (11 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CA640: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA64A; /* je: equal / zero */

loc_001CA644: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001CA64Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CA648u); } /* indirect call */
    }

loc_001CA64A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CA650
 * Original: 0x001CA650 - 0x001CA678 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CA650: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001CA658u); RECOMP_ABI_CALL(0x0019FDA0u, sub_0019FDA0); /* call 0x0019FDA0 */

loc_001CA658: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CA672; /* je: equal / zero */

loc_001CA65F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1D);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001CA672u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CA66Fu); } /* indirect call */
    }

loc_001CA672: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CA680
 * Original: 0x001CA680 - 0x001CA77F (255 bytes, 83 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CA680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CA680: ;
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
    eax = MEM32(esi + 0x10);
    ebx = MEM32(esi + 0xC);
    ecx = MEM32(ebx + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001CA6ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CA6A9u); } /* indirect call */
    }

loc_001CA6AC: ;
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001CA6BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CA6BBu); } /* indirect call */
    }

loc_001CA6BE: ;
    xmm1 = XMM_MEM(edi + 0x10); /* movaps */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    xmm2 = XMM_MEM(esp + 0x30); /* movaps */
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    xmm2 = XMM_SUB(xmm2, xmm0); /* subps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = XMM_MEM(edi); /* movaps */
    ecx = esp + 0x1C;
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    MEM32(esp + 0x78) = eax;
    ecx = esp + 0x40;
    eax = esp + 0x6C;
    MEM32(esp + 0x80) = ecx;
    ecx = MEM32(esi + 8);
    MEM32(esp + 0x74) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    XMM_STORE(esp + 0x48, xmm0); /* movaps */
    XMM_STORE(esp + 0x58, xmm1); /* movaps */
    MEM16(esp + 0x74) = LO16(edi);
    MEM32(esp + 0x78) = esi;
    MEM32(esp + 0x8C) = edi;
    MEM32(esp + 0x90) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CA744u); RECOMP_ABI_CALL(0x001C9F10u, sub_001C9F10); /* call 0x001C9F10 */

loc_001CA744: ;
    eax = MEM32(ebx + 0x68);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA75C; /* je: equal / zero */

loc_001CA74E: ;
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CA759u); RECOMP_ABI_CALL(0x001CB050u, sub_001CB050); /* call 0x001CB050 */

loc_001CA759: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CA75C: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(eax + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x68), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA773; /* je: equal / zero */

loc_001CA765: ;
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CA770u); RECOMP_ABI_CALL(0x001CB050u, sub_001CB050); /* call 0x001CB050 */

loc_001CA770: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CA773: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO16(eax, 0); /* xor self */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001CA780
 * Original: 0x001CA780 - 0x001CA798 (24 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA780(void)
{

loc_001CA780: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2F94E8;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CA7A0
 * Original: 0x001CA7A0 - 0x001CA7F8 (88 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CA7A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x20);
    ebx = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x20);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001CA7C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CA7BFu); } /* indirect call */
    }

loc_001CA7C2: ;
    MEM16(eax + 4) = 0x18;
    ebx = MEM32(ebx + 8);
    MEM32(eax) = 0x2F94C8;
    SET_LO16(ecx, MEM16(edi + 0x60));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 0x60));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(ecx) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001CA7E2; /* jae: above or equal (unsigned >=) */

loc_001CA7E0: ;
    ecx = edx;

loc_001CA7E2: ;
    ecx = ZX16(LO16(ecx));
    MEM32(eax + 0x10) = edi;
    POP32(esp, edi);
    MEM32(eax + 0xC) = esi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0x14) = ecx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001CA800
 * Original: 0x001CA800 - 0x001CAA45 (581 bytes, 195 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CA800(void)
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

loc_001CA800: ;
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
    ebx = ecx;
    edx = MEM32(ebx + 0xA4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFA (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = ebx;
    if (CMP_G(_fas, _fbs)) goto loc_001CA9D5; /* jg: greater (signed >) */

loc_001CA824: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA839; /* je: equal / zero */

loc_001CA82E: ;
    edi = edi;

loc_001CA830: ;
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CA830; /* jne: not equal / not zero */

loc_001CA839: ;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(eax + 0x20);
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x2C) = esi;
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001CA859; /* je: equal / zero */

loc_001CA84C: ;
    /* nop */

loc_001CA850: ;
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CA850; /* jne: not equal / not zero */

loc_001CA859: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(eax + 0x20);
    MEM32(esp + 0x1C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001CA870; /* jne: not equal / not zero */

loc_001CA864: ;
    ecx = ebx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CA870u); RECOMP_ABI_CALL(0x001BDFA0u, sub_001BDFA0); /* call 0x001BDFA0 */

loc_001CA870: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = ebx + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CA882u); RECOMP_ABI_CALL(0x001CF000u, sub_001CF000); /* call 0x001CF000 */

loc_001CA882: ;
    ecx = MEM32(esi + 0x3C);
    esi = MEM32(ebp + 0x14);
    edx = MEM32(ecx);
    ebx = eax;
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001CA895u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CA892u); } /* indirect call */
    }

loc_001CA895: ;
    ecx = MEM32(esp + 0x1C);
    ecx = MEM32(ecx + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001CA8A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CA8A4u); } /* indirect call */
    }

loc_001CA8A7: ;
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    xmm2 = XMM_MEM(esp + 0x40); /* movaps */
    xmm1 = XMM_MEM(esi + 0x10); /* movaps */
    eax = MEM32(ebp + 8);
    xmm2 = XMM_SUB(xmm2, xmm0); /* subps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    ecx = esp + 0x20;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA8EF; /* je: equal / zero */

loc_001CA8E6: ;
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CA8E6; /* jne: not equal / not zero */

loc_001CA8EF: ;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(edi + 0xC);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001CA909; /* je: equal / zero */

loc_001CA8FE: ;
    edi = edi;

loc_001CA900: ;
    eax = edx;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CA900; /* jne: not equal / not zero */

loc_001CA909: ;
    eax = MEM32(eax + 0x20);
    fp_push(MEMF(eax + 0x4C)); /* fld float */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    edx = MEM32(esp + 0x18);
    MEM16(esp + 0x5C) = LO16(ebx);
    MEM32(esp + 0x68) = edi;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEM32(esp + 0x7C) = 0;
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(esp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    ecx = MEM32(ebp + 8);
    MEM32(esp + 0x64) = ecx;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x24);
    fp_push(MEMF(esi + 0xC)); /* fld float */
    xmm0 = XMM_MEM(esi); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x70) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x74) = ecx;
    ecx = esp + 0x5C;
    MEM32(esp + 0x78) = edx;
    edx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x68) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CA98Bu); RECOMP_ABI_CALL(0x001C9F10u, sub_001C9F10); /* call 0x001C9F10 */

loc_001CA98B: ;
    edi = MEM32(esp + 0x34);
    eax = MEM32(edi + 0x68);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA9A7; /* je: equal / zero */

loc_001CA999: ;
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CA9A4u); RECOMP_ABI_CALL(0x001CB050u, sub_001CB050); /* call 0x001CB050 */

loc_001CA9A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CA9A7: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CA9C4; /* je: equal / zero */

loc_001CA9B2: ;
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CA9BDu); RECOMP_ABI_CALL(0x001CB050u, sub_001CB050); /* call 0x001CB050 */

loc_001CA9BD: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CA9C4: ;
    _fa = (uint32_t)(MEM32(esp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x7C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CA9E2; /* jne: not equal / not zero */

loc_001CA9CB: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001CA9D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CA9D2u); } /* indirect call */
    }

loc_001CA9D5: ;
    SET_LO16(eax, LO16(eax) | 0xFFFF);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_001CA9E2: ;
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    edx = MEM32(ebp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x30)); /* fmul dword ptr [edx + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E2C30)); /* fmul dword ptr [0x2e2c30] */
    MEMF(eax + 4) = (float)fp_top(); /* fst */
    eax = MEM32(esp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xC)); /* fadd dword ptr [esi + 0xc] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 0x3C);
    edx = MEM32(edi + 0x3C);
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x2C)); /* fadd dword ptr [edx + 0x2c] */
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2F94F0)); /* fadd dword ptr [0x2f94f0] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) / fp_top()); /* fdivr dword ptr [0x2dc08c] */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC08C)); /* fadd dword ptr [0x2dc08c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC3C4)); /* fmul dword ptr [0x2dc3c4] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO16(eax, LO16(ebx));
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
 * sub_001CAA50
 * Original: 0x001CAA50 - 0x001CAAF6 (166 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAA50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CAA50: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    ebx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1C);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM16(esp + 0x18) = LO16(ebp);
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0x001CAA82u); RECOMP_ABI_CALL(0x001C9FA0u, sub_001C9FA0); /* call 0x001C9FA0 */

loc_001CAA82: ;
    eax = MEM32(edi + 0x68);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CAA9A; /* je: equal / zero */

loc_001CAA8C: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CAA97u); RECOMP_ABI_CALL(0x001CB0C0u, sub_001CB0C0); /* call 0x001CB0C0 */

loc_001CAA97: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CAA9A: ;
    eax = MEM32(ebx + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CAAAF; /* je: equal / zero */

loc_001CAAA1: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001CAAACu); RECOMP_ABI_CALL(0x001CB0C0u, sub_001CB0C0); /* call 0x001CB0C0 */

loc_001CAAAC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CAAAF: ;
    edi = esi + 0x10;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x001CAABAu); RECOMP_ABI_CALL(0x001CEE10u, sub_001CEE10); /* call 0x001CEE10 */

loc_001CAABA: ;
    eax = MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CAAEC; /* jne: not equal / not zero */

loc_001CAAC4: ;
    eax = MEM32(esi + 8);
    ebx = (uint32_t)(int32_t)SMEM8(eax + 0x12C);
    PUSH32(esp, edi);
    ecx = esp + 0x2C;
    MEM8(eax + 0x12C) = 0;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x001CAAE3u); RECOMP_ABI_CALL(0x001BD750u, sub_001BD750); /* call 0x001BD750 */

loc_001CAAE3: ;
    edx = MEM32(esi + 8);
    MEM8(edx + 0x12C) = LO8(ebx);

loc_001CAAEC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CAB00
 * Original: 0x001CAB00 - 0x001CAB17 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAB00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CAB00: ;
    eax = ZX16(MEM16(esp + 4));
    edx = MEM32(ecx + 0x30);
    eax = ZX8(MEM8(edx + eax));
    edx = MEM32(ecx + 0x44);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CAB20
 * Original: 0x001CAB20 - 0x001CAB3A (26 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAB20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CAB20: ;
    eax = ZX16(MEM16(esp + 4));
    edx = MEM32(ecx + 0x30);
    eax = ZX8(MEM8(edx + eax));
    edx = MEM32(ecx + 0xA0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CAB40
 * Original: 0x001CAB40 - 0x001CAB8F (79 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CAB40: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CAB8A; /* jle: less or equal (signed <=) */

loc_001CAB4D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);

loc_001CAB52: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM8(edi + eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CAB81; /* je: equal / zero */

loc_001CAB5A: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CAB75; /* jne: not equal / not zero */

loc_001CAB6A: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CAB72u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001CAB72: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CAB75: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    MEM16(eax + edx * 2) = LO16(edi);
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001CAB81: ;
    eax = MEM32(ebx + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CAB52; /* jl: less (signed <) */

loc_001CAB89: ;
    POP32(esp, esi);

loc_001CAB8A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CAB90
 * Original: 0x001CAB90 - 0x001CAB98 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CAB90: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001CAB40(); return; /* tail jmp 0x001CAB40 */

}

/**
 * sub_001CABA0
 * Original: 0x001CABA0 - 0x001CAC6C (204 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CABA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CABA0: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax);
    edx = MEM32(eax);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((_fas < 0)) goto loc_001CABE7; /* js: sign (negative) */

loc_001CABB4: ;
    esi = eax + 1;
    goto loc_001CABC0;

    /* nop */

loc_001CABC0: ;
    eax = ZX16(MEM16(edx + 0x20));
    edi = MEM32(ecx + 0x30);
    eax = ZX8(MEM8(eax + edi));
    ebx = MEM32(ecx + 0x44);
    xmm0 = XMM_MEM(edx); /* movaps */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_MEM(edx + 0x10); /* movaps */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    if ((_fa != 0)) goto loc_001CABC0; /* jne: not equal / not zero */

loc_001CABE7: ;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CAC63; /* jne: not equal / not zero */

loc_001CABEC: ;
    edi = MEM32(esp + 0x24);
    ebx = MEM32(esp + 0x28);
    esi = MEM32(edi + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x20);
    SET_LO16(eax, MEM16(ebp + 0x60));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 0x60));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001CAC0C; /* jae: above or equal (unsigned >=) */

loc_001CAC0A: ;
    eax = edx;

loc_001CAC0C: ;
    edx = ZX16(LO16(eax));
    eax = MEM32(esp + 0x34);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = edx;
    edx = esp + 0x10;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x001CAC35u); RECOMP_ABI_CALL(0x001CA030u, sub_001CA030); /* call 0x001CA030 */

loc_001CAC35: ;
    eax = MEM32(esi + 0x68);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CAC4D; /* je: equal / zero */

loc_001CAC3F: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CAC4Au); RECOMP_ABI_CALL(0x001CB130u, sub_001CB130); /* call 0x001CB130 */

loc_001CAC4A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CAC4D: ;
    eax = MEM32(ebp + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CAC62; /* je: equal / zero */

loc_001CAC54: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001CAC5Fu); RECOMP_ABI_CALL(0x001CB130u, sub_001CB130); /* call 0x001CB130 */

loc_001CAC5F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CAC62: ;
    POP32(esp, ebp);

loc_001CAC63: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001CAC70
 * Original: 0x001CAC70 - 0x001CAC88 (24 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAC70(void)
{

loc_001CAC70: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2F94F4;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CAC90
 * Original: 0x001CAC90 - 0x001CAD46 (182 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CAC90: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24607E);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = MEM32(esi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 2;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001CACDD; /* js: sign (negative) */

loc_001CACC0: ;
    edx = MEM32(esi + 0x90);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001CACDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CACDAu); } /* indirect call */
    }

loc_001CACDD: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 1;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001CAD03; /* js: sign (negative) */

loc_001CACE9: ;
    edx = MEM32(esi + 0x34);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001CAD03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CAD00u); } /* indirect call */
    }

loc_001CAD03: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001CAD26; /* js: sign (negative) */

loc_001CAD0F: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001CAD26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CAD23u); } /* indirect call */
    }

loc_001CAD26: ;
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001CAD35u); RECOMP_ABI_CALL(0x001BCCB0u, sub_001BCCB0); /* call 0x001BCCB0 */

loc_001CAD35: ;
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
 * sub_001CAD50
 * Original: 0x001CAD50 - 0x001CADBB (107 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CAD50: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2460A3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 8) = esi;
    MEM32(esi) = 0x2F94FC;
    eax = MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001CAD98; /* je: equal / zero */

loc_001CAD87: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0xB;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x001CAD98u); RECOMP_ABI_CALL(0x001BD750u, sub_001BD750); /* call 0x001BD750 */

loc_001CAD98: ;
    ecx = esi + 0x10;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x001CADA5u); RECOMP_ABI_CALL(0x001CAC90u, sub_001CAC90); /* call 0x001CAC90 */

loc_001CADA5: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = 0x2DC684;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CADC0
 * Original: 0x001CADC0 - 0x001CAE36 (118 bytes, 34 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CADC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CADC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2460A3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    edi = esi + 0x10;
    ecx = edi;
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x2F94FC;
    PUSH32(esp, 0x001CADF6u); RECOMP_ABI_CALL(0x001CF180u, sub_001CF180); /* call 0x001CF180 */

loc_001CADF6: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM8(esp + 0x18) = 1;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x001CAE0Eu); RECOMP_ABI_CALL(0x001BCD60u, sub_001BCD60); /* call 0x001BCD60 */

loc_001CAE0E: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x001CAE1Au); RECOMP_ABI_CALL(0x001BCDB0u, sub_001BCDB0); /* call 0x001BCDB0 */

loc_001CAE1A: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0xC) = 1;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001CAE40
 * Original: 0x001CAE40 - 0x001CAE68 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CAE40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001CAE48u); RECOMP_ABI_CALL(0x001CAD50u, sub_001CAD50); /* call 0x001CAD50 */

loc_001CAE48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CAE62; /* je: equal / zero */

loc_001CAE4F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1D);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001CAE62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CAE5Fu); } /* indirect call */
    }

loc_001CAE62: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CAE70
 * Original: 0x001CAE70 - 0x001CAEDD (109 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAE70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CAE70: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2460BB);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x1C);
    ebx = MEM32(ecx + 0x20);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x20);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0x120);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001CAEAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CAEA7u); } /* indirect call */
    }

loc_001CAEAA: ;
    MEM16(eax + 4) = 0x120;
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x001CAEC9u); RECOMP_ABI_CALL(0x001CADC0u, sub_001CADC0); /* call 0x001CADC0 */

loc_001CAEC9: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001CAEE0
 * Original: 0x001CAEE0 - 0x001CAF2F (79 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CAEE0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    eax = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20);
    SET_LO8(ecx, MEM8(eax + 0x40));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CAF24; /* jne: not equal / not zero */

loc_001CAEF6: ;
    SET_LO8(ecx, MEM8(esi + 0x40));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CAF24; /* jne: not equal / not zero */

loc_001CAEFD: ;
    eax = MEM32(eax + 0x3C);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001CAF07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CAF04u); } /* indirect call */
    }

loc_001CAF07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CAF24; /* je: equal / zero */

loc_001CAF0C: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001CAF14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CAF11u); } /* indirect call */
    }

loc_001CAF14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CAF24; /* je: equal / zero */

loc_001CAF19: ;
    eax = MEM32(esp + 8);
    MEM8(eax) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001CAF24: ;
    eax = MEM32(esp + 8);
    MEM8(eax) = 1;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001CAF30
 * Original: 0x001CAF30 - 0x001CAFB5 (133 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CAF30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x84);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CAF56; /* js: sign (negative) */

loc_001CAF3F: ;
    /* nop */

loc_001CAF40: ;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CAF53; /* je: equal / zero */

loc_001CAF4D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001CAF53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CAF50u); } /* indirect call */
    }

loc_001CAF53: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CAF40; /* jns: not sign (positive) */

loc_001CAF56: ;
    eax = MEM32(esi + 0x90);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CAF84; /* jle: less or equal (signed <=) */

loc_001CAF62: ;
    eax = MEM32(esi + 0x8C);
    eax = MEM32(eax + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CAF79; /* je: equal / zero */

loc_001CAF6F: ;
    edx = MEM32(eax + 8);
    ecx = eax + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001CAF79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CAF76u); } /* indirect call */
    }

loc_001CAF79: ;
    eax = MEM32(esi + 0x90);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CAF62; /* jl: less (signed <) */

loc_001CAF84: ;
    eax = MEM32(esi + 0x9C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CAFB2; /* jle: less or equal (signed <=) */

loc_001CAF90: ;
    eax = MEM32(esi + 0x98);
    eax = MEM32(eax + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CAFA7; /* je: equal / zero */

loc_001CAF9D: ;
    edx = MEM32(eax + 8);
    ecx = eax + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001CAFA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CAFA4u); } /* indirect call */
    }

loc_001CAFA7: ;
    eax = MEM32(esi + 0x9C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CAF90; /* jl: less (signed <) */

loc_001CAFB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CAFC0
 * Original: 0x001CAFC0 - 0x001CB045 (133 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CAFC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x84);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CAFE6; /* js: sign (negative) */

loc_001CAFCF: ;
    /* nop */

loc_001CAFD0: ;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CAFE3; /* je: equal / zero */

loc_001CAFDD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CAFE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CAFE0u); } /* indirect call */
    }

loc_001CAFE3: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CAFD0; /* jns: not sign (positive) */

loc_001CAFE6: ;
    eax = MEM32(esi + 0x90);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CB014; /* jle: less or equal (signed <=) */

loc_001CAFF2: ;
    eax = MEM32(esi + 0x8C);
    eax = MEM32(eax + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CB009; /* je: equal / zero */

loc_001CAFFF: ;
    edx = MEM32(eax + 8);
    ecx = eax + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CB009u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CB006u); } /* indirect call */
    }

loc_001CB009: ;
    eax = MEM32(esi + 0x90);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CAFF2; /* jl: less (signed <) */

loc_001CB014: ;
    eax = MEM32(esi + 0x9C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CB042; /* jle: less or equal (signed <=) */

loc_001CB020: ;
    eax = MEM32(esi + 0x98);
    eax = MEM32(eax + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CB037; /* je: equal / zero */

loc_001CB02D: ;
    edx = MEM32(eax + 8);
    ecx = eax + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CB037u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CB034u); } /* indirect call */
    }

loc_001CB037: ;
    eax = MEM32(esi + 0x9C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CB020; /* jl: less (signed <) */

loc_001CB042: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CB050
 * Original: 0x001CB050 - 0x001CB0BB (107 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB050: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    MEM32(ebx + 0x10) = esi;
    edi = MEM32(esi + 0x68);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CB076; /* js: sign (negative) */

loc_001CB064: ;
    eax = MEM32(esi + 0x64);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CB073; /* je: equal / zero */

loc_001CB06E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001CB073u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CB071u); } /* indirect call */
    }

loc_001CB073: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CB064; /* jns: not sign (positive) */

loc_001CB076: ;
    edx = MEM32(esi + 0x68);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CB0B7; /* js: sign (negative) */

loc_001CB07C: ;
    /* nop */

loc_001CB080: ;
    eax = MEM32(esi + 0x64);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CB0B4; /* jne: not equal / not zero */

loc_001CB089: ;
    ebx = MEM32(esi + 0x68);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0x68) = ebx;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001CB0B4; /* jge: greater or equal (signed >=) */

loc_001CB098: ;
    goto loc_001CB0A0;

    /* nop */

loc_001CB0A0: ;
    ecx = MEM32(esi + 0x64);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0x68);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CB0A0; /* jl: less (signed <) */

loc_001CB0B4: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CB080; /* jns: not sign (positive) */

loc_001CB0B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CB0C0
 * Original: 0x001CB0C0 - 0x001CB12B (107 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB0C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    MEM32(ebx + 0x10) = esi;
    edi = MEM32(esi + 0x68);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CB0E7; /* js: sign (negative) */

loc_001CB0D4: ;
    eax = MEM32(esi + 0x64);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CB0E4; /* je: equal / zero */

loc_001CB0DE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001CB0E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CB0E1u); } /* indirect call */
    }

loc_001CB0E4: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CB0D4; /* jns: not sign (positive) */

loc_001CB0E7: ;
    edx = MEM32(esi + 0x68);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CB127; /* js: sign (negative) */

loc_001CB0ED: ;
    /* nop */

loc_001CB0F0: ;
    eax = MEM32(esi + 0x64);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CB124; /* jne: not equal / not zero */

loc_001CB0F9: ;
    ebx = MEM32(esi + 0x68);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0x68) = ebx;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001CB124; /* jge: greater or equal (signed >=) */

loc_001CB108: ;
    goto loc_001CB110;

    /* nop */

loc_001CB110: ;
    ecx = MEM32(esi + 0x64);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0x68);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CB110; /* jl: less (signed <) */

loc_001CB124: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CB0F0; /* jns: not sign (positive) */

loc_001CB127: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CB130
 * Original: 0x001CB130 - 0x001CB19B (107 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB130: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    MEM32(ebx + 0x10) = esi;
    edi = MEM32(esi + 0x68);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CB157; /* js: sign (negative) */

loc_001CB144: ;
    eax = MEM32(esi + 0x64);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CB154; /* je: equal / zero */

loc_001CB14E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CB154u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CB151u); } /* indirect call */
    }

loc_001CB154: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CB144; /* jns: not sign (positive) */

loc_001CB157: ;
    edx = MEM32(esi + 0x68);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CB197; /* js: sign (negative) */

loc_001CB15D: ;
    /* nop */

loc_001CB160: ;
    eax = MEM32(esi + 0x64);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CB194; /* jne: not equal / not zero */

loc_001CB169: ;
    ebx = MEM32(esi + 0x68);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0x68) = ebx;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001CB194; /* jge: greater or equal (signed >=) */

loc_001CB178: ;
    goto loc_001CB180;

    /* nop */

loc_001CB180: ;
    ecx = MEM32(esi + 0x64);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0x68);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CB180; /* jl: less (signed <) */

loc_001CB194: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CB160; /* jns: not sign (positive) */

loc_001CB197: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CB1A0
 * Original: 0x001CB1A0 - 0x001CB1A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB1A0(void)
{

loc_001CB1A0: ;
    eax = 0x440EE8;
    esp += 4; return; /* ret */

}

/**
 * sub_001CB1B0
 * Original: 0x001CB1B0 - 0x001CB1BC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB1B0(void)
{

loc_001CB1B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001CB1B8u); RECOMP_ABI_CALL(0x001CB5A0u, sub_001CB5A0); /* call 0x001CB5A0 */

loc_001CB1B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CB1C0
 * Original: 0x001CB1C0 - 0x001CB1CC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB1C0(void)
{

loc_001CB1C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001CB1C8u); RECOMP_ABI_CALL(0x00203BE0u, sub_00203BE0); /* call 0x00203BE0 */

loc_001CB1C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CB1D0
 * Original: 0x001CB1D0 - 0x001CB1D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB1D0(void)
{

loc_001CB1D0: ;
    eax = 0x440F10;
    esp += 4; return; /* ret */

}

/**
 * sub_001CB1E0
 * Original: 0x001CB1E0 - 0x001CB201 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB1E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB1E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001CB1E8u); RECOMP_ABI_CALL(0x00203BE0u, sub_00203BE0); /* call 0x00203BE0 */

loc_001CB1E8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0xC) = LO8(eax);
    MEM8(esi + 0x14) = LO8(eax);
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x10) = 0x42C80000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CB210
 * Original: 0x001CB210 - 0x001CB21F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB210(void)
{

loc_001CB210: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CB21Eu); RECOMP_ABI_CALL(0x001C2410u, sub_001C2410); /* call 0x001C2410 */

loc_001CB21E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CB220
 * Original: 0x001CB220 - 0x001CB22F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB220(void)
{

loc_001CB220: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CB22Eu); RECOMP_ABI_CALL(0x001C2550u, sub_001C2550); /* call 0x001C2550 */

loc_001CB22E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CB230
 * Original: 0x001CB230 - 0x001CB236 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB230(void)
{

loc_001CB230: ;
    eax = 0x440F38;
    esp += 4; return; /* ret */

}

/**
 * sub_001CB240
 * Original: 0x001CB240 - 0x001CB291 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB240: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2460DB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0x27);
    PUSH32(esp, 0x34);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001CB265u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CB262u); } /* indirect call */
    }

loc_001CB265: ;
    MEM16(eax + 4) = 0x34;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001CB282u); RECOMP_ABI_CALL(0x001C2710u, sub_001C2710); /* call 0x001C2710 */

loc_001CB282: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CB2A0
 * Original: 0x001CB2A0 - 0x001CB2F5 (85 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB2A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB2A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246101);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    MEM32(esp + 8) = esi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001CB2E4; /* je: equal / zero */

loc_001CB2CA: ;
    ecx = esi;
    PUSH32(esp, 0x001CB2D1u); RECOMP_ABI_CALL(0x00203BE0u, sub_00203BE0); /* call 0x00203BE0 */

loc_001CB2D1: ;
    MEM8(esi + 0xC) = LO8(ebx);
    MEM32(esi + 0x10) = 0x42C80000;
    MEM8(esi + 0x14) = LO8(ebx);
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;

loc_001CB2E4: ;
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
 * sub_001CB300
 * Original: 0x001CB300 - 0x001CB38A (138 bytes, 56 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CB300: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x34);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001CB32C; /* jle: less or equal (signed <=) */

loc_001CB310: ;
    edi = MEM32(ecx + 0x30);
    ebx = MEM32(esp + 0x20);
    edx = edi;
    /* nop */

loc_001CB320: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CB340; /* je: equal / zero */

loc_001CB324: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CB320; /* jl: less (signed <) */

loc_001CB32C: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001CB340: ;
    ebp = MEM32(ecx + 0x34);
    edx = MEM32(edi + eax * 8);
    edi = MEM32(edi + eax * 8 + 4);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x10) = edx;
    MEM32(ecx + 0x34) = ebp;
    edx = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001CB37A; /* jge: greater or equal (signed >=) */

loc_001CB35A: ;
    /* nop */

loc_001CB360: ;
    eax = MEM32(ecx + 0x30);
    esi = MEM32(eax + edx * 8 + 8);
    eax = eax + edx * 8;
    MEM32(eax) = esi;
    esi = MEM32(eax + 0xC);
    MEM32(eax + 4) = esi;
    eax = MEM32(ecx + 0x34);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CB360; /* jl: less (signed <) */

loc_001CB37A: ;
    eax = MEM32(esp + 0x1C);
    MEM32(eax) = edi;
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
 * sub_001CB390
 * Original: 0x001CB390 - 0x001CB413 (131 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CB390: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    MEM32(ebx + 4) = eax;
    SET_LO8(ecx, MEM8(edi + 0x24));
    MEM8(ebx + 8) = LO8(ecx);
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(edi + 0x34);
    esi = ebx + 0xC;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CB3CB; /* jge: greater or equal (signed >=) */

loc_001CB3B7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CB3BF; /* jl: less (signed <) */

loc_001CB3BD: ;
    eax = ecx;

loc_001CB3BF: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CB3C8u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001CB3C8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CB3CB: ;
    ecx = MEM32(edi + 0x34);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CB408; /* jle: less or equal (signed <=) */

loc_001CB3D4: ;
    PUSH32(esp, ebp);

loc_001CB3D5: ;
    edx = MEM32(edi + 0x30);
    ebx = MEM32(esi + 4);
    ebp = MEM32(esi);
    ecx = edx + eax * 8;
    edx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    MEM32(ebp + ebx * 8) = edx;
    MEM32(ebp + ebx * 8 + 4) = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edi + 0x34);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CB3D5; /* jl: less (signed <) */

loc_001CB3F8: ;
    eax = MEM32(edi + 0x28);
    ecx = MEM32(esp + 0x14);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001CB408: ;
    edx = MEM32(edi + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx) = edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CB420
 * Original: 0x001CB420 - 0x001CB488 (104 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB420: ;
    edx = MEM32(ecx + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001CB433; /* je: equal / zero */

loc_001CB430: ;
    MEM32(ecx + 0x28) = eax;

loc_001CB433: ;
    eax = MEM32(ecx + 0x38);
    ebx = MEM32(esi + 0x10);
    edi = ecx + 0x30;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CB459; /* jge: greater or equal (signed >=) */

loc_001CB445: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CB44D; /* jl: less (signed <) */

loc_001CB44B: ;
    eax = ebx;

loc_001CB44D: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CB456u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001CB456: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CB459: ;
    MEM32(edi + 4) = ebx;
    ecx = MEM32(esi + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CB482; /* jle: less or equal (signed <=) */

loc_001CB465: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + eax * 8);
    ebx = MEM32(edi);
    ecx = ecx + eax * 8;
    ecx = MEM32(ecx + 4);
    MEM32(ebx + eax * 8) = edx;
    MEM32(ebx + eax * 8 + 4) = ecx;
    ecx = MEM32(esi + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CB465; /* jl: less (signed <) */

loc_001CB482: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CB490
 * Original: 0x001CB490 - 0x001CB4E5 (85 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB490: ;
    edx = MEM32(ecx + 0x34);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001CB4AF; /* jle: less or equal (signed <=) */

loc_001CB4A0: ;
    esi = MEM32(ecx + 0x30);

loc_001CB4A3: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CB4DF; /* je: equal / zero */

loc_001CB4A7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CB4A3; /* jl: less (signed <) */

loc_001CB4AF: ;
    eax = MEM32(ecx + 0x38);
    edi = MEM32(esp + 0x14);
    esi = ecx + 0x30;
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CB4D0; /* jne: not equal / not zero */

loc_001CB4C5: ;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CB4CDu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001CB4CD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CB4D0: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    MEM32(edx + ecx * 8) = ebx;
    MEM32(edx + ecx * 8 + 4) = edi;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001CB4DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CB4F0
 * Original: 0x001CB4F0 - 0x001CB58A (154 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB4F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246123);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    MEM16(esi + 6) = 1;
    edx = MEM32(esp + 0x1C);
    MEM32(esi) = 0x2F8430;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    ecx = (uint32_t)(int32_t)SMEM8(edx + 8);
    edi = MEM32(edx + 4);
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = 0x80000000u;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM8(esp + 0x14) = 1;
    MEM32(esi + 0x2C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001CB56D; /* je: equal / zero */

loc_001CB569: ;
    MEM16(ecx + 6) = MEM16(ecx + 6) + 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_001CB56D: ;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001CB575u); RECOMP_ABI_CALL(0x001CB420u, sub_001CB420); /* call 0x001CB420 */

loc_001CB575: ;
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
 * sub_001CB590
 * Original: 0x001CB590 - 0x001CB596 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB590(void)
{

loc_001CB590: ;
    eax = 0x440F88;
    esp += 4; return; /* ret */

}

/**
 * sub_001CB5A0
 * Original: 0x001CB5A0 - 0x001CB5BB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB5A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB5A0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = 0x80000000u;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM8(eax + 8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001CB5C0
 * Original: 0x001CB5C0 - 0x001CB5C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB5C0(void)
{

loc_001CB5C0: ;
    eax = 0x440FB0;
    esp += 4; return; /* ret */

}

/**
 * sub_001CB5D0
 * Original: 0x001CB5D0 - 0x001CB5E6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB5D0(void)
{

loc_001CB5D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001CB5D8u); RECOMP_ABI_CALL(0x001CB5A0u, sub_001CB5A0); /* call 0x001CB5A0 */

loc_001CB5D8: ;
    MEM8(esi + 0x18) = 1;
    MEM16(esi + 0x1A) = 0xFFFF;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CB5F0
 * Original: 0x001CB5F0 - 0x001CB5FA (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB5F0(void)
{

loc_001CB5F0: ;
    eax = MEM32(esp + 4);
    MEM8(eax) = 0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CB600
 * Original: 0x001CB600 - 0x001CB60F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB600(void)
{

loc_001CB600: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2F9870;
    esp += 4; return; /* ret */

}

/**
 * sub_001CB610
 * Original: 0x001CB610 - 0x001CB616 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB610(void)
{

loc_001CB610: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001CB620
 * Original: 0x001CB620 - 0x001CB626 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB620(void)
{

loc_001CB620: ;
    eax = 6;
    esp += 4; return; /* ret */

}

/**
 * sub_001CB630
 * Original: 0x001CB630 - 0x001CB6E2 (178 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CB630(void)
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

loc_001CB630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2 = XMM_MEM(ecx); /* movaps */
    fp_push(MEMF(0x2DC098)); /* fld float */
    xmm1 = xmm2; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0x4E); /* shufps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xB1); /* shufps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001CB6C3; /* jnp: not parity */

loc_001CB66E: ;
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm1.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEM32(esp + 0xC) = 0x40400000;
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0xC) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    XMM_STORE(ecx, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001CB6C3: ;
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    XMM_STORE(ecx, xmm1); /* movaps */
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
 * sub_001CB6F0
 * Original: 0x001CB6F0 - 0x001CB7A9 (185 bytes, 58 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001CB6F0(void)
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

loc_001CB6F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_MEM(eax); /* movaps */
    edx = MEM32(ebp + 8);
    xmm1 = XMM_MEM(edx); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xC9); /* shufps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0xD2); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xD2); /* shufps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0xC9); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm3); /* subps */
    XMM_STORE(ecx, xmm0); /* movaps */
    xmm2 = XMM_MEM(eax); /* movaps */
    PUSH32(esp, esi);
    esi = MEM32(edx + 0xC);
    MEM32(esp + 0xC) = esi;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    XMM_STORE(ecx, xmm0); /* movaps */
    esi = MEM32(eax + 0xC);
    xmm2 = XMM_MEM(edx); /* movaps */
    MEM32(esp + 0xC) = esi;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    XMM_STORE(ecx, xmm0); /* movaps */
    fp_push(MEMF(edx + 0xC)); /* fld float */
    xmm1 = XMM_MEM(eax); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    xmm0 = XMM_MEM(edx); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    esi = esp + 0xC;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi) = xmm2.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    POP32(esp, esi);
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_001CB7B0
 * Original: 0x001CB7B0 - 0x001CB816 (102 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB7B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB7B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246138);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x001CB7DEu); RECOMP_ABI_CALL(0x001C3780u, sub_001C3780); /* call 0x001C3780 */

loc_001CB7DE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    MEM32(esi) = 0x2F98A0;
    MEM32(esi + 0xC0) = eax;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x001CB7FBu); RECOMP_ABI_CALL(0x001CBB70u, sub_001CBB70); /* call 0x001CBB70 */

loc_001CB7FB: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x7C) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CB820
 * Original: 0x001CB820 - 0x001CB874 (84 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CB820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    MEM8(eax) = 2;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x70); /* movaps */
    XMM_STORE(eax + 0x40, xmm1); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x50); /* movaps */
    XMM_STORE(eax + 0x20, xmm1); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x40); /* movaps */
    XMM_STORE(eax + 0x10, xmm1); /* movaps */
    XMM_STORE(eax + 0x50, xmm0); /* movaps */
    XMM_STORE(eax + 0x60, xmm0); /* movaps */
    XMM_STORE(eax + 0x70, xmm0); /* movaps */
    ecx = 0x3F800000;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x78) = ecx;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(eax + 0xC) = 1;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001CB880
 * Original: 0x001CB880 - 0x001CB8B6 (54 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB880: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0xC0) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001CB8B3; /* je: equal / zero */

loc_001CB88E: ;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    XMM_STORE(ecx + 0x20, xmm0); /* movaps */
    MEM32(ecx + 0x2C) = 0;
    xmm0 = XMM_MEM(eax + 0x70); /* movaps */
    XMM_STORE(ecx + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x60); /* movaps */
    XMM_STORE(ecx + 0x60, xmm0); /* movaps */

loc_001CB8B3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CB8C0
 * Original: 0x001CB8C0 - 0x001CB9F3 (307 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CB8C0(void)
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

loc_001CB8C0: ;
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
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    xmm1 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esi + 0x60, xmm0); /* movaps */
    eax = MEM32(ebx);
    MEM32(esp + 8) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esi + 0x70, xmm0); /* movaps */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0xC, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0xC); /* movaps */
    ecx = esp + 8;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_MEM(esi + 0x50); /* movaps */
    xmm1 = XMM_MEM(0x2F9890); /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    edi = esi + 0x30;
    PUSH32(esp, edi);
    edx = esp + 0x14;
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm3 = XMM_AND(xmm3, xmm1); /* andps */
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    XMM_STORE(esp + 0x18, xmm3); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CB983u); RECOMP_ABI_CALL(0x001CB6F0u, sub_001CB6F0); /* call 0x001CB6F0 */

loc_001CB983: ;
    eax = MEM32(ebx);
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    MEM32(esp + 0xC) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(edi); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    ecx = edi;
    XMM_STORE(edi, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CB9AEu); RECOMP_ABI_CALL(0x001CB630u, sub_001CB630); /* call 0x001CB630 */

loc_001CB9AE: ;
    PUSH32(esp, edi);
    ecx = esi + 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CB9BAu); RECOMP_ABI_CALL(0x001CF400u, sub_001CF400); /* call 0x001CF400 */

loc_001CB9BA: ;
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CB9C8u); RECOMP_ABI_CALL(0x00029F10u, sub_00029F10); /* call 0x00029F10 */

loc_001CB9C8: ;
    xmm1 = XMM_MEM(esi + 0x70); /* movaps */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    eax = MEM32(ebp + 0x10);
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esi + 0xB0, xmm1); /* movaps */
    POP32(esp, edi);
    MEM32(esi + 0x7C) = 0x3F800000;
    POP32(esp, esi);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_001CBA00
 * Original: 0x001CBA00 - 0x001CBB2B (299 bytes, 86 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CBA00(void)
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

loc_001CBA00: ;
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
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    xmm1 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esi + 0x60, xmm0); /* movaps */
    eax = MEM32(ebx);
    MEM32(esp + 8) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esi + 0x70, xmm0); /* movaps */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0xC, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0xC); /* movaps */
    ecx = esp + 8;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_MEM(esi + 0x50); /* movaps */
    xmm1 = XMM_MEM(0x2F9890); /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    edi = esi + 0x30;
    PUSH32(esp, edi);
    edx = esp + 0x14;
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm3 = XMM_AND(xmm3, xmm1); /* andps */
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    XMM_STORE(esp + 0x18, xmm3); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CBAC3u); RECOMP_ABI_CALL(0x001CB6F0u, sub_001CB6F0); /* call 0x001CB6F0 */

loc_001CBAC3: ;
    eax = MEM32(ebx);
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    MEM32(esp + 0xC) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(edi); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    ecx = edi;
    XMM_STORE(edi, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CBAEEu); RECOMP_ABI_CALL(0x001CB630u, sub_001CB630); /* call 0x001CB630 */

loc_001CBAEE: ;
    PUSH32(esp, edi);
    ecx = esi + 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CBAFAu); RECOMP_ABI_CALL(0x001CF400u, sub_001CF400); /* call 0x001CF400 */

loc_001CBAFA: ;
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CBB08u); RECOMP_ABI_CALL(0x00029F10u, sub_00029F10); /* call 0x00029F10 */

loc_001CBB08: ;
    xmm1 = XMM_MEM(esi + 0x70); /* movaps */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esi + 0xB0, xmm1); /* movaps */
    POP32(esp, edi);
    MEM32(esi + 0x7C) = 0x3F800000;
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
 * sub_001CBB30
 * Original: 0x001CBB30 - 0x001CBB68 (56 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBB30(void)
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

loc_001CBB30: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001CBB4D; /* jp: parity */

loc_001CBB43: ;
    MEM32(esp + 4) = 0;
    goto loc_001CBB5B;

loc_001CBB4D: ;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 4)); /* fdiv dword ptr [esp + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_001CBB5B: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x20)); return; /* indirect tail jmp */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001CBB70
 * Original: 0x001CBB70 - 0x001CBB7A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBB70(void)
{

loc_001CBB70: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CBB80
 * Original: 0x001CBB80 - 0x001CBBC4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBB80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001CBB80: ;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    ecx = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC404)); /* fadd dword ptr [0x2dc404] */
    eax = esi + 0x20;
    PUSH32(esp, eax);
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_MEM(ecx); /* movaps */
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    edx = MEM32(esi + 0x7C);
    XMM_STORE(eax, xmm0); /* movaps */
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esi + 0x80;
    PUSH32(esp, eax);
    ecx = esi + 0x70;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x001CBBB9u); RECOMP_ABI_CALL(0x001CF700u, sub_001CF700); /* call 0x001CF700 */

loc_001CBBB9: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x7C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001CBBD0
 * Original: 0x001CBBD0 - 0x001CBC16 (70 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001CBBD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001CBBD0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_MEM(eax); /* movaps */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    edx = esi + 0x80;
    edi = esi + 0x70;
    PUSH32(esp, edx);
    ecx = edi;
    XMM_STORE(esi + 0xB0, xmm0); /* movaps */
    PUSH32(esp, 0x001CBBF7u); RECOMP_ABI_CALL(0x001CF700u, sub_001CF700); /* call 0x001CF700 */

loc_001CBBF7: ;
    xmm0 = XMM_MEM(edi); /* movaps */
    XMM_STORE(esi + 0x60, xmm0); /* movaps */
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC404)); /* fadd dword ptr [0x2dc404] */
    POP32(esp, edi);
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001CBC20
 * Original: 0x001CBC20 - 0x001CBC6F (79 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBC20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001CBC20: ;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    ecx = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC404)); /* fadd dword ptr [0x2dc404] */
    PUSH32(esp, edi);
    eax = esi + 0x30;
    edi = esi + 0x80;
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_MEM(ecx); /* movaps */
    PUSH32(esp, eax);
    ecx = edi;
    XMM_STORE(eax, xmm0); /* movaps */
    PUSH32(esp, 0x001CBC4Bu); RECOMP_ABI_CALL(0x001CF400u, sub_001CF400); /* call 0x001CF400 */

loc_001CBC4B: ;
    xmm0 = XMM_MEM(esi + 0xB0); /* movaps */
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    XMM_STORE(edi + 0x30, xmm0); /* movaps */
    PUSH32(esp, 0x001CBC63u); RECOMP_ABI_CALL(0x001CF700u, sub_001CF700); /* call 0x001CF700 */

loc_001CBC63: ;
    POP32(esp, edi);
    MEM32(esi + 0x7C) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001CBC70
 * Original: 0x001CBC70 - 0x001CBCBF (79 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBC70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001CBC70: ;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    ecx = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC404)); /* fadd dword ptr [0x2dc404] */
    PUSH32(esp, edi);
    eax = esi + 0x30;
    edi = esi + 0x80;
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_MEM(ecx); /* movaps */
    PUSH32(esp, eax);
    ecx = edi;
    XMM_STORE(eax, xmm0); /* movaps */
    PUSH32(esp, 0x001CBC9Bu); RECOMP_ABI_CALL(0x001CF400u, sub_001CF400); /* call 0x001CF400 */

loc_001CBC9B: ;
    edx = MEM32(esp + 0xC);
    xmm0 = XMM_MEM(edx); /* movaps */
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    XMM_STORE(edi + 0x30, xmm0); /* movaps */
    PUSH32(esp, 0x001CBCB3u); RECOMP_ABI_CALL(0x001CF700u, sub_001CF700); /* call 0x001CF700 */

loc_001CBCB3: ;
    POP32(esp, edi);
    MEM32(esi + 0x7C) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001CBCC0
 * Original: 0x001CBCC0 - 0x001CBCCE (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBCC0(void)
{

loc_001CBCC0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(ecx + 0x40, xmm0); /* movaps */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CBCD0
 * Original: 0x001CBCD0 - 0x001CBCDE (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBCD0(void)
{

loc_001CBCD0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(ecx + 0x50, xmm0); /* movaps */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CBCE0
 * Original: 0x001CBCE0 - 0x001CBD32 (82 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CBCE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CBCE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm1 = XMM_MEM(ecx + 0x70); /* movaps */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_MEM(eax); /* movaps */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm1 = XMM_MEM(ecx + 0x50); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xC9); /* shufps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0xD2); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xD2); /* shufps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0xC9); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm3); /* subps */
    XMM_STORE(eax, xmm0); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x40); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(eax, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CBD40
 * Original: 0x001CBD40 - 0x001CBD77 (55 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CBD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CBD40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x2C);
    edx = MEM32(ebp + 8);
    xmm1 = XMM_MEM(edx); /* movaps */
    MEM32(esp + 0xC) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(ecx + 0x40); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(ecx + 0x40, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CBD80
 * Original: 0x001CBD80 - 0x001CBDE7 (103 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBD80(void)
{

loc_001CBD80: ;
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    eax = MEM32(esp + 4);
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x40); /* movaps */
    XMM_STORE(eax + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x50); /* movaps */
    XMM_STORE(eax + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x60); /* movaps */
    XMM_STORE(eax + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x70); /* movaps */
    XMM_STORE(eax + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x80); /* movaps */
    XMM_STORE(eax + 0x80, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x90); /* movaps */
    XMM_STORE(eax + 0x90, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0xA0); /* movaps */
    XMM_STORE(eax + 0xA0, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0xB0); /* movaps */
    XMM_STORE(eax + 0xB0, xmm0); /* movaps */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CBDF0
 * Original: 0x001CBDF0 - 0x001CBE4A (90 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBDF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001CBDF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC404)); /* fadd dword ptr [0x2dc404] */
    edi = esi + 0x80;
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(edi, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(edi + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    XMM_STORE(edi + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(edi + 0x30, xmm0); /* movaps */
    PUSH32(esp, 0x001CBE31u); RECOMP_ABI_CALL(0x001CFB90u, sub_001CFB90); /* call 0x001CFB90 */

loc_001CBE31: ;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    PUSH32(esp, 0x001CBE3Eu); RECOMP_ABI_CALL(0x001CF700u, sub_001CF700); /* call 0x001CF700 */

loc_001CBE3E: ;
    POP32(esp, edi);
    MEM32(esi + 0x7C) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001CBE50
 * Original: 0x001CBE50 - 0x001CBE74 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBE50(void)
{

loc_001CBE50: ;
    edx = MEM32(ecx + 0x50);
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x54);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x58);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x5C);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CBE80
 * Original: 0x001CBE80 - 0x001CBEA4 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBE80(void)
{

loc_001CBE80: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x50) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x54) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x58) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x5C) = edx;
    eax = MEM32(eax);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CBEB0
 * Original: 0x001CBEB0 - 0x001CBF74 (196 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CBEB0(void)
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

loc_001CBEB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0xC);
    fp_push(MEMF(ecx + 0x50)); /* fld float */
    eax = MEM32(edx + 0x3C);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm1 = XMM_MEM(eax + 0xB0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_MEM(ecx + 0x20); /* movaps */
    PUSH32(esp, esi);
    esi = esp + 8;
    MEMF(esi) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm2 = XMM_MEM(eax + 0x30); /* movaps */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    xmm1 = XMM_SUB(xmm1, xmm2); /* subps */
    xmm1 = XMM_MUL(xmm1, xmm1); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0x4E); /* shufps */
    fp_pop(); /* fstp st(0) */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    xmm1 = xmm0; /* movaps */
    eax = esp + 0xC;
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xB1); /* shufps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001CBF55; /* jp: parity */

loc_001CBF2F: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CBF55; /* jne: not equal / not zero */

loc_001CBF48: ;
    eax = MEM32(ebp + 8);
    MEM8(eax) = 1;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_001CBF55: ;
    eax = MEM32(ebp + 8);
    XMM_STORE(ecx + 0x20, xmm2); /* movaps */
    edx = MEM32(edx + 0x3C);
    xmm0 = XMM_MEM(edx + 0xB0); /* movaps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
    MEM8(eax) = 0;
    POP32(esp, esi);
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
 * sub_001CBF80
 * Original: 0x001CBF80 - 0x001CC044 (196 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CBF80(void)
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

loc_001CBF80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0xC);
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    eax = MEM32(edx + 0x3C);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm1 = XMM_MEM(eax + 0xB0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_MEM(ecx + 0x40); /* movaps */
    PUSH32(esp, esi);
    esi = esp + 8;
    MEMF(esi) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm2 = XMM_MEM(eax + 0x30); /* movaps */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    xmm1 = XMM_SUB(xmm1, xmm2); /* subps */
    xmm1 = XMM_MUL(xmm1, xmm1); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0x4E); /* shufps */
    fp_pop(); /* fstp st(0) */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    xmm1 = xmm0; /* movaps */
    eax = esp + 0xC;
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xB1); /* shufps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001CC025; /* jp: parity */

loc_001CBFFF: ;
    fp_push(MEMF(ecx + 0x5C)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CC025; /* jne: not equal / not zero */

loc_001CC018: ;
    eax = MEM32(ebp + 8);
    MEM8(eax) = 1;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_001CC025: ;
    eax = MEM32(ebp + 8);
    XMM_STORE(ecx + 0x40, xmm2); /* movaps */
    edx = MEM32(edx + 0x3C);
    xmm0 = XMM_MEM(edx + 0xB0); /* movaps */
    XMM_STORE(ecx + 0x30, xmm0); /* movaps */
    MEM8(eax) = 0;
    POP32(esp, esi);
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
 * sub_001CC050
 * Original: 0x001CC050 - 0x001CC0DF (143 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CC050(void)
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

loc_001CC050: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CC0CE; /* je: equal / zero */

loc_001CC063: ;
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30EDE0);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001CC074u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CC071u); } /* indirect call */
    }

loc_001CC074: ;
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    xmm2 = XMM_MEM(esp + 0x20); /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm1); /* subps */
    MEM32(esp + 0xC) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    eax = esp + 0xC;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 8) = ecx;
    fp_push(MEMF(esi + 8)); /* fld float */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001CC0CE: ;
    MEM32(esi + 8) = 0xBF800000u;
    fp_push(MEMF(esi + 8)); /* fld float */
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
 * sub_001CC0E0
 * Original: 0x001CC0E0 - 0x001CC0E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC0E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CC0E0: ;
    g_seh_ebp = ebp; sub_00015C50(); return; /* tail jmp 0x00015C50 */

}

/**
 * sub_001CC0F0
 * Original: 0x001CC0F0 - 0x001CC199 (169 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CC0F0(void)
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

loc_001CC0F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246158);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0xC) = esi;
    MEM16(esi + 6) = 1;
    MEM32(esi) = 0x2F9924;
    MEM32(esi + 0x50) = 0x3C23D70A;
    MEM32(esi + 0x54) = 0x3BA3D70A;
    MEM32(esi + 0x58) = 0x3DCCCCCD;
    MEM32(esi + 0x5C) = 0x3E4CCCCD;
    MEM32(esp + 8) = 0x7F7FFFFF;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    XMM_STORE(esi + 0x10, xmm0); /* movaps */
    XMM_STORE(esi + 0x30, xmm0); /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esi + 0x20, xmm0); /* movaps */
    eax = 0x3F800000;
    MEM32(esi + 0x2C) = eax;
    XMM_STORE(esi + 0x40, xmm0); /* movaps */
    MEM32(esi + 0x4C) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x20) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CC183u); RECOMP_ABI_CALL(0x001CC050u, sub_001CC050); /* call 0x001CC050 */

loc_001CC183: ;
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(esp + 0x14);
    eax = esi;
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
 * sub_001CC1A0
 * Original: 0x001CC1A0 - 0x001CC20D (109 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CC1A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC1A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    ecx = MEM32(ebp + 8);
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2F9924;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x50) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x54) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0x58) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x5C) = edx;
    MEM32(esp + 0xC) = 0x7F7FFFFF;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    edx = 0x3F800000;
    MEM32(eax + 0x2C) = edx;
    XMM_STORE(eax + 0x40, xmm0); /* movaps */
    MEM32(eax + 0x4C) = edx;
    ecx = MEM32(ecx);
    MEM32(eax + 8) = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CC210
 * Original: 0x001CC210 - 0x001CC216 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC210(void)
{

loc_001CC210: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC220
 * Original: 0x001CC220 - 0x001CC24E (46 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001CC220(void)
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

loc_001CC220: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x10)); /* fdiv dword ptr [ecx + 0x10] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(eax, xmm0); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(eax) = (float)fp_top(); /* fst */
    MEMF(eax + 0x14) = (float)fp_top(); /* fst */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_001CC250
 * Original: 0x001CC250 - 0x001CC2AD (93 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001CC250(void)
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

loc_001CC250: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(edx + 0x14)); /* fld float */
    fp_push(MEMF(edx)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CC26C; /* jne: not equal / not zero */

loc_001CC266: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 4)); /* fld float */

loc_001CC26C: ;
    eax = MEM32(edx + 0x28);
    MEM32(esp + 4) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CC284; /* je: equal / zero */

loc_001CC27E: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 4)); /* fld float */

loc_001CC284: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CC2A1; /* jne: not equal / not zero */

loc_001CC291: ;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    esp += 8; return; /* ret 4 */

loc_001CC2A1: ;
    MEM32(ecx + 0x10) = 0;
    fp_pop(); /* fstp st(0) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001CC2B0
 * Original: 0x001CC2B0 - 0x001CC2F0 (64 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001CC2B0(void)
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

loc_001CC2B0: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(edx + 0x14)); /* fld float */
    fp_push(MEMF(edx)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001CC2CC; /* jp: parity */

loc_001CC2C6: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 4)); /* fld float */

loc_001CC2CC: ;
    eax = MEM32(edx + 0x28);
    MEM32(esp + 4) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001CC2E4; /* jp: parity */

loc_001CC2DE: ;
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

loc_001CC2E4: ;
    edx = MEM32(esp + 4);
    fp_pop(); /* fstp st(0) */
    MEM32(ecx + 0x10) = edx;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001CC2F0
 * Original: 0x001CC2F0 - 0x001CC31E (46 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001CC2F0(void)
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

loc_001CC2F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    XMM_STORE(eax, xmm0); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_001CC320
 * Original: 0x001CC320 - 0x001CC3AE (142 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CC320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC320: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x2C);
    edx = MEM32(ebp + 0xC);
    MEM32(esp + 0xC) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(ecx + 0x40); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(ecx + 0x40, xmm0); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x70); /* movaps */
    xmm0 = XMM_MEM(edx); /* movaps */
    edx = MEM32(ecx + 0x10);
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0xC9); /* shufps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xD2); /* shufps */
    xmm4 = XMM_MUL(xmm4, xmm3); /* mulps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0xD2); /* shufps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xC9); /* shufps */
    MEM32(esp + 0xC) = edx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    xmm1 = XMM_SUB(xmm1, xmm4); /* subps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm2, 0); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = XMM_MEM(ecx + 0x50); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(ecx + 0x50, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CC3B0
 * Original: 0x001CC3B0 - 0x001CC3E7 (55 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CC3B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC3B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ebp + 8);
    xmm1 = XMM_MEM(edx); /* movaps */
    MEM32(esp + 0xC) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(ecx + 0x50); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(ecx + 0x50, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CC3F0
 * Original: 0x001CC3F0 - 0x001CC413 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CC3F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC3F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_MEM(ecx + 0xC0); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(ecx + 0xC0, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CC420
 * Original: 0x001CC420 - 0x001CC493 (115 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CC420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC420: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_MEM(ecx + 0xC0); /* movaps */
    edx = MEM32(ebp + 0xC);
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(ecx + 0xC0, xmm1); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x70); /* movaps */
    xmm0 = XMM_MEM(edx); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0xC9); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xD2); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0xD2); /* shufps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xC9); /* shufps */
    xmm0 = XMM_MEM(ecx + 0xD0); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm1 = XMM_SUB(xmm1, xmm3); /* subps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    XMM_STORE(ecx + 0xD0, xmm0); /* movaps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0xDC) = 0x3F800000;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CC4A0
 * Original: 0x001CC4A0 - 0x001CC4CD (45 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CC4A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC4A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_MEM(ecx + 0xD0); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(ecx + 0xD0, xmm1); /* movaps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0xDC) = 0x3F800000;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CC4D0
 * Original: 0x001CC4D0 - 0x001CC5EA (282 bytes, 77 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CC4D0(void)
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

loc_001CC4D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax)); /* fld float */
    xmm1 = XMM_MEM(ecx + 0xC0); /* movaps */
    edx = MEM32(ebp + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x2C)); /* fmul dword ptr [ecx + 0x2c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm0 = XMM_MEM(ecx + 0x40); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(ecx + 0x40, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_MEM(edx); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(ecx + 0x40); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(ecx + 0x40, xmm0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x14)); /* fmul dword ptr [ecx + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) - fp_top()); /* fsubr dword ptr [0x2dc08c] */
    fp_push(MEMF(0x2DC098)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CC550; /* jne: not equal / not zero */

loc_001CC548: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2DC098)); /* fld float */

loc_001CC550: ;
    xmm1 = XMM_MEM(ecx + 0x40); /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(ecx + 0x40, xmm2); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10)); /* fmul dword ptr [ecx + 0x10] */
    xmm2 = XMM_MEM(ecx + 0xD0); /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    XMM_STORE(ecx + 0xC0, xmm0); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0); /* shufps */
    xmm1 = XMM_MEM(ecx + 0x50); /* movaps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm3); /* addps */
    XMM_STORE(ecx + 0x50, xmm1); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18)); /* fmul dword ptr [ecx + 0x18] */
    XMM_STORE(ecx + 0xD0, xmm0); /* movaps */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) - fp_top()); /* fsubr dword ptr [0x2dc08c] */
    fp_push(MEMF(0x2DC098)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CC5C8; /* jne: not equal / not zero */

loc_001CC5C0: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2DC098)); /* fld float */

loc_001CC5C8: ;
    xmm1 = XMM_MEM(ecx + 0x50); /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(ecx + 0x50, xmm2); /* movaps */
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
 * sub_001CC5F0
 * Original: 0x001CC5F0 - 0x001CC766 (374 bytes, 101 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CC5F0(void)
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

loc_001CC5F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax)); /* fld float */
    xmm1 = XMM_MEM(ecx + 0xC0); /* movaps */
    edx = MEM32(ebp + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x2C)); /* fmul dword ptr [ecx + 0x2c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm0 = XMM_MEM(ecx + 0x40); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(ecx + 0x40, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_MEM(edx); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(ecx + 0x40); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(ecx + 0x40, xmm0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x14)); /* fmul dword ptr [ecx + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) - fp_top()); /* fsubr dword ptr [0x2dc08c] */
    fp_push(MEMF(0x2DC098)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CC670; /* jne: not equal / not zero */

loc_001CC668: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2DC098)); /* fld float */

loc_001CC670: ;
    xmm1 = XMM_MEM(ecx + 0x40); /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(ecx + 0x40, xmm2); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10)); /* fmul dword ptr [ecx + 0x10] */
    xmm2 = XMM_MEM(ecx + 0xD0); /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    XMM_STORE(ecx + 0xC0, xmm0); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0); /* shufps */
    xmm1 = XMM_MEM(ecx + 0x50); /* movaps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm3); /* addps */
    XMM_STORE(ecx + 0x50, xmm1); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18)); /* fmul dword ptr [ecx + 0x18] */
    XMM_STORE(ecx + 0xD0, xmm0); /* movaps */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) - fp_top()); /* fsubr dword ptr [0x2dc08c] */
    fp_push(MEMF(0x2DC098)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CC6E8; /* jne: not equal / not zero */

loc_001CC6E0: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2DC098)); /* fld float */

loc_001CC6E8: ;
    xmm2 = XMM_MEM(ecx + 0x50); /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    XMM_STORE(ecx + 0x50, xmm3); /* movaps */
    MEM8(eax) = 2;
    edx = MEM32(ecx + 0x10);
    MEM32(esp + 0xC) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    XMM_STORE(eax + 0x30, xmm1); /* movaps */
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x3C) = edx;
    xmm1 = XMM_MEM(ecx + 0x70); /* movaps */
    XMM_STORE(eax + 0x40, xmm1); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x50); /* movaps */
    XMM_STORE(eax + 0x20, xmm1); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x40); /* movaps */
    XMM_STORE(eax + 0x10, xmm1); /* movaps */
    XMM_STORE(eax + 0x50, xmm0); /* movaps */
    XMM_STORE(eax + 0x60, xmm0); /* movaps */
    XMM_STORE(eax + 0x70, xmm0); /* movaps */
    ecx = 0x3F800000;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x78) = ecx;
    MEM8(eax + 0xC) = 1;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_001CC770
 * Original: 0x001CC770 - 0x001CC8CF (351 bytes, 99 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CC770(void)
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

loc_001CC770: ;
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
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esi + 0xE0, xmm0); /* movaps */
    XMM_STORE(esi + 0xF0, xmm1); /* movaps */
    xmm1 = XMM_MEM(esi + 0x70); /* movaps */
    XMM_STORE(esi + 0x60, xmm1); /* movaps */
    eax = MEM32(ebx);
    MEM32(esp + 8) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm0); /* mulps */
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esi + 0x70, xmm0); /* movaps */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0xC, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0xC); /* movaps */
    ecx = esp + 8;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_MEM(esi + 0x50); /* movaps */
    xmm1 = XMM_MEM(0x2F9890); /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    edi = esi + 0x30;
    PUSH32(esp, edi);
    edx = esp + 0x14;
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm3 = XMM_AND(xmm3, xmm1); /* andps */
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    XMM_STORE(esp + 0x18, xmm3); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CC845u); RECOMP_ABI_CALL(0x001CB6F0u, sub_001CB6F0); /* call 0x001CB6F0 */

loc_001CC845: ;
    eax = MEM32(ebx);
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    MEM32(esp + 0xC) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(edi); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    ecx = edi;
    XMM_STORE(edi, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CC870u); RECOMP_ABI_CALL(0x001CB630u, sub_001CB630); /* call 0x001CB630 */

loc_001CC870: ;
    ebx = esi + 0x80;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CC87Eu); RECOMP_ABI_CALL(0x001CF400u, sub_001CF400); /* call 0x001CF400 */

loc_001CC87E: ;
    xmm0 = XMM_MEM(esi + 0x20); /* movaps */
    xmm2 = XMM_MEM(ebx + 0x20); /* movaps */
    xmm3 = XMM_MEM(ebx + 0x10); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xAA); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(ebx); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = XMM_MEM(esi + 0x70); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esi + 0xB0, xmm1); /* movaps */
    POP32(esp, edi);
    MEM32(esi + 0x7C) = 0x3F800000;
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
 * sub_001CC8D0
 * Original: 0x001CC8D0 - 0x001CCAA8 (472 bytes, 126 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CC8D0(void)
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

loc_001CC8D0: ;
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
    ebx = MEM32(ebp + 0x10);
    xmm1 = XMM_MEM(ebx + 0x40); /* movaps */
    MEM32(esp + 4) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = MEM32(ebp + 8);
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    PUSH32(esp, esi);
    esi = ecx;
    XMM_STORE(esi + 0x40, xmm2); /* movaps */
    xmm1 = XMM_MEM(ebx + 0x50); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(esi + 0x50, xmm2); /* movaps */
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    XMM_STORE(esi + 0xE0, xmm0); /* movaps */
    XMM_STORE(esi + 0xF0, xmm1); /* movaps */
    xmm1 = XMM_MEM(esi + 0x70); /* movaps */
    XMM_STORE(esi + 0x60, xmm1); /* movaps */
    ecx = MEM32(eax);
    MEM32(esp + 8) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm0); /* mulps */
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esi + 0x70, xmm0); /* movaps */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0xC, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0xC); /* movaps */
    edx = esp + 8;
    MEMF(edx) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_MEM(esi + 0x50); /* movaps */
    xmm1 = XMM_MEM(0x2F9890); /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    edi = esi + 0x30;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm3 = XMM_AND(xmm3, xmm1); /* andps */
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    XMM_STORE(esp + 0x18, xmm3); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CC9D9u); RECOMP_ABI_CALL(0x001CB6F0u, sub_001CB6F0); /* call 0x001CB6F0 */

loc_001CC9D9: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    MEM32(esp + 0xC) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(edi); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    ecx = edi;
    XMM_STORE(edi, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CCA07u); RECOMP_ABI_CALL(0x001CB630u, sub_001CB630); /* call 0x001CB630 */

loc_001CCA07: ;
    ecx = esi + 0x80;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CCA13u); RECOMP_ABI_CALL(0x001CF400u, sub_001CF400); /* call 0x001CF400 */

loc_001CCA13: ;
    xmm0 = XMM_MEM(esi + 0x20); /* movaps */
    xmm2 = XMM_MEM(esi + 0xA0); /* movaps */
    xmm3 = XMM_MEM(esi + 0x90); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xAA); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(esi + 0x80); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = XMM_MEM(esi + 0x70); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esi + 0xB0, xmm1); /* movaps */
    MEM32(esi + 0x7C) = 0x3F800000;
    xmm0 = XMM_MEM(ebx + 0x10); /* movaps */
    XMM_STORE(esi + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(ebx + 0x20); /* movaps */
    XMM_STORE(esi + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x2F9890); /* movaps */
    xmm1 = XMM_MEM(esi + 0x40); /* movaps */
    xmm1 = XMM_AND(xmm1, xmm0); /* andps */
    XMM_STORE(esi + 0x40, xmm1); /* movaps */
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    xmm0 = XMM_MEM(0x2F9890); /* movaps */
    POP32(esp, edi);
    xmm1 = XMM_AND(xmm1, xmm0); /* andps */
    XMM_STORE(esi + 0x50, xmm1); /* movaps */
    POP32(esp, esi);
    eax = ebx + 0x80;
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
 * sub_001CCAB0
 * Original: 0x001CCAB0 - 0x001CCCFB (587 bytes, 160 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CCAB0(void)
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

loc_001CCAB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x7C)); /* fmul dword ptr [esi + 0x7c] */
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    xmm1 = XMM_MEM(esi + 0xE0); /* movaps */
    XMM_STORE(esi + 0x60, xmm0); /* movaps */
    fp_top() = -fp_top(); /* fchs */
    eax = esp + 8;
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    XMM_STORE(esp + 0x2C, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esi + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0xF0); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm2 = XMM_MEM(esi + 0xF0); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0xC, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0xC); /* movaps */
    MEMF(eax) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    edi = esi + 0x30;
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_MEM(0x2F9890); /* movaps */
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    fp_pop(); /* fstp st(0) */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    PUSH32(esp, ecx);
    xmm3 = XMM_AND(xmm3, xmm1); /* andps */
    ecx = esp + 0x28;
    XMM_STORE(esp + 0x48, xmm0); /* movaps */
    XMM_STORE(esp + 0x18, xmm3); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CCB8Bu); RECOMP_ABI_CALL(0x001CB6F0u, sub_001CB6F0); /* call 0x001CB6F0 */

loc_001CCB8B: ;
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(edi); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    ecx = edi;
    XMM_STORE(edi, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CCBAFu); RECOMP_ABI_CALL(0x001CB630u, sub_001CB630); /* call 0x001CB630 */

loc_001CCBAF: ;
    ebx = esi + 0x80;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CCBBDu); RECOMP_ABI_CALL(0x001CF400u, sub_001CF400); /* call 0x001CF400 */

loc_001CCBBD: ;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CCBCBu); RECOMP_ABI_CALL(0x00029F10u, sub_00029F10); /* call 0x00029F10 */

loc_001CCBCB: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    xmm1 = XMM_MEM(esi + 0x70); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esi + 0xB0, xmm1); /* movaps */
    MEM32(esi + 0x7C) = 0x3F800000;
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    xmm1 = XMM_MEM(esi + 0xE0); /* movaps */
    XMM_STORE(esi + 0x60, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esi + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0xF0); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm2 = XMM_MEM(esi + 0xF0); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    edx = esp + 0xC;
    MEMF(edx) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, edi);
    eax = esp + 0x44;
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_MEM(0x2F9890); /* movaps */
    xmm3 = XMM_AND(xmm3, xmm1); /* andps */
    PUSH32(esp, eax);
    fp_pop(); /* fstp st(0) */
    ecx = esp + 0x38;
    XMM_STORE(esp + 0x48, xmm3); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CCC9Fu); RECOMP_ABI_CALL(0x001CB6F0u, sub_001CB6F0); /* call 0x001CB6F0 */

loc_001CCC9F: ;
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    xmm1 = XMM_MEM(esp + 0x30); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(edi); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    ecx = edi;
    XMM_STORE(edi, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CCCC3u); RECOMP_ABI_CALL(0x001CB630u, sub_001CB630); /* call 0x001CB630 */

loc_001CCCC3: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CCCCBu); RECOMP_ABI_CALL(0x001CF400u, sub_001CF400); /* call 0x001CF400 */

loc_001CCCCB: ;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CCCD9u); RECOMP_ABI_CALL(0x00029F10u, sub_00029F10); /* call 0x00029F10 */

loc_001CCCD9: ;
    xmm1 = XMM_MEM(esi + 0x70); /* movaps */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    ecx = MEM32(ebp + 8);
    POP32(esp, edi);
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esi + 0xB0, xmm1); /* movaps */
    MEM32(esi + 0x7C) = ecx;
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
 * sub_001CCD00
 * Original: 0x001CCD00 - 0x001CCD06 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCD00(void)
{

loc_001CCD00: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_001CCD10
 * Original: 0x001CCD10 - 0x001CCEAE (414 bytes, 113 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CCD10(void)
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

loc_001CCD10: ;
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
    ebx = MEM32(ebp + 0x10);
    xmm1 = XMM_MEM(ebx + 0x40); /* movaps */
    MEM32(esp + 4) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = MEM32(ebp + 8);
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    PUSH32(esp, esi);
    esi = ecx;
    XMM_STORE(esi + 0x40, xmm2); /* movaps */
    xmm1 = XMM_MEM(ebx + 0x50); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(esi + 0x50, xmm2); /* movaps */
    xmm0 = XMM_MEM(0x2F9890); /* movaps */
    xmm1 = XMM_MEM(esi + 0x40); /* movaps */
    xmm1 = XMM_AND(xmm1, xmm0); /* andps */
    XMM_STORE(esi + 0x40, xmm1); /* movaps */
    xmm0 = XMM_MEM(0x2F9890); /* movaps */
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    xmm1 = XMM_AND(xmm1, xmm0); /* andps */
    XMM_STORE(esi + 0x50, xmm1); /* movaps */
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esi + 0xE0, xmm0); /* movaps */
    XMM_STORE(esi + 0xF0, xmm1); /* movaps */
    xmm1 = XMM_MEM(esi + 0x70); /* movaps */
    XMM_STORE(esi + 0x60, xmm1); /* movaps */
    ecx = MEM32(eax);
    MEM32(esp + 8) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm0); /* mulps */
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esi + 0x70, xmm0); /* movaps */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0xC, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0xC); /* movaps */
    edx = esp + 8;
    MEMF(edx) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_MEM(esi + 0x50); /* movaps */
    xmm1 = XMM_MEM(0x2F9890); /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    edi = esi + 0x30;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm3 = XMM_AND(xmm3, xmm1); /* andps */
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    XMM_STORE(esp + 0x18, xmm3); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CCE3Du); RECOMP_ABI_CALL(0x001CB6F0u, sub_001CB6F0); /* call 0x001CB6F0 */

loc_001CCE3D: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    MEM32(esp + 0xC) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(edi); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    ecx = edi;
    XMM_STORE(edi, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CCE6Bu); RECOMP_ABI_CALL(0x001CB630u, sub_001CB630); /* call 0x001CB630 */

loc_001CCE6B: ;
    PUSH32(esp, edi);
    ecx = esi + 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CCE77u); RECOMP_ABI_CALL(0x001CF400u, sub_001CF400); /* call 0x001CF400 */

loc_001CCE77: ;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CCE85u); RECOMP_ABI_CALL(0x00029F10u, sub_00029F10); /* call 0x00029F10 */

loc_001CCE85: ;
    xmm1 = XMM_MEM(esi + 0x70); /* movaps */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esi + 0xB0, xmm1); /* movaps */
    POP32(esp, edi);
    MEM32(esi + 0x7C) = 0x3F800000;
    POP32(esp, esi);
    eax = ebx + 0x80;
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
 * sub_001CCEB0
 * Original: 0x001CCEB0 - 0x001CCEBC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCEB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CCEB0: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001CCEC0
 * Original: 0x001CCEC0 - 0x001CCEC6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCEC0(void)
{

loc_001CCEC0: ;
    eax = 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_001CCED0
 * Original: 0x001CCED0 - 0x001CCED6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCED0(void)
{

loc_001CCED0: ;
    eax = 7;
    esp += 4; return; /* ret */

}

/**
 * sub_001CCEE0
 * Original: 0x001CCEE0 - 0x001CCF40 (96 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCEE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CCEE0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246178);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x001CCF0Eu); RECOMP_ABI_CALL(0x001CB7B0u, sub_001CB7B0); /* call 0x001CB7B0 */

loc_001CCF0E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    MEM32(esi) = 0x2F9948;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x001CCF25u); RECOMP_ABI_CALL(0x001CBB70u, sub_001CBB70); /* call 0x001CBB70 */

loc_001CCF25: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x7C) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CCF40
 * Original: 0x001CCF40 - 0x001CCF68 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CCF40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001CCF48u); RECOMP_ABI_CALL(0x001CCF70u, sub_001CCF70); /* call 0x001CCF70 */

loc_001CCF48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CCF62; /* je: equal / zero */

loc_001CCF4F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x29);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001CCF62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CCF5Fu); } /* indirect call */
    }

loc_001CCF62: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CCF70
 * Original: 0x001CCF70 - 0x001CCF75 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCF70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CCF70: ;
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_001CCF80
 * Original: 0x001CCF80 - 0x001CCF9D (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CCF80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CCF80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(eax, xmm0); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CCFA0
 * Original: 0x001CCFA0 - 0x001CCFD6 (54 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CCFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CCFA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(eax) = 2;
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    XMM_STORE(eax + 0x40, xmm0); /* movaps */
    XMM_STORE(eax + 0x50, xmm0); /* movaps */
    XMM_STORE(eax + 0x60, xmm0); /* movaps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(eax + 0x70, xmm0); /* movaps */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001CCFE0
 * Original: 0x001CCFE0 - 0x001CD04A (106 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CCFE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CCFE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    eax = MEM32(ebp + 8);
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(eax + 0x40, xmm0); /* movaps */
    XMM_STORE(eax + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x60); /* movaps */
    XMM_STORE(eax + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x70); /* movaps */
    XMM_STORE(eax + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x80); /* movaps */
    XMM_STORE(eax + 0x80, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x90); /* movaps */
    XMM_STORE(eax + 0x90, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0xA0); /* movaps */
    XMM_STORE(eax + 0xA0, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0xB0); /* movaps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(eax + 0xB0, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD050
 * Original: 0x001CD050 - 0x001CD056 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD050(void)
{

loc_001CD050: ;
    eax = 5;
    esp += 4; return; /* ret */

}

/**
 * sub_001CD060
 * Original: 0x001CD060 - 0x001CD080 (32 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD060(void)
{

loc_001CD060: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001CD074u); RECOMP_ABI_CALL(0x001CD540u, sub_001CD540); /* call 0x001CD540 */

loc_001CD074: ;
    MEM32(esi) = 0x2F99C8;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CD080
 * Original: 0x001CD080 - 0x001CD259 (473 bytes, 129 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CD080(void)
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

loc_001CD080: ;
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
    MEM32(esp) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm0); /* mulps */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    XMM_STORE(esi + 0x40, xmm2); /* movaps */
    xmm0 = XMM_MEM(eax + 0x50); /* movaps */
    xmm3 = XMM_MEM(esi + 0xA0); /* movaps */
    xmm4 = XMM_MEM(esi + 0x90); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    eax = MEM32(ebp + 8);
    xmm4 = XMM_MUL(xmm4, xmm2); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(esi + 0x80); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    ebx = esi + 0x80;
    xmm0 = XMM_ADD(xmm0, xmm4); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm0); /* mulps */
    XMM_STORE(esi + 0x50, xmm2); /* movaps */
    xmm0 = XMM_MEM(0x2F9890); /* movaps */
    xmm1 = XMM_MEM(esi + 0x40); /* movaps */
    xmm1 = XMM_AND(xmm1, xmm0); /* andps */
    XMM_STORE(esi + 0x40, xmm1); /* movaps */
    xmm0 = XMM_MEM(0x2F9890); /* movaps */
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    xmm1 = XMM_AND(xmm1, xmm0); /* andps */
    XMM_STORE(esi + 0x50, xmm1); /* movaps */
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esi + 0xC0, xmm0); /* movaps */
    XMM_STORE(esi + 0xD0, xmm1); /* movaps */
    xmm1 = XMM_MEM(esi + 0x70); /* movaps */
    XMM_STORE(esi + 0x60, xmm1); /* movaps */
    ecx = MEM32(eax);
    MEM32(esp + 8) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm0); /* mulps */
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esi + 0x70, xmm0); /* movaps */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0xC, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0xC); /* movaps */
    edx = esp + 8;
    MEMF(edx) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEM32(esp + 8) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_MEM(0x2F9890); /* movaps */
    xmm2 = XMM_MEM(esi + 0x50); /* movaps */
    PUSH32(esp, edi);
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    edi = esi + 0x30;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm3 = XMM_AND(xmm3, xmm1); /* andps */
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    XMM_STORE(esp + 0x18, xmm3); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CD1EAu); RECOMP_ABI_CALL(0x001CB6F0u, sub_001CB6F0); /* call 0x001CB6F0 */

loc_001CD1EA: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    MEM32(esp + 0xC) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(edi); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    ecx = edi;
    XMM_STORE(edi, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CD218u); RECOMP_ABI_CALL(0x001CB630u, sub_001CB630); /* call 0x001CB630 */

loc_001CD218: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CD220u); RECOMP_ABI_CALL(0x001CF400u, sub_001CF400); /* call 0x001CF400 */

loc_001CD220: ;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CD22Eu); RECOMP_ABI_CALL(0x00029F10u, sub_00029F10); /* call 0x00029F10 */

loc_001CD22E: ;
    xmm1 = XMM_MEM(esi + 0x70); /* movaps */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    eax = MEM32(ebp + 0x10);
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esi + 0xB0, xmm1); /* movaps */
    POP32(esp, edi);
    MEM32(esi + 0x7C) = 0x3F800000;
    POP32(esp, esi);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_001CD260
 * Original: 0x001CD260 - 0x001CD276 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001CD260(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001CD260: ;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    eax = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 4)); /* fdiv dword ptr [esp + 4] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x001CD273u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CD270u); } /* indirect call */
    }

loc_001CD273: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001CD280
 * Original: 0x001CD280 - 0x001CD286 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD280(void)
{

loc_001CD280: ;
    eax = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_001CD290
 * Original: 0x001CD290 - 0x001CD2E6 (86 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CD290(void)
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

loc_001CD290: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0xE0)); /* fdiv dword ptr [ecx + 0xe0] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0xE4)); /* fdiv dword ptr [ecx + 0xe4] */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0xE8)); /* fdiv dword ptr [ecx + 0xe8] */
    XMM_STORE(eax, xmm0); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xC);
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x28) = ecx;
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
 * sub_001CD2F0
 * Original: 0x001CD2F0 - 0x001CD334 (68 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CD2F0(void)
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

loc_001CD2F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0xE8);
    fp_push(MEMF(ecx + 0xE0)); /* fld float */
    fp_push(MEMF(ecx + 0xE4)); /* fld float */
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebp + 8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    ecx = MEM32(esp + 0xC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(eax, xmm0); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x28) = ecx;
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
 * sub_001CD340
 * Original: 0x001CD340 - 0x001CD3D5 (149 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CD340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0xE0);
    edx = MEM32(ecx + 0xE4);
    xmm1 = XMM_MEM(ecx + 0x80); /* movaps */
    MEM32(esp + 0xC) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    eax = ecx + 0x80;
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = XMM_MEM(ecx + 0x90); /* movaps */
    XMM_STORE(esp + 0x10, xmm2); /* movaps */
    MEM32(esp + 0xC) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    edx = MEM32(ecx + 0xE8);
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = XMM_MEM(ecx + 0xA0); /* movaps */
    ecx = MEM32(ebp + 8);
    XMM_STORE(esp + 0x20, xmm2); /* movaps */
    MEM32(esp + 0xC) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    PUSH32(esp, eax);
    xmm2 = xmm0; /* movaps */
    eax = esp + 0x14;
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    PUSH32(esp, eax);
    XMM_STORE(esp + 0x38, xmm2); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CD3CFu); RECOMP_ABI_CALL(0x001CF660u, sub_001CF660); /* call 0x001CF660 */

loc_001CD3CF: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD3E0
 * Original: 0x001CD3E0 - 0x001CD43E (94 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CD3E0(void)
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

loc_001CD3E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0xE0)); /* fdiv dword ptr [ecx + 0xe0] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x64)); /* fdiv dword ptr [ecx + 0x64] */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x68)); /* fdiv dword ptr [ecx + 0x68] */
    XMM_STORE(eax, xmm0); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    ecx = eax;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x28) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CD438u); RECOMP_ABI_CALL(0x001CF6D0u, sub_001CF6D0); /* call 0x001CF6D0 */

loc_001CD438: ;
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
 * sub_001CD440
 * Original: 0x001CD440 - 0x001CD452 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD440(void)
{

loc_001CD440: ;
    eax = MEM32(esp + 4);
    edx = eax;
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0xEC) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD460
 * Original: 0x001CD460 - 0x001CD483 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CD460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD460: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_MEM(ecx + 0xF0); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(ecx + 0xF0, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD490
 * Original: 0x001CD490 - 0x001CD503 (115 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CD490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_MEM(ecx + 0xF0); /* movaps */
    edx = MEM32(ebp + 0xC);
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(ecx + 0xF0, xmm1); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x70); /* movaps */
    xmm0 = XMM_MEM(edx); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0xC9); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xD2); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0xD2); /* shufps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xC9); /* shufps */
    xmm0 = XMM_MEM(ecx + 0x100); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm1 = XMM_SUB(xmm1, xmm3); /* subps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    XMM_STORE(ecx + 0x100, xmm0); /* movaps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x10C) = 0x3F800000;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CD510
 * Original: 0x001CD510 - 0x001CD53D (45 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CD510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD510: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x100); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(ecx + 0x100, xmm1); /* movaps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x10C) = 0x3F800000;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD540
 * Original: 0x001CD540 - 0x001CD5AD (109 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CD540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD540: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CD55Bu); RECOMP_ABI_CALL(0x001C3780u, sub_001C3780); /* call 0x001C3780 */

loc_001CD55B: ;
    eax = 0x3F800000;
    MEM32(esi) = 0x2F9A48;
    MEM32(esi + 0xE0) = eax;
    MEM32(esi + 0xE4) = eax;
    MEM32(esi + 0xE8) = eax;
    MEM32(esi + 0xEC) = eax;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esi + 0xF0, xmm0); /* movaps */
    XMM_STORE(esi + 0x100, xmm0); /* movaps */
    XMM_STORE(esi + 0xC0, xmm0); /* movaps */
    XMM_STORE(esi + 0xD0, xmm0); /* movaps */
    MEM32(esi + 0x10) = 0xBF800000u;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CD5B0
 * Original: 0x001CD5B0 - 0x001CD5F7 (71 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001CD5B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001CD5B0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(eax + 0x14)); /* fdiv dword ptr [eax + 0x14] */
    edx = MEM32(ecx + 0xEC);
    MEM32(esp + 4) = edx;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(eax + 0x28)); /* fdiv dword ptr [eax + 0x28] */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(eax)); /* fdiv dword ptr [eax] */
    eax = edx;
    MEMF(ecx + 0xE0) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ecx + 0xE4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0xE8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xEC) = eax;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001CD600
 * Original: 0x001CD600 - 0x001CD62D (45 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001CD600(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001CD600: ;
    fp_push(MEMF(ecx + 0xEC)); /* fld float */
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    eax = MEM32(eax);
    MEM32(ecx + 0xE0) = eax;
    MEMF(ecx + 0xE4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0xE8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0xEC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001CD630
 * Original: 0x001CD630 - 0x001CD74E (286 bytes, 79 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CD630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x2C);
    edx = MEM32(ebp + 0xC);
    MEM32(esp + 0xC) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(ecx + 0x40); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(ecx + 0x40, xmm0); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x70); /* movaps */
    xmm0 = XMM_MEM(edx); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm5 = XMM_MEM(ecx + 0x90); /* movaps */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0xC9); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xD2); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0xD2); /* shufps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xC9); /* shufps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm2 = XMM_MEM(ecx + 0x80); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm3); /* subps */
    xmm3 = XMM_MEM(ecx + 0xA0); /* movaps */
    xmm4 = xmm3; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm3, 0x44); /* shufps */
    xmm7 = xmm3; /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm5, 0x44); /* shufps */
    xmm7 = XMM_SHUFFLE(xmm7, xmm3, 0xEE); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm5, 0xEE); /* shufps */
    xmm5 = xmm1; /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0x55); /* shufps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm4, 0x88); /* shufps */
    xmm6 = xmm0; /* movaps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm0, 0xAA); /* shufps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm4, 0xDD); /* shufps */
    xmm5 = XMM_MUL(xmm5, xmm3); /* mulps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(ecx + 0xE0); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    xmm3 = XMM_MEM(ecx + 0x90); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm5); /* addps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm7, 0x88); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm6); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm2); /* addps */
    xmm2 = XMM_MEM(ecx + 0xA0); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xAA); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(ecx + 0x80); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = XMM_MEM(ecx + 0x50); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(ecx + 0x50, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CD750
 * Original: 0x001CD750 - 0x001CD814 (196 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CD750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD750: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm3 = XMM_MEM(ecx + 0xA0); /* movaps */
    xmm2 = XMM_MEM(ecx + 0x80); /* movaps */
    xmm5 = XMM_MEM(ecx + 0x90); /* movaps */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm4 = xmm3; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm3, 0x44); /* shufps */
    xmm7 = xmm3; /* movaps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm5, 0x44); /* shufps */
    xmm7 = XMM_SHUFFLE(xmm7, xmm3, 0xEE); /* shufps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0x55); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm5, 0xEE); /* shufps */
    xmm5 = xmm0; /* movaps */
    xmm6 = xmm1; /* movaps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm1, 0xAA); /* shufps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm4, 0x88); /* shufps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm4, 0xDD); /* shufps */
    xmm5 = XMM_MUL(xmm5, xmm3); /* mulps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm3); /* mulps */
    xmm3 = XMM_MEM(ecx + 0x90); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm5); /* addps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm7, 0x88); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm6); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm2 = XMM_MEM(ecx + 0xA0); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_MEM(ecx + 0xE0); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xAA); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(ecx + 0x80); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = XMM_MEM(ecx + 0x50); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(ecx + 0x50, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD820
 * Original: 0x001CD820 - 0x001CD97F (351 bytes, 99 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CD820(void)
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

loc_001CD820: ;
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
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esi + 0xC0, xmm0); /* movaps */
    XMM_STORE(esi + 0xD0, xmm1); /* movaps */
    xmm1 = XMM_MEM(esi + 0x70); /* movaps */
    XMM_STORE(esi + 0x60, xmm1); /* movaps */
    eax = MEM32(ebx);
    MEM32(esp + 8) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm0); /* mulps */
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esi + 0x70, xmm0); /* movaps */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0xC, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0xC); /* movaps */
    ecx = esp + 8;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_MEM(esi + 0x50); /* movaps */
    xmm1 = XMM_MEM(0x2F9890); /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    edi = esi + 0x30;
    PUSH32(esp, edi);
    edx = esp + 0x14;
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm3 = XMM_AND(xmm3, xmm1); /* andps */
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    XMM_STORE(esp + 0x18, xmm3); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CD8F5u); RECOMP_ABI_CALL(0x001CB6F0u, sub_001CB6F0); /* call 0x001CB6F0 */

loc_001CD8F5: ;
    eax = MEM32(ebx);
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    MEM32(esp + 0xC) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(edi); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    ecx = edi;
    XMM_STORE(edi, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CD920u); RECOMP_ABI_CALL(0x001CB630u, sub_001CB630); /* call 0x001CB630 */

loc_001CD920: ;
    ebx = esi + 0x80;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CD92Eu); RECOMP_ABI_CALL(0x001CF400u, sub_001CF400); /* call 0x001CF400 */

loc_001CD92E: ;
    xmm0 = XMM_MEM(esi + 0x20); /* movaps */
    xmm2 = XMM_MEM(ebx + 0x20); /* movaps */
    xmm3 = XMM_MEM(ebx + 0x10); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xAA); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(ebx); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = XMM_MEM(esi + 0x70); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esi + 0xB0, xmm1); /* movaps */
    POP32(esp, edi);
    MEM32(esi + 0x7C) = 0x3F800000;
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
 * sub_001CD980
 * Original: 0x001CD980 - 0x001CDABA (314 bytes, 85 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CD980(void)
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

loc_001CD980: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    fp_push(MEMF(edx)); /* fld float */
    xmm1 = XMM_MEM(ecx + 0xF0); /* movaps */
    eax = MEM32(ebp + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x2C)); /* fmul dword ptr [ecx + 0x2c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm0 = XMM_MEM(ecx + 0x40); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(ecx + 0x40, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(ecx + 0x40); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(ecx + 0x40, xmm0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x14)); /* fmul dword ptr [ecx + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) - fp_top()); /* fsubr dword ptr [0x2dc08c] */
    fp_push(MEMF(0x2DC098)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CDA00; /* jne: not equal / not zero */

loc_001CD9F8: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2DC098)); /* fld float */

loc_001CDA00: ;
    xmm1 = XMM_MEM(ecx + 0x40); /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_push(MEMF(0x2DC098)); /* fld float */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(ecx + 0x40, xmm2); /* movaps */
    fp_push(MEMF(ecx + 0x10C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    XMM_STORE(ecx + 0xF0, xmm0); /* movaps */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001CDA78; /* jnp: not parity */

loc_001CDA40: ;
    edx = MEM32(edx);
    xmm1 = XMM_MEM(ecx + 0x100); /* movaps */
    MEM32(esp + 0xC) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    eax = esp + 0x10;
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    PUSH32(esp, eax);
    XMM_STORE(esp + 0x14, xmm2); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CDA6Cu); RECOMP_ABI_CALL(0x001CD750u, sub_001CD750); /* call 0x001CD750 */

loc_001CDA6C: ;
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(ecx + 0x100, xmm0); /* movaps */

loc_001CDA78: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18)); /* fmul dword ptr [ecx + 0x18] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) - fp_top()); /* fsubr dword ptr [0x2dc08c] */
    fp_push(MEMF(0x2DC098)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CDA98; /* jne: not equal / not zero */

loc_001CDA90: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2DC098)); /* fld float */

loc_001CDA98: ;
    xmm1 = XMM_MEM(ecx + 0x50); /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(ecx + 0x50, xmm2); /* movaps */
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
 * sub_001CDAC0
 * Original: 0x001CDAC0 - 0x001CDC77 (439 bytes, 124 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CDAC0(void)
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

loc_001CDAC0: ;
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
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    fp_push(MEMF(ecx)); /* fld float */
    xmm1 = XMM_MEM(esi + 0xF0); /* movaps */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x2C)); /* fmul dword ptr [esi + 0x2c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esi + 0x40, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esi + 0x40, xmm0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) - fp_top()); /* fsubr dword ptr [0x2dc08c] */
    fp_push(MEMF(0x2DC098)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CDB45; /* jne: not equal / not zero */

loc_001CDB3D: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2DC098)); /* fld float */

loc_001CDB45: ;
    xmm1 = XMM_MEM(esi + 0x40); /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_push(MEMF(0x2DC098)); /* fld float */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(esi + 0x40, xmm2); /* movaps */
    fp_push(MEMF(esi + 0x10C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    XMM_STORE(esi + 0xF0, xmm0); /* movaps */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001CDBBF; /* jnp: not parity */

loc_001CDB85: ;
    ecx = MEM32(ecx);
    xmm1 = XMM_MEM(esi + 0x100); /* movaps */
    MEM32(esp + 0xC) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    edx = esp + 0x10;
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    PUSH32(esp, edx);
    ecx = esi;
    XMM_STORE(esp + 0x14, xmm2); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CDBB3u); RECOMP_ABI_CALL(0x001CD750u, sub_001CD750); /* call 0x001CD750 */

loc_001CDBB3: ;
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(esi + 0x100, xmm0); /* movaps */

loc_001CDBBF: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) - fp_top()); /* fsubr dword ptr [0x2dc08c] */
    fp_push(MEMF(0x2DC098)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CDBDF; /* jne: not equal / not zero */

loc_001CDBD7: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2DC098)); /* fld float */

loc_001CDBDF: ;
    edi = MEM32(ebp + 0x10);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    xmm2 = xmm0; /* movaps */
    eax = esi + 0x80;
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    ebx = edi + 0x50;
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    PUSH32(esp, eax);
    ecx = ebx;
    XMM_STORE(esi + 0x50, xmm2); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CDC0Fu); RECOMP_ABI_CALL(0x001CF510u, sub_001CF510); /* call 0x001CF510 */

loc_001CDC0F: ;
    MEM8(edi) = 2;
    xmm0 = XMM_MEM(esi + 0xE0); /* movaps */
    XMM_STORE(edi + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(edi + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    XMM_STORE(edi + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    xmm2 = XMM_MEM(ebx + 0x20); /* movaps */
    xmm3 = XMM_MEM(ebx + 0x10); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xAA); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(ebx); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(edi + 0x20, xmm0); /* movaps */
    MEM8(edi + 0xC) = 0;
    eax = edi + 0x80;
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
 * sub_001CDC80
 * Original: 0x001CDC80 - 0x001CDEB8 (568 bytes, 156 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CDC80(void)
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

loc_001CDC80: ;
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
    MEM32(esp) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm0); /* mulps */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    XMM_STORE(esi + 0x40, xmm2); /* movaps */
    xmm0 = XMM_MEM(eax + 0x50); /* movaps */
    xmm3 = XMM_MEM(esi + 0xA0); /* movaps */
    xmm4 = XMM_MEM(esi + 0x90); /* movaps */
    eax = MEM32(ebp + 8);
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm4 = XMM_MUL(xmm4, xmm2); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(esi + 0x80); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    PUSH32(esp, edi);
    edi = esi + 0x80;
    xmm0 = XMM_ADD(xmm0, xmm4); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm0); /* mulps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esi + 0x50, xmm2); /* movaps */
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    XMM_STORE(esi + 0xC0, xmm0); /* movaps */
    XMM_STORE(esi + 0xD0, xmm1); /* movaps */
    xmm1 = XMM_MEM(esi + 0x70); /* movaps */
    XMM_STORE(esi + 0x60, xmm1); /* movaps */
    ecx = MEM32(eax);
    MEM32(esp + 0xC) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm0); /* mulps */
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esi + 0x70, xmm0); /* movaps */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
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
    edx = esp + 0xC;
    MEMF(edx) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEM32(esp + 0xC) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_MEM(esi + 0x50); /* movaps */
    xmm1 = XMM_MEM(0x2F9890); /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    ebx = esi + 0x30;
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    xmm3 = XMM_AND(xmm3, xmm1); /* andps */
    XMM_STORE(esp + 0x14, xmm3); /* movaps */
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CDDC6u); RECOMP_ABI_CALL(0x001CB6F0u, sub_001CB6F0); /* call 0x001CB6F0 */

loc_001CDDC6: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    MEM32(esp + 0xC) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(ebx); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    ecx = ebx;
    XMM_STORE(ebx, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CDDF4u); RECOMP_ABI_CALL(0x001CB630u, sub_001CB630); /* call 0x001CB630 */

loc_001CDDF4: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CDDFCu); RECOMP_ABI_CALL(0x001CF400u, sub_001CF400); /* call 0x001CF400 */

loc_001CDDFC: ;
    xmm0 = XMM_MEM(esi + 0x20); /* movaps */
    xmm2 = XMM_MEM(edi + 0x20); /* movaps */
    xmm3 = XMM_MEM(edi + 0x10); /* movaps */
    eax = MEM32(ebp + 0x10);
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xAA); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(edi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = XMM_MEM(esi + 0x70); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esi + 0xB0, xmm1); /* movaps */
    MEM32(esi + 0x7C) = 0x3F800000;
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(esi + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    xmm2 = XMM_MEM(edi + 0x20); /* movaps */
    xmm3 = XMM_MEM(edi + 0x10); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xAA); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(edi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esi + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x2F9890); /* movaps */
    xmm1 = XMM_MEM(esi + 0x40); /* movaps */
    xmm1 = XMM_AND(xmm1, xmm0); /* andps */
    XMM_STORE(esi + 0x40, xmm1); /* movaps */
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    xmm0 = XMM_MEM(0x2F9890); /* movaps */
    POP32(esp, edi);
    xmm1 = XMM_AND(xmm1, xmm0); /* andps */
    XMM_STORE(esi + 0x50, xmm1); /* movaps */
    POP32(esp, esi);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_001CDEC0
 * Original: 0x001CDEC0 - 0x001CE10B (587 bytes, 160 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CDEC0(void)
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

loc_001CDEC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x7C)); /* fmul dword ptr [esi + 0x7c] */
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    xmm1 = XMM_MEM(esi + 0xC0); /* movaps */
    XMM_STORE(esi + 0x60, xmm0); /* movaps */
    fp_top() = -fp_top(); /* fchs */
    eax = esp + 8;
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    XMM_STORE(esp + 0x2C, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esi + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0xD0); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm2 = XMM_MEM(esi + 0xD0); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0xC, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0xC); /* movaps */
    MEMF(eax) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    edi = esi + 0x30;
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_MEM(0x2F9890); /* movaps */
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    fp_pop(); /* fstp st(0) */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    PUSH32(esp, ecx);
    xmm3 = XMM_AND(xmm3, xmm1); /* andps */
    ecx = esp + 0x28;
    XMM_STORE(esp + 0x48, xmm0); /* movaps */
    XMM_STORE(esp + 0x18, xmm3); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CDF9Bu); RECOMP_ABI_CALL(0x001CB6F0u, sub_001CB6F0); /* call 0x001CB6F0 */

loc_001CDF9B: ;
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(edi); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    ecx = edi;
    XMM_STORE(edi, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CDFBFu); RECOMP_ABI_CALL(0x001CB630u, sub_001CB630); /* call 0x001CB630 */

loc_001CDFBF: ;
    ebx = esi + 0x80;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CDFCDu); RECOMP_ABI_CALL(0x001CF400u, sub_001CF400); /* call 0x001CF400 */

loc_001CDFCD: ;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CDFDBu); RECOMP_ABI_CALL(0x00029F10u, sub_00029F10); /* call 0x00029F10 */

loc_001CDFDB: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    xmm1 = XMM_MEM(esi + 0x70); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esi + 0xB0, xmm1); /* movaps */
    MEM32(esi + 0x7C) = 0x3F800000;
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    xmm1 = XMM_MEM(esi + 0xC0); /* movaps */
    XMM_STORE(esi + 0x60, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x70); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esi + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0xD0); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm2 = XMM_MEM(esi + 0xD0); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    edx = esp + 0xC;
    MEMF(edx) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, edi);
    eax = esp + 0x44;
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_MEM(0x2F9890); /* movaps */
    xmm3 = XMM_AND(xmm3, xmm1); /* andps */
    PUSH32(esp, eax);
    fp_pop(); /* fstp st(0) */
    ecx = esp + 0x38;
    XMM_STORE(esp + 0x48, xmm3); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CE0AFu); RECOMP_ABI_CALL(0x001CB6F0u, sub_001CB6F0); /* call 0x001CB6F0 */

loc_001CE0AF: ;
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    xmm1 = XMM_MEM(esp + 0x30); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(edi); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    ecx = edi;
    XMM_STORE(edi, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CE0D3u); RECOMP_ABI_CALL(0x001CB630u, sub_001CB630); /* call 0x001CB630 */

loc_001CE0D3: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CE0DBu); RECOMP_ABI_CALL(0x001CF400u, sub_001CF400); /* call 0x001CF400 */

loc_001CE0DB: ;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CE0E9u); RECOMP_ABI_CALL(0x00029F10u, sub_00029F10); /* call 0x00029F10 */

loc_001CE0E9: ;
    xmm1 = XMM_MEM(esi + 0x70); /* movaps */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    ecx = MEM32(ebp + 8);
    POP32(esp, edi);
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esi + 0xB0, xmm1); /* movaps */
    MEM32(esi + 0x7C) = ecx;
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
 * sub_001CE110
 * Original: 0x001CE110 - 0x001CE2F3 (483 bytes, 184 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE110: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(edi + 0xC) = eax;
    ecx = MEM32(esi + 4);
    MEM32(edi + 0x10) = ecx;
    edx = MEM32(esi + 8);
    MEM32(edi + 0x14) = edx;
    eax = MEM32(esi + 0xC);
    MEM32(edi + 0x18) = eax;
    ecx = MEM32(edi + 0x24);
    edx = MEM32(esi + 0x14);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CE177; /* jge: greater or equal (signed >=) */

loc_001CE141: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001CE15A; /* js: sign (negative) */

loc_001CE145: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x1C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001CE15Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE157u); } /* indirect call */
    }

loc_001CE15A: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001CE16Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE16Bu); } /* indirect call */
    }

loc_001CE16E: ;
    MEM32(edi + 0x1C) = eax;
    eax = MEM32(esi + 0x14);
    MEM32(edi + 0x24) = eax;

loc_001CE177: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(edi + 0x1C);
    MEM32(edi + 0x20) = ecx;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(esi + 0x10);
    if (CMP_LE(_fas, _fbs)) goto loc_001CE19D; /* jle: less or equal (signed <=) */

loc_001CE18A: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001CE190: ;
    xmm0 = XMM_MEM(ecx + eax); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CE190; /* jne: not equal / not zero */

loc_001CE19D: ;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(esi + 0x20);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CE1E4; /* jge: greater or equal (signed >=) */

loc_001CE1AE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001CE1C7; /* js: sign (negative) */

loc_001CE1B2: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x28);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001CE1C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE1C4u); } /* indirect call */
    }

loc_001CE1C7: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001CE1DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE1D8u); } /* indirect call */
    }

loc_001CE1DB: ;
    MEM32(edi + 0x28) = eax;
    ecx = MEM32(esi + 0x20);
    MEM32(edi + 0x30) = ecx;

loc_001CE1E4: ;
    edx = MEM32(esi + 0x20);
    eax = MEM32(edi + 0x28);
    MEM32(edi + 0x2C) = edx;
    edx = MEM32(esi + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(esi + 0x1C);
    if (CMP_LE(_fas, _fbs)) goto loc_001CE20B; /* jle: less or equal (signed <=) */

loc_001CE1F7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001CE200: ;
    ebx = MEM32(ecx + eax);
    MEM32(eax) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CE200; /* jne: not equal / not zero */

loc_001CE20B: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(esi + 0x2C);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CE252; /* jge: greater or equal (signed >=) */

loc_001CE21C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001CE235; /* js: sign (negative) */

loc_001CE220: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x34);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001CE235u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE232u); } /* indirect call */
    }

loc_001CE235: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001CE249u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE246u); } /* indirect call */
    }

loc_001CE249: ;
    MEM32(edi + 0x34) = eax;
    ecx = MEM32(esi + 0x2C);
    MEM32(edi + 0x3C) = ecx;

loc_001CE252: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edi + 0x34);
    MEM32(edi + 0x38) = edx;
    edx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(esi + 0x28);
    if (CMP_LE(_fas, _fbs)) goto loc_001CE272; /* jle: less or equal (signed <=) */

loc_001CE265: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001CE267: ;
    ebx = MEM32(ecx + eax);
    MEM32(eax) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CE267; /* jne: not equal / not zero */

loc_001CE272: ;
    ecx = MEM32(edi + 0x48);
    edx = MEM32(esi + 0x38);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CE2B9; /* jge: greater or equal (signed >=) */

loc_001CE283: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001CE29C; /* js: sign (negative) */

loc_001CE287: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x40);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001CE29Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE299u); } /* indirect call */
    }

loc_001CE29C: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001CE2B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE2ADu); } /* indirect call */
    }

loc_001CE2B0: ;
    MEM32(edi + 0x40) = eax;
    ecx = MEM32(esi + 0x38);
    MEM32(edi + 0x48) = ecx;

loc_001CE2B9: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(edi + 0x40);
    MEM32(edi + 0x44) = edx;
    edx = MEM32(esi + 0x38);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(esi + 0x34);
    if (CMP_LE(_fas, _fbs)) goto loc_001CE2E7; /* jle: less or equal (signed <=) */

loc_001CE2CC: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_001CE2D0: ;
    ebx = MEM32(ecx + eax);
    MEM32(eax) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CE2D0; /* jne: not equal / not zero */

loc_001CE2DB: ;
    eax = MEM32(esi + 0x44);
    MEM32(edi + 0x4C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001CE2E7: ;
    ecx = MEM32(esi + 0x44);
    MEM32(edi + 0x4C) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CE300
 * Original: 0x001CE300 - 0x001CE543 (579 bytes, 224 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CE300: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0xC);
    MEM32(esi) = eax;
    ecx = MEM32(edi + 0x10);
    MEM32(esi + 4) = ecx;
    edx = MEM32(edi + 0x14);
    MEM32(esi + 8) = edx;
    eax = MEM32(edi + 0x18);
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(edi + 0x20);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CE366; /* jge: greater or equal (signed >=) */

loc_001CE330: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001CE349; /* js: sign (negative) */

loc_001CE334: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001CE349u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE346u); } /* indirect call */
    }

loc_001CE349: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001CE35Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE35Au); } /* indirect call */
    }

loc_001CE35D: ;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(edi + 0x20);
    MEM32(esi + 0x18) = eax;

loc_001CE366: ;
    ecx = MEM32(edi + 0x20);
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(edi + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(edi + 0x1C);
    if (CMP_LE(_fas, _fbs)) goto loc_001CE38D; /* jle: less or equal (signed <=) */

loc_001CE379: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_001CE380;

    /* nop */

loc_001CE380: ;
    xmm0 = XMM_MEM(ecx + eax); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CE380; /* jne: not equal / not zero */

loc_001CE38D: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(edi + 0x2C);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CE3D4; /* jge: greater or equal (signed >=) */

loc_001CE39E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001CE3B7; /* js: sign (negative) */

loc_001CE3A2: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001CE3B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE3B4u); } /* indirect call */
    }

loc_001CE3B7: ;
    eax = MEM32(edi + 0x2C);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001CE3CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE3C8u); } /* indirect call */
    }

loc_001CE3CB: ;
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(edi + 0x2C);
    MEM32(esi + 0x24) = ecx;

loc_001CE3D4: ;
    edx = MEM32(edi + 0x2C);
    eax = MEM32(esi + 0x1C);
    MEM32(esi + 0x20) = edx;
    edx = MEM32(edi + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(edi + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    if (CMP_LE(_fas, _fbs)) goto loc_001CE3FB; /* jle: less or equal (signed <=) */

loc_001CE3E9: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_001CE3F0;

    /* nop */

loc_001CE3F0: ;
    ebx = MEM32(ecx + eax);
    MEM32(eax) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CE3F0; /* jne: not equal / not zero */

loc_001CE3FB: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(edi + 0x38);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CE442; /* jge: greater or equal (signed >=) */

loc_001CE40C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001CE425; /* js: sign (negative) */

loc_001CE410: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001CE425u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE422u); } /* indirect call */
    }

loc_001CE425: ;
    eax = MEM32(edi + 0x38);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001CE439u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE436u); } /* indirect call */
    }

loc_001CE439: ;
    MEM32(esi + 0x28) = eax;
    ecx = MEM32(edi + 0x38);
    MEM32(esi + 0x30) = ecx;

loc_001CE442: ;
    edx = MEM32(edi + 0x38);
    eax = MEM32(esi + 0x28);
    MEM32(esi + 0x2C) = edx;
    edx = MEM32(edi + 0x38);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(edi + 0x34);
    if (CMP_LE(_fas, _fbs)) goto loc_001CE462; /* jle: less or equal (signed <=) */

loc_001CE455: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001CE457: ;
    ebx = MEM32(ecx + eax);
    MEM32(eax) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CE457; /* jne: not equal / not zero */

loc_001CE462: ;
    eax = MEM32(esi + 0x48);
    ebx = MEM32(edi + 0x4C);
    ebp = esi + 0x40;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CE488; /* jge: greater or equal (signed >=) */

loc_001CE474: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CE47C; /* jl: less (signed <) */

loc_001CE47A: ;
    eax = ebx;

loc_001CE47C: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001CE485u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001CE485: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CE488: ;
    MEM32(ebp + 4) = ebx;
    edx = MEM32(edi + 0x44);
    ebp = MEM32(esi + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CE4AF; /* jle: less or equal (signed <=) */

loc_001CE497: ;
    goto loc_001CE4A0;

    /* nop */

loc_001CE4A0: ;
    ecx = MEM32(edi + 0x40);
    ecx = MEM32(ecx + eax * 4);
    MEM16(ecx + 6) = MEM16(ecx + 6) + 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CE4A0; /* jl: less (signed <) */

loc_001CE4AF: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CE4D1; /* jle: less or equal (signed <=) */

loc_001CE4B5: ;
    edx = MEM32(esi + 0x34);
    ecx = MEM32(edx + ebx * 4);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CE4CC; /* jne: not equal / not zero */

loc_001CE4C6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001CE4CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE4CAu); } /* indirect call */
    }

loc_001CE4CC: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CE4B5; /* jl: less (signed <) */

loc_001CE4D1: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(edi + 0x44);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_001CE51A; /* jge: greater or equal (signed >=) */

loc_001CE4E4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001CE4FD; /* js: sign (negative) */

loc_001CE4E8: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001CE4FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE4FAu); } /* indirect call */
    }

loc_001CE4FD: ;
    eax = MEM32(edi + 0x44);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001CE511u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE50Eu); } /* indirect call */
    }

loc_001CE511: ;
    MEM32(esi + 0x34) = eax;
    ecx = MEM32(edi + 0x44);
    MEM32(esi + 0x3C) = ecx;

loc_001CE51A: ;
    edx = MEM32(edi + 0x44);
    MEM32(esi + 0x38) = edx;
    edx = MEM32(edi + 0x44);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edi = MEM32(edi + 0x40);
    esi = MEM32(esi + 0x34);
    if (CMP_LE(_fas, _fbs)) goto loc_001CE53E; /* jle: less or equal (signed <=) */

loc_001CE52D: ;
    ecx = edi;
    eax = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001CE533: ;
    esi = MEM32(ecx + eax);
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CE533; /* jne: not equal / not zero */

loc_001CE53E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CE550
 * Original: 0x001CE550 - 0x001CE6C1 (369 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CE550(void)
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

loc_001CE550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(0x2DC098)); /* fld float */
    xmm0 = XMM_MEM(eax); /* movaps */
    ecx = MEM32(ebp + 0xC);
    xmm1 = XMM_MEM(ecx); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001CE5E5; /* jnp: not parity */

loc_001CE59F: ;
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm2.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0x10); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 8) = 0x40400000;
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 8) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    goto loc_001CE5F3;

loc_001CE5E5: ;
    MEM32(esp + 8) = 0;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_001CE5F3: ;
    edx = MEM32(ebp + 0x14);
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    eax = MEM32(ebp + 0x10);
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = XMM_MEM(edx); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xD2); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xC9); /* shufps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0xC9); /* shufps */
    xmm4 = xmm2; /* movaps */
    xmm4 = XMM_MUL(xmm4, xmm0); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0xD2); /* shufps */
    xmm1 = xmm3; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm4); /* subps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xD2); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    xmm3 = xmm1; /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xC9); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm2 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm1 = XMM_SUB(xmm1, xmm3); /* subps */
    xmm3 = xmm0; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0x55); /* shufps */
    xmm4 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xAA); /* shufps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0x55); /* shufps */
    xmm2 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0xAA); /* shufps */
    edx = esp + 8;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    ecx = esp + 0xC;
    MEMF(edx) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 8);
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CE6AAu); RECOMP_ABI_CALL(0x001CFAB0u, sub_001CFAB0); /* call 0x001CFAB0 */

loc_001CE6AA: ;
    edx = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_MEM(esp + 0x18); /* movaps */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(eax, xmm0); /* movaps */
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
 * sub_001CE6D0
 * Original: 0x001CE6D0 - 0x001CE709 (57 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE6D0: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CE707; /* js: sign (negative) */

loc_001CE6D7: ;
    PUSH32(esp, edi);

loc_001CE6D8: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + esi * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CE703; /* jne: not equal / not zero */

loc_001CE6E0: ;
    ecx = MEM32(eax + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(eax + 4) = ecx;
    ecx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_001CE703; /* jge: greater or equal (signed >=) */

loc_001CE6EF: ;
    /* nop */

loc_001CE6F0: ;
    edx = MEM32(eax);
    edi = MEM32(edx + ecx * 4 + 4);
    edx = edx + ecx * 4;
    MEM32(edx) = edi;
    edx = MEM32(eax + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CE6F0; /* jl: less (signed <) */

loc_001CE703: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CE6D8; /* jns: not sign (positive) */

loc_001CE706: ;
    POP32(esp, edi);

loc_001CE707: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CE710
 * Original: 0x001CE710 - 0x001CE759 (73 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE710: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x4C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001CE72E; /* jle: less or equal (signed <=) */

loc_001CE71B: ;
    edx = MEM32(ecx + 0x48);
    edi = MEM32(esp + 0xC);

loc_001CE722: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE731; /* je: equal / zero */

loc_001CE726: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CE722; /* jl: less (signed <) */

loc_001CE72E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001CE731: ;
    edi = MEM32(ecx + 0x4C);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ecx + 0x4C) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_001CE754; /* jge: greater or equal (signed >=) */

loc_001CE73E: ;
    edi = edi;

loc_001CE740: ;
    edx = MEM32(ecx + 0x48);
    esi = MEM32(edx + eax * 4 + 4);
    edx = edx + eax * 4;
    MEM32(edx) = esi;
    edx = MEM32(ecx + 0x4C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CE740; /* jl: less (signed <) */

loc_001CE754: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CE760
 * Original: 0x001CE760 - 0x001CE7A9 (73 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE760: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x40);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001CE77E; /* jle: less or equal (signed <=) */

loc_001CE76B: ;
    edx = MEM32(ecx + 0x3C);
    edi = MEM32(esp + 0xC);

loc_001CE772: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE781; /* je: equal / zero */

loc_001CE776: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CE772; /* jl: less (signed <) */

loc_001CE77E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001CE781: ;
    edi = MEM32(ecx + 0x40);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ecx + 0x40) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_001CE7A4; /* jge: greater or equal (signed >=) */

loc_001CE78E: ;
    edi = edi;

loc_001CE790: ;
    edx = MEM32(ecx + 0x3C);
    esi = MEM32(edx + eax * 4 + 4);
    edx = edx + eax * 4;
    MEM32(edx) = esi;
    edx = MEM32(ecx + 0x40);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CE790; /* jl: less (signed <) */

loc_001CE7A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CE7B0
 * Original: 0x001CE7B0 - 0x001CE7E1 (49 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE7B0: ;
    eax = MEM32(ecx + 0x50);
    PUSH32(esp, esi);
    esi = ecx + 0x48;
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CE7CE; /* jne: not equal / not zero */

loc_001CE7C3: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CE7CBu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001CE7CB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CE7CE: ;
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
 * sub_001CE7F0
 * Original: 0x001CE7F0 - 0x001CE821 (49 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE7F0: ;
    eax = MEM32(ecx + 0x44);
    PUSH32(esp, esi);
    esi = ecx + 0x3C;
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CE80E; /* jne: not equal / not zero */

loc_001CE803: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CE80Bu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001CE80B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CE80E: ;
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
 * sub_001CE830
 * Original: 0x001CE830 - 0x001CE8E4 (180 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE830: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2461AE);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    MEM32(esi) = 0x2F9284;
    eax = MEM32(esi + 0x4C);
    edi = eax + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x14) = 2;
    if (CMP_L(_fas, _fbs)) goto loc_001CE878; /* jl: less (signed <) */

loc_001CE866: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE875; /* je: equal / zero */

loc_001CE870: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001CE875u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE873u); } /* indirect call */
    }

loc_001CE875: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CE866; /* jns: not sign (positive) */

loc_001CE878: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 1;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001CE89E; /* js: sign (negative) */

loc_001CE884: ;
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001CE89Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE89Bu); } /* indirect call */
    }

loc_001CE89E: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001CE8C4; /* js: sign (negative) */

loc_001CE8AA: ;
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001CE8C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE8C1u); } /* indirect call */
    }

loc_001CE8C4: ;
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001CE8D3u); RECOMP_ABI_CALL(0x001C2B80u, sub_001C2B80); /* call 0x001C2B80 */

loc_001CE8D3: ;
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
 * sub_001CE8F0
 * Original: 0x001CE8F0 - 0x001CEA1E (302 bytes, 90 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE8F0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2461D0);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEA0C; /* je: equal / zero */

loc_001CE916: ;
    eax = MEM32(eax + 0x238);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x001CE926u); RECOMP_ABI_CALL(0x001BE430u, sub_001BE430); /* call 0x001BE430 */

loc_001CE926: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x238);
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    MEM32(esp + 0x3C) = 0;
    PUSH32(esp, 0x001CE941u); RECOMP_ABI_CALL(0x001BE430u, sub_001BE430); /* call 0x001BE430 */

loc_001CE941: ;
    eax = esi + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x38) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001CE956; /* je: equal / zero */

loc_001CE94D: ;
    ecx = esi + 0x1C;
    MEM32(esp + 4) = ecx;
    goto loc_001CE95E;

loc_001CE956: ;
    MEM32(esp + 4) = 0;

loc_001CE95E: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(edx + 0xC4);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x48);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001CE982u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE97Fu); } /* indirect call */
    }

loc_001CE982: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CE992; /* jne: not equal / not zero */

loc_001CE98A: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE9ED; /* je: equal / zero */

loc_001CE992: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE99Du); RECOMP_ABI_CALL(0x00230790u, sub_00230790); /* call 0x00230790 */

loc_001CE99D: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001CE9ACu); RECOMP_ABI_CALL(0x00230790u, sub_00230790); /* call 0x00230790 */

loc_001CE9AC: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0xD0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE9C1; /* je: equal / zero */

loc_001CE9BC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001CE9C3;

loc_001CE9C1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CE9C3: ;
    edx = MEM32(esp + 8);
    eax = MEM32(eax + 0x138);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x001CE9E5u); RECOMP_ABI_CALL(0x00230500u, sub_00230500); /* call 0x00230500 */

loc_001CE9E5: ;
    eax = esi + 0x3C;
    PUSH32(esp, 0x001CE9EDu); RECOMP_ABI_CALL(0x001CE6D0u, sub_001CE6D0); /* call 0x001CE6D0 */

loc_001CE9ED: ;
    ecx = esp + 8;
    MEM8(esp + 0x38) = 0;
    PUSH32(esp, 0x001CE9FBu); RECOMP_ABI_CALL(0x001BE5F0u, sub_001BE5F0); /* call 0x001BE5F0 */

loc_001CE9FB: ;
    ecx = esp + 0x1C;
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001CEA0Cu); RECOMP_ABI_CALL(0x001BE5F0u, sub_001BE5F0); /* call 0x001BE5F0 */

loc_001CEA0C: ;
    ecx = MEM32(esp + 0x30);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CEA20
 * Original: 0x001CEA20 - 0x001CEA26 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEA20(void)
{

loc_001CEA20: ;
    eax = 0x441008;
    esp += 4; return; /* ret */

}

/**
 * sub_001CEA30
 * Original: 0x001CEA30 - 0x001CEA5D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEA30(void)
{

loc_001CEA30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001CEA38u); RECOMP_ABI_CALL(0x001CB1B0u, sub_001CB1B0); /* call 0x001CB1B0 */

loc_001CEA38: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esi + 0x20, xmm0); /* movaps */
    XMM_STORE(esi + 0x30, xmm0); /* movaps */
    XMM_STORE(esi + 0x40, xmm0); /* movaps */
    eax = 0x3F800000;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x48) = eax;
    XMM_STORE(esi + 0x50, xmm0); /* movaps */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CEA60
 * Original: 0x001CEA60 - 0x001CEA66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEA60(void)
{

loc_001CEA60: ;
    eax = 0x441058;
    esp += 4; return; /* ret */

}

/**
 * sub_001CEA70
 * Original: 0x001CEA70 - 0x001CEE0D (925 bytes, 308 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CEA70(void)
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

loc_001CEA70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x18);
    ecx = MEM32(ebx + 0x18);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x8692B8);
    MEM8(eax + 0x10) = 1;
    eax = MEM32(eax + 8);
    edx = ecx * 4 + 8;
    ecx = MEM32(0x8692B8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x38) = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CEAB2: ;
    ecx = MEM32(ebx + 0x14);
    edx = eax;
    eax = eax + ecx + 0x90;
    ecx = MEM32(ebx + 0xC);
    MEM32(esp + 0x1C) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x18) = eax;
    /* nop */

loc_001CEAD0: ;
    esi = MEM32(esp + 0x24);
    ecx = MEM32(ebx + 0x10);
    MEM32(esp + 0x2C) = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x30) = eax;
    eax = eax + ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001CEC12; /* jbe: below or equal (unsigned <=) */

loc_001CEAED: ;
    edx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001CEBC1; /* jae: above or equal (unsigned >=) */

loc_001CEAF9: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001CEB73; /* jb: below (unsigned <) */

loc_001CEAFF: ;
    esi = MEM32(ebx + 8);
    eax = MEM32(ebx + 0xC);
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx;
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edx + 4;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx + 0xC);
    eax = ebx + 0xF;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x30) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_001CEB38; /* jle: less or equal (signed <=) */

loc_001CEB30: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001CEB36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CEB33u); } /* indirect call */
    }

loc_001CEB36: ;
    goto loc_001CEB51;

loc_001CEB38: ;
    ebx = MEM32(ecx + 8);
    MEM32(esp + 0x34) = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x34);
    MEM32(ecx + 8) = ebx;
    ebx = MEM32(esp + 0x30);
    MEM32(ecx + 0xC) = edx;

loc_001CEB51: ;
    ecx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = edi;
    edi = eax + ebx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x28) = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx;
    goto loc_001CEAD0;

loc_001CEB73: ;
    edi = ecx + esi + 4;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx + 0xC);
    eax = edi + 0xF;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CEB9F; /* jle: less or equal (signed <=) */

loc_001CEB8A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001CEB90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CEB8Du); } /* indirect call */
    }

loc_001CEB90: ;
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001CEAD0;

loc_001CEB9F: ;
    esi = MEM32(ecx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = esi + eax;
    eax = esi;
    MEM32(ecx + 8) = ebx;
    ebx = MEM32(ebp + 0x18);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001CEAD0;

loc_001CEBC1: ;
    esi = MEM32(esp + 0x38);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    eax = esi + 0xF;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x34) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_001CEBF2; /* jle: less or equal (signed <=) */

loc_001CEBE0: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001CEBE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CEBE3u); } /* indirect call */
    }

loc_001CEBE6: ;
    MEM32(esp + 0x14) = eax;
    edi = eax + esi;
    goto loc_001CEAB2;

loc_001CEBF2: ;
    esi = MEM32(ecx + 8);
    edi = esi + eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    esi = MEM32(esp + 0x34);
    MEM32(ecx + 8) = edi;
    MEM32(ecx + 0xC) = edx;
    MEM32(esp + 0x14) = eax;
    edi = eax + esi;
    goto loc_001CEAB2;

loc_001CEC12: ;
    ecx = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x20);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esi = ecx + eax * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM8(edx) = 2;
    XMM_STORE(edx + 0x30, xmm0); /* movaps */
    XMM_STORE(edx + 0x10, xmm0); /* movaps */
    XMM_STORE(edx + 0x20, xmm0); /* movaps */
    XMM_STORE(edx + 0x40, xmm0); /* movaps */
    XMM_STORE(edx + 0x50, xmm0); /* movaps */
    eax = edx + 0x80;
    XMM_STORE(edx + 0x60, xmm0); /* movaps */
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x34) = esi;
    XMM_STORE(edx + 0x70, xmm0); /* movaps */
    MEM32(esp + 0x3C) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_001CEC85; /* jae: above or equal (unsigned >=) */

loc_001CEC53: ;
    esi = ecx;

loc_001CEC55: ;
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 0x3C);
    edx = eax;
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEC68; /* je: equal / zero */

loc_001CEC65: ;
    MEM32(ecx + 8) = edx;

loc_001CEC68: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001CEC76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CEC73u); } /* indirect call */
    }

loc_001CEC76: ;
    ecx = MEM32(esp + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001CEC55; /* jb: below (unsigned <) */

loc_001CEC81: ;
    edx = MEM32(esp + 0x10);

loc_001CEC85: ;
    ecx = MEM32(esp + 0x18);
    esi = MEM32(ebp + 0x24);
    MEM8(eax) = 3;
    eax = MEM32(ebp + 0x28);
    MEM32(esp + 0x24) = ecx;
    ecx = esi + eax * 4;
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(esp + 0x1C) = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x18) (32-bit) */
    MEM32(esp + 0x20) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_001CED13; /* jae: above or equal (unsigned >=) */

loc_001CECB3: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x3C);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(eax + 0x3C);
    ecx = MEM32(ecx + 8);
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x38);
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x24);
    MEM32(eax + 4) = ecx;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001CECF5; /* jb: below (unsigned <) */

loc_001CECE5: ;
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x24) = 0xFFFFFFFFu;

loc_001CECF5: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001CED04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CED01u); } /* indirect call */
    }

loc_001CED04: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001CECB3; /* jb: below (unsigned <) */

loc_001CED13: ;
    eax = MEM32(esp + 0x20);
    MEM32(eax) = 0x400;
    ecx = MEM32(ebx + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CED43; /* jle: less or equal (signed <=) */

loc_001CED26: ;
    goto loc_001CED30;

    /* nop */
    /* nop */

loc_001CED30: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(ecx + eax * 4) = 0;
    ecx = MEM32(ebx + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CED30; /* jl: less (signed <) */

loc_001CED43: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x30);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CED57u); RECOMP_ABI_CALL(0x00230CB0u, sub_00230CB0); /* call 0x00230CB0 */

loc_001CED57: ;
    ecx = MEM32(0x4409E4);
    edx = MEM32(0x4409E8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001CED7F; /* jae: above or equal (unsigned >=) */

loc_001CED6A: ;
    MEM32(ecx) = 0x2F9B24;
    fp_push((double)SMEM32(ebx + 0x18)); /* fild */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ecx + -4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x4409E4) = ecx;

loc_001CED7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEDBB; /* jne: not equal / not zero */

loc_001CED84: ;
    edx = MEM32(esi + 0x20);
    esi = MEM32(ebp + 0x1C);
    ebx = MEM32(esp + 0x34);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x38) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_001CEDBB; /* jae: above or equal (unsigned >=) */

loc_001CED9A: ;
    /* nop */

loc_001CEDA0: ;
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001CEDB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CEDB1u); } /* indirect call */
    }

loc_001CEDB4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001CEDA0; /* jb: below (unsigned <) */

loc_001CEDBB: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x8692B8);
    MEM8(ecx + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001CEE06; /* je: equal / zero */

loc_001CEDCD: ;
    ecx = MEM32(0x4409AC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi & 0xFFFFFFF0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_001CEDF6; /* je: equal / zero */

loc_001CEDDD: ;
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEDE8; /* je: equal / zero */

loc_001CEDE4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEDF6; /* jne: not equal / not zero */

loc_001CEDE8: ;
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x001CEDEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CEDECu); } /* indirect call */
    }

loc_001CEDEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001CEDF6: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;

loc_001CEE06: ;
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
 * sub_001CEE10
 * Original: 0x001CEE10 - 0x001CEF08 (248 bytes, 85 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEE10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEE10: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX16(MEM16(esp + 0x14));
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(eax));
    MEM8(eax) = 0xFF;
    ebp = MEM32(ebx + 0x94);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001CEE61; /* jne: not equal / not zero */

loc_001CEE49: ;
    MEM32(esp + 0x14) = 4;
    MEM32(esp + 0x10) = 0x20;
    MEM32(esp + 0x18) = 1;

loc_001CEE61: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CEE90; /* jge: greater or equal (signed >=) */

loc_001CEE66: ;
    eax = esi;
    edx = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);

loc_001CEE70: ;
    ecx = MEM32(ebx + 0x90);
    edi = eax + ecx;
    esi = edi + 0x1C;
    ecx = 7;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
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
    if ((_fa != 0)) goto loc_001CEE70; /* jne: not equal / not zero */

loc_001CEE89: ;
    esi = MEM32(esp + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);

loc_001CEE90: ;
    ecx = MEM32(ebx + 0x90);
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    MEM16(ecx + edx + 0x18) = LO16(eax);
    MEM32(ebx + 0x94) = ebp;
    MEM32(ebx + 0x38) = MEM32(ebx + 0x38) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebx + 0x24);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001CEEC9; /* js: sign (negative) */

loc_001CEEAF: ;
    /* nop */

loc_001CEEB0: ;
    edx = MEM32(ebx + 0x20);
    SET_LO8(ecx, MEM8(edx + eax));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEEC6; /* je: equal / zero */

loc_001CEEBD: ;
    ecx = ZX8(LO8(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CEEC6; /* jle: less or equal (signed <=) */

loc_001CEEC4: ;
    MEM8(edx) = MEM8(edx) - 1;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */

loc_001CEEC6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CEEB0; /* jns: not sign (positive) */

loc_001CEEC9: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(ebx + 0x14);
    eax = esp + 0xC;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebp;
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001CEEF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CEEF3u); } /* indirect call */
    }

loc_001CEEF6: ;
    eax = MEM32(ebx + 0x50);
    POP32(esp, esi);
    eax = eax | 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    MEM32(ebx + 0x50) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CEF10
 * Original: 0x001CEF10 - 0x001CEF6E (94 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CEF10: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = 0x18;
    ecx = MEM32(ecx + 0x94);
    edx = ecx + ecx * 2;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(eax) = edx;
    edx = ecx + 2;
    esi = edx + edx * 2;
    PUSH32(esp, edi);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    edi = ecx * 4 + 0x2C;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001CEF69; /* jl: less (signed <) */

loc_001CEF59: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edx;

loc_001CEF69: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CEF70
 * Original: 0x001CEF70 - 0x001CEF98 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEF70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CEF70: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x90);
    eax = ecx + 0x50;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x38);
    ecx = MEM32(ecx + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CEF92u); RECOMP_ABI_CALL(0x00233A80u, sub_00233A80); /* call 0x00233A80 */

loc_001CEF92: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CEFA0
 * Original: 0x001CEFA0 - 0x001CEFF7 (87 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CEFA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 4);
    eax = edx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CEFB9; /* jl: less (signed <) */

loc_001CEFAD: ;
    ecx = MEM32(esi);
    /* nop */

loc_001CEFB0: ;
    _fa = (uint32_t)(MEM8(ecx + eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEFEC; /* je: equal / zero */

loc_001CEFB6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001CEFB0; /* jns: not sign (positive) */

loc_001CEFB9: ;
    eax = MEM32(esi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEFD0; /* jne: not equal / not zero */

loc_001CEFC5: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CEFCDu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001CEFCD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CEFD0: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(esi);
    SET_LO8(eax, MEM8(esp + 8));
    MEM8(ecx + edx) = LO8(eax);
    eax = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    esi = eax;
    eax = esi + -1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001CEFEC: ;
    SET_LO8(edx, MEM8(esp + 8));
    POP32(esp, esi);
    MEM8(ecx + eax) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF000
 * Original: 0x001CF000 - 0x001CF179 (377 bytes, 133 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF000: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    eax = MEM32(ebx + 0x94);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + eax * 2;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xB0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 0x24) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_001CF036; /* jne: not equal / not zero */

loc_001CF02A: ;
    ecx = 4;
    edx = 0x20;
    esi = eax;

loc_001CF036: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(ebx + 0x14);
    edx = esp + 0x24;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = esi;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001CF057u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF054u); } /* indirect call */
    }

loc_001CF057: ;
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) | 6;
    _fa = (uint32_t)(MEM32(ebx + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(ebx + 0x38);
    eax = MEM32(ebx + 0x3C);
    edx = MEM32(ebx + 0x38);
    edi = ebx + 0x34;
    ebp = esi + 1;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001CF08F; /* jge: greater or equal (signed >=) */

loc_001CF077: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CF07F; /* jl: less (signed <) */

loc_001CF07D: ;
    eax = ebp;

loc_001CF07F: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CF088u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001CF088: ;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CF08F: ;
    MEM32(edi + 4) = ebp;
    ebp = MEM32(edi);
    eax = MEM32(ebx + 0x94);
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebx + 0x90;
    ecx = eax + 1;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebp + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x14) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001CF0DE; /* jge: greater or equal (signed >=) */

loc_001CF0C2: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CF0CA; /* jl: less (signed <) */

loc_001CF0C8: ;
    eax = ecx;

loc_001CF0CA: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001CF0D3u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001CF0D3: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CF0DE: ;
    esi = MEM32(ebp);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    edi = esi + eax;
    esi = MEM32(esp + 0x18);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;
    if ((_fas < 0)) goto loc_001CF132; /* js: sign (negative) */

loc_001CF0F4: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    ecx = edi + 0x1C;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x10) = esi;
    goto loc_001CF110;

loc_001CF10B: ;
    edi = MEM32(esp + 0x18);
    /* nop */

loc_001CF110: ;
    esi = edi + eax;
    edi = eax;
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
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    if ((_fa != 0)) goto loc_001CF10B; /* jne: not equal / not zero */

loc_001CF12A: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);

loc_001CF132: ;
    MEM32(ebp + 4) = ecx;
    ebp = MEM32(ebp);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = eax;
    MEM16(ebp + 0x18) = LO16(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_001CF156; /* jle: less or equal (signed <=) */

loc_001CF14A: ;
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -4), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF156; /* jne: not equal / not zero */

loc_001CF150: ;
    MEM16(ebp + 0x18) = 1;

loc_001CF156: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x20);
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    ecx = ebx + 0x20;
    MEM32(eax) = ebp;
    PUSH32(esp, 0x001CF16Fu); RECOMP_ABI_CALL(0x001CEFA0u, sub_001CEFA0); /* call 0x001CEFA0 */

loc_001CF16F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}
