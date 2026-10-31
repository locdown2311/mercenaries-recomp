/**
 * Mercenaries - Recompiled code chunk 39
 * Functions: 250 (0x001EA8A0 - 0x001F1970)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001EA8A0
 * Original: 0x001EA8A0 - 0x001EA8B0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA8A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA8A0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM8(eax + 0xC) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EA8B0
 * Original: 0x001EA8B0 - 0x001EA906 (86 bytes, 33 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA8B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA8B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2FC694);
    ebx = ebp * 4;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x001EA8CEu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_001EA8CE: ;
    SET_LO8(ecx, MEM8(esp + 0x28));
    MEM8(esi + 0xC) = LO8(ecx);
    edi = eax;
    eax = MEM32(esp + 0x20);
    ecx = ebx;
    edx = ecx;
    MEM32(esi) = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 4) = ebp;
    MEM32(esi + 8) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EA910
 * Original: 0x001EA910 - 0x001EA928 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA910: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EA91Cu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_001EA91C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EA930
 * Original: 0x001EA930 - 0x001EA958 (40 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA930: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ecx + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001EA944; /* jne: not equal / not zero */

loc_001EA93D: ;
    MEM32(ecx + 8) = 0;

loc_001EA944: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x10);
    edx = MEM32(esp + 4);
    ecx = ecx + eax * 4;
    eax = MEM32(ecx);
    MEM32(ecx) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EA960
 * Original: 0x001EA960 - 0x001EA970 (16 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA960: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EA96D; /* je: equal / zero */

loc_001EA968: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001EA96Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EA96Au); } /* indirect call */
    }

loc_001EA96D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EA970
 * Original: 0x001EA970 - 0x001EA994 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA970: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x001EA984u); RECOMP_ABI_CALL(0x00205E70u, sub_00205E70); /* call 0x00205E70 */

loc_001EA984: ;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 0x001EA98Du); RECOMP_ABI_CALL(0x00205EE0u, sub_00205EE0); /* call 0x00205EE0 */

loc_001EA98D: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EA9A0
 * Original: 0x001EA9A0 - 0x001EA9A8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA9A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA9A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00205EE0(); return; /* tail jmp 0x00205EE0 */

}

/**
 * sub_001EA9B0
 * Original: 0x001EA9B0 - 0x001EA9BD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA9B0(void)
{

loc_001EA9B0: ;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 4), g_mxcsr, 1); /* cvttss2si */
    MEM16(ecx + 0x2C) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EA9C0
 * Original: 0x001EA9C0 - 0x001EA9DA (26 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA9C0: ;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 4), g_mxcsr, 1); /* cvttss2si */
    SET_LO16(edx, MEM16(ecx + 0x2C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    MEM16(ecx + 0x2E) = LO16(eax);
    if (CMP_GE(_fas, _fbs)) goto loc_001EA9D7; /* jge: greater or equal (signed >=) */

loc_001EA9D3: ;
    MEM16(ecx + 0x2E) = LO16(edx);

loc_001EA9D7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EA9E0
 * Original: 0x001EA9E0 - 0x001EA9EC (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA9E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA9E0: ;
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(ecx + 0x30) = MEM16(ecx + 0x30) | LO16(eax);
    _fa = (uint32_t)(MEM16(ecx + 0x30)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EA9F0
 * Original: 0x001EA9F0 - 0x001EA9FD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA9F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA9F0: ;
    eax = MEM32(esp + 4);
    eax = ~eax;
    MEM16(ecx + 0x30) = MEM16(ecx + 0x30) & LO16(eax);
    _fa = (uint32_t)(MEM16(ecx + 0x30)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EAA00
 * Original: 0x001EAA00 - 0x001EAA0E (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAA00: ;
    eax = ZX16(MEM16(ecx + 0x30));
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 4), eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EAA10
 * Original: 0x001EAA10 - 0x001EAA15 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAA10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAA10: ;
    MEM8(ecx + 0x30) = MEM8(ecx + 0x30) | 0x10;
    _fa = (uint32_t)(MEM8(ecx + 0x30)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_001EAA20
 * Original: 0x001EAA20 - 0x001EAA25 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAA20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAA20: ;
    MEM8(ecx + 0x30) = MEM8(ecx + 0x30) | 0x20;
    _fa = (uint32_t)(MEM8(ecx + 0x30)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_001EAA30
 * Original: 0x001EAA30 - 0x001EAA38 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAA30(void)
{

loc_001EAA30: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x001EAA37u); RECOMP_ABI_CALL(0x001EAA00u, sub_001EAA00); /* call 0x001EAA00 */

loc_001EAA37: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EAA40
 * Original: 0x001EAA40 - 0x001EAA56 (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAA40: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAA4F; /* je: equal / zero */

loc_001EAA48: ;
    MEM8(ecx + 0x31) = MEM8(ecx + 0x31) | 0x40;
    _fa = (uint32_t)(MEM8(ecx + 0x31)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

loc_001EAA4F: ;
    MEM8(ecx + 0x31) = MEM8(ecx + 0x31) & 0xBF;
    _fa = (uint32_t)(MEM8(ecx + 0x31)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EAA60
 * Original: 0x001EAA60 - 0x001EAA65 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAA60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAA60: ;
    MEM8(ecx + 0x30) = MEM8(ecx + 0x30) | 0x80;
    _fa = (uint32_t)(MEM8(ecx + 0x30)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_001EAA70
 * Original: 0x001EAA70 - 0x001EAA75 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAA70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAA70: ;
    MEM8(ecx + 0x31) = MEM8(ecx + 0x31) | 2;
    _fa = (uint32_t)(MEM8(ecx + 0x31)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_001EAA80
 * Original: 0x001EAA80 - 0x001EAA85 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAA80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAA80: ;
    MEM8(ecx + 0x31) = MEM8(ecx + 0x31) | 4;
    _fa = (uint32_t)(MEM8(ecx + 0x31)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_001EAA90
 * Original: 0x001EAA90 - 0x001EAA95 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAA90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAA90: ;
    MEM8(ecx + 0x31) = MEM8(ecx + 0x31) & 0xF1;
    _fa = (uint32_t)(MEM8(ecx + 0x31)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001EAAA0
 * Original: 0x001EAAA0 - 0x001EAAA5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAAA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAAA0: ;
    MEM8(ecx + 0x30) = MEM8(ecx + 0x30) & 0xDF;
    _fa = (uint32_t)(MEM8(ecx + 0x30)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001EAAB0
 * Original: 0x001EAAB0 - 0x001EAAB5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAAB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAAB0: ;
    MEM8(ecx + 0x30) = MEM8(ecx + 0x30) & 0xEF;
    _fa = (uint32_t)(MEM8(ecx + 0x30)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001EAAC0
 * Original: 0x001EAAC0 - 0x001EAAC5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAAC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAAC0: ;
    MEM8(ecx + 0x30) = MEM8(ecx + 0x30) & 0x7F;
    _fa = (uint32_t)(MEM8(ecx + 0x30)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001EAAD0
 * Original: 0x001EAAD0 - 0x001EAB23 (83 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAAD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = 0;
    MEM32(esi) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_001EAB1E; /* jbe: below or equal (unsigned <=) */

loc_001EAAEC: ;
    PUSH32(esp, 0x2FC6B4);
    eax = edi * 4;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EAB00u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_001EAB00: ;
    MEM32(esi) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EAB1E; /* jbe: below or equal (unsigned <=) */

loc_001EAB0B: ;
    goto loc_001EAB10;

    /* nop */

loc_001EAB10: ;
    ecx = MEM32(esi);
    MEM32(ecx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EAB10; /* jb: below (unsigned <) */

loc_001EAB1E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EAB30
 * Original: 0x001EAB30 - 0x001EAB4A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAB30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAB48; /* je: equal / zero */

loc_001EAB39: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EAB3Fu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_001EAB3F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_001EAB48: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EAB50
 * Original: 0x001EAB50 - 0x001EABAA (90 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EAB50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EAB5F; /* jne: not equal / not zero */

loc_001EAB59: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001EAB5F: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EABA1; /* jbe: below or equal (unsigned <=) */

loc_001EAB6E: ;
    ebp = MEM32(ecx);
    esi = ebp;

loc_001EAB72: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAB98; /* je: equal / zero */

loc_001EAB78: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EAB82; /* jge: greater or equal (signed >=) */

loc_001EAB7C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EAB82; /* jne: not equal / not zero */

loc_001EAB80: ;
    edi = eax;

loc_001EAB82: ;
    edx = MEM32(ecx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EAB72; /* jb: below (unsigned <) */

loc_001EAB8D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EABA1; /* jl: less (signed <) */

loc_001EAB91: ;
    MEM32(ebp + edi * 4) = ebx;
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001EAB98: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001EABA1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EABB0
 * Original: 0x001EABB0 - 0x001EABFD (77 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EABB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EABB0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EABBF; /* jne: not equal / not zero */

loc_001EABB9: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_001EABBF: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_001EABDF; /* jbe: below or equal (unsigned <=) */

loc_001EABCA: ;
    esi = MEM32(ecx);
    edx = esi;
    edi = edi;

loc_001EABD0: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EABE7; /* je: equal / zero */

loc_001EABD4: ;
    ebx = MEM32(ecx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EABD0; /* jb: below (unsigned <) */

loc_001EABDF: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_001EABE7: ;
    MEM32(esi + eax * 4) = 0;
    eax = MEM32(ecx + 8);
    POP32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    MEM32(ecx + 8) = eax;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EAC00
 * Original: 0x001EAC00 - 0x001EAC80 (128 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAC00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAC00: ;
    edx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = eax;
    MEM32(edx + 0x3404) = eax;
    MEM32(edx + 0x3408) = eax;
    MEM32(edx + 0x340C) = eax;
    MEM32(edx + 0x3410) = eax;
    MEM32(edx + 0x9C58) = eax;
    MEM32(edx + 0x7C54) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = edx + 0x3844;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0x100;
    edi = edx + 0x3414;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0x100;
    edi = edx + 0x5854;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0x100;
    edi = edx + 0x4854;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x800;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0x7C58;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EAC80
 * Original: 0x001EAC80 - 0x001EACA2 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAC80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x7C54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EACA0; /* je: equal / zero */

loc_001EAC8D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EAC93u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_001EAC93: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x7C54) = 0;

loc_001EACA0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EACB0
 * Original: 0x001EACB0 - 0x001EACBE (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EACB0(void)
{

loc_001EACB0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    eax = eax + ecx + 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EACC0
 * Original: 0x001EACC0 - 0x001EACF7 (55 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EACC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EACC0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + eax * 4 + 0x4854);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EACDE; /* je: equal / zero */

loc_001EACD0: ;
    eax = edx + edx * 2;
    eax = ecx + eax * 4 + 0x4C54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EACE3; /* jne: not equal / not zero */

loc_001EACDE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_001EACE3: ;
    edx = MEM32(ecx + edx * 4 + 0x5854);
    ecx = ecx + edx * 8 + 0x5C54;
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EAD00
 * Original: 0x001EAD00 - 0x001EAD39 (57 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAD00: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + edx * 4 + 0x3414);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001EAD36; /* je: equal / zero */

loc_001EAD14: ;
    edx = MEM32(ecx + edx * 4 + 0x3414);
    eax = edx + edx * 2;
    edx = MEM32(ecx + edx * 4 + 0x3844);
    eax = ecx + eax * 4 + 0x3814;
    ecx = ecx + edx * 8 + 0x3854;
    MEM32(eax + 8) = ecx;

loc_001EAD36: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EAD40
 * Original: 0x001EAD40 - 0x001EAD6C (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAD40(void)
{

loc_001EAD40: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001EAD4Eu); RECOMP_ABI_CALL(0x001EA9F0u, sub_001EA9F0); /* call 0x001EA9F0 */

loc_001EAD4E: ;
    MEM32(ecx + 0x24) = esi;
    PUSH32(esp, 2);
    MEM32(esi + 8) = ecx;
    PUSH32(esp, 0x001EAD5Bu); RECOMP_ABI_CALL(0x001EA9E0u, sub_001EA9E0); /* call 0x001EA9E0 */

loc_001EAD5B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8D39BDE6u);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001EAD65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EAD62u); } /* indirect call */
    }

loc_001EAD65: ;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EAD70
 * Original: 0x001EAD70 - 0x001EAD87 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAD70(void)
{

loc_001EAD70: ;
    edx = ecx;
    ecx = MEM32(edx + 8);
    PUSH32(esp, 2);
    PUSH32(esp, 0x001EAD7Cu); RECOMP_ABI_CALL(0x001EA9F0u, sub_001EA9F0); /* call 0x001EA9F0 */

loc_001EAD7C: ;
    eax = MEM32(edx + 8);
    MEM32(eax + 0x24) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001EAD90
 * Original: 0x001EAD90 - 0x001EADA7 (23 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAD90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAD90: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x2FC6D8;
    MEM8(0x4434C8) = LO8(ecx);
    MEM32(0x4434D4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001EADB0
 * Original: 0x001EADB0 - 0x001EADC7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EADB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EADB0: ;
    eax = MEM32(0x30EE74);
    ecx = MEM32(esp + 4);
    MEM32(eax * 4 + 0x4414C0) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x30EE74) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001EADD0
 * Original: 0x001EADD0 - 0x001EAE0D (61 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EADD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EADD0: ;
    ecx = MEM32(0x30EE74);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EADF7; /* jle: less or equal (signed <=) */

loc_001EADDF: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);

loc_001EADE4: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x4414C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x4414C0), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EADF4; /* je: equal / zero */

loc_001EADED: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EADE4; /* jl: less (signed <) */

loc_001EADF2: ;
    goto loc_001EADF6;

loc_001EADF4: ;
    edx = eax;

loc_001EADF6: ;
    POP32(esp, esi);

loc_001EADF7: ;
    eax = MEM32(ecx * 4 + 0x4414BC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x30EE74) = ecx;
    MEM32(edx * 4 + 0x4414C0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001EAE10
 * Original: 0x001EAE10 - 0x001EAE24 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAE10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAE10: ;
    eax = MEM32(0x4434D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAE23; /* je: equal / zero */

loc_001EAE19: ;
    MEM32(0x4434D0) = 0;

loc_001EAE23: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EAE30
 * Original: 0x001EAE30 - 0x001EAE7B (75 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001EAE30(void)
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

loc_001EAE30: ;
    fp_push(MEMF(0x2F2224)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 8)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_001EAE76; /* jbe: below or equal (unsigned <=) */

loc_001EAE50: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 8)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_001EAE76; /* jbe: below or equal (unsigned <=) */

loc_001EAE5F: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 8)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_001EAE76; /* jbe: below or equal (unsigned <=) */

loc_001EAE6E: ;
    eax = 1;
    esp += 12; return; /* ret 8 */

loc_001EAE76: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001EAE80
 * Original: 0x001EAE80 - 0x001EAEAF (47 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAE80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAE80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0xFFF);
    eax = esi + 0x4008;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001EAE99u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_001EAE99: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(edx);
    MEM32(esi + eax * 4 + 8) = ecx;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EAEB0
 * Original: 0x001EAEB0 - 0x001EAF4B (155 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAEB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001EAF47; /* je: equal / zero */

loc_001EAEBF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3FFF);
    ebx = esi + 0x10008;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EAED2u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_001EAED2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EAF46; /* jl: less (signed <) */

loc_001EAED9: ;
    MEM32(esi + eax * 4 + 0x10008) = 0;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    edi = eax + 1;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi & 0x3FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = edx;
    eax = MEM32(esi + edi * 4 + 0x10008);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAF45; /* je: equal / zero */

loc_001EAEFE: ;
    edi = edi;

loc_001EAF00: ;
    eax = MEM32(esi + edi * 4 + 0x10008);
    MEM32(esi + edi * 4 + 0x10008) = 0;
    ecx = MEM32(esi);
    PUSH32(esp, 0x3FFF);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esi) = ecx;
    PUSH32(esp, 0x001EAF23u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_001EAF23: ;
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
    edi = edi & 0x3FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = edx;
    eax = MEM32(esi + edi * 4 + 0x10008);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EAF00; /* jne: not equal / not zero */

loc_001EAF45: ;
    POP32(esp, edi);

loc_001EAF46: ;
    POP32(esp, ebx);

loc_001EAF47: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EAF50
 * Original: 0x001EAF50 - 0x001EAF72 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAF50(void)
{

loc_001EAF50: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    eax = ecx;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001EAF80
 * Original: 0x001EAF80 - 0x001EAF89 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAF80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001EAF80: ;
    fp_push(MEMF(0x2FC65C)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001EAF90
 * Original: 0x001EAF90 - 0x001EAF99 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAF90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001EAF90: ;
    fp_push(MEMF(0x2FC678)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001EAFA0
 * Original: 0x001EAFA0 - 0x001EAFA5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAFA0(void)
{

loc_001EAFA0: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EAFB0
 * Original: 0x001EAFB0 - 0x001EAFE9 (57 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAFB0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001EAFCD; /* je: equal / zero */

loc_001EAFBB: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAFCD; /* je: equal / zero */

loc_001EAFC0: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EAFC8u); RECOMP_ABI_CALL(0x00204D10u, sub_00204D10); /* call 0x00204D10 */

loc_001EAFC8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001EAFCF;

loc_001EAFCD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EAFCF: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EAFDAu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_001EAFDA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EAFE5u); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_001EAFE5: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EAFF0
 * Original: 0x001EAFF0 - 0x001EB006 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAFF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EAFF0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EAFFAu); RECOMP_ABI_CALL(0x001EA750u, sub_001EA750); /* call 0x001EA750 */

loc_001EAFFA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; sub_001EA730(); return; /* tail jmp 0x001EA730 */

}

/**
 * sub_001EB010
 * Original: 0x001EB010 - 0x001EB018 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB010(void)
{

loc_001EB010: ;
    eax = ecx;
    MEM16(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001EB020
 * Original: 0x001EB020 - 0x001EB079 (89 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EB020: ;
    edx = ecx;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM16(ecx);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EB072; /* jge: greater or equal (signed >=) */

loc_001EB037: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EB06A; /* jle: less or equal (signed <=) */

loc_001EB03E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);

loc_001EB040: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EB046u); RECOMP_ABI_CALL(0x001EA760u, sub_001EA760); /* call 0x001EA760 */

loc_001EB046: ;
    ebx = (uint32_t)(int32_t)SMEM16(edx);
    ebp = MEM32(eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + ebx * 8 + 4) = ebp;
    eax = MEM32(eax + 4);
    MEM32(edx + ebx * 8 + 8) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EB040; /* jl: less (signed <) */

loc_001EB060: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    MEM16(edx) = LO16(edi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_001EB06A: ;
    POP32(esp, esi);
    MEM16(edx) = LO16(edi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_001EB072: ;
    MEM16(edx) = LO16(edi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EB080
 * Original: 0x001EB080 - 0x001EB0D0 (80 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EB080: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebx = MEM32(edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EB0A5; /* jle: less or equal (signed <=) */

loc_001EB093: ;
    edx = ecx + 4;

loc_001EB096: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB0BC; /* je: equal / zero */

loc_001EB09A: ;
    ebp = (uint32_t)(int32_t)SMEM16(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EB096; /* jl: less (signed <) */

loc_001EB0A5: ;
    eax = MEM32(edi);
    MEM32(ecx + esi * 8 + 4) = eax;
    edx = MEM32(edi + 4);
    POP32(esp, edi);
    MEM32(ecx + esi * 8 + 8) = edx;
    MEM16(ecx) = MEM16(ecx) + 1;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001EB0BC: ;
    edx = MEM32(edi + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(esp + 4) = edx;
    ecx = ecx + eax * 8 + 4;
    g_seh_ebp = ebp; sub_000443D0(); return; /* tail jmp 0x000443D0 */

}

/**
 * sub_001EB0D0
 * Original: 0x001EB0D0 - 0x001EB0FE (46 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB0D0: ;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001EB0EE; /* jle: less or equal (signed <=) */

loc_001EB0DB: ;
    edi = MEM32(esp + 0xC);
    edx = ecx + 4;

loc_001EB0E2: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB0F5; /* je: equal / zero */

loc_001EB0E6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EB0E2; /* jl: less (signed <) */

loc_001EB0EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_001EB0F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ecx + eax * 8 + 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EB100
 * Original: 0x001EB100 - 0x001EB108 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB100(void)
{

loc_001EB100: ;
    PUSH32(esp, 0x001EB105u); RECOMP_ABI_CALL(0x001EA770u, sub_001EA770); /* call 0x001EA770 */

loc_001EB105: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001EB110
 * Original: 0x001EB110 - 0x001EB1A3 (147 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB110: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001EB11Au); RECOMP_ABI_CALL(0x001EA770u, sub_001EA770); /* call 0x001EA770 */

loc_001EB11A: ;
    eax = MEM32(0x30EE60);
    ebx = MEM32(esp + 0x10);
    ecx = eax * 8 + 0x4434E0;
    MEM32(esi + 8) = ecx;
    eax = MEM32(0x4434C4);
    edi = eax;
    PUSH32(esp, 0xFFF);
    _fb = (uint32_t)(0x4008) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4008;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001EB145u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_001EB145: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EB151; /* jge: greater or equal (signed >=) */

loc_001EB14C: ;
    eax = edi + 4;
    goto loc_001EB155;

loc_001EB151: ;
    eax = edi + eax * 4 + 8;

loc_001EB155: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001EB179; /* je: equal / zero */

loc_001EB15D: ;
    /* nop */

loc_001EB160: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EB19D; /* jne: not equal / not zero */

loc_001EB169: ;
    edx = MEM32(eax);
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_001EB160; /* jne: not equal / not zero */

loc_001EB173: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001EB179: ;
    edi = MEM32(0x4434C4);
    PUSH32(esp, 0xFFF);
    eax = edi + 0x4008;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001EB191u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_001EB191: ;
    MEM32(edi + eax * 4 + 8) = esi;
    eax = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = eax;

loc_001EB19D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EB1B0
 * Original: 0x001EB1B0 - 0x001EB215 (101 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB1B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EB1B0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(eax) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001EB1FB; /* je: equal / zero */

loc_001EB1C3: ;
    edi = MEM32(esp + 0x18);

loc_001EB1C7: ;
    esi = (uint32_t)(int32_t)SMEM16(ebp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001EB1F4; /* js: sign (negative) */

loc_001EB1D0: ;
    ebx = MEM32(ebp + 8);

loc_001EB1D3: ;
    eax = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx + eax * 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB202; /* je: equal / zero */

loc_001EB1E2: ;
    if (CMP_AE(_fa, _fb)) goto loc_001EB1E9; /* jae: above or equal (unsigned >=) */

loc_001EB1E4: ;
    edx = eax + 1;
    goto loc_001EB1F0;

loc_001EB1E9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EB1F0; /* jbe: below or equal (unsigned <=) */

loc_001EB1ED: ;
    esi = eax + -1;

loc_001EB1F0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EB1D3; /* jle: less or equal (signed <=) */

loc_001EB1F4: ;
    ebp = MEM32(ebp);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EB1C7; /* jne: not equal / not zero */

loc_001EB1FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001EB202: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    MEM8(ecx) = 1;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + eax * 8 + 4);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EB220
 * Original: 0x001EB220 - 0x001EB269 (73 bytes, 31 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB220: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001EB23E; /* jle: less or equal (signed <=) */

loc_001EB234: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 8), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB254; /* je: equal / zero */

loc_001EB239: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EB234; /* jl: less (signed <) */

loc_001EB23E: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = ecx + esi * 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EB24Cu); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_001EB24C: ;
    POP32(esp, edi);
    eax = esi + 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001EB254: ;
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = ecx + eax * 8;
    PUSH32(esp, 0x001EB262u); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_001EB262: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001EB270
 * Original: 0x001EB270 - 0x001EB29B (43 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB270: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EB28D; /* jle: less or equal (signed <=) */

loc_001EB27B: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 8);

loc_001EB283: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 8), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB293; /* je: equal / zero */

loc_001EB288: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EB283; /* jl: less (signed <) */

loc_001EB28D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001EB293: ;
    eax = MEM32(ecx + eax * 8 + 4);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EB2A0
 * Original: 0x001EB2A0 - 0x001EB2A8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB2A0(void)
{

loc_001EB2A0: ;
    PUSH32(esp, 0x001EB2A5u); RECOMP_ABI_CALL(0x001EA780u, sub_001EA780); /* call 0x001EA780 */

loc_001EB2A5: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001EB2B0
 * Original: 0x001EB2B0 - 0x001EB2E4 (52 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB2B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), LO16(esi) (16-bit) */
    ebx = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001EB2DE; /* jle: less or equal (signed <=) */

loc_001EB2C0: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + esi * 8 + 4);
    edx = MEM32(eax + esi * 8);
    eax = eax + esi * 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x001EB2D6u); RECOMP_ABI_CALL(0x001EA800u, sub_001EA800); /* call 0x001EA800 */

loc_001EB2D6: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EB2C0; /* jl: less (signed <) */

loc_001EB2DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EB2F0
 * Original: 0x001EB2F0 - 0x001EB32B (59 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB2F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EB2F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), LO16(edx) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EB327; /* jle: less or equal (signed <=) */

loc_001EB2FC: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);

loc_001EB307: ;
    ecx = MEM32(esi + 4);
    ebp = MEM32(ecx + edx * 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    ecx = ecx + edx * 8;
    if (CMP_NE(_fa, _fb)) goto loc_001EB31C; /* jne: not equal / not zero */

loc_001EB314: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001EB31Au); RECOMP_ABI_CALL(0x000443D0u, sub_000443D0); /* call 0x000443D0 */

loc_001EB31A: ;
    SET_LO8(eax, 1);

loc_001EB31C: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EB307; /* jl: less (signed <) */

loc_001EB324: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001EB327: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EB330
 * Original: 0x001EB330 - 0x001EB36F (63 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB330: ;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001EB34E; /* jle: less or equal (signed <=) */

loc_001EB33B: ;
    edx = MEM32(ecx + 4);
    edi = MEM32(esp + 0xC);

loc_001EB342: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB35C; /* je: equal / zero */

loc_001EB346: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EB342; /* jl: less (signed <) */

loc_001EB34E: ;
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(edx) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_001EB35C: ;
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM8(edx) = 1;
    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx + eax * 8 + 4);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EB370
 * Original: 0x001EB370 - 0x001EB3AD (61 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB370: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001EB383u); RECOMP_ABI_CALL(0x001EB330u, sub_001EB330); /* call 0x001EB330 */

loc_001EB383: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB3A6; /* je: equal / zero */

loc_001EB387: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB3A6; /* je: equal / zero */

loc_001EB38C: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EB393u); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_001EB393: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB3A8; /* je: equal / zero */

loc_001EB39A: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EB3A8; /* jne: not equal / not zero */

loc_001EB39F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001EB3A6: ;
    eax = edi;

loc_001EB3A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EB3B0
 * Original: 0x001EB3B0 - 0x001EB3EA (58 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB3B0(void)
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

loc_001EB3B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001EB3CAu); RECOMP_ABI_CALL(0x001EB330u, sub_001EB330); /* call 0x001EB330 */

loc_001EB3CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB3E1; /* je: equal / zero */

loc_001EB3CE: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB3E1; /* je: equal / zero */

loc_001EB3D3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EB3D9u); RECOMP_ABI_CALL(0x001EA740u, sub_001EA740); /* call 0x001EA740 */

loc_001EB3D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001EB3E1: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001EB3F0
 * Original: 0x001EB3F0 - 0x001EB46E (126 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB3F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB3F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x354;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EB401u); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_001EB401: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x24C) = eax;
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
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x454) = eax;
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EB470
 * Original: 0x001EB470 - 0x001EB83B (971 bytes, 256 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EB470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB470: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x154) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x154;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 0x10) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB48Cu); RECOMP_ABI_CALL(0x001EB3F0u, sub_001EB3F0); /* call 0x001EB3F0 */

loc_001EB48C: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EB832; /* jl: less (signed <) */

loc_001EB49E: ;
    goto loc_001EB4A4;

loc_001EB4A0: ;
    ebx = MEM32(esp + 0x10);

loc_001EB4A4: ;
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB4B0u); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_001EB4B0: ;
    eax = MEM32(esp + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4F464E49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4F464E49 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EB782; /* ja: above (unsigned >) */

loc_001EB4BF: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001EB75C; /* je: equal / zero */

loc_001EB4C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x455A4953) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x455A4953 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB6EB; /* je: equal / zero */

loc_001EB4D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D524658) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4D524658 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EB823; /* jne: not equal / not zero */

loc_001EB4DB: ;
    ecx = MEM32(esp + 0x6C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EB4F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EB4F1u); } /* indirect call */
    }

loc_001EB4F4: ;
    ecx = MEM32(esp + 0x6C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EB50Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EB50Au); } /* indirect call */
    }

loc_001EB50D: ;
    ecx = MEM32(esp + 0x6C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EB526u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EB523u); } /* indirect call */
    }

loc_001EB526: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    ecx = MEM32(esp + 0x6C);
    edx = MEM32(ecx);
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x24;
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EB56Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EB569u); } /* indirect call */
    }

loc_001EB56C: ;
    ecx = MEM32(esp + 0x6C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EB585u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EB582u); } /* indirect call */
    }

loc_001EB585: ;
    ecx = MEM32(esp + 0x6C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EB59Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EB59Bu); } /* indirect call */
    }

loc_001EB59E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    ecx = MEM32(esp + 0x6C);
    edx = MEM32(ecx);
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x40;
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EB5E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EB5E1u); } /* indirect call */
    }

loc_001EB5E4: ;
    ecx = MEM32(esp + 0x6C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EB5FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EB5FAu); } /* indirect call */
    }

loc_001EB5FD: ;
    ecx = MEM32(esp + 0x6C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EB616u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EB613u); } /* indirect call */
    }

loc_001EB616: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    ecx = MEM32(esp + 0x6C);
    edx = MEM32(ecx);
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x3C;
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EB659u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EB656u); } /* indirect call */
    }

loc_001EB659: ;
    ecx = MEM32(esp + 0x6C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EB672u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EB66Fu); } /* indirect call */
    }

loc_001EB672: ;
    ecx = MEM32(esp + 0x6C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EB68Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EB688u); } /* indirect call */
    }

loc_001EB68B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    edx = esp + 0x80;
    PUSH32(esp, edx);
    eax = esp + 0x90;
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0xA0;
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 0x130;
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB6DEu); RECOMP_ABI_CALL(0x00011D00u, sub_00011D00); /* call 0x00011D00 */

loc_001EB6DE: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB6E6u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_001EB6E6: ;
    goto loc_001EB823;

loc_001EB6EB: ;
    ecx = MEM32(esp + 0x6C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EB704u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EB701u); } /* indirect call */
    }

loc_001EB704: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    ecx = MEM32(esp + 0x6C);
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EB728u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EB725u); } /* indirect call */
    }

loc_001EB728: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    ecx = MEM32(esp + 0x6C);
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EB74Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EB749u); } /* indirect call */
    }

loc_001EB74C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esi + 0x48) = xmm0.f[0]; /* movss */
    goto loc_001EB823;

loc_001EB75C: ;
    ecx = MEM32(esp + 0x6C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EB774u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EB771u); } /* indirect call */
    }

loc_001EB774: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    MEM32(esp + 0x10) = ecx;
    goto loc_001EB823;

loc_001EB782: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x504F5250) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x504F5250 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EB823; /* jne: not equal / not zero */

loc_001EB78D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EB823; /* jle: less or equal (signed <=) */

loc_001EB795: ;
    MEM32(esp + 0x34) = ebx;
    /* nop */

loc_001EB7A0: ;
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, 0x200);
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB7B6u); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_001EB7B6: ;
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB7C3u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_001EB7C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x200);
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x74);
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB7DEu); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_001EB7DE: ;
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB7EDu); RECOMP_ABI_CALL(0x001EA840u, sub_001EA840); /* call 0x001EA840 */

loc_001EB7ED: ;
    ebx = eax;
    PUSH32(esp, 0x3F);
    eax = esi + 0x354;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EB7FEu); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_001EB7FE: ;
    MEM32(esi + eax * 4 + 0x254) = ebx;
    ecx = MEM32(esi + 0x24C);
    eax = MEM32(esp + 0x40);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x24C) = ecx;
    MEM32(esp + 0x34) = eax;
    if ((_fa != 0)) goto loc_001EB7A0; /* jne: not equal / not zero */

loc_001EB820: ;
    edi = MEM32(ebp + 8);

loc_001EB823: ;
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EB4A0; /* jge: greater or equal (signed >=) */

loc_001EB832: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EB840
 * Original: 0x001EB840 - 0x001EB845 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EB840: ;
    g_seh_ebp = ebp; sub_001EA910(); return; /* tail jmp 0x001EA910 */

}

/**
 * sub_001EB850
 * Original: 0x001EB850 - 0x001EB885 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB850: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EB883; /* jle: less or equal (signed <=) */

loc_001EB859: ;
    /* nop */

loc_001EB860: ;
    eax = MEM32(ecx + 0x10);
    edx = eax + esi * 4;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB87C; /* je: equal / zero */

loc_001EB86C: ;
    SET_LO8(eax, MEM8(eax + 0x30));
    SET_LO8(eax, LO8(eax) >> 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EB87C; /* je: equal / zero */

loc_001EB876: ;
    MEM32(edx) = 0;

loc_001EB87C: ;
    eax = MEM32(ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EB860; /* jl: less (signed <) */

loc_001EB883: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EB890
 * Original: 0x001EB890 - 0x001EB8FF (111 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EB890: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB8FD; /* je: equal / zero */

loc_001EB89A: ;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 8);
    edx = ebx + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EB8A9; /* jl: less (signed <) */

loc_001EB8A7: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EB8A9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB8FC; /* je: equal / zero */

loc_001EB8AD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    /* nop */

loc_001EB8B0: ;
    ecx = MEM32(edi);
    eax = edx + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EB8BB; /* jl: less (signed <) */

loc_001EB8B9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EB8BB: ;
    esi = MEM32(edi + 0x10);
    ebp = MEM32(esi + edx * 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB8F4; /* je: equal / zero */

loc_001EB8C5: ;
    SET_LO8(ecx, MEM8(ebp + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EB8F4; /* jne: not equal / not zero */

loc_001EB8D0: ;
    esi = MEM32(esi + eax * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB8E2; /* je: equal / zero */

loc_001EB8D7: ;
    SET_LO8(ecx, MEM8(esi + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EB8F4; /* je: equal / zero */

loc_001EB8E2: ;
    esi = MEM32(edi + 0x10);
    ebp = MEM32(esi + edx * 4);
    ecx = MEM32(esi + eax * 4);
    MEM32(esi + eax * 4) = ebp;
    esi = MEM32(edi + 0x10);
    MEM32(esi + edx * 4) = ecx;

loc_001EB8F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001EB8B0; /* jne: not equal / not zero */

loc_001EB8FA: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_001EB8FC: ;
    POP32(esp, ebx);

loc_001EB8FD: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EB900
 * Original: 0x001EB900 - 0x001EB96E (110 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB900: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, 0x2FC71C);
    eax = edi + edi * 4;
    ecx = eax * 4 + 4;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM32(esi + 0x88) = edi;
    PUSH32(esp, 0x001EB925u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_001EB925: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB95B; /* je: equal / zero */

loc_001EB92C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1EB840);
    PUSH32(esp, 0x1EA8A0);
    PUSH32(esp, edi);
    ebx = eax + 4;
    PUSH32(esp, 0x14);
    PUSH32(esp, ebx);
    MEM32(eax) = edi;
    PUSH32(esp, 0x001EB945u); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_001EB945: ;
    MEM32(esi + 0x94) = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(esi + 0x90) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001EB95B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x90) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EB970
 * Original: 0x001EB970 - 0x001EB9D6 (102 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB970: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x88);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    if ((_fas < 0)) goto loc_001EB98E; /* js: sign (negative) */

loc_001EB97D: ;
    edi = eax + 1;

loc_001EB980: ;
    ecx = MEM32(esi + 0x94);
    PUSH32(esp, 0x001EB98Bu); RECOMP_ABI_CALL(0x001EA910u, sub_001EA910); /* call 0x001EA910 */

loc_001EB98B: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EB980; /* jne: not equal / not zero */

loc_001EB98E: ;
    eax = esi + 0x48;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    MEM32(esi + 0x8C) = 0;
    PUSH32(esp, 0x001EB9A3u); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_001EB9A3: ;
    MEM32(esi) = 0;
    esi = MEM32(esi + 0x94);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB9D3; /* je: equal / zero */

loc_001EB9B6: ;
    ecx = MEM32(esi + -4);
    PUSH32(esp, 0x1EB840);
    edi = esi + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EB9CAu); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_001EB9CA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001EB9D0u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_001EB9D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001EB9D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EB9E0
 * Original: 0x001EB9E0 - 0x001EBA3E (94 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB9E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x90);
    esi = eax + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EBA1D; /* je: equal / zero */

loc_001EB9F1: ;
    ecx = MEM32(edi + 0x8C);
    eax = MEM32(edi + 0x94);
    PUSH32(esp, ebx);
    edi = edi;

loc_001EBA00: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EBA06; /* jl: less (signed <) */

loc_001EBA04: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EBA06: ;
    edx = esi + esi * 4;
    SET_LO8(ebx, MEM8(eax + edx * 4 + 0xC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBA1C; /* jne: not equal / not zero */

loc_001EBA11: ;
    edx = MEM32(edi + 0x90);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBA00; /* jne: not equal / not zero */

loc_001EBA1C: ;
    POP32(esp, ebx);

loc_001EBA1D: ;
    ecx = MEM32(edi + 0x94);
    eax = esi + esi * 4;
    ecx = ecx + eax * 4;
    SET_LO8(eax, MEM8(ecx + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EBA35; /* je: equal / zero */

loc_001EBA30: ;
    PUSH32(esp, 0x001EBA35u); RECOMP_ABI_CALL(0x001EB890u, sub_001EB890); /* call 0x001EB890 */

loc_001EBA35: ;
    MEM32(edi + 0x90) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EBA40
 * Original: 0x001EBA40 - 0x001EBAB9 (121 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EBA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EBA40: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0xF);
    eax = edi + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001EBA55u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_001EBA55: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EBA61; /* jge: greater or equal (signed >=) */

loc_001EBA5C: ;
    eax = edi + 4;
    goto loc_001EBA65;

loc_001EBA61: ;
    eax = edi + eax * 4 + 8;

loc_001EBA65: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebp = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_001EBAAA; /* je: equal / zero */

loc_001EBA6F: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x001EBA77u); RECOMP_ABI_CALL(0x001EA930u, sub_001EA930); /* call 0x001EA930 */

loc_001EBA77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EBAA2; /* je: equal / zero */

loc_001EBA7B: ;
    goto loc_001EBA80;

    /* nop */

loc_001EBA80: ;
    SET_LO16(ecx, MEM16(eax + 0x30));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) >> 7);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EBAA2; /* je: equal / zero */

loc_001EBA8E: ;
    SET_LO8(ecx, LO8(ecx) >> 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EBAA2; /* jne: not equal / not zero */

loc_001EBA96: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EBA9Eu); RECOMP_ABI_CALL(0x001EA930u, sub_001EA930); /* call 0x001EA930 */

loc_001EBA9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBA80; /* jne: not equal / not zero */

loc_001EBAA2: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001EBAAAu); RECOMP_ABI_CALL(0x001EA960u, sub_001EA960); /* call 0x001EA960 */

loc_001EBAAA: ;
    PUSH32(esp, 0x40);
    ecx = ebp;
    PUSH32(esp, 0x001EBAB3u); RECOMP_ABI_CALL(0x001EA9E0u, sub_001EA9E0); /* call 0x001EA9E0 */

loc_001EBAB3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EBAC0
 * Original: 0x001EBAC0 - 0x001EBB2A (106 bytes, 35 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBAC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EBAC0: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x8C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x94);
    eax = eax + eax * 4;
    PUSH32(esp, edx);
    ecx = ecx + eax * 4;
    PUSH32(esp, 0x001EBAEAu); RECOMP_ABI_CALL(0x001EA8B0u, sub_001EA8B0); /* call 0x001EA8B0 */

loc_001EBAEA: ;
    eax = MEM32(esi + 0x8C);
    edx = eax + eax * 4;
    eax = MEM32(esi + 0x94);
    PUSH32(esp, 0xF);
    ecx = esi + 0x48;
    edi = eax + edx * 4;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EBB0Cu); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_001EBB0C: ;
    MEM32(esi + eax * 4 + 8) = edi;
    ecx = MEM32(esi);
    eax = MEM32(esi + 0x8C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi) = ecx;
    MEM32(esi + 0x8C) = eax;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001EBB30
 * Original: 0x001EBB30 - 0x001EBB62 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EBB30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x8C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EBB5F; /* jle: less or equal (signed <=) */

loc_001EBB40: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EBB43: ;
    ecx = MEM32(esi + 0x94);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001EBB50u); RECOMP_ABI_CALL(0x001EB850u, sub_001EB850); /* call 0x001EB850 */

loc_001EBB50: ;
    eax = MEM32(esi + 0x8C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EBB43; /* jl: less (signed <) */

loc_001EBB5E: ;
    POP32(esp, ebx);

loc_001EBB5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EBB70
 * Original: 0x001EBB70 - 0x001EBB9F (47 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBB70(void)
{

loc_001EBB70: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    eax = ecx;
    MEM32(eax) = 0x2FC73C;
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001EBBA0
 * Original: 0x001EBBA0 - 0x001EBBE5 (69 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EBBA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFF);
    PUSH32(esp, 0x4D0068);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x001EBBB8u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_001EBBB8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EBBC6; /* jge: greater or equal (signed >=) */

loc_001EBBBF: ;
    eax = 0x4CC064;
    goto loc_001EBBCD;

loc_001EBBC6: ;
    eax = eax * 4 + 0x4CC068;

loc_001EBBCD: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBBD8; /* jne: not equal / not zero */

loc_001EBBD3: ;
    PUSH32(esp, 0x001EBBD8u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_001EBBD8: ;
    MEM32(edi + 4) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EBBF0
 * Original: 0x001EBBF0 - 0x001EBC09 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBBF0(void)
{

loc_001EBBF0: ;
    PUSH32(esp, 0x001EBBF5u); RECOMP_ABI_CALL(0x001EBB70u, sub_001EBB70); /* call 0x001EBB70 */

loc_001EBBF5: ;
    MEM32(ecx) = 0x2FC758;
    MEM32(ecx + 0x28) = 0;
    MEM8(ecx + 0x32) = 0xFF;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001EBC10
 * Original: 0x001EBC10 - 0x001EBC25 (21 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001EBC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EBC10: ;
    SET_LO8(eax, MEM8(ecx + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EBC22; /* je: equal / zero */

loc_001EBC17: ;
    SET_LO8(eax, LO8(eax) >> 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EBC22; /* jne: not equal / not zero */

loc_001EBC1E: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

loc_001EBC22: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001EBC30
 * Original: 0x001EBC30 - 0x001EBCF4 (196 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBC30(void)
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

loc_001EBC30: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFF);
    PUSH32(esp, 0x4D0068);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001EBC48u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_001EBC48: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EBC56; /* jge: greater or equal (signed >=) */

loc_001EBC4F: ;
    eax = 0x4CC064;
    goto loc_001EBC5D;

loc_001EBC56: ;
    eax = eax * 4 + 0x4CC068;

loc_001EBC5D: ;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBC69; /* jne: not equal / not zero */

loc_001EBC64: ;
    PUSH32(esp, 0x001EBC69u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_001EBC69: ;
    MEM32(esi + 4) = edi;
    ecx = MEM32(0x4434D4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x001EBC78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EBC75u); } /* indirect call */
    }

loc_001EBC78: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001EBC94; /* je: equal / zero */

loc_001EBC7D: ;
    PUSH32(esp, 0x2000);
    ecx = esi;
    PUSH32(esp, 0x001EBC89u); RECOMP_ABI_CALL(0x001EAA00u, sub_001EAA00); /* call 0x001EAA00 */

loc_001EBC89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBC94; /* jne: not equal / not zero */

loc_001EBC8D: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x001EBC94u); RECOMP_ABI_CALL(0x001EA9E0u, sub_001EA9E0); /* call 0x001EA9E0 */

loc_001EBC94: ;
    ecx = MEM32(0x4434D4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x001EBCA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EBC9Du); } /* indirect call */
    }

loc_001EBCA0: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x4434D4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001EBCB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EBCADu); } /* indirect call */
    }

loc_001EBCB0: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xABBF8E33u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001EBCC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EBCBDu); } /* indirect call */
    }

loc_001EBCC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EBCD1; /* je: equal / zero */

loc_001EBCC4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EBCCAu); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_001EBCCA: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001EBCD1: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001EBCDDu); RECOMP_ABI_CALL(0x001EA9B0u, sub_001EA9B0); /* call 0x001EA9B0 */

loc_001EBCDD: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EBCE7u); RECOMP_ABI_CALL(0x001EA9C0u, sub_001EA9C0); /* call 0x001EA9C0 */

loc_001EBCE7: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
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
 * sub_001EBD00
 * Original: 0x001EBD00 - 0x001EBD52 (82 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EBD00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi + 8;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x001EBD1Au); RECOMP_ABI_CALL(0x00205EE0u, sub_00205EE0); /* call 0x00205EE0 */

loc_001EBD1A: ;
    _fa = (uint32_t)(MEM8(edi + 0x30)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x30), 0x10 (8-bit) */
    ecx = esi;
    PUSH32(esp, 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_001EBD2B; /* je: equal / zero */

loc_001EBD24: ;
    PUSH32(esp, 0x001EBD29u); RECOMP_ABI_CALL(0x001EA9E0u, sub_001EA9E0); /* call 0x001EA9E0 */

loc_001EBD29: ;
    goto loc_001EBD30;

loc_001EBD2B: ;
    PUSH32(esp, 0x001EBD30u); RECOMP_ABI_CALL(0x001EA9F0u, sub_001EA9F0); /* call 0x001EA9F0 */

loc_001EBD30: ;
    _fa = (uint32_t)(MEM8(edi + 0x30)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x30), 0x20 (8-bit) */
    ecx = esi;
    PUSH32(esp, 0x20);
    if (TEST_Z(_fa, _fb)) goto loc_001EBD46; /* je: equal / zero */

loc_001EBD3A: ;
    PUSH32(esp, 0x001EBD3Fu); RECOMP_ABI_CALL(0x001EA9E0u, sub_001EA9E0); /* call 0x001EA9E0 */

loc_001EBD3F: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001EBD46: ;
    PUSH32(esp, 0x001EBD4Bu); RECOMP_ABI_CALL(0x001EA9F0u, sub_001EA9F0); /* call 0x001EA9F0 */

loc_001EBD4B: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EBD60
 * Original: 0x001EBD60 - 0x001EBE25 (197 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBD60(void)
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

loc_001EBD60: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x4434D4);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x001EBD72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EBD6Fu); } /* indirect call */
    }

loc_001EBD72: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x4434D4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001EBD82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EBD7Fu); } /* indirect call */
    }

loc_001EBD82: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xABBF8E33u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001EBD92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EBD8Fu); } /* indirect call */
    }

loc_001EBD92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EBDA3; /* je: equal / zero */

loc_001EBD96: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EBD9Cu); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_001EBD9C: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001EBDA3: ;
    ecx = MEM32(0x4434D4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x001EBDAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EBDACu); } /* indirect call */
    }

loc_001EBDAF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EBDCA; /* je: equal / zero */

loc_001EBDB3: ;
    PUSH32(esp, 0x2000);
    ecx = esi;
    PUSH32(esp, 0x001EBDBFu); RECOMP_ABI_CALL(0x001EAA00u, sub_001EAA00); /* call 0x001EAA00 */

loc_001EBDBF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBDCA; /* jne: not equal / not zero */

loc_001EBDC3: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x001EBDCAu); RECOMP_ABI_CALL(0x001EA9E0u, sub_001EA9E0); /* call 0x001EA9E0 */

loc_001EBDCA: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x68AF9ED0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001EBDD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EBDD3u); } /* indirect call */
    }

loc_001EBDD6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EBDE8; /* je: equal / zero */

loc_001EBDDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4DB211E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4DB211E5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBDE8; /* jne: not equal / not zero */

loc_001EBDE1: ;
    ecx = esi;
    PUSH32(esp, 0x001EBDE8u); RECOMP_ABI_CALL(0x001EAA60u, sub_001EAA60); /* call 0x001EAA60 */

loc_001EBDE8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA3EE3E0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EBDF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EBDF1u); } /* indirect call */
    }

loc_001EBDF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EBE08; /* je: equal / zero */

loc_001EBDF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4DB211E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4DB211E5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBE08; /* jne: not equal / not zero */

loc_001EBDFF: ;
    PUSH32(esp, 0x20);
    ecx = esi;
    PUSH32(esp, 0x001EBE08u); RECOMP_ABI_CALL(0x001EA9E0u, sub_001EA9E0); /* call 0x001EA9E0 */

loc_001EBE08: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EBE14u); RECOMP_ABI_CALL(0x001EA9B0u, sub_001EA9B0); /* call 0x001EA9B0 */

loc_001EBE14: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001EBE20u); RECOMP_ABI_CALL(0x001EA9C0u, sub_001EA9C0); /* call 0x001EA9C0 */

loc_001EBE20: ;
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
 * sub_001EBE30
 * Original: 0x001EBE30 - 0x001EBF13 (227 bytes, 74 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001EBE30: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001EBE40;

    /* nop */

loc_001EBE40: ;
    PUSH32(esp, 0x3FFF);
    PUSH32(esp, 0x624070);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EBE50u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_001EBE50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_001EBE5E; /* jge: greater or equal (signed >=) */

loc_001EBE57: ;
    eax = 0x61406C;
    goto loc_001EBE65;

loc_001EBE5E: ;
    eax = eax * 4 + 0x614070;

loc_001EBE65: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001EBE6E; /* jne: not equal / not zero */

loc_001EBE6A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001EBEE5; /* jne: not equal / not zero */

loc_001EBE6E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001EBEAA; /* jne: not equal / not zero */

loc_001EBE72: ;
    ecx = MEM32(0x641D88);
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
    MEM32(0x641D88) = ecx;
    esi = ecx + eax;
    goto loc_001EBE40;

loc_001EBEAA: ;
    ecx = MEM32(0x641D8C);
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
    MEM32(0x641D8C) = ecx;
    esi = ecx + eax;
    goto loc_001EBE40;

loc_001EBEE5: ;
    PUSH32(esp, 0x3FFF);
    PUSH32(esp, 0x624070);
    PUSH32(esp, esi);
    MEM32(edi + 0x28) = esi;
    PUSH32(esp, 0x001EBEF8u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_001EBEF8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 4 + 0x614070) = edi;
    eax = MEM32(0x614068);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x614068) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EBF20
 * Original: 0x001EBF20 - 0x001EBF2E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBF20(void)
{

loc_001EBF20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x001EBF2Au); RECOMP_ABI_CALL(0x001EAAD0u, sub_001EAAD0); /* call 0x001EAAD0 */

loc_001EBF2A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EBF30
 * Original: 0x001EBF30 - 0x001EBF35 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBF30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EBF30: ;
    g_seh_ebp = ebp; sub_001EAB30(); return; /* tail jmp 0x001EAB30 */

}

/**
 * sub_001EBF40
 * Original: 0x001EBF40 - 0x001EBF96 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EBF40: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 4;
    edx = 0x100;
    goto loc_001EBF50;

    /* nop */

loc_001EBF50: ;
    PUSH32(esp, 0x001EBF55u); RECOMP_ABI_CALL(0x001EBBF0u, sub_001EBBF0); /* call 0x001EBBF0 */

loc_001EBF55: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EBF50; /* jne: not equal / not zero */

loc_001EBF5B: ;
    ecx = esi + 0x3814;
    edx = 4;

loc_001EBF66: ;
    PUSH32(esp, 0x001EBF6Bu); RECOMP_ABI_CALL(0x001EB100u, sub_001EB100); /* call 0x001EB100 */

loc_001EBF6B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EBF66; /* jne: not equal / not zero */

loc_001EBF71: ;
    ecx = esi + 0x4C54;
    edx = 0x100;
    /* nop */

loc_001EBF80: ;
    PUSH32(esp, 0x001EBF85u); RECOMP_ABI_CALL(0x001EB2A0u, sub_001EB2A0); /* call 0x001EB2A0 */

loc_001EBF85: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EBF80; /* jne: not equal / not zero */

loc_001EBF8B: ;
    ecx = esi;
    PUSH32(esp, 0x001EBF92u); RECOMP_ABI_CALL(0x001EAC00u, sub_001EAC00); /* call 0x001EAC00 */

loc_001EBF92: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EBFA0
 * Original: 0x001EBFA0 - 0x001EBFF1 (81 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBFA0(void)
{

loc_001EBFA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi + 8;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x001EBFBAu); RECOMP_ABI_CALL(0x00205EE0u, sub_00205EE0); /* call 0x00205EE0 */

loc_001EBFBA: ;
    edx = MEM32(edi + 0x24);
    MEM32(esi + 0x24) = edx;
    eax = MEM32(edi + 0x28);
    MEM32(esi + 0x28) = eax;
    SET_LO16(ecx, MEM16(edi + 0x2C));
    MEM16(esi + 0x2C) = LO16(ecx);
    SET_LO16(edx, MEM16(edi + 0x2E));
    MEM16(esi + 0x2E) = LO16(edx);
    SET_LO16(eax, MEM16(edi + 0x30));
    MEM16(esi + 0x30) = LO16(eax);
    SET_LO8(ecx, MEM8(edi + 0x32));
    MEM8(esi + 0x32) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x33));
    POP32(esp, edi);
    MEM8(esi + 0x33) = LO8(edx);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EC000
 * Original: 0x001EC000 - 0x001EC0DD (221 bytes, 71 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC000: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi + 0x7C54);
    PUSH32(esp, 0x3FF);
    eax = edi + 0x1008;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001EC021u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_001EC021: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EC02D; /* jge: greater or equal (signed >=) */

loc_001EC028: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001EC031;

loc_001EC02D: ;
    edi = edi + eax * 4 + 8;

loc_001EC031: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC0D7; /* jne: not equal / not zero */

loc_001EC03A: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001EC042u); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_001EC042: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC0D7; /* je: equal / zero */

loc_001EC04F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001EC055u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_001EC055: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7553D637) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7553D637 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC0D7; /* je: equal / zero */

loc_001EC05F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001EC065u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_001EC065: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A74B5D5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A74B5D5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC0D7; /* je: equal / zero */

loc_001EC06F: ;
    ecx = MEM32(esi + 0x9C58);
    eax = esp + 0x10;
    edx = ecx + esi + 0x7C58;
    ecx = MEM32(esi + 0x7C54);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x001EC091u); RECOMP_ABI_CALL(0x002027E0u, sub_002027E0); /* call 0x002027E0 */

loc_001EC091: ;
    edx = MEM32(esi + 0x9C58);
    ecx = edi;
    edx = edx + esi + 0x7C58;

loc_001EC0A0: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC0A0; /* jne: not equal / not zero */

loc_001EC0AA: ;
    eax = edi;
    edx = eax + 1;
    /* nop */

loc_001EC0B0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC0B0; /* jne: not equal / not zero */

loc_001EC0B7: ;
    ecx = MEM32(esi + 0x9C58);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x9C58) = ecx;
    eax = ecx;
    MEM8(eax + esi + 0x7C58) = 0;
    MEM32(esi + 0x9C58) = MEM32(esi + 0x9C58) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x9C58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001EC0D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EC0E0
 * Original: 0x001EC0E0 - 0x001EC0F9 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC0E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC0E0: ;
    eax = MEM32(0x4414B8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(ecx + 8) = 0xF;
    MEM8(ecx + 0xC) = LO8(eax);
    MEM8(ecx + 0xD) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC100
 * Original: 0x001EC100 - 0x001EC17A (122 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC100: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8D39BDE6u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001EC112u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EC10Fu); } /* indirect call */
    }

loc_001EC112: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC16B; /* je: equal / zero */

loc_001EC118: ;
    PUSH32(esp, 0x7FF);
    PUSH32(esp, 0x63FD70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EC128u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_001EC128: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EC136; /* jge: greater or equal (signed >=) */

loc_001EC12F: ;
    eax = 0x63DD6C;
    goto loc_001EC13D;

loc_001EC136: ;
    eax = eax * 4 + 0x63DD70;

loc_001EC13D: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC16E; /* jne: not equal / not zero */

loc_001EC143: ;
    PUSH32(esp, 0x7FF);
    PUSH32(esp, 0x63FD70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EC153u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_001EC153: ;
    ecx = MEM32(edi + 0x28);
    MEM32(eax * 4 + 0x63DD70) = ecx;
    eax = MEM32(0x63DD68);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x63DD68) = eax;

loc_001EC16B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001EC16E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x28) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC16B; /* je: equal / zero */

loc_001EC173: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00209040(); return; /* tail jmp 0x00209040 */

}

/**
 * sub_001EC180
 * Original: 0x001EC180 - 0x001EC1C8 (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC180: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC1C6; /* je: equal / zero */

loc_001EC189: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EC191u); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_001EC191: ;
    PUSH32(esp, 0x7FF);
    PUSH32(esp, 0x63FD70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EC1A1u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_001EC1A1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EC1AF; /* jge: greater or equal (signed >=) */

loc_001EC1A8: ;
    eax = 0x63DD6C;
    goto loc_001EC1B6;

loc_001EC1AF: ;
    eax = eax * 4 + 0x63DD70;

loc_001EC1B6: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC1C6; /* je: equal / zero */

loc_001EC1BB: ;
    PUSH32(esp, esi);
    ecx = 0x63DD68;
    PUSH32(esp, 0x001EC1C6u); RECOMP_ABI_CALL(0x00035ED0u, sub_00035ED0); /* call 0x00035ED0 */

loc_001EC1C6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC1D0
 * Original: 0x001EC1D0 - 0x001EC212 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001EC1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC1D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x3FFF);
    PUSH32(esp, 0x624070);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EC1E4u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_001EC1E4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EC1F2; /* jge: greater or equal (signed >=) */

loc_001EC1EB: ;
    eax = 0x61406C;
    goto loc_001EC1F9;

loc_001EC1F2: ;
    eax = eax * 4 + 0x614070;

loc_001EC1F9: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC20F; /* je: equal / zero */

loc_001EC1FF: ;
    SET_LO8(ecx, MEM8(eax + 0x30));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC20F; /* je: equal / zero */

loc_001EC207: ;
    SET_LO8(ecx, LO8(ecx) >> 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC211; /* je: equal / zero */

loc_001EC20F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EC211: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EC220
 * Original: 0x001EC220 - 0x001EC266 (70 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001EC220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC220: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x3FFF);
    PUSH32(esp, 0x624070);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EC234u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_001EC234: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EC242; /* jge: greater or equal (signed >=) */

loc_001EC23B: ;
    eax = 0x61406C;
    goto loc_001EC249;

loc_001EC242: ;
    eax = eax * 4 + 0x614070;

loc_001EC249: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC263; /* je: equal / zero */

loc_001EC24F: ;
    SET_LO8(ecx, MEM8(eax + 0x30));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC263; /* je: equal / zero */

loc_001EC257: ;
    SET_LO8(ecx, LO8(ecx) >> 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EC263; /* jne: not equal / not zero */

loc_001EC25F: ;
    eax = MEM32(eax + 0x24);
    esp += 4; return; /* ret */

loc_001EC263: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001EC270
 * Original: 0x001EC270 - 0x001EC29B (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC270: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x7FF);
    PUSH32(esp, 0x63FD70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EC284u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_001EC284: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EC293; /* jge: greater or equal (signed >=) */

loc_001EC28B: ;
    eax = 0x63DD6C;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

loc_001EC293: ;
    eax = MEM32(eax * 4 + 0x63DD70);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC2A0
 * Original: 0x001EC2A0 - 0x001EC31C (124 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC2A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001EC2A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0x001EC2ACu); RECOMP_ABI_CALL(0x0018DDE0u, sub_0018DDE0); /* call 0x0018DDE0 */

loc_001EC2AC: ;
    ecx = eax;
    PUSH32(esp, 0x001EC2B3u); RECOMP_ABI_CALL(0x000B5E50u, sub_000B5E50); /* call 0x000B5E50 */

loc_001EC2B3: ;
    ecx = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    SET_LO16(eax, MEM16(esi + 0x30));
    SET_LO8(ecx, LO8(eax));
    xmm2 = xmm0; /* movaps */
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    if (TEST_NZ(_fa, _fb)) goto loc_001EC2F6; /* jne: not equal / not zero */

loc_001EC2EE: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E4060)); /* movss */

loc_001EC2F6: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    POP32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001EC319; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_001EC30D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC319; /* je: equal / zero */

loc_001EC311: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EC319; /* jne: not equal / not zero */

loc_001EC316: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001EC319: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001EC320
 * Original: 0x001EC320 - 0x001EC397 (119 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001EC320: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0x001EC32Cu); RECOMP_ABI_CALL(0x0018DDE0u, sub_0018DDE0); /* call 0x0018DDE0 */

loc_001EC32C: ;
    ecx = eax;
    PUSH32(esp, 0x001EC333u); RECOMP_ABI_CALL(0x000B5E50u, sub_000B5E50); /* call 0x000B5E50 */

loc_001EC333: ;
    ecx = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    SET_LO16(eax, MEM16(esi + 0x30));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x2E4060)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    if (TEST_NZ(_fa, _fb)) goto loc_001EC371; /* jne: not equal / not zero */

loc_001EC369: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */

loc_001EC371: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    POP32(esp, esi);
    if ((_fca > _fcb)) goto loc_001EC394; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_001EC388: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC394; /* je: equal / zero */

loc_001EC38C: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EC394; /* jne: not equal / not zero */

loc_001EC391: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001EC394: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC3A0
 * Original: 0x001EC3A0 - 0x001EC3CB (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC3A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFFF);
    PUSH32(esp, 0x4D0068);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EC3B4u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_001EC3B4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EC3C3; /* jge: greater or equal (signed >=) */

loc_001EC3BB: ;
    eax = 0x4CC064;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

loc_001EC3C3: ;
    eax = MEM32(eax * 4 + 0x4CC068);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC3D0
 * Original: 0x001EC3D0 - 0x001EC413 (67 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC3D0: ;
    eax = MEM32(0x4434CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_001EC3E2; /* je: equal / zero */

loc_001EC3DD: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC402; /* je: equal / zero */

loc_001EC3E2: ;
    eax = MEM32(0x30EE64);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001EC400; /* js: sign (negative) */

loc_001EC3EA: ;
    ecx = eax + eax * 2;
    ecx = ecx * 4 + 0x514070;

loc_001EC3F4: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC403; /* je: equal / zero */

loc_001EC3F8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EC3F4; /* jge: greater or equal (signed >=) */

loc_001EC400: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EC402: ;
    esp += 4; return; /* ret */

loc_001EC403: ;
    eax = eax + eax * 2;
    eax = eax * 4 + 0x514068;
    MEM32(0x4434CC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001EC420
 * Original: 0x001EC420 - 0x001EC436 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC420: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EC42Au); RECOMP_ABI_CALL(0x001EC3D0u, sub_001EC3D0); /* call 0x001EC3D0 */

loc_001EC42A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC435; /* je: equal / zero */

loc_001EC431: ;
    MEM8(eax + 2) = MEM8(eax + 2) & 0xF7;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_001EC435: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EC440
 * Original: 0x001EC440 - 0x001EC554 (276 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC440: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(0x4434CC) = ebx;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x30EE64) = ebx;
    edi = 0x514068;
    /* nop */

loc_001EC460: ;
    SET_LO8(eax, MEM8(edi + 2));
    SET_LO8(eax, LO8(eax) >> 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EC4C8; /* jne: not equal / not zero */

loc_001EC46A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) esi = ebx; /* cmovl */
    eax = esi + esi * 2;
    SET_LO8(ecx, MEM8(eax * 4 + 0x51406A));
    edx = eax * 4 + 0x51406A;
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EC4A5; /* jne: not equal / not zero */

loc_001EC488: ;
    ecx = edx + -2;
    PUSH32(esp, 0x001EC490u); RECOMP_ABI_CALL(0x001EA780u, sub_001EA780); /* call 0x001EA780 */

loc_001EC490: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x54406A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x54406A (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EC4E5; /* jge: greater or equal (signed >=) */

loc_001EC49C: ;
    SET_LO8(eax, MEM8(edx));
    SET_LO8(eax, LO8(eax) >> 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC488; /* je: equal / zero */

loc_001EC4A5: ;
    eax = esi + esi * 2;
    ecx = eax * 4 + 0x514068;
    edx = ecx;
    ebp = MEM32(edx);
    eax = edi;
    MEM32(eax) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(eax + 4) = ebp;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x001EC4C8u); RECOMP_ABI_CALL(0x001EA780u, sub_001EA780); /* call 0x001EA780 */

loc_001EC4C8: ;
    ecx = MEM32(0x30EE64);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x544068) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x544068 (32-bit) */
    MEM32(0x30EE64) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001EC460; /* jl: less (signed <) */

loc_001EC4E5: ;
    eax = MEM32(0x30EE64);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = 0x4D4068;
    MEM32(0x30EE68) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_001EC54F; /* jle: less or equal (signed <=) */

loc_001EC4FB: ;
    eax = 0x514068;

loc_001EC500: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001EC52D; /* jae: above or equal (unsigned >=) */

loc_001EC505: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ecx) (16-bit) */
    edx = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_001EC52A; /* jle: less or equal (signed <=) */

loc_001EC50E: ;
    edi = edi;

loc_001EC510: ;
    ebx = MEM32(eax + 4);
    ebp = MEM32(ebx + ecx * 8);
    MEM32(edx) = ebp;
    ebx = MEM32(ebx + ecx * 8 + 4);
    MEM32(edx + 4) = ebx;
    ebx = (uint32_t)(int32_t)SMEM16(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EC510; /* jl: less (signed <) */

loc_001EC52A: ;
    MEM32(eax + 4) = esi;

loc_001EC52D: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    ebp = MEM32(0x30EE68);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi + ecx * 8;
    ecx = MEM32(0x30EE64);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(0x30EE68) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_001EC500; /* jl: less (signed <) */

loc_001EC54F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC560
 * Original: 0x001EC560 - 0x001EC58E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC560: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EC56Au); RECOMP_ABI_CALL(0x001EC1D0u, sub_001EC1D0); /* call 0x001EC1D0 */

loc_001EC56A: ;
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC58D; /* je: equal / zero */

loc_001EC573: ;
    SET_LO8(edx, MEM8(ecx + 0x30));
    SET_LO8(edx, LO8(edx) >> 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EC58D; /* jne: not equal / not zero */

loc_001EC57E: ;
    PUSH32(esp, 0x001EC583u); RECOMP_ABI_CALL(0x001EAA10u, sub_001EAA10); /* call 0x001EAA10 */

loc_001EC583: ;
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0x001EC58Du); RECOMP_ABI_CALL(0x001EA9E0u, sub_001EA9E0); /* call 0x001EA9E0 */

loc_001EC58D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EC590
 * Original: 0x001EC590 - 0x001EC5B6 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC590(void)
{

loc_001EC590: ;
    PUSH32(esp, esi);
    ecx = 0x634070;
    PUSH32(esp, edi);
    MEM32(0x4434D0) = ecx;
    PUSH32(esp, 0x001EC5A2u); RECOMP_ABI_CALL(0x001EAC00u, sub_001EAC00); /* call 0x001EAC00 */

loc_001EC5A2: ;
    esi = MEM32(esp + 0xC);
    edi = MEM32(0x4434D0);
    ecx = 0x2717;
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
    esp += 4; return; /* ret */

}

/**
 * sub_001EC5C0
 * Original: 0x001EC5C0 - 0x001EC626 (102 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC5C0: ;
    SET_LO8(eax, MEM8(0x4434C0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC625; /* jne: not equal / not zero */

loc_001EC5C9: ;
    PUSH32(esp, esi);
    esi = 0x544068;
    /* nop */

loc_001EC5D0: ;
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x30), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC612; /* je: equal / zero */

loc_001EC5D6: ;
    ecx = MEM32(0x4434D4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x001EC5E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EC5DFu); } /* indirect call */
    }

loc_001EC5E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC5EF; /* je: equal / zero */

loc_001EC5E6: ;
    ecx = esi;
    PUSH32(esp, 0x001EC5EDu); RECOMP_ABI_CALL(0x001EAA80u, sub_001EAA80); /* call 0x001EAA80 */

loc_001EC5ED: ;
    goto loc_001EC606;

loc_001EC5EF: ;
    ecx = MEM32(0x4434D4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001EC5FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EC5F8u); } /* indirect call */
    }

loc_001EC5FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC612; /* je: equal / zero */

loc_001EC5FF: ;
    ecx = esi;
    PUSH32(esp, 0x001EC606u); RECOMP_ABI_CALL(0x001EAA70u, sub_001EAA70); /* call 0x001EAA70 */

loc_001EC606: ;
    ecx = esi;
    PUSH32(esp, 0x800);
    PUSH32(esp, 0x001EC612u); RECOMP_ABI_CALL(0x001EA9E0u, sub_001EA9E0); /* call 0x001EA9E0 */

loc_001EC612: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x34;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x614068) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x614068 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EC5D0; /* jl: less (signed <) */

loc_001EC61D: ;
    MEM8(0x4434C0) = 1;
    POP32(esp, esi);

loc_001EC625: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EC630
 * Original: 0x001EC630 - 0x001EC661 (49 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC630: ;
    eax = 0x544098;

loc_001EC635: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC64F; /* je: equal / zero */

loc_001EC63A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax));
    ecx = ecx >> 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC64F; /* je: equal / zero */

loc_001EC647: ;
    ecx = eax + -48;
    PUSH32(esp, 0x001EC64Fu); RECOMP_ABI_CALL(0x001EAA90u, sub_001EAA90); /* call 0x001EAA90 */

loc_001EC64F: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x614098) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x614098 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EC635; /* jl: less (signed <) */

loc_001EC659: ;
    MEM8(0x4434C0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001EC670
 * Original: 0x001EC670 - 0x001EC6AA (58 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC670: ;
    eax = esp + -8;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EC67Du); RECOMP_ABI_CALL(0x001FFCD0u, sub_001FFCD0); /* call 0x001FFCD0 */

loc_001EC67D: ;
    ecx = (uint32_t)(int32_t)SMEM8(esp + 7);
    edx = (uint32_t)(int32_t)SMEM8(esp + 6);
    eax = (uint32_t)(int32_t)SMEM8(esp + 5);
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = (uint32_t)(int32_t)SMEM8(esp + 4);
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x641D88) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001EC6B0
 * Original: 0x001EC6B0 - 0x001EC6D8 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC6B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC6B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x1008;
    PUSH32(esp, 0x400);
    MEM32(esi) = 0;
    PUSH32(esp, eax);
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x001EC6D1u); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_001EC6D1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC6E0
 * Original: 0x001EC6E0 - 0x001EC7E2 (258 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC6E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC6E0: ;
    _fb = (uint32_t)(0x1AC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1AC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x1B4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    MEM32(esp) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001EC7DB; /* jle: less or equal (signed <=) */

loc_001EC6FB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM16(esp + 0x28) = LO16(ecx);
    ecx = MEM32(esp + 0x1BC);
    PUSH32(esp, edi);
    MEM16(esp + 0x2E) = LO16(eax);
    ebx = 2;
    goto loc_001EC720;

    /* nop */
    /* nop */

loc_001EC720: ;
    esi = ZX16(MEM16(esp + ebx * 2 + 0x2A));
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ZX16(MEM16(esp + ebx * 2 + 0x2A));
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = eax + esi;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = MEM32(ecx + ebp * 8);
    ebp = MEM32(ecx + ebp * 8 + 4);
    MEM32(esp + 0x28) = ebp;
    ebp = esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = eax;
    edx = eax;
    if (CMP_G(_fas, _fbs)) goto loc_001EC7A7; /* jg: greater (signed >) */

loc_001EC74C: ;
    /* nop */

loc_001EC750: ;
    _fa = (uint32_t)(MEM32(ecx + esi * 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + esi * 8), edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001EC75E; /* jae: above or equal (unsigned >=) */

loc_001EC755: ;
    ebp = MEM32(ecx + esi * 8 + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EC755; /* jb: below (unsigned <) */

loc_001EC75E: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 8), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EC76C; /* jbe: below or equal (unsigned <=) */

loc_001EC763: ;
    ebp = MEM32(ecx + edx * 8 + -8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EC763; /* ja: above (unsigned >) */

loc_001EC76C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001EC7A7; /* jg: greater (signed >) */

loc_001EC770: ;
    eax = MEM32(ecx + esi * 8 + 4);
    ebp = MEM32(ecx + esi * 8);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ecx + edx * 8);
    MEM32(ecx + esi * 8) = eax;
    eax = MEM32(ecx + edx * 8 + 4);
    MEM32(ecx + esi * 8 + 4) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(ecx + edx * 8) = ebp;
    ebp = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + edx * 8 + 4) = eax;
    eax = MEM32(esp + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_001EC750; /* jle: less or equal (signed <=) */

loc_001EC7A7: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EC7BB; /* jge: greater or equal (signed >=) */

loc_001EC7AF: ;
    MEM16(esp + ebx * 2 + 0x2C) = LO16(edx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esp + ebx * 2 + 0x2C) = LO16(edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001EC7BB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EC7CB; /* jge: greater or equal (signed >=) */

loc_001EC7BF: ;
    MEM16(esp + ebx * 2 + 0x2C) = LO16(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esp + ebx * 2 + 0x2C) = LO16(esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001EC7CB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC720; /* jne: not equal / not zero */

loc_001EC7D3: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001EC7DB: ;
    _fb = (uint32_t)(0x1AC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1AC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001EC7F0
 * Original: 0x001EC7F0 - 0x001EC843 (83 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC7F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC7F0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    edx = eax + 4;
    MEM32(edx + 0x18) = 0;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x18) = 0;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x18) = 0;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = 0;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = 0;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = 0;
    MEM32(edx + 0x18) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001EC850
 * Original: 0x001EC850 - 0x001EC875 (37 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC850: ;
    SET_LO8(ecx, MEM8(0x641E5C));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EC86F; /* jne: not equal / not zero */

loc_001EC85F: ;
    MEM32(0x641E5C) = MEM32(0x641E5C) | eax;
    _fa = (uint32_t)(MEM32(0x641E5C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0x641D98;
    PUSH32(esp, 0x001EC86Fu); RECOMP_ABI_CALL(0x001EC7F0u, sub_001EC7F0); /* call 0x001EC7F0 */

loc_001EC86F: ;
    eax = 0x641D98;
    esp += 4; return; /* ret */

}

/**
 * sub_001EC880
 * Original: 0x001EC880 - 0x001EC8A5 (37 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC880: ;
    SET_LO8(ecx, MEM8(0x641F24));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EC89F; /* jne: not equal / not zero */

loc_001EC88F: ;
    MEM32(0x641F24) = MEM32(0x641F24) | eax;
    _fa = (uint32_t)(MEM32(0x641F24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0x641E60;
    PUSH32(esp, 0x001EC89Fu); RECOMP_ABI_CALL(0x001EC7F0u, sub_001EC7F0); /* call 0x001EC7F0 */

loc_001EC89F: ;
    eax = 0x641E60;
    esp += 4; return; /* ret */

}

/**
 * sub_001EC8B0
 * Original: 0x001EC8B0 - 0x001EC900 (80 bytes, 34 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC8B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC8B0: ;
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
    PUSH32(esp, 0x001EC8CAu); RECOMP_ABI_CALL(0x001EB270u, sub_001EB270); /* call 0x001EB270 */

loc_001EC8CA: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC8ED; /* je: equal / zero */

loc_001EC8D2: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    ecx = ecx + eax * 8;
    PUSH32(esp, 0x001EC8E3u); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_001EC8E3: ;
    MEM16(esi + 4) = MEM16(esi + 4) + 1;
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x30EE60) = MEM32(0x30EE60) + 1;
    _fa = (uint32_t)(MEM32(0x30EE60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001EC8ED: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x001EC8F9u); RECOMP_ABI_CALL(0x001EB220u, sub_001EB220); /* call 0x001EB220 */

loc_001EC8F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001EC900
 * Original: 0x001EC900 - 0x001EC916 (22 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC900: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001EC910u); RECOMP_ABI_CALL(0x001EB1B0u, sub_001EB1B0); /* call 0x001EB1B0 */

loc_001EC910: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EC920
 * Original: 0x001EC920 - 0x001EC95D (61 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC920: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001EC933u); RECOMP_ABI_CALL(0x001EC900u, sub_001EC900); /* call 0x001EC900 */

loc_001EC933: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC956; /* je: equal / zero */

loc_001EC937: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC956; /* je: equal / zero */

loc_001EC93C: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EC943u); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_001EC943: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC958; /* je: equal / zero */

loc_001EC94A: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC958; /* jne: not equal / not zero */

loc_001EC94F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001EC956: ;
    eax = edi;

loc_001EC958: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EC960
 * Original: 0x001EC960 - 0x001EC99A (58 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC960(void)
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

loc_001EC960: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001EC97Au); RECOMP_ABI_CALL(0x001EC900u, sub_001EC900); /* call 0x001EC900 */

loc_001EC97A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC991; /* je: equal / zero */

loc_001EC97E: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC991; /* je: equal / zero */

loc_001EC983: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EC989u); RECOMP_ABI_CALL(0x001EA740u, sub_001EA740); /* call 0x001EA740 */

loc_001EC989: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001EC991: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001EC9A0
 * Original: 0x001EC9A0 - 0x001EC9E8 (72 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC9A0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001EC9BA; /* je: equal / zero */

loc_001EC9B3: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001EC9BAu); RECOMP_ABI_CALL(0x001EC9A0u, sub_001EC9A0); /* call 0x001EC9A0 */

loc_001EC9BA: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), LO16(edi) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EC9E2; /* jle: less or equal (signed <=) */

loc_001EC9C2: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + edi * 8 + 4);
    ecx = ecx + edi * 8;
    ecx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001EC9D9u); RECOMP_ABI_CALL(0x001EB220u, sub_001EB220); /* call 0x001EB220 */

loc_001EC9D9: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EC9C2; /* jl: less (signed <) */

loc_001EC9E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EC9F0
 * Original: 0x001EC9F0 - 0x001ECA1D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC9F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC9F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x24C) = eax;
    MEM32(esi + 0x250) = eax;
    eax = esi + 0x354;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ECA0Fu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_001ECA0F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x001ECA19u); RECOMP_ABI_CALL(0x001EB3F0u, sub_001EB3F0); /* call 0x001EB3F0 */

loc_001ECA19: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001ECA20
 * Original: 0x001ECA20 - 0x001ECA50 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECA20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECA20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x48;
    PUSH32(esp, 0x10);
    MEM32(esi) = edi;
    PUSH32(esp, eax);
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x001ECA36u); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_001ECA36: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x8C) = edi;
    MEM32(esi + 0x88) = edi;
    MEM32(esi + 0x94) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001ECA50
 * Original: 0x001ECA50 - 0x001ECA7F (47 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ECA50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECA50: ;
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
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECA67u); RECOMP_ABI_CALL(0x00205F50u, sub_00205F50); /* call 0x00205F50 */

loc_001ECA67: ;
    esi = MEM32(ebp + 8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ECA76u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_001ECA76: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ECA80
 * Original: 0x001ECA80 - 0x001ECAA1 (33 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECA80: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM8(esp + 3) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_001ECA9D; /* je: equal / zero */

loc_001ECA8E: ;
    edx = MEM32(esp + 8);
    eax = esp + 3;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001ECA9Du); RECOMP_ABI_CALL(0x001EC900u, sub_001EC900); /* call 0x001EC900 */

loc_001ECA9D: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ECAB0
 * Original: 0x001ECAB0 - 0x001ECAE3 (51 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECAB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECAB0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(esp + 3) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001ECADD; /* je: equal / zero */

loc_001ECABD: ;
    edx = MEM32(esp + 8);
    eax = esp + 3;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001ECACCu); RECOMP_ABI_CALL(0x001EC920u, sub_001EC920); /* call 0x001EC920 */

loc_001ECACC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECAD5; /* je: equal / zero */

loc_001ECAD0: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECADD; /* je: equal / zero */

loc_001ECAD5: ;
    SET_LO8(ecx, MEM8(esp + 3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ECADF; /* jne: not equal / not zero */

loc_001ECADD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001ECADF: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ECAF0
 * Original: 0x001ECAF0 - 0x001ECB1A (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECAF0(void)
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

loc_001ECAF0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(eax) = 0;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECB13; /* je: equal / zero */

loc_001ECB07: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; sub_001EC960(); return; /* tail jmp 0x001EC960 */

loc_001ECB13: ;
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001ECB20
 * Original: 0x001ECB20 - 0x001ECB69 (73 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECB20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = esi + 0x24;
    MEM8(esp + 0x13) = LO8(ebx);
    PUSH32(esp, 0x001ECB39u); RECOMP_ABI_CALL(0x001EB0D0u, sub_001EB0D0); /* call 0x001EB0D0 */

loc_001ECB39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECB47; /* je: equal / zero */

loc_001ECB3D: ;
    eax = MEM32(eax + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001ECB47: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECB60; /* je: equal / zero */

loc_001ECB4E: ;
    eax = esp + 0xF;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001ECB59u); RECOMP_ABI_CALL(0x001EC900u, sub_001EC900); /* call 0x001EC900 */

loc_001ECB59: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001ECB60: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ECB70
 * Original: 0x001ECB70 - 0x001ECBCA (90 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECB70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x24;
    MEM8(esp + 0x13) = 0;
    PUSH32(esp, 0x001ECB88u); RECOMP_ABI_CALL(0x001EB0D0u, sub_001EB0D0); /* call 0x001EB0D0 */

loc_001ECB88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECB9E; /* je: equal / zero */

loc_001ECB8C: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x001ECB99u); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_001ECB99: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001ECBB4;

loc_001ECB9E: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECBC1; /* je: equal / zero */

loc_001ECBA5: ;
    eax = esp + 0xF;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001ECBB0u); RECOMP_ABI_CALL(0x001EC920u, sub_001EC920); /* call 0x001EC920 */

loc_001ECBB0: ;
    SET_LO8(ebx, MEM8(esp + 0xF));

loc_001ECBB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECBBD; /* je: equal / zero */

loc_001ECBB8: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECBC1; /* je: equal / zero */

loc_001ECBBD: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ECBC3; /* jne: not equal / not zero */

loc_001ECBC1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001ECBC3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ECBD0
 * Original: 0x001ECBD0 - 0x001ECC2D (93 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECBD0(void)
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

loc_001ECBD0: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    esi = ecx;
    PUSH32(esp, ebx);
    ecx = esi + 0x24;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM8(edi) = 0;
    PUSH32(esp, 0x001ECBF3u); RECOMP_ABI_CALL(0x001EB0D0u, sub_001EB0D0); /* call 0x001EB0D0 */

loc_001ECBF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECC0D; /* je: equal / zero */

loc_001ECBF7: ;
    MEM8(edi) = 1;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ECC03u); RECOMP_ABI_CALL(0x001EA740u, sub_001EA740); /* call 0x001EA740 */

loc_001ECC03: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001ECC0D: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECC22; /* je: equal / zero */

loc_001ECC14: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001ECC1Bu); RECOMP_ABI_CALL(0x001EC960u, sub_001EC960); /* call 0x001EC960 */

loc_001ECC1B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001ECC22: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_001ECC30
 * Original: 0x001ECC30 - 0x001ECC5D (45 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECC30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECC30: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001ECC49u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_001ECC49: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = esi + 0x24;
    PUSH32(esp, 0x001ECC56u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_001ECC56: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ECC60
 * Original: 0x001ECC60 - 0x001ECC8A (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECC60: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    SET_LO16(eax, MEM16(esi + 0x30));
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ECC7C; /* je: equal / zero */

loc_001ECC70: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001ECC79u); RECOMP_ABI_CALL(0x001EC420u, sub_001EC420); /* call 0x001EC420 */

loc_001ECC79: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001ECC7C: ;
    PUSH32(esp, 0x1000);
    ecx = esi;
    PUSH32(esp, 0x001ECC88u); RECOMP_ABI_CALL(0x001EA9F0u, sub_001EA9F0); /* call 0x001EA9F0 */

loc_001ECC88: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001ECC90
 * Original: 0x001ECC90 - 0x001ECCCE (62 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECC90: ;
    eax = MEM32(ecx + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ECC9Au); RECOMP_ABI_CALL(0x001EC3D0u, sub_001EC3D0); /* call 0x001EC3D0 */

loc_001ECC9A: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECCCA; /* je: equal / zero */

loc_001ECCA3: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), LO16(esi) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001ECCC9; /* jle: less or equal (signed <=) */

loc_001ECCAB: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);

loc_001ECCB0: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001ECCB8u); RECOMP_ABI_CALL(0x001EA830u, sub_001EA830); /* call 0x001EA830 */

loc_001ECCB8: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001ECCC0u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_001ECCC0: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ECCB0; /* jl: less (signed <) */

loc_001ECCC8: ;
    POP32(esp, ebx);

loc_001ECCC9: ;
    POP32(esp, esi);

loc_001ECCCA: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ECCD0
 * Original: 0x001ECCD0 - 0x001ECD26 (86 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECCD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECCD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0x30));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM8(esp + 0xB) = LO8(eax);
    ecx = ecx >> 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ECD0E; /* je: equal / zero */

loc_001ECCED: ;
    edx = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001ECCF6u); RECOMP_ABI_CALL(0x001EC3D0u, sub_001EC3D0); /* call 0x001EC3D0 */

loc_001ECCF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xB;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x001ECD06u); RECOMP_ABI_CALL(0x001EB330u, sub_001EB330); /* call 0x001EB330 */

loc_001ECD06: ;
    SET_LO8(ecx, MEM8(esp + 0xB));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ECD20; /* jne: not equal / not zero */

loc_001ECD0E: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECD20; /* je: equal / zero */

loc_001ECD15: ;
    edx = esp + 0xB;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001ECD20u); RECOMP_ABI_CALL(0x001EC900u, sub_001EC900); /* call 0x001EC900 */

loc_001ECD20: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ECD30
 * Original: 0x001ECD30 - 0x001ECD99 (105 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECD30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0x30));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM8(esp + 0xB) = LO8(eax);
    ecx = ecx >> 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ECD6E; /* je: equal / zero */

loc_001ECD4D: ;
    edx = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001ECD56u); RECOMP_ABI_CALL(0x001EC3D0u, sub_001EC3D0); /* call 0x001EC3D0 */

loc_001ECD56: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xB;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x001ECD66u); RECOMP_ABI_CALL(0x001EB370u, sub_001EB370); /* call 0x001EB370 */

loc_001ECD66: ;
    SET_LO8(ecx, MEM8(esp + 0xB));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ECD80; /* jne: not equal / not zero */

loc_001ECD6E: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECD80; /* je: equal / zero */

loc_001ECD75: ;
    edx = esp + 0xB;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001ECD80u); RECOMP_ABI_CALL(0x001EC920u, sub_001EC920); /* call 0x001EC920 */

loc_001ECD80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001ECD8B; /* je: equal / zero */

loc_001ECD86: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECD93; /* je: equal / zero */

loc_001ECD8B: ;
    SET_LO8(ecx, MEM8(esp + 3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ECD95; /* jne: not equal / not zero */

loc_001ECD93: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001ECD95: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ECDA0
 * Original: 0x001ECDA0 - 0x001ECDFE (94 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECDA0(void)
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

loc_001ECDA0: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    MEM8(edi) = 0;
    SET_LO16(eax, MEM16(esi + 0x30));
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ECDE3; /* je: equal / zero */

loc_001ECDC7: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001ECDD0u); RECOMP_ABI_CALL(0x001EC3D0u, sub_001EC3D0); /* call 0x001EC3D0 */

loc_001ECDD0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x001ECDDCu); RECOMP_ABI_CALL(0x001EB3B0u, sub_001EB3B0); /* call 0x001EB3B0 */

loc_001ECDDC: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ECDF7; /* jne: not equal / not zero */

loc_001ECDE1: ;
    goto loc_001ECDE7;

loc_001ECDE3: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_001ECDE7: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECDF7; /* je: equal / zero */

loc_001ECDEE: ;
    PUSH32(esp, edi);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001ECDF7u); RECOMP_ABI_CALL(0x001EC960u, sub_001EC960); /* call 0x001EC960 */

loc_001ECDF7: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_001ECE00
 * Original: 0x001ECE00 - 0x001ECE41 (65 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECE00: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    SET_LO16(eax, MEM16(esi + 0x30));
    PUSH32(esp, edi);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ECE1D; /* je: equal / zero */

loc_001ECE11: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001ECE1Au); RECOMP_ABI_CALL(0x001EC420u, sub_001EC420); /* call 0x001EC420 */

loc_001ECE1A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001ECE1D: ;
    edx = MEM32(esi + 0x28);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    ecx = 0x614068;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 4) = edi;
    MEM16(esi + 0x30) = LO16(edi);
    MEM8(esi + 0x32) = 0xFF;
    PUSH32(esp, 0x001ECE3Bu); RECOMP_ABI_CALL(0x001EAEB0u, sub_001EAEB0); /* call 0x001EAEB0 */

loc_001ECE3B: ;
    MEM32(esi + 0x28) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001ECE50
 * Original: 0x001ECE50 - 0x001ECED0 (128 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECE50: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001ECE96; /* jne: not equal / not zero */

loc_001ECE5B: ;
    SET_LO8(eax, MEM8(esi + 0x7C58));
    _fb = (uint32_t)(0x7C58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x7C58;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECECC; /* je: equal / zero */

loc_001ECE6B: ;
    goto loc_001ECE70;

    /* nop */

loc_001ECE70: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001ECE78u); RECOMP_ABI_CALL(0x00204D10u, sub_00204D10); /* call 0x00204D10 */

loc_001ECE78: ;
    eax = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;

loc_001ECE80: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ECE80; /* jne: not equal / not zero */

loc_001ECE87: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi + eax + 1;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ECE70; /* jne: not equal / not zero */

loc_001ECE92: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001ECE96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ECECC; /* jne: not equal / not zero */

loc_001ECE9B: ;
    PUSH32(esp, 0x2FC784);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2008);
    PUSH32(esp, 0x001ECEACu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_001ECEAC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ECEC4; /* je: equal / zero */

loc_001ECEB3: ;
    ecx = eax;
    PUSH32(esp, 0x001ECEBAu); RECOMP_ABI_CALL(0x001EC6B0u, sub_001EC6B0); /* call 0x001EC6B0 */

loc_001ECEBA: ;
    MEM32(esi + 0x7C54) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001ECEC4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x7C54) = eax;

loc_001ECECC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ECED0
 * Original: 0x001ECED0 - 0x001ED154 (644 bytes, 187 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECED0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = eax + esi + 4;
    PUSH32(esp, 0x001ECEECu); RECOMP_ABI_CALL(0x001EBFA0u, sub_001EBFA0); /* call 0x001EBFA0 */

loc_001ECEEC: ;
    ecx = MEM32(esi);
    SET_LO8(eax, MEM8(esp + 0x24));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(ecx + esi + 8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001ED04A; /* je: equal / zero */

loc_001ECF05: ;
    eax = MEM32(esi + 0x340C);
    ebx = MEM32(ebp + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x3410);
    edi = esi + edx * 4 + 0x3814;
    ecx = esi + eax * 8 + 0x3854;
    MEM32(edi + 8) = ecx;
    edx = MEM32(esi);
    eax = MEM32(esi + 0x340C);
    MEM32(esi + edx * 4 + 0x3414) = eax;
    ecx = MEM32(esi + 0x340C);
    edx = MEM32(esi + 0x3410);
    MEM32(esp + 0x10) = ebx;
    MEM32(esi + ecx * 4 + 0x3844) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001ED03D; /* je: equal / zero */

loc_001ECF56: ;
    goto loc_001ECF60;

    /* nop */
    /* nop */

loc_001ECF60: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebx + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 4), LO16(ebp) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001ED02B; /* jle: less or equal (signed <=) */

loc_001ECF6C: ;
    /* nop */

loc_001ECF70: ;
    eax = MEM32(ebx + 8);
    eax = MEM32(eax + ebp * 8);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x001ECF87u); RECOMP_ABI_CALL(0x001EC900u, sub_001EC900); /* call 0x001EC900 */

loc_001ECF87: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ED01E; /* jne: not equal / not zero */

loc_001ECF93: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001ECFB4; /* jle: less or equal (signed <=) */

loc_001ECF9D: ;
    eax = MEM32(edi + 8);

loc_001ECFA0: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001ECFB4; /* jae: above or equal (unsigned >=) */

loc_001ECFA8: ;
    edx = (uint32_t)(int32_t)SMEM16(edi + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ECFA0; /* jl: less (signed <) */

loc_001ECFB4: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    edx = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001ECFDF; /* jge: greater or equal (signed >=) */

loc_001ECFBE: ;
    edi = edi;

loc_001ECFC0: ;
    eax = MEM32(edi + 8);
    ebx = MEM32(eax + edx * 8);
    eax = eax + edx * 8;
    MEM32(eax + 8) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(eax + 0xC) = ebx;
    eax = (uint32_t)(int32_t)SMEM16(edi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ECFC0; /* jl: less (signed <) */

loc_001ECFDB: ;
    ebx = MEM32(esp + 0x10);

loc_001ECFDF: ;
    edx = MEM32(ebx + 8);
    ebx = MEM32(edx + ebp * 8);
    eax = MEM32(edi + 8);
    MEM32(eax + ecx * 8) = ebx;
    edx = MEM32(edx + ebp * 8 + 4);
    ebx = MEM32(esp + 0x10);
    MEM32(eax + ecx * 8 + 4) = edx;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + ebp * 8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001ED005u); RECOMP_ABI_CALL(0x001EC000u, sub_001EC000); /* call 0x001EC000 */

loc_001ED005: ;
    edx = MEM32(ebx + 8);
    eax = MEM32(edx + ebp * 8 + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001ED014u); RECOMP_ABI_CALL(0x001EC000u, sub_001EC000); /* call 0x001EC000 */

loc_001ED014: ;
    MEM16(edi + 4) = MEM16(edi + 4) + 1;
    _fa = (uint32_t)(MEM16(edi + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x3410) = MEM32(esi + 0x3410) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x3410)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001ED01E: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ECF70; /* jl: less (signed <) */

loc_001ED02B: ;
    ebx = MEM32(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_001ECF60; /* jne: not equal / not zero */

loc_001ED039: ;
    ebp = MEM32(esp + 0x20);

loc_001ED03D: ;
    MEM32(edi + 8) = 0;
    MEM32(esi + 0x340C) = MEM32(esi + 0x340C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x340C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001ED04A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ebp + 0x30));
    edx = edx >> 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ED145; /* je: equal / zero */

loc_001ED05C: ;
    eax = MEM32(ebp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ED065u); RECOMP_ABI_CALL(0x001EC3D0u, sub_001EC3D0); /* call 0x001EC3D0 */

loc_001ED065: ;
    ebp = eax;
    eax = MEM32(esi + 0x3404);
    ecx = eax + eax * 2;
    edx = esi + ecx * 4 + 0x4C54;
    eax = ebp;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    ecx = MEM32(esi);
    edx = MEM32(esi + 0x3404);
    MEM32(esi + ecx * 4 + 0x4854) = edx;
    eax = MEM32(esi + 0x3404);
    ecx = MEM32(esi + 0x3408);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + eax * 4 + 0x5854) = ecx;
    _fa = (uint32_t)(MEM16(ebp)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp), LO16(ebx) (16-bit) */
    MEM32(esp + 0x24) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_001ED129; /* jle: less or equal (signed <=) */

loc_001ED0BA: ;
    /* nop */

loc_001ED0C0: ;
    edx = MEM32(ebp + 4);
    edi = MEM32(edx + ebx * 8);
    eax = MEM32(edx + ebx * 8 + 4);
    ecx = MEM32(0x4434D4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x001ED0DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ED0D7u); } /* indirect call */
    }

loc_001ED0DA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ED120; /* je: equal / zero */

loc_001ED0DE: ;
    eax = MEM32(esi + 0x3408);
    ecx = MEM32(esp + 0x18);
    MEM32(esi + eax * 8 + 0x5C54) = edi;
    MEM32(esi + eax * 8 + 0x5C58) = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001ED0FEu); RECOMP_ABI_CALL(0x001EC000u, sub_001EC000); /* call 0x001EC000 */

loc_001ED0FE: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001ED10Au); RECOMP_ABI_CALL(0x001EC000u, sub_001EC000); /* call 0x001EC000 */

loc_001ED10A: ;
    ecx = MEM32(esi + 0x3408);
    eax = MEM32(esp + 0x24);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x3408) = ecx;
    MEM32(esp + 0x24) = eax;

loc_001ED120: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ED0C0; /* jl: less (signed <) */

loc_001ED129: ;
    eax = MEM32(esi + 0x3404);
    SET_LO16(edx, MEM16(esp + 0x24));
    ecx = eax + eax * 2;
    MEM16(esi + ecx * 4 + 0x4C54) = LO16(edx);
    MEM32(esi + 0x3404) = MEM32(esi + 0x3404) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x3404)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001ED145: ;
    eax = MEM32(esi);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ED160
 * Original: 0x001ED160 - 0x001ED25C (252 bytes, 57 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED160: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0x4D0068);
    MEM32(0x30EE5C) = ebx;
    MEM32(0x30EE60) = ebx;
    MEM32(0x30EE64) = ebx;
    MEM32(0x30EE68) = ebx;
    MEM8(0x4434C8) = LO8(ebx);
    MEM32(0x30EE6C) = ebx;
    MEM32(0x30EE70) = ebx;
    MEM32(0x30EE74) = ebx;
    MEM32(0x30EE78) = ebx;
    PUSH32(esp, 0x001ED1A9u); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_001ED1A9: ;
    PUSH32(esp, 0x4000);
    PUSH32(esp, 0x624070);
    MEM32(0x4CC060) = ebx;
    PUSH32(esp, 0x001ED1BEu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_001ED1BE: ;
    PUSH32(esp, 0x800);
    PUSH32(esp, 0x63FD70);
    MEM32(0x614068) = ebx;
    PUSH32(esp, 0x001ED1D3u); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_001ED1D3: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x63DD68) = ebx;
    MEM32(0x4434C4) = ebx;
    esi = 0x544068;

loc_001ED1E7: ;
    ecx = esi;
    PUSH32(esp, 0x001ED1EEu); RECOMP_ABI_CALL(0x001ECE00u, sub_001ECE00); /* call 0x001ECE00 */

loc_001ED1EE: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x34;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x614068) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x614068 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ED1E7; /* jl: less (signed <) */

loc_001ED1F9: ;
    POP32(esp, esi);
    ecx = 0x4916E0;
    POP32(esp, ebx);

loc_001ED200: ;
    PUSH32(esp, 0x001ED205u); RECOMP_ABI_CALL(0x001EA770u, sub_001EA770); /* call 0x001EA770 */

loc_001ED205: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4CC060) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x4CC060 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ED200; /* jl: less (signed <) */

loc_001ED210: ;
    ecx = 0x514068;

loc_001ED215: ;
    PUSH32(esp, 0x001ED21Au); RECOMP_ABI_CALL(0x001EA780u, sub_001EA780); /* call 0x001EA780 */

loc_001ED21A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x544068) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x544068 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ED215; /* jl: less (signed <) */

loc_001ED225: ;
    PUSH32(esp, 0x42800000);
    PUSH32(esp, 0x42800000);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x001ED239u); RECOMP_ABI_CALL(0x001EC850u, sub_001EC850); /* call 0x001EC850 */

loc_001ED239: ;
    ecx = eax;
    PUSH32(esp, 0x001ED240u); RECOMP_ABI_CALL(0x00224310u, sub_00224310); /* call 0x00224310 */

loc_001ED240: ;
    PUSH32(esp, 0x43A00000);
    PUSH32(esp, 0x42F00000);
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0x001ED254u); RECOMP_ABI_CALL(0x001EC880u, sub_001EC880); /* call 0x001EC880 */

loc_001ED254: ;
    ecx = eax;
    PUSH32(esp, 0x001ED25Bu); RECOMP_ABI_CALL(0x00224310u, sub_00224310); /* call 0x00224310 */

loc_001ED25B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001ED260
 * Original: 0x001ED260 - 0x001ED297 (55 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED260: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001ED266u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ED263u); } /* indirect call */
    }

loc_001ED266: ;
    PUSH32(esp, 0x001ED26Bu); RECOMP_ABI_CALL(0x001EC850u, sub_001EC850); /* call 0x001EC850 */

loc_001ED26B: ;
    ecx = eax;
    PUSH32(esp, 0x001ED272u); RECOMP_ABI_CALL(0x00224380u, sub_00224380); /* call 0x00224380 */

loc_001ED272: ;
    PUSH32(esp, 0x001ED277u); RECOMP_ABI_CALL(0x001EC880u, sub_001EC880); /* call 0x001EC880 */

loc_001ED277: ;
    ecx = eax;
    PUSH32(esp, 0x001ED27Eu); RECOMP_ABI_CALL(0x00224380u, sub_00224380); /* call 0x00224380 */

loc_001ED27E: ;
    esi = 0x544068;

loc_001ED283: ;
    ecx = esi;
    PUSH32(esp, 0x001ED28Au); RECOMP_ABI_CALL(0x001ECE00u, sub_001ECE00); /* call 0x001ECE00 */

loc_001ED28A: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x34;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x614068) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x614068 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ED283; /* jl: less (signed <) */

loc_001ED295: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001ED2A0
 * Original: 0x001ED2A0 - 0x001ED30C (108 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ED2A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED2A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x488) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x488;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001ED304; /* jl: less (signed <) */

loc_001ED2BE: ;
    edi = edi;

loc_001ED2C0: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED2CCu); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_001ED2CC: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E676572) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0x6E676572 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ED2F9; /* jne: not equal / not zero */

loc_001ED2D6: ;
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED2DFu); RECOMP_ABI_CALL(0x001EC9F0u, sub_001EC9F0); /* call 0x001EC9F0 */

loc_001ED2DF: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED2EDu); RECOMP_ABI_CALL(0x001EB470u, sub_001EB470); /* call 0x001EB470 */

loc_001ED2ED: ;
    eax = MEM32(edi);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001ED2F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ED2F6u); } /* indirect call */
    }

loc_001ED2F9: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001ED2C0; /* jge: greater or equal (signed >=) */

loc_001ED304: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ED310
 * Original: 0x001ED310 - 0x001ED33E (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED310: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    MEM8(esp + 7) = 0;
    PUSH32(esp, 0x001ED320u); RECOMP_ABI_CALL(0x001EC3A0u, sub_001EC3A0); /* call 0x001EC3A0 */

loc_001ED320: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ED33A; /* je: equal / zero */

loc_001ED327: ;
    edx = MEM32(esp + 0xC);
    ecx = esp + 3;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x001ED338u); RECOMP_ABI_CALL(0x001EC920u, sub_001EC920); /* call 0x001EC920 */

loc_001ED338: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001ED33A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001ED340
 * Original: 0x001ED340 - 0x001ED36E (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED340: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    MEM8(esp + 7) = 0;
    PUSH32(esp, 0x001ED350u); RECOMP_ABI_CALL(0x001EC3A0u, sub_001EC3A0); /* call 0x001EC3A0 */

loc_001ED350: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ED36A; /* je: equal / zero */

loc_001ED357: ;
    edx = MEM32(esp + 0xC);
    ecx = esp + 3;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x001ED368u); RECOMP_ABI_CALL(0x001EC900u, sub_001EC900); /* call 0x001EC900 */

loc_001ED368: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001ED36A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001ED370
 * Original: 0x001ED370 - 0x001ED387 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED370(void)
{

loc_001ED370: ;
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8D39BDE6u);
    PUSH32(esp, 0x001ED386u); RECOMP_ABI_CALL(0x001EC900u, sub_001EC900); /* call 0x001EC900 */

loc_001ED386: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001ED390
 * Original: 0x001ED390 - 0x001ED403 (115 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED390: ;
    edx = MEM32(0x30EE68);
    eax = 0x8000;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ED3B4; /* jl: less (signed <) */

loc_001ED3A6: ;
    ecx = MEM32(0x30EE64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x4000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ED3D8; /* jne: not equal / not zero */

loc_001ED3B4: ;
    PUSH32(esp, 0x001ED3B9u); RECOMP_ABI_CALL(0x001EC440u, sub_001EC440); /* call 0x001EC440 */

loc_001ED3B9: ;
    edx = MEM32(0x30EE68);
    ecx = 0x8000;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ED3FF; /* jl: less (signed <) */

loc_001ED3CA: ;
    ecx = MEM32(0x30EE64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x4000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ED3FF; /* je: equal / zero */

loc_001ED3D8: ;
    edx = MEM32(esp + 0xC);
    eax = ecx + ecx * 2;
    MEM8(eax * 4 + 0x51406A) = MEM8(eax * 4 + 0x51406A) | 8;
    _fa = (uint32_t)(MEM8(eax * 4 + 0x51406A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = eax * 4 + 0x514068;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 8) = edx;
    MEM32(0x30EE64) = ecx;
    MEM32(0x4434CC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001ED3FF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001ED410
 * Original: 0x001ED410 - 0x001ED422 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED410(void)
{

loc_001ED410: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ED41Au); RECOMP_ABI_CALL(0x001EC850u, sub_001EC850); /* call 0x001EC850 */

loc_001ED41A: ;
    ecx = eax;
    PUSH32(esp, 0x001ED421u); RECOMP_ABI_CALL(0x00225070u, sub_00225070); /* call 0x00225070 */

loc_001ED421: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001ED430
 * Original: 0x001ED430 - 0x001ED494 (100 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED430: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    ecx = esi;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001ED44Du); RECOMP_ABI_CALL(0x0018DDE0u, sub_0018DDE0); /* call 0x0018DDE0 */

loc_001ED44D: ;
    ecx = eax;
    PUSH32(esp, 0x001ED454u); RECOMP_ABI_CALL(0x000B5E50u, sub_000B5E50); /* call 0x000B5E50 */

loc_001ED454: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = esp + 4;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2FC678); /* subss */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001ED488u); RECOMP_ABI_CALL(0x001EC850u, sub_001EC850); /* call 0x001EC850 */

loc_001ED488: ;
    ecx = eax;
    PUSH32(esp, 0x001ED48Fu); RECOMP_ABI_CALL(0x00225120u, sub_00225120); /* call 0x00225120 */

loc_001ED48F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001ED4A0
 * Original: 0x001ED4A0 - 0x001ED4B2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED4A0(void)
{

loc_001ED4A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ED4AAu); RECOMP_ABI_CALL(0x001EC880u, sub_001EC880); /* call 0x001EC880 */

loc_001ED4AA: ;
    ecx = eax;
    PUSH32(esp, 0x001ED4B1u); RECOMP_ABI_CALL(0x00225070u, sub_00225070); /* call 0x00225070 */

loc_001ED4B1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001ED4C0
 * Original: 0x001ED4C0 - 0x001ED524 (100 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED4C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED4C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    ecx = esi;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001ED4DDu); RECOMP_ABI_CALL(0x0018DDE0u, sub_0018DDE0); /* call 0x0018DDE0 */

loc_001ED4DD: ;
    ecx = eax;
    PUSH32(esp, 0x001ED4E4u); RECOMP_ABI_CALL(0x000B5E50u, sub_000B5E50); /* call 0x000B5E50 */

loc_001ED4E4: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = esp + 4;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2FC664); /* subss */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001ED518u); RECOMP_ABI_CALL(0x001EC880u, sub_001EC880); /* call 0x001EC880 */

loc_001ED518: ;
    ecx = eax;
    PUSH32(esp, 0x001ED51Fu); RECOMP_ABI_CALL(0x00225120u, sub_00225120); /* call 0x00225120 */

loc_001ED51F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001ED530
 * Original: 0x001ED530 - 0x001ED607 (215 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED530: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    SET_LO16(eax, MEM16(esi + 0x30));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ED602; /* je: equal / zero */

loc_001ED54A: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ED5AB; /* je: equal / zero */

loc_001ED54F: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2FC664); /* subss */
    ecx = esi;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001ED56Cu); RECOMP_ABI_CALL(0x0018DDE0u, sub_0018DDE0); /* call 0x0018DDE0 */

loc_001ED56C: ;
    ecx = eax;
    PUSH32(esp, 0x001ED573u); RECOMP_ABI_CALL(0x000B5E50u, sub_000B5E50); /* call 0x000B5E50 */

loc_001ED573: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = esp + 4;
    PUSH32(esp, eax);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001ED59Fu); RECOMP_ABI_CALL(0x001EC880u, sub_001EC880); /* call 0x001EC880 */

loc_001ED59F: ;
    ecx = eax;
    PUSH32(esp, 0x001ED5A6u); RECOMP_ABI_CALL(0x00225120u, sub_00225120); /* call 0x00225120 */

loc_001ED5A6: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001ED5AB: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2FC678); /* subss */
    ecx = esi;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001ED5C8u); RECOMP_ABI_CALL(0x0018DDE0u, sub_0018DDE0); /* call 0x0018DDE0 */

loc_001ED5C8: ;
    ecx = eax;
    PUSH32(esp, 0x001ED5CFu); RECOMP_ABI_CALL(0x000B5E50u, sub_000B5E50); /* call 0x000B5E50 */

loc_001ED5CF: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = esp + 4;
    PUSH32(esp, edx);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001ED5FBu); RECOMP_ABI_CALL(0x001EC850u, sub_001EC850); /* call 0x001EC850 */

loc_001ED5FB: ;
    ecx = eax;
    PUSH32(esp, 0x001ED602u); RECOMP_ABI_CALL(0x00225120u, sub_00225120); /* call 0x00225120 */

loc_001ED602: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001ED610
 * Original: 0x001ED610 - 0x001ED6DD (205 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED610: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    SET_LO16(eax, MEM16(esi + 0x30));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ED6D8; /* je: equal / zero */

loc_001ED62A: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ED686; /* je: equal / zero */

loc_001ED62F: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ecx = MEM32(esp + 0x18);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2FC664); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001ED64Eu); RECOMP_ABI_CALL(0x000B5E50u, sub_000B5E50); /* call 0x000B5E50 */

loc_001ED64E: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = esp + 4;
    PUSH32(esp, eax);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001ED67Au); RECOMP_ABI_CALL(0x001EC880u, sub_001EC880); /* call 0x001EC880 */

loc_001ED67A: ;
    ecx = eax;
    PUSH32(esp, 0x001ED681u); RECOMP_ABI_CALL(0x002251F0u, sub_002251F0); /* call 0x002251F0 */

loc_001ED681: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001ED686: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2FC678); /* subss */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001ED6A5u); RECOMP_ABI_CALL(0x000B5E50u, sub_000B5E50); /* call 0x000B5E50 */

loc_001ED6A5: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = esp + 4;
    PUSH32(esp, edx);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001ED6D1u); RECOMP_ABI_CALL(0x001EC850u, sub_001EC850); /* call 0x001EC850 */

loc_001ED6D1: ;
    ecx = eax;
    PUSH32(esp, 0x001ED6D8u); RECOMP_ABI_CALL(0x002251F0u, sub_002251F0); /* call 0x002251F0 */

loc_001ED6D8: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001ED6E0
 * Original: 0x001ED6E0 - 0x001ED7D1 (241 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED6E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = 0x634070;
    PUSH32(esp, edi);
    MEM32(0x4434D0) = ecx;
    PUSH32(esp, 0x001ED6F3u); RECOMP_ABI_CALL(0x001EAC00u, sub_001EAC00); /* call 0x001EAC00 */

loc_001ED6F3: ;
    ecx = MEM32(0x4434D0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001ED700u); RECOMP_ABI_CALL(0x001ECE50u, sub_001ECE50); /* call 0x001ECE50 */

loc_001ED700: ;
    esi = 0x544098;

loc_001ED705: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ED7AC; /* je: equal / zero */

loc_001ED70E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi));
    ecx = eax;
    ecx = ecx >> 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ED72B; /* jne: not equal / not zero */

loc_001ED71D: ;
    edx = eax;
    edx = edx >> 9;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ED7AC; /* je: equal / zero */

loc_001ED72B: ;
    eax = eax >> 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = esi + -48;
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = edi;
    MEM8(esp + 8) = LO8(eax);
    PUSH32(esp, 0x001ED73Eu); RECOMP_ABI_CALL(0x001EAA90u, sub_001EAA90); /* call 0x001EAA90 */

loc_001ED73E: ;
    SET_LO16(eax, MEM16(esi));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ED794; /* jne: not equal / not zero */

loc_001ED74B: ;
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) >> 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ED794; /* jne: not equal / not zero */

loc_001ED755: ;
    ecx = MEM32(esi + -12);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001ED75Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ED75Au); } /* indirect call */
    }

loc_001ED75D: ;
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x001ED766u); RECOMP_ABI_CALL(0x001EA9E0u, sub_001EA9E0); /* call 0x001EA9E0 */

loc_001ED766: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(0x4434D0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001ED777u); RECOMP_ABI_CALL(0x001ECED0u, sub_001ECED0); /* call 0x001ECED0 */

loc_001ED777: ;
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x001ED780u); RECOMP_ABI_CALL(0x001EA9F0u, sub_001EA9F0); /* call 0x001EA9F0 */

loc_001ED780: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi));
    edx = edx >> 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ED7AC; /* je: equal / zero */

loc_001ED78D: ;
    PUSH32(esp, 0x001ED792u); RECOMP_ABI_CALL(0x001ECC60u, sub_001ECC60); /* call 0x001ECC60 */

loc_001ED792: ;
    goto loc_001ED7AC;

loc_001ED794: ;
    SET_LO8(eax, LO8(eax) >> 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ED7AC; /* jne: not equal / not zero */

loc_001ED79B: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x4434D0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001ED7ACu); RECOMP_ABI_CALL(0x001ECED0u, sub_001ECED0); /* call 0x001ECED0 */

loc_001ED7AC: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x34;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x614098) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x614098 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ED705; /* jl: less (signed <) */

loc_001ED7BB: ;
    ecx = MEM32(0x4434D0);
    PUSH32(esp, 0x001ED7C6u); RECOMP_ABI_CALL(0x001EAC80u, sub_001EAC80); /* call 0x001EAC80 */

loc_001ED7C6: ;
    POP32(esp, edi);
    MEM8(0x4434C0) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001ED7E0
 * Original: 0x001ED7E0 - 0x001ED813 (51 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED7E0: ;
    eax = MEM32(0x4434D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ED7F3; /* jne: not equal / not zero */

loc_001ED7E9: ;
    PUSH32(esp, 0x001ED7EEu); RECOMP_ABI_CALL(0x001EC5C0u, sub_001EC5C0); /* call 0x001EC5C0 */

loc_001ED7EE: ;
    PUSH32(esp, 0x001ED7F3u); RECOMP_ABI_CALL(0x001ED6E0u, sub_001ED6E0); /* call 0x001ED6E0 */

loc_001ED7F3: ;
    PUSH32(esp, esi);
    esi = MEM32(0x4434D0);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = 0x2717;
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
    MEM32(0x4434D0) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001ED820
 * Original: 0x001ED820 - 0x001ED840 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED820: ;
    SET_LO8(eax, MEM8(0x4434C0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x4434DC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001ED835; /* je: equal / zero */

loc_001ED830: ;
    PUSH32(esp, 0x001ED835u); RECOMP_ABI_CALL(0x001ED6E0u, sub_001ED6E0); /* call 0x001ED6E0 */

loc_001ED835: ;
    ecx = MEM32(0x4434D4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_001ED840
 * Original: 0x001ED840 - 0x001ED95C (284 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED840: ;
    eax = MEM32(0x4434C4);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001ED8AC; /* jne: not equal / not zero */

loc_001ED84D: ;
    PUSH32(esp, 0x2FC7A4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8008);
    PUSH32(esp, 0x001ED85Eu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_001ED85E: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ED88A; /* je: equal / zero */

loc_001ED867: ;
    eax = esi + 0x4008;
    PUSH32(esp, 0x1000);
    MEM32(esi) = 0;
    PUSH32(esp, eax);
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x001ED885u); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_001ED885: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001ED88C;

loc_001ED88A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001ED88C: ;
    ecx = esi + 0x4008;
    PUSH32(esp, 0x1000);
    PUSH32(esp, ecx);
    MEM32(0x4434C4) = esi;
    PUSH32(esp, 0x001ED8A3u); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_001ED8A3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_001ED8AC: ;
    esi = MEM32(esp + 0x24);
    ecx = esi;
    PUSH32(esp, 0x001ED8B7u); RECOMP_ABI_CALL(0x002094F0u, sub_002094F0); /* call 0x002094F0 */

loc_001ED8B7: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ED8F3; /* jl: less (signed <) */

loc_001ED8C2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001ED8CEu); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_001ED8CE: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x646C7277) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x646C7277 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ED8E8; /* jne: not equal / not zero */

loc_001ED8D8: ;
    ecx = MEM32(0x4434D4);
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x001ED8E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001ED8E5u); } /* indirect call */
    }

loc_001ED8E8: ;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001ED8C2; /* jge: greater or equal (signed >=) */

loc_001ED8F3: ;
    ecx = esi;
    PUSH32(esp, 0x001ED8FAu); RECOMP_ABI_CALL(0x002094F0u, sub_002094F0); /* call 0x002094F0 */

loc_001ED8FA: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ED936; /* jl: less (signed <) */

loc_001ED905: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001ED911u); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_001ED911: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x736E6772) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x736E6772 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ED92B; /* jne: not equal / not zero */

loc_001ED91B: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4434D4);
    PUSH32(esp, 0x001ED92Bu); RECOMP_ABI_CALL(0x001ED2A0u, sub_001ED2A0); /* call 0x001ED2A0 */

loc_001ED92B: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001ED905; /* jge: greater or equal (signed >=) */

loc_001ED936: ;
    SET_LO8(eax, MEM8(0x4434DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001ED958; /* je: equal / zero */

loc_001ED940: ;
    eax = MEM32(0x4434C4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ED94Bu); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_001ED94B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4434C4) = 0;

loc_001ED958: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001ED960
 * Original: 0x001ED960 - 0x001ED997 (55 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED960: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ebp = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001ED991; /* jle: less or equal (signed <=) */

loc_001ED96F: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);

loc_001ED974: ;
    eax = MEM32(edi + esi * 8 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ED98B; /* je: equal / zero */

loc_001ED97C: ;
    eax = MEM32(edi + esi * 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x001ED98Bu); RECOMP_ABI_CALL(0x001EC8B0u, sub_001EC8B0); /* call 0x001EC8B0 */

loc_001ED98B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ED974; /* jl: less (signed <) */

loc_001ED990: ;
    POP32(esp, edi);

loc_001ED991: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ED9A0
 * Original: 0x001ED9A0 - 0x001EDD96 (1014 bytes, 312 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ED9A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED9A0: ;
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
    PUSH32(esp, edi);
    PUSH32(esp, 0x2FC7C4);
    esi = ecx;
    PUSH32(esp, 2);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x1000);
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x30) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED9C9u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_001ED9C9: ;
    edi = MEM32(ebp + 8);
    edx = MEM32(edi + 0x14);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(esp + 0x28) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_001EDB39; /* jl: less (signed <) */

loc_001ED9E8: ;
    esi = MEM32(ebp + 0xC);
    goto loc_001ED9F0;

    /* nop */

loc_001ED9F0: ;
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED9FCu); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_001ED9FC: ;
    eax = MEM32(esp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D524658) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4D524658 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EDBAB; /* je: equal / zero */

loc_001EDA0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4F464E49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4F464E49 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EDB85; /* je: equal / zero */

loc_001EDA16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x504F5250) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x504F5250 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EDB26; /* jne: not equal / not zero */

loc_001EDA21: ;
    ecx = MEM32(esp + 0x7C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x24;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EDA37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EDA34u); } /* indirect call */
    }

loc_001EDA37: ;
    ecx = MEM32(esp + 0x7C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EDA4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EDA48u); } /* indirect call */
    }

loc_001EDA4B: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EDA55u); RECOMP_ABI_CALL(0x001EC3A0u, sub_001EC3A0); /* call 0x001EC3A0 */

loc_001EDA55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EDD7E; /* jne: not equal / not zero */

loc_001EDA60: ;
    edx = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EDA70u); RECOMP_ABI_CALL(0x001EB110u, sub_001EB110); /* call 0x001EB110 */

loc_001EDA70: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EDA83; /* je: equal / zero */

loc_001EDA76: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EDA81u); RECOMP_ABI_CALL(0x001EC9A0u, sub_001EC9A0); /* call 0x001EC9A0 */

loc_001EDA81: ;
    ebx = eax;

loc_001EDA83: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5127F14D);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x38) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EDAA6u); RECOMP_ABI_CALL(0x001EC8B0u, sub_001EC8B0); /* call 0x001EC8B0 */

loc_001EDAA6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x8D39BDE6u);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EDAB9u); RECOMP_ABI_CALL(0x001EC8B0u, sub_001EC8B0); /* call 0x001EC8B0 */

loc_001EDAB9: ;
    ecx = MEM32(esp + 0x24);
    ebx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EDB23; /* jge: greater or equal (signed >=) */

loc_001EDACB: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x30) = ecx;

loc_001EDAD1: ;
    ecx = MEM32(esp + 0x7C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x30;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EDAE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EDAE4u); } /* indirect call */
    }

loc_001EDAE7: ;
    ecx = MEM32(esp + 0x7C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EDAFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EDAF8u); } /* indirect call */
    }

loc_001EDAFB: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50403026) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50403026 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EDB1D; /* je: equal / zero */

loc_001EDB06: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EDB1Bu); RECOMP_ABI_CALL(0x001EC8B0u, sub_001EC8B0); /* call 0x001EC8B0 */

loc_001EDB1B: ;
    ebx = eax;

loc_001EDB1D: ;
    MEM32(esp + 0x30) = MEM32(esp + 0x30) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EDAD1; /* jne: not equal / not zero */

loc_001EDB23: ;
    edi = MEM32(ebp + 8);

loc_001EDB26: ;
    ecx = MEM32(edi + 0xC);
    _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001ED9F0; /* jge: greater or equal (signed >=) */

loc_001EDB35: ;
    esi = MEM32(esp + 0x1C);

loc_001EDB39: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EDB46u); RECOMP_ABI_CALL(0x001ED960u, sub_001ED960); /* call 0x001ED960 */

loc_001EDB46: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EDB50u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_001EDB50: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    eax = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EDB5Eu); RECOMP_ABI_CALL(0x001EC6E0u, sub_001EC6E0); /* call 0x001EC6E0 */

loc_001EDB5E: ;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EDB7A; /* je: equal / zero */

loc_001EDB69: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EDB6Fu); RECOMP_ABI_CALL(0x001EC3A0u, sub_001EC3A0); /* call 0x001EC3A0 */

loc_001EDB6F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EDD8B; /* jne: not equal / not zero */

loc_001EDB7A: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_001EDB85: ;
    ecx = MEM32(esp + 0x7C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    MEM32(esp + 0x38) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001EDB9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EDB9Au); } /* indirect call */
    }

loc_001EDB9D: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x30);
    MEM32(esp + 0x24) = eax;
    goto loc_001EDB26;

loc_001EDBAB: ;
    ecx = MEM32(esp + 0x7C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EDBC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EDBC1u); } /* indirect call */
    }

loc_001EDBC4: ;
    ecx = MEM32(esp + 0x7C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EDBDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EDBDAu); } /* indirect call */
    }

loc_001EDBDD: ;
    ecx = MEM32(esp + 0x7C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EDBF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EDBF3u); } /* indirect call */
    }

loc_001EDBF6: ;
    ecx = MEM32(esp + 0x7C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EDC0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EDC0Cu); } /* indirect call */
    }

loc_001EDC0F: ;
    ecx = MEM32(esp + 0x7C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EDC28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EDC25u); } /* indirect call */
    }

loc_001EDC28: ;
    ecx = MEM32(esp + 0x7C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EDC41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EDC3Eu); } /* indirect call */
    }

loc_001EDC41: ;
    ecx = MEM32(esp + 0x7C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EDC5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EDC57u); } /* indirect call */
    }

loc_001EDC5A: ;
    ecx = MEM32(esp + 0x7C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EDC73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EDC70u); } /* indirect call */
    }

loc_001EDC73: ;
    ecx = MEM32(esp + 0x7C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EDC8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EDC89u); } /* indirect call */
    }

loc_001EDC8C: ;
    ecx = MEM32(esp + 0x7C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EDCA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EDCA2u); } /* indirect call */
    }

loc_001EDCA5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 0x7C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EDCBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EDCBBu); } /* indirect call */
    }

loc_001EDCBE: ;
    ecx = MEM32(esp + 0x7C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EDCD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EDCD4u); } /* indirect call */
    }

loc_001EDCD7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esi + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEMF(esi + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esi + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    goto loc_001EDB26;

loc_001EDD7E: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EDD88u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_001EDD88: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001EDD8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EDDA0
 * Original: 0x001EDDA0 - 0x001EDE85 (229 bytes, 91 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDDA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDDA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2FC7E0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x1000);
    edi = ecx;
    PUSH32(esp, 0x001EDDBAu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_001EDDBA: ;
    esi = MEM32(esp + 0x28);
    ebx = (uint32_t)(int32_t)SMEM16(esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    ebp = eax;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x10) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_001EDDF3; /* jle: less or equal (signed <=) */

loc_001EDDD4: ;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001EDDDCu); RECOMP_ABI_CALL(0x001EA760u, sub_001EA760); /* call 0x001EA760 */

loc_001EDDDC: ;
    ecx = eax;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5127F14D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5127F14D (32-bit) */
    ecx = MEM32(ecx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_001EDDEE; /* jne: not equal / not zero */

loc_001EDDEA: ;
    MEM32(esp + 0x10) = ecx;

loc_001EDDEE: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EDDD4; /* jl: less (signed <) */

loc_001EDDF3: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x001EDDFFu); RECOMP_ABI_CALL(0x001EB110u, sub_001EB110); /* call 0x001EB110 */

loc_001EDDFF: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EDE0F; /* je: equal / zero */

loc_001EDE05: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001EDE0Du); RECOMP_ABI_CALL(0x001EC9A0u, sub_001EC9A0); /* call 0x001EC9A0 */

loc_001EDE0D: ;
    goto loc_001EDE13;

loc_001EDE0F: ;
    eax = MEM32(esp + 0x14);

loc_001EDE13: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5127F14D);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x001EDE23u); RECOMP_ABI_CALL(0x001EB220u, sub_001EB220); /* call 0x001EB220 */

loc_001EDE23: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), LO16(ebx) (16-bit) */
    edx = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001EDE5B; /* jle: less or equal (signed <=) */

loc_001EDE2C: ;
    /* nop */

loc_001EDE30: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001EDE38u); RECOMP_ABI_CALL(0x001EA760u, sub_001EA760); /* call 0x001EA760 */

loc_001EDE38: ;
    ecx = eax;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5127F14D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5127F14D (32-bit) */
    ecx = MEM32(ecx + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_001EDE53; /* je: equal / zero */

loc_001EDE46: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x001EDE51u); RECOMP_ABI_CALL(0x001EC8B0u, sub_001EC8B0); /* call 0x001EC8B0 */

loc_001EDE51: ;
    edx = eax;

loc_001EDE53: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EDE30; /* jl: less (signed <) */

loc_001EDE5B: ;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x001EDE64u); RECOMP_ABI_CALL(0x001ED960u, sub_001ED960); /* call 0x001ED960 */

loc_001EDE64: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001EDE6Au); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_001EDE6A: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 4);
    edx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EDE78u); RECOMP_ABI_CALL(0x001EC6E0u, sub_001EC6E0); /* call 0x001EC6E0 */

loc_001EDE78: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_001EDE90
 * Original: 0x001EDE90 - 0x001EDEBC (44 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDE90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EDE90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = edi + 8;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 0x001EDEA4u); RECOMP_ABI_CALL(0x00205EE0u, sub_00205EE0); /* call 0x00205EE0 */

loc_001EDEA4: ;
    ecx = MEM32(edi + 4);
    MEM32(esi + 4) = ecx;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001EDEB5u); RECOMP_ABI_CALL(0x001ECC90u, sub_001ECC90); /* call 0x001ECC90 */

loc_001EDEB5: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EDEC0
 * Original: 0x001EDEC0 - 0x001EDF00 (64 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDEC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EDEC0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001EDED4u); RECOMP_ABI_CALL(0x002061D0u, sub_002061D0); /* call 0x002061D0 */

loc_001EDED4: ;
    eax = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x001EDEE2u); RECOMP_ABI_CALL(0x00205E70u, sub_00205E70); /* call 0x00205E70 */

loc_001EDEE2: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001EDEEAu); RECOMP_ABI_CALL(0x00205EE0u, sub_00205EE0); /* call 0x00205EE0 */

loc_001EDEEA: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EDEF5u); RECOMP_ABI_CALL(0x001ED610u, sub_001ED610); /* call 0x001ED610 */

loc_001EDEF5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EDF00
 * Original: 0x001EDF00 - 0x001EDF36 (54 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDF00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EDF00: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001EDF14u); RECOMP_ABI_CALL(0x002061D0u, sub_002061D0); /* call 0x002061D0 */

loc_001EDF14: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001EDF20u); RECOMP_ABI_CALL(0x00205EE0u, sub_00205EE0); /* call 0x00205EE0 */

loc_001EDF20: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EDF2Bu); RECOMP_ABI_CALL(0x001ED610u, sub_001ED610); /* call 0x001ED610 */

loc_001EDF2B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EDF40
 * Original: 0x001EDF40 - 0x001EE0DE (414 bytes, 145 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDF40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDF40: ;
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esp + 0x18;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x001EDF59u); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_001EDF59: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0x30));
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EDF9E; /* jne: not equal / not zero */

loc_001EDF66: ;
    ebp = MEM32(esp + 0x820);
    SET_LO16(eax, MEM16(ebp));
    ecx = MEM32(edi + 0x28);
    edx = SX16(LO16(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EDF7Eu); RECOMP_ABI_CALL(0x001ED390u, sub_001ED390); /* call 0x001ED390 */

loc_001EDF7E: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EE0D1; /* je: equal / zero */

loc_001EDF8B: ;
    PUSH32(esp, 0x1000);
    ecx = edi;
    PUSH32(esp, 0x001EDF97u); RECOMP_ABI_CALL(0x001EA9E0u, sub_001EA9E0); /* call 0x001EA9E0 */

loc_001EDF97: ;
    MEM8(esp + 0x13) = 1;
    goto loc_001EDFFF;

loc_001EDF9E: ;
    eax = MEM32(edi + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EDFA7u); RECOMP_ABI_CALL(0x001EC3D0u, sub_001EC3D0); /* call 0x001EC3D0 */

loc_001EDFA7: ;
    ebp = MEM32(esp + 0x824);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ebp)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp), LO16(ebx) (16-bit) */
    esi = eax;
    MEM8(esp + 0x13) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_001EDFF3; /* jle: less or equal (signed <=) */

loc_001EDFC0: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x001EDFC8u); RECOMP_ABI_CALL(0x001EA760u, sub_001EA760); /* call 0x001EA760 */

loc_001EDFC8: ;
    edi = eax;
    eax = MEM32(edi + 4);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001EDFD8u); RECOMP_ABI_CALL(0x001EB2F0u, sub_001EB2F0); /* call 0x001EB2F0 */

loc_001EDFD8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EDFE6; /* jne: not equal / not zero */

loc_001EDFDC: ;
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x001EDFE6u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_001EDFE6: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EDFC0; /* jl: less (signed <) */

loc_001EDFEF: ;
    edi = MEM32(esp + 0x14);

loc_001EDFF3: ;
    _fa = (uint32_t)(MEM16(esp + 0x18)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x18), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EE0CA; /* jle: less or equal (signed <=) */

loc_001EDFFF: ;
    ecx = esi;
    PUSH32(esp, 0x001EE006u); RECOMP_ABI_CALL(0x001EA7A0u, sub_001EA7A0); /* call 0x001EA7A0 */

loc_001EE006: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EE05E; /* jne: not equal / not zero */

loc_001EE00A: ;
    edx = MEM32(edi + 0x28);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 8) = edx;
    SET_LO16(esi, MEM16(esi));
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    eax = MEM32(edi + 0x28);
    edx = SX16(LO16(esi));
    PUSH32(esp, eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001EE028u); RECOMP_ABI_CALL(0x001ED390u, sub_001ED390); /* call 0x001ED390 */

loc_001EE028: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EE0D1; /* je: equal / zero */

loc_001EE035: ;
    eax = MEM32(edi + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EE03Fu); RECOMP_ABI_CALL(0x001EC3D0u, sub_001EC3D0); /* call 0x001EC3D0 */

loc_001EE03F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x001EE04Bu); RECOMP_ABI_CALL(0x001EA7A0u, sub_001EA7A0); /* call 0x001EA7A0 */

loc_001EE04B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001EE051u); RECOMP_ABI_CALL(0x001EB2B0u, sub_001EB2B0); /* call 0x001EB2B0 */

loc_001EE051: ;
    ecx = MEM32(edi + 0x28);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001EE05Bu); RECOMP_ABI_CALL(0x001EC420u, sub_001EC420); /* call 0x001EC420 */

loc_001EE05B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001EE05E: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EE094; /* jne: not equal / not zero */

loc_001EE066: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esp + 0x18)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x18), LO16(ebx) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EE0C3; /* jle: less or equal (signed <=) */

loc_001EE06F: ;
    /* nop */

loc_001EE070: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x001EE07Au); RECOMP_ABI_CALL(0x001EA760u, sub_001EA760); /* call 0x001EA760 */

loc_001EE07A: ;
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EE088u); RECOMP_ABI_CALL(0x001EA800u, sub_001EA800); /* call 0x001EA800 */

loc_001EE088: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EE070; /* jl: less (signed <) */

loc_001EE092: ;
    goto loc_001EE0C3;

loc_001EE094: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebp)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp), LO16(edi) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EE0BF; /* jle: less or equal (signed <=) */

loc_001EE09C: ;
    /* nop */

loc_001EE0A0: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x001EE0A8u); RECOMP_ABI_CALL(0x001EA760u, sub_001EA760); /* call 0x001EA760 */

loc_001EE0A8: ;
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EE0B6u); RECOMP_ABI_CALL(0x001EA800u, sub_001EA800); /* call 0x001EA800 */

loc_001EE0B6: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EE0A0; /* jl: less (signed <) */

loc_001EE0BF: ;
    edi = MEM32(esp + 0x14);

loc_001EE0C3: ;
    ecx = esi;
    PUSH32(esp, 0x001EE0CAu); RECOMP_ABI_CALL(0x001EA7E0u, sub_001EA7E0); /* call 0x001EA7E0 */

loc_001EE0CA: ;
    ecx = edi;
    PUSH32(esp, 0x001EE0D1u); RECOMP_ABI_CALL(0x001EBD60u, sub_001EBD60); /* call 0x001EBD60 */

loc_001EE0D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EE0E0
 * Original: 0x001EE0E0 - 0x001EE163 (131 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE0E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x30));
    SET_LO8(eax, LO8(eax) >> 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EE161; /* jne: not equal / not zero */

loc_001EE0ED: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001EE107; /* jne: not equal / not zero */

loc_001EE0F8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8D39BDE6u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EE104u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EE101u); } /* indirect call */
    }

loc_001EE104: ;
    PUSH32(esp, eax);
    goto loc_001EE10B;

loc_001EE107: ;
    edx = MEM32(eax + 4);
    PUSH32(esp, edx);

loc_001EE10B: ;
    PUSH32(esp, 0x001EE110u); RECOMP_ABI_CALL(0x001EC180u, sub_001EC180); /* call 0x001EC180 */

loc_001EE110: ;
    MEM8(esi + 0x30) = MEM8(esi + 0x30) | 4;
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(eax, MEM8(esi + 0x31));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE12C; /* je: equal / zero */

loc_001EE11E: ;
    ecx = MEM32(0x4434D4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001EE12Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EE129u); } /* indirect call */
    }

loc_001EE12C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EE132u); RECOMP_ABI_CALL(0x001ED530u, sub_001ED530); /* call 0x001ED530 */

loc_001EE132: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0x30));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE14F; /* je: equal / zero */

loc_001EE143: ;
    edx = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EE14Cu); RECOMP_ABI_CALL(0x001EC420u, sub_001EC420); /* call 0x001EC420 */

loc_001EE14C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001EE14F: ;
    PUSH32(esp, 0x1000);
    ecx = esi;
    PUSH32(esp, 0x001EE15Bu); RECOMP_ABI_CALL(0x001EA9F0u, sub_001EA9F0); /* call 0x001EA9F0 */

loc_001EE15B: ;
    MEM32(0x30EE78) = MEM32(0x30EE78) + 1;
    _fa = (uint32_t)(MEM32(0x30EE78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001EE161: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EE170
 * Original: 0x001EE170 - 0x001EE219 (169 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE170: ;
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EE1C6; /* jne: not equal / not zero */

loc_001EE180: ;
    PUSH32(esp, 0x001EE185u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_001EE185: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8D39BDE6u);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EE191u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EE18Eu); } /* indirect call */
    }

loc_001EE191: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EE1C6; /* je: equal / zero */

loc_001EE195: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x001EE19Eu); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_001EE19E: ;
    PUSH32(esp, 0x2E0465);
    PUSH32(esp, 0x2E0460);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001EE1B1u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_001EE1B1: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x001EE1BFu); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_001EE1BF: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    goto loc_001EE203;

loc_001EE1C6: ;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EE211; /* je: equal / zero */

loc_001EE1CD: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x001EE1D6u); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_001EE1D6: ;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EE1DEu); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_001EE1DE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x2E0460);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001EE1F0u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_001EE1F0: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x001EE1FEu); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_001EE1FE: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);

loc_001EE203: ;
    ecx = esi;
    PUSH32(esp, 0x001EE20Au); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_001EE20A: ;
    ecx = eax;
    PUSH32(esp, 0x001EE211u); RECOMP_ABI_CALL(0x001EDF40u, sub_001EDF40); /* call 0x001EDF40 */

loc_001EE211: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001EE220
 * Original: 0x001EE220 - 0x001EE2C8 (168 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE220: ;
    eax = MEM32(0x30EE5C);
    PUSH32(esp, esi);
    esi = eax + eax * 2;
    esi = esi * 4 + 0x4916E0;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001EE238u); RECOMP_ABI_CALL(0x001EA770u, sub_001EA770); /* call 0x001EA770 */

loc_001EE238: ;
    eax = MEM32(0x30EE60);
    edx = MEM32(esp + 0xC);
    ecx = eax * 8 + 0x4434E0;
    MEM32(esi + 8) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001EE253u); RECOMP_ABI_CALL(0x001EDDA0u, sub_001EDDA0); /* call 0x001EDDA0 */

loc_001EE253: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8D39BDE6u);
    ecx = esi;
    PUSH32(esp, 0x001EE264u); RECOMP_ABI_CALL(0x001EC900u, sub_001EC900); /* call 0x001EC900 */

loc_001EE264: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EE2BB; /* je: equal / zero */

loc_001EE26A: ;
    PUSH32(esp, 0xFFF);
    PUSH32(esp, 0x4D0068);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001EE27Au); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_001EE27A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EE288; /* jge: greater or equal (signed >=) */

loc_001EE281: ;
    eax = 0x4CC064;
    goto loc_001EE28F;

loc_001EE288: ;
    eax = eax * 4 + 0x4CC068;

loc_001EE28F: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EE2BB; /* jne: not equal / not zero */

loc_001EE294: ;
    PUSH32(esp, 0xFFF);
    PUSH32(esp, 0x4D0068);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001EE2A4u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_001EE2A4: ;
    MEM32(eax * 4 + 0x4CC068) = esi;
    ecx = MEM32(0x4CC060);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x4CC060) = ecx;

loc_001EE2BB: ;
    MEM32(0x30EE5C) = MEM32(0x30EE5C) + 1;
    _fa = (uint32_t)(MEM32(0x30EE5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EE2D0
 * Original: 0x001EE2D0 - 0x001EE341 (113 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE2D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO16(eax, MEM16(esi + 0x30));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    ecx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_001EE32F; /* je: equal / zero */

loc_001EE2E0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE2F2; /* je: equal / zero */

loc_001EE2E4: ;
    PUSH32(esp, 0x001EE2E9u); RECOMP_ABI_CALL(0x001EE0E0u, sub_001EE0E0); /* call 0x001EE0E0 */

loc_001EE2E9: ;
    ecx = MEM32(esi + 0x24);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

loc_001EE2F2: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x001EE2F9u); RECOMP_ABI_CALL(0x001EA9E0u, sub_001EA9E0); /* call 0x001EA9E0 */

loc_001EE2F9: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001EE301u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EE2FEu); } /* indirect call */
    }

loc_001EE301: ;
    ecx = MEM32(esi + 0x24);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x001EE309u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EE306u); } /* indirect call */
    }

loc_001EE309: ;
    SET_LO8(ecx, MEM8(esi + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EE31D; /* jne: not equal / not zero */

loc_001EE314: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EE31Au); RECOMP_ABI_CALL(0x001ED4A0u, sub_001ED4A0); /* call 0x001ED4A0 */

loc_001EE31A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001EE31D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EE323u); RECOMP_ABI_CALL(0x001EADD0u, sub_001EADD0); /* call 0x001EADD0 */

loc_001EE323: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x24) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001EE32F: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x001EE336u); RECOMP_ABI_CALL(0x001EA9E0u, sub_001EA9E0); /* call 0x001EA9E0 */

loc_001EE336: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EE33Cu); RECOMP_ABI_CALL(0x001ED410u, sub_001ED410); /* call 0x001ED410 */

loc_001EE33C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EE350
 * Original: 0x001EE350 - 0x001EE36F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE350: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EE35Bu); RECOMP_ABI_CALL(0x001ED4C0u, sub_001ED4C0); /* call 0x001ED4C0 */

loc_001EE35B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EE361u); RECOMP_ABI_CALL(0x001EADB0u, sub_001EADB0); /* call 0x001EADB0 */

loc_001EE361: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x001EE36Du); RECOMP_ABI_CALL(0x001EA9F0u, sub_001EA9F0); /* call 0x001EA9F0 */

loc_001EE36D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EE370
 * Original: 0x001EE370 - 0x001EE3A0 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE370: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x100);
    ecx = esi;
    PUSH32(esp, 0x001EE381u); RECOMP_ABI_CALL(0x001EA9E0u, sub_001EA9E0); /* call 0x001EA9E0 */

loc_001EE381: ;
    ecx = MEM32(0x4434D4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001EE38Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EE38Cu); } /* indirect call */
    }

loc_001EE38F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EE395u); RECOMP_ABI_CALL(0x001ED430u, sub_001ED430); /* call 0x001ED430 */

loc_001EE395: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EE39Bu); RECOMP_ABI_CALL(0x001ED4A0u, sub_001ED4A0); /* call 0x001ED4A0 */

loc_001EE39B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EE3A0
 * Original: 0x001EE3A0 - 0x001EE3D0 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE3A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE3A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x100);
    ecx = esi;
    PUSH32(esp, 0x001EE3B1u); RECOMP_ABI_CALL(0x001EA9F0u, sub_001EA9F0); /* call 0x001EA9F0 */

loc_001EE3B1: ;
    ecx = MEM32(0x4434D4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001EE3BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EE3BCu); } /* indirect call */
    }

loc_001EE3BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EE3C5u); RECOMP_ABI_CALL(0x001ED4C0u, sub_001ED4C0); /* call 0x001ED4C0 */

loc_001EE3C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EE3CBu); RECOMP_ABI_CALL(0x001ED410u, sub_001ED410); /* call 0x001ED410 */

loc_001EE3CB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EE3D0
 * Original: 0x001EE3D0 - 0x001EE425 (85 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE3D0: ;
    eax = MEM32(0x30EE74);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EE423; /* jle: less or equal (signed <=) */

loc_001EE3DC: ;
    PUSH32(esp, esi);
    esi = 0x4414C0;

loc_001EE3E2: ;
    ecx = MEM32(esi);
    SET_LO8(eax, MEM8(ecx + 0x30));
    SET_LO8(eax, LO8(eax) >> 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE415; /* je: equal / zero */

loc_001EE3EE: ;
    edi = edi;

loc_001EE3F0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x30EE74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x30EE74) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EE415; /* jge: greater or equal (signed >=) */

loc_001EE3F8: ;
    PUSH32(esp, 0x001EE3FDu); RECOMP_ABI_CALL(0x001EE0E0u, sub_001EE0E0); /* call 0x001EE0E0 */

loc_001EE3FD: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001EE405u); RECOMP_ABI_CALL(0x001EADD0u, sub_001EADD0); /* call 0x001EADD0 */

loc_001EE405: ;
    ecx = MEM32(esi);
    SET_LO8(edx, MEM8(ecx + 0x30));
    SET_LO8(edx, LO8(edx) >> 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EE3F0; /* jne: not equal / not zero */

loc_001EE415: ;
    eax = MEM32(0x30EE74);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EE3E2; /* jl: less (signed <) */

loc_001EE422: ;
    POP32(esp, esi);

loc_001EE423: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EE430
 * Original: 0x001EE430 - 0x001EE493 (99 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE430: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EE43Bu); RECOMP_ABI_CALL(0x001EC1D0u, sub_001EC1D0); /* call 0x001EC1D0 */

loc_001EE43B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EE491; /* je: equal / zero */

loc_001EE444: ;
    SET_LO8(ecx, MEM8(esi + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EE491; /* jne: not equal / not zero */

loc_001EE44F: ;
    ecx = esi;
    PUSH32(esp, 0x001EE456u); RECOMP_ABI_CALL(0x001EAAB0u, sub_001EAAB0); /* call 0x001EAAB0 */

loc_001EE456: ;
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0x001EE460u); RECOMP_ABI_CALL(0x001EA9E0u, sub_001EA9E0); /* call 0x001EA9E0 */

loc_001EE460: ;
    SET_LO16(eax, MEM16(esi + 0x30));
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) >> 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE491; /* je: equal / zero */

loc_001EE46E: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EE47C; /* jne: not equal / not zero */

loc_001EE473: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EE479u); RECOMP_ABI_CALL(0x001EE370u, sub_001EE370); /* call 0x001EE370 */

loc_001EE479: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001EE47C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EE482u); RECOMP_ABI_CALL(0x001EE350u, sub_001EE350); /* call 0x001EE350 */

loc_001EE482: ;
    ecx = MEM32(0x4434D4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001EE491u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EE48Eu); } /* indirect call */
    }

loc_001EE491: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EE4A0
 * Original: 0x001EE4A0 - 0x001EE4FF (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE4A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x30EE6C) = edi;
    MEM32(0x30EE78) = edi;
    PUSH32(esp, 0x001EE4B5u); RECOMP_ABI_CALL(0x001EE3D0u, sub_001EE3D0); /* call 0x001EE3D0 */

loc_001EE4B5: ;
    ecx = 0x63DCD0;
    PUSH32(esp, 0x001EE4BFu); RECOMP_ABI_CALL(0x001EBB30u, sub_001EBB30); /* call 0x001EBB30 */

loc_001EE4BF: ;
    esi = 0x544098;

loc_001EE4C4: ;
    SET_LO8(eax, MEM8(esi));
    SET_LO8(eax, LO8(eax) >> 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE4E5; /* je: equal / zero */

loc_001EE4CD: ;
    _fa = (uint32_t)(MEM32(0x30EE70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x30EE70), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EE4DB; /* jle: less or equal (signed <=) */

loc_001EE4D5: ;
    MEM32(0x30EE70) = edi;

loc_001EE4DB: ;
    ecx = esi + -48;
    PUSH32(esp, 0x001EE4E3u); RECOMP_ABI_CALL(0x001ECE00u, sub_001ECE00); /* call 0x001ECE00 */

loc_001EE4E3: ;
    goto loc_001EE4F0;

loc_001EE4E5: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE4F0; /* je: equal / zero */

loc_001EE4EA: ;
    MEM32(0x30EE6C) = MEM32(0x30EE6C) + 1;
    _fa = (uint32_t)(MEM32(0x30EE6C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001EE4F0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x34;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x614098) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x614098 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EE4C4; /* jl: less (signed <) */

loc_001EE4FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EE500
 * Original: 0x001EE500 - 0x001EE519 (25 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE500: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EE511; /* je: equal / zero */

loc_001EE50A: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001EE511u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EE50Eu); } /* indirect call */
    }

loc_001EE511: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001EE0E0(); return; /* tail jmp 0x001EE0E0 */

}

/**
 * sub_001EE520
 * Original: 0x001EE520 - 0x001EE528 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE520(void)
{

loc_001EE520: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001EE526u); RECOMP_ABI_CALL(0x001EE2D0u, sub_001EE2D0); /* call 0x001EE2D0 */

loc_001EE526: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EE530
 * Original: 0x001EE530 - 0x001EE565 (53 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE530: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO16(eax, MEM16(esi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001EE560; /* je: equal / zero */

loc_001EE540: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE549; /* je: equal / zero */

loc_001EE544: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE560; /* je: equal / zero */

loc_001EE549: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EE54Fu); RECOMP_ABI_CALL(0x001EE370u, sub_001EE370); /* call 0x001EE370 */

loc_001EE54F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EE555u); RECOMP_ABI_CALL(0x001EE350u, sub_001EE350); /* call 0x001EE350 */

loc_001EE555: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001EE560u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EE55Du); } /* indirect call */
    }

loc_001EE560: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EE570
 * Original: 0x001EE570 - 0x001EE605 (149 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE570: ;
    eax = MEM32(0x30EE70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EE59B; /* jge: greater or equal (signed >=) */

loc_001EE57C: ;
    _fa = (uint32_t)(MEM32(0x30EE6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x30EE6C), 0x3400 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EE5AF; /* jle: less or equal (signed <=) */

loc_001EE588: ;
    ecx = MEM32(0x641F28);
    edx = ecx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x641F28) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001EE5AF; /* jge: greater or equal (signed >=) */

loc_001EE59B: ;
    MEM32(0x641F28) = 0x64;
    PUSH32(esp, 0x001EE5AAu); RECOMP_ABI_CALL(0x001EE4A0u, sub_001EE4A0); /* call 0x001EE4A0 */

loc_001EE5AA: ;
    eax = MEM32(0x30EE70);

loc_001EE5AF: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x544068) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x544068;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001EE5C3u); RECOMP_ABI_CALL(0x001EA9E0u, sub_001EA9E0); /* call 0x001EA9E0 */

loc_001EE5C3: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EE5CDu); RECOMP_ABI_CALL(0x001EBE30u, sub_001EBE30); /* call 0x001EBE30 */

loc_001EE5CD: ;
    ecx = MEM32(0x30EE70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x4000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EE5FB; /* jge: greater or equal (signed >=) */

loc_001EE5DB: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    _fb = (uint32_t)(0x544098) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x544098;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001EE5E5: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE5FB; /* je: equal / zero */

loc_001EE5EA: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x614098) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x614098 (32-bit) */
    MEM32(0x30EE70) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001EE5E5; /* jl: less (signed <) */

loc_001EE5FB: ;
    MEM32(0x30EE6C) = MEM32(0x30EE6C) + 1;
    _fa = (uint32_t)(MEM32(0x30EE6C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EE610
 * Original: 0x001EE610 - 0x001EE86E (606 bytes, 184 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE610: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0x001EE620u); RECOMP_ABI_CALL(0x001EE3D0u, sub_001EE3D0); /* call 0x001EE3D0 */

loc_001EE620: ;
    eax = MEM32(0x30EE74);
    ebp = MEM32(esp + 0x2C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EE66F; /* jle: less or equal (signed <=) */

loc_001EE62F: ;
    /* nop */

loc_001EE630: ;
    eax = MEM32(esi * 4 + 0x4414C0);
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 7);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EE665; /* jne: not equal / not zero */

loc_001EE642: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EE64Eu); RECOMP_ABI_CALL(0x001EC2A0u, sub_001EC2A0); /* call 0x001EC2A0 */

loc_001EE64E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EE665; /* jne: not equal / not zero */

loc_001EE655: ;
    eax = MEM32(esi * 4 + 0x4414C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EE662u); RECOMP_ABI_CALL(0x001EE2D0u, sub_001EE2D0); /* call 0x001EE2D0 */

loc_001EE662: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001EE665: ;
    eax = MEM32(0x30EE74);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EE630; /* jl: less (signed <) */

loc_001EE66F: ;
    PUSH32(esp, 0x2FC7FC);
    PUSH32(esp, 2);
    PUSH32(esp, 0x1600);
    PUSH32(esp, 0x001EE680u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_001EE680: ;
    esi = eax;
    eax = MEM32(0x4434D8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EE6DF; /* jne: not equal / not zero */

loc_001EE68E: ;
    eax = MEM32(esp + 0x28);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(0x641D70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(0x641D74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(0x641D78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    MEMF(0x641D7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    MEMF(0x641D80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    MEMF(0x641D84) = xmm0.f[0]; /* movss */

loc_001EE6DF: ;
    xmm0 = XMM_SCALAR(MEMF(0x641D70)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FC664)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x641D78)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001EE70Eu); RECOMP_ABI_CALL(0x001EC880u, sub_001EC880); /* call 0x001EC880 */

loc_001EE70E: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x580);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x001EE729u); RECOMP_ABI_CALL(0x002252D0u, sub_002252D0); /* call 0x002252D0 */

loc_001EE729: ;
    ebx = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EE77B; /* jle: less or equal (signed <=) */

loc_001EE731: ;
    eax = MEM32(esi + edi * 4);
    SET_LO8(edx, MEM8(eax + 0x30));
    SET_LO8(edx, LO8(edx) >> 7);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EE776; /* jne: not equal / not zero */

loc_001EE73F: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EE74Bu); RECOMP_ABI_CALL(0x001EC2A0u, sub_001EC2A0); /* call 0x001EC2A0 */

loc_001EE74B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EE776; /* jne: not equal / not zero */

loc_001EE752: ;
    eax = MEM32(esi + edi * 4);
    SET_LO8(edx, MEM8(eax + 0x30));
    SET_LO8(edx, LO8(edx) >> 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EE776; /* jne: not equal / not zero */

loc_001EE760: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EE766u); RECOMP_ABI_CALL(0x001EE350u, sub_001EE350); /* call 0x001EE350 */

loc_001EE766: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esi + edi * 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001EE776u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EE773u); } /* indirect call */
    }

loc_001EE776: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EE731; /* jl: less (signed <) */

loc_001EE77B: ;
    xmm0 = XMM_SCALAR(MEMF(0x641D70)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FC678)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x641D78)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001EE7AAu); RECOMP_ABI_CALL(0x001EC850u, sub_001EC850); /* call 0x001EC850 */

loc_001EE7AA: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x580);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x001EE7C5u); RECOMP_ABI_CALL(0x002252D0u, sub_002252D0); /* call 0x002252D0 */

loc_001EE7C5: ;
    ebx = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EE7F7; /* jle: less or equal (signed <=) */

loc_001EE7CD: ;
    /* nop */

loc_001EE7D0: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esi + edi * 4);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EE7DFu); RECOMP_ABI_CALL(0x001EC320u, sub_001EC320); /* call 0x001EC320 */

loc_001EE7DF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EE7F2; /* jne: not equal / not zero */

loc_001EE7E6: ;
    ecx = MEM32(esi + edi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001EE7EFu); RECOMP_ABI_CALL(0x001EE370u, sub_001EE370); /* call 0x001EE370 */

loc_001EE7EF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001EE7F2: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EE7D0; /* jl: less (signed <) */

loc_001EE7F7: ;
    PUSH32(esp, 0x001EE7FCu); RECOMP_ABI_CALL(0x001EC880u, sub_001EC880); /* call 0x001EC880 */

loc_001EE7FC: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x580);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x001EE815u); RECOMP_ABI_CALL(0x002253D0u, sub_002253D0); /* call 0x002253D0 */

loc_001EE815: ;
    ebx = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EE847; /* jle: less or equal (signed <=) */

loc_001EE81D: ;
    /* nop */

loc_001EE820: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esi + edi * 4);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001EE82Fu); RECOMP_ABI_CALL(0x001EC320u, sub_001EC320); /* call 0x001EC320 */

loc_001EE82F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EE842; /* jne: not equal / not zero */

loc_001EE836: ;
    edx = MEM32(esi + edi * 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EE83Fu); RECOMP_ABI_CALL(0x001EE3A0u, sub_001EE3A0); /* call 0x001EE3A0 */

loc_001EE83F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001EE842: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EE820; /* jl: less (signed <) */

loc_001EE847: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EE84Du); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_001EE84D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x63DCD0;
    PUSH32(esp, 0x001EE85Au); RECOMP_ABI_CALL(0x001EB9E0u, sub_001EB9E0); /* call 0x001EB9E0 */

loc_001EE85A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x4434D8) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EE870
 * Original: 0x001EE870 - 0x001EE8B6 (70 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE870: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EE876u); RECOMP_ABI_CALL(0x001EE3D0u, sub_001EE3D0); /* call 0x001EE3D0 */

loc_001EE876: ;
    eax = MEM32(0x30EE74);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EE8B4; /* jle: less or equal (signed <=) */

loc_001EE881: ;
    eax = MEM32(esi * 4 + 0x4414C0);
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 7);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EE8AA; /* jne: not equal / not zero */

loc_001EE893: ;
    SET_LO16(ecx, MEM16(eax + 0x30));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE8AA; /* je: equal / zero */

loc_001EE89C: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EE8AA; /* jne: not equal / not zero */

loc_001EE8A1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EE8A7u); RECOMP_ABI_CALL(0x001EE2D0u, sub_001EE2D0); /* call 0x001EE2D0 */

loc_001EE8A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001EE8AA: ;
    eax = MEM32(0x30EE74);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EE881; /* jl: less (signed <) */

loc_001EE8B4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EE8C0
 * Original: 0x001EE8C0 - 0x001EE904 (68 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE8C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EE8C6u); RECOMP_ABI_CALL(0x001EE3D0u, sub_001EE3D0); /* call 0x001EE3D0 */

loc_001EE8C6: ;
    eax = MEM32(0x30EE74);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EE902; /* jle: less or equal (signed <=) */

loc_001EE8D1: ;
    eax = MEM32(esi * 4 + 0x4414C0);
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EE8F8; /* je: equal / zero */

loc_001EE8DF: ;
    SET_LO8(eax, MEM8(eax + 0x30));
    SET_LO8(eax, LO8(eax) >> 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EE8F8; /* jne: not equal / not zero */

loc_001EE8E9: ;
    ecx = MEM32(esi * 4 + 0x4414C0);
    ecx = MEM32(ecx + 0x24);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EE8F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EE8F5u); } /* indirect call */
    }

loc_001EE8F8: ;
    eax = MEM32(0x30EE74);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EE8D1; /* jl: less (signed <) */

loc_001EE902: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EE910
 * Original: 0x001EE910 - 0x001EEB7A (618 bytes, 194 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EE910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE910: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x1020;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EE920u); RECOMP_ABI_CALL(0x00237830u, sub_00237830); /* call 0x00237830 */

loc_001EE920: ;
    ecx = MEM32(0x4434D0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EE931u); RECOMP_ABI_CALL(0x001ECE50u, sub_001ECE50); /* call 0x001ECE50 */

loc_001EE931: ;
    ecx = MEM32(0x4434D0);
    eax = MEM32(ecx);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_001EEB63; /* jle: less or equal (signed <=) */

loc_001EE947: ;
    PUSH32(esp, ebp);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EE94Du); RECOMP_ABI_CALL(0x001EACB0u, sub_001EACB0); /* call 0x001EACB0 */

loc_001EE94D: ;
    ebx = eax;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EE956u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_001EE956: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EE95Cu); RECOMP_ABI_CALL(0x001EC1D0u, sub_001EC1D0); /* call 0x001EC1D0 */

loc_001EE95C: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EE9E2; /* je: equal / zero */

loc_001EE965: ;
    SET_LO16(eax, MEM16(ebx + 0x2C));
    edx = MEM32(edi);
    MEM16(edi + 0x2C) = LO16(eax);
    eax = ebx + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001EE978u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EE975u); } /* indirect call */
    }

loc_001EE978: ;
    SET_LO8(ecx, MEM8(ebx + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 7);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE98A; /* je: equal / zero */

loc_001EE983: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EE98Au); RECOMP_ABI_CALL(0x001EAA60u, sub_001EAA60); /* call 0x001EAA60 */

loc_001EE98A: ;
    ecx = MEM32(0x4434D0);
    PUSH32(esp, ebp);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EE996u); RECOMP_ABI_CALL(0x001EACC0u, sub_001EACC0); /* call 0x001EACC0 */

loc_001EE996: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EEB4E; /* je: equal / zero */

loc_001EE9A0: ;
    ecx = esp + 0x828;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EE9ACu); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_001EE9AC: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), LO16(ebx) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EE9CE; /* jle: less or equal (signed <=) */

loc_001EE9B3: ;
    edx = MEM32(esi + 4);
    eax = edx + ebx * 8;
    PUSH32(esp, eax);
    ecx = esp + 0x82C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EE9C6u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_001EE9C6: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EE9B3; /* jl: less (signed <) */

loc_001EE9CE: ;
    edx = esp + 0x828;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EE9DDu); RECOMP_ABI_CALL(0x001EDF40u, sub_001EDF40); /* call 0x001EDF40 */

loc_001EE9DD: ;
    goto loc_001EEB4E;

loc_001EE9E2: ;
    ecx = MEM32(0x4434D0);
    PUSH32(esp, ebp);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EE9EEu); RECOMP_ABI_CALL(0x001EAD00u, sub_001EAD00); /* call 0x001EAD00 */

loc_001EE9EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EEB4E; /* je: equal / zero */

loc_001EE9F6: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EE9FFu); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_001EE9FF: ;
    ecx = MEM32(0x4434D0);
    PUSH32(esp, ebp);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEA0Bu); RECOMP_ABI_CALL(0x001EAD00u, sub_001EAD00); /* call 0x001EAD00 */

loc_001EEA0B: ;
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 4), LO16(esi) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EEA2E; /* jle: less or equal (signed <=) */

loc_001EEA15: ;
    eax = MEM32(edi + 8);
    ecx = eax + esi * 8;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEA25u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_001EEA25: ;
    edx = (uint32_t)(int32_t)SMEM16(edi + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EEA15; /* jl: less (signed <) */

loc_001EEA2E: ;
    ecx = MEM32(0x4434D4);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEA3Eu); RECOMP_ABI_CALL(0x001EE220u, sub_001EE220); /* call 0x001EE220 */

loc_001EEA3E: ;
    PUSH32(esp, 1);
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEA47u); RECOMP_ABI_CALL(0x001EE570u, sub_001EE570); /* call 0x001EE570 */

loc_001EEA47: ;
    esi = eax;
    ecx = MEM32(esi + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = 0x614068;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEA5Au); RECOMP_ABI_CALL(0x001EAEB0u, sub_001EAEB0); /* call 0x001EAEB0 */

loc_001EEA5A: ;
    eax = MEM32(ebx + 0x28);
    PUSH32(esp, 0x3FFF);
    PUSH32(esp, 0x624070);
    PUSH32(esp, eax);
    MEM32(esi + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEA70u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_001EEA70: ;
    MEM32(eax * 4 + 0x614070) = esi;
    edx = MEM32(0x614068);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x614068) = edx;
    MEM32(esi + 4) = edi;
    ecx = MEM32(0x4434D0);
    PUSH32(esp, ebp);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEA96u); RECOMP_ABI_CALL(0x001EACC0u, sub_001EACC0); /* call 0x001EACC0 */

loc_001EEA96: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EEAF5; /* je: equal / zero */

loc_001EEA9C: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esp + 0x20) = 0;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), LO16(ebp) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EEAE5; /* jle: less or equal (signed <=) */

loc_001EEAAA: ;
    /* nop */

loc_001EEAB0: ;
    edx = MEM32(edi + 4);
    ecx = MEM32(edx + ebp * 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D39BDE6u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8D39BDE6u (32-bit) */
    eax = edx + ebp * 8;
    if (CMP_NE(_fa, _fb)) goto loc_001EEAD3; /* jne: not equal / not zero */

loc_001EEAC1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8D39BDE6u);
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEAD1u); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_001EEAD1: ;
    eax = ecx;

loc_001EEAD3: ;
    ecx = esp + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEADDu); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_001EEADD: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EEAB0; /* jl: less (signed <) */

loc_001EEAE5: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEAF1u); RECOMP_ABI_CALL(0x001EDF40u, sub_001EDF40); /* call 0x001EDF40 */

loc_001EEAF1: ;
    ebp = MEM32(esp + 0x14);

loc_001EEAF5: ;
    SET_LO8(eax, MEM8(ebx + 0x30));
    SET_LO8(eax, LO8(eax) >> 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EEB06; /* je: equal / zero */

loc_001EEAFF: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEB06u); RECOMP_ABI_CALL(0x001EAA60u, sub_001EAA60); /* call 0x001EAA60 */

loc_001EEB06: ;
    edx = MEM32(esi);
    eax = ebx + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001EEB11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EEB0Eu); } /* indirect call */
    }

loc_001EEB11: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEB18u); RECOMP_ABI_CALL(0x001EBD60u, sub_001EBD60); /* call 0x001EBD60 */

loc_001EEB18: ;
    SET_LO16(ecx, MEM16(ebx + 0x2C));
    PUSH32(esp, esi);
    MEM16(esi + 0x2C) = LO16(ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEB26u); RECOMP_ABI_CALL(0x001EE2D0u, sub_001EE2D0); /* call 0x001EE2D0 */

loc_001EEB26: ;
    ecx = MEM32(0x4434D4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x001EEB35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EEB32u); } /* indirect call */
    }

loc_001EEB35: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EEB45; /* je: equal / zero */

loc_001EEB39: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = 0x63DCD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEB45u); RECOMP_ABI_CALL(0x001EBA40u, sub_001EBA40); /* call 0x001EBA40 */

loc_001EEB45: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEB4Bu); RECOMP_ABI_CALL(0x001EC100u, sub_001EC100); /* call 0x001EC100 */

loc_001EEB4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001EEB4E: ;
    ecx = MEM32(0x4434D0);
    eax = MEM32(ecx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_001EE947; /* jl: less (signed <) */

loc_001EEB63: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEB68u); RECOMP_ABI_CALL(0x001EAC80u, sub_001EAC80); /* call 0x001EAC80 */

loc_001EEB68: ;
    POP32(esp, edi);
    MEM32(0x4434D0) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001EEB80
 * Original: 0x001EEB80 - 0x001EEBB2 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EEB80: ;
    eax = MEM32(0x4434D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EEB8E; /* je: equal / zero */

loc_001EEB89: ;
    PUSH32(esp, 0x001EEB8Eu); RECOMP_ABI_CALL(0x001EE910u, sub_001EE910); /* call 0x001EE910 */

loc_001EEB8E: ;
    eax = MEM32(0x4434C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EEBAA; /* je: equal / zero */

loc_001EEB97: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EEB9Du); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_001EEB9D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4434C4) = 0;

loc_001EEBAA: ;
    MEM8(0x4434DC) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001EEBC0
 * Original: 0x001EEBC0 - 0x001EEF4C (908 bytes, 255 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EEBC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EEBC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xBA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xBA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001EEE97; /* jl: less (signed <) */

loc_001EEBE3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EEBE5: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEBF1u); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_001EEBF1: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x454D414E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x454D414E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EEF1C; /* je: equal / zero */

loc_001EEC00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4C424154) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4C424154 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EEEA0; /* je: equal / zero */

loc_001EEC0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74736E69) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x74736E69 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EEE88; /* jne: not equal / not zero */

loc_001EEC16: ;
    eax = MEM32(0x30EE5C);
    edx = eax + eax * 2;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx + 0x4916E0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEC2Cu); RECOMP_ABI_CALL(0x001EA770u, sub_001EA770); /* call 0x001EA770 */

loc_001EEC2C: ;
    eax = MEM32(0x30EE60);
    eax = eax * 8 + 0x4434E0;
    MEM32(edx + 0x4916E8) = eax;
    edx = esp + 0x80;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEC50u); RECOMP_ABI_CALL(0x001ED9A0u, sub_001ED9A0); /* call 0x001ED9A0 */

loc_001EEC50: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EEE88; /* je: equal / zero */

loc_001EEC58: ;
    eax = MEM32(0x30EE5C);
    ecx = esp + 0xF;
    PUSH32(esp, ecx);
    ecx = eax + eax * 2;
    PUSH32(esp, 0x8D39BDE6u);
    ecx = ecx * 4 + 0x4916E0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEC76u); RECOMP_ABI_CALL(0x001EC900u, sub_001EC900); /* call 0x001EC900 */

loc_001EEC76: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EECC8; /* je: equal / zero */

loc_001EEC7C: ;
    PUSH32(esp, 0xFFF);
    PUSH32(esp, 0x4D0068);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEC8Cu); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_001EEC8C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EEC9A; /* jge: greater or equal (signed >=) */

loc_001EEC93: ;
    eax = 0x4CC064;
    goto loc_001EECA1;

loc_001EEC9A: ;
    eax = eax * 4 + 0x4CC068;

loc_001EECA1: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EECC8; /* jne: not equal / not zero */

loc_001EECA5: ;
    eax = MEM32(0x30EE5C);
    ecx = esp + 0x14;
    edx = eax + eax * 2;
    PUSH32(esp, ecx);
    eax = edx * 4 + 0x4916E0;
    PUSH32(esp, esi);
    ecx = 0x4CC060;
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EECC8u); RECOMP_ABI_CALL(0x001EAE80u, sub_001EAE80); /* call 0x001EAE80 */

loc_001EECC8: ;
    PUSH32(esp, 0x40490FDB);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EECD7u); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_001EECD7: ;
    eax = esp + 0xF;
    PUSH32(esp, eax);
    eax = MEM32(0x30EE5C);
    ecx = eax + eax * 2;
    PUSH32(esp, 0xF69311EAu);
    ecx = ecx * 4 + 0x4916E0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EECF5u); RECOMP_ABI_CALL(0x001EC900u, sub_001EC900); /* call 0x001EC900 */

loc_001EECF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB069958) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB069958 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EED8F; /* jne: not equal / not zero */

loc_001EED00: ;
    ecx = esp + 0x388;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EED0Cu); RECOMP_ABI_CALL(0x001EBB70u, sub_001EBB70); /* call 0x001EBB70 */

loc_001EED0C: ;
    ecx = esp + 0x3AC;
    MEM32(esp + 0x388) = 0x2E596C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EED23u); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_001EED23: ;
    eax = MEM32(0x30EE5C);
    ecx = eax + eax * 2;
    edx = ecx * 4 + 0x4916E0;
    eax = esp + 0x80;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    MEM32(esp + 0x390) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x148;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EED53u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_001EED53: ;
    eax = esp + 0x140;
    PUSH32(esp, eax);
    ecx = esp + 0x184;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EED67u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_001EED67: ;
    ecx = esp + 0x180;
    PUSH32(esp, ecx);
    ecx = esp + 0x38C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EED7Bu); RECOMP_ABI_CALL(0x001EA970u, sub_001EA970); /* call 0x001EA970 */

loc_001EED7B: ;
    edx = MEM32(edi);
    eax = esp + 0x388;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001EED8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EED87u); } /* indirect call */
    }

loc_001EED8A: ;
    goto loc_001EEE7F;

loc_001EED8F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EED96u); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_001EED96: ;
    ecx = MEM32(0x2DC380);
    edx = MEM32(0x2DC384);
    MEM32(esp + 0x20) = ecx;
    SET_LO16(ecx, MEM16(0x2DC388));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x1C) = edx;
    MEM16(esp + 0x20) = LO16(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001EEDE4; /* je: equal / zero */

loc_001EEDBD: ;
    ecx = esp + 0x18;
    esi = ecx + 1;

loc_001EEDC4: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EEDC4; /* jne: not equal / not zero */

loc_001EEDCB: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEDD9u); RECOMP_ABI_CALL(0x002379A0u, sub_002379A0); /* call 0x002379A0 */

loc_001EEDD9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EEE7F; /* je: equal / zero */

loc_001EEDE4: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEDEBu); RECOMP_ABI_CALL(0x001EE570u, sub_001EE570); /* call 0x001EE570 */

loc_001EEDEB: ;
    esi = eax;
    eax = MEM32(0x30EE5C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    ecx = eax * 4 + 0x4916E0;
    edx = esp + 0x80;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    MEM32(esi + 4) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xC8;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEE1Cu); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_001EEE1C: ;
    edx = esp + 0xC0;
    PUSH32(esp, edx);
    ecx = esp + 0x104;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEE30u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_001EEE30: ;
    eax = MEM32(esi);
    ecx = esp + 0x100;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001EEE3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EEE3Cu); } /* indirect call */
    }

loc_001EEE3E: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEE45u); RECOMP_ABI_CALL(0x001EBD60u, sub_001EBD60); /* call 0x001EBD60 */

loc_001EEE45: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEE4Bu); RECOMP_ABI_CALL(0x001EE2D0u, sub_001EE2D0); /* call 0x001EE2D0 */

loc_001EEE4B: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x001EEE56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EEE53u); } /* indirect call */
    }

loc_001EEE56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EEE66; /* je: equal / zero */

loc_001EEE5A: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = 0x63DCD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEE66u); RECOMP_ABI_CALL(0x001EBA40u, sub_001EBA40); /* call 0x001EBA40 */

loc_001EEE66: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEE6Cu); RECOMP_ABI_CALL(0x001EC100u, sub_001EC100); /* call 0x001EC100 */

loc_001EEE6C: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x001EEE77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EEE74u); } /* indirect call */
    }

loc_001EEE77: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEE7Fu); RECOMP_ABI_CALL(0x001EE530u, sub_001EE530); /* call 0x001EE530 */

loc_001EEE7F: ;
    MEM32(0x30EE5C) = MEM32(0x30EE5C) + 1;
    _fa = (uint32_t)(MEM32(0x30EE5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001EEE85: ;
    esi = MEM32(ebp + 8);

loc_001EEE88: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EEBE5; /* jge: greater or equal (signed >=) */

loc_001EEE97: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001EEEA0: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EEEB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EEEB1u); } /* indirect call */
    }

loc_001EEEB4: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EEE85; /* jle: less or equal (signed <=) */

loc_001EEEBC: ;
    /* nop */

loc_001EEEC0: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EEED4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EEED1u); } /* indirect call */
    }

loc_001EEED4: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EEEE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EEEE5u); } /* indirect call */
    }

loc_001EEEE8: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x1C4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EEEFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EEEFCu); } /* indirect call */
    }

loc_001EEEFF: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    edx = esp + 0x1C4;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEF11u); RECOMP_ABI_CALL(0x00204D10u, sub_00204D10); /* call 0x00204D10 */

loc_001EEF11: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EEEC0; /* jne: not equal / not zero */

loc_001EEF17: ;
    goto loc_001EEE85;

loc_001EEF1C: ;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, 0x100);
    eax = esp + 0x28C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEF32u); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_001EEF32: ;
    ecx = esp + 0x288;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001EEF3Fu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_001EEF3F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x641D8C) = eax;
    goto loc_001EEE88;

}

/**
 * sub_001EEF50
 * Original: 0x001EEF50 - 0x001EEF76 (38 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EEF50: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EEF65; /* je: equal / zero */

loc_001EEF58: ;
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = eax;
    esp += 12; return; /* ret 8 */

loc_001EEF65: ;
    MEM32(ecx + 0x10) = 0x200;
    MEM32(ecx + 0x14) = 0x641F30;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EEF80
 * Original: 0x001EEF80 - 0x001EEF9C (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEF80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EEF80: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0x200;
    MEM32(eax + 0x14) = 0x641F30;
    MEM32(eax + 0x418) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001EEFA0
 * Original: 0x001EEFA0 - 0x001EEFAC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEFA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EEFA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x418) = eax;
    MEM32(ecx + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001EEFB0
 * Original: 0x001EEFB0 - 0x001EF016 (102 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EEFB0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EEFC9; /* jne: not equal / not zero */

loc_001EEFBB: ;
    MEM32(ecx) = eax;
    MEM8(ecx + 0x420) = LO8(eax);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001EEFC9: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM8(ecx + 0x420) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_001EEFFC; /* jle: less or equal (signed <=) */

loc_001EEFD7: ;
    edx = MEM32(ecx + 0x14);
    esi = MEM32(esp + 0x14);
    edi = edi;

loc_001EEFE0: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EEFF1; /* jne: not equal / not zero */

loc_001EEFE6: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EEFF1; /* jne: not equal / not zero */

loc_001EEFEA: ;
    ebx = esi;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF004; /* je: equal / zero */

loc_001EEFF1: ;
    ebx = MEM32(ecx + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EEFE0; /* jl: less (signed <) */

loc_001EEFFC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001EF004: ;
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    MEM32(ecx) = eax;
    MEM8(ecx + 0x420) = 0;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EF020
 * Original: 0x001EF020 - 0x001EF0A4 (132 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF020: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_001EF043; /* jge: greater or equal (signed >=) */

loc_001EF02F: ;
    /* nop */

loc_001EF030: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(edx + ecx + 0x18)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + ecx + 0x18), 0x20 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001EF043; /* jg: greater (signed >) */

loc_001EF03A: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EF030; /* jl: less (signed <) */

loc_001EF043: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EF0A0; /* jge: greater or equal (signed >=) */

loc_001EF04A: ;
    eax = edx + ecx + 0x18;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x22) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x22 (8-bit) */
    MEM32(ecx + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_001EF077; /* jne: not equal / not zero */

loc_001EF057: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EF0A0; /* jge: greater or equal (signed >=) */

loc_001EF05C: ;
    PUSH32(esp, ebp);
    /* nop */

loc_001EF060: ;
    _fa = (uint32_t)(MEM8(edx + ecx + 0x18)) & 0xFFu; _fb = (uint32_t)(0x22) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + ecx + 0x18), 0x22 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF074; /* je: equal / zero */

loc_001EF067: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    ebp = MEM32(ecx + 8);
    edi = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EF060; /* jl: less (signed <) */

loc_001EF074: ;
    POP32(esp, ebp);
    goto loc_001EF094;

loc_001EF077: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EF0A0; /* jge: greater or equal (signed >=) */

loc_001EF07B: ;
    goto loc_001EF080;

    /* nop */

loc_001EF080: ;
    _fa = (uint32_t)(MEM8(edx + ecx + 0x18)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + ecx + 0x18), 0x20 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EF094; /* jle: less or equal (signed <=) */

loc_001EF087: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    ebx = MEM32(ecx + 8);
    edi = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EF080; /* jl: less (signed <) */

loc_001EF094: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EF0A0; /* jge: greater or equal (signed >=) */

loc_001EF098: ;
    MEM8(edx + ecx + 0x18) = 0;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001EF0A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EF0B0
 * Original: 0x001EF0B0 - 0x001EF0C6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF0B0: ;
    PUSH32(esp, 0x001EF0B5u); RECOMP_ABI_CALL(0x001EF020u, sub_001EF020); /* call 0x001EF020 */

loc_001EF0B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EF0C5; /* jne: not equal / not zero */

loc_001EF0B9: ;
    MEM8(ecx + 0x420) = 1;
    eax = 0x2E0465;

loc_001EF0C5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EF0D0
 * Original: 0x001EF0D0 - 0x001EF0F1 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001EF0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF0D0: ;
    PUSH32(esp, 0x001EF0D5u); RECOMP_ABI_CALL(0x001EF020u, sub_001EF020); /* call 0x001EF020 */

loc_001EF0D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF0E7; /* je: equal / zero */

loc_001EF0D9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EF0E3u); RECOMP_ABI_CALL(0x00237B86u, sub_00237B86); /* call 0x00237B86 */

loc_001EF0E3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001EF0E7: ;
    MEM8(ecx + 0x420) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001EF100
 * Original: 0x001EF100 - 0x001EF121 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF100(void)
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

loc_001EF100: ;
    PUSH32(esp, 0x001EF105u); RECOMP_ABI_CALL(0x001EF020u, sub_001EF020); /* call 0x001EF020 */

loc_001EF105: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF113; /* je: equal / zero */

loc_001EF109: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EF10Fu); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_001EF10F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001EF113: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    MEM8(ecx + 0x420) = 1;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001EF130
 * Original: 0x001EF130 - 0x001EF20B (219 bytes, 85 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF130: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001EF139u); RECOMP_ABI_CALL(0x001EF020u, sub_001EF020); /* call 0x001EF020 */

loc_001EF139: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001EF1FF; /* je: equal / zero */

loc_001EF147: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, edi);

loc_001EF156: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF16C; /* je: equal / zero */

loc_001EF15C: ;
    /* nop */

loc_001EF160: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001EF179; /* jg: greater (signed >) */

loc_001EF164: ;
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EF160; /* jne: not equal / not zero */

loc_001EF16C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001EF179: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF16C; /* je: equal / zero */

loc_001EF17F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_001EF1C3; /* jle: less or equal (signed <=) */

loc_001EF18B: ;
    edi = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001EF190: ;
    SET_LO8(eax, MEM8(ebx + edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EF1C3; /* jle: less or equal (signed <=) */

loc_001EF197: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EF1A0u); RECOMP_ABI_CALL(0x00239646u, sub_00239646); /* call 0x00239646 */

loc_001EF1A0: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi);
    PUSH32(esp, ecx);
    ebp = eax;
    PUSH32(esp, 0x001EF1ABu); RECOMP_ABI_CALL(0x00239646u, sub_00239646); /* call 0x00239646 */

loc_001EF1AB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EF1C3; /* jne: not equal / not zero */

loc_001EF1B2: ;
    edx = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(edi + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    MEM32(esp + 0x1C) = edx;
    if (CMP_G(_fas, _fbs)) goto loc_001EF190; /* jg: greater (signed >) */

loc_001EF1C3: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(MEM8(eax + esi)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi), 0x20 (8-bit) */
    ebx = MEM32(esp + 0x14);
    if (CMP_G(_fas, _fbs)) goto loc_001EF1D7; /* jg: greater (signed >) */

loc_001EF1D1: ;
    _fa = (uint32_t)(MEM8(eax + ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ebx), 0x20 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EF1F1; /* jle: less or equal (signed <=) */

loc_001EF1D7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x20 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EF1E8; /* jle: less or equal (signed <=) */

loc_001EF1DE: ;
    edi = edi;

loc_001EF1E0: ;
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001EF1E0; /* jg: greater (signed >) */

loc_001EF1E8: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001EF156;

loc_001EF1F1: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001EF1FF: ;
    eax = 0xFFFFFFFEu;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF210
 * Original: 0x001EF210 - 0x001EF331 (289 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF210: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001EF21Bu); RECOMP_ABI_CALL(0x001EF020u, sub_001EF020); /* call 0x001EF020 */

loc_001EF21B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF23D; /* je: equal / zero */

loc_001EF21F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EF229u); RECOMP_ABI_CALL(0x00237B86u, sub_00237B86); /* call 0x00237B86 */

loc_001EF229: ;
    ebx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EF246; /* jle: less or equal (signed <=) */

loc_001EF236: ;
    ebx = 0xFF;
    goto loc_001EF24C;

loc_001EF23D: ;
    MEM8(esi + 0x420) = 1;
    goto loc_001EF24A;

loc_001EF246: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EF24C; /* jge: greater or equal (signed >=) */

loc_001EF24A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EF24C: ;
    ecx = esi;
    PUSH32(esp, 0x001EF253u); RECOMP_ABI_CALL(0x001EF020u, sub_001EF020); /* call 0x001EF020 */

loc_001EF253: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF275; /* je: equal / zero */

loc_001EF257: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EF261u); RECOMP_ABI_CALL(0x00237B86u, sub_00237B86); /* call 0x00237B86 */

loc_001EF261: ;
    ebp = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EF27E; /* jle: less or equal (signed <=) */

loc_001EF26E: ;
    ebp = 0xFF;
    goto loc_001EF284;

loc_001EF275: ;
    MEM8(esi + 0x420) = 1;
    goto loc_001EF282;

loc_001EF27E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EF284; /* jge: greater or equal (signed >=) */

loc_001EF282: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EF284: ;
    ecx = esi;
    PUSH32(esp, 0x001EF28Bu); RECOMP_ABI_CALL(0x001EF020u, sub_001EF020); /* call 0x001EF020 */

loc_001EF28B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF2AD; /* je: equal / zero */

loc_001EF28F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EF299u); RECOMP_ABI_CALL(0x00237B86u, sub_00237B86); /* call 0x00237B86 */

loc_001EF299: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EF2B6; /* jle: less or equal (signed <=) */

loc_001EF2A6: ;
    edi = 0xFF;
    goto loc_001EF2BC;

loc_001EF2AD: ;
    MEM8(esi + 0x420) = 1;
    goto loc_001EF2BA;

loc_001EF2B6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EF2BC; /* jge: greater or equal (signed >=) */

loc_001EF2BA: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EF2BC: ;
    ecx = esi;
    PUSH32(esp, 0x001EF2C3u); RECOMP_ABI_CALL(0x001EF020u, sub_001EF020); /* call 0x001EF020 */

loc_001EF2C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF2D6; /* je: equal / zero */

loc_001EF2C7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EF2D1u); RECOMP_ABI_CALL(0x00237B86u, sub_00237B86); /* call 0x00237B86 */

loc_001EF2D1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001EF2DF;

loc_001EF2D6: ;
    MEM8(esi + 0x420) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EF2DF: ;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    eax = 0x80808081u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((7) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EF317; /* jle: less or equal (signed <=) */

loc_001EF2FE: ;
    eax = 0x80;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    eax = eax | ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, ebp);
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001EF317: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EF31D; /* jge: greater or equal (signed >=) */

loc_001EF31B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EF31D: ;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    eax = eax | ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, ebp);
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EF340
 * Original: 0x001EF340 - 0x001EF40C (204 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EF340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF340: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001EF34Au); RECOMP_ABI_CALL(0x001EF020u, sub_001EF020); /* call 0x001EF020 */

loc_001EF34A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF36C; /* je: equal / zero */

loc_001EF34E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EF358u); RECOMP_ABI_CALL(0x00237B86u, sub_00237B86); /* call 0x00237B86 */

loc_001EF358: ;
    ebp = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EF375; /* jle: less or equal (signed <=) */

loc_001EF365: ;
    ebp = 0xFF;
    goto loc_001EF37B;

loc_001EF36C: ;
    MEM8(esi + 0x420) = 1;
    goto loc_001EF379;

loc_001EF375: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EF37B; /* jge: greater or equal (signed >=) */

loc_001EF379: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EF37B: ;
    ecx = esi;
    PUSH32(esp, 0x001EF382u); RECOMP_ABI_CALL(0x001EF020u, sub_001EF020); /* call 0x001EF020 */

loc_001EF382: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF3A4; /* je: equal / zero */

loc_001EF386: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EF390u); RECOMP_ABI_CALL(0x00237B86u, sub_00237B86); /* call 0x00237B86 */

loc_001EF390: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EF3AD; /* jle: less or equal (signed <=) */

loc_001EF39D: ;
    edi = 0xFF;
    goto loc_001EF3B3;

loc_001EF3A4: ;
    MEM8(esi + 0x420) = 1;
    goto loc_001EF3B1;

loc_001EF3AD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EF3B3; /* jge: greater or equal (signed >=) */

loc_001EF3B1: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EF3B3: ;
    ecx = esi;
    PUSH32(esp, 0x001EF3BAu); RECOMP_ABI_CALL(0x001EF020u, sub_001EF020); /* call 0x001EF020 */

loc_001EF3BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF3EA; /* je: equal / zero */

loc_001EF3BE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EF3C8u); RECOMP_ABI_CALL(0x00237B86u, sub_00237B86); /* call 0x00237B86 */

loc_001EF3C8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EF3F3; /* jle: less or equal (signed <=) */

loc_001EF3D2: ;
    eax = 0xFF;
    eax = eax | 0xFFFF8000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, esi);
    eax = eax | ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001EF3EA: ;
    MEM8(esi + 0x420) = 1;
    goto loc_001EF3F7;

loc_001EF3F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EF3F9; /* jge: greater or equal (signed >=) */

loc_001EF3F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001EF3F9: ;
    eax = eax | 0xFFFF8000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, esi);
    eax = eax | ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001EF410
 * Original: 0x001EF410 - 0x001EF4F8 (232 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF410: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x418);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001EF427u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EF424u); } /* indirect call */
    }

loc_001EF427: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x41C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x41C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EF4D7; /* jge: greater or equal (signed >=) */

loc_001EF433: ;
    ecx = MEM32(esi + 0x418);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0xF;
    PUSH32(esp, eax);
    MEM8(esp + 0x13) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EF44Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EF448u); } /* indirect call */
    }

loc_001EF44B: ;
    SET_LO8(ebx, MEM8(esp + 0xB));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x20 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001EF487; /* jg: greater (signed >) */

loc_001EF454: ;
    ecx = MEM32(esi + 0x418);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001EF45Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EF45Cu); } /* indirect call */
    }

loc_001EF45F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x41C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x41C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EF487; /* jge: greater or equal (signed >=) */

loc_001EF467: ;
    ecx = MEM32(esi + 0x418);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 0xF;
    PUSH32(esp, edx);
    MEM8(esp + 0x13) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001EF47Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EF47Bu); } /* indirect call */
    }

loc_001EF47E: ;
    SET_LO8(ebx, MEM8(esp + 0xB));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x20 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EF454; /* jle: less or equal (signed <=) */

loc_001EF487: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF4D6; /* je: equal / zero */

loc_001EF48C: ;
    /* nop */

loc_001EF490: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF4D6; /* je: equal / zero */

loc_001EF495: ;
    eax = MEM32(esi + 8);
    MEM8(eax + esi + 0x18) = LO8(ebx);
    edx = MEM32(esi + 8);
    ecx = MEM32(esi + 0x418);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 8) = edx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001EF4AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EF4ABu); } /* indirect call */
    }

loc_001EF4AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x41C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x41C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EF4D6; /* jge: greater or equal (signed >=) */

loc_001EF4B6: ;
    ecx = MEM32(esi + 0x418);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 0xF;
    PUSH32(esp, edx);
    MEM8(esp + 0x13) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001EF4CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EF4CAu); } /* indirect call */
    }

loc_001EF4CD: ;
    SET_LO8(ebx, MEM8(esp + 0xB));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EF490; /* jne: not equal / not zero */

loc_001EF4D6: ;
    POP32(esp, ebx);

loc_001EF4D7: ;
    eax = MEM32(esi + 8);
    MEM8(eax + esi + 0x18) = 0;
    ecx = MEM32(esi + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esi + 8) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001EF4F3; /* jle: less or equal (signed <=) */

loc_001EF4ED: ;
    eax = esi + 0x18;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001EF4F3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EF500
 * Original: 0x001EF500 - 0x001EF614 (276 bytes, 94 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF500: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 0x418) = ebx;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001EF523u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EF520u); } /* indirect call */
    }

loc_001EF523: ;
    MEM32(esi + 0x41C) = eax;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001EF530u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EF52Du); } /* indirect call */
    }

loc_001EF530: ;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001EF539u); RECOMP_ABI_CALL(0x001EF410u, sub_001EF410); /* call 0x001EF410 */

loc_001EF539: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF5EC; /* je: equal / zero */

loc_001EF541: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5B (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EF586; /* jne: not equal / not zero */

loc_001EF548: ;
    SET_LO8(edx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x20 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EF563; /* jle: less or equal (signed <=) */

loc_001EF553: ;
    _fa = (uint32_t)(MEM8(ecx + eax)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + eax), 0x5D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF563; /* je: equal / zero */

loc_001EF559: ;
    SET_LO8(edx, MEM8(ecx + eax + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x20 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001EF553; /* jg: greater (signed >) */

loc_001EF563: ;
    PUSH32(esp, eax);
    MEM8(ecx + eax) = 0;
    PUSH32(esp, 0x001EF56Du); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_001EF56D: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x14);
    MEM32(edx + ecx * 8) = eax;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x14);
    MEM32(ecx + eax * 8 + 4) = 0xFFFFFFFFu;
    goto loc_001EF5CA;

loc_001EF586: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x61 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EF590; /* jl: less (signed <) */

loc_001EF58B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x7A (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EF59A; /* jle: less or equal (signed <=) */

loc_001EF590: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x41 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EF5D4; /* jl: less (signed <) */

loc_001EF595: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001EF5D4; /* jg: greater (signed >) */

loc_001EF59A: ;
    SET_LO8(edx, MEM8(eax));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x20 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EF5AD; /* jle: less or equal (signed <=) */

loc_001EF5A3: ;
    SET_LO8(edx, MEM8(ecx + eax + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x20 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001EF5A3; /* jg: greater (signed >) */

loc_001EF5AD: ;
    PUSH32(esp, eax);
    MEM8(ecx + eax) = 0;
    PUSH32(esp, 0x001EF5B7u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_001EF5B7: ;
    edx = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x14);
    MEM32(ecx + edx * 8) = eax;
    edx = MEM32(esi + 0xC);
    eax = MEM32(esi + 0x14);
    MEM32(eax + edx * 8 + 4) = edi;

loc_001EF5CA: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;

loc_001EF5D4: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001EF5DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EF5D8u); } /* indirect call */
    }

loc_001EF5DB: ;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001EF5E4u); RECOMP_ABI_CALL(0x001EF410u, sub_001EF410); /* call 0x001EF410 */

loc_001EF5E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EF541; /* jne: not equal / not zero */

loc_001EF5EC: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x14);
    MEM32(ecx + eax * 8) = 0;
    edx = MEM32(esi + 0xC);
    eax = MEM32(esi + 0x14);
    MEM32(eax + edx * 8 + 4) = 0xFFFFFFFFu;
    eax = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF620
 * Original: 0x001EF620 - 0x001EF69A (122 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF620: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM8(esi + 0x420) = 1;
    if (CMP_GE(_fas, _fbs)) goto loc_001EF67A; /* jge: greater or equal (signed >=) */

loc_001EF636: ;
    ebx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x18);
    edi = edi;

loc_001EF640: ;
    eax = MEM32(esi + 0x14);
    ecx = eax + edi * 8;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF67A; /* je: equal / zero */

loc_001EF64E: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EF672; /* jne: not equal / not zero */

loc_001EF652: ;
    ecx = ebp;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EF672; /* jne: not equal / not zero */

loc_001EF659: ;
    ecx = MEM32(esi + 0x418);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001EF667u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EF664u); } /* indirect call */
    }

loc_001EF667: ;
    ecx = esi;
    PUSH32(esp, 0x001EF66Eu); RECOMP_ABI_CALL(0x001EF410u, sub_001EF410); /* call 0x001EF410 */

loc_001EF66E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EF683; /* jne: not equal / not zero */

loc_001EF672: ;
    eax = MEM32(esi + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EF640; /* jl: less (signed <) */

loc_001EF67A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001EF683: ;
    ecx = esi;
    PUSH32(esp, 0x001EF68Au); RECOMP_ABI_CALL(0x001EF020u, sub_001EF020); /* call 0x001EF020 */

loc_001EF68A: ;
    POP32(esp, edi);
    MEM8(esi + 0x420) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EF6A0
 * Original: 0x001EF6A0 - 0x001EF701 (97 bytes, 42 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF6A0: ;
    PUSH32(esp, 0x001EF6A5u); RECOMP_ABI_CALL(0x001EF020u, sub_001EF020); /* call 0x001EF020 */

loc_001EF6A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF6AD; /* je: equal / zero */

loc_001EF6A9: ;
    edx = eax;
    goto loc_001EF6B9;

loc_001EF6AD: ;
    MEM8(ecx + 0x420) = 1;
    edx = 0x2E0465;

loc_001EF6B9: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EF6DF; /* jle: less or equal (signed <=) */

loc_001EF6CB: ;
    ebp = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001EF6D0: ;
    SET_LO8(ebx, MEM8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF6F2; /* je: equal / zero */

loc_001EF6D6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx + ebp) = LO8(ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EF6D0; /* jl: less (signed <) */

loc_001EF6DF: ;
    MEM8(eax + edi + -1) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ecx + 0x420) = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001EF6F2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EF6DF; /* jge: greater or equal (signed >=) */

loc_001EF6F6: ;
    POP32(esp, edi);
    MEM8(esi + eax) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EF710
 * Original: 0x001EF710 - 0x001EF73F (47 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF710: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF739; /* je: equal / zero */

loc_001EF718: ;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(eax, LO8(eax) | 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x74) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x74 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF73C; /* je: equal / zero */

loc_001EF720: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x79) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x79 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF73C; /* je: equal / zero */

loc_001EF724: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x31 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EF72C; /* jl: less (signed <) */

loc_001EF728: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x39 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001EF73C; /* jle: less or equal (signed <=) */

loc_001EF72C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x6F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x6F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EF739; /* jne: not equal / not zero */

loc_001EF730: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(eax, LO8(eax) | 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x6E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x6E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF73C; /* je: equal / zero */

loc_001EF739: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001EF73C: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001EF740
 * Original: 0x001EF740 - 0x001EF762 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF740(void)
{

loc_001EF740: ;
    PUSH32(esp, esi);
    esi = ecx + 0x28;
    ecx = esi;
    PUSH32(esp, 0x001EF74Bu); RECOMP_ABI_CALL(0x0021B420u, sub_0021B420); /* call 0x0021B420 */

loc_001EF74B: ;
    ecx = esi;
    PUSH32(esp, 0x001EF752u); RECOMP_ABI_CALL(0x0021B880u, sub_0021B880); /* call 0x0021B880 */

loc_001EF752: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EF75Eu); RECOMP_ABI_CALL(0x0021ABF0u, sub_0021ABF0); /* call 0x0021ABF0 */

loc_001EF75E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF770
 * Original: 0x001EF770 - 0x001EF784 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF770: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001EF77Eu); RECOMP_ABI_CALL(0x0021B210u, sub_0021B210); /* call 0x0021B210 */

loc_001EF77E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF790
 * Original: 0x001EF790 - 0x001EF7A4 (20 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF790: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001EF79Eu); RECOMP_ABI_CALL(0x0021AA80u, sub_0021AA80); /* call 0x0021AA80 */

loc_001EF79E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF7B0
 * Original: 0x001EF7B0 - 0x001EF7C4 (20 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF7B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF7B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001EF7BEu); RECOMP_ABI_CALL(0x0021AA60u, sub_0021AA60); /* call 0x0021AA60 */

loc_001EF7BE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF7D0
 * Original: 0x001EF7D0 - 0x001EF7E4 (20 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF7D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF7D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001EF7DEu); RECOMP_ABI_CALL(0x0021AAF0u, sub_0021AAF0); /* call 0x0021AAF0 */

loc_001EF7DE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF7F0
 * Original: 0x001EF7F0 - 0x001EF804 (20 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF7F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF7F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001EF7FEu); RECOMP_ABI_CALL(0x0021B580u, sub_0021B580); /* call 0x0021B580 */

loc_001EF7FE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF810
 * Original: 0x001EF810 - 0x001EF824 (20 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF810: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001EF81Eu); RECOMP_ABI_CALL(0x0021AAD0u, sub_0021AAD0); /* call 0x0021AAD0 */

loc_001EF81E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF830
 * Original: 0x001EF830 - 0x001EF838 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF830: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0021AB30(); return; /* tail jmp 0x0021AB30 */

}

/**
 * sub_001EF840
 * Original: 0x001EF840 - 0x001EF848 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF840: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0021AB40(); return; /* tail jmp 0x0021AB40 */

}

/**
 * sub_001EF850
 * Original: 0x001EF850 - 0x001EF858 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF850: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0021AB90(); return; /* tail jmp 0x0021AB90 */

}

/**
 * sub_001EF860
 * Original: 0x001EF860 - 0x001EF868 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF860: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0021B570(); return; /* tail jmp 0x0021B570 */

}

/**
 * sub_001EF870
 * Original: 0x001EF870 - 0x001EF878 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF870: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0021ABB0(); return; /* tail jmp 0x0021ABB0 */

}

/**
 * sub_001EF880
 * Original: 0x001EF880 - 0x001EF8BE (62 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF880: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(edx + 0xC) = eax;
    eax = MEM32(esp + 0x30);
    MEM32(edx + 0x10) = eax;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x14) = eax;
    PUSH32(esp, 0x001EF8BBu); RECOMP_ABI_CALL(0x0021B650u, sub_0021B650); /* call 0x0021B650 */

loc_001EF8BB: ;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001EF8C0
 * Original: 0x001EF8C0 - 0x001EF8C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF8C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF8C0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0021AB50(); return; /* tail jmp 0x0021AB50 */

}

/**
 * sub_001EF8D0
 * Original: 0x001EF8D0 - 0x001EF8DA (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF8D0(void)
{

loc_001EF8D0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x25) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF8E0
 * Original: 0x001EF8E0 - 0x001EF8EC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF8E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF8E0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 0x24) = LO8(eax);
    MEM8(ecx + 0x25) = LO8(eax);
    MEM8(ecx + 0x26) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001EF8F0
 * Original: 0x001EF8F0 - 0x001EF8F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF8F0(void)
{

loc_001EF8F0: ;
    SET_LO8(eax, MEM8(ecx + 0x24));
    esp += 4; return; /* ret */

}

/**
 * sub_001EF900
 * Original: 0x001EF900 - 0x001EF911 (17 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001EF900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF900: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF90E; /* je: equal / zero */

loc_001EF907: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

loc_001EF90E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001EF920
 * Original: 0x001EF920 - 0x001EF996 (118 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF920: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246D16);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = edi;
    MEM32(esp + 8) = esi;
    MEM32(esi) = 0x2FC838;
    PUSH32(esp, 0x001EF94Eu); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_001EF94E: ;
    MEM32(edi) = 0x2FC824;
    MEM32(edi + 0x1C) = 0;
    edi = esi + 0x28;
    ecx = edi;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x001EF96Du); RECOMP_ABI_CALL(0x0021B980u, sub_0021B980); /* call 0x0021B980 */

loc_001EF96D: ;
    ecx = edi;
    MEM8(esp + 0x14) = 1;
    MEM32(esi + 0x20) = esi;
    PUSH32(esp, 0x001EF97Cu); RECOMP_ABI_CALL(0x0021B890u, sub_0021B890); /* call 0x0021B890 */

loc_001EF97C: ;
    ecx = MEM32(esp + 0xC);
    MEM8(esi + 0x130) = 0;
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
 * sub_001EF9A0
 * Original: 0x001EF9A0 - 0x001EF9F3 (83 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF9A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF9A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246D2B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2FC838;
    ecx = esi + 0x28;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001EF9D3u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_001EF9D3: ;
    ecx = esi + 4;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001EF9E3u); RECOMP_ABI_CALL(0x001FA0A0u, sub_001FA0A0); /* call 0x001FA0A0 */

loc_001EF9E3: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001EFA00
 * Original: 0x001EFA00 - 0x001EFA4F (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFA00(void)
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

loc_001EFA00: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x30F064)); /* fld float */
    eax = esp + 0xC;
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, eax);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x30F068)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x30F06C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001EFA34u); RECOMP_ABI_CALL(0x0021AAD0u, sub_0021AAD0); /* call 0x0021AAD0 */

loc_001EFA34: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001EFA50
 * Original: 0x001EFA50 - 0x001EFB0A (186 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFA50(void)
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

loc_001EFA50: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001EFA60u); RECOMP_ABI_CALL(0x001EF7F0u, sub_001EF7F0); /* call 0x001EF7F0 */

loc_001EFA60: ;
    ecx = esp + 8;
    PUSH32(esp, 0x001EFA69u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_001EFA69: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x48) - fp_top()); /* fsubr dword ptr [esp + 0x48] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001EFA76u); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_001EFA76: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD6C0)); /* fmul dword ptr [0x2dd6c0] */
    ecx = esp + 0x4C;
    edx = esp + 8;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EFA8Eu); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_001EFA8E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30F064)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30F068)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30F06C)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x24;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001EFAE8u); RECOMP_ABI_CALL(0x0021AAA0u, sub_0021AAA0); /* call 0x0021AAA0 */

loc_001EFAE8: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EFAF8u); RECOMP_ABI_CALL(0x001F8210u, sub_001F8210); /* call 0x001F8210 */

loc_001EFAF8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EFB03u); RECOMP_ABI_CALL(0x0021AB70u, sub_0021AB70); /* call 0x0021AB70 */

loc_001EFB03: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001EFB10
 * Original: 0x001EFB10 - 0x001EFB91 (129 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFB10(void)
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

loc_001EFB10: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = esp + 0x18;
    esi = edi + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EFB28u); RECOMP_ABI_CALL(0x0021AA60u, sub_0021AA60); /* call 0x0021AA60 */

loc_001EFB28: ;
    ecx = MEM32(eax);
    edx = esp + 0x18;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001EFB3Au); RECOMP_ABI_CALL(0x0021AA60u, sub_0021AA60); /* call 0x0021AA60 */

loc_001EFB3A: ;
    eax = MEM32(eax + 8);
    ebp = MEM32(esp + 0x14);
    ebx = eax;
    PUSH32(esp, ebx);
    ecx = esp + 0x1C;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x001EFB53u); RECOMP_ABI_CALL(0x001F16C0u, sub_001F16C0); /* call 0x001F16C0 */

loc_001EFB53: ;
    ecx = MEM32(eax);
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x001EFB6Cu); RECOMP_ABI_CALL(0x001F1530u, sub_001F1530); /* call 0x001F1530 */

loc_001EFB6C: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    PUSH32(esp, 0x001EFB7Au); RECOMP_ABI_CALL(0x001EF830u, sub_001EF830); /* call 0x001EF830 */

loc_001EFB7A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001EFB89u); RECOMP_ABI_CALL(0x0021B4F0u, sub_0021B4F0); /* call 0x0021B4F0 */

loc_001EFB89: ;
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
 * sub_001EFBA0
 * Original: 0x001EFBA0 - 0x001EFBD1 (49 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFBA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EFBA0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = ecx + 0x28;
    eax = edi + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EFBB7u); RECOMP_ABI_CALL(0x0021B4D0u, sub_0021B4D0); /* call 0x0021B4D0 */

loc_001EFBB7: ;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001EFBC1u); RECOMP_ABI_CALL(0x001F7D90u, sub_001F7D90); /* call 0x001F7D90 */

loc_001EFBC1: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EFBC9u); RECOMP_ABI_CALL(0x0021AB70u, sub_0021AB70); /* call 0x0021AB70 */

loc_001EFBC9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EFBE0
 * Original: 0x001EFBE0 - 0x001EFBFF (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFBE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFBE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x28;
    MEM8(esi + 0x24) = 0;
    PUSH32(esp, 0x001EFBEFu); RECOMP_ABI_CALL(0x0021B570u, sub_0021B570); /* call 0x0021B570 */

loc_001EFBEF: ;
    ecx = esi + 4;
    MEM8(esi + 0x130) = 0;
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_001EFC00
 * Original: 0x001EFC00 - 0x001EFC1E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EFC00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001EFC08u); RECOMP_ABI_CALL(0x001EF9A0u, sub_001EF9A0); /* call 0x001EF9A0 */

loc_001EFC08: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EFC18; /* je: equal / zero */

loc_001EFC0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EFC15u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_001EFC15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001EFC18: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EFC20
 * Original: 0x001EFC20 - 0x001EFC4B (43 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFC20(void)
{

loc_001EFC20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001EFC29u); RECOMP_ABI_CALL(0x001EF8E0u, sub_001EF8E0); /* call 0x001EF8E0 */

loc_001EFC29: ;
    edi = esi + 0x28;
    ecx = edi;
    PUSH32(esp, 0x001EFC33u); RECOMP_ABI_CALL(0x0021B890u, sub_0021B890); /* call 0x0021B890 */

loc_001EFC33: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EFC3Fu); RECOMP_ABI_CALL(0x001EFBA0u, sub_001EFBA0); /* call 0x001EFBA0 */

loc_001EFC3F: ;
    ecx = edi;
    PUSH32(esp, 0x001EFC46u); RECOMP_ABI_CALL(0x0021B880u, sub_0021B880); /* call 0x0021B880 */

loc_001EFC46: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EFC50
 * Original: 0x001EFC50 - 0x001EFC81 (49 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EFC50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EFC70; /* jne: not equal / not zero */

loc_001EFC5A: ;
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EFC70; /* je: equal / zero */

loc_001EFC61: ;
    ecx = esi + 4;
    MEM8(esi + 0x130) = 1;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001EFC70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EFC6Du); } /* indirect call */
    }

loc_001EFC70: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esi + 0x28;
    PUSH32(esp, 0x001EFC7Du); RECOMP_ABI_CALL(0x0021B4D0u, sub_0021B4D0); /* call 0x0021B4D0 */

loc_001EFC7D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EFC90
 * Original: 0x001EFC90 - 0x001EFCC1 (49 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EFC90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EFCB0; /* jne: not equal / not zero */

loc_001EFC9A: ;
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EFCB0; /* je: equal / zero */

loc_001EFCA1: ;
    ecx = esi + 4;
    MEM8(esi + 0x130) = 1;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001EFCB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001EFCADu); } /* indirect call */
    }

loc_001EFCB0: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esi + 0x28;
    PUSH32(esp, 0x001EFCBDu); RECOMP_ABI_CALL(0x00076360u, sub_00076360); /* call 0x00076360 */

loc_001EFCBD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EFCD0
 * Original: 0x001EFCD0 - 0x001EFCEC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFCD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFCD0: ;
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, 1);
    MEM8(ecx + 0x24) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001EFCEB; /* jne: not equal / not zero */

loc_001EFCDC: ;
    MEM8(ecx + 0x130) = LO8(eax);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

loc_001EFCEB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EFCF0
 * Original: 0x001EFCF0 - 0x001EFCFA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFCF0(void)
{

loc_001EFCF0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(0x30EEA8) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001EFD00
 * Original: 0x001EFD00 - 0x001EFD05 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFD00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFD00: ;
    g_seh_ebp = ebp; sub_0021BAE0(); return; /* tail jmp 0x0021BAE0 */

}

/**
 * sub_001EFD10
 * Original: 0x001EFD10 - 0x001EFE54 (324 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFD10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EFD10: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DD8EC)); /* movss */
    eax = 0x60345894;
    MEM32(0x85BC68) = eax;
    MEM32(0x85BC6C) = eax;
    MEM32(0x85BC70) = eax;
    MEM32(0x85BC74) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x85BC48) = eax;
    MEM32(0x85BC4C) = eax;
    MEM32(0x85BC50) = eax;
    MEM32(0x85BC54) = eax;
    MEM32(0x85BC58) = eax;
    MEM32(0x85BC5C) = eax;
    MEM32(0x85BC60) = eax;
    MEM32(0x85BC64) = eax;
    MEM8(0x643314) = LO8(eax);
    MEM32(0x643144) = 0x60638D29;
    MEM32(0x643140) = 0x88E27C45u;
    MEMF(0x6430BC) = xmm0.f[0]; /* movss */
    eax = 0x642F38;

loc_001EFD81: ;
    MEM32(eax) = 0;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6430B8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6430B8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EFD81; /* jl: less (signed <) */

loc_001EFD91: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x6430C0) = ecx;
    MEM32(0x6430C4) = ecx;
    MEM32(0x6430C8) = ecx;
    MEM32(0x6430CC) = ecx;
    MEM32(0x6430D0) = ecx;
    MEM32(0x6430D4) = ecx;
    MEM32(0x6430D8) = ecx;
    MEM32(0x6430DC) = ecx;
    MEM32(0x6430E0) = ecx;
    MEM32(0x6430E4) = ecx;
    MEM32(0x6430E8) = ecx;
    MEM32(0x6430EC) = ecx;
    MEM32(0x6430F0) = ecx;
    MEM32(0x6430F4) = ecx;
    MEM32(0x6430F8) = ecx;
    MEM32(0x6430FC) = ecx;
    MEM32(0x643100) = ecx;
    MEM32(0x643104) = ecx;
    MEM32(0x643108) = ecx;
    MEM32(0x64310C) = ecx;
    MEM32(0x643110) = ecx;
    MEM32(0x643114) = ecx;
    MEM32(0x643118) = ecx;
    MEM32(0x64311C) = ecx;
    MEM32(0x643120) = ecx;
    MEM32(0x643124) = ecx;
    MEM32(0x643128) = ecx;
    MEM32(0x64312C) = ecx;
    MEM32(0x643130) = ecx;
    MEM32(0x643134) = ecx;
    MEM32(0x643138) = ecx;
    MEM32(0x64313C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001EFE60
 * Original: 0x001EFE60 - 0x001EFE87 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EFE60: ;
    SET_LO16(ecx, MEM16(esp + 4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EFE86; /* je: equal / zero */

loc_001EFE6C: ;
    /* nop */

loc_001EFE70: ;
    edx = MEM32(esp + 4);
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO16(ecx, LO16(ecx) >> 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    MEM16(esp + 4) = LO16(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001EFE70; /* jne: not equal / not zero */

loc_001EFE86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EFE90
 * Original: 0x001EFE90 - 0x001EFEF1 (97 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFE90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EFE90: ;
    eax = MEM32(0x643154);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EFE9Bu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_001EFE9B: ;
    ecx = MEM32(0x643150);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001EFEA7u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_001EFEA7: ;
    edx = MEM32(0x643148);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EFEB3u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_001EFEB3: ;
    eax = MEM32(0x64314C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EFEBEu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_001EFEBE: ;
    ecx = MEM32(0x643268);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001EFECAu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_001EFECA: ;
    edx = MEM32(0x64326C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EFED6u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_001EFED6: ;
    eax = MEM32(0x643270);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EFEE1u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_001EFEE1: ;
    ecx = MEM32(0x643274);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001EFEEDu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_001EFEED: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001EFF00
 * Original: 0x001EFF00 - 0x001EFF0D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFF00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001EFF00: ;
    fp_push((double)SMEM32(0x643310)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x643284)); /* fmul dword ptr [0x643284] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001EFF10
 * Original: 0x001EFF10 - 0x001EFF1E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFF10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFF10: ;
    eax = MEM32(0x643318);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EFF1B; /* je: equal / zero */

loc_001EFF19: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_001EFF1B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001EFF20
 * Original: 0x001EFF20 - 0x001EFF69 (73 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EFF20: ;
    eax = ecx + 0x89;
    edx = 0x10;
    goto loc_001EFF30;

    /* nop */

loc_001EFF30: ;
    SET_LO8(ecx, MEM8(eax + -1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001EFF3D; /* jae: above or equal (unsigned >=) */

loc_001EFF38: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + -1) = LO8(ecx);

loc_001EFF3D: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001EFF48; /* jae: above or equal (unsigned >=) */

loc_001EFF44: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);

loc_001EFF48: ;
    SET_LO8(ecx, MEM8(eax + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001EFF55; /* jae: above or equal (unsigned >=) */

loc_001EFF50: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + 1) = LO8(ecx);

loc_001EFF55: ;
    SET_LO8(ecx, MEM8(eax + 2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001EFF62; /* jae: above or equal (unsigned >=) */

loc_001EFF5D: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + 2) = LO8(ecx);

loc_001EFF62: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EFF30; /* jne: not equal / not zero */

loc_001EFF68: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EFF70
 * Original: 0x001EFF70 - 0x001EFF9E (46 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EFF70: ;
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(esp + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 8;
    goto loc_001EFF80;

    /* nop */

loc_001EFF80: ;
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EFF92; /* je: equal / zero */

loc_001EFF85: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EFF80; /* jl: less (signed <) */

loc_001EFF8E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001EFF92: ;
    MEM8(eax + ecx + 0xC8) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EFFA0
 * Original: 0x001EFFA0 - 0x001EFFDD (61 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EFFA0: ;
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(esp + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 8;
    goto loc_001EFFB0;

    /* nop */

loc_001EFFB0: ;
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EFFC4; /* je: equal / zero */

loc_001EFFB5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EFFB0; /* jl: less (signed <) */

loc_001EFFBE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001EFFC4: ;
    MEM8(eax + ecx + 0x88) = 0;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB0);
    eax = eax + ecx + 0x108;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EFFE0
 * Original: 0x001EFFE0 - 0x001F0007 (39 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFFE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EFFE0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(0x6432DC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = MEM32(eax + 0x14);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F0003u); RECOMP_ABI_CALL(0x001EFF70u, sub_001EFF70); /* call 0x001EFF70 */

loc_001F0003: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F0010
 * Original: 0x001F0010 - 0x001F0075 (101 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0010: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = ecx;
    ecx = MEM32(0x6432DC);
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    edx = edi;
    ebp = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = edx;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebx + 0x14);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F006B; /* je: equal / zero */

loc_001F003F: ;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F004Au); RECOMP_ABI_CALL(0x001EFFA0u, sub_001EFFA0); /* call 0x001EFFA0 */

loc_001F004A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F006B; /* je: equal / zero */

loc_001F004E: ;
    ecx = MEM32(0x643304);
    edx = MEM32(eax + 0x94);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    POP32(esp, edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(ecx + esi));
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001F006B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F0080
 * Original: 0x001F0080 - 0x001F00A4 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F0080: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F0082: ;
    SET_LO8(edx, MEM8(ecx + eax + 0xC8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0094; /* jne: not equal / not zero */

loc_001F008D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F0082; /* jl: less (signed <) */

loc_001F0093: ;
    esp += 4; return; /* ret */

loc_001F0094: ;
    MEM16(ecx + eax * 2 + 8) = 0xFFFF;
    MEM8(eax + ecx + 0xC8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001F00B0
 * Original: 0x001F00B0 - 0x001F00C2 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F00B0(void)
{

loc_001F00B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001F00B8u); RECOMP_ABI_CALL(0x00209680u, sub_00209680); /* call 0x00209680 */

loc_001F00B8: ;
    MEM32(esi) = 0x2FC864;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F00D0
 * Original: 0x001F00D0 - 0x001F00DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F00D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F00D0: ;
    MEM32(ecx) = 0x2FC864;
    g_seh_ebp = ebp; sub_00209670(); return; /* tail jmp 0x00209670 */

}

/**
 * sub_001F00E0
 * Original: 0x001F00E0 - 0x001F0337 (599 bytes, 186 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F00E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F00E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x643304);
    eax = esi + 2;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    esi = (uint32_t)((int32_t)esi * (int32_t)esi);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x36);
    PUSH32(esp, edi);
    ebp = ecx;
    ecx = MEM32(0x3128EC);
    eax = eax + eax + -2;
    PUSH32(esp, 0);
    edx = ecx + eax * 2;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    MEM32(0x85BE94) = eax;
    MEM32(0x85BE98) = edx;
    PUSH32(esp, 0x001F011Au); RECOMP_ABI_CALL(0x00216A60u, sub_00216A60); /* call 0x00216A60 */

loc_001F011A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    MEM32(0x85BE9C) = eax;
    PUSH32(esp, 0x001F0129u); RECOMP_ABI_CALL(0x00216A60u, sub_00216A60); /* call 0x00216A60 */

loc_001F0129: ;
    PUSH32(esp, 0);
    MEM32(0x85BEA0) = eax;
    eax = MEM32(0x3128F0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F013Du); RECOMP_ABI_CALL(0x00216A60u, sub_00216A60); /* call 0x00216A60 */

loc_001F013D: ;
    ecx = MEM32(0x3128F0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    MEM32(0x85BEA4) = eax;
    PUSH32(esp, 0x001F0152u); RECOMP_ABI_CALL(0x00216A60u, sub_00216A60); /* call 0x00216A60 */

loc_001F0152: ;
    edx = MEM32(0x85BE94);
    PUSH32(esp, 0x2FC8DC);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM32(0x85BEA8) = eax;
    PUSH32(esp, 0x001F016Au); RECOMP_ABI_CALL(0x00216A60u, sub_00216A60); /* call 0x00216A60 */

loc_001F016A: ;
    ecx = MEM32(0x85BE94);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = eax;
    MEM32(0x85BEB4) = eax;
    PUSH32(esp, 0x001F0184u); RECOMP_ABI_CALL(0x00216A30u, sub_00216A30); /* call 0x00216A30 */

loc_001F0184: ;
    edx = MEM32(0x643304);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F01F2; /* jle: less or equal (signed <=) */

loc_001F0190: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F01C3; /* jl: less (signed <) */

loc_001F0196: ;
    edi = esi + 1;
    /* nop */

loc_001F01A0: ;
    MEM16(eax) = LO16(ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(esi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(edi);
    edx = MEM32(0x643304);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F01A0; /* jle: less or equal (signed <=) */

loc_001F01C3: ;
    ecx = edx + -1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F01ED; /* jge: greater or equal (signed >=) */

loc_001F01CA: ;
    MEM16(eax) = LO16(edx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 1;
    MEM16(eax) = LO16(ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = 0;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(ecx);
    edx = MEM32(0x643304);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F01ED: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F0190; /* jl: less (signed <) */

loc_001F01F2: ;
    ecx = MEM32(0x85BEB4);
    PUSH32(esp, 0x001F01FDu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_001F01FD: ;
    eax = MEM32(0x643304);
    edx = eax + 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, 0x2FC8BC);
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F0219u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_001F0219: ;
    MEM32(ebp) = eax;
    eax = MEM32(0x643304);
    ecx = eax + 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, 0x2FC89C);
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F0238u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_001F0238: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 4) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebp + 0x10C;
    ebx = ebp + 8;
    /* nop */

loc_001F0250: ;
    MEM16(ebx) = 0xFFFF;
    PUSH32(esp, 0x2FC890);
    MEM8(edi + ebp + 0xC8) = 0;
    edx = MEM32(0x85BE94);
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F0270u); RECOMP_ABI_CALL(0x00216A60u, sub_00216A60); /* call 0x00216A60 */

loc_001F0270: ;
    PUSH32(esp, 0x2FC884);
    MEM32(esi + -4) = eax;
    eax = MEM32(0x85BE98);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F0285u); RECOMP_ABI_CALL(0x00216A60u, sub_00216A60); /* call 0x00216A60 */

loc_001F0285: ;
    PUSH32(esp, 0x2FC878);
    MEM32(esi) = eax;
    ecx = MEM32(0x85BE94);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F029Au); RECOMP_ABI_CALL(0x00216A60u, sub_00216A60); /* call 0x00216A60 */

loc_001F029A: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(0x643304);
    ecx = MEM32(ebp);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x90) = edx;
    eax = MEM32(0x643304);
    edx = MEM32(ebp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    eax = edx + ecx * 2;
    MEM32(esi + 0x94) = eax;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = esi + 8;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 0x1C) = ecx;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi + 0x48;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x18) = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40 (32-bit) */
    MEM32(ecx + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F0250; /* jl: less (signed <) */

loc_001F0320: ;
    edi = ebp + 0x88;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F0340
 * Original: 0x001F0340 - 0x001F034A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0340(void)
{

loc_001F0340: ;
    eax = MEM32(esp + 4);
    MEM32(0x643318) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001F0350
 * Original: 0x001F0350 - 0x001F03C0 (112 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0350: ;
    edx = MEM32(0x643310);
    ecx = MEM32(0x6432E8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    eax = edx;
    PUSH32(esp, esi);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edi;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(0x643268);
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(edx + eax * 4) = MEM32(edx + eax * 4) | esi;
    _fa = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001F0394;

loc_001F0390: ;
    edi = MEM32(esp + 0x14);

loc_001F0394: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_001F03A0: ;
    eax = esi + ebx;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x643370;
    PUSH32(esp, 0x001F03AFu); RECOMP_ABI_CALL(0x001EFFE0u, sub_001EFFE0); /* call 0x001EFFE0 */

loc_001F03AF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F03A0; /* jle: less or equal (signed <=) */

loc_001F03B5: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F0390; /* jle: less or equal (signed <=) */

loc_001F03BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F03C0
 * Original: 0x001F03C0 - 0x001F04F3 (307 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F03C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F03C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = 2;
    goto loc_001F03E0;

    /* nop */

loc_001F03E0: ;
    ebx = MEM32(0x6432D8);
    esi = MEM32(0x6432C4);
    ecx = ebx;
    eax = edx;
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = MEM32(0x6432E0);
    ebp = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(0x6432B4);
    ebp = ebp & esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(0x6432C8);
    ebx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x64326C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(0x64326C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ZX8(MEM8(esi + ecx));
    esi = MEM32(0x643274);
    SET_LO8(ecx, MEM8(esi + eax * 4));
    eax = (uint32_t)(int32_t)SMEM16(esi + eax * 4 + 2);
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x643290); /* mulss */
    MEMF(edi + -8) = xmm0.f[0]; /* movss */
    esi = MEM32(0x6432D8);
    ebp = MEM32(0x6432C4);
    ecx = esi;
    eax = edx;
    eax = eax & ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = MEM32(0x6432E0);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebx;
    ecx = ecx & ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ecx;
    ecx = esi;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(0x6432B4);
    ecx = ecx & ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = MEM32(0x64326C);
    MEM32(esp + 0x14) = ecx;
    ecx = esi;
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(0x6432C8);
    ebp = eax;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(0x643274);
    SET_LO8(ecx, MEM8(esi + eax * 4));
    ebx = ZX8(MEM8(ebx + ebp));
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = (uint32_t)(int32_t)SMEM16(esi + eax * 4 + 2);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x643290); /* mulss */
    MEMF(edi + -4) = xmm0.f[0]; /* movss */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_001F03E0; /* jne: not equal / not zero */

loc_001F04EB: ;
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
 * sub_001F0500
 * Original: 0x001F0500 - 0x001F079B (667 bytes, 205 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0500(void)
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

loc_001F0500: ;
    eax = MEM32(0x30EEAC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F0516; /* jge: greater or equal (signed >=) */

loc_001F050C: ;
    PUSH32(esp, 0x001F0511u); RECOMP_ABI_CALL(0x00205A40u, sub_00205A40); /* call 0x00205A40 */

loc_001F0511: ;
    MEM32(0x30EEAC) = eax;

loc_001F0516: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x60638D29);
    PUSH32(esp, 0x001F0525u); RECOMP_ABI_CALL(0x00205D80u, sub_00205D80); /* call 0x00205D80 */

loc_001F0525: ;
    eax = MEM32(0x30EEAC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x60345894);
    PUSH32(esp, 0x001F0535u); RECOMP_ABI_CALL(0x00205D80u, sub_00205D80); /* call 0x00205D80 */

loc_001F0535: ;
    ecx = MEM32(0x30EEAC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x88E27C45u);
    PUSH32(esp, 0x001F0546u); RECOMP_ABI_CALL(0x00205D80u, sub_00205D80); /* call 0x00205D80 */

loc_001F0546: ;
    esi = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F0550u); RECOMP_ABI_CALL(0x0021E2F0u, sub_0021E2F0); /* call 0x0021E2F0 */

loc_001F0550: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x2EE9F160);
    ecx = esi;
    PUSH32(esp, 0x001F0561u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_001F0561: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0581; /* je: equal / zero */

loc_001F0565: ;
    edx = MEM32(0x30EEAC);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001F0573u); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_001F0573: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F0579u); RECOMP_ABI_CALL(0x00205E10u, sub_00205E10); /* call 0x00205E10 */

loc_001F0579: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x643144) = eax;

loc_001F0581: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8B69AFAEu);
    ecx = esi;
    PUSH32(esp, 0x001F058Fu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_001F058F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F05AE; /* je: equal / zero */

loc_001F0593: ;
    eax = MEM32(0x30EEAC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F05A0u); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_001F05A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F05A6u); RECOMP_ABI_CALL(0x00205E10u, sub_00205E10); /* call 0x00205E10 */

loc_001F05A6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x643140) = eax;

loc_001F05AE: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F05B0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x4EDD1710);
    ecx = esi;
    PUSH32(esp, 0x001F05BDu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_001F05BD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0633; /* je: equal / zero */

loc_001F05C1: ;
    ecx = esi;
    PUSH32(esp, 0x001F05C8u); RECOMP_ABI_CALL(0x001EF0D0u, sub_001EF0D0); /* call 0x001EF0D0 */

loc_001F05C8: ;
    ecx = MEM32(0x30EEAC);
    PUSH32(esp, ecx);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001F05D8u); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_001F05D8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F05DEu); RECOMP_ABI_CALL(0x00205E10u, sub_00205E10); /* call 0x00205E10 */

loc_001F05DE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x001F05EAu); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_001F05EA: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    PUSH32(esp, 0x001F05F5u); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_001F05F5: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esi + 0x420));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x2DD8EC)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_001F0611; /* jne: not equal / not zero */

loc_001F060B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_001F0611: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    eax = edi + edi * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x642F38) = ebx;
    MEMF(eax + 0x642F3C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x642F40) = xmm0.f[0]; /* movss */

loc_001F0633: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F05B0; /* jl: less (signed <) */

loc_001F063D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8BEB2181u);
    ecx = esi;
    PUSH32(esp, 0x001F064Bu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_001F064B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F065C; /* je: equal / zero */

loc_001F064F: ;
    ecx = esi;
    PUSH32(esp, 0x001F0656u); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_001F0656: ;
    MEMF(0x6430BC) = (float)fp_top(); fp_pop(); /* fstp */

loc_001F065C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC344FA3Du);
    ecx = esi;
    PUSH32(esp, 0x001F066Au); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_001F066A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0685; /* je: equal / zero */

loc_001F066E: ;
    PUSH32(esp, 0x2FC8EC);
    ecx = esi;
    PUSH32(esp, 0x001F067Au); RECOMP_ABI_CALL(0x001EF130u, sub_001EF130); /* call 0x001EF130 */

loc_001F067A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(0x643314) = LO8(edx);

loc_001F0685: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F0687: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xD11355BFu);
    ecx = esi;
    PUSH32(esp, 0x001F0694u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_001F0694: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F070B; /* je: equal / zero */

loc_001F0698: ;
    ecx = esi;
    PUSH32(esp, 0x001F069Fu); RECOMP_ABI_CALL(0x001EF0D0u, sub_001EF0D0); /* call 0x001EF0D0 */

loc_001F069F: ;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001F06A8u); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_001F06A8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F06AEu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_001F06AE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x465E03A0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x465E03A0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F06DD; /* ja: above (unsigned >) */

loc_001F06B8: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001F06D6; /* je: equal / zero */

loc_001F06BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A1B4AB4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A1B4AB4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F06CF; /* je: equal / zero */

loc_001F06C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D1FCC9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3D1FCC9B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F06EB; /* jne: not equal / not zero */

loc_001F06C8: ;
    eax = 2;
    goto loc_001F06FB;

loc_001F06CF: ;
    eax = 5;
    goto loc_001F06FB;

loc_001F06D6: ;
    eax = 1;
    goto loc_001F06FB;

loc_001F06DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x848317F2u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x848317F2u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F06F6; /* je: equal / zero */

loc_001F06E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB26FAC7Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB26FAC7Du (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F06EF; /* je: equal / zero */

loc_001F06EB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001F06FB;

loc_001F06EF: ;
    eax = 4;
    goto loc_001F06FB;

loc_001F06F6: ;
    eax = 3;

loc_001F06FB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F070B; /* jl: less (signed <) */

loc_001F06FF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F070B; /* jge: greater or equal (signed >=) */

loc_001F0704: ;
    MEM32(edi * 4 + 0x6430C0) = eax;

loc_001F070B: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F0687; /* jl: less (signed <) */

loc_001F0715: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x807CEAABu);
    ecx = esi;
    PUSH32(esp, 0x001F0723u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_001F0723: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F074B; /* je: equal / zero */

loc_001F0727: ;
    ecx = esi;
    PUSH32(esp, 0x001F072Eu); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_001F072E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F0734u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_001F0734: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x85BEAC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001F074B; /* je: equal / zero */

loc_001F0740: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F0748u); RECOMP_ABI_CALL(0x00205D80u, sub_00205D80); /* call 0x00205D80 */

loc_001F0748: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F074B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF6209B39u);
    ecx = esi;
    PUSH32(esp, 0x001F0759u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_001F0759: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0793; /* je: equal / zero */

loc_001F075D: ;
    ecx = esi;
    PUSH32(esp, 0x001F0764u); RECOMP_ABI_CALL(0x001EF0D0u, sub_001EF0D0); /* call 0x001EF0D0 */

loc_001F0764: ;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001F076Du); RECOMP_ABI_CALL(0x001EF0D0u, sub_001EF0D0); /* call 0x001EF0D0 */

loc_001F076D: ;
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x001F0776u); RECOMP_ABI_CALL(0x001EF0D0u, sub_001EF0D0); /* call 0x001EF0D0 */

loc_001F0776: ;
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x001F077Fu); RECOMP_ABI_CALL(0x001EF0D0u, sub_001EF0D0); /* call 0x001EF0D0 */

loc_001F077F: ;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x85BEB0) = eax;

loc_001F0793: ;
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
 * sub_001F07A0
 * Original: 0x001F07A0 - 0x001F1448 (3240 bytes, 955 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F07A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F07A0: ;
    _fb = (uint32_t)(0x178) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x178;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x643158) = eax;
    MEM32(0x64315C) = eax;
    MEM32(0x643160) = eax;
    MEM32(0x643164) = eax;
    MEM32(0x643168) = eax;
    MEM32(0x64316C) = eax;
    MEM32(0x643170) = eax;
    MEM32(0x643174) = eax;
    MEM32(0x643178) = eax;
    MEM32(0x64317C) = eax;
    MEM32(0x643180) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x643184) = eax;
    MEM32(0x643198) = ecx;
    MEM32(0x643188) = eax;
    MEM32(0x64319C) = ecx;
    MEM32(0x6431A0) = ecx;
    PUSH32(esp, ebx);
    MEM32(0x64318C) = eax;
    MEM32(0x643190) = eax;
    MEM32(0x6431A4) = ecx;
    ecx = MEM32(esp + 0x180);
    PUSH32(esp, ebp);
    MEM32(0x643194) = eax;
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_001F143E; /* jl: less (signed <) */

loc_001F0845: ;
    PUSH32(esp, edi);
    goto loc_001F0850;

loc_001F0848: ;
    ebp = MEM32(esp + 0x44);
    /* nop */

loc_001F0850: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F085Au); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_001F085A: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4F464E49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4F464E49 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F11E7; /* ja: above (unsigned >) */

loc_001F0869: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001F0CF2; /* je: equal / zero */

loc_001F086F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x48504C41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x48504C41 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F0A4F; /* ja: above (unsigned >) */

loc_001F087A: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001F09C3; /* je: equal / zero */

loc_001F0880: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38544748) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x38544748 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0909; /* je: equal / zero */

loc_001F088B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x48435450) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x48435450 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F1427; /* jne: not equal / not zero */

loc_001F0896: ;
    eax = MEM32(0x6432F8);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F1427; /* jle: less or equal (signed <=) */

loc_001F08A7: ;
    edi = MEM32(esp + 0x38);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_001F08B0: ;
    MEM32(edi + -8) = ebx;
    MEM32(edi + -4) = ebx;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F08CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F08C7u); } /* indirect call */
    }

loc_001F08CA: ;
    SET_LO16(ecx, MEM16(esp + 0x18));
    MEM16(edi) = LO16(ecx);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F08E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F08E3u); } /* indirect call */
    }

loc_001F08E6: ;
    eax = MEM32(esp + 0x18);
    ecx = ZX16(LO16(eax));
    MEM16(edi + 4) = LO16(ebp);
    MEM16(edi + 2) = LO16(eax);
    eax = MEM32(0x6432F8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F08B0; /* jl: less (signed <) */

loc_001F0904: ;
    goto loc_001F1427;

loc_001F0909: ;
    edx = MEM32(0x6432FC);
    edi = edx + ebp;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_AE(_fa, _fb)) goto loc_001F1427; /* jae: above or equal (unsigned >=) */

loc_001F091E: ;
    edi = edi;

loc_001F0920: ;
    ecx = MEM32(esp + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 0x17;
    PUSH32(esp, edx);
    MEM8(esp + 0x1B) = LO8(ebx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001F0934u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0931u); } /* indirect call */
    }

loc_001F0934: ;
    eax = ZX8(MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_001F0992; /* jns: not sign (positive) */

loc_001F093D: ;
    ecx = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 0x17;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    MEM8(esp + 0x1B) = LO8(ebx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001F0958u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0955u); } /* indirect call */
    }

loc_001F0958: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F09B6; /* je: equal / zero */

loc_001F0960: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    MEM32(esp + 0x3C) = ebx;
    SET_LO8(ebx, LO8(eax));
    SET_HI8(ebx, LO8(ebx));
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebp;
    eax = ebx;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(eax, LO16(ebx));
    ebx = MEM32(esp + 0x3C);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(esp + 0x14);
    eax = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001F09B6;

loc_001F0992: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001F09B6; /* je: equal / zero */

loc_001F0995: ;
    esi = eax;

loc_001F0997: ;
    ecx = MEM32(esp + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 0x17;
    PUSH32(esp, edx);
    MEM8(esp + 0x1B) = LO8(ebx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001F09ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F09A8u); } /* indirect call */
    }

loc_001F09AB: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    MEM8(ebp) = LO8(eax);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F0997; /* jne: not equal / not zero */

loc_001F09B6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F0920; /* jb: below (unsigned <) */

loc_001F09BE: ;
    goto loc_001F1427;

loc_001F09C3: ;
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, 0x2FC9D4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001F09D3u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_001F09D3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM32(0x643154) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_001F0A04; /* jle: less or equal (signed <=) */

loc_001F09E4: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    MEM8(esp + 0x1B) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F09F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F09F5u); } /* indirect call */
    }

loc_001F09F8: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    MEM8(edi + esi) = LO8(ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F09E4; /* jl: less (signed <) */

loc_001F0A04: ;
    eax = MEM32(0x6432F8);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F1427; /* jle: less or equal (signed <=) */

loc_001F0A13: ;
    edi = MEM32(esp + 0x38);

loc_001F0A17: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(edi + 8));
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F0A23u); RECOMP_ABI_CALL(0x001EFE60u, sub_001EFE60); /* call 0x001EFE60 */

loc_001F0A23: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F0A3D; /* jle: less or equal (signed <=) */

loc_001F0A2B: ;
    MEM32(edi) = esi;
    eax = ZX8(MEM8(esi + 1));
    ecx = ZX8(MEM8(esi));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ecx + eax + 4;

loc_001F0A3D: ;
    eax = MEM32(0x6432F8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F0A17; /* jl: less (signed <) */

loc_001F0A4A: ;
    goto loc_001F1427;

loc_001F0A4F: ;
    _fb = (uint32_t)(0x4C414344) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x4C414344;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001F0AAA; /* je: equal / zero */

loc_001F0A56: ;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001F1427; /* jne: not equal / not zero */

loc_001F0A5F: ;
    eax = MEM32(0x64329C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F1427; /* jle: less or equal (signed <=) */

loc_001F0A6E: ;
    edi = edi;

loc_001F0A70: ;
    ecx = MEM32(esp + 0x34);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x7C;
    PUSH32(esp, eax);
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0A8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0A89u); } /* indirect call */
    }

loc_001F0A8C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    eax = MEM32(0x64329C);
    MEMF(esi * 4 + 0x643228) = xmm0.f[0]; /* movss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F0A70; /* jl: less (signed <) */

loc_001F0AA5: ;
    goto loc_001F1427;

loc_001F0AAA: ;
    _fa = (uint32_t)(MEM32(0x643294)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x643294), ebx (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_001F1427; /* jle: less or equal (signed <=) */

loc_001F0ABA: ;
    esi = MEM32(esp + 0x48);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F0AC1: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    MEM8(esp + 0x1B) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0AD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0AD2u); } /* indirect call */
    }

loc_001F0AD5: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    SET_LO8(ecx, MEM8(esi + -3));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + -3));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + -3) = LO8(eax);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    MEM8(esp + 0x1B) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0AFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0AFAu); } /* indirect call */
    }

loc_001F0AFD: ;
    SET_LO8(ecx, MEM8(esi + -3));
    SET_LO8(edx, MEM8(esp + 0x13));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) << 4);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + -3) = LO8(ecx);
    ecx = MEM32(esp + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 0x17;
    PUSH32(esp, edx);
    MEM8(esp + 0x1B) = LO8(ebx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001F0B23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0B20u); } /* indirect call */
    }

loc_001F0B23: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    MEM8(esi + -2) = LO8(eax);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    MEM8(esp + 0x1B) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0B3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0B3Bu); } /* indirect call */
    }

loc_001F0B3E: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    MEM8(esp + 0x1B) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0B52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0B4Fu); } /* indirect call */
    }

loc_001F0B52: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    MEM8(esp + 0x1B) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0B66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0B63u); } /* indirect call */
    }

loc_001F0B66: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    MEM8(esp + 0x1B) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0B7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0B77u); } /* indirect call */
    }

loc_001F0B7A: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    MEM8(esp + 0x1B) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0B8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0B8Bu); } /* indirect call */
    }

loc_001F0B8E: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0BA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0B9Fu); } /* indirect call */
    }

loc_001F0BA2: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x18) = ebx;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0BBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0BBCu); } /* indirect call */
    }

loc_001F0BBF: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    edi = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    MEM32(esp + 0x44) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0BD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0BD5u); } /* indirect call */
    }

loc_001F0BD8: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0BECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0BE9u); } /* indirect call */
    }

loc_001F0BEC: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    ebp = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    MEM32(esp + 0x5C) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0C05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0C02u); } /* indirect call */
    }

loc_001F0C05: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    MEM32(esp + 0x60) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0C19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0C16u); } /* indirect call */
    }

loc_001F0C19: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0C2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0C2Au); } /* indirect call */
    }

loc_001F0C2D: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    MEM32(esp + 0x70) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0C41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0C3Eu); } /* indirect call */
    }

loc_001F0C41: ;
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x58);
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x68);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    eax = edi;
    if (CMP_G(_fas, _fbs)) eax = ebp; /* cmovg */
    ebp = MEM32(esp + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) eax = edx; /* cmovg */
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) eax = ecx; /* cmovg */
    eax = eax & 0xFFFFF800u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) ebp = edx; /* cmovg */
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x54);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) ebp = edx; /* cmovg */
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) ebp = edx; /* cmovg */
    edx = MEM32(esp + 0x50);
    ebp = ebp & 0xFFFFF800u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(esi) = LO8(edx);
    edx = edi;
    edi = (uint32_t)(int32_t)SMEM16(esp + 0x54);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(esi + -1) = LO8(edx);
    edx = edi;
    edi = (uint32_t)(int32_t)SMEM16(esp + 0x58);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(esi + 2) = LO8(edx);
    edx = edi;
    edi = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(esi + 1) = LO8(edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    edx = edi;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(esi + 4) = LO8(edx);
    MEM8(esi + 3) = LO8(ecx);
    ecx = MEM32(0x643294);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F0AC1; /* jl: less (signed <) */

loc_001F0CED: ;
    goto loc_001F1427;

loc_001F0CF2: ;
    ecx = MEM32(esp + 0x34);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001F0D0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0D08u); } /* indirect call */
    }

loc_001F0D0B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    ecx = MEM32(esp + 0x34);
    MEMF(0x643284) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001F0D32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0D2Fu); } /* indirect call */
    }

loc_001F0D32: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    ecx = MEM32(esp + 0x34);
    MEMF(0x643290) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001F0D59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0D56u); } /* indirect call */
    }

loc_001F0D59: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    ecx = MEM32(esp + 0x34);
    MEMF(0x64328C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    edx = esp + 0x70;
    PUSH32(esp, edx);
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001F0D80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0D7Du); } /* indirect call */
    }

loc_001F0D80: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    ecx = MEM32(esp + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    edx = esp + 0x18;
    MEMF(0x643288) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001F0DA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0D9Fu); } /* indirect call */
    }

loc_001F0DA2: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    ecx = MEM32(esp + 0x34);
    MEM32(0x643310) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0DC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0DBDu); } /* indirect call */
    }

loc_001F0DC0: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    MEM32(0x643304) = ecx;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0DDFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0DDCu); } /* indirect call */
    }

loc_001F0DDF: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    MEM32(0x643300) = ecx;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0DFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0DFBu); } /* indirect call */
    }

loc_001F0DFE: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    MEM32(0x64329C) = ecx;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    MEM32(esp + 0x14) = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0E1Au); } /* indirect call */
    }

loc_001F0E1D: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    MEM32(0x643298) = ecx;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0E3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0E39u); } /* indirect call */
    }

loc_001F0E3C: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(0x643294) = ecx;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001F0E62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0E5Fu); } /* indirect call */
    }

loc_001F0E62: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F0ED8; /* jl: less (signed <) */

loc_001F0E6D: ;
    ecx = MEM32(esp + 0x34);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0E86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0E83u); } /* indirect call */
    }

loc_001F0E86: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x84;
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0EB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0EAEu); } /* indirect call */
    }

loc_001F0EB1: ;
    ecx = MEM32(esp + 0x34);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x80;
    PUSH32(esp, eax);
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F0ED0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F0ECDu); } /* indirect call */
    }

loc_001F0ED0: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    goto loc_001F0EE1;

loc_001F0ED8: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */

loc_001F0EE1: ;
    ecx = MEM32(0x643310);
    edi = MEM32(0x643304);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ebp = MEM32(0x643300);
    esi = eax;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    MEM32(0x6432FC) = edx;
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    MEM32(0x6432F8) = edx;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    MEM32(0x643308) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    MEM32(0x6432F0) = eax;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(0x6432EC) = eax;
    MEM32(0x64330C) = esi;
    MEM32(0x6432F4) = edx;
    eax = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F0F57; /* je: equal / zero */

loc_001F0F49: ;
    /* nop */

loc_001F0F50: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0F50; /* jne: not equal / not zero */

loc_001F0F57: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(0x6432E8) = edi;
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001F0F6D; /* je: equal / zero */

loc_001F0F66: ;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0F66; /* jne: not equal / not zero */

loc_001F0F6D: ;
    edi = MEM32(0x643308);
    MEM32(0x6432E4) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0F87; /* je: equal / zero */

loc_001F0F7F: ;
    /* nop */

loc_001F0F80: ;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0F80; /* jne: not equal / not zero */

loc_001F0F87: ;
    edi = MEM32(0x643304);
    MEM32(0x6432E0) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0FA7; /* je: equal / zero */

loc_001F0F99: ;
    /* nop */

loc_001F0FA0: ;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0FA0; /* jne: not equal / not zero */

loc_001F0FA7: ;
    MEM32(0x6432DC) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    edi = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_001F0FBC; /* je: equal / zero */

loc_001F0FB5: ;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0FB5; /* jne: not equal / not zero */

loc_001F0FBC: ;
    edi = MEM32(0x6432FC);
    MEM32(0x6432D8) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0FD7; /* je: equal / zero */

loc_001F0FCE: ;
    edi = edi;

loc_001F0FD0: ;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0FD0; /* jne: not equal / not zero */

loc_001F0FD7: ;
    edi = MEM32(0x6432F8);
    MEM32(0x6432D4) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0FF7; /* je: equal / zero */

loc_001F0FE9: ;
    /* nop */

loc_001F0FF0: ;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0FF0; /* jne: not equal / not zero */

loc_001F0FF7: ;
    MEM32(0x6432D0) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    edi = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F100C; /* je: equal / zero */

loc_001F1005: ;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F1005; /* jne: not equal / not zero */

loc_001F100C: ;
    MEM32(0x6432CC) = eax;
    eax = MEM32(0x6432EC);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x40) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001F102D; /* je: equal / zero */

loc_001F1021: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F1021; /* jne: not equal / not zero */

loc_001F1028: ;
    eax = MEM32(0x6432EC);

loc_001F102D: ;
    xmm1 = XMM_SCALAR(MEMF(0x643284)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x6432C0) = esi;
    esi = MEM32(0x643308);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x6432BC) = esi;
    esi = MEM32(0x643304);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x6432B8) = esi;
    esi = MEM32(0x6432FC);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(0x643280) = xmm0.f[0]; /* movss */
    MEM32(0x6432B0) = esi;
    esi = MEM32(0x6432F8);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x6432C8) = edi;
    edi = ecx + -1;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x60); /* subss */
    PUSH32(esp, 0x2FC9B4);
    MEM32(0x6432AC) = esi;
    ecx = edx * 4;
    esi = edx + -1;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    PUSH32(esp, ebx);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    PUSH32(esp, ecx);
    MEM32(0x6432C4) = edi;
    MEM32(0x6432B4) = ebp;
    MEM32(0x6432A8) = esi;
    MEM32(0x6432A4) = eax;
    MEMF(0x64327C) = xmm3.f[0]; /* movss */
    MEMF(0x643278) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001F10EDu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_001F10ED: ;
    edx = MEM32(0x6432F4);
    esi = eax;
    PUSH32(esp, 0x2FC994);
    eax = edx * 4;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esp + 0x64) = esi;
    PUSH32(esp, 0x001F110Cu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_001F110C: ;
    ebp = eax;
    eax = MEM32(0x643310);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, 0x2FC974);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM32(esp + 0x64) = ebp;
    PUSH32(esp, 0x001F1128u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_001F1128: ;
    MEM32(esp + 0x68) = eax;
    eax = MEM32(0x643310);
    eax = (uint32_t)((int32_t)eax * (int32_t)eax);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0x2FC954);
    edx = eax * 4;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(0x6432A0) = eax;
    PUSH32(esp, 0x001F1155u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_001F1155: ;
    edi = eax;
    eax = MEM32(0x6432F8);
    PUSH32(esp, 0x2FC934);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F116Bu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_001F116B: ;
    MEM32(esp + 0x74) = eax;
    eax = MEM32(0x643294);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1195; /* je: equal / zero */

loc_001F117B: ;
    PUSH32(esp, 0x2FC914);
    ecx = eax * 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F118Eu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_001F118E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x48) = eax;

loc_001F1195: ;
    ecx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x48);
    MEM32(0x64326C) = ecx;
    ecx = MEM32(0x6432A0);
    MEM32(0x64314C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(0x643148) = edx;
    MEM32(0x643274) = esi;
    MEM32(0x643270) = ebp;
    MEM32(0x643268) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_001F1427; /* jle: less or equal (signed <=) */

loc_001F11D4: ;
    MEM32(edi + eax * 4) = ebx;
    ecx = MEM32(0x6432A0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F11D4; /* jl: less (signed <) */

loc_001F11E2: ;
    goto loc_001F1427;

loc_001F11E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x53495841) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x53495841 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F137D; /* ja: above (unsigned >) */

loc_001F11F2: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001F133E; /* je: equal / zero */

loc_001F11F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50584548) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50584548 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1295; /* je: equal / zero */

loc_001F1203: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x524C4F43) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x524C4F43 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F1427; /* jne: not equal / not zero */

loc_001F120E: ;
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, 0x2FC8F4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001F121Eu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_001F121E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM32(0x643150) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_001F1250; /* jle: less or equal (signed <=) */

loc_001F122F: ;
    /* nop */

loc_001F1230: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    MEM8(esp + 0x1B) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F1244u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F1241u); } /* indirect call */
    }

loc_001F1244: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    MEM8(edi + esi) = LO8(ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F1230; /* jl: less (signed <) */

loc_001F1250: ;
    edx = MEM32(0x6432F8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    eax = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_001F1427; /* jle: less or equal (signed <=) */

loc_001F1262: ;
    edx = MEM32(esp + 0x38);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_001F1270: ;
    MEM32(edx) = eax;
    esi = ZX8(MEM8(eax + 1));
    edi = ZX8(MEM8(eax));
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + esi + 4;
    esi = MEM32(0x6432F8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F1270; /* jl: less (signed <) */

loc_001F1290: ;
    goto loc_001F1427;

loc_001F1295: ;
    eax = MEM32(0x6432F4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F1427; /* jle: less or equal (signed <=) */

loc_001F12A4: ;
    eax = MEM32(esp + 0x40);
    esi = MEM32(esp + 0x4C);
    edi = eax + 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001F12B1: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F12C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F12C2u); } /* indirect call */
    }

loc_001F12C5: ;
    SET_LO16(ecx, MEM16(esp + 0x14));
    edx = MEM32(esp + 0x4C);
    MEM16(edx + ebp * 4) = LO16(ecx);
    ecx = MEM32(esp + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001F12E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F12E3u); } /* indirect call */
    }

loc_001F12E6: ;
    SET_LO16(eax, MEM16(esp + 0x14));
    MEM16(esi + edi) = LO16(eax);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F1303u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F1300u); } /* indirect call */
    }

loc_001F1303: ;
    SET_LO16(ecx, MEM16(esp + 0x14));
    MEM16(edi + -2) = LO16(ecx);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F1320u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F131Du); } /* indirect call */
    }

loc_001F1320: ;
    SET_LO16(ecx, MEM16(esp + 0x14));
    MEM16(edi) = LO16(ecx);
    eax = MEM32(0x6432F4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F12B1; /* jl: less (signed <) */

loc_001F1339: ;
    goto loc_001F1427;

loc_001F133E: ;
    eax = MEM32(0x64329C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F1427; /* jle: less or equal (signed <=) */

loc_001F134D: ;
    /* nop */

loc_001F1350: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    MEM8(esp + 0x1B) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F1364u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F1361u); } /* indirect call */
    }

loc_001F1364: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    eax = MEM32(0x64329C);
    MEM8(esi + 0x643198) = LO8(ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F1350; /* jl: less (signed <) */

loc_001F1378: ;
    goto loc_001F1427;

loc_001F137D: ;
    _fb = (uint32_t)(0x58455444) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x58455444;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001F13D9; /* je: equal / zero */

loc_001F1384: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001F1427; /* jne: not equal / not zero */

loc_001F138D: ;
    eax = MEM32(0x64329C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F1427; /* jle: less or equal (signed <=) */

loc_001F139C: ;
    /* nop */

loc_001F13A0: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, 0x100);
    edx = esp + 0x8C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F13B6u); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_001F13B6: ;
    eax = esp + 0x88;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F13C3u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_001F13C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 4 + 0x6431E8) = eax;
    eax = MEM32(0x64329C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F13A0; /* jl: less (signed <) */

loc_001F13D7: ;
    goto loc_001F1427;

loc_001F13D9: ;
    eax = MEM32(0x643298);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F1427; /* jle: less or equal (signed <=) */

loc_001F13E4: ;
    goto loc_001F13F0;

    /* nop */
    /* nop */

loc_001F13F0: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x8C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, 0x001F1406u); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_001F1406: ;
    edx = esp + 0x88;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F1413u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_001F1413: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 4 + 0x6431A8) = eax;
    eax = MEM32(0x643298);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F13F0; /* jl: less (signed <) */

loc_001F1427: ;
    ecx = MEM32(esp + 0x18C);
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F0848; /* jge: greater or equal (signed >=) */

loc_001F143D: ;
    POP32(esp, edi);

loc_001F143E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x178) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x178;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001F1450
 * Original: 0x001F1450 - 0x001F152B (219 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1450(void)
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

loc_001F1450: ;
    PUSH32(esp, ecx);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DD8EC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001F1467; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001F1464: ;
    xmm1 = xmm0; /* movaps */

loc_001F1467: ;
    xmm0 = XMM_SCALAR(MEMF(0x643280)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x64327C)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 8); /* addss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm3.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm3 = XMM_SCALAR(MEMF(0x643278)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0xC); /* addss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, edi);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    edi = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm3.f[0], g_mxcsr, 1); /* cvttss2si */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001F14C8; /* jge: greater or equal (signed >=) */

loc_001F14C3: ;
    edi = 1;

loc_001F14C8: ;
    esi = edi;
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esp + 0xC) = esi;
    if (CMP_G(_fas, _fbs)) goto loc_001F1526; /* jg: greater (signed >) */

loc_001F14D6: ;
    PUSH32(esp, ebp);

loc_001F14D7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001F1520; /* jg: greater (signed >) */

loc_001F14DB: ;
    ebp = ebx;
    eax = edi;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    MEM32(esp + 0x1C) = eax;
    /* nop */

loc_001F14F0: ;
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F1517; /* jge: greater or equal (signed >=) */

loc_001F14FB: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x18);
    ecx = esi + eax;
    PUSH32(esp, ecx);
    eax = ebx + edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F1510u); RECOMP_ABI_CALL(0x001F0350u, sub_001F0350); /* call 0x001F0350 */

loc_001F1510: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F1517: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F14F0; /* jle: less or equal (signed <=) */

loc_001F151C: ;
    esi = MEM32(esp + 0x10);

loc_001F1520: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F14D7; /* jle: less or equal (signed <=) */

loc_001F1525: ;
    POP32(esp, ebp);

loc_001F1526: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F1530
 * Original: 0x001F1530 - 0x001F164B (283 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1530(void)
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

loc_001F1530: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x643284)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x643280)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] + MEMF(0x64327C); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, esi);
    esi = (uint32_t)recomp_cvt_si32((double)xmm3.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] + MEMF(0x643278); /* addss */
    PUSH32(esp, edi);
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    edi = (uint32_t)recomp_cvt_si32((double)xmm3.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F1599u); RECOMP_ABI_CALL(0x001F03C0u, sub_001F03C0); /* call 0x001F03C0 */

loc_001F1599: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(0x643284)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x643280)); /* movss */
    xmm1.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x64327C); /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm4.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - MEMF(0x643278); /* subss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* comiss */
    POP32(esp, edi);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001F1630; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC08C)) */

loc_001F160A: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F1630: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp)); /* fsub dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp)); /* fsub dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp)); /* fadd dword ptr [esp] */
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
 * sub_001F1650
 * Original: 0x001F1650 - 0x001F16B8 (104 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1650(void)
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

loc_001F1650: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F1663u); RECOMP_ABI_CALL(0x001F1530u, sub_001F1530); /* call 0x001F1530 */

loc_001F1663: ;
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001F1691u); RECOMP_ABI_CALL(0x00201C70u, sub_00201C70); /* call 0x00201C70 */

loc_001F1691: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F16A5; /* je: equal / zero */

loc_001F1698: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    SET_LO8(ebx, 1);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_001F16A5: ;
    eax = MEM32(esp + 0x20);
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F16B3; /* je: equal / zero */

loc_001F16B1: ;
    MEM8(eax) = LO8(ebx);

loc_001F16B3: ;
    POP32(esp, ebx);
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
 * sub_001F16C0
 * Original: 0x001F16C0 - 0x001F180F (335 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F16C0(void)
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

loc_001F16C0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC880); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = MEM32(esp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F16E5u); RECOMP_ABI_CALL(0x001F1530u, sub_001F1530); /* call 0x001F1530 */

loc_001F16E5: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC880); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F1714u); RECOMP_ABI_CALL(0x001F1530u, sub_001F1530); /* call 0x001F1530 */

loc_001F1714: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x2C); /* subss */
    esi = MEM32(esp + 0x48);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC880); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001F1760u); RECOMP_ABI_CALL(0x001F1530u, sub_001F1530); /* call 0x001F1530 */

loc_001F1760: ;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC880); /* addss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x50);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001F1789u); RECOMP_ABI_CALL(0x001F1530u, sub_001F1530); /* call 0x001F1530 */

loc_001F1789: ;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x44); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(esp + 0x40); /* subss */
    esi = MEM32(esp + 0x50);
    xmm6 = xmm1; /* movaps */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    ecx = esp + 0x40;
    MEMF(esp + 0x40) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, esi);
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x001F1805u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_001F1805: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001F1810
 * Original: 0x001F1810 - 0x001F1852 (66 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1810(void)
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

loc_001F1810: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    ecx = eax;
    esi = MEM32(ecx);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    ecx = MEM32(eax + 8);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F1833u); RECOMP_ABI_CALL(0x001F1530u, sub_001F1530); /* call 0x001F1530 */

loc_001F1833: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x14);
    ecx = eax;
    MEM32(ecx) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_001F1860
 * Original: 0x001F1860 - 0x001F188E (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1860: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2FC9F4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2D08);
    esi = ecx;
    PUSH32(esp, 0x001F1874u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_001F1874: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1887; /* je: equal / zero */

loc_001F187B: ;
    ecx = eax;
    PUSH32(esp, 0x001F1882u); RECOMP_ABI_CALL(0x001F00E0u, sub_001F00E0); /* call 0x001F00E0 */

loc_001F1882: ;
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F1887: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F1890
 * Original: 0x001F1890 - 0x001F196C (220 bytes, 68 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1890: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(edi + 0x9C));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F18FD; /* jbe: below or equal (unsigned <=) */

loc_001F18A3: ;
    ecx = edi + 0xC;

loc_001F18A6: ;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 0 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F18B7; /* jge: greater or equal (signed >=) */

loc_001F18AC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F18A6; /* jl: less (signed <) */

loc_001F18B5: ;
    goto loc_001F18FD;

loc_001F18B7: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001F18C0: ;
    eax = ZX8(MEM8(edi + 0x9C));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F18ED; /* jge: greater or equal (signed >=) */

loc_001F18CB: ;
    ecx = ZX8(MEM8(esi + edi + 0x9F));
    edx = MEM32(ecx * 4 + 0x6431E8);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    ecx = 0x7934C8;
    PUSH32(esp, 0x001F18E7u); RECOMP_ABI_CALL(0x001F7A70u, sub_001F7A70); /* call 0x001F7A70 */

loc_001F18E7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F18C0; /* jl: less (signed <) */

loc_001F18ED: ;
    eax = ZX8(MEM8(edi + 0x9C));
    eax = ZX8(MEM8(eax + edi + 0x9E));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F18FD: ;
    SET_LO8(ecx, MEM8(edi + 0x9D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F193C; /* je: equal / zero */

loc_001F1907: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F193C; /* jge: greater or equal (signed >=) */

loc_001F190C: ;
    PUSH32(esp, ebx);
    esi = eax * 4 + 0x6431E8;
    ebx = edi + eax * 2 + 0xC;

loc_001F1918: ;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F192D; /* jle: less or equal (signed <=) */

loc_001F191E: ;
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = 0x7934C8;
    PUSH32(esp, 0x001F192Du); RECOMP_ABI_CALL(0x001F7A70u, sub_001F7A70); /* call 0x001F7A70 */

loc_001F192D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x643228) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x643228 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F1918; /* jl: less (signed <) */

loc_001F193B: ;
    POP32(esp, ebx);

loc_001F193C: ;
    esi = 0x6431A8;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F1944: ;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), 0xFFFFFFFFu (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1959; /* je: equal / zero */

loc_001F194A: ;
    edx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    ecx = 0x7934C8;
    PUSH32(esp, 0x001F1959u); RECOMP_ABI_CALL(0x001F7A70u, sub_001F7A70); /* call 0x001F7A70 */

loc_001F1959: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6431E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6431E8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F1944; /* jl: less (signed <) */

loc_001F1967: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F1970
 * Original: 0x001F1970 - 0x001F1A4C (220 bytes, 68 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1970: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(edi + 0x9C));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F19DD; /* jbe: below or equal (unsigned <=) */

loc_001F1983: ;
    ecx = edi + 0xC;

loc_001F1986: ;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 0 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F1997; /* jge: greater or equal (signed >=) */

loc_001F198C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F1986; /* jl: less (signed <) */

loc_001F1995: ;
    goto loc_001F19DD;

loc_001F1997: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001F19A0: ;
    eax = ZX8(MEM8(edi + 0x9C));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F19CD; /* jge: greater or equal (signed >=) */

loc_001F19AB: ;
    ecx = ZX8(MEM8(esi + edi + 0x9F));
    edx = MEM32(ecx * 4 + 0x6431E8);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    ecx = 0x7934C8;
    PUSH32(esp, 0x001F19C7u); RECOMP_ABI_CALL(0x001F7AF0u, sub_001F7AF0); /* call 0x001F7AF0 */

loc_001F19C7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F19A0; /* jl: less (signed <) */

loc_001F19CD: ;
    eax = ZX8(MEM8(edi + 0x9C));
    eax = ZX8(MEM8(eax + edi + 0x9E));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F19DD: ;
    SET_LO8(ecx, MEM8(edi + 0x9D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1A1C; /* je: equal / zero */

loc_001F19E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F1A1C; /* jge: greater or equal (signed >=) */

loc_001F19EC: ;
    PUSH32(esp, ebx);
    esi = eax * 4 + 0x6431E8;
    ebx = edi + eax * 2 + 0xC;

loc_001F19F8: ;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F1A0D; /* jle: less or equal (signed <=) */

loc_001F19FE: ;
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = 0x7934C8;
    PUSH32(esp, 0x001F1A0Du); RECOMP_ABI_CALL(0x001F7A70u, sub_001F7A70); /* call 0x001F7A70 */

loc_001F1A0D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x643228) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x643228 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F19F8; /* jl: less (signed <) */

loc_001F1A1B: ;
    POP32(esp, ebx);

loc_001F1A1C: ;
    esi = 0x6431A8;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F1A24: ;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), 0xFFFFFFFFu (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1A39; /* je: equal / zero */

loc_001F1A2A: ;
    edx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    ecx = 0x7934C8;
    PUSH32(esp, 0x001F1A39u); RECOMP_ABI_CALL(0x001F7AF0u, sub_001F7AF0); /* call 0x001F7AF0 */

loc_001F1A39: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6431E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6431E8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F1A24; /* jl: less (signed <) */

loc_001F1A47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
