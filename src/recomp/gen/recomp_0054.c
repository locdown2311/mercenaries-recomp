/**
 * Mercenaries - Recompiled code chunk 54
 * Functions: 250 (0x00245F48 - 0x00246CB1)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00245F48
 * Original: 0x00245F48 - 0x00245F6F (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245F48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245F48: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00245F60; /* je: equal / zero */

loc_00245F52: ;
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = eax;
    goto loc_00245F67;

loc_00245F60: ;
    MEM32(ebp + -20) = 0;

loc_00245F67: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_002304E0(); return; /* tail jmp 0x002304E0 */

}

/**
 * sub_00245F6F
 * Original: 0x00245F6F - 0x00245F7A (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245F6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245F6F: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00245F7A
 * Original: 0x00245F7A - 0x00245F85 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245F7A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245F7A: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00245F85
 * Original: 0x00245F85 - 0x00245F90 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245F85(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245F85: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x58;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00245F90
 * Original: 0x00245F90 - 0x00245F9B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245F90: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x68;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDE70(); return; /* tail jmp 0x001BDE70 */

}

/**
 * sub_00245F9B
 * Original: 0x00245F9B - 0x00245FA6 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245F9B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245F9B: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001C2A20(); return; /* tail jmp 0x001C2A20 */

}

/**
 * sub_00245FA6
 * Original: 0x00245FA6 - 0x00245FB4 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245FA6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245FA6: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001C2A20(); return; /* tail jmp 0x001C2A20 */

}

/**
 * sub_00245FB4
 * Original: 0x00245FB4 - 0x00245FBE (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245FB4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245FB4: ;
    eax = 0x30A184;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00245FC0
 * Original: 0x00245FC0 - 0x00245FC8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245FC0: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_001BE720(); return; /* tail jmp 0x001BE720 */

}

/**
 * sub_00245FC8
 * Original: 0x00245FC8 - 0x00245FD2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245FC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245FC8: ;
    eax = 0x30A1A8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00245FE0
 * Original: 0x00245FE0 - 0x00245FE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245FE0: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_001BE5F0(); return; /* tail jmp 0x001BE5F0 */

}

/**
 * sub_00245FE8
 * Original: 0x00245FE8 - 0x00245FF0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245FE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245FE8: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_001BE5F0(); return; /* tail jmp 0x001BE5F0 */

}

/**
 * sub_00245FF0
 * Original: 0x00245FF0 - 0x00245FFA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245FF0: ;
    eax = 0x30A1D4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246000
 * Original: 0x00246000 - 0x00246008 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246000: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_001C8CC0(); return; /* tail jmp 0x001C8CC0 */

}

/**
 * sub_00246008
 * Original: 0x00246008 - 0x00246012 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246008(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246008: ;
    eax = 0x30A1F8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246020
 * Original: 0x00246020 - 0x00246028 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246020: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_001C8CC0(); return; /* tail jmp 0x001C8CC0 */

}

/**
 * sub_00246028
 * Original: 0x00246028 - 0x00246032 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246028(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246028: ;
    eax = 0x30A21C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246040
 * Original: 0x00246040 - 0x00246048 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246040: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246048
 * Original: 0x00246048 - 0x00246052 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246048(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246048: ;
    eax = 0x30A240;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246060
 * Original: 0x00246060 - 0x00246068 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246060: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001BCCB0(); return; /* tail jmp 0x001BCCB0 */

}

/**
 * sub_00246068
 * Original: 0x00246068 - 0x00246073 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246068(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246068: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00047670(); return; /* tail jmp 0x00047670 */

}

/**
 * sub_00246073
 * Original: 0x00246073 - 0x0024607E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246073(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246073: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BB670(); return; /* tail jmp 0x001BB670 */

}

/**
 * sub_0024607E
 * Original: 0x0024607E - 0x00246088 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024607E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024607E: ;
    eax = 0x30A274;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246090
 * Original: 0x00246090 - 0x00246098 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246090: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00246098
 * Original: 0x00246098 - 0x002460A3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246098(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246098: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001CAC90(); return; /* tail jmp 0x001CAC90 */

}

/**
 * sub_002460A3
 * Original: 0x002460A3 - 0x002460AD (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002460A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002460A3: ;
    eax = 0x30A2A0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002460B0
 * Original: 0x002460B0 - 0x002460BB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002460B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002460B0: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002460B9u); RECOMP_ABI_CALL(0x001BCF10u, sub_001BCF10); /* call 0x001BCF10 */

loc_002460B9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002460BB
 * Original: 0x002460BB - 0x002460C5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002460BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002460BB: ;
    eax = 0x30A2C4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002460D0
 * Original: 0x002460D0 - 0x002460DB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002460D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002460D0: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002460D9u); RECOMP_ABI_CALL(0x00015D20u, sub_00015D20); /* call 0x00015D20 */

loc_002460D9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002460DB
 * Original: 0x002460DB - 0x002460E5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002460DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002460DB: ;
    eax = 0x30A2E8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002460F0
 * Original: 0x002460F0 - 0x00246101 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002460F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002460F0: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002460FDu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_002460FD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00246101
 * Original: 0x00246101 - 0x0024610B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246101(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246101: ;
    eax = 0x30A30C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246110
 * Original: 0x00246110 - 0x00246118 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246110: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00015C50(); return; /* tail jmp 0x00015C50 */

}

/**
 * sub_00246118
 * Original: 0x00246118 - 0x00246123 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246118(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246118: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001C2A20(); return; /* tail jmp 0x001C2A20 */

}

/**
 * sub_00246123
 * Original: 0x00246123 - 0x0024612D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246123(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246123: ;
    eax = 0x30A338;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246130
 * Original: 0x00246130 - 0x00246138 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246130: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00246138
 * Original: 0x00246138 - 0x00246142 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246138(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246138: ;
    eax = 0x30A35C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246150
 * Original: 0x00246150 - 0x00246158 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246150: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_001CC0E0(); return; /* tail jmp 0x001CC0E0 */

}

/**
 * sub_00246158
 * Original: 0x00246158 - 0x00246162 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246158(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246158: ;
    eax = 0x30A380;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246170
 * Original: 0x00246170 - 0x00246178 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246170: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00246178
 * Original: 0x00246178 - 0x00246182 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246178(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246178: ;
    eax = 0x30A3A4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246190
 * Original: 0x00246190 - 0x00246198 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246190: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001C2B80(); return; /* tail jmp 0x001C2B80 */

}

/**
 * sub_00246198
 * Original: 0x00246198 - 0x002461A3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246198(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246198: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_002461A3
 * Original: 0x002461A3 - 0x002461AE (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002461A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002461A3: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_002461AE
 * Original: 0x002461AE - 0x002461B8 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002461AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002461AE: ;
    eax = 0x30A3D8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002461C0
 * Original: 0x002461C0 - 0x002461C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002461C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002461C0: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_001BE5F0(); return; /* tail jmp 0x001BE5F0 */

}

/**
 * sub_002461C8
 * Original: 0x002461C8 - 0x002461D0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002461C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002461C8: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_001BE5F0(); return; /* tail jmp 0x001BE5F0 */

}

/**
 * sub_002461D0
 * Original: 0x002461D0 - 0x002461DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002461D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002461D0: ;
    eax = 0x30A404;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002461E0
 * Original: 0x002461E0 - 0x002461F1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002461E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002461E0: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002461EDu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_002461ED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002461F1
 * Original: 0x002461F1 - 0x002461FB (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002461F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002461F1: ;
    eax = 0x30A428;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246200
 * Original: 0x00246200 - 0x0024620B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246200: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00246209u); RECOMP_ABI_CALL(0x001C3740u, sub_001C3740); /* call 0x001C3740 */

loc_00246209: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024620B
 * Original: 0x0024620B - 0x00246215 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024620B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024620B: ;
    eax = 0x30A44C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246220
 * Original: 0x00246220 - 0x00246231 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246220: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024622Du); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_0024622D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00246231
 * Original: 0x00246231 - 0x0024623B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246231(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246231: ;
    eax = 0x30A470;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246240
 * Original: 0x00246240 - 0x00246248 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246240: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00015C50(); return; /* tail jmp 0x00015C50 */

}

/**
 * sub_00246248
 * Original: 0x00246248 - 0x00246253 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246248(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246248: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BCC80(); return; /* tail jmp 0x001BCC80 */

}

/**
 * sub_00246253
 * Original: 0x00246253 - 0x0024625E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246253(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246253: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0003A420(); return; /* tail jmp 0x0003A420 */

}

/**
 * sub_0024625E
 * Original: 0x0024625E - 0x00246269 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024625E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024625E: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246269
 * Original: 0x00246269 - 0x00246274 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246269(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246269: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246274
 * Original: 0x00246274 - 0x00246282 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246274(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246274: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x88;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246282
 * Original: 0x00246282 - 0x0024628C (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246282(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246282: ;
    eax = 0x30A4BC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246290
 * Original: 0x00246290 - 0x00246298 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246290: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_00015C50(); return; /* tail jmp 0x00015C50 */

}

/**
 * sub_00246298
 * Original: 0x00246298 - 0x002462BF (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246298(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246298: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002462B0; /* je: equal / zero */

loc_002462A2: ;
    eax = MEM32(ebp + -20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -24) = eax;
    goto loc_002462B7;

loc_002462B0: ;
    MEM32(ebp + -24) = 0;

loc_002462B7: ;
    ecx = MEM32(ebp + -24);
    g_seh_ebp = ebp; sub_001BCC80(); return; /* tail jmp 0x001BCC80 */

}

/**
 * sub_002462BF
 * Original: 0x002462BF - 0x002462CA (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002462BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002462BF: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0003A420(); return; /* tail jmp 0x0003A420 */

}

/**
 * sub_002462CA
 * Original: 0x002462CA - 0x002462D5 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002462CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002462CA: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_002462D5
 * Original: 0x002462D5 - 0x002462E0 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002462D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002462D5: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_002462E0
 * Original: 0x002462E0 - 0x002462EE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002462E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002462E0: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x88;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_002462EE
 * Original: 0x002462EE - 0x002462F6 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002462EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002462EE: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_002462F6
 * Original: 0x002462F6 - 0x00246300 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002462F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002462F6: ;
    eax = 0x30A510;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246300
 * Original: 0x00246300 - 0x00246308 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246300: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001D0910(); return; /* tail jmp 0x001D0910 */

}

/**
 * sub_00246308
 * Original: 0x00246308 - 0x00246312 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246308(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246308: ;
    eax = 0x30A534;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246320
 * Original: 0x00246320 - 0x00246328 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246320: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001BDE70(); return; /* tail jmp 0x001BDE70 */

}

/**
 * sub_00246328
 * Original: 0x00246328 - 0x00246332 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246328(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246328: ;
    eax = 0x30A558;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246340
 * Original: 0x00246340 - 0x00246348 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246340: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0003A420(); return; /* tail jmp 0x0003A420 */

}

/**
 * sub_00246348
 * Original: 0x00246348 - 0x00246352 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246348(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246348: ;
    eax = 0x30A57C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246360
 * Original: 0x00246360 - 0x00246368 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246360: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_001D0EC0(); return; /* tail jmp 0x001D0EC0 */

}

/**
 * sub_00246368
 * Original: 0x00246368 - 0x00246372 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246368(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246368: ;
    eax = 0x30A5A0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246380
 * Original: 0x00246380 - 0x0024638B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246380: ;
    ecx = ebp + -848;
    g_seh_ebp = ebp; sub_001D1160(); return; /* tail jmp 0x001D1160 */

}

/**
 * sub_0024638B
 * Original: 0x0024638B - 0x00246396 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024638B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024638B: ;
    ecx = ebp + -432;
    g_seh_ebp = ebp; sub_001D1160(); return; /* tail jmp 0x001D1160 */

}

/**
 * sub_00246396
 * Original: 0x00246396 - 0x002463A1 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246396(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246396: ;
    ecx = ebp + -1092;
    g_seh_ebp = ebp; sub_001D0C50(); return; /* tail jmp 0x001D0C50 */

}

/**
 * sub_002463A1
 * Original: 0x002463A1 - 0x002463AC (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002463A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002463A1: ;
    ecx = ebp + -1112;
    g_seh_ebp = ebp; sub_001D0D80(); return; /* tail jmp 0x001D0D80 */

}

/**
 * sub_002463AC
 * Original: 0x002463AC - 0x002463B7 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002463AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002463AC: ;
    ecx = ebp + -432;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_002463B7
 * Original: 0x002463B7 - 0x002463C2 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002463B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002463B7: ;
    ecx = ebp + -848;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_002463C2
 * Original: 0x002463C2 - 0x002463CC (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002463C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002463C2: ;
    eax = 0x30A5EC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002463D0
 * Original: 0x002463D0 - 0x002463DB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002463D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002463D0: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002463D9u); RECOMP_ABI_CALL(0x0013C8B0u, sub_0013C8B0); /* call 0x0013C8B0 */

loc_002463D9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002463DB
 * Original: 0x002463DB - 0x002463E5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002463DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002463DB: ;
    eax = 0x30A610;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002463F0
 * Original: 0x002463F0 - 0x002463F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002463F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002463F0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_002463F8
 * Original: 0x002463F8 - 0x00246402 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002463F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002463F8: ;
    eax = 0x30A634;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246410
 * Original: 0x00246410 - 0x00246418 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246410: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00246418
 * Original: 0x00246418 - 0x00246420 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246418(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246418: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001BDE40(); return; /* tail jmp 0x001BDE40 */

}

/**
 * sub_00246420
 * Original: 0x00246420 - 0x0024642A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246420: ;
    eax = 0x30A660;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246430
 * Original: 0x00246430 - 0x00246438 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246430: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00015C50(); return; /* tail jmp 0x00015C50 */

}

/**
 * sub_00246438
 * Original: 0x00246438 - 0x00246443 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246438(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246438: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246443
 * Original: 0x00246443 - 0x0024644E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246443(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246443: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_0024644E
 * Original: 0x0024644E - 0x00246459 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024644E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024644E: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246459
 * Original: 0x00246459 - 0x00246464 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246459(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246459: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246464
 * Original: 0x00246464 - 0x0024646F (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246464(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246464: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_0024646F
 * Original: 0x0024646F - 0x0024647A (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024646F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024646F: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_0024647A
 * Original: 0x0024647A - 0x00246485 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024647A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024647A: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x58;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246485
 * Original: 0x00246485 - 0x00246490 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246485(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246485: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x68;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246490
 * Original: 0x00246490 - 0x0024649E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246490: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001D33C0(); return; /* tail jmp 0x001D33C0 */

}

/**
 * sub_0024649E
 * Original: 0x0024649E - 0x002464A8 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024649E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024649E: ;
    eax = 0x30A6CC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002464B0
 * Original: 0x002464B0 - 0x002464B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002464B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002464B0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00015C50(); return; /* tail jmp 0x00015C50 */

}

/**
 * sub_002464B8
 * Original: 0x002464B8 - 0x002464C3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002464B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002464B8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_002464C3
 * Original: 0x002464C3 - 0x002464CE (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002464C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002464C3: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_002464CE
 * Original: 0x002464CE - 0x002464D9 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002464CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002464CE: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_002464D9
 * Original: 0x002464D9 - 0x002464E4 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002464D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002464D9: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_002464E4
 * Original: 0x002464E4 - 0x002464EF (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002464E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002464E4: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_002464EF
 * Original: 0x002464EF - 0x002464FA (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002464EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002464EF: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_002464FA
 * Original: 0x002464FA - 0x00246505 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002464FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002464FA: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x58;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246505
 * Original: 0x00246505 - 0x00246510 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246505(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246505: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x68;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246510
 * Original: 0x00246510 - 0x0024651A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246510: ;
    eax = 0x30A730;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246520
 * Original: 0x00246520 - 0x0024652B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246520: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00246529u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00246529: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024652B
 * Original: 0x0024652B - 0x00246535 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024652B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024652B: ;
    eax = 0x30A754;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246540
 * Original: 0x00246540 - 0x00246551 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246540: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024654Du); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_0024654D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00246551
 * Original: 0x00246551 - 0x0024655B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246551(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246551: ;
    eax = 0x30A778;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246560
 * Original: 0x00246560 - 0x00246568 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246560: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001D57D0(); return; /* tail jmp 0x001D57D0 */

}

/**
 * sub_00246568
 * Original: 0x00246568 - 0x00246576 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246568(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246568: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x180) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x180;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246576
 * Original: 0x00246576 - 0x00246580 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246576(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246576: ;
    eax = 0x30A7A4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246580
 * Original: 0x00246580 - 0x00246588 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246580: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_0012B1F0(); return; /* tail jmp 0x0012B1F0 */

}

/**
 * sub_00246588
 * Original: 0x00246588 - 0x00246596 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246588(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246588: ;
    eax = MEM32(ebp + -180);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00246594u); RECOMP_ABI_CALL(0x0012B6D0u, sub_0012B6D0); /* call 0x0012B6D0 */

loc_00246594: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00246596
 * Original: 0x00246596 - 0x002465A0 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246596(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246596: ;
    eax = 0x30A7D0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002465A0
 * Original: 0x002465A0 - 0x002465A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002465A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002465A0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00015C50(); return; /* tail jmp 0x00015C50 */

}

/**
 * sub_002465A8
 * Original: 0x002465A8 - 0x002465B2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002465A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002465A8: ;
    eax = 0x30A7F4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002465C0
 * Original: 0x002465C0 - 0x002465C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002465C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002465C0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001D5BB0(); return; /* tail jmp 0x001D5BB0 */

}

/**
 * sub_002465C8
 * Original: 0x002465C8 - 0x002465D3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002465C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002465C8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDE70(); return; /* tail jmp 0x001BDE70 */

}

/**
 * sub_002465D3
 * Original: 0x002465D3 - 0x002465DE (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002465D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002465D3: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDE70(); return; /* tail jmp 0x001BDE70 */

}

/**
 * sub_002465DE
 * Original: 0x002465DE - 0x002465E9 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002465DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002465DE: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_002465E9
 * Original: 0x002465E9 - 0x002465F3 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002465E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002465E9: ;
    eax = 0x30A830;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246600
 * Original: 0x00246600 - 0x00246608 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246600: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001D6330(); return; /* tail jmp 0x001D6330 */

}

/**
 * sub_00246608
 * Original: 0x00246608 - 0x00246613 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246608(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246608: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x44;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246613
 * Original: 0x00246613 - 0x0024661E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246613(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246613: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_0024661E
 * Original: 0x0024661E - 0x00246629 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024661E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024661E: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246629
 * Original: 0x00246629 - 0x00246633 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246629(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246629: ;
    eax = 0x30A86C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246640
 * Original: 0x00246640 - 0x00246648 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246640: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001D6330(); return; /* tail jmp 0x001D6330 */

}

/**
 * sub_00246648
 * Original: 0x00246648 - 0x00246653 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246648(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246648: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x44;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246653
 * Original: 0x00246653 - 0x0024665E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246653(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246653: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_0024665E
 * Original: 0x0024665E - 0x00246668 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024665E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024665E: ;
    eax = 0x30A8A0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246670
 * Original: 0x00246670 - 0x00246678 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246670: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001D5BB0(); return; /* tail jmp 0x001D5BB0 */

}

/**
 * sub_00246678
 * Original: 0x00246678 - 0x00246683 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246678(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246678: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246683
 * Original: 0x00246683 - 0x0024668D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246683(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246683: ;
    eax = 0x30A8CC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246690
 * Original: 0x00246690 - 0x00246698 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246690: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001D6B40(); return; /* tail jmp 0x001D6B40 */

}

/**
 * sub_00246698
 * Original: 0x00246698 - 0x002466A3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246698(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246698: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_002466A3
 * Original: 0x002466A3 - 0x002466AE (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002466A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002466A3: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_002466AE
 * Original: 0x002466AE - 0x002466B9 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002466AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002466AE: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00047670(); return; /* tail jmp 0x00047670 */

}

/**
 * sub_002466B9
 * Original: 0x002466B9 - 0x002466C3 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002466B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002466B9: ;
    eax = 0x30A908;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002466D0
 * Original: 0x002466D0 - 0x002466D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002466D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002466D0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001D6B40(); return; /* tail jmp 0x001D6B40 */

}

/**
 * sub_002466D8
 * Original: 0x002466D8 - 0x002466E3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002466D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002466D8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_002466E3
 * Original: 0x002466E3 - 0x002466EE (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002466E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002466E3: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_002466EE
 * Original: 0x002466EE - 0x002466F8 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002466EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002466EE: ;
    eax = 0x30A93C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246700
 * Original: 0x00246700 - 0x00246708 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246700: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001D5BB0(); return; /* tail jmp 0x001D5BB0 */

}

/**
 * sub_00246708
 * Original: 0x00246708 - 0x00246712 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246708(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246708: ;
    eax = 0x30A960;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246720
 * Original: 0x00246720 - 0x00246728 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246720: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001D72D0(); return; /* tail jmp 0x001D72D0 */

}

/**
 * sub_00246728
 * Original: 0x00246728 - 0x00246733 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246728(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246728: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246733
 * Original: 0x00246733 - 0x0024673E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246733(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246733: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_0024673E
 * Original: 0x0024673E - 0x00246748 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024673E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024673E: ;
    eax = 0x30A994;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246750
 * Original: 0x00246750 - 0x00246758 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246750: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001D72D0(); return; /* tail jmp 0x001D72D0 */

}

/**
 * sub_00246758
 * Original: 0x00246758 - 0x00246763 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246758(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246758: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246763
 * Original: 0x00246763 - 0x0024676D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246763(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246763: ;
    eax = 0x30A9C0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246770
 * Original: 0x00246770 - 0x00246778 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246770: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001D5BB0(); return; /* tail jmp 0x001D5BB0 */

}

/**
 * sub_00246778
 * Original: 0x00246778 - 0x00246782 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246778(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246778: ;
    eax = 0x30A9E4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246790
 * Original: 0x00246790 - 0x00246798 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246790: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001D79A0(); return; /* tail jmp 0x001D79A0 */

}

/**
 * sub_00246798
 * Original: 0x00246798 - 0x002467A3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246798(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246798: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00047670(); return; /* tail jmp 0x00047670 */

}

/**
 * sub_002467A3
 * Original: 0x002467A3 - 0x002467AD (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002467A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002467A3: ;
    eax = 0x30AA10;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002467B0
 * Original: 0x002467B0 - 0x002467B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002467B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002467B0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001D79A0(); return; /* tail jmp 0x001D79A0 */

}

/**
 * sub_002467B8
 * Original: 0x002467B8 - 0x002467C2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002467B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002467B8: ;
    eax = 0x30AA34;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002467D0
 * Original: 0x002467D0 - 0x002467DB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002467D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002467D0: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002467D9u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_002467D9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002467DB
 * Original: 0x002467DB - 0x002467E5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002467DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002467DB: ;
    eax = 0x30AA58;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002467F0
 * Original: 0x002467F0 - 0x00246801 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002467F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002467F0: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002467FDu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_002467FD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00246801
 * Original: 0x00246801 - 0x0024680B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246801(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246801: ;
    eax = 0x30AA7C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246810
 * Original: 0x00246810 - 0x0024681B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246810: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00246819u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00246819: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024681B
 * Original: 0x0024681B - 0x00246825 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024681B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024681B: ;
    eax = 0x30AAA0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246830
 * Original: 0x00246830 - 0x00246841 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246830: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024683Du); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_0024683D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00246841
 * Original: 0x00246841 - 0x0024684B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246841(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246841: ;
    eax = 0x30AAC4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246850
 * Original: 0x00246850 - 0x0024685B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246850: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00246859u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00246859: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024685B
 * Original: 0x0024685B - 0x00246865 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024685B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024685B: ;
    eax = 0x30AAE8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246870
 * Original: 0x00246870 - 0x00246884 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246870: ;
    ebx = MEM32(ebp + -16);
    eax = MEM32(ebx + 8);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00246880u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00246880: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00246884
 * Original: 0x00246884 - 0x0024688E (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246884(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246884: ;
    eax = 0x30AB0C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246890
 * Original: 0x00246890 - 0x0024689B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246890: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00246899u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00246899: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024689B
 * Original: 0x0024689B - 0x002468A5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024689B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024689B: ;
    eax = 0x30AB30;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002468B0
 * Original: 0x002468B0 - 0x002468C1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002468B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002468B0: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002468BDu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_002468BD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002468C1
 * Original: 0x002468C1 - 0x002468CB (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002468C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002468C1: ;
    eax = 0x30AB54;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002468D0
 * Original: 0x002468D0 - 0x002468DB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002468D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002468D0: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002468D9u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_002468D9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002468DB
 * Original: 0x002468DB - 0x002468E5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002468DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002468DB: ;
    eax = 0x30AB78;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002468F0
 * Original: 0x002468F0 - 0x00246901 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002468F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002468F0: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002468FDu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_002468FD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00246901
 * Original: 0x00246901 - 0x0024690B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246901(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246901: ;
    eax = 0x30AB9C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246910
 * Original: 0x00246910 - 0x0024691B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246910: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00246919u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00246919: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024691B
 * Original: 0x0024691B - 0x00246925 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024691B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024691B: ;
    eax = 0x30ABC0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246930
 * Original: 0x00246930 - 0x00246941 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246930: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024693Du); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_0024693D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00246941
 * Original: 0x00246941 - 0x0024694B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246941(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246941: ;
    eax = 0x30ABE4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246950
 * Original: 0x00246950 - 0x0024695B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246950: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00246959u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00246959: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024695B
 * Original: 0x0024695B - 0x00246965 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024695B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024695B: ;
    eax = 0x30AC08;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246970
 * Original: 0x00246970 - 0x00246981 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246970: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024697Du); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_0024697D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00246981
 * Original: 0x00246981 - 0x0024698B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246981(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246981: ;
    eax = 0x30AC2C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246990
 * Original: 0x00246990 - 0x0024699B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246990: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00246999u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00246999: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024699B
 * Original: 0x0024699B - 0x002469A5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024699B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024699B: ;
    eax = 0x30AC50;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002469B0
 * Original: 0x002469B0 - 0x002469C1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002469B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002469B0: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002469BDu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_002469BD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002469C1
 * Original: 0x002469C1 - 0x002469CB (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002469C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002469C1: ;
    eax = 0x30AC74;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002469D0
 * Original: 0x002469D0 - 0x002469DB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002469D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002469D0: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002469D9u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_002469D9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002469DB
 * Original: 0x002469DB - 0x002469E5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002469DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002469DB: ;
    eax = 0x30AC98;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002469F0
 * Original: 0x002469F0 - 0x00246A01 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002469F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002469F0: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002469FDu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_002469FD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00246A01
 * Original: 0x00246A01 - 0x00246A0B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246A01(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246A01: ;
    eax = 0x30ACBC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246A10
 * Original: 0x00246A10 - 0x00246A1B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246A10: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00246A19u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00246A19: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00246A1B
 * Original: 0x00246A1B - 0x00246A25 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246A1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246A1B: ;
    eax = 0x30ACE0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246A30
 * Original: 0x00246A30 - 0x00246A41 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246A30: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00246A3Du); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00246A3D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00246A41
 * Original: 0x00246A41 - 0x00246A4B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246A41(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246A41: ;
    eax = 0x30AD04;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246A50
 * Original: 0x00246A50 - 0x00246A5B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246A50: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00246A59u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00246A59: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00246A5B
 * Original: 0x00246A5B - 0x00246A65 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246A5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246A5B: ;
    eax = 0x30AD28;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246A70
 * Original: 0x00246A70 - 0x00246A81 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246A70: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00246A7Du); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00246A7D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00246A81
 * Original: 0x00246A81 - 0x00246A8B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246A81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246A81: ;
    eax = 0x30AD4C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246A90
 * Original: 0x00246A90 - 0x00246AA1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246A90: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00246A9Du); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00246A9D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00246AA1
 * Original: 0x00246AA1 - 0x00246AAB (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246AA1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246AA1: ;
    eax = 0x30AD70;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246AB0
 * Original: 0x00246AB0 - 0x00246AB8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246AB0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001D5BB0(); return; /* tail jmp 0x001D5BB0 */

}

/**
 * sub_00246AB8
 * Original: 0x00246AB8 - 0x00246AC3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246AB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246AB8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDE70(); return; /* tail jmp 0x001BDE70 */

}

/**
 * sub_00246AC3
 * Original: 0x00246AC3 - 0x00246ACE (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246AC3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246AC3: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDE70(); return; /* tail jmp 0x001BDE70 */

}

/**
 * sub_00246ACE
 * Original: 0x00246ACE - 0x00246AD9 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246ACE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246ACE: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246AD9
 * Original: 0x00246AD9 - 0x00246AE4 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246AD9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246AD9: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246AE4
 * Original: 0x00246AE4 - 0x00246AEE (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246AE4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246AE4: ;
    eax = 0x30ADB4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246AF0
 * Original: 0x00246AF0 - 0x00246AF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246AF0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001D5BB0(); return; /* tail jmp 0x001D5BB0 */

}

/**
 * sub_00246AF8
 * Original: 0x00246AF8 - 0x00246B03 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246AF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246AF8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246B03
 * Original: 0x00246B03 - 0x00246B0E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246B03(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246B03: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00047670(); return; /* tail jmp 0x00047670 */

}

/**
 * sub_00246B0E
 * Original: 0x00246B0E - 0x00246B18 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246B0E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246B0E: ;
    eax = 0x30ADE8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246B20
 * Original: 0x00246B20 - 0x00246B28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246B20: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001D5BB0(); return; /* tail jmp 0x001D5BB0 */

}

/**
 * sub_00246B28
 * Original: 0x00246B28 - 0x00246B33 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246B28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246B28: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246B33
 * Original: 0x00246B33 - 0x00246B3D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246B33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246B33: ;
    eax = 0x30AE14;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246B40
 * Original: 0x00246B40 - 0x00246B51 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246B40: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00246B4Du); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00246B4D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00246B51
 * Original: 0x00246B51 - 0x00246B5B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246B51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246B51: ;
    eax = 0x30AE38;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246B60
 * Original: 0x00246B60 - 0x00246B68 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246B60: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001D5BB0(); return; /* tail jmp 0x001D5BB0 */

}

/**
 * sub_00246B68
 * Original: 0x00246B68 - 0x00246B73 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246B68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246B68: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00246B73
 * Original: 0x00246B73 - 0x00246B7D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246B73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246B73: ;
    eax = 0x30AE64;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246B80
 * Original: 0x00246B80 - 0x00246B8B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246B80: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00246B89u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00246B89: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00246B8B
 * Original: 0x00246B8B - 0x00246B95 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246B8B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246B8B: ;
    eax = 0x30AE88;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246BA0
 * Original: 0x00246BA0 - 0x00246BB1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246BA0: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00246BADu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00246BAD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00246BB1
 * Original: 0x00246BB1 - 0x00246BBB (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246BB1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246BB1: ;
    eax = 0x30AEAC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246BC0
 * Original: 0x00246BC0 - 0x00246BCB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246BC0: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00246BC9u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00246BC9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00246BCB
 * Original: 0x00246BCB - 0x00246BD5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246BCB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246BCB: ;
    eax = 0x30AED0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246BE0
 * Original: 0x00246BE0 - 0x00246BF1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246BE0: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00246BEDu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00246BED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00246BF1
 * Original: 0x00246BF1 - 0x00246BFB (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246BF1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246BF1: ;
    eax = 0x30AEF4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246C00
 * Original: 0x00246C00 - 0x00246C0B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246C00: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00246C09u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00246C09: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00246C0B
 * Original: 0x00246C0B - 0x00246C15 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246C0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246C0B: ;
    eax = 0x30AF18;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246C20
 * Original: 0x00246C20 - 0x00246C31 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246C20: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00246C2Du); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00246C2D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00246C31
 * Original: 0x00246C31 - 0x00246C3B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246C31(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246C31: ;
    eax = 0x30AF3C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246C40
 * Original: 0x00246C40 - 0x00246C4B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246C40: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00246C49u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00246C49: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00246C4B
 * Original: 0x00246C4B - 0x00246C55 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246C4B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246C4B: ;
    eax = 0x30AF60;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246C60
 * Original: 0x00246C60 - 0x00246C71 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246C60: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00246C6Du); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00246C6D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00246C71
 * Original: 0x00246C71 - 0x00246C7B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246C71(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246C71: ;
    eax = 0x30AF84;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246C80
 * Original: 0x00246C80 - 0x00246C8B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246C80: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00246C89u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00246C89: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00246C8B
 * Original: 0x00246C8B - 0x00246C95 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246C8B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246C8B: ;
    eax = 0x30AFA8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246CA0
 * Original: 0x00246CA0 - 0x00246CB1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246CA0: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00246CADu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00246CAD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00246CB1
 * Original: 0x00246CB1 - 0x00246CBB (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246CB1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246CB1: ;
    eax = 0x30AFCC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}
