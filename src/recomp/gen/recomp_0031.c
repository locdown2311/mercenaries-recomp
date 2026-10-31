/**
 * Mercenaries - Recompiled code chunk 31
 * Functions: 250 (0x0018F510 - 0x001989C0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0018F510
 * Original: 0x0018F510 - 0x0018F54D (61 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F510: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    edx = eax + 1;
    goto loc_0018F520;

    /* nop */

loc_0018F520: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018F520; /* jne: not equal / not zero */

loc_0018F527: ;
    ecx = MEM32(0x4409AC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0018F537u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F535u); } /* indirect call */
    }

loc_0018F537: ;
    esi = eax;
    ecx = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0018F540: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018F540; /* jne: not equal / not zero */

loc_0018F54A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018F550
 * Original: 0x0018F550 - 0x0018F56A (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F550: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = ecx;
    esi = MEM32(eax + 4);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    PUSH32(esp, 0x11);
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018F568u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F565u); } /* indirect call */
    }

loc_0018F568: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018F570
 * Original: 0x0018F570 - 0x0018F59A (42 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F570(void)
{

loc_0018F570: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x18) = edx;
    ecx = MEM32(ecx + 0x24);
    MEM32(eax + 0x1C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018F5A0
 * Original: 0x0018F5A0 - 0x0018F5C6 (38 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F5A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F5A0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018F5B6u); RECOMP_ABI_CALL(0x0018F460u, sub_0018F460); /* call 0x0018F460 */

loc_0018F5B6: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018F5BFu); RECOMP_ABI_CALL(0x0018F480u, sub_0018F480); /* call 0x0018F480 */

loc_0018F5BF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018F5D0
 * Original: 0x0018F5D0 - 0x0018F606 (54 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F5D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018F5D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F5E3; /* je: equal / zero */

loc_0018F5DA: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0018F5E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F5DEu); } /* indirect call */
    }

loc_0018F5E1: ;
    goto loc_0018F5E5;

loc_0018F5E3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018F5E5: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018F5FA; /* jge: greater or equal (signed >=) */

loc_0018F5ED: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

loc_0018F5FA: ;
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + edx * 4);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018F610
 * Original: 0x0018F610 - 0x0018F633 (35 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F610: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F62A; /* je: equal / zero */

loc_0018F61A: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0018F621u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F61Eu); } /* indirect call */
    }

loc_0018F621: ;
    ecx = eax;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018F62A: ;
    eax = MEM32(esi + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018F640
 * Original: 0x0018F640 - 0x0018F67A (58 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018F640: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F655; /* je: equal / zero */

loc_0018F64A: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0018F651u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F64Eu); } /* indirect call */
    }

loc_0018F651: ;
    ecx = eax;
    goto loc_0018F657;

loc_0018F655: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018F657: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018F66C; /* jge: greater or equal (signed >=) */

loc_0018F65F: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x20)); return; /* indirect tail jmp */

loc_0018F66C: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 0x20);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018F680
 * Original: 0x0018F680 - 0x0018F6A3 (35 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F680: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F69A; /* je: equal / zero */

loc_0018F68A: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0018F691u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F68Eu); } /* indirect call */
    }

loc_0018F691: ;
    ecx = eax;
    eax = MEM32(esi + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018F69A: ;
    eax = MEM32(esi + 0x24);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018F6B0
 * Original: 0x0018F6B0 - 0x0018F6F4 (68 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F6B0(void)
{

loc_0018F6B0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2F650C;
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x24) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018F700
 * Original: 0x0018F700 - 0x0018F731 (49 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F700: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0018F70Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F709u); } /* indirect call */
    }

loc_0018F70C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F71B; /* je: equal / zero */

loc_0018F710: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F726; /* je: equal / zero */

loc_0018F714: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018F710; /* jne: not equal / not zero */

loc_0018F71B: ;
    eax = MEM32(esp + 8);
    MEM8(eax) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0018F726: ;
    eax = MEM32(esp + 8);
    MEM8(eax) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018F740
 * Original: 0x0018F740 - 0x0018F789 (73 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F740(void)
{

loc_0018F740: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x20);
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2F650C;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    esp += 36; return; /* ret 32 */

}

/**
 * sub_0018F790
 * Original: 0x0018F790 - 0x0018F7B8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F790: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018F798u); RECOMP_ABI_CALL(0x001CC0E0u, sub_001CC0E0); /* call 0x001CC0E0 */

loc_0018F798: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018F7B2; /* je: equal / zero */

loc_0018F79F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x19);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0018F7B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F7AFu); } /* indirect call */
    }

loc_0018F7B2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018F7C0
 * Original: 0x0018F7C0 - 0x0018F7D8 (24 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F7C0(void)
{

loc_0018F7C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0018F7D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F7CFu); } /* indirect call */
    }

loc_0018F7D2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018F7E0
 * Original: 0x0018F7E0 - 0x0018F822 (66 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018F7E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0018F80C; /* je: equal / zero */

loc_0018F7F0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0018F7F9u); RECOMP_ABI_CALL(0x0018F480u, sub_0018F480); /* call 0x0018F480 */

loc_0018F7F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 8); PUSH32(esp, 0x0018F803u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F800u); } /* indirect call */
    }

loc_0018F803: ;
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018F80C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    PUSH32(esp, 0x2F6534);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0018F81Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F817u); } /* indirect call */
    }

loc_0018F81A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018F830
 * Original: 0x0018F830 - 0x0018F87F (79 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F830(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F830: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2DEA44);
    esi = ecx;
    ecx = esp + 0x14;
    PUSH32(esp, 0x400);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018F854u); RECOMP_ABI_CALL(0x0018F3A0u, sub_0018F3A0); /* call 0x0018F3A0 */

loc_0018F854: ;
    edi = MEM32(esi + 8);
    ebx = MEM32(edi);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018F863u); RECOMP_ABI_CALL(0x0018F480u, sub_0018F480); /* call 0x0018F480 */

loc_0018F863: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 8); PUSH32(esp, 0x0018F871u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F86Eu); } /* indirect call */
    }

loc_0018F871: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018F880
 * Original: 0x0018F880 - 0x0018F8CF (79 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F880: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2F653C);
    esi = ecx;
    ecx = esp + 0x14;
    PUSH32(esp, 0x400);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018F8A4u); RECOMP_ABI_CALL(0x0018F3A0u, sub_0018F3A0); /* call 0x0018F3A0 */

loc_0018F8A4: ;
    edi = MEM32(esi + 8);
    ebx = MEM32(edi);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018F8B3u); RECOMP_ABI_CALL(0x0018F480u, sub_0018F480); /* call 0x0018F480 */

loc_0018F8B3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 8); PUSH32(esp, 0x0018F8C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F8BEu); } /* indirect call */
    }

loc_0018F8C1: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018F8D0
 * Original: 0x0018F8D0 - 0x0018F921 (81 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F8D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F8D0: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x414;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x400);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018F8F4u); RECOMP_ABI_CALL(0x0018F390u, sub_0018F390); /* call 0x0018F390 */

loc_0018F8F4: ;
    eax = MEM32(esp + 0x41C);
    esi = MEM32(eax + 8);
    edi = MEM32(esi);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018F90Au); RECOMP_ABI_CALL(0x0018F480u, sub_0018F480); /* call 0x0018F480 */

loc_0018F90A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 8); PUSH32(esp, 0x0018F918u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F915u); } /* indirect call */
    }

loc_0018F918: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018F930
 * Original: 0x0018F930 - 0x0018F938 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018F930: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_0018F940
 * Original: 0x0018F940 - 0x0018F951 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F940(void)
{

loc_0018F940: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0018F94Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F94Au); } /* indirect call */
    }

loc_0018F94D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018F960
 * Original: 0x0018F960 - 0x0018F976 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F960: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x2F6540;
    MEM32(eax + 8) = ecx;
    MEM16(ecx + 6) = MEM16(ecx + 6) + 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018F980
 * Original: 0x0018F980 - 0x0018F9F8 (120 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F980: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244133);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2F6540;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x1C);
    MEM32(esp + 0x1C) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0018F9BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F9B9u); } /* indirect call */
    }

loc_0018F9BC: ;
    MEM16(eax + 4) = 0x1C;
    MEM32(esp + 8) = eax;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM8(esp + 0x20) = 1;
    PUSH32(esp, 0x0018F9E1u); RECOMP_ABI_CALL(0x00190120u, sub_00190120); /* call 0x00190120 */

loc_0018F9E1: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 8) = eax;
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0018FA00
 * Original: 0x0018FA00 - 0x0018FA59 (89 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018FA00: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244148);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2F6540;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0018FA43; /* je: equal / zero */

loc_0018FA32: ;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018FA43; /* jne: not equal / not zero */

loc_0018FA3D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0018FA43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018FA41u); } /* indirect call */
    }

loc_0018FA43: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x2DC684;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018FA60
 * Original: 0x0018FA60 - 0x0018FA88 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018FA60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018FA68u); RECOMP_ABI_CALL(0x0018FA00u, sub_0018FA00); /* call 0x0018FA00 */

loc_0018FA68: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018FA82; /* je: equal / zero */

loc_0018FA6F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x15);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0018FA82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018FA7Fu); } /* indirect call */
    }

loc_0018FA82: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018FA90
 * Original: 0x0018FA90 - 0x0018FA98 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FA90(void)
{

loc_0018FA90: ;
    eax = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018FAA0
 * Original: 0x0018FAA0 - 0x0018FB90 (240 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018FAA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    edx = esp + 7;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0018FAB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018FAAEu); } /* indirect call */
    }

loc_0018FAB1: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018FABE; /* jne: not equal / not zero */

loc_0018FAB6: ;
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0018FABE: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0018FAD2; /* jge: greater or equal (signed >=) */

loc_0018FACA: ;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = edx;
    goto loc_0018FB4B;

loc_0018FAD2: ;
    ebp = MEM32(esi + 0x10);
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018FAEF; /* jle: less or equal (signed <=) */

loc_0018FADE: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    goto loc_0018FB4B;

loc_0018FAEF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018FB4B; /* jle: less or equal (signed <=) */

loc_0018FAF3: ;
    ebx = ebp;
    ebx = ebx & 0x800001FFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0018FB05; /* jns: not sign (positive) */

loc_0018FAFD: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 0xFFFFFE00u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0018FB05: ;
    if ((ebx == 0)) goto loc_0018FB10; /* je: equal / zero */

loc_0018FB07: ;
    edi = 0x200;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0018FB12;

loc_0018FB10: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018FB12: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018FB21u); RECOMP_ABI_CALL(0x0018F4D0u, sub_0018F4D0); /* call 0x0018F4D0 */

loc_0018FB21: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((9) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 9;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018FB4B: ;
    edi = MEM32(esi + 0x18);
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018FB7B; /* jle: less or equal (signed <=) */

loc_0018FB57: ;
    eax = MEM32(esi + 0x10);
    ebx = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018FB69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018FB66u); } /* indirect call */
    }

loc_0018FB69: ;
    edx = MEM32(esi + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x14) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0018FB83; /* jne: not equal / not zero */

loc_0018FB77: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018FB57; /* jl: less (signed <) */

loc_0018FB7B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0018FB83: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018FB90
 * Original: 0x0018FB90 - 0x0018FC16 (134 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018FB90: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    esi = MEM32(edi + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018FBE3; /* jle: less or equal (signed <=) */

loc_0018FBAA: ;
    /* nop */

loc_0018FBB0: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0018FBBDu); RECOMP_ABI_CALL(0x0018F4B0u, sub_0018F4B0); /* call 0x0018F4B0 */

loc_0018FBBD: ;
    edx = MEM32(edi + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + 0x10) = edx;
    PUSH32(esp, 0x0018FBD3u); RECOMP_ABI_CALL(0x0018FAA0u, sub_0018FAA0); /* call 0x0018FAA0 */

loc_0018FBD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018FC09; /* jne: not equal / not zero */

loc_0018FBD7: ;
    eax = MEM32(edi + 0x10);
    esi = MEM32(edi + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018FBB0; /* jg: greater (signed >) */

loc_0018FBE3: ;
    edx = MEM32(edi + 0xC);
    eax = MEM32(edi + 0x10);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0018FBF3u); RECOMP_ABI_CALL(0x0018F4B0u, sub_0018F4B0); /* call 0x0018F4B0 */

loc_0018FBF3: ;
    eax = MEM32(edi + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x10) = eax;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0018FC09: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018FC20
 * Original: 0x0018FC20 - 0x0018FC66 (70 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018FC20: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, edi);
    edi = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0018FC4C; /* jle: less or equal (signed <=) */

loc_0018FC35: ;
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0018FC3Eu); RECOMP_ABI_CALL(0x0018FAA0u, sub_0018FAA0); /* call 0x0018FAA0 */

loc_0018FC3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018FC5C; /* jne: not equal / not zero */

loc_0018FC42: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018FC35; /* jg: greater (signed >) */

loc_0018FC4C: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x10) = eax;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018FC5C: ;
    eax = ebx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018FC70
 * Original: 0x0018FC70 - 0x0018FCA3 (51 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018FC70: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018FC97; /* jne: not equal / not zero */

loc_0018FC79: ;
    ecx = MEM32(ecx + 8);
    edx = MEM32(ecx);
    eax = esp + 3;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018FC86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018FC83u); } /* indirect call */
    }

loc_0018FC86: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018FC97; /* jne: not equal / not zero */

loc_0018FC8B: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax) = LO8(ecx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0018FC97: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, 1);
    MEM8(eax) = LO8(ecx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018FCB0
 * Original: 0x0018FCB0 - 0x0018FCC1 (17 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FCB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018FCB0: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 4);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(eax) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018FCD0
 * Original: 0x0018FCD0 - 0x0018FCEE (30 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FCD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018FCD0: ;
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    MEM32(ecx + 0x1C) = eax;
    eax = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(edx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    MEM32(ecx + 0x20) = eax;
    POP32(esp, esi);
    eax = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018FCF0
 * Original: 0x0018FCF0 - 0x0018FD03 (19 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FCF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018FCF0: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018FCFD; /* jl: less (signed <) */

loc_0018FCF7: ;
    MEM32(ecx + 0x10) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0018FCFD: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0018FD10
 * Original: 0x0018FD10 - 0x0018FD41 (49 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FD10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018FD10: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018FD35; /* je: equal / zero */

loc_0018FD18: ;
    ecx = eax;
    eax = MEM32(ecx);
    edx = esp + 3;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0018FD24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018FD21u); } /* indirect call */
    }

loc_0018FD24: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018FD35; /* je: equal / zero */

loc_0018FD29: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, 1);
    MEM8(eax) = LO8(ecx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0018FD35: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax) = LO8(ecx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018FD50
 * Original: 0x0018FD50 - 0x0018FD69 (25 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FD50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018FD50: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x20)); return; /* indirect tail jmp */

}

/**
 * sub_0018FD70
 * Original: 0x0018FD70 - 0x0018FD8E (30 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018FD70: ;
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0018FD81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018FD7Eu); } /* indirect call */
    }

loc_0018FD81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018FD89; /* jl: less (signed <) */

loc_0018FD85: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018FD89: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018FD90
 * Original: 0x0018FD90 - 0x0018FDF8 (104 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FD90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018FD90: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244168);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2F6544;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0018FDD3; /* je: equal / zero */

loc_0018FDC2: ;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018FDD3; /* jne: not equal / not zero */

loc_0018FDCD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0018FDD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018FDD1u); } /* indirect call */
    }

loc_0018FDD3: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0018FDE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018FDDFu); } /* indirect call */
    }

loc_0018FDE2: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x2DC684;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018FE00
 * Original: 0x0018FE00 - 0x0018FE28 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018FE00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018FE08u); RECOMP_ABI_CALL(0x0018FD90u, sub_0018FD90); /* call 0x0018FD90 */

loc_0018FE08: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018FE22; /* je: equal / zero */

loc_0018FE0F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x15);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0018FE22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018FE1Fu); } /* indirect call */
    }

loc_0018FE22: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018FE30
 * Original: 0x0018FE30 - 0x0018FEA7 (119 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FE30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018FE30: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244168);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM16(esi + 6) = 1;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = ecx;
    MEM32(esp + 0x10) = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = 0x2F6544;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM16(eax + 6) = MEM16(eax + 6) + 1;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x15);
    PUSH32(esp, edx);
    PUSH32(esp, 0x40);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0018FE90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018FE8Du); } /* indirect call */
    }

loc_0018FE90: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0xC) = eax;
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018FEB0
 * Original: 0x0018FEB0 - 0x0018FF04 (84 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018FEB0: ;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x208);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0018FEF4; /* je: equal / zero */

loc_0018FEC8: ;
    goto loc_0018FED0;

    /* nop */

loc_0018FED0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x200 (32-bit) */
    eax = 0x200;
    if (CMP_G(_fas, _fbs)) goto loc_0018FEDF; /* jg: greater (signed >) */

loc_0018FEDD: ;
    eax = esi;

loc_0018FEDF: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018FEECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018FEE9u); } /* indirect call */
    }

loc_0018FEEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018FEF4; /* je: equal / zero */

loc_0018FEF0: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0018FED0; /* jne: not equal / not zero */

loc_0018FEF4: ;
    eax = ebx;
    POP32(esp, edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018FF10
 * Original: 0x0018FF10 - 0x0018FF53 (67 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018FF10: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018FF4F; /* je: equal / zero */

loc_0018FF1A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x10);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018FF42; /* jle: less or equal (signed <=) */

loc_0018FF25: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(ecx);
    edx = ebx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(edi + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0018FF38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018FF35u); } /* indirect call */
    }

loc_0018FF38: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018FF49; /* je: equal / zero */

loc_0018FF3E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018FF25; /* jl: less (signed <) */

loc_0018FF42: ;
    MEM32(edi + 0x10) = 0;

loc_0018FF49: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0018FF4F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018FF60
 * Original: 0x0018FF60 - 0x0019001D (189 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FF60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018FF60: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018FFEA; /* jle: less or equal (signed <=) */

loc_0018FF7A: ;
    /* nop */

loc_0018FF80: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018FF90u); RECOMP_ABI_CALL(0x0018F4B0u, sub_0018F4B0); /* call 0x0018F4B0 */

loc_0018FF90: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    MEM32(esi + 0x10) = edx;
    ebx = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0018FFD6; /* je: equal / zero */

loc_0018FFAE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018FFCF; /* jle: less or equal (signed <=) */

loc_0018FFB2: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    eax = ebx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018FFC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018FFC2u); } /* indirect call */
    }

loc_0018FFC5: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018FFD6; /* je: equal / zero */

loc_0018FFCB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018FFB2; /* jl: less (signed <) */

loc_0018FFCF: ;
    MEM32(esi + 0x10) = 0;

loc_0018FFD6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00190010; /* jne: not equal / not zero */

loc_0018FFDA: ;
    edi = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x10);
    ebx = MEM32(esp + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018FF80; /* jg: greater (signed >) */

loc_0018FFEA: ;
    ecx = MEM32(esi + 0xC);
    edi = MEM32(esi + 0x10);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018FFFAu); RECOMP_ABI_CALL(0x0018F4B0u, sub_0018F4B0); /* call 0x0018F4B0 */

loc_0018FFFA: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00190010: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00190020
 * Original: 0x00190020 - 0x00190025 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00190020: ;
    g_seh_ebp = ebp; sub_0018FF10(); return; /* tail jmp 0x0018FF10 */

}

/**
 * sub_00190030
 * Original: 0x00190030 - 0x0019006D (61 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190030: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190050; /* je: equal / zero */

loc_00190038: ;
    ecx = eax;
    eax = MEM32(ecx);
    edx = esp + 3;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00190044u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00190041u); } /* indirect call */
    }

loc_00190044: ;
    SET_LO8(edx, MEM8(eax));
    eax = MEM32(esp + 8);
    MEM8(eax) = LO8(edx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00190050: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x14) (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = esp + 3;
    MEM8(esp + 3) = LO8(ecx);
    SET_LO8(edx, MEM8(eax));
    eax = MEM32(esp + 8);
    MEM8(eax) = LO8(edx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00190070
 * Original: 0x00190070 - 0x001900E4 (116 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190070: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2F656C;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001900A0u); RECOMP_ABI_CALL(0x0018FF10u, sub_0018FF10); /* call 0x0018FF10 */

loc_001900A0: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001900B8; /* je: equal / zero */

loc_001900A7: ;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001900B8; /* jne: not equal / not zero */

loc_001900B2: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001900B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001900B6u); } /* indirect call */
    }

loc_001900B8: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001900CE; /* je: equal / zero */

loc_001900BF: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001900CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001900CBu); } /* indirect call */
    }

loc_001900CE: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x2DC684;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001900F0
 * Original: 0x001900F0 - 0x00190118 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001900F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001900F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001900F8u); RECOMP_ABI_CALL(0x00190070u, sub_00190070); /* call 0x00190070 */

loc_001900F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00190112; /* je: equal / zero */

loc_001900FF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x15);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00190112u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019010Fu); } /* indirect call */
    }

loc_00190112: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00190120
 * Original: 0x00190120 - 0x0019019A (122 bytes, 42 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190120: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    MEM16(esi + 6) = 1;
    SET_LO8(edx, MEM8(esp + 0x28));
    edi = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    MEM32(esp + 0x18) = ebx;
    MEM32(esi) = 0x2F656C;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = ebx;
    eax = ecx + -1;
    if (CMP_NE(_fa, _fb)) goto loc_0019016F; /* jne: not equal / not zero */

loc_0019016D: ;
    eax = ecx;

loc_0019016F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    MEM32(esi + 0x14) = eax;
    MEM8(esi + 0x18) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00190184; /* je: equal / zero */

loc_00190179: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00190181u); RECOMP_ABI_CALL(0x0018F4E0u, sub_0018F4E0); /* call 0x0018F4E0 */

loc_00190181: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00190184: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001901A0
 * Original: 0x001901A0 - 0x00190220 (128 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001901A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001901A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244188);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 1;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    MEM16(esi + 6) = LO16(eax);
    ecx = MEM32(esp + 0x1C);
    MEM32(esi + 8) = ecx;
    MEM32(esi) = 0x2F656C;
    MEM8(esi + 0x18) = LO8(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001901EA; /* je: equal / zero */

loc_001901E6: ;
    MEM16(eax + 6) = MEM16(eax + 6) + 1;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_001901EA: ;
    edi = MEM32(esp + 0x20);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x15);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001901FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001901FBu); } /* indirect call */
    }

loc_001901FE: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = 0;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00190220
 * Original: 0x00190220 - 0x00190281 (97 bytes, 33 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00190220: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x110);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00190276; /* jle: less or equal (signed <=) */

loc_00190235: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x11C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x11C);

loc_00190245: ;
    eax = MEM32(esp + 0x114);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2F6588);
    edx = esp + 0x18;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00190264u); RECOMP_ABI_CALL(0x0018F3A0u, sub_0018F3A0); /* call 0x0018F3A0 */

loc_00190264: ;
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x0019026Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0019026Au); } /* indirect call */
    }

loc_0019026C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00190245; /* jl: less (signed <) */

loc_00190274: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00190276: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00190290
 * Original: 0x00190290 - 0x001902D0 (64 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00190290: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = esp;
    MEM32(esp) = ebp;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001902CA; /* jle: less or equal (signed <=) */

loc_001902A7: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, ebx);

loc_001902B2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001902C7; /* jae: above or equal (unsigned >=) */

loc_001902B6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001902C7; /* je: equal / zero */

loc_001902BA: ;
    ebx = MEM32(ecx + 4);
    MEM32(esi + eax * 4) = ebx;
    ecx = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001902B2; /* jl: less (signed <) */

loc_001902C7: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);

loc_001902CA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001902D0
 * Original: 0x001902D0 - 0x001902DF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001902D0(void)
{

loc_001902D0: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2F6590;
    esp += 4; return; /* ret */

}

/**
 * sub_001902E0
 * Original: 0x001902E0 - 0x00190308 (40 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001902E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001902E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001902E8u); RECOMP_ABI_CALL(0x0019FDA0u, sub_0019FDA0); /* call 0x0019FDA0 */

loc_001902E8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00190302; /* je: equal / zero */

loc_001902EF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00190302u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001902FFu); } /* indirect call */
    }

loc_00190302: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00190310
 * Original: 0x00190310 - 0x0019031F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190310(void)
{

loc_00190310: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019031Eu); RECOMP_ABI_CALL(0x0018F570u, sub_0018F570); /* call 0x0018F570 */

loc_0019031E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00190320
 * Original: 0x00190320 - 0x00190342 (34 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190320: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190341; /* je: equal / zero */

loc_0019032A: ;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;

loc_00190341: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00190350
 * Original: 0x00190350 - 0x00190356 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190350(void)
{

loc_00190350: ;
    eax = 0x440A40;
    esp += 4; return; /* ret */

}

/**
 * sub_00190360
 * Original: 0x00190360 - 0x0019037A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190360(void)
{

loc_00190360: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 4));
    PUSH32(esp, 0x19);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00190378u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00190375u); } /* indirect call */
    }

loc_00190378: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00190380
 * Original: 0x00190380 - 0x001903D1 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190380: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2441AB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x28);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001903A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001903A2u); } /* indirect call */
    }

loc_001903A5: ;
    MEM16(eax + 4) = 0x28;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001903C2u); RECOMP_ABI_CALL(0x0018F6B0u, sub_0018F6B0); /* call 0x0018F6B0 */

loc_001903C2: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001903E0
 * Original: 0x001903E0 - 0x001903F8 (24 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001903E0(void)
{

loc_001903E0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 8;
    MEM32(eax + 8) = 0x10;
    MEM8(eax + 4) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00190400
 * Original: 0x00190400 - 0x0019049F (159 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00190400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190400: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0xC);
    xmm0 = XMM_MEM(ecx); /* movaps */
    ecx = MEM32(ebp + 8);
    xmm2 = XMM_MEM(ecx + 0x20); /* movaps */
    xmm3 = XMM_MEM(0x2F6A20); /* movaps */
    edx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xAA); /* shufps */
    xmm4 = XMM_MUL(xmm4, xmm2); /* mulps */
    xmm2 = xmm4; /* movaps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0x55); /* shufps */
    MEM32(esp + 0xC) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    xmm5 = xmm0; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0); /* shufps */
    xmm2 = XMM_AND(xmm2, xmm3); /* andps */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    xmm1 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm4 = XMM_MUL(xmm4, xmm1); /* mulps */
    xmm1 = XMM_MEM(ecx); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm1); /* mulps */
    xmm5 = XMM_AND(xmm5, xmm3); /* andps */
    xmm4 = XMM_AND(xmm4, xmm3); /* andps */
    xmm0 = xmm5; /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm4); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm1 = XMM_MEM(0x2F6A30); /* movaps */
    xmm0 = XMM_XOR(xmm0, xmm1); /* xorps */
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(eax + 0x10, xmm1); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(eax, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001904A0
 * Original: 0x001904A0 - 0x001904BB (27 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001904A0(void)
{

loc_001904A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001904AEu); RECOMP_ABI_CALL(0x00190890u, sub_00190890); /* call 0x00190890 */

loc_001904AE: ;
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    XMM_STORE(edi + 0x10, xmm0); /* movaps */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001904C0
 * Original: 0x001904C0 - 0x001904FE (62 bytes, 22 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001904C0(void)
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

loc_001904C0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001904DD; /* jp: parity */

loc_001904D8: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    goto loc_001904E0;

loc_001904DD: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */

loc_001904E0: ;
    MEMF(ecx + 0x1C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001904F8; /* jne: not equal / not zero */

loc_001904ED: ;
    edx = MEM32(ecx + 0x18);
    fp_pop(); /* fstp st(0) */
    MEM32(ecx + 0x1C) = edx;
    esp += 8; return; /* ret 4 */

loc_001904F8: ;
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00190500
 * Original: 0x00190500 - 0x0019050E (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190500(void)
{

loc_00190500: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00190510
 * Original: 0x00190510 - 0x00190534 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190510(void)
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

loc_00190510: ;
    eax = MEM32(esp + 0xC);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0019052Eu); RECOMP_ABI_CALL(0x00190400u, sub_00190400); /* call 0x00190400 */

loc_0019052E: ;
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
 * sub_00190540
 * Original: 0x00190540 - 0x0019057B (59 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00190540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190540: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    XMM_STORE(eax, xmm0); /* movaps */
    xmm1 = XMM_MEM(0x2F6A30); /* movaps */
    xmm2 = XMM_MEM(ecx); /* movaps */
    xmm2 = XMM_AND(xmm2, xmm1); /* andps */
    xmm0 = XMM_XOR(xmm0, xmm2); /* xorps */
    edx = XMM_MOVEMASK(xmm0); /* movmskps */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x3F000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    XMM_STORE(eax, xmm0); /* movaps */
    MEM32(eax + 0xC) = edx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00190580
 * Original: 0x00190580 - 0x001905D6 (86 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00190580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((_fas < 0)) goto loc_001905CE; /* js: sign (negative) */

loc_00190591: ;
    edx = MEM32(ebp + 8);
    esi = eax + 1;
    eax = MEM32(ebp + 0x10);
    /* nop */

loc_001905A0: ;
    edi = ZX16(MEM16(edx));
    xmm1 = XMM_MEM(ecx + 0x10); /* movaps */
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x2F6920) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2F6920;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_MEM(edi); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(eax, xmm1); /* movaps */
    edi = ZX16(MEM16(edx));
    edi = edi | 0x3F000000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = edi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001905A0; /* jne: not equal / not zero */

loc_001905CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001905E0
 * Original: 0x001905E0 - 0x0019063F (95 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001905E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001905E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0xC);
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    XMM_STORE(esp + 8, xmm0); /* movaps */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp + 8);
    xmm1 = XMM_MEM(esp + 8); /* movaps */
    PUSH32(esp, esi);
    ecx = 0x2F69A0;
    esi = eax;
    PUSH32(esp, edi);
    edx = eax + 0x10;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 4;

loc_00190614: ;
    xmm2 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm2 = XMM_MEM(ecx); /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    XMM_STORE(esi + ecx, xmm3); /* movaps */
    XMM_STORE(edx, xmm0); /* movaps */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00190614; /* jne: not equal / not zero */

loc_00190637: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00190640
 * Original: 0x00190640 - 0x001907BD (381 bytes, 121 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00190640(void)
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

loc_00190640: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm2 = XMM_MEM(0x2F6A30); /* movaps */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_XOR(xmm1, xmm2); /* xorps */
    xmm2 = XMM_MEM(esi); /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_CMP_PRED(xmm3, xmm2, 2); /* cmpleps */
    xmm2 = XMM_CMP_PRED(xmm2, xmm1, 2); /* cmpleps */
    ebx = XMM_MOVEMASK(xmm2); /* movmskps */
    xmm2 = XMM_MEM(esi + 0x10); /* movaps */
    xmm0 = XMM_CMP_PRED(xmm0, xmm2, 2); /* cmpleps */
    ecx = XMM_MOVEMASK(xmm3); /* movmskps */
    eax = XMM_MOVEMASK(xmm0); /* movmskps */
    xmm2 = XMM_CMP_PRED(xmm2, xmm1, 2); /* cmpleps */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = XMM_MOVEMASK(xmm2); /* movmskps */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & 7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, eax (32-bit) */
    PUSH32(esp, edi);
    XMM_STORE(esp + 0x40, xmm1); /* movaps */
    MEM32(esp + 0x20) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001907AE; /* jne: not equal / not zero */

loc_001906A3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001907AE; /* jne: not equal / not zero */

loc_001906AB: ;
    edx = ebx;
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_001907AE; /* je: equal / zero */

loc_001906B5: ;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = eax;
    eax = MEM32(ebp + 0x10);
    edi = ecx;
    ecx = MEM32(eax + 0x14);
    MEM32(esp + 0x24) = 1;
    MEM32(esp + 0x28) = 2;
    MEM32(esp + 0x2C) = 4;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = 1;

loc_001906F3: ;
    ecx = 8;

loc_001906F8: ;
    eax = MEM32(esp + ecx + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019075E; /* je: equal / zero */

loc_00190700: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    fp_push(MEMF(esp + ecx + 0x40)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + esi)); /* fmul dword ptr [ecx + esi] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + esi + 0x10)); /* fmul dword ptr [ecx + esi + 0x10] */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    if (TEST_Z(_fa, _fb)) goto loc_0019073A; /* je: equal / zero */

loc_0019071D: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019074D; /* jne: not equal / not zero */

loc_00190728: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    MEMF(esp + ecx + 0x30) = (float)fp_top(); /* fst */
    goto loc_0019074F;

loc_0019073A: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0019074D; /* jnp: not parity */

loc_00190747: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0019074F;

loc_0019074D: ;
    fp_pop(); /* fstp st(0) */

loc_0019074F: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001907AC; /* jnp: not parity */

loc_0019075E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_001906F8; /* jns: not sign (positive) */

loc_00190763: ;
    edx = MEM32(esp + 0x20);
    fp_pop(); /* fstp st(0) */
    eax = MEM32(esp + 0x1C);
    fp_push(MEMF(0x2DC3A0)); /* fld float */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = ebx;
    MEM32(esp + 0x1C) = eax;
    if ((_fas >= 0)) goto loc_001906F3; /* jns: not sign (positive) */

loc_00190782: ;
    eax = MEM32(ebp + 0x10);
    fp_pop(); /* fstp st(0) */
    edx = MEM32(esp + 0x14);
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = 0xFFFFFFFFu;
    eax = MEM32(ebp + 8);
    MEM8(eax) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_001907AC: ;
    fp_pop(); /* fstp st(0) */

loc_001907AE: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax) = 0;
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
 * sub_001907C0
 * Original: 0x001907C0 - 0x001907C4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001907C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001907C0: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_001907D0
 * Original: 0x001907D0 - 0x00190824 (84 bytes, 26 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001907D0(void)
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

loc_001907D0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    MEM16(ecx + 6) = 1;
    MEM32(ecx + 8) = 0;
    MEM32(ecx) = 0x2F6AA8;
    xmm0 = XMM_MEM(edx); /* movaps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00190807; /* jp: parity */

loc_00190802: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    goto loc_0019080A;

loc_00190807: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */

loc_0019080A: ;
    MEMF(ecx + 0x1C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019081C; /* jne: not equal / not zero */

loc_00190817: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 0x18)); /* fld float */

loc_0019081C: ;
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ecx;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00190830
 * Original: 0x00190830 - 0x0019088E (94 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00190830(void)
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

loc_00190830: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = 0x2F6A40;
    MEM16(ecx + 6) = 1;
    edx = MEM32(eax);
    MEM32(ecx) = 0x2F6A68;
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx) = 0x2F6AA8;
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00190871; /* jp: parity */

loc_0019086C: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    goto loc_00190874;

loc_00190871: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */

loc_00190874: ;
    MEMF(ecx + 0x1C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00190886; /* jne: not equal / not zero */

loc_00190881: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 0x18)); /* fld float */

loc_00190886: ;
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ecx;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00190890
 * Original: 0x00190890 - 0x001908A9 (25 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190890(void)
{

loc_00190890: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0019089Eu); RECOMP_ABI_CALL(0x00196940u, sub_00196940); /* call 0x00196940 */

loc_0019089E: ;
    eax = MEM32(esi + 0xC);
    MEM32(edi + 4) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001908B0
 * Original: 0x001908B0 - 0x00190905 (85 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001908B0(void)
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

loc_001908B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x001908CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001908CAu); } /* indirect call */
    }

loc_001908CD: ;
    xmm1 = XMM_MEM(edi); /* movaps */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
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
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xC)); /* fadd dword ptr [esi + 0xc] */
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
 * sub_00190910
 * Original: 0x00190910 - 0x00190998 (136 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00190910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190910: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    eax = MEM32(esi + 4);
    MEM32(esp + 0x24) = eax;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00190937u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00190934u); } /* indirect call */
    }

loc_00190937: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00190991; /* je: equal / zero */

loc_0019093C: ;
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx + 4);
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xAA); /* shufps */
    MEM32(esp + 0x20) = edx;
    xmm2 = XMM_MEM(eax + 0x20); /* movaps */
    xmm3 = XMM_MEM(eax + 0x10); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(eax); /* movaps */
    eax = MEM32(esi);
    edx = esp + 0x10;
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    PUSH32(esp, ecx);
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    ecx = esi;
    XMM_STORE(esp + 0x18, xmm0); /* movaps */
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00190991u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019098Fu); } /* indirect call */
    }

loc_00190991: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001909A0
 * Original: 0x001909A0 - 0x001909CA (42 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001909A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001909A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = edi + 4;
    eax = ecx + 0x1C;
    esi = 0x20;

loc_001909B2: ;
    ebx = MEM32(eax);
    MEM32(edx) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001909B2; /* jne: not equal / not zero */

loc_001909BF: ;
    eax = MEM32(ecx + 0x18);
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001909D0
 * Original: 0x001909D0 - 0x001909FA (42 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001909D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001909D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = ecx + 0x1C;
    eax = edi + 4;
    esi = 0x20;

loc_001909E2: ;
    ebx = MEM32(eax);
    MEM32(edx) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001909E2; /* jne: not equal / not zero */

loc_001909EF: ;
    eax = MEM32(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x18) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00190A00
 * Original: 0x00190A00 - 0x00190A59 (89 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190A00: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00190A11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00190A0Eu); } /* indirect call */
    }

loc_00190A11: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx + 0x20);
    ecx = edx;
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFF0000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00190A37; /* jne: not equal / not zero */

loc_00190A24: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF0000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00190A37; /* je: equal / zero */

loc_00190A2C: ;
    eax = MEM32(esp + 8);
    MEM8(eax) = 0;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00190A37: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esi + edx * 4 + 0xC);
    POP32(esp, esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, eax (32-bit) */
    eax = MEM32(esp + 4);
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(eax) = LO8(ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00190A60
 * Original: 0x00190A60 - 0x00190A92 (50 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190A60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax + 0x1C;

loc_00190A71: ;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00190A7E; /* je: equal / zero */

loc_00190A7C: ;
    MEM32(edx) = MEM32(edx) | edi;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00190A7E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00190A84; /* je: equal / zero */

loc_00190A82: ;
    MEM32(edx) = MEM32(edx) | esi;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00190A84: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00190A71; /* jl: less (signed <) */

loc_00190A8D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00190AA0
 * Original: 0x00190AA0 - 0x00190AD1 (49 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190AA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190AA0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = esi;
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + edx * 4 + 0x1C) = MEM32(eax + edx * 4 + 0x1C) | edi;
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = edx;
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + esi * 4 + 0x1C);
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(eax + esi * 4 + 0x1C) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00190AE0
 * Original: 0x00190AE0 - 0x00190B1B (59 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190AE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190AE0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = esi;
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + edx * 4 + 0x1C);
    edi = ~edi;
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + edx * 4 + 0x1C) = ecx;
    ecx = edx;
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + esi * 4 + 0x1C);
    edi = ~edi;
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(eax + esi * 4 + 0x1C) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00190B20
 * Original: 0x00190B20 - 0x00190B66 (70 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00190B20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax + 0x1C;

loc_00190B33: ;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00190B48; /* je: equal / zero */

loc_00190B3E: ;
    ebp = MEM32(edx);
    ebx = edi;
    ebx = ~ebx;
    ebp = ebp & ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx) = ebp;

loc_00190B48: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00190B56; /* je: equal / zero */

loc_00190B4C: ;
    ebx = MEM32(edx);
    eax = esi;
    eax = ~eax;
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx) = ebx;

loc_00190B56: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00190B33; /* jl: less (signed <) */

loc_00190B5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00190B70
 * Original: 0x00190B70 - 0x00190BBF (79 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190B70: ;
    eax = MEM32(esp + 0xC);
    edx = ecx;
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, esi);
    esi = eax;
    esi = esi ^ ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xFFFF0000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00190B9F; /* jne: not equal / not zero */

loc_00190B8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF0000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00190B9F; /* je: equal / zero */

loc_00190B94: ;
    eax = MEM32(esp + 8);
    MEM8(eax) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00190B9F: ;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(edx + eax * 4 + 0x14);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, esi (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(eax) = LO8(ecx);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00190BC0
 * Original: 0x00190BC0 - 0x00190C7F (191 bytes, 77 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00190BC0: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00190BD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00190BD3u); } /* indirect call */
    }

loc_00190BD6: ;
    edi = MEM32(esp + 0x1C);
    ebp = eax;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00190BFE; /* jne: not equal / not zero */

loc_00190BE2: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00190BF9; /* je: equal / zero */

loc_00190BEB: ;
    goto loc_00190BF0;

    /* nop */

loc_00190BF0: ;
    ecx = eax;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00190BF0; /* jne: not equal / not zero */

loc_00190BF9: ;
    eax = MEM32(ecx + 0x1C);
    goto loc_00190C28;

loc_00190BFE: ;
    esi = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);

loc_00190C06: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00190C0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00190C0Au); } /* indirect call */
    }

loc_00190C0D: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx + eax * 4 + 0x10C);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00190C49; /* jne: not equal / not zero */

loc_00190C1E: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00190C06; /* jne: not equal / not zero */

loc_00190C25: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00190C27: ;
    POP32(esp, ebx);

loc_00190C28: ;
    ecx = eax;
    ecx = ecx ^ ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFF0000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00190C56; /* jne: not equal / not zero */

loc_00190C34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF0000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00190C56; /* je: equal / zero */

loc_00190C3B: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax) = 0;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 28; return; /* ret 24 */

loc_00190C49: ;
    ecx = MEM32(esi);
    edi = MEM32(edi + 4);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00190C54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00190C51u); } /* indirect call */
    }

loc_00190C54: ;
    goto loc_00190C27;

loc_00190C56: ;
    ecx = ebp;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0xC);
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ecx + eax * 4 + 0x10);
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, edx (32-bit) */
    POP32(esp, edi);
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    MEM8(eax) = LO8(edx);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00190C80
 * Original: 0x00190C80 - 0x00190CCF (79 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190C80: ;
    eax = MEM32(esp + 0xC);
    edx = ecx;
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = eax;
    esi = esi ^ ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xFFFF0000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00190CAF; /* jne: not equal / not zero */

loc_00190C9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF0000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00190CAF; /* je: equal / zero */

loc_00190CA4: ;
    eax = MEM32(esp + 8);
    MEM8(eax) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00190CAF: ;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(edx + eax * 4 + 8);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, esi (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(eax) = LO8(ecx);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00190CD0
 * Original: 0x00190CD0 - 0x00190D40 (112 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190CD0: ;
    eax = ecx;
    PUSH32(esp, ebx);
    MEM16(eax + 6) = 1;
    MEM32(eax + 8) = 0x2F6AE8;
    MEM32(eax + 0xC) = 0x2F1038;
    MEM32(eax + 0x10) = 0x2F1040;
    PUSH32(esp, esi);
    MEM32(eax + 0x14) = 0x2F6AE8;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(eax) = 0x2F1060;
    MEM32(eax + 8) = 0x2F105C;
    MEM32(eax + 0xC) = 0x2F6AF4;
    MEM32(eax + 0x10) = 0x2F6AEC;
    MEM32(eax + 0x14) = 0x2F1048;
    edx = eax + 0x1C;
    ecx = edi + 4;
    esi = 0x20;

loc_00190D28: ;
    ebx = MEM32(ecx);
    MEM32(edx) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00190D28; /* jne: not equal / not zero */

loc_00190D35: ;
    ecx = MEM32(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x18) = ecx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00190D40
 * Original: 0x00190D40 - 0x00190D50 (16 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00190D40: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00190D60(); return; /* tail jmp 0x00190D60 */

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
 * sub_00190D50
 * Original: 0x00190D50 - 0x00190D58 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00190D50: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00190D60(); return; /* tail jmp 0x00190D60 */

}

/**
 * sub_00190D60
 * Original: 0x00190D60 - 0x00190D88 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190D60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00190D68u); RECOMP_ABI_CALL(0x0012B1C0u, sub_0012B1C0); /* call 0x0012B1C0 */

loc_00190D68: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00190D82; /* je: equal / zero */

loc_00190D6F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00190D82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00190D7Fu); } /* indirect call */
    }

loc_00190D82: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00190D90
 * Original: 0x00190D90 - 0x00190E56 (198 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190D90: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax + 8) = 0x2F6AE8;
    MEM32(eax + 0xC) = 0x2F1038;
    MEM32(eax + 0x10) = 0x2F1040;
    MEM32(eax + 0x14) = 0x2F6AE8;
    MEM32(eax) = 0x2F1060;
    MEM32(eax + 8) = 0x2F105C;
    MEM32(eax + 0xC) = 0x2F6AF4;
    MEM32(eax + 0x10) = 0x2F6AEC;
    MEM32(eax + 0x14) = 0x2F1048;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x68) = ecx;
    MEM32(eax + 0x6C) = ecx;
    MEM32(eax + 0x70) = ecx;
    MEM32(eax + 0x74) = ecx;
    MEM32(eax + 0x78) = ecx;
    MEM32(eax + 0x7C) = ecx;
    MEM32(eax + 0x80) = ecx;
    MEM32(eax + 0x84) = ecx;
    MEM32(eax + 0x88) = ecx;
    MEM32(eax + 0x8C) = ecx;
    MEM32(eax + 0x90) = ecx;
    MEM32(eax + 0x94) = ecx;
    MEM32(eax + 0x98) = ecx;
    MEM32(eax + 0x18) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00190E60
 * Original: 0x00190E60 - 0x00190EB4 (84 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190E60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190E60: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2441CB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x9C);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00190E88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00190E85u); } /* indirect call */
    }

loc_00190E88: ;
    MEM16(eax + 4) = 0x9C;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00190EA5u); RECOMP_ABI_CALL(0x00190CD0u, sub_00190CD0); /* call 0x00190CD0 */

loc_00190EA5: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00190EC0
 * Original: 0x00190EC0 - 0x00190ECF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190EC0(void)
{

loc_00190EC0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00190ECEu); RECOMP_ABI_CALL(0x001909A0u, sub_001909A0); /* call 0x001909A0 */

loc_00190ECE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00190ED0
 * Original: 0x00190ED0 - 0x00190EDF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190ED0(void)
{

loc_00190ED0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00190EDEu); RECOMP_ABI_CALL(0x001909D0u, sub_001909D0); /* call 0x001909D0 */

loc_00190EDE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00190EE0
 * Original: 0x00190EE0 - 0x00190EE6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190EE0(void)
{

loc_00190EE0: ;
    eax = 0x440A68;
    esp += 4; return; /* ret */

}

/**
 * sub_00190EF0
 * Original: 0x00190EF0 - 0x00190F4E (94 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190EF0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2441F1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    MEM32(esp + 4) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00190F3E; /* je: equal / zero */

loc_00190F1B: ;
    ecx = esi;
    PUSH32(esp, 0x00190F22u); RECOMP_ABI_CALL(0x000B5E50u, sub_000B5E50); /* call 0x000B5E50 */

loc_00190F22: ;
    PUSH32(esp, 0x80);
    MEM32(esi) = 0;
    PUSH32(esp, 0x2F6B00);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00190F3Bu); RECOMP_ABI_CALL(0x0018F4B0u, sub_0018F4B0); /* call 0x0018F4B0 */

loc_00190F3B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00190F3E: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00190F50
 * Original: 0x00190F50 - 0x00190F55 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00190F50: ;
    g_seh_ebp = ebp; sub_00190890(); return; /* tail jmp 0x00190890 */

}

/**
 * sub_00190F60
 * Original: 0x00190F60 - 0x00190F78 (24 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190F60(void)
{

loc_00190F60: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    MEM32(eax + 8) = 0x10;
    MEM8(eax + 4) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00190F80
 * Original: 0x00190F80 - 0x00190F95 (21 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00190F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190F80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(eax, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00190FA0
 * Original: 0x00190FA0 - 0x00190FD0 (48 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00190FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190FA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((_fas < 0)) goto loc_00190FC8; /* js: sign (negative) */

loc_00190FB1: ;
    esi = MEM32(ebp + 0x10);
    ecx = ecx & 0xFFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = esi + 0x10;
    XMM_STORE(esi, xmm0); /* movaps */
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

loc_00190FC8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00190FD0
 * Original: 0x00190FD0 - 0x00190FE5 (21 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00190FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00190FD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(eax, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00190FF0
 * Original: 0x00190FF0 - 0x0019102E (62 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00190FF0(void)
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

loc_00190FF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    xmm1 = XMM_MEM(eax + 0x30); /* movaps */
    ecx = MEM32(ebp + 0x10);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(ecx, xmm1); /* movaps */
    xmm1 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(ecx + 0x10, xmm1); /* movaps */
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
 * sub_00191030
 * Original: 0x00191030 - 0x0019121E (494 bytes, 147 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00191030(void)
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

loc_00191030: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0xC);
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    xmm2 = XMM_MEM(edx); /* movaps */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm3 = XMM_MEM(edx + 0x10); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    xmm1 = xmm3; /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm2); /* subps */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm4 = xmm0; /* movaps */
    fp_pop(); /* fstp st(0) */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0x55); /* shufps */
    xmm5 = xmm0; /* movaps */
    eax = esp + 4;
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0xAA); /* shufps */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax) = xmm5.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00191170; /* je: equal / zero */

loc_00191093: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    xmm0 = xmm1; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm4 = xmm0; /* movaps */
    eax = esp;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xAA); /* shufps */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC3DC)); /* fmul dword ptr [0x2dc3dc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00191124; /* jp: parity */

loc_001910D4: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00191172; /* jnp: not parity */

loc_001910E8: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp)); /* fdiv dword ptr [esp] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC098)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    xmm3 = XMM_MEM(0x2F18F0); /* movaps */
    xmm3 = XMM_SUB(xmm3, xmm0); /* subps */
    xmm0 = xmm3; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    goto loc_0019112F;

loc_00191124: ;
    MEM32(esp + 4) = 0;
    xmm0 = xmm2; /* movaps */

loc_0019112F: ;
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm1 = xmm0; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    eax = esp + 0xC;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019117E; /* jp: parity */

loc_0019116E: ;
    fp_pop(); /* fstp st(0) */

loc_00191170: ;
    fp_pop(); /* fstp st(0) */

loc_00191172: ;
    eax = MEM32(ebp + 8);
    MEM8(eax) = 0;
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0019117E: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00191172; /* je: equal / zero */

loc_0019119A: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00191172; /* jnp: not parity */

loc_001911AB: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(ebp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp)); /* fdiv dword ptr [esp] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_MEM(edx + 0x10); /* movaps */
    xmm3 = XMM_MEM(0x2F18F0); /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = XMM_MEM(edx); /* movaps */
    xmm3 = XMM_SUB(xmm3, xmm0); /* subps */
    xmm0 = xmm3; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(eax, xmm0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0xC)); /* fdiv dword ptr [ecx + 0xc] */
    MEM32(eax + 0x10) = 0xFFFFFFFFu;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm0); /* mulps */
    XMM_STORE(eax, xmm2); /* movaps */
    eax = MEM32(ebp + 8);
    MEM8(eax) = 1;
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
 * sub_00191220
 * Original: 0x00191220 - 0x0019123F (31 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191220(void)
{

loc_00191220: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 6) = 1;
    MEM32(eax + 8) = 0;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax) = 0x2F6BF8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00191240
 * Original: 0x00191240 - 0x00191277 (55 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00191240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00191240: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = 0;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    xmm0 = XMM_MEM(esp); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00191280
 * Original: 0x00191280 - 0x001912AC (44 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191280(void)
{

loc_00191280: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x2F6A40;
    MEM16(eax + 6) = 1;
    edx = MEM32(ecx);
    MEM32(eax) = 0x2F6A68;
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax) = 0x2F6BF8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001912B0
 * Original: 0x001912B0 - 0x001912C8 (24 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001912B0(void)
{

loc_001912B0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 2;
    MEM32(eax + 8) = 0x10;
    MEM8(eax + 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001912D0
 * Original: 0x001912D0 - 0x001912D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001912D0(void)
{

loc_001912D0: ;
    eax = ecx + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001912E0
 * Original: 0x001912E0 - 0x00191303 (35 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001912E0(void)
{

loc_001912E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001912EEu); RECOMP_ABI_CALL(0x00190890u, sub_00190890); /* call 0x00190890 */

loc_001912EE: ;
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    XMM_STORE(edi + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x20); /* movaps */
    XMM_STORE(edi + 0x20, xmm0); /* movaps */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00191310
 * Original: 0x00191310 - 0x0019133F (47 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191310(void)
{

loc_00191310: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0019131Eu); RECOMP_ABI_CALL(0x00196930u, sub_00196930); /* call 0x00196930 */

loc_0019131E: ;
    xmm0 = XMM_MEM(edi + 0x10); /* movaps */
    XMM_STORE(esi + 0x10, xmm0); /* movaps */
    eax = MEM32(edi + 4);
    MEM32(esi + 0x1C) = eax;
    xmm0 = XMM_MEM(edi + 0x20); /* movaps */
    XMM_STORE(esi + 0x20, xmm0); /* movaps */
    ecx = MEM32(edi + 4);
    POP32(esp, edi);
    MEM32(esi + 0x2C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00191340
 * Original: 0x00191340 - 0x001913BB (123 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00191340(void)
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

loc_00191340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2 = XMM_MEM(ecx + 0x20); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x10); /* movaps */
    eax = MEM32(ebp + 8);
    xmm3 = XMM_MEM(eax); /* movaps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm0 = XMM_MUL(xmm0, xmm3); /* mulps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0x55); /* shufps */
    xmm4 = xmm0; /* movaps */
    ecx = esp + 0xC;
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xAA); /* shufps */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    ecx = MEM32(ebp + 0xC);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001913A5; /* jp: parity */

loc_00191392: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax | 0x3F000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    XMM_STORE(ecx, xmm1); /* movaps */
    MEM32(ecx + 0xC) = eax;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_001913A5: ;
    eax = 0x10;
    eax = eax | 0x3F000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    XMM_STORE(ecx, xmm2); /* movaps */
    MEM32(ecx + 0xC) = eax;
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
 * sub_001913C0
 * Original: 0x001913C0 - 0x001913CE (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001913C0(void)
{

loc_001913C0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_MEM(ecx + 0x20); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001913D0
 * Original: 0x001913D0 - 0x0019159B (459 bytes, 142 insns)
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001913D0(void)
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

loc_001913D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x10);
    xmm0 = XMM_MEM(ecx); /* movaps */
    xmm1 = XMM_MEM(edx); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    xmm2 = XMM_MEM(esi); /* movaps */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    xmm3 = XMM_MEM(edi); /* movaps */
    xmm0 = xmm3; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0x55); /* shufps */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm5 = xmm0; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0xAA); /* shufps */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0x55); /* shufps */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    eax = esp + 0x18;
    MEMF(eax) = xmm5.f[0]; /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0xAA); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xAA); /* shufps */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm3); /* mulps */
    eax = esp + 0x2C;
    MEMF(eax) = xmm5.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    eax = esp + 0x28;
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    eax = esp + 0x24;
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    eax = esp + 0x1C;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F4060)); /* fmul dword ptr [0x2f4060] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = MEM32(ebp + 0x1C);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001914FF; /* jp: parity */

loc_001914E5: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x24)); /* fdiv dword ptr [esp + 0x24] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00191505;

loc_001914FF: ;
    MEM32(eax) = 0;

loc_00191505: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ebx = MEM32(ebp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x1C)); /* fdiv dword ptr [esp + 0x1c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(eax);
    xmm1 = XMM_MEM(edi); /* movaps */
    MEM32(esp + 0x2C) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = XMM_MEM(ecx); /* movaps */
    ecx = MEM32(ebp + 0x24);
    xmm1 = XMM_ADD(xmm1, xmm2); /* addps */
    xmm2 = XMM_MEM(esi); /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm2 = XMM_MEM(edx); /* movaps */
    edx = MEM32(ebp + 0x28);
    xmm2 = XMM_ADD(xmm2, xmm3); /* addps */
    xmm0 = xmm1; /* movaps */
    XMM_STORE(ecx, xmm1); /* movaps */
    ecx = MEM32(ebp + 0x18);
    xmm0 = XMM_SUB(xmm0, xmm2); /* subps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    XMM_STORE(edx, xmm2); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    eax = esp + 0x2C;
    POP32(esp, edi);
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    POP32(esp, esi);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001915A0
 * Original: 0x001915A0 - 0x00191678 (216 bytes, 69 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001915A0(void)
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

loc_001915A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    xmm2 = XMM_MEM(eax); /* movaps */
    ecx = MEM32(ebp + 0x10);
    xmm3 = XMM_MEM(ecx); /* movaps */
    edx = MEM32(ebp + 8);
    xmm0 = XMM_MEM(edx); /* movaps */
    xmm1 = xmm3; /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm2); /* subps */
    xmm4 = xmm2; /* movaps */
    xmm4 = XMM_SUB(xmm4, xmm0); /* subps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm4); /* mulps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0x55); /* shufps */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm5 = xmm0; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0xAA); /* shufps */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    eax = esp + 8;
    MEMF(eax) = xmm5.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0x55); /* shufps */
    xmm5 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0xAA); /* shufps */
    ecx = esp + 0xC;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx) = xmm5.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00191632; /* jp: parity */

loc_00191626: ;
    edx = MEM32(ebp + 0x14);
    XMM_STORE(edx, xmm2); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_00191632: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019164D; /* jne: not equal / not zero */

loc_00191641: ;
    eax = MEM32(ebp + 0x14);
    XMM_STORE(eax, xmm3); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_0019164D: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = MEM32(ebp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0xC)); /* fdiv dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm3); /* addps */
    XMM_STORE(ecx, xmm2); /* movaps */
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
 * sub_00191680
 * Original: 0x00191680 - 0x001916C1 (65 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191680(void)
{

loc_00191680: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 8);
    MEM16(eax + 6) = 1;
    MEM32(eax + 8) = 0;
    MEM32(eax) = 0x2F6C40;
    xmm0 = XMM_MEM(edx); /* movaps */
    edx = MEM32(esp + 0xC);
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx); /* movaps */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    ecx = edx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x2C) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001916D0
 * Original: 0x001916D0 - 0x00191782 (178 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001916D0(void)
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

loc_001916D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    eax = ecx + 0x10;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_MEM(ecx); /* movaps */
    xmm2 = XMM_MEM(ecx + 0x30); /* movaps */
    xmm3 = XMM_MEM(ecx + 0x20); /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    ecx = esp + 0x20;
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 2;

loc_00191712: ;
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm5 = xmm0; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0xAA); /* shufps */
    xmm6 = xmm3; /* movaps */
    xmm6 = XMM_MUL(xmm6, xmm5); /* mulps */
    xmm5 = xmm0; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0x55); /* shufps */
    xmm7 = xmm4; /* movaps */
    xmm7 = XMM_MUL(xmm7, xmm5); /* mulps */
    xmm5 = xmm0; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm5); /* mulps */
    xmm6 = XMM_ADD(xmm6, xmm2); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm7); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm6); /* addps */
    XMM_STORE(ecx + eax, xmm0); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00191712; /* jne: not equal / not zero */

loc_00191751: ;
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    eax = MEM32(ebp + 0x10);
    xmm2 = XMM_MEM(esp + 0x30); /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_MAX(xmm0, xmm2); /* maxps */
    xmm3 = XMM_MIN(xmm3, xmm2); /* minps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm3 = XMM_SUB(xmm3, xmm1); /* subps */
    XMM_STORE(eax, xmm3); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
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
 * sub_00191790
 * Original: 0x00191790 - 0x00191D2B (1435 bytes, 387 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00191790(void)
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

loc_00191790: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24420B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    edi = esi + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001917CEu); RECOMP_ABI_CALL(0x001915A0u, sub_001915A0); /* call 0x001915A0 */

loc_001917CE: ;
    xmm7 = XMM_MEM(ebx); /* movaps */
    xmm1 = XMM_MEM(esp + 0x30); /* movaps */
    xmm0 = xmm7; /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    edx = esp + 0x10;
    MEMF(edx) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00191A37; /* jnp: not parity */

loc_00191820: ;
    xmm6 = XMM_MEM(ebx + 0x10); /* movaps */
    xmm1 = XMM_MEM(edi); /* movaps */
    xmm0 = XMM_MEM(esi + 0x20); /* movaps */
    eax = esp + 0x80;
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    XMM_STORE(esp + 0x80, xmm6); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm6 = XMM_SUB(xmm6, xmm7); /* subps */
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esp + 0x38) = 0x7F7FFFFF;
    XMM_STORE(esp + 0x74, xmm6); /* movaps */
    XMM_STORE(esp + 0x64, xmm1); /* movaps */
    XMM_STORE(esp + 0x44, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191884u); RECOMP_ABI_CALL(0x001913D0u, sub_001913D0); /* call 0x001913D0 */

loc_00191884: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00191A37; /* je: equal / zero */

loc_0019189E: ;
    xmm5 = XMM_MEM(esp + 0x20); /* movaps */
    xmm0 = xmm5; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm5); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    ecx = esp + 0x10;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2F6C38)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2f6c38] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019194E; /* jne: not equal / not zero */

loc_001918D8: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm1.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm4 = XMM_MEM(esp + 0x20); /* movaps */
    MEM32(esp + 0x10) = 0x3F000000;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(esp + 0x10) = 0x40400000;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm2, 0); /* shufps */
    edx = esp + 0x10;
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1 = xmm2; /* movaps */
    MEMF(edx) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm1 = XMM_MUL(xmm1, xmm5); /* mulps */
    goto loc_00191957;

loc_0019194E: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    xmm1 = XMM_ZERO(); /* xorps self = zero */

loc_00191957: ;
    xmm0 = xmm6; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    eax = esp + 0x10;
    MEMF(eax) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    ecx = esp + 0x10;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    xmm6 = XMM_ADD(xmm6, xmm0); /* addps */
    xmm0 = xmm6; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm2.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEM32(esp + 0x10) = 0x3F000000;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(esp + 0x10) = 0x40400000;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0x20); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    XMM_STORE(esp + 0x70, xmm3); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    XMM_STORE(esp + 0x80, xmm4); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC08C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc08c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00191A54; /* jne: not equal / not zero */

loc_00191A35: ;
    fp_pop(); /* fstp st(0) */

loc_00191A37: ;
    eax = MEM32(ebp + 8);
    MEM8(eax) = 0;
    ecx = MEM32(esp + 0xC4);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00191A54: ;
    xmm4 = XMM_MEM(esp + 0x40); /* movaps */
    eax = MEM32(esp + 0x18);
    xmm3 = XMM_MEM(0x2F18F0); /* movaps */
    xmm5 = XMM_MEM(esp + 0x60); /* movaps */
    xmm0 = xmm4; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEM32(esp + 0x14) = eax;
    edx = esp + 0x10;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm2 = xmm3; /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm0); /* subps */
    xmm0 = XMM_MUL(xmm0, xmm5); /* mulps */
    xmm2 = XMM_MUL(xmm2, xmm7); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm0); /* addps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    XMM_STORE(esp + 0x50, xmm2); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    ecx = esp + 0x14;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00191BEF; /* jne: not equal / not zero */

loc_00191AEE: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00191BEF; /* jne: not equal / not zero */

loc_00191B03: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00191BEF; /* jp: parity */

loc_00191B14: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    ecx = esp + 0x64;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191B29u); RECOMP_ABI_CALL(0x00015C30u, sub_00015C30); /* call 0x00015C30 */

loc_00191B29: ;
    xmm0 = XMM_MEM(esp + 0x60); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(esp + 0x30)); /* mulps */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MEM(0x2F18F0); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(esp + 0x40)); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm2); /* addps */
    eax = MEM32(ebp + 0x10);
    edx = MEM32(esp + 0x18);
    xmm0 = xmm1; /* movaps */
    xmm1 = XMM_MEM(esp + 0x50); /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm2.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0x40); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_MEM(esp + 0x70); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_MEM(esp + 0x80); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(eax, xmm2); /* movaps */
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = 0xFFFFFFFFu;
    eax = MEM32(ebp + 8);
    MEM8(eax) = 1;
    ecx = MEM32(esp + 0xC4);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00191BEF: ;
    xmm0 = xmm7; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = esp + 0x1C;
    MEMF(eax) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    xmm2 = XMM_MEM(esp + 0x30); /* movaps */
    ecx = esp + 0x1C;
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm3 = XMM_SUB(xmm3, xmm0); /* subps */
    fp_pop(); /* fstp st(0) */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm1 = xmm3; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm4); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = xmm7; /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00191C99; /* jne: not equal / not zero */

loc_00191C84: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00191A37; /* jnp: not parity */

loc_00191C99: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    MEM32(esp + 0xB4) = edi;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00191CBB; /* jp: parity */

loc_00191CB3: ;
    xmm7 = XMM_SUB(xmm7, xmm4); /* subps */
    xmm5 = XMM_SUB(xmm5, xmm4); /* subps */
    goto loc_00191CC1;

loc_00191CBB: ;
    xmm7 = XMM_SUB(xmm7, xmm2); /* subps */
    xmm5 = XMM_SUB(xmm5, xmm2); /* subps */

loc_00191CC1: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    ecx = esp + 0x34;
    XMM_STORE(esp + 0x94, xmm7); /* movaps */
    XMM_STORE(esp + 0xA4, xmm5); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191CDEu); RECOMP_ABI_CALL(0x00191220u, sub_00191220); /* call 0x00191220 */

loc_00191CDE: ;
    eax = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = esp + 0x3C;
    MEM32(esp + 0xD8) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191CFEu); RECOMP_ABI_CALL(0x00191030u, sub_00191030); /* call 0x00191030 */

loc_00191CFE: ;
    ecx = esp + 0x30;
    MEM32(esp + 0xCC) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191D12u); RECOMP_ABI_CALL(0x00015C50u, sub_00015C50); /* call 0x00015C50 */

loc_00191D12: ;
    ecx = MEM32(esp + 0xC4);
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
 * sub_00191D30
 * Original: 0x00191D30 - 0x00191D78 (72 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191D30(void)
{

loc_00191D30: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x2F6A40;
    MEM16(eax + 6) = 1;
    edx = MEM32(ecx);
    MEM32(eax) = 0x2F6A68;
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0xC) = edx;
    MEM32(eax) = 0x2F6C40;
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x1C) = edx;
    xmm0 = XMM_MEM(ecx + 0x20); /* movaps */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    ecx = MEM32(ecx + 4);
    MEM32(eax + 0x2C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00191D80
 * Original: 0x00191D80 - 0x00191E50 (208 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191D80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00191D80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191D8Bu); RECOMP_ABI_CALL(0x001AFA50u, sub_001AFA50); /* call 0x001AFA50 */

loc_00191D8B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191D91u); RECOMP_ABI_CALL(0x001AF9E0u, sub_001AF9E0); /* call 0x001AF9E0 */

loc_00191D91: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191D97u); RECOMP_ABI_CALL(0x001AF040u, sub_001AF040); /* call 0x001AF040 */

loc_00191D97: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191D9Du); RECOMP_ABI_CALL(0x001AE050u, sub_001AE050); /* call 0x001AE050 */

loc_00191D9D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp;
    ecx = esi;
    MEM8(eax) = 0;
    PUSH32(esp, 0x00191DACu); RECOMP_ABI_CALL(0x001AC630u, sub_001AC630); /* call 0x001AC630 */

loc_00191DAC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191DB2u); RECOMP_ABI_CALL(0x001AC540u, sub_001AC540); /* call 0x001AC540 */

loc_00191DB2: ;
    eax = esp;
    ecx = esi;
    MEM8(eax) = 1;
    PUSH32(esp, 0x00191DBEu); RECOMP_ABI_CALL(0x001AC630u, sub_001AC630); /* call 0x001AC630 */

loc_00191DBE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191DC4u); RECOMP_ABI_CALL(0x001AA050u, sub_001AA050); /* call 0x001AA050 */

loc_00191DC4: ;
    eax = esp;
    ecx = esi;
    MEM8(eax) = 0;
    PUSH32(esp, 0x00191DD0u); RECOMP_ABI_CALL(0x001AC630u, sub_001AC630); /* call 0x001AC630 */

loc_00191DD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191DD6u); RECOMP_ABI_CALL(0x001A9A40u, sub_001A9A40); /* call 0x001A9A40 */

loc_00191DD6: ;
    eax = esp;
    ecx = esi;
    MEM8(eax) = 1;
    PUSH32(esp, 0x00191DE2u); RECOMP_ABI_CALL(0x001AC630u, sub_001AC630); /* call 0x001AC630 */

loc_00191DE2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191DE8u); RECOMP_ABI_CALL(0x001A8C20u, sub_001A8C20); /* call 0x001A8C20 */

loc_00191DE8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191DEEu); RECOMP_ABI_CALL(0x001A80F0u, sub_001A80F0); /* call 0x001A80F0 */

loc_00191DEE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191DF4u); RECOMP_ABI_CALL(0x001A7E60u, sub_001A7E60); /* call 0x001A7E60 */

loc_00191DF4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191DFAu); RECOMP_ABI_CALL(0x001A73F0u, sub_001A73F0); /* call 0x001A73F0 */

loc_00191DFA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E00u); RECOMP_ABI_CALL(0x001A5A10u, sub_001A5A10); /* call 0x001A5A10 */

loc_00191E00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E06u); RECOMP_ABI_CALL(0x001A4DF0u, sub_001A4DF0); /* call 0x001A4DF0 */

loc_00191E06: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E0Cu); RECOMP_ABI_CALL(0x001A44C0u, sub_001A44C0); /* call 0x001A44C0 */

loc_00191E0C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E12u); RECOMP_ABI_CALL(0x001A3F70u, sub_001A3F70); /* call 0x001A3F70 */

loc_00191E12: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E18u); RECOMP_ABI_CALL(0x001A3170u, sub_001A3170); /* call 0x001A3170 */

loc_00191E18: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E1Eu); RECOMP_ABI_CALL(0x001A2490u, sub_001A2490); /* call 0x001A2490 */

loc_00191E1E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E24u); RECOMP_ABI_CALL(0x001A1770u, sub_001A1770); /* call 0x001A1770 */

loc_00191E24: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E2Au); RECOMP_ABI_CALL(0x0019FCB0u, sub_0019FCB0); /* call 0x0019FCB0 */

loc_00191E2A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E30u); RECOMP_ABI_CALL(0x0019BB20u, sub_0019BB20); /* call 0x0019BB20 */

loc_00191E30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E36u); RECOMP_ABI_CALL(0x0019AC90u, sub_0019AC90); /* call 0x0019AC90 */

loc_00191E36: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E3Cu); RECOMP_ABI_CALL(0x00199EA0u, sub_00199EA0); /* call 0x00199EA0 */

loc_00191E3C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E42u); RECOMP_ABI_CALL(0x00198A80u, sub_00198A80); /* call 0x00198A80 */

loc_00191E42: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E4Bu); RECOMP_ABI_CALL(0x00197C60u, sub_00197C60); /* call 0x00197C60 */

loc_00191E4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00191E00
 * Original: 0x00191E00 - 0x00191E50 (80 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191E00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00191E00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E06u); RECOMP_ABI_CALL(0x001A4DF0u, sub_001A4DF0); /* call 0x001A4DF0 */

loc_00191E06: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E0Cu); RECOMP_ABI_CALL(0x001A44C0u, sub_001A44C0); /* call 0x001A44C0 */

loc_00191E0C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E12u); RECOMP_ABI_CALL(0x001A3F70u, sub_001A3F70); /* call 0x001A3F70 */

loc_00191E12: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E18u); RECOMP_ABI_CALL(0x001A3170u, sub_001A3170); /* call 0x001A3170 */

loc_00191E18: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E1Eu); RECOMP_ABI_CALL(0x001A2490u, sub_001A2490); /* call 0x001A2490 */

loc_00191E1E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E24u); RECOMP_ABI_CALL(0x001A1770u, sub_001A1770); /* call 0x001A1770 */

loc_00191E24: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E2Au); RECOMP_ABI_CALL(0x0019FCB0u, sub_0019FCB0); /* call 0x0019FCB0 */

loc_00191E2A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E30u); RECOMP_ABI_CALL(0x0019BB20u, sub_0019BB20); /* call 0x0019BB20 */

loc_00191E30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E36u); RECOMP_ABI_CALL(0x0019AC90u, sub_0019AC90); /* call 0x0019AC90 */

loc_00191E36: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E3Cu); RECOMP_ABI_CALL(0x00199EA0u, sub_00199EA0); /* call 0x00199EA0 */

loc_00191E3C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E42u); RECOMP_ABI_CALL(0x00198A80u, sub_00198A80); /* call 0x00198A80 */

loc_00191E42: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00191E4Bu); RECOMP_ABI_CALL(0x00197C60u, sub_00197C60); /* call 0x00197C60 */

loc_00191E4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00191E50
 * Original: 0x00191E50 - 0x00191EB1 (97 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00191E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00191E50: ;
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
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax); /* movaps */
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
    eax = esp + 0xC;
    MEMF(eax) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0xC);
    MEM32(ecx + 0x24) = edx;
    MEM32(ecx + 8) = eax;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00191EC0
 * Original: 0x00191EC0 - 0x00191FCD (269 bytes, 90 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00191EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00191EC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x1C);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 4) = edi;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 8) = edx;
    ecx = MEM32(ebx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00191EF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00191EF0u); } /* indirect call */
    }

loc_00191EF3: ;
    ecx = MEM32(ebp + 0x18);
    MEM32(esi + 0x18) = eax;
    edx = MEM32(ecx);
    eax = esi + 0x20;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(edi + 0x14);
    edx = MEM32(ebx + 8);
    xmm0 = XMM_MEM(edi); /* movaps */
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEM32(esp + 0x74) = 0;
    xmm1 = XMM_MEM(edx + 0x50); /* movaps */
    PUSH32(esp, ecx);
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    ecx = esi + 0x20;
    XMM_STORE(esp + 0x18, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00191F3Du); RECOMP_ABI_CALL(0x00191E50u, sub_00191E50); /* call 0x00191E50 */

loc_00191F3D: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00191F54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00191F51u); } /* indirect call */
    }

loc_00191F54: ;
    xmm2 = XMM_MEM(esp + 0x30); /* movaps */
    xmm5 = XMM_MEM(0x2F18F0); /* movaps */
    ecx = MEM32(edi + 0x10);
    MEM32(esp + 0xC) = 0x3F000000;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm5 = XMM_SUB(xmm5, xmm0); /* subps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm4 = xmm3; /* movaps */
    xmm3 = XMM_MEM(esp + 0x20); /* movaps */
    xmm0 = xmm5; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm3); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm4); /* addps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_ADD(xmm0, XMM_MEM(esp + 0x10)); /* addps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    MEM32(esi + 0x40) = ecx;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    xmm0 = xmm1; /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = esp + 0x44;
    xmm2 = XMM_SUB(xmm2, xmm3); /* subps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    PUSH32(esp, eax);
    XMM_STORE(esp + 0x68, xmm0); /* movaps */
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00191FC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00191FC1u); } /* indirect call */
    }

loc_00191FC4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00191FD0
 * Original: 0x00191FD0 - 0x00191FD7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191FD0(void)
{

loc_00191FD0: ;
    MEM8(ecx + 4) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00191FE0
 * Original: 0x00191FE0 - 0x00192050 (112 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191FE0(void)
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

loc_00191FE0: ;
    eax = MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_00191FF8; /* je: equal / zero */

loc_00191FEB: ;
    fp_push(MEMF(edx + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019204D; /* jp: parity */

loc_00191FF8: ;
    xmm0 = XMM_MEM(edx); /* movaps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(edx + 0x10); /* movaps */
    XMM_STORE(ecx + 0x20, xmm0); /* movaps */
    eax = MEM32(edx + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019201B; /* je: equal / zero */

loc_00192012: ;
    eax = esi;
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00192012; /* jne: not equal / not zero */

loc_0019201B: ;
    MEM32(ecx + 0x30) = eax;
    eax = MEM32(edx + 0x20);
    eax = MEM32(eax + 4);
    MEM32(ecx + 0x34) = eax;
    esi = MEM32(edx + 0x24);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019203A; /* je: equal / zero */

loc_00192031: ;
    esi = eax;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00192031; /* jne: not equal / not zero */

loc_0019203A: ;
    MEM32(ecx + 0x38) = esi;
    eax = MEM32(edx + 0x24);
    eax = MEM32(eax + 4);
    MEM32(ecx + 0x3C) = eax;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 4) = edx;
    POP32(esp, esi);

loc_0019204D: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00192050
 * Original: 0x00192050 - 0x00192054 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00192050: ;
    MEM32(ecx + 0x24) = MEM32(ecx + 0x24) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00192060
 * Original: 0x00192060 - 0x00192073 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00192060: ;
    MEM32(ecx + 0x24) = MEM32(ecx + 0x24) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00192072; /* jne: not equal / not zero */

loc_00192065: ;
    eax = MEM32(0x4409AC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00192072u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019206Fu); } /* indirect call */
    }

loc_00192072: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00192080
 * Original: 0x00192080 - 0x0019214C (204 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00192080: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x20) = eax;
    eax = MEM32(ecx + 0x10);
    edx = 0xFF;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ecx + 0x24) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00192146; /* je: equal / zero */

loc_001920A1: ;
    eax = MEM32(ecx);
    MEM32(esp) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(eax);
    MEM8(esp + 0xC) = HI8(eax);
    eax = MEM32(esp);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xE) = LO8(eax);
    SET_LO8(eax, MEM8(esp));
    MEM8(esp + 0xF) = LO8(eax);
    eax = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(esp) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(eax);
    MEM8(esp + 0xC) = HI8(eax);
    eax = MEM32(esp);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xE) = LO8(eax);
    SET_LO8(eax, MEM8(esp));
    MEM8(esp + 0xF) = LO8(eax);
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 4) = eax;
    eax = MEM32(ecx + 8);
    MEM32(esp) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(eax);
    MEM8(esp + 0xC) = HI8(eax);
    eax = MEM32(esp);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xE) = LO8(eax);
    SET_LO8(eax, MEM8(esp));
    MEM8(esp + 0xF) = LO8(eax);
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 8) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(esp) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(eax);
    MEM8(esp + 0xC) = HI8(eax);
    eax = MEM32(esp);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xE) = LO8(eax);
    SET_LO8(eax, MEM8(esp));
    MEM8(esp + 0xF) = LO8(eax);
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = edx;

loc_00192146: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00192150
 * Original: 0x00192150 - 0x001921AE (94 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00192150: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244228);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2F6C88;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0019218F; /* jne: not equal / not zero */

loc_00192189: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0019218Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019218Du); } /* indirect call */
    }

loc_0019218F: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0019219Eu); RECOMP_ABI_CALL(0x00015C50u, sub_00015C50); /* call 0x00015C50 */

loc_0019219E: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001921B0
 * Original: 0x001921B0 - 0x001921E9 (57 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001921B0(void)
{

loc_001921B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001921BEu); RECOMP_ABI_CALL(0x00196940u, sub_00196940); /* call 0x00196940 */

loc_001921BE: ;
    eax = MEM32(esi + 0xC);
    MEM32(edi + 4) = eax;
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    XMM_STORE(edi + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x20); /* movaps */
    XMM_STORE(edi + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(edi + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(edi + 0x40, xmm0); /* movaps */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001921F0
 * Original: 0x001921F0 - 0x00192229 (57 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001921F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001921F0: ;
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
    ecx = MEM32(ebp + 8);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019220Du); RECOMP_ABI_CALL(0x001CF890u, sub_001CF890); /* call 0x001CF890 */

loc_0019220D: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00192222u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019221Fu); } /* indirect call */
    }

loc_00192222: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00192230
 * Original: 0x00192230 - 0x00192255 (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00192230: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00192238u); RECOMP_ABI_CALL(0x00192150u, sub_00192150); /* call 0x00192150 */

loc_00192238: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019224F; /* je: equal / zero */

loc_0019223F: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x50);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0019224Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019224Cu); } /* indirect call */
    }

loc_0019224F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00192260
 * Original: 0x00192260 - 0x001922AF (79 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00192260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00192260: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ecx;
    ecx = MEM32(ebp + 8);
    MEM32(eax + 0xC) = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax + 8) = 0;
    MEM32(eax) = 0x2F6C88;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    ecx = 0x3F800000;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x38) = ecx;
    XMM_STORE(eax + 0x40, xmm0); /* movaps */
    ecx = MEM32(eax + 0xC);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ecx + 6) = MEM16(ecx + 6) + 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001922B0
 * Original: 0x001922B0 - 0x001923B0 (256 bytes, 79 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001922B0(void)
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

loc_001922B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    xmm3 = XMM_MEM(esi + 0x30); /* movaps */
    xmm2 = XMM_MEM(esi + 0x10); /* movaps */
    xmm5 = XMM_MEM(esi + 0x20); /* movaps */
    ecx = MEM32(esi + 0xC);
    xmm4 = xmm3; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm3, 0x44); /* shufps */
    xmm7 = xmm3; /* movaps */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    xmm1 = XMM_MEM(edi); /* movaps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm5, 0x44); /* shufps */
    xmm7 = XMM_SHUFFLE(xmm7, xmm3, 0xEE); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm5, 0xEE); /* shufps */
    xmm5 = xmm0; /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0x55); /* shufps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm4, 0xDD); /* shufps */
    xmm5 = XMM_MUL(xmm5, xmm3); /* mulps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm4, 0x88); /* shufps */
    xmm3 = xmm1; /* movaps */
    xmm6 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm3); /* mulps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm1, 0xAA); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm7, 0x88); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm6); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm5); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    edx = esp + 0x10;
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0019232Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019232Au); } /* indirect call */
    }

loc_0019232D: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    xmm4 = XMM_MEM(esi + 0x30); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm2 = XMM_MEM(esi + 0x40); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = XMM_MEM(edi); /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm4 = XMM_MUL(xmm4, xmm3); /* mulps */
    xmm3 = XMM_MEM(esi + 0x20); /* movaps */
    xmm4 = XMM_ADD(xmm4, xmm2); /* addps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm4); /* addps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    eax = esp + 0xC;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    POP32(esp, edi);
    MEMF(eax) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
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
 * sub_001923B0
 * Original: 0x001923B0 - 0x001924E1 (305 bytes, 97 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001923B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001923B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(ebp + 0xC);
    xmm3 = XMM_MEM(ecx + 0x30); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x40); /* movaps */
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm2 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm5 = XMM_MEM(ecx + 0x20); /* movaps */
    edx = MEM32(eax + 0x20);
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    esi = ecx + 0x10;
    ecx = MEM32(ecx + 0xC);
    xmm4 = xmm3; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm3, 0x44); /* shufps */
    xmm7 = xmm3; /* movaps */
    xmm7 = XMM_SHUFFLE(xmm7, xmm3, 0xEE); /* shufps */
    xmm1 = xmm2; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm5, 0x44); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm5, 0xEE); /* shufps */
    xmm5 = xmm1; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm4, 0x88); /* shufps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm4, 0xDD); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0x55); /* shufps */
    xmm5 = XMM_MUL(xmm5, xmm3); /* mulps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm7, 0x88); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    xmm3 = XMM_MEM(esi + 0x20); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm5); /* addps */
    xmm5 = XMM_MEM(esi + 0x10); /* movaps */
    xmm6 = xmm0; /* movaps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm0, 0xAA); /* shufps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm6); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm2); /* addps */
    xmm2 = XMM_MEM(esi); /* movaps */
    XMM_STORE(esp + 0x20, xmm1); /* movaps */
    xmm1 = XMM_MEM(esi + 0x30); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm4 = xmm3; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm3, 0x44); /* shufps */
    xmm7 = xmm3; /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm5, 0x44); /* shufps */
    xmm7 = XMM_SHUFFLE(xmm7, xmm3, 0xEE); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm5, 0xEE); /* shufps */
    xmm5 = xmm1; /* movaps */
    MEM32(esp + 0x40) = edx;
    edx = MEM32(eax + 0x24);
    edi = MEM32(ebp + 0x10);
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0x55); /* shufps */
    MEM32(esp + 0x44) = edx;
    xmm5 = XMM_SHUFFLE(xmm5, xmm4, 0xDD); /* shufps */
    xmm5 = XMM_MUL(xmm5, xmm3); /* mulps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm4, 0x88); /* shufps */
    xmm3 = xmm0; /* movaps */
    PUSH32(esp, edi);
    xmm6 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    edx = esp + 0x24;
    xmm6 = XMM_SHUFFLE(xmm6, xmm0, 0xAA); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm7, 0x88); /* shufps */
    PUSH32(esp, edx);
    xmm2 = XMM_MUL(xmm2, xmm6); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm5); /* addps */
    xmm1 = XMM_ADD(xmm1, xmm2); /* addps */
    edx = esp + 0x14;
    XMM_STORE(esp + 0x38, xmm1); /* movaps */
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x001924B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001924B0u); } /* indirect call */
    }

loc_001924B3: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001924D4; /* je: equal / zero */

loc_001924BB: ;
    xmm0 = XMM_MEM(edi); /* movaps */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    XMM_STORE(esp + 0x18, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001924D0u); RECOMP_ABI_CALL(0x001CF840u, sub_001CF840); /* call 0x001CF840 */

loc_001924D0: ;
    SET_LO8(ecx, MEM8(esp + 0xC));

loc_001924D4: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    MEM8(eax) = LO8(ecx);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001924F0
 * Original: 0x001924F0 - 0x00192640 (336 bytes, 104 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001924F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001924F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x20);
    xmm3 = XMM_MEM(esi + 0x30); /* movaps */
    xmm1 = XMM_MEM(esi + 0x40); /* movaps */
    xmm0 = XMM_MEM(ecx); /* movaps */
    xmm2 = XMM_MEM(esi + 0x10); /* movaps */
    xmm5 = XMM_MEM(esi + 0x20); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    edx = MEM32(ecx + 0x24);
    MEM32(esp + 0x3C) = eax;
    eax = esi + 0x10;
    xmm4 = xmm3; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm3, 0x44); /* shufps */
    xmm7 = xmm3; /* movaps */
    xmm7 = XMM_SHUFFLE(xmm7, xmm3, 0xEE); /* shufps */
    xmm1 = xmm2; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm5, 0x44); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm5, 0xEE); /* shufps */
    xmm5 = xmm1; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm4, 0x88); /* shufps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm4, 0xDD); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0x55); /* shufps */
    xmm5 = XMM_MUL(xmm5, xmm3); /* mulps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm7, 0x88); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    xmm3 = XMM_MEM(eax + 0x20); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm5); /* addps */
    xmm5 = XMM_MEM(eax + 0x10); /* movaps */
    xmm6 = xmm0; /* movaps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm0, 0xAA); /* shufps */
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm6); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm2); /* addps */
    xmm2 = XMM_MEM(eax); /* movaps */
    XMM_STORE(esp + 0x1C, xmm1); /* movaps */
    xmm1 = XMM_MEM(eax + 0x30); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
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
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    ecx = MEM32(edi + 8);
    xmm5 = XMM_SHUFFLE(xmm5, xmm4, 0xDD); /* shufps */
    xmm5 = XMM_MUL(xmm5, xmm3); /* mulps */
    xmm3 = xmm0; /* movaps */
    xmm6 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm4, 0x88); /* shufps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm0, 0xAA); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm7, 0x88); /* shufps */
    PUSH32(esp, eax);
    xmm2 = XMM_MUL(xmm2, xmm6); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm5); /* addps */
    MEM32(esp + 0x48) = edx;
    xmm1 = XMM_ADD(xmm1, xmm2); /* addps */
    XMM_STORE(esp + 0x34, xmm1); /* movaps */
    xmm0 = XMM_MEM(ecx); /* movaps */
    eax = ecx;
    XMM_STORE(esp + 0x54, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x78;
    XMM_STORE(esp + 0x68, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00192609u); RECOMP_ABI_CALL(0x001CF890u, sub_001CF890); /* call 0x001CF890 */

loc_00192609: ;
    MEM32(esp + 0x1C) = edi;
    ecx = esp + 0x50;
    eax = MEM32(esi + 0xC);
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(edi + 4);
    MEM32(esp + 0x10) = eax;
    ecx = eax;
    eax = MEM32(ebp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00192638u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00192635u); } /* indirect call */
    }

loc_00192638: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00192640
 * Original: 0x00192640 - 0x0019268A (74 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00192640: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x2F6A40;
    MEM16(eax + 6) = 1;
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;
    MEM32(eax) = 0x2F6C88;
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x20); /* movaps */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x40); /* movaps */
    XMM_STORE(eax + 0x40, xmm0); /* movaps */
    ecx = MEM32(ecx + 4);
    MEM32(eax + 0xC) = ecx;
    MEM16(ecx + 6) = MEM16(ecx + 6) + 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00192690
 * Original: 0x00192690 - 0x001926AA (26 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192690(void)
{

loc_00192690: ;
    ecx = MEM32(ecx + 0xD0);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0x10;
    MEM8(eax + 4) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001926B0
 * Original: 0x001926B0 - 0x001926D7 (39 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001926B0(void)
{

loc_001926B0: ;
    eax = MEM32(ecx + 0x30);
    edx = MEM32(eax);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x30);
    edx = MEM32(edx + 0x10);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x30);
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001926E0
 * Original: 0x001926E0 - 0x00192876 (406 bytes, 126 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001926E0(void)
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

loc_001926E0: ;
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
    ebx = MEM32(ecx + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x34);
    MEM32(esp + 0xC) = 0xFF7FFFFFu;
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    xmm4 = XMM_SHUFFLE(xmm4, xmm4, 0); /* shufps */
    esi = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0019283D; /* jle: less or equal (signed <=) */

loc_00192713: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(ecx + 4);
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0xC) = edx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0xC) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm2, 0); /* shufps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm3, 0); /* shufps */
    ecx = 3;
    /* nop */

loc_00192750: ;
    xmm0 = XMM_MEM(esi + 0x20); /* movaps */
    xmm5 = xmm1; /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm0); /* mulps */
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    xmm6 = xmm2; /* movaps */
    xmm6 = XMM_MUL(xmm6, xmm0); /* mulps */
    xmm0 = XMM_MEM(esi); /* movaps */
    xmm7 = xmm3; /* movaps */
    xmm7 = XMM_MUL(xmm7, xmm0); /* mulps */
    xmm0 = xmm7; /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm6); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm5); /* addps */
    xmm5 = xmm4; /* movaps */
    xmm5 = XMM_CMP_PRED(xmm5, xmm0, 1); /* cmpltps */
    edx = XMM_MOVEMASK(xmm5); /* movmskps */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    if (CMP_EQ(_fa, _fb)) goto loc_0019282C; /* je: equal / zero */

loc_0019278D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001927A0; /* ja: above (unsigned >) */

loc_00192792: ;
    edx = ZX8(MEM8(edx + 0x192894));
    { uint32_t _jt = MEM32(edx * 4 + 0x192878); /* switch: 7 entries, 7 targets */
    if (_jt == 0x001927A0u) goto loc_001927A0;
    if (_jt == 0x001927AFu) goto loc_001927AF;
    if (_jt == 0x001927CDu) goto loc_001927CD;
    if (_jt == 0x001927D6u) goto loc_001927D6;
    if (_jt == 0x001927F4u) goto loc_001927F4;
    if (_jt == 0x0019280Cu) goto loc_0019280C;
    if (_jt == 0x00192815u) goto loc_00192815;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001927A0: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001927D6; /* jne: not equal / not zero */

loc_001927AF: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001927FD; /* jne: not equal / not zero */

loc_001927BE: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00192815; /* jne: not equal / not zero */

loc_001927CD: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = ecx + -3;
    goto loc_0019281B;

loc_001927D6: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001927FD; /* jne: not equal / not zero */

loc_001927E5: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00192815; /* jne: not equal / not zero */

loc_001927F4: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = ecx + -2;
    goto loc_0019281B;

loc_001927FD: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00192815; /* jne: not equal / not zero */

loc_0019280C: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = ecx + -1;
    goto loc_0019281B;

loc_00192815: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    eax = ecx;

loc_0019281B: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm4 = xmm0; /* movaps */

loc_0019282C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + -3;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00192750; /* jl: less (signed <) */

loc_0019283D: ;
    esi = MEM32(ebp + 0xC);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx + ecx * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(ecx + edx * 4);
    MEM32(esi) = edi;
    edi = MEM32(ecx + edx * 4 + 0x10);
    MEM32(esi + 4) = edi;
    ecx = MEM32(ecx + edx * 4 + 0x20);
    MEM32(esi + 8) = ecx;
    eax = eax | 0x3F000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
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
 * sub_001928B0
 * Original: 0x001928B0 - 0x00192A3E (398 bytes, 132 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001928B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001928B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001929E7; /* jl: less (signed <) */

loc_001928D2: ;
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x20) = edx;
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = esi + edx * 4;
    eax = ebp + 0x18;
    MEM32(esp + 0x1C) = edx;

loc_001928E5: ;
    edi = MEM32(ecx + 0x30);
    esi = ZX16(MEM16(ebx));
    edx = esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = edx + edx * 2;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi;
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(edx + edi * 4);
    MEM32(ebp) = ecx;
    ecx = MEM32(edx + edi * 4 + 0x10);
    MEM32(eax + -20) = ecx;
    edx = MEM32(edx + edi * 4 + 0x20);
    MEM32(eax + -16) = edx;
    ecx = MEM32(esp + 0x10);
    esi = esi | 0x3F000000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + -12) = esi;
    esi = ZX16(MEM16(ebx + 2));
    edi = MEM32(ecx + 0x30);
    edx = esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = edx + edx * 2;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi;
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(edx + edi * 4);
    MEM32(eax + -8) = ecx;
    ecx = MEM32(edx + edi * 4 + 0x10);
    MEM32(eax + -4) = ecx;
    edx = MEM32(edx + edi * 4 + 0x20);
    MEM32(eax) = edx;
    ecx = MEM32(esp + 0x10);
    esi = esi | 0x3F000000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = esi;
    esi = ZX16(MEM16(ebx + 4));
    edi = MEM32(ecx + 0x30);
    edx = esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = edx + edx * 2;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi;
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(edx + edi * 4);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(edx + edi * 4 + 0x10);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(edx + edi * 4 + 0x20);
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x10) = edx;
    esi = esi | 0x3F000000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x14) = esi;
    esi = ZX16(MEM16(ebx + 6));
    edi = MEM32(ecx + 0x30);
    edx = esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = edx + edx * 2;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi;
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(edx + edi * 4);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(edx + edi * 4 + 0x10);
    MEM32(eax + 0x1C) = ecx;
    edx = MEM32(edx + edi * 4 + 0x20);
    ecx = MEM32(esp + 0x20);
    esi = esi | 0x3F000000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x40;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x10);
    if ((_fa != 0)) goto loc_001928E5; /* jne: not equal / not zero */

loc_001929E3: ;
    esi = MEM32(esp + 0x1C);

loc_001929E7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00192A36; /* jl: less (signed <) */

loc_001929EB: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = esi;

loc_001929F0: ;
    edx = ZX16(MEM16(ebx));
    esi = MEM32(ecx + 0x30);
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edx;
    esi = esi & 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(eax + esi * 4);
    MEM32(ebp) = edi;
    edi = MEM32(eax + esi * 4 + 0x10);
    MEM32(ebp + 4) = edi;
    eax = MEM32(eax + esi * 4 + 0x20);
    MEM32(ebp + 8) = eax;
    eax = MEM32(esp + 0x20);
    edx = edx | 0x3F000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0xC) = edx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = eax;
    if ((_fa != 0)) goto loc_001929F0; /* jne: not equal / not zero */

loc_00192A36: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00192A40
 * Original: 0x00192A40 - 0x00192BA1 (353 bytes, 112 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00192A40(void)
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

loc_00192A40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 0xD8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    eax = MEM32(edi + 0x14);
    MEM32(esp + 0x14) = 0xBF800000u;
    MEM32(esp + 0x1C) = eax;
    if ((_fas < 0)) goto loc_00192B74; /* js: sign (negative) */

loc_00192A6A: ;
    eax = MEM32(ebp + 0xC);
    xmm3 = XMM_MEM(eax); /* movaps */
    xmm4 = XMM_MEM(eax + 0x10); /* movaps */
    eax = MEM32(ecx + 0xD4);
    xmm5 = XMM_MEM(esp + 0x20); /* movaps */
    esi = edx;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00192A86: ;
    xmm1 = XMM_MEM(esi); /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm3); /* mulps */
    xmm7 = xmm0; /* movaps */
    xmm7 = XMM_SHUFFLE(xmm7, xmm0, 0x55); /* shufps */
    xmm6 = xmm0; /* movaps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm0, 0xAA); /* shufps */
    xmm7.f[0] = xmm7.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0xFF); /* shufps */
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    xmm7 = XMM_ADD(xmm7, xmm6); /* addps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm4); /* mulps */
    ecx = esp + 0x10;
    xmm6 = xmm0; /* movaps */
    MEMF(ecx) = xmm7.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    xmm6 = XMM_SHUFFLE(xmm6, xmm0, 0xAA); /* shufps */
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    eax = esp + 0x18;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_ADD(xmm2, xmm6); /* addps */
    MEMF(eax) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    if (TEST_NZ(_fa, _fb)) goto loc_00192B22; /* jne: not equal / not zero */

loc_00192AFB: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00192B74; /* je: equal / zero */

loc_00192B00: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x10) / fp_top()); /* fdivr dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00192B46; /* jp: parity */

loc_00192B19: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm5 = xmm1; /* movaps */
    goto loc_00192B48;

loc_00192B22: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00192B57; /* jne: not equal / not zero */

loc_00192B27: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x10) / fp_top()); /* fdivr dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00192B46; /* jnp: not parity */

loc_00192B40: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00192B48;

loc_00192B46: ;
    fp_pop(); /* fstp st(0) */

loc_00192B48: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00192B74; /* jnp: not parity */

loc_00192B57: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00192A86; /* jge: greater or equal (signed >=) */

loc_00192B63: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00192B82; /* jp: parity */

loc_00192B74: ;
    eax = MEM32(ebp + 8);
    MEM8(eax) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00192B82: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ebp + 8);
    XMM_STORE(edi, xmm5); /* movaps */
    MEM32(edi + 0x14) = ecx;
    MEM32(edi + 0x10) = 0xFFFFFFFFu;
    POP32(esp, edi);
    MEM8(eax) = 1;
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
 * sub_00192BB0
 * Original: 0x00192BB0 - 0x00192C83 (211 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00192BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00192BB0: ;
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
    edx = MEM32(ebp + 0xC);
    xmm0 = XMM_MEM(edx); /* movaps */
    xmm3 = XMM_MEM(0x2F6A20); /* movaps */
    xmm2 = XMM_MEM(eax + 0x20); /* movaps */
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xAA); /* shufps */
    xmm4 = XMM_MUL(xmm4, xmm2); /* mulps */
    xmm5 = xmm0; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0); /* shufps */
    xmm2 = xmm4; /* movaps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0x55); /* shufps */
    xmm2 = XMM_AND(xmm2, xmm3); /* andps */
    MEM32(esp + 0xC) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    edx = MEM32(ebp + 0x10);
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm4 = XMM_MUL(xmm4, xmm1); /* mulps */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm1); /* mulps */
    xmm5 = XMM_AND(xmm5, xmm3); /* andps */
    xmm4 = XMM_AND(xmm4, xmm3); /* andps */
    xmm0 = xmm5; /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm4); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
    xmm1 = XMM_MEM(0x2F6A30); /* movaps */
    xmm0 = XMM_XOR(xmm0, xmm1); /* xorps */
    XMM_STORE(ecx, xmm0); /* movaps */
    xmm0 = XMM_MEM(edx); /* movaps */
    xmm1 = XMM_MEM(eax + 0x30); /* movaps */
    xmm3 = XMM_MEM(eax + 0x20); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm2 = XMM_MEM(eax + 0x10); /* movaps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(ecx + 0x10, xmm1); /* movaps */
    xmm1 = XMM_MEM(ecx); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(ecx, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00192C90
 * Original: 0x00192C90 - 0x00192DFF (367 bytes, 118 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00192C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00192C90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0xD0);
    edx = MEM32(ecx + 0x30);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, edi);
    esi = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00192D71; /* jl: less (signed <) */

loc_00192CB4: ;
    ebx = eax + 1;
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebx;
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = eax + edi * 4;

loc_00192CC1: ;
    edi = MEM32(edx);
    MEM32(esp + 0x10) = edi;
    edi = MEM32(edx + 0x10);
    MEM32(esp + 0x14) = edi;
    edi = MEM32(edx + 0x20);
    MEM32(esp + 0x18) = edi;
    edi = MEM32(ecx + 0xC);
    MEM32(esp + 0x1C) = edi;
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    edi = esi;
    XMM_STORE(edi, xmm0); /* movaps */
    edi = MEM32(edx + 4);
    MEM32(esp + 0x10) = edi;
    edi = MEM32(edx + 0x14);
    MEM32(esp + 0x14) = edi;
    edi = MEM32(edx + 0x24);
    MEM32(esp + 0x18) = edi;
    edi = MEM32(ecx + 0xC);
    MEM32(esp + 0x1C) = edi;
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi;
    XMM_STORE(edi, xmm0); /* movaps */
    edi = MEM32(edx + 8);
    MEM32(esp + 0x10) = edi;
    edi = MEM32(edx + 0x18);
    MEM32(esp + 0x14) = edi;
    edi = MEM32(edx + 0x28);
    MEM32(esp + 0x18) = edi;
    edi = MEM32(ecx + 0xC);
    MEM32(esp + 0x1C) = edi;
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi;
    XMM_STORE(edi, xmm0); /* movaps */
    edi = MEM32(edx + 0xC);
    MEM32(esp + 0x10) = edi;
    edi = MEM32(edx + 0x1C);
    MEM32(esp + 0x14) = edi;
    edi = MEM32(edx + 0x2C);
    MEM32(esp + 0x18) = edi;
    edi = MEM32(ecx + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = edi;
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    edi = esi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    XMM_STORE(edi, xmm0); /* movaps */
    if ((_fa != 0)) goto loc_00192CC1; /* jne: not equal / not zero */

loc_00192D6E: ;
    ebx = MEM32(ebp + 8);

loc_00192D71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00192D9D; /* jl: less (signed <) */

loc_00192D75: ;
    edi = MEM32(edx);
    MEM32(esp + 0x10) = edi;
    edi = MEM32(edx + 0x10);
    MEM32(esp + 0x14) = edi;
    edi = MEM32(edx + 0x20);
    MEM32(esp + 0x18) = edi;
    edi = MEM32(ecx + 0xC);
    MEM32(esp + 0x1C) = edi;
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    edi = esi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(edi, xmm0); /* movaps */

loc_00192D9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00192DCB; /* jl: less (signed <) */

loc_00192DA2: ;
    edi = MEM32(edx + 4);
    MEM32(esp + 0x10) = edi;
    edi = MEM32(edx + 0x14);
    MEM32(esp + 0x14) = edi;
    edi = MEM32(edx + 0x24);
    MEM32(esp + 0x18) = edi;
    edi = MEM32(ecx + 0xC);
    MEM32(esp + 0x1C) = edi;
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    edi = esi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(edi, xmm0); /* movaps */

loc_00192DCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00192DF4; /* jl: less (signed <) */

loc_00192DD0: ;
    eax = MEM32(edx + 8);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edx + 0x18);
    edx = MEM32(edx + 0x28);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esi, xmm0); /* movaps */

loc_00192DF4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00192E00
 * Original: 0x00192E00 - 0x00192E28 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192E00(void)
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

loc_00192E00: ;
    eax = MEM32(esp + 0xC);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    edx = ecx + 0x20;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00192E22u); RECOMP_ABI_CALL(0x00192BB0u, sub_00192BB0); /* call 0x00192BB0 */

loc_00192E22: ;
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
 * sub_00192E30
 * Original: 0x00192E30 - 0x00192FF8 (456 bytes, 157 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00192E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00192E30: ;
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
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00192E47u); RECOMP_ABI_CALL(0x00190890u, sub_00190890); /* call 0x00190890 */

loc_00192E47: ;
    ecx = MEM32(edi + 0x1C);
    edx = MEM32(esi + 0xD8);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00192E97; /* jge: greater or equal (signed >=) */

loc_00192E5B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00192E74; /* js: sign (negative) */

loc_00192E5F: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00192E74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00192E71u); } /* indirect call */
    }

loc_00192E74: ;
    eax = MEM32(esi + 0xD8);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00192E8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00192E88u); } /* indirect call */
    }

loc_00192E8B: ;
    MEM32(edi + 0x14) = eax;
    eax = MEM32(esi + 0xD8);
    MEM32(edi + 0x1C) = eax;

loc_00192E97: ;
    ecx = MEM32(esi + 0xD8);
    eax = MEM32(edi + 0x14);
    MEM32(edi + 0x18) = ecx;
    edx = MEM32(esi + 0xD8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(esi + 0xD4);
    if (CMP_LE(_fas, _fbs)) goto loc_00192EC2; /* jle: less or equal (signed <=) */

loc_00192EB3: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00192EB5: ;
    xmm0 = XMM_MEM(ecx + eax); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00192EB5; /* jne: not equal / not zero */

loc_00192EC2: ;
    eax = MEM32(edi + 0x10);
    ebx = MEM32(esi + 0xD0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_00192EF3; /* jge: greater or equal (signed >=) */

loc_00192EDB: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00192EE3; /* jl: less (signed <) */

loc_00192EE1: ;
    eax = ebx;

loc_00192EE3: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00192EECu); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_00192EEC: ;
    edi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00192EF3: ;
    MEM32(edi + 4) = ebx;
    eax = MEM32(esi + 0xD0);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00192FEF; /* jle: less or equal (signed <=) */

loc_00192F06: ;
    MEM32(esp + 0x2C) = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00192F10: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x30);
    ecx = edi;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(edx + eax + 0x20); /* movaps */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00192F4F; /* je: equal / zero */

loc_00192F37: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00192F49; /* je: equal / zero */

loc_00192F3A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00192F43; /* je: equal / zero */

loc_00192F3D: ;
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xFF); /* shufps */
    goto loc_00192F53;

loc_00192F43: ;
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    goto loc_00192F53;

loc_00192F49: ;
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x55); /* shufps */
    goto loc_00192F53;

loc_00192F4F: ;
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */

loc_00192F53: ;
    eax = esp + 0x1C;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(edx + 0x10); /* movaps */
    eax = ecx;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00192F7E; /* je: equal / zero */

loc_00192F66: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00192F78; /* je: equal / zero */

loc_00192F69: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00192F72; /* je: equal / zero */

loc_00192F6C: ;
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xFF); /* shufps */
    goto loc_00192F82;

loc_00192F72: ;
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    goto loc_00192F82;

loc_00192F78: ;
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x55); /* shufps */
    goto loc_00192F82;

loc_00192F7E: ;
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */

loc_00192F82: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 0x18;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(edx); /* movaps */
    if ((_fa == 0)) goto loc_00192FAA; /* je: equal / zero */

loc_00192F92: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00192FA4; /* je: equal / zero */

loc_00192F95: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00192F9E; /* je: equal / zero */

loc_00192F98: ;
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xFF); /* shufps */
    goto loc_00192FAE;

loc_00192F9E: ;
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    goto loc_00192FAE;

loc_00192FA4: ;
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x55); /* shufps */
    goto loc_00192FAE;

loc_00192FAA: ;
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */

loc_00192FAE: ;
    eax = MEM32(esp + 0x18);
    ecx = esp + 0x14;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(edx);
    MEM32(esp + 0x28) = ecx;
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(eax + ebx, xmm0); /* movaps */
    eax = MEM32(esi + 0xD0);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00192F10; /* jl: less (signed <) */

loc_00192FEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00193000
 * Original: 0x00193000 - 0x00193245 (581 bytes, 201 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00193000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193000: ;
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
    edi = MEM32(ebp + 0x10);
    eax = edi + 3;
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    esi = ecx + 0x30;
    MEM32(ecx + 0xD0) = edi;
    eax = MEM32(esi + 8);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00193051; /* jge: greater or equal (signed >=) */

loc_0019303D: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00193045; /* jl: less (signed <) */

loc_00193043: ;
    eax = ebx;

loc_00193045: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019304Eu); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_0019304E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00193051: ;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    MEM32(esi + 4) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00193153; /* jl: less (signed <) */

loc_00193062: ;
    MEM32(esp + 0x14) = 1;
    /* nop */

loc_00193070: ;
    ebx = MEM32(eax);
    edx = ecx;
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx + edx * 2;
    edi = ecx;
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edi + edx * 4;
    edi = MEM32(esi);
    MEM32(edi + edx * 4) = ebx;
    ebx = MEM32(eax + 4);
    edi = MEM32(esi);
    MEM32(edi + edx * 4 + 0x10) = ebx;
    ebx = MEM32(eax + 8);
    edi = MEM32(esi);
    MEM32(edi + edx * 4 + 0x20) = ebx;
    edx = MEM32(ebp + 0xC);
    ebx = MEM32(eax + edx);
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi;
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx + edx * 2;
    edx = edi + edx * 4;
    edi = MEM32(esi);
    MEM32(edi + edx * 4) = ebx;
    ebx = MEM32(eax + 4);
    edi = MEM32(esi);
    MEM32(edi + edx * 4 + 0x10) = ebx;
    ebx = MEM32(eax + 8);
    edi = MEM32(esi);
    MEM32(edi + edx * 4 + 0x20) = ebx;
    edx = MEM32(ebp + 0xC);
    edi = MEM32(esp + 0x14);
    ebx = MEM32(eax + edx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi + 1;
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx + edx * 2;
    edx = edi + edx * 4;
    edi = MEM32(esi);
    MEM32(edi + edx * 4) = ebx;
    ebx = MEM32(eax + 4);
    edi = MEM32(esi);
    MEM32(edi + edx * 4 + 0x10) = ebx;
    ebx = MEM32(eax + 8);
    edi = MEM32(esi);
    MEM32(edi + edx * 4 + 0x20) = ebx;
    edx = MEM32(ebp + 0xC);
    edi = MEM32(esp + 0x14);
    ebx = MEM32(eax + edx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi + 2;
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFFEu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx + edx * 2;
    edx = edi + edx * 4;
    edi = MEM32(esi);
    MEM32(edi + edx * 4) = ebx;
    ebx = MEM32(eax + 4);
    edi = MEM32(esi);
    MEM32(edi + edx * 4 + 0x10) = ebx;
    ebx = MEM32(eax + 8);
    edi = MEM32(esi);
    MEM32(edi + edx * 4 + 0x20) = ebx;
    edx = MEM32(esp + 0x14);
    edi = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi + -3;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00193070; /* jl: less (signed <) */

loc_00193153: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0019318D; /* jge: greater or equal (signed >=) */

loc_00193157: ;
    ebx = MEM32(eax);
    edx = ecx;
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx;
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx + edx * 2;
    edx = edi + edx * 4;
    edi = MEM32(esi);
    MEM32(edi + edx * 4) = ebx;
    ebx = MEM32(eax + 4);
    edi = MEM32(esi);
    MEM32(edi + edx * 4 + 0x10) = ebx;
    ebx = MEM32(eax + 8);
    edi = MEM32(esi);
    MEM32(edi + edx * 4 + 0x20) = ebx;
    ebx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 0x10);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00193157; /* jl: less (signed <) */

loc_0019318D: ;
    ebx = MEM32(ebp + 0xC);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001931D5; /* jge: greater or equal (signed >=) */

loc_0019319A: ;
    /* nop */

loc_001931A0: ;
    ebx = MEM32(eax);
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = ecx;
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx + edx * 2;
    edx = edi + edx * 4;
    edi = MEM32(esi);
    MEM32(edi + edx * 4) = ebx;
    edi = MEM32(esi);
    ebx = MEM32(eax + 4);
    MEM32(edi + edx * 4 + 0x10) = ebx;
    edi = MEM32(esi);
    ebx = MEM32(eax + 8);
    MEM32(edi + edx * 4 + 0x20) = ebx;
    edx = MEM32(esp + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001931A0; /* jl: less (signed <) */

loc_001931D2: ;
    edi = MEM32(ebp + 0x10);

loc_001931D5: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001931E8u); RECOMP_ABI_CALL(0x001AFD50u, sub_001AFD50); /* call 0x001AFD50 */

loc_001931E8: ;
    eax = MEM32(esp + 0x2C);
    xmm2 = XMM_MEM(esp + 0x30); /* movaps */
    xmm1 = XMM_MEM(esp + 0x40); /* movaps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    xmm3 = XMM_MEM(eax + 0x20); /* movaps */
    MEM32(esp + 0x2C) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = XMM_SUB(xmm1, xmm2); /* subps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0); /* shufps */
    xmm4 = XMM_MUL(xmm4, xmm3); /* mulps */
    XMM_STORE(eax + 0x20, xmm4); /* movaps */
    POP32(esp, edi);
    XMM_STORE(eax + 0x10, xmm1); /* movaps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    POP32(esp, esi);
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(eax + 0x10, xmm2); /* movaps */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00193250
 * Original: 0x00193250 - 0x0019335E (270 bytes, 82 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193250(void)
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

loc_00193250: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244261);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    fp_push(MEMF(0x30ED84)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    MEM16(esi + 6) = 1;
    MEM32(esi + 8) = ebx;
    MEM32(esi) = 0x2F6CB8;
    eax = esi + 0x40;
    MEM32(esp + 0x18) = ebx;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = 0x80000003u;
    MEM32(esi + 0xD4) = ebx;
    MEM32(esi + 0xD8) = ebx;
    MEM32(esi + 0xDC) = 0x80000000u;
    ecx = MEM32(esi + 0xDC);
    edi = MEM32(esp + 0x2C);
    edx = MEM32(edi + 4);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM8(esp + 0x18) = 2;
    if (CMP_GE(_fas, _fbs)) goto loc_0019330B; /* jge: greater or equal (signed >=) */

loc_001932D0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001932E8; /* js: sign (negative) */

loc_001932D4: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001932E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001932E5u); } /* indirect call */
    }

loc_001932E8: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001932FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001932F9u); } /* indirect call */
    }

loc_001932FC: ;
    MEM32(esi + 0xD4) = eax;
    eax = MEM32(edi + 4);
    MEM32(esi + 0xDC) = eax;

loc_0019330B: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(esi + 0xD4);
    MEM32(esi + 0xD8) = ecx;
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    ecx = MEM32(edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00193332; /* jle: less or equal (signed <=) */

loc_00193323: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00193325: ;
    xmm0 = XMM_MEM(ecx + eax); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00193325; /* jne: not equal / not zero */

loc_00193332: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00193348u); RECOMP_ABI_CALL(0x00193000u, sub_00193000); /* call 0x00193000 */

loc_00193348: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00193360
 * Original: 0x00193360 - 0x00193475 (277 bytes, 84 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193360: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244261);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    MEM32(esi) = 0x2F6A40;
    MEM16(esi + 6) = 1;
    eax = MEM32(edi);
    MEM32(esi + 8) = eax;
    MEM32(esi) = 0x2F6A68;
    ecx = MEM32(edi + 4);
    MEM32(esp + 0xC) = esi;
    MEM32(esi + 0xC) = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2F6CB8;
    edx = esi + 0x40;
    MEM32(esp + 0x18) = ebx;
    MEM32(esi + 0x30) = edx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = 0x80000003u;
    MEM32(esi + 0xD4) = ebx;
    MEM32(esi + 0xD8) = ebx;
    MEM32(esi + 0xDC) = 0x80000000u;
    ecx = MEM32(esi + 0xDC);
    edx = MEM32(edi + 0x18);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM8(esp + 0x18) = 2;
    if (CMP_GE(_fas, _fbs)) goto loc_00193426; /* jge: greater or equal (signed >=) */

loc_001933EB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00193403; /* js: sign (negative) */

loc_001933EF: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00193403u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193400u); } /* indirect call */
    }

loc_00193403: ;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00193417u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193414u); } /* indirect call */
    }

loc_00193417: ;
    MEM32(esi + 0xD4) = eax;
    eax = MEM32(edi + 0x18);
    MEM32(esi + 0xDC) = eax;

loc_00193426: ;
    ecx = MEM32(edi + 0x18);
    eax = MEM32(esi + 0xD4);
    MEM32(esi + 0xD8) = ecx;
    edx = MEM32(edi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    ecx = MEM32(edi + 0x14);
    if (CMP_LE(_fas, _fbs)) goto loc_0019344E; /* jle: less or equal (signed <=) */

loc_0019343F: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00193441: ;
    xmm0 = XMM_MEM(ecx + eax); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00193441; /* jne: not equal / not zero */

loc_0019344E: ;
    edx = MEM32(edi + 0xC);
    eax = MEM32(edi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0019345Fu); RECOMP_ABI_CALL(0x00193000u, sub_00193000); /* call 0x00193000 */

loc_0019345F: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
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
 * sub_00193480
 * Original: 0x00193480 - 0x001934A8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193480: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00193488u); RECOMP_ABI_CALL(0x001934B0u, sub_001934B0); /* call 0x001934B0 */

loc_00193488: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001934A2; /* je: equal / zero */

loc_0019348F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001934A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019349Fu); } /* indirect call */
    }

loc_001934A2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001934B0
 * Original: 0x001934B0 - 0x00193546 (150 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001934B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001934B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244283);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = MEM32(esi + 0xDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 1;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001934FD; /* js: sign (negative) */

loc_001934E0: ;
    edx = MEM32(esi + 0xD4);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001934FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001934FAu); } /* indirect call */
    }

loc_001934FD: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00193526; /* js: sign (negative) */

loc_00193509: ;
    edx = MEM32(esi + 0x30);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x00193526u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193523u); } /* indirect call */
    }

loc_00193526: ;
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00193535u); RECOMP_ABI_CALL(0x00015C50u, sub_00015C50); /* call 0x00015C50 */

loc_00193535: ;
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
 * sub_00193550
 * Original: 0x00193550 - 0x00193554 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193550(void)
{

loc_00193550: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_00193560
 * Original: 0x00193560 - 0x00193572 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193560: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019356F; /* jl: less (signed <) */

loc_0019356C: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0019356F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00193580
 * Original: 0x00193580 - 0x00193634 (180 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00193580(void)
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

loc_00193580: ;
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
    eax = 0x7F7FFFFF;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = ebx;
    eax = 0xFF7FFFFFu;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, edi);
    MEM32(esi + 0x18) = eax;
    edi = ecx;
    MEM32(esi + 0x1C) = ebx;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00193603; /* jle: less or equal (signed <=) */

loc_001935B9: ;
    MEM32(esp + 0xC) = ebx;
    /* nop */

loc_001935C0: ;
    eax = MEM32(edi + 0x10);
    edx = MEM32(esp + 0xC);
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001935D7u); RECOMP_ABI_CALL(0x001CF700u, sub_001CF700); /* call 0x001CF700 */

loc_001935D7: ;
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    xmm1 = XMM_MEM(esi); /* movaps */
    ecx = MEM32(esp + 0xC);
    xmm1 = XMM_MIN(xmm1, xmm0); /* minps */
    XMM_STORE(esi, xmm1); /* movaps */
    xmm1 = XMM_MEM(esi + 0x10); /* movaps */
    xmm1 = XMM_MAX(xmm1, xmm0); /* maxps */
    XMM_STORE(esi + 0x10, xmm1); /* movaps */
    eax = MEM32(edi + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001935C0; /* jl: less (signed <) */

loc_00193603: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    xmm1 = XMM_MEM(esi); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    POP32(esp, edi);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(esi, xmm1); /* movaps */
    xmm1 = XMM_MEM(esi + 0x10); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(esi + 0x10, xmm1); /* movaps */
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
 * sub_00193640
 * Original: 0x00193640 - 0x001936BA (122 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193640(void)
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

loc_00193640: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00193663; /* je: equal / zero */

loc_00193648: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    MEM16(eax + 6) = 1;
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = 0;
    MEM32(eax) = 0x2F6D00;
    goto loc_00193665;

loc_00193663: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00193665: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1C);
    edx = edx + edx * 2;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = MEM32(edx + esi);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x10);
    xmm0 = XMM_MEM(esi + edi); /* movaps */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    esi = MEM32(ecx + 0x1C);
    esi = MEM32(esi + edx + 4);
    edi = MEM32(ecx + 0x10);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(esi + edi); /* movaps */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    esi = MEM32(ecx + 0x1C);
    edx = MEM32(esi + edx + 8);
    esi = MEM32(ecx + 0x10);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(edx + esi); /* movaps */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001936C0
 * Original: 0x001936C0 - 0x00193743 (131 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001936C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001936C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244298);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0019370B; /* js: sign (negative) */

loc_001936EC: ;
    edx = MEM32(esi + 0xC);
    ecx = MEM32(0x4409AC);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x0019370Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193707u); } /* indirect call */
    }

loc_0019370A: ;
    POP32(esp, edi);

loc_0019370B: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00193733; /* js: sign (negative) */

loc_0019371A: ;
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
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00193733u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193730u); } /* indirect call */
    }

loc_00193733: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00193750
 * Original: 0x00193750 - 0x0019397A (554 bytes, 194 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00193750: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2442D6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM16(esi + 6) = 1;
    MEM32(esi) = 0x2F6A40;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    MEM32(esi + 8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2F6D40;
    ecx = 0x80000000u;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = ecx;
    MEM32(esp + 0x28) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = ecx;
    ecx = MEM32(ebx + 4);
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(ebx + 0xC);
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edi = edx;
    edi = edi >> 0x1F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebx + 8);
    ebp = edi;
    ebp = ebp | 0x80000000u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = ebp;
    ecx = MEM32(esi + 0x24);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM8(esp + 0x28) = 3;
    if (CMP_GE(_fas, _fbs)) goto loc_0019382A; /* jge: greater or equal (signed >=) */

loc_001937F4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00193810; /* js: sign (negative) */

loc_001937F8: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00193810u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019380Du); } /* indirect call */
    }

loc_00193810: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = edi + edi * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00193824u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193821u); } /* indirect call */
    }

loc_00193824: ;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x24) = edi;

loc_0019382A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = MEM32(esi + 0x1C);
    MEM32(esi + 0x20) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00193867; /* jle: less or equal (signed <=) */

loc_00193834: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x30) = edi;
    edi = edi;

loc_00193840: ;
    edx = ecx + eax;
    ebp = MEM32(edx);
    edi = eax;
    MEM32(edi) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(edi + 4) = ebp;
    edx = MEM32(edx + 8);
    MEM32(edi + 8) = edx;
    edx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = edx;
    if ((_fa != 0)) goto loc_00193840; /* jne: not equal / not zero */

loc_00193863: ;
    ebp = MEM32(esp + 0x1C);

loc_00193867: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ebx + 0x18);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001938AE; /* jge: greater or equal (signed >=) */

loc_00193878: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00193891; /* js: sign (negative) */

loc_0019387C: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x00193891u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019388Eu); } /* indirect call */
    }

loc_00193891: ;
    eax = MEM32(ebx + 0x18);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001938A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001938A2u); } /* indirect call */
    }

loc_001938A5: ;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebx + 0x18);
    MEM32(esi + 0x18) = eax;

loc_001938AE: ;
    ecx = MEM32(ebx + 0x18);
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(ebx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(ebx + 0x14);
    if (CMP_LE(_fas, _fbs)) goto loc_001938D0; /* jle: less or equal (signed <=) */

loc_001938C1: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001938C3: ;
    xmm0 = XMM_MEM(ecx + eax); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001938C3; /* jne: not equal / not zero */

loc_001938D0: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ebx + 0x24);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00193911; /* jge: greater or equal (signed >=) */

loc_001938E1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001938F7; /* js: sign (negative) */

loc_001938E5: ;
    edx = MEM32(esi + 0x28);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001938F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001938F4u); } /* indirect call */
    }

loc_001938F7: ;
    eax = MEM32(ebx + 0x24);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00193908u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193905u); } /* indirect call */
    }

loc_00193908: ;
    MEM32(esi + 0x28) = eax;
    eax = MEM32(ebx + 0x24);
    MEM32(esi + 0x30) = eax;

loc_00193911: ;
    ecx = MEM32(ebx + 0x24);
    eax = MEM32(esi + 0x28);
    MEM32(esi + 0x2C) = ecx;
    edx = MEM32(ebx + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ebx = MEM32(ebx + 0x20);
    if (CMP_LE(_fas, _fbs)) goto loc_00193939; /* jle: less or equal (signed <=) */

loc_00193924: ;
    ecx = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edx;
    /* nop */

loc_00193930: ;
    SET_LO8(edx, MEM8(ecx + eax));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00193930; /* jne: not equal / not zero */

loc_00193939: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM8(esp + 0x28) = 2;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00193963; /* js: sign (negative) */

loc_00193942: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    ebp = ebp & 0x7FFFFFFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp;
    eax = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00193963u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193960u); } /* indirect call */
    }

loc_00193963: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00193980
 * Original: 0x00193980 - 0x00193B4B (459 bytes, 160 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00193980: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2442E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x001939A8u); RECOMP_ABI_CALL(0x00196940u, sub_00196940); /* call 0x00196940 */

loc_001939A8: ;
    eax = MEM32(edi + 0xC);
    MEM32(esi + 4) = eax;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(edi + 0x1C);
    ebx = eax + eax * 2;
    ebp = ebx;
    ebp = ebp | 0x80000000u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebp;
    ecx = MEM32(esi + 0x10);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x24) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_00193A19; /* jge: greater or equal (signed >=) */

loc_001939E1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001939FE; /* js: sign (negative) */

loc_001939E5: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(0x4409AC);
    ebp = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ebp + 0x14); PUSH32(esp, 0x001939FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001939F7u); } /* indirect call */
    }

loc_001939FA: ;
    ebp = MEM32(esp + 0x18);

loc_001939FE: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = ebx * 4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00193A13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193A10u); } /* indirect call */
    }

loc_00193A13: ;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x10) = ebx;

loc_00193A19: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = MEM32(esi + 8);
    MEM32(esi + 0xC) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00193A3B; /* jle: less or equal (signed <=) */

loc_00193A23: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00193A30: ;
    edx = MEM32(ecx + eax);
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00193A30; /* jne: not equal / not zero */

loc_00193A3B: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(edi + 0x14);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00193A82; /* jge: greater or equal (signed >=) */

loc_00193A4C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00193A65; /* js: sign (negative) */

loc_00193A50: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(0x4409AC);
    ebx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x00193A65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193A62u); } /* indirect call */
    }

loc_00193A65: ;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00193A79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193A76u); } /* indirect call */
    }

loc_00193A79: ;
    MEM32(esi + 0x14) = eax;
    eax = MEM32(edi + 0x14);
    MEM32(esi + 0x1C) = eax;

loc_00193A82: ;
    ecx = MEM32(edi + 0x14);
    eax = MEM32(esi + 0x14);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(edi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(edi + 0x10);
    if (CMP_LE(_fas, _fbs)) goto loc_00193AAD; /* jle: less or equal (signed <=) */

loc_00193A95: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00193AA0;

    /* nop */

loc_00193AA0: ;
    xmm0 = XMM_MEM(ecx + eax); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00193AA0; /* jne: not equal / not zero */

loc_00193AAD: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(edi + 0x2C);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00193AEE; /* jge: greater or equal (signed >=) */

loc_00193ABE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00193AD4; /* js: sign (negative) */

loc_00193AC2: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(0x4409AC);
    ebx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x00193AD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193AD1u); } /* indirect call */
    }

loc_00193AD4: ;
    eax = MEM32(edi + 0x2C);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00193AE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193AE2u); } /* indirect call */
    }

loc_00193AE5: ;
    MEM32(esi + 0x20) = eax;
    eax = MEM32(edi + 0x2C);
    MEM32(esi + 0x28) = eax;

loc_00193AEE: ;
    ecx = MEM32(edi + 0x2C);
    eax = MEM32(esi + 0x20);
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(edi + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(edi + 0x28);
    if (CMP_LE(_fas, _fbs)) goto loc_00193B0E; /* jle: less or equal (signed <=) */

loc_00193B01: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edx;

loc_00193B05: ;
    SET_LO8(edx, MEM8(ecx + eax));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00193B05; /* jne: not equal / not zero */

loc_00193B0E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00193B36; /* js: sign (negative) */

loc_00193B1A: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    ebp = ebp & 0x7FFFFFFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    ebp = ebp << 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00193B36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193B33u); } /* indirect call */
    }

loc_00193B36: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00193B50
 * Original: 0x00193B50 - 0x00193B78 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193B50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00193B58u); RECOMP_ABI_CALL(0x00193B80u, sub_00193B80); /* call 0x00193B80 */

loc_00193B58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00193B72; /* je: equal / zero */

loc_00193B5F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00193B72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193B6Fu); } /* indirect call */
    }

loc_00193B72: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00193B80
 * Original: 0x00193B80 - 0x00193BF1 (113 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193B80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244313);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 1;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00193BC5; /* js: sign (negative) */

loc_00193BAC: ;
    edx = MEM32(esi + 0x28);
    ecx = MEM32(0x4409AC);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x00193BC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193BC1u); } /* indirect call */
    }

loc_00193BC4: ;
    POP32(esp, edi);

loc_00193BC5: ;
    ecx = esi + 0x10;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x00193BD2u); RECOMP_ABI_CALL(0x001936C0u, sub_001936C0); /* call 0x001936C0 */

loc_00193BD2: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00193BE1u); RECOMP_ABI_CALL(0x00015C50u, sub_00015C50); /* call 0x00015C50 */

loc_00193BE1: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00193C00
 * Original: 0x00193C00 - 0x00193C0F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193C00(void)
{

loc_00193C00: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00193C0Eu); RECOMP_ABI_CALL(0x00193980u, sub_00193980); /* call 0x00193980 */

loc_00193C0E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00193C10
 * Original: 0x00193C10 - 0x00193C16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193C10(void)
{

loc_00193C10: ;
    eax = 0x440A90;
    esp += 4; return; /* ret */

}

/**
 * sub_00193C20
 * Original: 0x00193C20 - 0x00193C71 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193C20: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24432B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x34);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00193C45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193C42u); } /* indirect call */
    }

loc_00193C45: ;
    MEM16(eax + 4) = 0x34;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00193C62u); RECOMP_ABI_CALL(0x00193750u, sub_00193750); /* call 0x00193750 */

loc_00193C62: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00193C80
 * Original: 0x00193C80 - 0x00193CB5 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193C80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00193C88u); RECOMP_ABI_CALL(0x001B2C20u, sub_001B2C20); /* call 0x001B2C20 */

loc_00193C88: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    ecx = 0x80000000u;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = ecx;
    MEM32(esi + 4) = 0x3D4CCCCD;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00193CC0
 * Original: 0x00193CC0 - 0x00193D29 (105 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193CC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244351);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00193D18; /* je: equal / zero */

loc_00193CEA: ;
    ecx = esi;
    PUSH32(esp, 0x00193CF1u); RECOMP_ABI_CALL(0x001B2C20u, sub_001B2C20); /* call 0x001B2C20 */

loc_00193CF1: ;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    eax = 0x80000000u;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 4) = 0x3D4CCCCD;

loc_00193D18: ;
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
 * sub_00193D30
 * Original: 0x00193D30 - 0x00193D39 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193D30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00193D30: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_0012DA80(); return; /* tail jmp 0x0012DA80 */

}

/**
 * sub_00193D40
 * Original: 0x00193D40 - 0x00193D59 (25 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193D40(void)
{

loc_00193D40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00193D4Eu); RECOMP_ABI_CALL(0x00190890u, sub_00190890); /* call 0x00190890 */

loc_00193D4E: ;
    eax = MEM32(esi + 0x10);
    MEM32(edi + 8) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00193D60
 * Original: 0x00193D60 - 0x00193D68 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00193D60: ;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

}

/**
 * sub_00193D70
 * Original: 0x00193D70 - 0x00193D94 (36 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00193D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193D70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00193D8Eu); RECOMP_ABI_CALL(0x001B0FD0u, sub_001B0FD0); /* call 0x001B0FD0 */

loc_00193D8E: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00193DA0
 * Original: 0x00193DA0 - 0x00193DCC (44 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00193DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193DA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00193DC6u); RECOMP_ABI_CALL(0x001B1790u, sub_001B1790); /* call 0x001B1790 */

loc_00193DC6: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00193DD0
 * Original: 0x00193DD0 - 0x00193DF4 (36 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00193DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193DD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00193DEEu); RECOMP_ABI_CALL(0x001B1950u, sub_001B1950); /* call 0x001B1950 */

loc_00193DEE: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00193E00
 * Original: 0x00193E00 - 0x00193E5E (94 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193E00: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244368);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2F6E2C;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00193E3F; /* jne: not equal / not zero */

loc_00193E39: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00193E3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193E3Du); } /* indirect call */
    }

loc_00193E3F: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00193E4Eu); RECOMP_ABI_CALL(0x00015C50u, sub_00015C50); /* call 0x00015C50 */

loc_00193E4E: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00193E60
 * Original: 0x00193E60 - 0x00193E6A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193E60(void)
{

loc_00193E60: ;
    eax = ecx;
    MEM32(eax + 0x44) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00193E70
 * Original: 0x00193E70 - 0x00193EC2 (82 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193E70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193E70: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244388);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2F6E60;
    ecx = MEM32(esi + 0x10);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00193EA3u); RECOMP_ABI_CALL(0x00192060u, sub_00192060); /* call 0x00192060 */

loc_00193EA3: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00193EB2u); RECOMP_ABI_CALL(0x00193E00u, sub_00193E00); /* call 0x00193E00 */

loc_00193EB2: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00193ED0
 * Original: 0x00193ED0 - 0x00193F0B (59 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00193ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193ED0: ;
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
    esi = ecx;
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00193EE5u); RECOMP_ABI_CALL(0x00193E60u, sub_00193E60); /* call 0x00193E60 */

loc_00193EE5: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    esi = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00193F02u); RECOMP_ABI_CALL(0x001B28E0u, sub_001B28E0); /* call 0x001B28E0 */

loc_00193F02: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00193F10
 * Original: 0x00193F10 - 0x00193F49 (57 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00193F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193F10: ;
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
    esi = ecx;
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00193F25u); RECOMP_ABI_CALL(0x00193E60u, sub_00193E60); /* call 0x00193E60 */

loc_00193F25: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00193F42u); RECOMP_ABI_CALL(0x001B29C0u, sub_001B29C0); /* call 0x001B29C0 */

loc_00193F42: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00193F50
 * Original: 0x00193F50 - 0x00193F78 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193F50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00193F58u); RECOMP_ABI_CALL(0x00193E00u, sub_00193E00); /* call 0x00193E00 */

loc_00193F58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00193F72; /* je: equal / zero */

loc_00193F5F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00193F72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193F6Fu); } /* indirect call */
    }

loc_00193F72: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00193F80
 * Original: 0x00193F80 - 0x00193FA8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193F80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00193F88u); RECOMP_ABI_CALL(0x00193E70u, sub_00193E70); /* call 0x00193E70 */

loc_00193F88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00193FA2; /* je: equal / zero */

loc_00193F8F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00193FA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00193F9Fu); } /* indirect call */
    }

loc_00193FA2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00193FB0
 * Original: 0x00193FB0 - 0x00194013 (99 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193FB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244388);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esi + 6) = 1;
    MEM32(esi + 8) = ecx;
    MEM32(esi) = 0x2F6E2C;
    MEM32(esi + 0xC) = eax;
    MEM16(eax + 6) = MEM16(eax + 6) + 1;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 4) = esi;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(esi) = 0x2F6E60;
    MEM32(esi + 0x10) = ecx;
    PUSH32(esp, 0x00193FFFu); RECOMP_ABI_CALL(0x00192050u, sub_00192050); /* call 0x00192050 */

loc_00193FFF: ;
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
 * sub_00194020
 * Original: 0x00194020 - 0x0019408F (111 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194020: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244388);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esi) = 0x2F6A40;
    MEM16(esi + 6) = 1;
    eax = MEM32(ecx);
    MEM32(esi + 8) = eax;
    MEM32(esi) = 0x2F6E2C;
    eax = MEM32(ecx + 4);
    MEM32(esi + 0xC) = eax;
    MEM16(eax + 6) = MEM16(eax + 6) + 1;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2F6E60;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x10) = 0;
    MEM32(esi + 0x10) = ecx;
    PUSH32(esp, 0x0019407Bu); RECOMP_ABI_CALL(0x00192050u, sub_00192050); /* call 0x00192050 */

loc_0019407B: ;
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
 * sub_00194090
 * Original: 0x00194090 - 0x001940C8 (56 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194090: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0019409Eu); RECOMP_ABI_CALL(0x00196930u, sub_00196930); /* call 0x00196930 */

loc_0019409E: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001940C3; /* jne: not equal / not zero */

loc_001940A6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001940C3; /* jle: less or equal (signed <=) */

loc_001940AC: ;
    PUSH32(esp, ebx);
    /* nop */

loc_001940B0: ;
    edx = MEM32(edi + 0x10);
    edx = MEM32(edx + eax * 4);
    ebx = MEM32(esi + 0xC);
    MEM32(ebx + eax * 8 + 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001940B0; /* jl: less (signed <) */

loc_001940C2: ;
    POP32(esp, ebx);

loc_001940C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001940D0
 * Original: 0x001940D0 - 0x00194147 (119 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001940D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001940D0: ;
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
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001940F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001940F1u); } /* indirect call */
    }

loc_001940F4: ;
    eax = MEM32(edi + 0x10);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0019413E; /* jle: less or equal (signed <=) */

loc_00194100: ;
    ecx = MEM32(edi + 0xC);
    ecx = MEM32(ecx + ebx * 8);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00194118u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194115u); } /* indirect call */
    }

loc_00194118: ;
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    xmm1 = XMM_MEM(esi); /* movaps */
    xmm1 = XMM_MIN(xmm1, xmm0); /* minps */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(esi, xmm1); /* movaps */
    xmm1 = XMM_MEM(esi + 0x10); /* movaps */
    xmm1 = XMM_MAX(xmm1, xmm0); /* maxps */
    XMM_STORE(esi + 0x10, xmm1); /* movaps */
    eax = MEM32(edi + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00194100; /* jl: less (signed <) */

loc_0019413E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00194150
 * Original: 0x00194150 - 0x00194154 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194150(void)
{

loc_00194150: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00194160
 * Original: 0x00194160 - 0x00194172 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194160: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019416F; /* jl: less (signed <) */

loc_0019416C: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0019416F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00194180
 * Original: 0x00194180 - 0x0019418D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194180(void)
{

loc_00194180: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 8);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00194190
 * Original: 0x00194190 - 0x0019419E (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194190(void)
{

loc_00194190: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 8 + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001941A0
 * Original: 0x001941A0 - 0x001941AD (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001941A0(void)
{

loc_001941A0: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001941B0
 * Original: 0x001941B0 - 0x00194244 (148 bytes, 60 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001941B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001941B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edi = ecx;
    PUSH32(esp, 0x001941C0u); RECOMP_ABI_CALL(0x00196940u, sub_00196940); /* call 0x00196940 */

loc_001941C0: ;
    MEM32(ebx + 8) = 0;
    eax = MEM32(ebx + 0xC);
    esi = MEM32(edi + 0x10);
    ebp = ebx + 4;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001941ED; /* jge: greater or equal (signed >=) */

loc_001941D9: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001941E1; /* jl: less (signed <) */

loc_001941DF: ;
    eax = esi;

loc_001941E1: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001941EAu); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001941EA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001941ED: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 4) = esi;
    eax = MEM32(ebx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00194213; /* jge: greater or equal (signed >=) */

loc_001941FF: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00194207; /* jl: less (signed <) */

loc_00194205: ;
    eax = esi;

loc_00194207: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00194210u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_00194210: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00194213: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebx + 4) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0019423D; /* jle: less or equal (signed <=) */

loc_0019421C: ;
    /* nop */

loc_00194220: ;
    ecx = MEM32(edi + 0xC);
    ecx = MEM32(ecx + eax * 8);
    edx = MEM32(ebp);
    MEM32(edx + eax * 4) = ecx;
    edx = MEM32(edi + 0xC);
    edx = MEM32(edx + eax * 8 + 4);
    ecx = MEM32(ebx);
    MEM32(ecx + eax * 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00194220; /* jl: less (signed <) */

loc_0019423D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00194250
 * Original: 0x00194250 - 0x001942CA (122 bytes, 52 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00194250: ;
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, esi);
    esi = ecx + 0xC;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00194279; /* jge: greater or equal (signed >=) */

loc_00194265: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019426D; /* jl: less (signed <) */

loc_0019426B: ;
    eax = edi;

loc_0019426D: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00194276u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_00194276: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00194279: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 4) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_001942C5; /* jle: less or equal (signed <=) */

loc_00194282: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    eax = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;

loc_00194294: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001942BB; /* je: equal / zero */

loc_0019429A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ebp = MEM32(esi);
    MEM32(ebp + ecx * 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001942AD; /* je: equal / zero */

loc_001942A4: ;
    eax = MEM32(esp + 0x18);
    eax = MEM32(eax + edx);
    goto loc_001942AF;

loc_001942AD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001942AF: ;
    ebp = MEM32(esi);
    MEM32(ebp + ecx * 8 + 4) = eax;
    eax = MEM32(edx);
    MEM16(eax + 6) = MEM16(eax + 6) + 1;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_001942BB: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00194294; /* jl: less (signed <) */

loc_001942C3: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001942C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001942D0
 * Original: 0x001942D0 - 0x0019433F (111 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001942D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001942D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2443B3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 4) = esi;
    MEM16(esi + 6) = LO16(ecx);
    MEM32(esi + 8) = eax;
    MEM32(esi) = 0x2F6E98;
    edx = esi + 0x18;
    MEM32(esp + 0x10) = eax;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = 0x80000004u;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    MEM8(esp + 0x14) = LO8(ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0019432Bu); RECOMP_ABI_CALL(0x00194250u, sub_00194250); /* call 0x00194250 */

loc_0019432B: ;
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
 * sub_00194340
 * Original: 0x00194340 - 0x001943CF (143 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194340: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2443B3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 1;
    MEM16(esi + 6) = LO16(ecx);
    MEM32(esi) = 0x2F6A40;
    edx = MEM32(eax);
    MEM32(esp + 8) = esi;
    MEM32(esi + 8) = edx;
    MEM32(esi) = 0x2F6E98;
    edx = esi + 0x18;
    MEM32(esp + 0x14) = 0;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = 0;
    MEM32(esi + 0x14) = 0x80000004u;
    ebx = MEM32(eax + 0x14);
    edx = MEM32(eax + 4);
    MEM8(esp + 0x14) = LO8(ecx);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001943AE; /* jne: not equal / not zero */

loc_001943A9: ;
    eax = MEM32(eax + 0x10);
    goto loc_001943B0;

loc_001943AE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001943B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001943BAu); RECOMP_ABI_CALL(0x00194250u, sub_00194250); /* call 0x00194250 */

loc_001943BA: ;
    ecx = MEM32(esp + 0xC);
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
 * sub_001943D0
 * Original: 0x001943D0 - 0x0019448B (187 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001943D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001943D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2443DB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    MEM32(esi) = 0x2F6E98;
    eax = MEM32(esi + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_00194424; /* jle: less or equal (signed <=) */

loc_00194405: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + edi * 8);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019441C; /* jne: not equal / not zero */

loc_00194416: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0019441Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019441Au); } /* indirect call */
    }

loc_0019441C: ;
    eax = MEM32(esi + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00194405; /* jl: less (signed <) */

loc_00194424: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0019444A; /* js: sign (negative) */

loc_00194430: ;
    edx = MEM32(esi + 0xC);
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
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x0019444Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194447u); } /* indirect call */
    }

loc_0019444A: ;
    MEM32(esi) = 0x2DC688;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 4));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    MEM32(esp + 0x14) = 2;
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00194474; /* jns: not sign (positive) */

loc_00194462: ;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    ecx = esi;
    MEM16(esi + 4) = LO16(eax);
    PUSH32(esp, 0x00194474u); RECOMP_ABI_CALL(0x0018D710u, sub_0018D710); /* call 0x0018D710 */

loc_00194474: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = 0x2DC684;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00194490
 * Original: 0x00194490 - 0x001944B8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194490: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00194498u); RECOMP_ABI_CALL(0x001943D0u, sub_001943D0); /* call 0x001943D0 */

loc_00194498: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001944B2; /* je: equal / zero */

loc_0019449F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001944B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001944AFu); } /* indirect call */
    }

loc_001944B2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001944C0
 * Original: 0x001944C0 - 0x001944DF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001944C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001944C0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2F6EE4;
    if (TEST_Z(_fa, _fb)) goto loc_001944D9; /* je: equal / zero */

loc_001944D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001944D6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_001944D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001944D9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001944E0
 * Original: 0x001944E0 - 0x00194546 (102 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001944E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001944E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2443F8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(eax + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0x2F6EEC;
    MEM8(esp + 0xC) = LO8(edx);
    MEM32(esp + 8) = eax;
    eax = MEM32(ecx);
    esi = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0019452Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194527u); } /* indirect call */
    }

loc_0019452A: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    eax = MEM32(esp + 0x24);
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(esp + 0x14);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00194550
 * Original: 0x00194550 - 0x0019552C (4060 bytes, 1116 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00194550(void)
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

loc_00194550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    xmm0 = XMM_MEM(edx); /* movaps */
    xmm2 = XMM_MEM(0x2F1900); /* movaps */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    xmm1 = XMM_MEM(esi + 0x30); /* movaps */
    xmm3 = XMM_MEM(esi + 0x40); /* movaps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_ADD(xmm4, xmm3); /* addps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    XMM_STORE(esp + 0x6C, xmm0); /* movaps */
    xmm0 = XMM_MEM(edx + 0x10); /* movaps */
    xmm4 = XMM_MUL(xmm4, xmm1); /* mulps */
    xmm4 = XMM_ADD(xmm4, xmm2); /* addps */
    XMM_STORE(esp + 0xBC, xmm4); /* movaps */
    eax = MEM32(esp + 0xBC);
    ecx = MEM32(esp + 0xC4);
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    XMM_STORE(esp + 0xAC, xmm0); /* movaps */
    edx = MEM32(esp + 0xB0);
    PUSH32(esp, edi);
    edi = SX16(LO16(eax));
    eax = SX16(LO16(ecx));
    ecx = MEM32(esp + 0x74);
    MEM32(esp + 0xBC) = edx;
    SET_LO8(edx, MEM8(esi + 0x14));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x7C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001945FC; /* jne: not equal / not zero */

loc_001945E0: ;
    fp_push(MEMF(esp + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x70)); /* fadd dword ptr [esp + 0x70] */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xB8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xB0)); /* fadd dword ptr [esp + 0xb0] */
    goto loc_00194616;

loc_001945FC: ;
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x78)); /* fsub dword ptr [esp + 0x78] */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xB8)); /* fsub dword ptr [esp + 0xb8] */

loc_00194616: ;
    MEMF(esp + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    fp_push(MEMF(esp + 0xB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x70)); /* fsub dword ptr [esp + 0x70] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x100) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2F1910)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2f1910] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00194659; /* jp: parity */

loc_00194645: ;
    MEM32(esp + 0x50) = 0;
    ecx = ebx;
    MEM32(esp + 0x64) = 0x7F7FFFFF;
    goto loc_001946A5;

loc_00194659: ;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    MEMF(esp + 0xC0) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00194687; /* jp: parity */

loc_0019467B: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ecx = ebx;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00194695;

loc_00194687: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(esp + 0x50) = (float)fp_top(); /* fst */
    ecx = 1;
    MEM32(esp + 0x1C) = edi;

loc_00194695: ;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x70)); /* fsub dword ptr [esp + 0x70] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_001946A5: ;
    fp_push(MEMF(esp + 0xB4)); /* fld float */
    MEM32(esp + 0x3C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x74)); /* fsub dword ptr [esp + 0x74] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2F1910)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2f1910] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001946DD; /* jp: parity */

loc_001946C7: ;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x68) = 0x7F7FFFFF;
    goto loc_0019472B;

loc_001946DD: ;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00194706; /* jp: parity */

loc_001946F8: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(esp + 0x40) = ebx;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0019471B;

loc_00194706: ;
    eax = MEM32(esp + 0x20);
    MEMF(esp + 0x54) = (float)fp_top(); /* fst */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x40) = 1;
    MEM32(esp + 0x20) = eax;

loc_0019471B: ;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x74)); /* fsub dword ptr [esp + 0x74] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_0019472B: ;
    fp_push(MEMF(esp + 0xB8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x78)); /* fsub dword ptr [esp + 0x78] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xA8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2F1910)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2f1910] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019476A; /* jp: parity */

loc_00194750: ;
    MEM32(esp + 0x44) = ebx;
    ebx = MEM32(esp + 0x24);
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x6C) = 0x7F7FFFFF;
    goto loc_001947C3;

loc_0019476A: ;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    MEMF(esp + 0xC8) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019479E; /* jp: parity */

loc_0019478C: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(esp + 0x44) = ebx;
    ebx = MEM32(esp + 0x24);
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001947B3;

loc_0019479E: ;
    ebx = MEM32(esp + 0x24);
    MEMF(esp + 0x58) = (float)fp_top(); /* fst */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x44) = 1;
    MEM32(esp + 0x24) = ebx;

loc_001947B3: ;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x78)); /* fsub dword ptr [esp + 0x78] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_001947C3: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x50)); /* fadd dword ptr [esp + 0x50] */
    fp_push(MEMF(0x2DC098)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00195211; /* jnp: not parity */

loc_001947DE: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x50)); /* fadd dword ptr [esp + 0x50] */
    fp_push(MEMF(0x2DC098)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00195211; /* jnp: not parity */

loc_001947F9: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x58)); /* fadd dword ptr [esp + 0x58] */
    fp_push(MEMF(0x2DC098)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00195211; /* jnp: not parity */

loc_00194814: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm1 = XMM_MEM(esp + 0x70); /* movaps */
    XMM_STORE(esp + 0x90, xmm1); /* movaps */
    MEM32(esp + 0x48) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0019485A; /* jle: less or equal (signed <=) */

loc_00194829: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00194944; /* jg: greater (signed >) */

loc_00194831: ;
    fp_push(MEMF(esp + 0xB0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00195523; /* jnp: not parity */

loc_00194849: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    edi = 1;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x70)); /* fmul dword ptr [esp + 0x70] */
    fp_top() = -fp_top(); /* fchs */
    goto loc_0019488F;

loc_0019485A: ;
    eax = MEM32(esi + 0xC);
    edx = eax + -2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00194944; /* jle: less or equal (signed <=) */

loc_00194868: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_push(MEMF(esp + 0xB0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00195521; /* je: equal / zero */

loc_00194885: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x70) - fp_top()); /* fsubr dword ptr [esp + 0x70] */
    edi = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x50)); /* fmul dword ptr [esp + 0x50] */

loc_0019488F: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    xmm3 = XMM_MEM(0x2F18F0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEM32(esp + 0x1C) = edi;
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xA8)); /* fmul dword ptr [esp + 0xa8] */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm3 = XMM_SUB(xmm3, xmm0); /* subps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_MUL(xmm2, XMM_MEM(esp + 0xB0)); /* mulps */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm3 = XMM_ADD(xmm3, xmm2); /* addps */
    XMM_STORE(esp + 0x90, xmm3); /* movaps */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    SMEM32(esp + 0x14) = (int32_t)recomp_fist(fp_top(), g_fp_control_word, 32); fp_pop(); /* fistp */
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x44);
    ebx = MEM32(esp + 0x24);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    ebx = ebx + eax + -2;
    MEM32(esp + 0x24) = ebx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x98)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x98] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00194927; /* jp: parity */

loc_0019490A: ;
    /* nop */

loc_00194910: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = ebx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x98)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x98] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00194910; /* jnp: not parity */

loc_00194927: ;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = ebx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x78)); /* fsub dword ptr [esp + 0x78] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC8)); /* fmul dword ptr [esp + 0xc8] */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00194948;

loc_00194944: ;
    ebx = MEM32(esp + 0x24);

loc_00194948: ;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00194984; /* jle: less or equal (signed <=) */

loc_00194950: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00194A66; /* jg: greater (signed >) */

loc_00194958: ;
    fp_push(MEMF(esp + 0xB8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00195523; /* jnp: not parity */

loc_00194970: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    MEM32(esp + 0x24) = 1;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x78)); /* fmul dword ptr [esp + 0x78] */
    fp_top() = -fp_top(); /* fchs */
    goto loc_001949BB;

loc_00194984: ;
    eax = MEM32(esi + 0x10);
    edx = eax + -2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00194A66; /* jle: less or equal (signed <=) */

loc_00194992: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_push(MEMF(esp + 0xB8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00195521; /* je: equal / zero */

loc_001949AF: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x78) - fp_top()); /* fsubr dword ptr [esp + 0x78] */
    MEM32(esp + 0x24) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x58)); /* fmul dword ptr [esp + 0x58] */

loc_001949BB: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    xmm3 = XMM_MEM(0x2F18F0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_push(MEMF(esp + 0x100)); /* fld float */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    xmm3 = XMM_SUB(xmm3, xmm0); /* subps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_MUL(xmm2, XMM_MEM(esp + 0xB0)); /* mulps */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm3 = XMM_ADD(xmm3, xmm2); /* addps */
    XMM_STORE(esp + 0x90, xmm3); /* movaps */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    SMEM32(esp + 0x14) = (int32_t)recomp_fist(fp_top(), g_fp_control_word, 32); fp_pop(); /* fistp */
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x48);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    edi = edx + eax + -2;
    MEM32(esp + 0x1C) = edi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x90)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x90] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00194A49; /* jp: parity */

loc_00194A32: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = edi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x90)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x90] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00194A32; /* jnp: not parity */

loc_00194A49: ;
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = edi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x70)); /* fsub dword ptr [esp + 0x70] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC0)); /* fmul dword ptr [esp + 0xc0] */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */

loc_00194A66: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00195523; /* jae: above or equal (unsigned >=) */

loc_00194A71: ;
    edx = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00195523; /* jae: above or equal (unsigned >=) */

loc_00194A7D: ;
    eax = MEM32(esp + 0x44);
    fp_push(MEMF(0x2DC098)); /* fld float */
    SET_LO8(edx, MEM8(esi + 0x14));
    fp_push(MEMF(esp + 0x54)); /* fld float */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    SET_LO8(ecx, ((_fas >= 0)) ? 1 : 0); /* setge */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    MEM8(esp + 0xA4) = LO8(ecx);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00194AB9; /* jp: parity */

loc_00194AAA: ;
    MEM8(esp + 0xA4) = 0;
    SET_LO8(ecx, MEM8(esp + 0xA4));

loc_00194AB9: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    ebx = 2;
    MEM32(esp + 0x2C) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00194ACE; /* jne: not equal / not zero */

loc_00194AC6: ;
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00194AD2;

loc_00194ACE: ;
    _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(esp + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00194AD2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(esp + 0x20) = edi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x94) - fp_top()); /* fsubr dword ptr [esp + 0x94] */
    if (CMP_EQ(_fa, _fb)) goto loc_00194B02; /* je: equal / zero */

loc_00194AE5: ;
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC08C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc08c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00194AFA; /* jne: not equal / not zero */

loc_00194AF4: ;
    _fb = (uint32_t)(MEM32(esp + 0x40)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(esp + 0x40);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00194B23;

loc_00194AFA: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x2C) = ebx;
    goto loc_00194B27;

loc_00194B02: ;
    fp_push((double)SMEM32(esp + 0x40)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00194B27; /* jne: not equal / not zero */

loc_00194B17: ;
    eax = MEM32(esp + 0x40);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x2C) = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00194B23: ;
    MEM32(esp + 0x20) = edi;

loc_00194B27: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00194B50; /* jnp: not parity */

loc_00194B3A: ;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x74)); /* fsub dword ptr [esp + 0x74] */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x40)); /* fimul dword ptr [esp + 0x40] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00194B58;

loc_00194B50: ;
    MEM32(esp + 0x68) = 0x7F7FFFFF;

loc_00194B58: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00194B73; /* jp: parity */

loc_00194B6B: ;
    fp_push(MEMF(0x2DC8D8)); /* fld float */
    goto loc_00194B7B;

loc_00194B73: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x50)); /* fsub dword ptr [esp + 0x50] */

loc_00194B7B: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00194B9B; /* jp: parity */

loc_00194B8E: ;
    MEM32(esp + 0x94) = 0xFF7FFFFFu;
    goto loc_00194BAA;

loc_00194B9B: ;
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x54)); /* fsub dword ptr [esp + 0x54] */
    MEMF(esp + 0x94) = (float)fp_top(); fp_pop(); /* fstp */

loc_00194BAA: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00194BCA; /* jp: parity */

loc_00194BBD: ;
    MEM32(esp + 0x98) = 0xFF7FFFFFu;
    goto loc_00194BD9;

loc_00194BCA: ;
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x58)); /* fsub dword ptr [esp + 0x58] */
    MEMF(esp + 0x98) = (float)fp_top(); fp_pop(); /* fstp */

loc_00194BD9: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00194BFC; /* je: equal / zero */

loc_00194BDD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00194BEA; /* jne: not equal / not zero */

loc_00194BE1: ;
    fp_pop(); /* fstp st(0) */

loc_00194BE3: ;
    eax = 1;
    goto loc_00194C54;

loc_00194BEA: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x98)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x98] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00194C4F; /* jne: not equal / not zero */

loc_00194BF8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00194C54;

loc_00194BFC: ;
    fp_push(MEMF(esp + 0x100)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xA8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xa8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00194C2B; /* jp: parity */

loc_00194C11: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00194C19; /* je: equal / zero */

loc_00194C15: ;
    fp_pop(); /* fstp st(0) */
    goto loc_00194C4F;

loc_00194C19: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x94)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x94] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00194BE3; /* jne: not equal / not zero */

loc_00194C27: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00194C54;

loc_00194C2B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    fp_pop(); /* fstp st(0) */
    if (CMP_EQ(_fa, _fb)) goto loc_00194C35; /* je: equal / zero */

loc_00194C31: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00194C54;

loc_00194C35: ;
    fp_push(MEMF(esp + 0x94)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x98)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x98] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00194C54; /* je: equal / zero */

loc_00194C4F: ;
    eax = 2;

loc_00194C54: ;
    fp_push(MEMF(esp + eax * 4 + 0x64)); /* fld float */
    edx = MEM32(esp + eax * 4 + 0x1C);
    ecx = MEM32(esp + eax * 4 + 0x3C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + eax * 4 + 0x50)); /* fsub dword ptr [esp + eax*4 + 0x50] */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + eax * 4 + 0x1C) = edx;
    ebx = MEM32(esp + 0x1C);
    MEMF(esp + eax * 4 + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    edi = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xC) (32-bit) */
    MEM32(esp + 0x8C) = 0x7F7FFFFF;
    MEM32(esp + 0xAC) = 0;
    MEM32(esp + 0x34) = 0xBF800000u;
    MEM32(esp + 0x18) = edi;
    if (CMP_AE(_fa, _fb)) goto loc_00195523; /* jae: above or equal (unsigned >=) */

loc_00194C9F: ;
    goto loc_00194CB0;

loc_00194CA1: ;
    edi = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x1C);
    /* nop */

loc_00194CB0: ;
    edx = MEM32(esp + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x10) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00195523; /* jae: above or equal (unsigned >=) */

loc_00194CBD: ;
    eax = MEM32(ebp + 0x10);
    fp_push(MEMF(esp + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00195523; /* je: equal / zero */

loc_00194CD2: ;
    ecx = MEM32(esp + edi * 4 + 0x64);
    eax = esp + edi * 4 + 0x64;
    edx = ecx;
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0xD4;
    MEM32(esp + 0x50) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00194CF1u); RECOMP_ABI_CALL(0x00015C30u, sub_00015C30); /* call 0x00015C30 */

loc_00194CF1: ;
    xmm0 = XMM_MEM(esp + 0xD0); /* movaps */
    xmm2 = XMM_MEM(0x2F18F0); /* movaps */
    edx = MEM32(esp + 0x3C);
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm2 = XMM_SUB(xmm2, xmm0); /* subps */
    xmm2 = XMM_MUL(xmm2, XMM_MEM(esp + 0x70)); /* mulps */
    ecx = ebx;
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(esp + 0xB0)); /* mulps */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    XMM_STORE(esp + 0x90, xmm2); /* movaps */
    MEM32(esp + 0x38) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00194D70; /* jne: not equal / not zero */

loc_00194D32: ;
    edx = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00194D45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194D42u); } /* indirect call */
    }

loc_00194D45: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0x24);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00194D56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194D53u); } /* indirect call */
    }

loc_00194D56: ;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x98) - fp_top()); /* fsubr dword ptr [esp + 0x98] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    goto loc_00194E02;

loc_00194D70: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    edi = MEM32(esp + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_00194DA6; /* jne: not equal / not zero */

loc_00194D79: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00194D82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194D7Fu); } /* indirect call */
    }

loc_00194D82: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00194D8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194D8Cu); } /* indirect call */
    }

loc_00194D8F: ;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x90) - fp_top()); /* fsubr dword ptr [esp + 0x90] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    goto loc_00194E02;

loc_00194DA6: ;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    SET_LO8(edx, MEM8(esp + 0xA4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = MEM32(esp + 0x24);
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x90) - fp_top()); /* fsubr dword ptr [esp + 0x90] */
    MEM32(esp + 0x30) = edi;
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00194DD6; /* je: equal / zero */

loc_00194DCA: ;
    edx = edi;
    _fb = (uint32_t)(MEM32(esp + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(esp + 0x44);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x30) = edx;
    goto loc_00194DDE;

loc_00194DD6: ;
    edx = MEM32(esp + 0x44);
    eax = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00194DDE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00194DE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194DE4u); } /* indirect call */
    }

loc_00194DE7: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x30);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00194DF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194DF5u); } /* indirect call */
    }

loc_00194DF8: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */

loc_00194E02: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x9C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00195128; /* je: equal / zero */

loc_00194E18: ;
    fp_push(MEMF(esp + 0xAC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00195128; /* jnp: not parity */

loc_00194E31: ;
    fp_push(MEMF(esp + 0x9C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00194E6F; /* jne: not equal / not zero */

loc_00194E4B: ;
    fp_push(MEMF(esp + 0xAC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x8C)); /* fsub dword ptr [esp + 0x8c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    goto loc_00194EAF;

loc_00194E6F: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x28) / fp_top()); /* fdivr dword ptr [esp + 0x28] */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x8C)); /* fmul dword ptr [esp + 0x8c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x7C) - fp_top()); /* fsubr dword ptr [esp + 0x7c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00195124; /* jnp: not parity */

loc_00194EA5: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */

loc_00194EAF: ;
    ecx = MEM32(ebp + 0x10);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x9C);
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x34) = eax;
    MEMF(esp + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    MEM32(esp + 0xAC) = edx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00195523; /* je: equal / zero */

loc_00194EE9: ;
    ecx = MEM32(esp + 0x44);
    ebx = MEM32(esp + 0x24);
    SET_LO8(eax, MEM8(esp + 0xA4));
    edx = MEM32(esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x124) = 0x3F800000;
    MEM32(esp + 0x11C) = 0;
    MEM32(esp + 0x114) = 0x3F800000;
    ecx = esi;
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00194F8E; /* je: equal / zero */

loc_00194F24: ;
    eax = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00194F2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194F29u); } /* indirect call */
    }

loc_00194F2C: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x38);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00194F3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194F3Au); } /* indirect call */
    }

loc_00194F3D: ;
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 1 (32-bit) */
    edx = MEM32(esi);
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00194F6A; /* jne: not equal / not zero */

loc_00194F4C: ;
    eax = MEM32(esp + 0x38);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00194F55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194F52u); } /* indirect call */
    }

loc_00194F55: ;
    MEMF(esp + 0x38) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x48)); /* fsub dword ptr [esp + 0x48] */
    goto loc_0019500F;

loc_00194F6A: ;
    eax = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00194F73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194F70u); } /* indirect call */
    }

loc_00194F73: ;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    goto loc_00195011;

loc_00194F8E: ;
    eax = MEM32(esp + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00194F96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194F93u); } /* indirect call */
    }

loc_00194F96: ;
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00194FA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194FA4u); } /* indirect call */
    }

loc_00194FA7: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00194FEE; /* je: equal / zero */

loc_00194FB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00194FCD; /* jne: not equal / not zero */

loc_00194FB8: ;
    fp_push(MEMF(esp + 0x100)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xA8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xa8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00194FEE; /* jnp: not parity */

loc_00194FCD: ;
    eax = MEM32(esp + 0x38);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00194FDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194FD7u); } /* indirect call */
    }

loc_00194FDA: ;
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    goto loc_00195011;

loc_00194FEE: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00194FFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00194FF8u); } /* indirect call */
    }

loc_00194FFB: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */

loc_0019500F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */

loc_00195011: ;
    fp_push((double)SMEM32(esp + 0x3C)); /* fild */
    SET_LO8(ebx, MEM8(esi + 0x14));
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    eax = ZX8(LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEMF(esp + 0x110) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ZX8(LO8(edx));
    fp_push((double)SMEM32(esp + 0x44)); /* fild */
    edx = MEM32(esp + 0x30);
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x124) = edx;
    edx = MEM32(esp + 0x44);
    MEMF(esp + 0x118) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_MEM(esp + 0x110); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    fp_pop(); /* fstp st(0) */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x3C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    ecx = ecx << 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x1C);
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    XMM_STORE(esp + 0xC0, xmm0); /* movaps */
    xmm2.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0xC0) = xmm2.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0xC0); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + ecx * 2 + -2;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx);
    MEM32(esp + 0xF8) = 0x40400000;
    xmm3 = XMM_SCALAR(MEMF(esp + 0xF8)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x120) = eax;
    MEM32(esp + 0xFC) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xFC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    eax = esp + 0x110;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    PUSH32(esp, eax);
    XMM_STORE(esp + 0x118, xmm2); /* movaps */
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00195122u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00195120u); } /* indirect call */
    }

loc_00195122: ;
    goto loc_00195145;

loc_00195124: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */

loc_00195128: ;
    ecx = MEM32(esp + 0x9C);
    MEMF(esp + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0xAC) = ecx;
    MEM32(esp + 0x34) = edx;

loc_00195145: ;
    eax = MEM32(esp + 0x18);
    ebx = MEM32(esp + eax * 4 + 0x1C);
    fp_push(MEMF(esp + eax * 4 + 0x50)); /* fld float */
    edi = MEM32(esp + eax * 4 + 0x3C);
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + eax * 4 + 0x1C) = ebx;
    eax = MEM32(esp + 0x4C);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    edx = 2;
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x2C) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esp + 0xA4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001951A4; /* je: equal / zero */

loc_0019517D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019518B; /* jne: not equal / not zero */

loc_00195181: ;
    MEM32(esp + 0x18) = 1;
    goto loc_001951FB;

loc_0019518B: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x6C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x6c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001951F7; /* jp: parity */

loc_0019519A: ;
    MEM32(esp + 0x18) = 0;
    goto loc_001951FB;

loc_001951A4: ;
    fp_push(MEMF(esp + 0x100)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xA8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xa8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001951D2; /* jp: parity */

loc_001951B9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001951F7; /* jne: not equal / not zero */

loc_001951BD: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x68)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x68] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00195181; /* jp: parity */

loc_001951CC: ;
    MEM32(esp + 0x18) = ecx;
    goto loc_001951FB;

loc_001951D2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001951E0; /* je: equal / zero */

loc_001951D6: ;
    MEM32(esp + 0x18) = 0;
    goto loc_001951FB;

loc_001951E0: ;
    fp_push(MEMF(esp + 0x68)); /* fld float */
    MEM32(esp + 0x18) = 1;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x6C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x6c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001951FB; /* jnp: not parity */

loc_001951F7: ;
    MEM32(esp + 0x18) = edx;

loc_001951FB: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00194CA1; /* jb: below (unsigned <) */

loc_00195208: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00195211: ;
    ecx = MEM32(esi + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00195523; /* jae: above or equal (unsigned >=) */

loc_0019521D: ;
    eax = MEM32(esi + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00195523; /* jae: above or equal (unsigned >=) */

loc_00195229: ;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEM32(esp + 0x4C) = 0x3F800000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x78) - fp_top()); /* fsubr dword ptr [esp + 0x78] */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    edx = MEM32(esi);
    MEM32(esp + 0xE4) = 0x3F800000;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    XMM_STORE(esp + 0xD0, xmm0); /* movaps */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    ecx = esi;
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x74) - fp_top()); /* fsubr dword ptr [esp + 0x74] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00195320; /* je: equal / zero */

loc_00195273: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00195277u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00195274u); } /* indirect call */
    }

loc_00195277: ;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    eax = ebx + 1;
    ecx = edi + 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0019528Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00195287u); } /* indirect call */
    }

loc_0019528A: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    edx = MEM32(esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    ecx = esi;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001952DA; /* jne: not equal / not zero */

loc_001952A1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = edi + 1;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001952A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001952A6u); } /* indirect call */
    }

loc_001952A9: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    goto loc_0019538D;

loc_001952DA: ;
    eax = ebx + 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001952E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001952DFu); } /* indirect call */
    }

loc_001952E2: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xD0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    goto loc_001953E5;

loc_00195320: ;
    eax = edi + 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00195327u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00195324u); } /* indirect call */
    }

loc_00195327: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    eax = ebx + 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00195337u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00195334u); } /* indirect call */
    }

loc_00195337: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC08C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc08c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001953A5; /* jne: not equal / not zero */

loc_00195352: ;
    edx = MEM32(esi);
    eax = ebx + 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = edi + 1;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0019535Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019535Cu); } /* indirect call */
    }

loc_0019535F: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC08C)); /* fsub dword ptr [0x2dc08c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */

loc_0019538D: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = 1;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xD0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    goto loc_001953E7;

loc_001953A5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x001953ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001953A9u); } /* indirect call */
    }

loc_001953AC: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xD0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_001953E5: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001953E7: ;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xD8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xBC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00195523; /* je: equal / zero */

loc_0019541C: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00195523; /* jnp: not parity */

loc_00195431: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00195523; /* je: equal / zero */

loc_00195446: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    ecx = MEM32(ebp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x2C) / fp_top()); /* fdivr dword ptr [esp + 0x2c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00195521; /* jp: parity */

loc_00195465: ;
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    MEMF(esp + 0xE4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_MEM(esp + 0xD0); /* movaps */
    eax = MEM32(ecx);
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    XMM_STORE(esp + 0xC0, xmm0); /* movaps */
    xmm2.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0xC0) = xmm2.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0xC0); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    ebx = ebx << 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x4C) = 0x40400000;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx + ebx * 2;
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0xE0) = edx;
    MEM32(esp + 0x4C) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    edx = esp + 0xD0;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    PUSH32(esp, edx);
    XMM_STORE(esp + 0xD8, xmm2); /* movaps */
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00195518u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00195516u); } /* indirect call */
    }

loc_00195518: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00195521: ;
    fp_pop(); /* fstp st(0) */

loc_00195523: ;
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
 * sub_00195530
 * Original: 0x00195530 - 0x00195668 (312 bytes, 111 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00195530(void)
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

loc_00195530: ;
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
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00195547u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00195544u); } /* indirect call */
    }

loc_00195547: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    ecx = MEM32(esp + 0x18);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    MEM32(esp + 0x1C) = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00195611; /* jp: parity */

loc_00195567: ;
    eax = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001955BF; /* jle: less or equal (signed <=) */

loc_00195570: ;
    eax = MEM32(esi + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001955B7; /* jle: less or equal (signed <=) */

loc_00195579: ;
    /* nop */

loc_00195580: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00195589u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00195586u); } /* indirect call */
    }

loc_00195589: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0019559A; /* jnp: not parity */

loc_00195596: ;
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */

loc_0019559A: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001955AD; /* je: equal / zero */

loc_001955A7: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001955AF;

loc_001955AD: ;
    fp_pop(); /* fstp st(0) */

loc_001955AF: ;
    eax = MEM32(esi + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00195580; /* jl: less (signed <) */

loc_001955B7: ;
    eax = MEM32(esi + 0xC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00195570; /* jl: less (signed <) */

loc_001955BF: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x24)); /* fmul dword ptr [esi + 0x24] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x24)); /* fmul dword ptr [esi + 0x24] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), g_fp_stack[(g_fp_top + 2) & 7]); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(2) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001955EC; /* jnp: not parity */

loc_001955E6: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_001955EC: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001955FB; /* jne: not equal / not zero */

loc_001955F5: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */

loc_001955FB: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(esi + 0x54) = (float)fp_top(); fp_pop(); /* fstp */

loc_00195611: ;
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    eax = MEM32(esi + 0x18);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    PUSH32(esp, ecx);
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    XMM_STORE(esp + 0x28, xmm0); /* movaps */
    MEM32(esp + 0x2C) = eax;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    XMM_STORE(esp + 0x44, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019565Cu); RECOMP_ABI_CALL(0x00192BB0u, sub_00192BB0); /* call 0x00192BB0 */

loc_0019565C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_00195670
 * Original: 0x00195670 - 0x001956A5 (53 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195670(void)
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

loc_00195670: ;
    edx = MEM32(esp + 8);
    fp_push(MEMF(edx + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001956A2; /* jp: parity */

loc_00195681: ;
    eax = MEM32(edx + 0x14);
    MEM32(ecx + 4) = eax;
    xmm0 = XMM_MEM(edx); /* movaps */
    eax = MEM32(ecx + 0xC);
    XMM_STORE(eax, xmm0); /* movaps */
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x10);
    MEM32(eax + 0x10) = esi;
    edx = MEM32(edx + 0x14);
    MEM32(eax + 0x14) = edx;
    MEM8(ecx + 8) = 1;
    POP32(esp, esi);

loc_001956A2: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001956B0
 * Original: 0x001956B0 - 0x001967FE (4430 bytes, 1190 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001956B0(void)
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

loc_001956B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x144;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    xmm0 = XMM_MEM(ecx); /* movaps */
    fp_push(MEMF(esi + 0x24)); /* fld float */
    XMM_STORE(esp + 0x10C, xmm0); /* movaps */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    PUSH32(esp, edi);
    XMM_STORE(esp + 0x120, xmm0); /* movaps */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001956F0; /* jne: not equal / not zero */

loc_001956EE: ;
    fp_top() = -fp_top(); /* fchs */

loc_001956F0: ;
    fp_push(MEMF(esp + 0x114)); /* fld float */
    eax = MEM32(ecx + 0x34);
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    xmm3 = XMM_MEM(esi + 0x40); /* movaps */
    xmm2 = XMM_MEM(0x2F1900); /* movaps */
    MEMF(esp + 0x114) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_MEM(esp + 0x110); /* movaps */
    fp_push(MEMF(esp + 0x124)); /* fld float */
    xmm4 = xmm1; /* movaps */
    xmm4 = XMM_ADD(xmm4, xmm3); /* addps */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    xmm4 = XMM_MUL(xmm4, xmm0); /* mulps */
    xmm4 = XMM_ADD(xmm4, xmm2); /* addps */
    XMM_STORE(esp + 0xC0, xmm4); /* movaps */
    MEMF(esp + 0x124) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xC8);
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0xDC) = eax;
    eax = MEM32(esp + 0xC0);
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x80, xmm1); /* movaps */
    xmm1 = XMM_MEM(esp + 0x120); /* movaps */
    edx = SX16(LO16(ecx));
    ecx = MEM32(esp + 0x84);
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = SX16(LO16(eax));
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0xB0, xmm1); /* movaps */
    eax = MEM32(esp + 0xB4);
    MEM32(esp + 0x8C) = ecx;
    SET_LO8(ecx, MEM8(esi + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM8(esp + 0x37) = 1;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0xBC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001957D4; /* jne: not equal / not zero */

loc_001957AF: ;
    fp_push(MEMF(esp + 0x88)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x80)); /* fadd dword ptr [esp + 0x80] */
    MEMF(esp + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xB8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xB0)); /* fadd dword ptr [esp + 0xb0] */
    goto loc_001957F7;

loc_001957D4: ;
    fp_push(MEMF(esp + 0x80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x88)); /* fsub dword ptr [esp + 0x88] */
    MEMF(esp + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xB8)); /* fsub dword ptr [esp + 0xb8] */

loc_001957F7: ;
    MEMF(esp + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    fp_push(MEMF(esp + 0xB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x80)); /* fsub dword ptr [esp + 0x80] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x140) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2F1910)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2f1910] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019583F; /* jp: parity */

loc_00195829: ;
    MEM32(esp + 0x60) = 0;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x54) = 0x7F7FFFFF;
    goto loc_00195893;

loc_0019583F: ;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    MEMF(esp + 0xC0) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019586F; /* jp: parity */

loc_00195861: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(esp + 0x48) = ebx;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00195880;

loc_0019586F: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(esp + 0x60) = (float)fp_top(); /* fst */
    MEM32(esp + 0x48) = 1;
    MEM32(esp + 0x20) = edi;

loc_00195880: ;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x80)); /* fsub dword ptr [esp + 0x80] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_00195893: ;
    fp_push(MEMF(esp + 0xB4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x84)); /* fsub dword ptr [esp + 0x84] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2F1910)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2f1910] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001958CA; /* jp: parity */

loc_001958B4: ;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x58) = 0x7F7FFFFF;
    goto loc_0019591B;

loc_001958CA: ;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001958F3; /* jp: parity */

loc_001958E5: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(esp + 0x4C) = ebx;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00195908;

loc_001958F3: ;
    eax = MEM32(esp + 0x24);
    MEMF(esp + 0x64) = (float)fp_top(); /* fst */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x4C) = 1;
    MEM32(esp + 0x24) = eax;

loc_00195908: ;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x84)); /* fsub dword ptr [esp + 0x84] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_0019591B: ;
    fp_push(MEMF(esp + 0xB8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x88)); /* fsub dword ptr [esp + 0x88] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xAC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2F1910)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2f1910] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019595D; /* jp: parity */

loc_00195943: ;
    MEM32(esp + 0x50) = ebx;
    ebx = MEM32(esp + 0x28);
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x5C) = 0x7F7FFFFF;
    goto loc_001959BB;

loc_0019595D: ;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    MEMF(esp + 0xC8) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00195991; /* jp: parity */

loc_0019597F: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(esp + 0x50) = ebx;
    ebx = MEM32(esp + 0x28);
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001959A8;

loc_00195991: ;
    ebx = MEM32(esp + 0x28);
    MEMF(esp + 0x68) = (float)fp_top(); /* fst */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x50) = 1;
    MEM32(esp + 0x28) = ebx;
    edx = ebx;

loc_001959A8: ;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x88)); /* fsub dword ptr [esp + 0x88] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_001959BB: ;
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x60)); /* fadd dword ptr [esp + 0x60] */
    fp_push(MEMF(0x2DC098)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001964AB; /* jnp: not parity */

loc_001959D6: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x60)); /* fadd dword ptr [esp + 0x60] */
    fp_push(MEMF(0x2DC098)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001964AB; /* jnp: not parity */

loc_001959F1: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x68)); /* fadd dword ptr [esp + 0x68] */
    fp_push(MEMF(0x2DC098)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001964AB; /* jnp: not parity */

loc_00195A0C: ;
    ebx = MEM32(esp + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm1 = XMM_MEM(esp + 0x80); /* movaps */
    XMM_STORE(esp + 0x90, xmm1); /* movaps */
    MEM32(esp + 0x3C) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00195A5C; /* jle: less or equal (signed <=) */

loc_00195A28: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00195B49; /* jg: greater (signed >) */

loc_00195A30: ;
    fp_push(MEMF(esp + 0xB0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001967F5; /* jnp: not parity */

loc_00195A48: ;
    fp_push(MEMF(esp + 0x60)); /* fld float */
    edi = 1;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x80)); /* fmul dword ptr [esp + 0x80] */
    fp_top() = -fp_top(); /* fchs */
    goto loc_00195A94;

loc_00195A5C: ;
    eax = MEM32(esi + 0xC);
    ecx = eax + -2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00195B49; /* jle: less or equal (signed <=) */

loc_00195A6A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_push(MEMF(esp + 0xB0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001967F3; /* je: equal / zero */

loc_00195A87: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x80) - fp_top()); /* fsubr dword ptr [esp + 0x80] */
    edi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x60)); /* fmul dword ptr [esp + 0x60] */

loc_00195A94: ;
    fp_push(MEMF(esp + 0x60)); /* fld float */
    xmm3 = XMM_MEM(0x2F18F0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEM32(esp + 0x20) = edi;
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xAC)); /* fmul dword ptr [esp + 0xac] */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm3 = XMM_SUB(xmm3, xmm0); /* subps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_MUL(xmm2, XMM_MEM(esp + 0xB0)); /* mulps */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm3 = XMM_ADD(xmm3, xmm2); /* addps */
    XMM_STORE(esp + 0x90, xmm3); /* movaps */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    SMEM32(esp + 0x14) = (int32_t)recomp_fist(fp_top(), g_fp_control_word, 32); fp_pop(); /* fistp */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x50);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = edx + eax + -2;
    MEM32(esp + 0x28) = edx;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x98)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x98] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00195B27; /* jp: parity */

loc_00195B0B: ;
    goto loc_00195B10;

    /* nop */

loc_00195B10: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = edx;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x98)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x98] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00195B10; /* jnp: not parity */

loc_00195B27: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = edx;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x88)); /* fsub dword ptr [esp + 0x88] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC8)); /* fmul dword ptr [esp + 0xc8] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00195B4D;

loc_00195B49: ;
    ecx = MEM32(esp + 0x50);

loc_00195B4D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00195B88; /* jle: less or equal (signed <=) */

loc_00195B51: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00195C77; /* jg: greater (signed >) */

loc_00195B59: ;
    fp_push(MEMF(esp + 0xB8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001967F5; /* jnp: not parity */

loc_00195B71: ;
    fp_push(MEMF(esp + 0x68)); /* fld float */
    MEM32(esp + 0x28) = 1;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x88)); /* fmul dword ptr [esp + 0x88] */
    fp_top() = -fp_top(); /* fchs */
    goto loc_00195BC2;

loc_00195B88: ;
    eax = MEM32(esi + 0x10);
    ecx = eax + -2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00195C77; /* jle: less or equal (signed <=) */

loc_00195B96: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_push(MEMF(esp + 0xB8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001967F3; /* je: equal / zero */

loc_00195BB3: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x88) - fp_top()); /* fsubr dword ptr [esp + 0x88] */
    MEM32(esp + 0x28) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x68)); /* fmul dword ptr [esp + 0x68] */

loc_00195BC2: ;
    fp_push(MEMF(esp + 0x68)); /* fld float */
    xmm3 = XMM_MEM(0x2F18F0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_push(MEMF(esp + 0x140)); /* fld float */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    xmm3 = XMM_SUB(xmm3, xmm0); /* subps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_MUL(xmm2, XMM_MEM(esp + 0xB0)); /* mulps */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm3 = XMM_ADD(xmm3, xmm2); /* addps */
    XMM_STORE(esp + 0x90, xmm3); /* movaps */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    SMEM32(esp + 0x14) = (int32_t)recomp_fist(fp_top(), g_fp_control_word, 32); fp_pop(); /* fistp */
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x3C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    edi = ecx + edx + -2;
    MEM32(esp + 0x20) = edi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x90)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x90] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00195C57; /* jp: parity */

loc_00195C39: ;
    /* nop */

loc_00195C40: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = edi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x90)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x90] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00195C40; /* jnp: not parity */

loc_00195C57: ;
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = edi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x80)); /* fsub dword ptr [esp + 0x80] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC0)); /* fmul dword ptr [esp + 0xc0] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */

loc_00195C77: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001967F5; /* jae: above or equal (unsigned >=) */

loc_00195C82: ;
    ecx = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001967F5; /* jae: above or equal (unsigned >=) */

loc_00195C8E: ;
    edx = MEM32(esp + 0x50);
    fp_push(MEMF(0x2DC098)); /* fld float */
    SET_LO8(ecx, MEM8(esi + 0x14));
    fp_push(MEMF(esp + 0x64)); /* fld float */
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    SET_LO8(edx, ((_fas >= 0)) ? 1 : 0); /* setge */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    MEM8(esp + 0xA8) = LO8(edx);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00195CCA; /* jp: parity */

loc_00195CBB: ;
    MEM8(esp + 0xA8) = 0;
    SET_LO8(edx, MEM8(esp + 0xA8));

loc_00195CCA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ebx = 2;
    MEM32(esp + 0x38) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00195CDF; /* jne: not equal / not zero */

loc_00195CD7: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00195CE3;

loc_00195CDF: ;
    _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(esp + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00195CE3: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM32(esp + 0x24) = edi;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x94) - fp_top()); /* fsubr dword ptr [esp + 0x94] */
    if (CMP_EQ(_fa, _fb)) goto loc_00195D13; /* je: equal / zero */

loc_00195CF6: ;
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC08C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc08c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00195D0B; /* jne: not equal / not zero */

loc_00195D05: ;
    _fb = (uint32_t)(MEM32(esp + 0x4C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(esp + 0x4C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00195D34;

loc_00195D0B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x38) = ebx;
    goto loc_00195D38;

loc_00195D13: ;
    fp_push((double)SMEM32(esp + 0x4C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00195D38; /* jne: not equal / not zero */

loc_00195D28: ;
    eax = MEM32(esp + 0x4C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x38) = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00195D34: ;
    MEM32(esp + 0x24) = edi;

loc_00195D38: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00195D64; /* jnp: not parity */

loc_00195D4B: ;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x84)); /* fsub dword ptr [esp + 0x84] */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x4C)); /* fimul dword ptr [esp + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x64)); /* fmul dword ptr [esp + 0x64] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00195D6C;

loc_00195D64: ;
    MEM32(esp + 0x58) = 0x7F7FFFFF;

loc_00195D6C: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00195D87; /* jp: parity */

loc_00195D7F: ;
    fp_push(MEMF(0x2DC8D8)); /* fld float */
    goto loc_00195D8F;

loc_00195D87: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x60)); /* fsub dword ptr [esp + 0x60] */

loc_00195D8F: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00195DAF; /* jp: parity */

loc_00195DA2: ;
    MEM32(esp + 0x94) = 0xFF7FFFFFu;
    goto loc_00195DBE;

loc_00195DAF: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x64)); /* fsub dword ptr [esp + 0x64] */
    MEMF(esp + 0x94) = (float)fp_top(); fp_pop(); /* fstp */

loc_00195DBE: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00195DDE; /* jp: parity */

loc_00195DD1: ;
    MEM32(esp + 0x98) = 0xFF7FFFFFu;
    goto loc_00195DED;

loc_00195DDE: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x68)); /* fsub dword ptr [esp + 0x68] */
    MEMF(esp + 0x98) = (float)fp_top(); fp_pop(); /* fstp */

loc_00195DED: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00195E10; /* je: equal / zero */

loc_00195DF1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00195DFE; /* jne: not equal / not zero */

loc_00195DF5: ;
    fp_pop(); /* fstp st(0) */

loc_00195DF7: ;
    eax = 1;
    goto loc_00195E68;

loc_00195DFE: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x98)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x98] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00195E63; /* jne: not equal / not zero */

loc_00195E0C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00195E68;

loc_00195E10: ;
    fp_push(MEMF(esp + 0x140)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xAC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xac] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00195E3F; /* jp: parity */

loc_00195E25: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00195E2D; /* je: equal / zero */

loc_00195E29: ;
    fp_pop(); /* fstp st(0) */
    goto loc_00195E63;

loc_00195E2D: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x94)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x94] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00195DF7; /* jne: not equal / not zero */

loc_00195E3B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00195E68;

loc_00195E3F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    fp_pop(); /* fstp st(0) */
    if (CMP_EQ(_fa, _fb)) goto loc_00195E49; /* je: equal / zero */

loc_00195E45: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00195E68;

loc_00195E49: ;
    fp_push(MEMF(esp + 0x94)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x98)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x98] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00195E68; /* je: equal / zero */

loc_00195E63: ;
    eax = 2;

loc_00195E68: ;
    fp_push(MEMF(esp + eax * 4 + 0x54)); /* fld float */
    ecx = MEM32(esp + eax * 4 + 0x20);
    edx = MEM32(esp + eax * 4 + 0x48);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + eax * 4 + 0x60)); /* fsub dword ptr [esp + eax*4 + 0x60] */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + eax * 4 + 0x20) = ecx;
    ebx = MEM32(esp + 0x20);
    MEMF(esp + eax * 4 + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    edi = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xC) (32-bit) */
    MEM32(esp + 0x1C) = 0x7F7FFFFF;
    MEM32(esp + 0xA4) = 0;
    MEM32(esp + 0x44) = 0xBF800000u;
    MEM32(esp + 0x18) = edi;
    if (CMP_AE(_fa, _fb)) goto loc_001967F5; /* jae: above or equal (unsigned >=) */

loc_00195EB0: ;
    goto loc_00195EC0;

loc_00195EB2: ;
    edi = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x20);
    /* nop */

loc_00195EC0: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x10) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001967F5; /* jae: above or equal (unsigned >=) */

loc_00195ECD: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    ecx = MEM32(ebp + 0x10);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001967F5; /* je: equal / zero */

loc_00195EE2: ;
    edx = MEM32(esp + edi * 4 + 0x54);
    eax = esp + edi * 4 + 0x54;
    MEM32(esp + 0x7C) = eax;
    eax = edx;
    PUSH32(esp, eax);
    ecx = esp + 0xE4;
    MEM32(esp + 0x34) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00195F01u); RECOMP_ABI_CALL(0x00015C30u, sub_00015C30); /* call 0x00015C30 */

loc_00195F01: ;
    xmm0 = XMM_MEM(esp + 0xE0); /* movaps */
    xmm2 = XMM_MEM(0x2F18F0); /* movaps */
    edx = MEM32(esp + 0x48);
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm2 = XMM_SUB(xmm2, xmm0); /* subps */
    xmm2 = XMM_MUL(xmm2, XMM_MEM(esp + 0x80)); /* mulps */
    ecx = ebx;
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(esp + 0xB0)); /* mulps */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    XMM_STORE(esp + 0x90, xmm2); /* movaps */
    MEM32(esp + 0x40) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00195F83; /* jne: not equal / not zero */

loc_00195F45: ;
    eax = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x50);
    edx = MEM32(esi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00195F58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00195F55u); } /* indirect call */
    }

loc_00195F58: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0x28);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00195F69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00195F66u); } /* indirect call */
    }

loc_00195F69: ;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x98) - fp_top()); /* fsubr dword ptr [esp + 0x98] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    goto loc_00196015;

loc_00195F83: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    edi = MEM32(esp + 0x28);
    if (CMP_NE(_fa, _fb)) goto loc_00195FB9; /* jne: not equal / not zero */

loc_00195F8C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x00195F95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00195F92u); } /* indirect call */
    }

loc_00195F95: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00195FA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00195F9Fu); } /* indirect call */
    }

loc_00195FA2: ;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x90) - fp_top()); /* fsubr dword ptr [esp + 0x90] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    goto loc_00196015;

loc_00195FB9: ;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    SET_LO8(edx, MEM8(esp + 0xA8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = MEM32(esp + 0x28);
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x90) - fp_top()); /* fsubr dword ptr [esp + 0x90] */
    MEM32(esp + 0x3C) = edi;
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00195FE9; /* je: equal / zero */

loc_00195FDD: ;
    edx = edi;
    _fb = (uint32_t)(MEM32(esp + 0x50)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(esp + 0x50);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x3C) = edx;
    goto loc_00195FF1;

loc_00195FE9: ;
    edx = MEM32(esp + 0x50);
    eax = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00195FF1: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00195FFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00195FF7u); } /* indirect call */
    }

loc_00195FFA: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x3C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0019600Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00196008u); } /* indirect call */
    }

loc_0019600B: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */

loc_00196015: ;
    SET_LO8(ecx, MEM8(esp + 0x37));
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x9C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    if (CMP_EQ(_fa, _fb)) goto loc_00196094; /* je: equal / zero */

loc_00196032: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001963C1; /* je: equal / zero */

loc_0019603B: ;
    fp_push(MEMF(esp + 0xA4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x9C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xDC)); /* fmul dword ptr [esp + 0xdc] */
    fp_top() = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); /* fsubr st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001963BF; /* jnp: not parity */

loc_0019606F: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001960B3; /* jp: parity */

loc_0019607C: ;
    edx = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00196088u); RECOMP_ABI_CALL(0x00145D90u, sub_00145D90); /* call 0x00145D90 */

loc_00196088: ;
    MEMF(esp + 0x44) = (float)fp_top(); /* fst */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00196148;

loc_00196094: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001963C1; /* je: equal / zero */

loc_0019609D: ;
    fp_push(MEMF(esp + 0xA4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001963C1; /* jnp: not parity */

loc_001960B3: ;
    fp_push(MEMF(esp + 0x9C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001960F2; /* jne: not equal / not zero */

loc_001960CF: ;
    fp_push(MEMF(esp + 0xA4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); fp_pop(); /* fsubrp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x44)); /* fadd dword ptr [esp + 0x44] */
    goto loc_00196142;

loc_001960F2: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x30) / fp_top()); /* fdivr dword ptr [esp + 0x30] */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x8C) - fp_top()); /* fsubr dword ptr [esp + 0x8c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00196136; /* jp: parity */

loc_00196126: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (CMP_EQ(_fa, _fb)) goto loc_001963BF; /* je: equal / zero */

loc_00196130: ;
    fp_push(MEMF(0x2DC098)); /* fld float */

loc_00196136: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); fp_pop(); /* fsubrp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_st1() / fp_top()); /* fdivr st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */

loc_00196142: ;
    MEMF(esp + 0x3C) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */

loc_00196148: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x9C);
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ebp + 0x10);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 4] */
    MEM32(esp + 0xA4) = ecx;
    MEM32(esp + 0x44) = edx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001967F5; /* je: equal / zero */

loc_00196177: ;
    ecx = MEM32(esp + 0x50);
    ebx = MEM32(esp + 0x28);
    SET_LO8(eax, MEM8(esp + 0xA8));
    edx = MEM32(esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x124) = 0x3F800000;
    MEM32(esp + 0x11C) = 0;
    MEM32(esp + 0x114) = 0x3F800000;
    ecx = esi;
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0019621C; /* je: equal / zero */

loc_001961B2: ;
    eax = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001961BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001961B7u); } /* indirect call */
    }

loc_001961BA: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x40);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001961CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001961C8u); } /* indirect call */
    }

loc_001961CB: ;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 1 (32-bit) */
    edx = MEM32(esi);
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_001961F8; /* jne: not equal / not zero */

loc_001961DA: ;
    eax = MEM32(esp + 0x40);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001961E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001961E0u); } /* indirect call */
    }

loc_001961E3: ;
    MEMF(esp + 0x40) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    goto loc_0019629D;

loc_001961F8: ;
    eax = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00196201u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001961FEu); } /* indirect call */
    }

loc_00196201: ;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x40)); /* fsub dword ptr [esp + 0x40] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x40)); /* fsub dword ptr [esp + 0x40] */
    goto loc_0019629F;

loc_0019621C: ;
    eax = MEM32(esp + 0x44);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00196224u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00196221u); } /* indirect call */
    }

loc_00196224: ;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00196235u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00196232u); } /* indirect call */
    }

loc_00196235: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019627C; /* je: equal / zero */

loc_00196241: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019625B; /* jne: not equal / not zero */

loc_00196246: ;
    fp_push(MEMF(esp + 0x140)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xAC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xac] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0019627C; /* jnp: not parity */

loc_0019625B: ;
    eax = MEM32(esp + 0x40);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00196268u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00196265u); } /* indirect call */
    }

loc_00196268: ;
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    goto loc_0019629F;

loc_0019627C: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00196289u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00196286u); } /* indirect call */
    }

loc_00196289: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */

loc_0019629D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */

loc_0019629F: ;
    fp_push((double)SMEM32(esp + 0x48)); /* fild */
    SET_LO8(ebx, MEM8(esi + 0x14));
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    eax = ZX8(LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEMF(esp + 0x110) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ZX8(LO8(edx));
    fp_push((double)SMEM32(esp + 0x50)); /* fild */
    edx = MEM32(esp + 0x3C);
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x124) = edx;
    edx = MEM32(esp + 0x50);
    MEMF(esp + 0x118) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_MEM(esp + 0x110); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    fp_pop(); /* fstp st(0) */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x48);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    ecx = ecx << 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x20);
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    XMM_STORE(esp + 0xC0, xmm0); /* movaps */
    xmm2.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0xC0) = xmm2.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0xC0); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + ecx * 2 + -2;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx);
    MEM32(esp + 0x108) = 0x40400000;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x108)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x120) = eax;
    MEM32(esp + 0x10C) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    eax = esp + 0x110;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    PUSH32(esp, eax);
    XMM_STORE(esp + 0x118, xmm2); /* movaps */
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001963B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001963AEu); } /* indirect call */
    }

loc_001963B0: ;
    SET_LO8(eax, MEM8(esp + 0x37));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001963DF; /* je: equal / zero */

loc_001963B8: ;
    MEM8(esp + 0x37) = 0;
    goto loc_001963DF;

loc_001963BF: ;
    fp_pop(); /* fstp st(0) */

loc_001963C1: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x9C);
    eax = MEM32(esp + 0x30);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0xA4) = edx;
    MEM32(esp + 0x44) = eax;

loc_001963DF: ;
    eax = MEM32(esp + 0x18);
    ebx = MEM32(esp + eax * 4 + 0x20);
    fp_push(MEMF(esp + eax * 4 + 0x60)); /* fld float */
    edi = MEM32(esp + eax * 4 + 0x48);
    ecx = MEM32(esp + 0x38);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + eax * 4 + 0x20) = ebx;
    eax = MEM32(esp + 0x7C);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    edx = 2;
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x38) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esp + 0xA8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019643E; /* je: equal / zero */

loc_00196417: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00196425; /* jne: not equal / not zero */

loc_0019641B: ;
    MEM32(esp + 0x18) = 1;
    goto loc_00196495;

loc_00196425: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x5C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x5c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00196491; /* jp: parity */

loc_00196434: ;
    MEM32(esp + 0x18) = 0;
    goto loc_00196495;

loc_0019643E: ;
    fp_push(MEMF(esp + 0x140)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xAC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xac] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019646C; /* jp: parity */

loc_00196453: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00196491; /* jne: not equal / not zero */

loc_00196457: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x58)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x58] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019641B; /* jp: parity */

loc_00196466: ;
    MEM32(esp + 0x18) = ecx;
    goto loc_00196495;

loc_0019646C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019647A; /* je: equal / zero */

loc_00196470: ;
    MEM32(esp + 0x18) = 0;
    goto loc_00196495;

loc_0019647A: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    MEM32(esp + 0x18) = 1;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x5C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x5c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00196495; /* jnp: not parity */

loc_00196491: ;
    MEM32(esp + 0x18) = edx;

loc_00196495: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00195EB2; /* jb: below (unsigned <) */

loc_001964A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_001964AB: ;
    edx = MEM32(esi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001967F5; /* jae: above or equal (unsigned >=) */

loc_001964B7: ;
    eax = MEM32(esi + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001967F5; /* jae: above or equal (unsigned >=) */

loc_001964C3: ;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    edx = MEM32(esi);
    MEM32(esp + 0x7C) = 0x3F800000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x88) - fp_top()); /* fsubr dword ptr [esp + 0x88] */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(esp + 0xF4) = 0x3F800000;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    XMM_STORE(esp + 0xE0, xmm0); /* movaps */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    PUSH32(esp, ebx);
    ecx = esi;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x84) - fp_top()); /* fsubr dword ptr [esp + 0x84] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_001965C0; /* je: equal / zero */

loc_00196513: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00196517u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00196514u); } /* indirect call */
    }

loc_00196517: ;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    eax = ebx + 1;
    ecx = edi + 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0019652Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00196527u); } /* indirect call */
    }

loc_0019652A: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    edx = MEM32(esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x30] */
    ecx = esi;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019657A; /* jne: not equal / not zero */

loc_00196541: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = edi + 1;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00196549u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00196546u); } /* indirect call */
    }

loc_00196549: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    goto loc_0019662D;

loc_0019657A: ;
    eax = ebx + 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00196582u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019657Fu); } /* indirect call */
    }

loc_00196582: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xE0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    goto loc_00196685;

loc_001965C0: ;
    eax = edi + 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001965C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001965C4u); } /* indirect call */
    }

loc_001965C7: ;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    eax = ebx + 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001965D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001965D4u); } /* indirect call */
    }

loc_001965D7: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC08C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc08c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196645; /* jne: not equal / not zero */

loc_001965F2: ;
    edx = MEM32(esi);
    eax = ebx + 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = edi + 1;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001965FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001965FCu); } /* indirect call */
    }

loc_001965FF: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC08C)); /* fsub dword ptr [0x2dc08c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */

loc_0019662D: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = 1;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xE0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    goto loc_00196687;

loc_00196645: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0019664Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00196649u); } /* indirect call */
    }

loc_0019664C: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xE0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_00196685: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00196687: ;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xE8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x8C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xBC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001967F5; /* je: equal / zero */

loc_001966BF: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001966F2; /* jp: parity */

loc_001966D4: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xDC)); /* fsub dword ptr [esp + 0xdc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x38)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x38] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001967F5; /* jnp: not parity */

loc_001966EA: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    goto loc_00196724;

loc_001966F2: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001967F5; /* jnp: not parity */

loc_00196703: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001967F5; /* je: equal / zero */

loc_00196718: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x1C) / fp_top()); /* fdivr dword ptr [esp + 0x1c] */

loc_00196724: ;
    ecx = MEM32(ebp + 0x10);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001967F3; /* jp: parity */

loc_00196737: ;
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    MEMF(esp + 0xF4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_MEM(esp + 0xE0); /* movaps */
    eax = MEM32(ecx);
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    XMM_STORE(esp + 0xC0, xmm0); /* movaps */
    xmm2.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0xC0) = xmm2.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0xC0); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    ebx = ebx << 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x7C) = 0x40400000;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx + ebx * 2;
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0xF0) = edx;
    MEM32(esp + 0x7C) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    edx = esp + 0xE0;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    PUSH32(esp, edx);
    XMM_STORE(esp + 0xE8, xmm2); /* movaps */
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001967EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001967E8u); } /* indirect call */
    }

loc_001967EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_001967F3: ;
    fp_pop(); /* fstp st(0) */

loc_001967F5: ;
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
 * sub_00196800
 * Original: 0x00196800 - 0x00196923 (291 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00196800(void)
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

loc_00196800: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244418);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    MEM16(esi + 6) = 1;
    MEM32(esi) = 0x2F6A40;
    eax = MEM32(ecx);
    MEM32(esp + 0xC) = esi;
    MEM32(esi + 8) = eax;
    MEM32(esi) = 0x2F6EF4;
    eax = MEM32(ecx + 0x20);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ecx + 0x24);
    MEM32(esi + 0x10) = eax;
    fp_push((double)SMEM32(ecx + 0x24)); /* fild */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x2C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC08C)); /* fsub dword ptr [0x2dc08c] */
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x28)); /* fsub dword ptr [ecx + 0x28] */
    fp_push((double)SMEM32(ecx + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC08C)); /* fsub dword ptr [0x2dc08c] */
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x5C) = edx;
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esi + 0x50, xmm1); /* movaps */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019689E; /* jne: not equal / not zero */

loc_00196891: ;
    eax = 0xBF800000u;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x54) = eax;
    goto loc_001968AD;

loc_0019689E: ;
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x28)); /* fadd dword ptr [ecx + 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_001968AD: ;
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    XMM_STORE(esi + 0x20, xmm0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x18)); /* fdiv dword ptr [ecx + 0x18] */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x14)); /* fdiv dword ptr [ecx + 0x14] */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x10)); /* fdiv dword ptr [ecx + 0x10] */
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x3C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001968E1u); RECOMP_ABI_CALL(0x001CFA10u, sub_001CFA10); /* call 0x001CFA10 */

loc_001968E1: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_MEM(esi + 0x20); /* movaps */
    ecx = MEM32(esp + 0x24);
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(esp + 0x10, xmm2); /* movaps */
    MEM32(esp + 0x14) = 0;
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esi + 0x40, xmm0); /* movaps */
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
 * sub_00196930
 * Original: 0x00196930 - 0x0019693C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196930(void)
{

loc_00196930: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00196940
 * Original: 0x00196940 - 0x0019694C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196940(void)
{

loc_00196940: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00196950
 * Original: 0x00196950 - 0x00196A15 (197 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00196950(void)
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

loc_00196950: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0);
    edx = esp + 0x38;
    XMM_STORE(esp + 0x38, xmm0); /* movaps */
    XMM_STORE(esp + 0x48, xmm0); /* movaps */
    XMM_STORE(esp + 0x58, xmm0); /* movaps */
    PUSH32(esp, edx);
    MEM32(esp + 0x3C) = 0x3F800000;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x64) = 0x3F800000;
    XMM_STORE(esp + 0x6C, xmm0); /* movaps */
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00196999u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00196996u); } /* indirect call */
    }

loc_00196999: ;
    xmm3 = XMM_MEM(esp + 0x10); /* movaps */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    eax = MEM32(ebp + 8);
    xmm2 = XMM_MEM(eax); /* movaps */
    MEM32(esp + 0xC) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm3); /* subps */
    xmm4 = XMM_ADD(xmm4, xmm3); /* addps */
    xmm5 = xmm0; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    xmm6 = xmm2; /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm4); /* mulps */
    xmm4 = XMM_MEM(0x2F6A30); /* movaps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm6 = XMM_AND(xmm6, xmm4); /* andps */
    xmm3 = XMM_XOR(xmm3, xmm6); /* xorps */
    xmm0 = xmm3; /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm5); /* addps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    ecx = esp + 0xC;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
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
 * sub_00196A20
 * Original: 0x00196A20 - 0x00196A26 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196A20(void)
{

loc_00196A20: ;
    eax = 0x440AB8;
    esp += 4; return; /* ret */

}

/**
 * sub_00196A30
 * Original: 0x00196A30 - 0x00196A64 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196A30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00196A30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00196A38u); RECOMP_ABI_CALL(0x001B2C20u, sub_001B2C20); /* call 0x001B2C20 */

loc_00196A38: ;
    eax = 0x3F800000;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = ecx;
    eax = 2;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = ecx;
    MEM32(esi + 0x2C) = 0xBF800000u;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00196A70
 * Original: 0x00196A70 - 0x00196A79 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196A70(void)
{

loc_00196A70: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00196A80
 * Original: 0x00196A80 - 0x00196A86 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196A80(void)
{

loc_00196A80: ;
    eax = 0x440AE0;
    esp += 4; return; /* ret */

}

/**
 * sub_00196A90
 * Original: 0x00196A90 - 0x00196AA4 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196A90(void)
{

loc_00196A90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00196A98u); RECOMP_ABI_CALL(0x001B2C20u, sub_001B2C20); /* call 0x001B2C20 */

loc_00196A98: ;
    eax = MEM32(0x30ED84);
    MEM32(esi + 4) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00196AB0
 * Original: 0x00196AB0 - 0x00196AB6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196AB0(void)
{

loc_00196AB0: ;
    eax = 0x440B30;
    esp += 4; return; /* ret */

}

/**
 * sub_00196AC0
 * Original: 0x00196AC0 - 0x00196ACF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196AC0(void)
{

loc_00196AC0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00196ACEu); RECOMP_ABI_CALL(0x001904A0u, sub_001904A0); /* call 0x001904A0 */

loc_00196ACE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00196AD0
 * Original: 0x00196AD0 - 0x00196AD6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196AD0(void)
{

loc_00196AD0: ;
    eax = 0x440B58;
    esp += 4; return; /* ret */

}

/**
 * sub_00196AE0
 * Original: 0x00196AE0 - 0x00196B31 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196AE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00196AE0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24443B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x20);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00196B05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00196B02u); } /* indirect call */
    }

loc_00196B05: ;
    MEM16(eax + 4) = 0x20;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00196B22u); RECOMP_ABI_CALL(0x00190830u, sub_00190830); /* call 0x00190830 */

loc_00196B22: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00196B40
 * Original: 0x00196B40 - 0x00196B97 (87 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00196B40: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244461);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    MEM32(esp + 4) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00196B87; /* je: equal / zero */

loc_00196B6B: ;
    ecx = esi;
    PUSH32(esp, 0x00196B72u); RECOMP_ABI_CALL(0x00196A90u, sub_00196A90); /* call 0x00196A90 */

loc_00196B72: ;
    eax = 0x3F800000;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = 0;

loc_00196B87: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00196BA0
 * Original: 0x00196BA0 - 0x00196BAF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196BA0(void)
{

loc_00196BA0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00196BAEu); RECOMP_ABI_CALL(0x00190F50u, sub_00190F50); /* call 0x00190F50 */

loc_00196BAE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00196BB0
 * Original: 0x00196BB0 - 0x00196BB6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196BB0(void)
{

loc_00196BB0: ;
    eax = 0x440BA8;
    esp += 4; return; /* ret */

}

/**
 * sub_00196BC0
 * Original: 0x00196BC0 - 0x00196C11 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00196BC0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24447B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x10);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00196BE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00196BE2u); } /* indirect call */
    }

loc_00196BE5: ;
    MEM16(eax + 4) = 0x10;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00196C02u); RECOMP_ABI_CALL(0x00191280u, sub_00191280); /* call 0x00191280 */

loc_00196C02: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00196C20
 * Original: 0x00196C20 - 0x00196C5D (61 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00196C20: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2444A1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(esp) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00196C4E; /* je: equal / zero */

loc_00196C49: ;
    PUSH32(esp, 0x00196C4Eu); RECOMP_ABI_CALL(0x00196A90u, sub_00196A90); /* call 0x00196A90 */

loc_00196C4E: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00196C60
 * Original: 0x00196C60 - 0x00196C6F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196C60(void)
{

loc_00196C60: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00196C6Eu); RECOMP_ABI_CALL(0x001912E0u, sub_001912E0); /* call 0x001912E0 */

loc_00196C6E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00196C70
 * Original: 0x00196C70 - 0x00196C7F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196C70(void)
{

loc_00196C70: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00196C7Eu); RECOMP_ABI_CALL(0x00191310u, sub_00191310); /* call 0x00191310 */

loc_00196C7E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00196C80
 * Original: 0x00196C80 - 0x00196C86 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196C80(void)
{

loc_00196C80: ;
    eax = 0x440BD0;
    esp += 4; return; /* ret */

}

/**
 * sub_00196C90
 * Original: 0x00196C90 - 0x00196CE1 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196C90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00196C90: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2444BB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x30);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00196CB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00196CB2u); } /* indirect call */
    }

loc_00196CB5: ;
    MEM16(eax + 4) = 0x30;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00196CD2u); RECOMP_ABI_CALL(0x00191D30u, sub_00191D30); /* call 0x00191D30 */

loc_00196CD2: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00196CF0
 * Original: 0x00196CF0 - 0x00196D4E (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00196CF0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2444E1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00196D3D; /* je: equal / zero */

loc_00196D1A: ;
    ecx = esi;
    PUSH32(esp, 0x00196D21u); RECOMP_ABI_CALL(0x00196A90u, sub_00196A90); /* call 0x00196A90 */

loc_00196D21: ;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = 0x3F800000;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = edi;

loc_00196D3D: ;
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
 * sub_00196D50
 * Original: 0x00196D50 - 0x00196DF0 (160 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00196D50(void)
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

loc_00196D50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DE084)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2de084] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00196DE7; /* jnp: not parity */

loc_00196D69: ;
    xmm1 = XMM_MEM(esi + 0x10); /* movaps */
    xmm2 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm3 = xmm0; /* movaps */
    eax = esp + 0xC;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00196DE7; /* jp: parity */

loc_00196DA3: ;
    xmm0 = XMM_MEM(esi); /* movaps */
    xmm2 = XMM_MEM(ecx); /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm0); /* subps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    ecx = esp + 0xC;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00196DE7; /* jp: parity */

loc_00196DDE: ;
    MEM8(edi) = 0;
    eax = edi;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00196DE7: ;
    MEM8(edi) = 1;
    eax = edi;
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
 * sub_00196DF0
 * Original: 0x00196DF0 - 0x00196E2E (62 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196DF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00196DF0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(edx + 0xC);
    eax = MEM32(eax + 4);
    edx = MEM32(esp + 0x1C);
    MEM32(esp) = ecx;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 8) = eax;
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00196E2Au); RECOMP_ABI_CALL(0x001ABD30u, sub_001ABD30); /* call 0x001ABD30 */

loc_00196E2A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00196E30
 * Original: 0x00196E30 - 0x00196E75 (69 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196E30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00196E30: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    edx = MEM32(eax + 8);
    MEM32(esp + 8) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0xC) = eax;
    edx = MEM32(edx + 0xC);
    eax = MEM32(eax + 4);
    MEM32(esp) = edx;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00196E6Fu); RECOMP_ABI_CALL(0x001AB4D0u, sub_001AB4D0); /* call 0x001AB4D0 */

loc_00196E6F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00196E80
 * Original: 0x00196E80 - 0x00196EF7 (119 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00196E80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244558);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 4) = LO8(eax);
    MEM32(esp) = 0x2F7104;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(eax + 8);
    ecx = MEM32(eax);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 4);
    ecx = MEM32(ecx + 0xC);
    eax = esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00196EE8u); RECOMP_ABI_CALL(0x001ABD30u, sub_001ABD30); /* call 0x001ABD30 */

loc_00196EE8: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00196F00
 * Original: 0x00196F00 - 0x00196F7D (125 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00196F00: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244578);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x38);
    MEM32(esp + 4) = 0x7F7FFFFF;
    MEM32(esp) = 0x2F70F4;
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(edx + 0xC);
    eax = MEM32(eax + 4);
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0xC) = ecx;
    ecx = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = 0;
    PUSH32(esp, 0x00196F6Eu); RECOMP_ABI_CALL(0x001AB8E0u, sub_001AB8E0); /* call 0x001AB8E0 */

loc_00196F6E: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00196F80
 * Original: 0x00196F80 - 0x001970BB (315 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00196F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00196F80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244500);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_MEM(0x2F6A30); /* movaps */
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax + 0x24);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(ebp + 0x14);
    MEM32(esp + 0x34) = ecx;
    xmm2 = xmm0; /* movaps */
    ecx = 0x2F70FC;
    xmm2 = XMM_XOR(xmm2, xmm1); /* xorps */
    XMM_STORE(esp + 0x20, xmm2); /* movaps */
    MEM32(esp + 0x44) = 0x7F7FFFFF;
    MEM32(esp + 0x40) = ecx;
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    MEM32(esp + 0x60) = edx;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xAC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0019706E; /* je: equal / zero */

loc_00197014: ;
    MEM32(esp + 0x74) = 0x7F7FFFFF;
    MEM32(esp + 0x70) = ecx;
    XMM_STORE(esp + 0x80, xmm0); /* movaps */
    MEM32(esp + 0x90) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(edx + 0xC);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    MEM32(esp + 0xC) = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM8(esp + 0xBC) = 1;
    PUSH32(esp, edx);
    goto loc_001970A1;

loc_0019706E: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(edx + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0);
    MEM32(esp + 4) = ecx;
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    edx = esp + 0x18;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);

loc_001970A1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001970A6u); RECOMP_ABI_CALL(0x001AB5E0u, sub_001AB5E0); /* call 0x001AB5E0 */

loc_001970A6: ;
    ecx = MEM32(esp + 0xB8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(XBOX_FS_BASE) = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001970C0
 * Original: 0x001970C0 - 0x001970E8 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001970C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001970C0: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001970E7; /* js: sign (negative) */

loc_001970C9: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001970E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001970E3u); } /* indirect call */
    }

loc_001970E6: ;
    POP32(esp, esi);

loc_001970E7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001970F0
 * Original: 0x001970F0 - 0x00197155 (101 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001970F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001970F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244518);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2F710C;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0019713F; /* js: sign (negative) */

loc_00197122: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0019713Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019713Cu); } /* indirect call */
    }

loc_0019713F: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x2DC684;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00197160
 * Original: 0x00197160 - 0x00197188 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197160: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00197168u); RECOMP_ABI_CALL(0x001970F0u, sub_001970F0); /* call 0x001970F0 */

loc_00197168: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00197182; /* je: equal / zero */

loc_0019716F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1A);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00197182u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019717Fu); } /* indirect call */
    }

loc_00197182: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00197190
 * Original: 0x00197190 - 0x00197221 (145 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00197190: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244538);
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
    eax = edi + edi * 4;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001971E5; /* jle: less or equal (signed <=) */

loc_001971DD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001971E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001971E0u); } /* indirect call */
    }

loc_001971E3: ;
    goto loc_001971F9;

loc_001971E5: ;
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

loc_001971F9: ;
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
 * sub_00197230
 * Original: 0x00197230 - 0x001972D0 (160 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197230: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244538);
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
    eax = eax + eax * 4;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = 0;
    if ((_fa == 0)) goto loc_00197284; /* je: equal / zero */

loc_00197270: ;
    edi = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019727B; /* je: equal / zero */

loc_00197277: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00197284; /* jne: not equal / not zero */

loc_0019727B: ;
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x28); PUSH32(esp, 0x00197282u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019727Fu); } /* indirect call */
    }

loc_00197282: ;
    goto loc_00197294;

loc_00197284: ;
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

loc_00197294: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001972BF; /* js: sign (negative) */

loc_001972A3: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001972BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001972BCu); } /* indirect call */
    }

loc_001972BF: ;
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
 * sub_001972D0
 * Original: 0x001972D0 - 0x00197350 (128 bytes, 41 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001972D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001972D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244558);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 4) = LO8(eax);
    MEM32(esp) = 0x2F7104;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(eax + 8);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x18) = eax;
    edx = MEM32(edx + 0xC);
    eax = MEM32(eax + 4);
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x34);
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00197338u); RECOMP_ABI_CALL(0x001ABB10u, sub_001ABB10); /* call 0x001ABB10 */

loc_00197338: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00197350
 * Original: 0x00197350 - 0x001973CF (127 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197350: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244578);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x38);
    MEM32(esp + 4) = 0x7F7FFFFF;
    MEM32(esp) = 0x2F70F4;
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(eax + 8);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x18) = eax;
    edx = MEM32(edx + 0xC);
    eax = MEM32(eax + 4);
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x34);
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = 0;
    PUSH32(esp, 0x001973BEu); RECOMP_ABI_CALL(0x001AB7D0u, sub_001AB7D0); /* call 0x001AB7D0 */

loc_001973BE: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001973D0
 * Original: 0x001973D0 - 0x0019742E (94 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001973D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001973D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24459B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x40);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001973F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001973F3u); } /* indirect call */
    }

loc_001973F6: ;
    esi = eax;
    MEM16(esi + 4) = 0x40;
    MEM32(esp + 4) = esi;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x00197416u); RECOMP_ABI_CALL(0x001AA570u, sub_001AA570); /* call 0x001AA570 */

loc_00197416: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x2F712C;
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00197430
 * Original: 0x00197430 - 0x00197A20 (1520 bytes, 441 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00197430(void)
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

loc_00197430: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2445BB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x178) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x178;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x38) = edi;
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi);
    ecx = MEM32(esi + 8);
    MEM32(esp + 0x78) = ecx;
    MEM32(esp + 0x7C) = esi;
    eax = MEM32(eax + 0xC);
    edx = MEM32(esi + 4);
    PUSH32(esp, 0x1AA130);
    MEM32(esp + 0x74) = eax;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    ecx = esp + 0x78;
    MEM32(esp + 0x7C) = edx;
    edx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197491u); RECOMP_ABI_CALL(0x001AA640u, sub_001AA640); /* call 0x001AA640 */

loc_00197491: ;
    eax = MEM32(edi + 0x10);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019749Eu); RECOMP_ABI_CALL(0x00197190u, sub_00197190); /* call 0x00197190 */

loc_0019749E: ;
    eax = MEM32(esp + 0x70);
    edx = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x50) = eax;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18C) = ecx;
    MEM32(esp + 0x6C) = esi;
    MEM32(esp + 0x68) = edx;
    MEM32(esp + 0x18) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00197629; /* jle: less or equal (signed <=) */

loc_001974C9: ;
    MEM32(esp + 0x14) = ecx;
    /* nop */

loc_001974D0: ;
    esi = MEM32(edi + 0xC);
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001974DCu); RECOMP_ABI_CALL(0x001B2D60u, sub_001B2D60); /* call 0x001B2D60 */

loc_001974DC: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019760A; /* je: equal / zero */

loc_001974E5: ;
    eax = MEM32(esp + 0x50);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    eax = esp + 0x80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x001974FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001974F9u); } /* indirect call */
    }

loc_001974FC: ;
    ecx = MEM32(esi);
    MEM32(esp + 0x64) = ecx;
    ecx = MEM32(ebp + 8);
    edi = MEM32(ecx);
    MEM32(esp + 0x60) = eax;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00197512u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019750Fu); } /* indirect call */
    }

loc_00197512: ;
    ebx = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0019751Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00197518u); } /* indirect call */
    }

loc_0019751B: ;
    edi = MEM32(ebp + 0x10);
    ecx = MEM32(edi);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x18C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19BB90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 0x18C), 0x19BB90 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001975EE; /* jne: not equal / not zero */

loc_00197536: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x24);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019755E; /* jne: not equal / not zero */

loc_00197548: ;
    eax = esp + 0x20;
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197557u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_00197557: ;
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0019755E: ;
    edx = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = eax;
    ecx = MEM32(esi + 8);
    eax = eax + eax * 4 + -5;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + edx + 0x90) = ecx;
    edx = MEM32(esp + 0x20);
    MEM8(eax + edx + 0x94) = 0;
    edx = MEM32(esp + 0x20);
    MEM8(eax + edx + 0x95) = 0;
    edx = MEM32(esp + 0x20);
    MEM8(eax + edx + 0x96) = 0;
    edx = MEM32(esp + 0x20);
    MEM8(eax + edx + 0x97) = 0;
    edx = MEM32(esp + 0x20);
    MEM8(eax + edx + 0x98) = 0;
    edx = MEM32(esp + 0x20);
    MEM8(eax + edx + 0x99) = 0;
    edx = MEM32(esi);
    esi = MEM32(esp + 0x20);
    MEM32(eax + esi + 0x9C) = edx;
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001975E9u); RECOMP_ABI_CALL(0x0019BCB0u, sub_0019BCB0); /* call 0x0019BCB0 */

loc_001975E9: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00197606;

loc_001975EE: ;
    eax = MEM32(ebp + 0x14);
    esi = MEM32(esi + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00197606u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00197603u); } /* indirect call */
    }

loc_00197606: ;
    edi = MEM32(esp + 0x38);

loc_0019760A: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(edi + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001974D0; /* jl: less (signed <) */

loc_00197629: ;
    eax = MEM32(esp + 0x24);
    ebx = MEM32(esp + 0x20);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00197819; /* jle: less or equal (signed <=) */

loc_00197643: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x34) = eax;
    /* nop */

loc_00197650: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x54) = esi;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = eax;
    edi = edi;

loc_00197660: ;
    ecx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(MEM8(ecx + ebx + 0x94)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + ebx + 0x94), 1 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001977D5; /* jne: not equal / not zero */

loc_00197677: ;
    edx = MEM32(esp + 0x40);
    fp_push(MEMF(edx + ebx + 0xC)); /* fld float */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = fabs(fp_top()); /* fabs */
    ecx = ebx + 0xC;

loc_00197686: ;
    _fa = (uint32_t)(MEM8(ecx + 0x8B)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x8B), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001976A6; /* je: equal / zero */

loc_0019768F: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001976A6; /* jp: parity */

loc_0019769C: ;
    fp_pop(); /* fstp st(0) */
    edi = edx;
    fp_push(MEMF(ecx)); /* fld float */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = fabs(fp_top()); /* fabs */

loc_001976A6: ;
    _fa = (uint32_t)(MEM8(ecx + 0x8C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x8C), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001976CB; /* je: equal / zero */

loc_001976AF: ;
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001976CB; /* jp: parity */

loc_001976BD: ;
    fp_pop(); /* fstp st(0) */
    edi = edx;
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    esi = 1;
    fp_top() = fabs(fp_top()); /* fabs */

loc_001976CB: ;
    _fa = (uint32_t)(MEM8(ecx + 0x8D)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x8D), 1 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001976F5; /* jne: not equal / not zero */

loc_001976D9: ;
    fp_push(MEMF(ecx + 0x60)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001976F5; /* jp: parity */

loc_001976E7: ;
    fp_pop(); /* fstp st(0) */
    edi = edx;
    fp_push(MEMF(ecx + 0x60)); /* fld float */
    esi = 2;
    fp_top() = fabs(fp_top()); /* fabs */

loc_001976F5: ;
    eax = MEM32(esp + 0x18);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xA0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00197686; /* jl: less (signed <) */

loc_00197704: ;
    edx = MEM32(esp + 0x18);
    fp_pop(); /* fstp st(0) */
    eax = edi + edi * 4;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + esi;
    esi = esi + esi * 2;
    ebx = ecx + ebx + 0x97;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ebx) = 1;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x5C) = edx;
    goto loc_00197740;

    /* nop */
    edi = edi;

loc_00197740: ;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x58) = 3;

loc_00197750: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM8(eax + ebx + 0x97)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ebx + 0x97), 1 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00197792; /* jne: not equal / not zero */

loc_00197763: ;
    ecx = MEM32(esp + 0x48);
    edx = MEM32(ebp + 0x10);
    edx = MEM32(edx + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esp + 0x47;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197778u); RECOMP_ABI_CALL(0x00196D50u, sub_00196D50); /* call 0x00196D50 */

loc_00197778: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00197792; /* je: equal / zero */

loc_00197782: ;
    eax = MEM32(esp + 0x14);
    MEM8(eax + ebx + 0x94) = 1;
    ebx = MEM32(esp + 0x20);

loc_00197792: ;
    edx = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x58);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x58) = eax;
    if ((_fa != 0)) goto loc_00197750; /* jne: not equal / not zero */

loc_001977B1: ;
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x5C);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x5C) = ecx;
    if ((_fa != 0)) goto loc_00197740; /* jne: not equal / not zero */

loc_001977CD: ;
    edi = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x54);

loc_001977D5: ;
    edx = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x40);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    MEM32(esp + 0x54) = esi;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00197660; /* jl: less (signed <) */

loc_001977F7: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x18);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x34) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00197650; /* jl: less (signed <) */

loc_00197815: ;
    eax = MEM32(esp + 0x24);

loc_00197819: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x34) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_001979F5; /* jle: less or equal (signed <=) */

loc_00197827: ;
    goto loc_00197830;

    /* nop */

loc_00197830: ;
    MEM32(esp + 0x18) = esi;
    edi = 0xC;
    MEM32(esp + 0x14) = esi;
    /* nop */

loc_00197840: ;
    ecx = MEM32(esp + 0x18);
    SET_LO8(edx, MEM8(ecx + ebx + 0x94));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00197985; /* je: equal / zero */

loc_00197858: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(ebp + 0x10);
    fp_push(MEMF(edx + ebx + 0xC)); /* fld float */
    fp_push(MEMF(eax + 8)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00197985; /* jp: parity */

loc_00197877: ;
    ecx = MEM32(esi + ebx + 0x90);
    _fa = (uint32_t)(MEM16(edi + ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + ecx), 0xFFFF (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001978FC; /* jne: not equal / not zero */

loc_00197886: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax + 8);
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(esp + 0x50);
    ecx = MEM32(eax + 0xC);
    eax = esp + 0x80;
    MEM32(esp + 0x68) = edx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + ebx + 0x9C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x001978B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001978ADu); } /* indirect call */
    }

loc_001978B0: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esi + edx + 0x9C);
    ebx = MEM32(esp + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x64) = ecx;
    ecx = esi + edx;
    edx = MEM32(ebp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(esp + 0x68) = eax;
    eax = MEM32(esp + 0x40);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001978EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001978E7u); } /* indirect call */
    }

loc_001978EA: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0x90);
    MEM16(edi + edx) = LO16(eax);
    ebx = MEM32(esp + 0x20);

loc_001978FC: ;
    eax = MEM32(esi + ebx + 0x90);
    _fa = (uint32_t)(MEM16(edi + eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001979BA; /* je: equal / zero */

loc_0019790F: ;
    ecx = MEM32(ebp + 0x14);
    ebx = MEM32(ecx);
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx + 8);
    edx = eax + 1;
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00197944; /* jge: greater or equal (signed >=) */

loc_0019792B: ;
    eax = ecx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00197934; /* jl: less (signed <) */

loc_00197932: ;
    eax = edx;

loc_00197934: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019793Du); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_0019793D: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00197944: ;
    ecx = eax + 1;
    MEM32(ebx + 4) = ecx;
    ecx = MEM32(ebx);
    edx = MEM32(esp + 0x20);
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x14);
    xmm0 = XMM_MEM(ecx + edx); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    edx = MEM32(esp + 0x20);
    xmm0 = XMM_MEM(ecx + edx + 0x10); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esi + ecx + 0x90);
    SET_LO16(ecx, MEM16(edi + edx));
    MEM16(eax + 0x20) = LO16(ecx);
    goto loc_001979B6;

loc_00197985: ;
    edx = MEM32(esi + ebx + 0x90);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001979BA; /* je: equal / zero */

loc_00197998: ;
    ecx = MEM32(esp + 0x38);
    ecx = MEM32(ecx + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001979A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001979A2u); } /* indirect call */
    }

loc_001979A5: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esi + eax + 0x90);
    MEM16(edi + ecx) = 0xFFFF;

loc_001979B6: ;
    ebx = MEM32(esp + 0x20);

loc_001979BA: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x12 (32-bit) */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00197840; /* jl: less (signed <) */

loc_001979DA: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x34) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00197830; /* jl: less (signed <) */

loc_001979F5: ;
    ecx = esp + 0x20;
    MEM32(esp + 0x18C) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197A09u); RECOMP_ABI_CALL(0x00197230u, sub_00197230); /* call 0x00197230 */

loc_00197A09: ;
    ecx = MEM32(esp + 0x184);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
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
 * sub_00197A20
 * Original: 0x00197A20 - 0x00197B66 (326 bytes, 89 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00197A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197A20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244500);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_MEM(0x2F6A30); /* movaps */
    PUSH32(esp, esi);
    edx = eax;
    esi = MEM32(edx);
    MEM32(esp + 0x20) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x24) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(eax + 0x24);
    eax = MEM32(ebp + 0x14);
    MEM32(esp + 0x44) = edx;
    xmm2 = xmm0; /* movaps */
    edx = 0x2F70FC;
    xmm2 = XMM_XOR(xmm2, xmm1); /* xorps */
    MEM32(esp + 0x28) = esi;
    XMM_STORE(esp + 0x30, xmm2); /* movaps */
    MEM32(esp + 0x54) = 0x7F7FFFFF;
    MEM32(esp + 0x50) = edx;
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    MEM32(esp + 0x70) = eax;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xBC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00197B19; /* je: equal / zero */

loc_00197AB5: ;
    MEM32(esp + 0x84) = 0x7F7FFFFF;
    MEM32(esp + 0x80) = edx;
    XMM_STORE(esp + 0x90, xmm0); /* movaps */
    MEM32(esp + 0xA0) = eax;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 8);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x1C) = eax;
    edx = MEM32(edx + 0xC);
    eax = MEM32(eax + 4);
    MEM32(esp + 0x10) = edx;
    edx = esp + 0x80;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x54;
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEM8(esp + 0xCC) = 1;
    PUSH32(esp, edx);
    goto loc_00197B4C;

loc_00197B19: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 8);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x1C) = eax;
    edx = MEM32(edx + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0);
    MEM32(esp + 0x14) = edx;
    edx = esp + 0x54;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = eax;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);

loc_00197B4C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197B51u); RECOMP_ABI_CALL(0x001AB4D0u, sub_001AB4D0); /* call 0x001AB4D0 */

loc_00197B51: ;
    ecx = MEM32(esp + 0xB4);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00197B70
 * Original: 0x00197B70 - 0x00197B98 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197B70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00197B78u); RECOMP_ABI_CALL(0x001A9DD0u, sub_001A9DD0); /* call 0x001A9DD0 */

loc_00197B78: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00197B92; /* je: equal / zero */

loc_00197B7F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1A);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00197B92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00197B8Fu); } /* indirect call */
    }

loc_00197B92: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00197BA0
 * Original: 0x00197BA0 - 0x00197BFF (95 bytes, 39 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00197BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197BA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    eax = MEM32(edi);
    esi = MEM32(eax + 4);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197BC5u); RECOMP_ABI_CALL(0x00197430u, sub_00197430); /* call 0x00197430 */

loc_00197BC5: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00197BF7; /* jge: greater or equal (signed >=) */

loc_00197BCC: ;
    ecx = esi + esi * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00197BD2: ;
    eax = MEM32(eax);
    xmm1 = XMM_MEM(eax + ecx + 0x10); /* movaps */
    xmm0 = XMM_MEM(0x2F6A30); /* movaps */
    eax = eax + ecx + 0x10;
    xmm1 = XMM_XOR(xmm1, xmm0); /* xorps */
    XMM_STORE(eax, xmm1); /* movaps */
    eax = MEM32(edi);
    edx = MEM32(eax + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00197BD2; /* jl: less (signed <) */

loc_00197BF7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00197C00
 * Original: 0x00197C00 - 0x00197C5E (94 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197C00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197C00: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24459B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x40);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00197C26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00197C23u); } /* indirect call */
    }

loc_00197C26: ;
    esi = eax;
    MEM16(esi + 4) = 0x40;
    MEM32(esp + 4) = esi;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x00197C46u); RECOMP_ABI_CALL(0x001AA570u, sub_001AA570); /* call 0x001AA570 */

loc_00197C46: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x2F714C;
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00197C60
 * Original: 0x00197C60 - 0x00197CCD (109 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197C60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197C60: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 0x14);
    PUSH32(esp, 7);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x10) = 0x1973D0;
    MEM32(esp + 0x14) = 0x196DF0;
    MEM32(esp + 0x18) = 0x198AF0;
    MEM32(esp + 0x1C) = 0x198B30;
    PUSH32(esp, 0x00197C98u); RECOMP_ABI_CALL(0x001AC970u, sub_001AC970); /* call 0x001AC970 */

loc_00197C98: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x14);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x10) = 0x197C00;
    MEM32(esp + 0x14) = 0x196E80;
    MEM32(esp + 0x18) = 0x196F00;
    MEM32(esp + 0x1C) = 0x196F80;
    PUSH32(esp, 0x00197CC8u); RECOMP_ABI_CALL(0x001AC970u, sub_001AC970); /* call 0x001AC970 */

loc_00197CC8: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00197CD0
 * Original: 0x00197CD0 - 0x00197D10 (64 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197CD0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    edx = MEM32(eax + 8);
    MEM32(esp + 8) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0xC) = eax;
    edx = MEM32(edx + 0xC);
    eax = MEM32(eax + 4);
    MEM32(esp) = edx;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00197D0Au); RECOMP_ABI_CALL(0x001ABB10u, sub_001ABB10); /* call 0x001ABB10 */

loc_00197D0A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00197D10
 * Original: 0x00197D10 - 0x00197D50 (64 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197D10: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    edx = MEM32(eax + 8);
    MEM32(esp + 8) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0xC) = eax;
    edx = MEM32(edx + 0xC);
    eax = MEM32(eax + 4);
    MEM32(esp) = edx;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00197D4Au); RECOMP_ABI_CALL(0x001AB7D0u, sub_001AB7D0); /* call 0x001AB7D0 */

loc_00197D4A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00197D50
 * Original: 0x00197D50 - 0x00197DC7 (119 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197D50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197D50: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244618);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 4) = LO8(eax);
    MEM32(esp) = 0x2F7104;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(eax + 8);
    ecx = MEM32(eax);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 4);
    ecx = MEM32(ecx + 0xC);
    eax = esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00197DB8u); RECOMP_ABI_CALL(0x001ABD30u, sub_001ABD30); /* call 0x001ABD30 */

loc_00197DB8: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00197DD0
 * Original: 0x00197DD0 - 0x00197E4D (125 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197DD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197DD0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244638);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x38);
    MEM32(esp + 4) = 0x7F7FFFFF;
    MEM32(esp) = 0x2F70F4;
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(edx + 0xC);
    eax = MEM32(eax + 4);
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0xC) = ecx;
    ecx = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = 0;
    PUSH32(esp, 0x00197E3Eu); RECOMP_ABI_CALL(0x001AB8E0u, sub_001AB8E0); /* call 0x001AB8E0 */

loc_00197E3E: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00197E50
 * Original: 0x00197E50 - 0x00197F8B (315 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00197E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00197E50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2445E0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_MEM(0x2F6A30); /* movaps */
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax + 0x24);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(ebp + 0x14);
    MEM32(esp + 0x34) = ecx;
    xmm2 = xmm0; /* movaps */
    ecx = 0x2F70FC;
    xmm2 = XMM_XOR(xmm2, xmm1); /* xorps */
    XMM_STORE(esp + 0x20, xmm2); /* movaps */
    MEM32(esp + 0x44) = 0x7F7FFFFF;
    MEM32(esp + 0x40) = ecx;
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    MEM32(esp + 0x60) = edx;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xAC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00197F3E; /* je: equal / zero */

loc_00197EE4: ;
    MEM32(esp + 0x74) = 0x7F7FFFFF;
    MEM32(esp + 0x70) = ecx;
    XMM_STORE(esp + 0x80, xmm0); /* movaps */
    MEM32(esp + 0x90) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(edx + 0xC);
    eax = MEM32(eax + 4);
    MEM32(esp) = ecx;
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    MEM32(esp + 0xC) = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM8(esp + 0xBC) = 1;
    PUSH32(esp, edx);
    goto loc_00197F71;

loc_00197F3E: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(edx + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0);
    MEM32(esp + 4) = ecx;
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    edx = esp + 0x18;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);

loc_00197F71: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00197F76u); RECOMP_ABI_CALL(0x001AB5E0u, sub_001AB5E0); /* call 0x001AB5E0 */

loc_00197F76: ;
    ecx = MEM32(esp + 0xB8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(XBOX_FS_BASE) = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00197F90
 * Original: 0x00197F90 - 0x00198021 (145 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00197F90: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2445F8);
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
    if (CMP_LE(_fas, _fbs)) goto loc_00197FE5; /* jle: less or equal (signed <=) */

loc_00197FDD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00197FE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00197FE0u); } /* indirect call */
    }

loc_00197FE3: ;
    goto loc_00197FF9;

loc_00197FE5: ;
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

loc_00197FF9: ;
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
 * sub_00198030
 * Original: 0x00198030 - 0x001980D0 (160 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00198030: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2445F8);
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
    if ((_fa == 0)) goto loc_00198084; /* je: equal / zero */

loc_00198070: ;
    edi = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019807B; /* je: equal / zero */

loc_00198077: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00198084; /* jne: not equal / not zero */

loc_0019807B: ;
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x28); PUSH32(esp, 0x00198082u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0019807Fu); } /* indirect call */
    }

loc_00198082: ;
    goto loc_00198094;

loc_00198084: ;
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

loc_00198094: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001980BF; /* js: sign (negative) */

loc_001980A3: ;
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
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001980BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001980BCu); } /* indirect call */
    }

loc_001980BF: ;
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
 * sub_001980D0
 * Original: 0x001980D0 - 0x00198150 (128 bytes, 41 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001980D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001980D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244618);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 4) = LO8(eax);
    MEM32(esp) = 0x2F7104;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(eax + 8);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x18) = eax;
    edx = MEM32(edx + 0xC);
    eax = MEM32(eax + 4);
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x34);
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00198138u); RECOMP_ABI_CALL(0x001ABB10u, sub_001ABB10); /* call 0x001ABB10 */

loc_00198138: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00198150
 * Original: 0x00198150 - 0x001981CF (127 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00198150: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244638);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x38);
    MEM32(esp + 4) = 0x7F7FFFFF;
    MEM32(esp) = 0x2F70F4;
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(eax + 8);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x18) = eax;
    edx = MEM32(edx + 0xC);
    eax = MEM32(eax + 4);
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x34);
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = 0;
    PUSH32(esp, 0x001981BEu); RECOMP_ABI_CALL(0x001AB7D0u, sub_001AB7D0); /* call 0x001AB7D0 */

loc_001981BE: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00198186
 * Original: 0x00198186 - 0x001981CF (73 bytes, 21 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198186(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00198186: ;
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x18) = eax;
    edx = MEM32(edx + 0xC);
    eax = MEM32(eax + 4);
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x34);
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = 0;
    PUSH32(esp, 0x001981BEu); RECOMP_ABI_CALL(0x001AB7D0u, sub_001AB7D0); /* call 0x001AB7D0 */

loc_001981BE: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001981D0
 * Original: 0x001981D0 - 0x0019822E (94 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001981D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001981D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24465B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x40);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001981F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001981F3u); } /* indirect call */
    }

loc_001981F6: ;
    esi = eax;
    MEM16(esi + 4) = 0x40;
    MEM32(esp + 4) = esi;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x00198216u); RECOMP_ABI_CALL(0x001AA570u, sub_001AA570); /* call 0x001AA570 */

loc_00198216: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x2F7170;
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00198230
 * Original: 0x00198230 - 0x00198869 (1593 bytes, 480 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00198230(void)
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

loc_00198230: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24467B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x1C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 0x2C) = esi;
    ebx = MEM32(ebp + 0xC);
    eax = MEM32(ebx);
    ecx = MEM32(ebx + 8);
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x6C) = ebx;
    eax = MEM32(eax + 0xC);
    edx = MEM32(ebx + 4);
    PUSH32(esp, 0x1AA130);
    MEM32(esp + 0x64) = eax;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    MEM32(esp + 0x6C) = edx;
    edx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198291u); RECOMP_ABI_CALL(0x001AA640u, sub_001AA640); /* call 0x001AA640 */

loc_00198291: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019829Eu); RECOMP_ABI_CALL(0x00197F90u, sub_00197F90); /* call 0x00197F90 */

loc_0019829E: ;
    eax = MEM32(esp + 0x60);
    edx = MEM32(ebx + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1DC) = ecx;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0xC) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001983FD; /* jle: less or equal (signed <=) */

loc_001982C9: ;
    MEM32(esp + 0x10) = ecx;
    /* nop */

loc_001982D0: ;
    eax = MEM32(esp + 0x2C);
    esi = MEM32(eax + 0xC);
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001982E0u); RECOMP_ABI_CALL(0x001B2D60u, sub_001B2D60); /* call 0x001B2D60 */

loc_001982E0: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001983DA; /* je: equal / zero */

loc_001982E9: ;
    ecx = MEM32(esp + 0x38);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    eax = esp + 0xD0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00198300u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001982FDu); } /* indirect call */
    }

loc_00198300: ;
    ecx = MEM32(ebp + 8);
    ebx = MEM32(ecx);
    edi = eax;
    eax = MEM32(esi);
    MEM32(esp + 0x40) = edi;
    MEM32(esp + 0x44) = eax;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00198318u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00198315u); } /* indirect call */
    }

loc_00198318: ;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00198323u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00198320u); } /* indirect call */
    }

loc_00198323: ;
    ebx = MEM32(esp + 0x14);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ebp + 0x10);
    ecx = MEM32(ebx);
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x18C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A2500) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 0x18C), 0x1A2500 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001983BF; /* jne: not equal / not zero */

loc_00198342: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00198367; /* jne: not equal / not zero */

loc_00198354: ;
    eax = esp + 0x18;
    PUSH32(esp, 0x30);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198360u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_00198360: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00198367: ;
    edx = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(esi + 8);
    eax = eax + eax * 2 + -3;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + edx + 0x20) = ecx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + edx + 0x24) = edi;
    edx = MEM32(esi);
    esi = MEM32(esp + 0x18);
    MEM32(eax + esi + 0x28) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + edx + 0xC) = 0x7F7FFFFF;
    edx = MEM32(esp + 0x18);
    esi = eax + edx;
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001983B7u); RECOMP_ABI_CALL(0x001A2630u, sub_001A2630); /* call 0x001A2630 */

loc_001983B7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = eax;
    goto loc_001983D7;

loc_001983BF: ;
    eax = MEM32(ebp + 0x14);
    esi = MEM32(esi + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001983D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001983D4u); } /* indirect call */
    }

loc_001983D7: ;
    ebx = MEM32(ebp + 0xC);

loc_001983DA: ;
    eax = MEM32(esp + 0xC);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(ecx + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_001982D0; /* jl: less (signed <) */

loc_001983FD: ;
    edi = MEM32(esp + 0x1C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0xC) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_001986FF; /* jle: less or equal (signed <=) */

loc_00198413: ;
    MEM32(esp + 0x10) = edx;
    goto loc_00198420;

loc_00198419: ;
    edx = MEM32(esp + 0xC);
    /* nop */

loc_00198420: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    fp_push(MEMF(ecx + eax + 0xC)); /* fld float */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    esi = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00198495; /* jl: less (signed <) */

loc_00198439: ;
    ebx = ecx + 0x3C;
    /* nop */

loc_00198440: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + -48)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebx - 0x30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00198451; /* jne: not equal / not zero */

loc_0019844A: ;
    fp_pop(); /* fstp st(0) */
    esi = edx;
    fp_push(MEMF(ebx + -48)); /* fld float */

loc_00198451: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00198461; /* jne: not equal / not zero */

loc_0019845A: ;
    fp_pop(); /* fstp st(0) */
    esi = edx + 1;
    fp_push(MEMF(ebx)); /* fld float */

loc_00198461: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + 0x30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebx + 0x30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00198473; /* jne: not equal / not zero */

loc_0019846B: ;
    fp_pop(); /* fstp st(0) */
    esi = edx + 2;
    fp_push(MEMF(ebx + 0x30)); /* fld float */

loc_00198473: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + 0x60)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebx + 0x60] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00198485; /* jne: not equal / not zero */

loc_0019847D: ;
    fp_pop(); /* fstp st(0) */
    esi = edx + 3;
    fp_push(MEMF(ebx + 0x60)); /* fld float */

loc_00198485: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + -3;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00198440; /* jl: less (signed <) */

loc_00198495: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001984BE; /* jge: greater or equal (signed >=) */

loc_00198499: ;
    ebx = MEM32(esp + 0x18);
    eax = edx + edx * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = eax + ebx + 0xC;

loc_001984A7: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001984B6; /* jne: not equal / not zero */

loc_001984B0: ;
    fp_pop(); /* fstp st(0) */
    esi = edx;
    fp_push(MEMF(ebx)); /* fld float */

loc_001984B6: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001984A7; /* jl: less (signed <) */

loc_001984BE: ;
    edx = MEM32(esp + 0x18);
    fp_pop(); /* fstp st(0) */
    xmm2 = XMM_MEM(ecx); /* movaps */
    eax = esi + esi * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(eax + edx + 0x28);
    xmm0 = XMM_MEM(eax + edx); /* movaps */
    xmm1 = XMM_MEM(eax + edx + 0x10); /* movaps */
    esi = MEM32(eax + edx + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 0x20);
    XMM_STORE(eax, xmm2); /* movaps */
    xmm2 = XMM_MEM(ecx + 0x10); /* movaps */
    XMM_STORE(eax + 0x10, xmm2); /* movaps */
    MEM32(esp + 0xC8) = ebx;
    ebx = MEM32(eax + 0x2C);
    MEM32(esp + 0xCC) = ebx;
    ebx = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = ebx;
    ebx = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = ebx;
    ebx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = ebx;
    ebx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x2C) = ebx;
    eax = MEM32(esp + 0xCC);
    ebx = MEM32(esp + 0xC);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(esp + 0xC8);
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x2C) = eax;
    XMM_STORE(ecx, xmm0); /* movaps */
    XMM_STORE(ecx + 0x10, xmm1); /* movaps */
    MEM32(ecx + 0x24) = esi;
    ecx = MEM32(esp + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    eax = edx + ecx;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0xC) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_001986E5; /* jge: greater or equal (signed >=) */

loc_0019855C: ;
    esi = edi + edi * 2;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x14) = esi;
    /* nop */

loc_00198570: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(edx + ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    ecx = edx + ecx + 0x2C;
    if (CMP_NE(_fa, _fb)) goto loc_001986D4; /* jne: not equal / not zero */

loc_00198585: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + 0xC);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(edx + eax + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DE084)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2de084] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198682; /* jp: parity */

loc_001985A7: ;
    fp_pop(); /* fstp st(0) */

loc_001985A9: ;
    SET_LO8(eax, 1);

loc_001985AB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001986D4; /* je: equal / zero */

loc_001985B8: ;
    MEM32(ecx) = 0;
    ecx = MEM32(esp + 0x18);
    ebx = MEM32(edx + ecx + 0x20);
    xmm0 = XMM_MEM(edx + ecx); /* movaps */
    xmm1 = XMM_MEM(edx + ecx + 0x10); /* movaps */
    xmm2 = XMM_MEM(esi + ecx + -48); /* movaps */
    eax = esi + ecx + -48;
    edi = edx + ecx + 0x20;
    MEM32(esp + 0x90) = ebx;
    ebx = edx + ecx + 0x24;
    MEM32(esp + 0x50) = ebx;
    ebx = MEM32(ebx);
    XMM_STORE(edx + ecx, xmm2); /* movaps */
    xmm2 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(edx + ecx + 0x10, xmm2); /* movaps */
    esi = edx + ecx + 0x10;
    esi = MEM32(esp + 0x50);
    MEM32(esp + 0x94) = ebx;
    ebx = edx + ecx + 0x28;
    MEM32(esp + 0x5C) = ebx;
    ebx = MEM32(ebx);
    MEM32(esp + 0x98) = ebx;
    ebx = edx + ecx + 0x2C;
    ecx = MEM32(eax + 0x20);
    MEM32(edi) = ecx;
    ecx = MEM32(eax + 0x24);
    edi = MEM32(esp + 0x34);
    MEM32(esi) = ecx;
    ecx = MEM32(eax + 0x28);
    esi = MEM32(esp + 0x5C);
    MEM32(esi) = ecx;
    ecx = MEM32(eax + 0x2C);
    MEM32(esp + 0x54) = ebx;
    ebx = MEM32(ebx);
    esi = MEM32(esp + 0x54);
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x90);
    esi = MEM32(esp + 0x14);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x94);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esp + 0x98);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0x2C) = ebx;
    ebx = MEM32(esp + 0x30);
    XMM_STORE(eax, xmm0); /* movaps */
    XMM_STORE(eax + 0x10, xmm1); /* movaps */
    MEM32(eax + 0x28) = ecx;
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x14) = esi;
    goto loc_001986DB;

loc_00198682: ;
    eax = MEM32(esp + 0x3C);
    xmm1 = XMM_MEM(eax); /* movaps */
    eax = MEM32(esp + 0x18);
    xmm0 = XMM_MEM(edx + eax); /* movaps */
    eax = MEM32(esp + 0x3C);
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    eax = esp + 0x58;
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001985A9; /* jp: parity */

loc_001986CD: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_001985AB;

loc_001986D4: ;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001986DB: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00198570; /* jl: less (signed <) */

loc_001986E5: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00198419; /* jl: less (signed <) */

loc_001986FC: ;
    ebx = MEM32(ebp + 0xC);

loc_001986FF: ;
    eax = MEM32(esp + 0x1C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0019883E; /* jle: less or equal (signed <=) */

loc_00198711: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(edi + eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001987FB; /* je: equal / zero */

loc_00198721: ;
    edx = MEM32(ebp + 0x14);
    esi = MEM32(edx);
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x30) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00198744; /* jne: not equal / not zero */

loc_00198739: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198741u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_00198741: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00198744: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(ecx);
    esi = eax + eax * 2;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    ecx = MEM32(esp + 0x18);
    xmm0 = XMM_MEM(edi + ecx); /* movaps */
    eax = edi + ecx;
    XMM_STORE(esi, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(esi + 0x10, xmm0); /* movaps */
    eax = MEM32(esp + 0x18);
    edx = MEM32(edi + eax + 0x20);
    _fa = (uint32_t)(MEM16(edx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0xC), 0xFFFF (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001987DD; /* jne: not equal / not zero */

loc_0019877F: ;
    ecx = MEM32(ebx + 8);
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(edx + 0xC);
    eax = MEM32(edi + eax + 0x28);
    edx = MEM32(ecx);
    ebx = esp + 0xD0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x001987A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001987A0u); } /* indirect call */
    }

loc_001987A3: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x2C);
    ebx = edi + ecx;
    ecx = MEM32(ebx + 0x28);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(edx + 8);
    edx = MEM32(ebp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001987CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001987CCu); } /* indirect call */
    }

loc_001987CF: ;
    ecx = MEM32(ebx + 0x20);
    ebx = MEM32(ebp + 0xC);
    MEM16(ecx + 0xC) = LO16(eax);
    eax = MEM32(esp + 0x18);

loc_001987DD: ;
    edx = MEM32(edi + eax + 0x20);
    SET_LO16(eax, MEM16(edx + 0xC));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001987F1; /* je: equal / zero */

loc_001987EB: ;
    MEM16(esi + 0x20) = LO16(eax);
    goto loc_00198826;

loc_001987F1: ;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(eax);
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00198826;

loc_001987FB: ;
    ecx = MEM32(edi + eax + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 0xC));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00198826; /* je: equal / zero */

loc_0019880B: ;
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(edx + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00198818u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00198815u); } /* indirect call */
    }

loc_00198818: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(edi + eax + 0x20);
    MEM16(ecx + 0xC) = 0xFFFF;

loc_00198826: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00198711; /* jl: less (signed <) */

loc_0019883E: ;
    ecx = esp + 0x18;
    MEM32(esp + 0x1DC) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00198852u); RECOMP_ABI_CALL(0x00198030u, sub_00198030); /* call 0x00198030 */

loc_00198852: ;
    ecx = MEM32(esp + 0x1D4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
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
 * sub_00198870
 * Original: 0x00198870 - 0x001989B6 (326 bytes, 89 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00198870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00198870: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2445E0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_MEM(0x2F6A30); /* movaps */
    PUSH32(esp, esi);
    edx = eax;
    esi = MEM32(edx);
    MEM32(esp + 0x20) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x24) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(eax + 0x24);
    eax = MEM32(ebp + 0x14);
    MEM32(esp + 0x44) = edx;
    xmm2 = xmm0; /* movaps */
    edx = 0x2F70FC;
    xmm2 = XMM_XOR(xmm2, xmm1); /* xorps */
    MEM32(esp + 0x28) = esi;
    XMM_STORE(esp + 0x30, xmm2); /* movaps */
    MEM32(esp + 0x54) = 0x7F7FFFFF;
    MEM32(esp + 0x50) = edx;
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    MEM32(esp + 0x70) = eax;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xBC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00198969; /* je: equal / zero */

loc_00198905: ;
    MEM32(esp + 0x84) = 0x7F7FFFFF;
    MEM32(esp + 0x80) = edx;
    XMM_STORE(esp + 0x90, xmm0); /* movaps */
    MEM32(esp + 0xA0) = eax;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 8);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x1C) = eax;
    edx = MEM32(edx + 0xC);
    eax = MEM32(eax + 4);
    MEM32(esp + 0x10) = edx;
    edx = esp + 0x80;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x54;
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEM8(esp + 0xCC) = 1;
    PUSH32(esp, edx);
    goto loc_0019899C;

loc_00198969: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 8);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x1C) = eax;
    edx = MEM32(edx + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0);
    MEM32(esp + 0x14) = edx;
    edx = esp + 0x54;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = eax;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);

loc_0019899C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001989A1u); RECOMP_ABI_CALL(0x001AB4D0u, sub_001AB4D0); /* call 0x001AB4D0 */

loc_001989A1: ;
    ecx = MEM32(esp + 0xB4);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001989C0
 * Original: 0x001989C0 - 0x00198A1F (95 bytes, 39 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001989C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001989C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    eax = MEM32(edi);
    esi = MEM32(eax + 4);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001989E5u); RECOMP_ABI_CALL(0x00198230u, sub_00198230); /* call 0x00198230 */

loc_001989E5: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00198A17; /* jge: greater or equal (signed >=) */

loc_001989EC: ;
    ecx = esi + esi * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_001989F2: ;
    eax = MEM32(eax);
    xmm1 = XMM_MEM(eax + ecx + 0x10); /* movaps */
    xmm0 = XMM_MEM(0x2F6A30); /* movaps */
    eax = eax + ecx + 0x10;
    xmm1 = XMM_XOR(xmm1, xmm0); /* xorps */
    XMM_STORE(eax, xmm1); /* movaps */
    eax = MEM32(edi);
    edx = MEM32(eax + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001989F2; /* jl: less (signed <) */

loc_00198A17: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}
