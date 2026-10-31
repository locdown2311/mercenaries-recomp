/**
 * Mercenaries - Recompiled code chunk 55
 * Functions: 250 (0x00246CC0 - 0x00249750)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00246CC0
 * Original: 0x00246CC0 - 0x00246CCB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246CC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246CC0: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00246CC9u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00246CC9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00246CCB
 * Original: 0x00246CCB - 0x00246CD5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246CCB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246CCB: ;
    eax = 0x30AFF0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246CE0
 * Original: 0x00246CE0 - 0x00246CE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246CE0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001EA040(); return; /* tail jmp 0x001EA040 */

}

/**
 * sub_00246CE8
 * Original: 0x00246CE8 - 0x00246CF3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246CE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246CE8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00246CF3
 * Original: 0x00246CF3 - 0x00246CFD (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246CF3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246CF3: ;
    eax = 0x30B01C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246D00
 * Original: 0x00246D00 - 0x00246D0B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246D00: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00246D0B
 * Original: 0x00246D0B - 0x00246D16 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246D0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246D0B: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00209040(); return; /* tail jmp 0x00209040 */

}

/**
 * sub_00246D16
 * Original: 0x00246D16 - 0x00246D20 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246D16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246D16: ;
    eax = 0x30B048;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246D20
 * Original: 0x00246D20 - 0x00246D2B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246D20: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00246D2B
 * Original: 0x00246D2B - 0x00246D35 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246D2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246D2B: ;
    eax = 0x30B06C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246D40
 * Original: 0x00246D40 - 0x00246D48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246D40: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_002035C0(); return; /* tail jmp 0x002035C0 */

}

/**
 * sub_00246D48
 * Original: 0x00246D48 - 0x00246D52 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246D48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246D48: ;
    eax = 0x30B090;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246D60
 * Original: 0x00246D60 - 0x00246D68 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246D60: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00216D90(); return; /* tail jmp 0x00216D90 */

}

/**
 * sub_00246D68
 * Original: 0x00246D68 - 0x00246D73 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246D68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246D68: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00030890(); return; /* tail jmp 0x00030890 */

}

/**
 * sub_00246D73
 * Original: 0x00246D73 - 0x00246D7E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246D73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246D73: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x38;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00030890(); return; /* tail jmp 0x00030890 */

}

/**
 * sub_00246D7E
 * Original: 0x00246D7E - 0x00246D88 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246D7E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246D7E: ;
    eax = 0x30B0C4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246D90
 * Original: 0x00246D90 - 0x00246D98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246D90: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001F3680(); return; /* tail jmp 0x001F3680 */

}

/**
 * sub_00246D98
 * Original: 0x00246D98 - 0x00246DA2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246D98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246D98: ;
    eax = 0x30B0E8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246DB0
 * Original: 0x00246DB0 - 0x00246DB8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246DB0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001F3680(); return; /* tail jmp 0x001F3680 */

}

/**
 * sub_00246DB8
 * Original: 0x00246DB8 - 0x00246DC3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246DB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246DB8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00030890(); return; /* tail jmp 0x00030890 */

}

/**
 * sub_00246DC3
 * Original: 0x00246DC3 - 0x00246DCD (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246DC3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246DC3: ;
    eax = 0x30B114;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246DD0
 * Original: 0x00246DD0 - 0x00246DD8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246DD0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00216D90(); return; /* tail jmp 0x00216D90 */

}

/**
 * sub_00246DD8
 * Original: 0x00246DD8 - 0x00246DE3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246DD8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246DD8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00030890(); return; /* tail jmp 0x00030890 */

}

/**
 * sub_00246DE3
 * Original: 0x00246DE3 - 0x00246DED (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246DE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246DE3: ;
    eax = 0x30B140;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246DF0
 * Original: 0x00246DF0 - 0x00246DF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246DF0: ;
    ecx = ebp + -92;
    g_seh_ebp = ebp; sub_00208DF0(); return; /* tail jmp 0x00208DF0 */

}

/**
 * sub_00246DF8
 * Original: 0x00246DF8 - 0x00246E02 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246DF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246DF8: ;
    eax = 0x30B164;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246E10
 * Original: 0x00246E10 - 0x00246E1B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246E10: ;
    ecx = ebp + -220;
    g_seh_ebp = ebp; sub_00209200(); return; /* tail jmp 0x00209200 */

}

/**
 * sub_00246E1B
 * Original: 0x00246E1B - 0x00246E25 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246E1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246E1B: ;
    eax = 0x30B188;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246E30
 * Original: 0x00246E30 - 0x00246E38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246E30: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_00208DF0(); return; /* tail jmp 0x00208DF0 */

}

/**
 * sub_00246E38
 * Original: 0x00246E38 - 0x00246E42 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246E38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246E38: ;
    eax = 0x30B1AC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246E50
 * Original: 0x00246E50 - 0x00246E58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246E50: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_00227FC0(); return; /* tail jmp 0x00227FC0 */

}

/**
 * sub_00246E58
 * Original: 0x00246E58 - 0x00246E62 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246E58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246E58: ;
    eax = 0x30B1D0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246E70
 * Original: 0x00246E70 - 0x00246E78 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246E70: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_00227FC0(); return; /* tail jmp 0x00227FC0 */

}

/**
 * sub_00246E78
 * Original: 0x00246E78 - 0x00246E82 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246E78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246E78: ;
    eax = 0x30B1F4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246E90
 * Original: 0x00246E90 - 0x00246E98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246E90: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00212920(); return; /* tail jmp 0x00212920 */

}

/**
 * sub_00246E98
 * Original: 0x00246E98 - 0x00246EA2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246E98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246E98: ;
    eax = 0x30B218;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246EB0
 * Original: 0x00246EB0 - 0x00246EBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246EB0: ;
    ecx = ebp + -212;
    g_seh_ebp = ebp; sub_00227FC0(); return; /* tail jmp 0x00227FC0 */

}

/**
 * sub_00246EBB
 * Original: 0x00246EBB - 0x00246EC5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246EBB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246EBB: ;
    eax = 0x30B23C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246ED0
 * Original: 0x00246ED0 - 0x00246EE6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246ED0: ;
    PUSH32(esp, 0x209040);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00246EE5u); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_00246EE5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00246EE6
 * Original: 0x00246EE6 - 0x00246EF0 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246EE6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246EE6: ;
    eax = 0x30B260;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246EF0
 * Original: 0x00246EF0 - 0x00246EF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246EF0: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_00207270(); return; /* tail jmp 0x00207270 */

}

/**
 * sub_00246EF8
 * Original: 0x00246EF8 - 0x00246F02 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246EF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246EF8: ;
    eax = 0x30B284;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246F10
 * Original: 0x00246F10 - 0x00246F18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246F10: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00206920(); return; /* tail jmp 0x00206920 */

}

/**
 * sub_00246F18
 * Original: 0x00246F18 - 0x00246F22 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246F18(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246F18: ;
    eax = 0x30B2A8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246F30
 * Original: 0x00246F30 - 0x00246F38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246F30: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00208DF0(); return; /* tail jmp 0x00208DF0 */

}

/**
 * sub_00246F38
 * Original: 0x00246F38 - 0x00246F42 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246F38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246F38: ;
    eax = 0x30B2CC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246F50
 * Original: 0x00246F50 - 0x00246F5B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246F50: ;
    ecx = ebp + -220;
    g_seh_ebp = ebp; sub_00209200(); return; /* tail jmp 0x00209200 */

}

/**
 * sub_00246F5B
 * Original: 0x00246F5B - 0x00246F65 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246F5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246F5B: ;
    eax = 0x30B2F0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246F70
 * Original: 0x00246F70 - 0x00246F78 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246F70: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001F73F0(); return; /* tail jmp 0x001F73F0 */

}

/**
 * sub_00246F78
 * Original: 0x00246F78 - 0x00246F82 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246F78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246F78: ;
    eax = 0x30B314;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246F90
 * Original: 0x00246F90 - 0x00246F9B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246F90: ;
    ecx = ebp + -512;
    g_seh_ebp = ebp; sub_00227FC0(); return; /* tail jmp 0x00227FC0 */

}

/**
 * sub_00246F9B
 * Original: 0x00246F9B - 0x00246FA5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246F9B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246F9B: ;
    eax = 0x30B338;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246FB0
 * Original: 0x00246FB0 - 0x00246FBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246FB0: ;
    ecx = ebp + -316;
    g_seh_ebp = ebp; sub_00227FC0(); return; /* tail jmp 0x00227FC0 */

}

/**
 * sub_00246FBB
 * Original: 0x00246FBB - 0x00246FC6 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246FBB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246FBB: ;
    ecx = ebp + -220;
    g_seh_ebp = ebp; sub_00209200(); return; /* tail jmp 0x00209200 */

}

/**
 * sub_00246FC6
 * Original: 0x00246FC6 - 0x00246FD0 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246FC6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246FC6: ;
    eax = 0x30B364;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246FD0
 * Original: 0x00246FD0 - 0x00246FDB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246FD0: ;
    ecx = ebp + -204;
    g_seh_ebp = ebp; sub_00227FC0(); return; /* tail jmp 0x00227FC0 */

}

/**
 * sub_00246FDB
 * Original: 0x00246FDB - 0x00246FE5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246FDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246FDB: ;
    eax = 0x30B388;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00246FF0
 * Original: 0x00246FF0 - 0x00246FF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246FF0: ;
    ecx = ebp + -108;
    g_seh_ebp = ebp; sub_00227FC0(); return; /* tail jmp 0x00227FC0 */

}

/**
 * sub_00246FF8
 * Original: 0x00246FF8 - 0x00247002 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246FF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246FF8: ;
    eax = 0x30B3AC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00247010
 * Original: 0x00247010 - 0x00247018 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247010: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00227FC0(); return; /* tail jmp 0x00227FC0 */

}

/**
 * sub_00247018
 * Original: 0x00247018 - 0x00247022 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247018(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247018: ;
    eax = 0x30B3D0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00247030
 * Original: 0x00247030 - 0x00247046 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247030: ;
    PUSH32(esp, 0x227FC0);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x60);
    eax = ebp + -9612;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00247045u); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_00247045: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00247046
 * Original: 0x00247046 - 0x00247050 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247046(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247046: ;
    eax = 0x30B3F4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00247050
 * Original: 0x00247050 - 0x0024705B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247050: ;
    ecx = ebp + -316;
    g_seh_ebp = ebp; sub_00209200(); return; /* tail jmp 0x00209200 */

}

/**
 * sub_0024705B
 * Original: 0x0024705B - 0x00247063 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024705B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024705B: ;
    ecx = ebp + -108;
    g_seh_ebp = ebp; sub_00227FC0(); return; /* tail jmp 0x00227FC0 */

}

/**
 * sub_00247063
 * Original: 0x00247063 - 0x0024706D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247063(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247063: ;
    eax = 0x30B420;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00247070
 * Original: 0x00247070 - 0x00247078 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247070: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001F73F0(); return; /* tail jmp 0x001F73F0 */

}

/**
 * sub_00247078
 * Original: 0x00247078 - 0x00247082 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247078(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247078: ;
    eax = 0x30B444;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00247090
 * Original: 0x00247090 - 0x002470AB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247090: ;
    PUSH32(esp, 0x222B10);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x30);
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(0x3C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002470AAu); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_002470AA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002470AB
 * Original: 0x002470AB - 0x002470C3 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002470AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002470AB: ;
    PUSH32(esp, 0x209040);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x50);
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(0xC3C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC3C8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002470C2u); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_002470C2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002470C3
 * Original: 0x002470C3 - 0x002470CD (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002470C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002470C3: ;
    eax = 0x30B470;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002470D0
 * Original: 0x002470D0 - 0x002470DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002470D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002470D0: ;
    ecx = ebp + -1072;
    g_seh_ebp = ebp; sub_00209040(); return; /* tail jmp 0x00209040 */

}

/**
 * sub_002470DB
 * Original: 0x002470DB - 0x002470E6 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002470DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002470DB: ;
    ecx = ebp + -1280;
    g_seh_ebp = ebp; sub_00209200(); return; /* tail jmp 0x00209200 */

}

/**
 * sub_002470E6
 * Original: 0x002470E6 - 0x002470F1 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002470E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002470E6: ;
    ecx = ebp + -1488;
    g_seh_ebp = ebp; sub_00209200(); return; /* tail jmp 0x00209200 */

}

/**
 * sub_002470F1
 * Original: 0x002470F1 - 0x002470FB (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002470F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002470F1: ;
    eax = 0x30B4A4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00247100
 * Original: 0x00247100 - 0x0024710B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247100: ;
    ecx = ebp + -428;
    g_seh_ebp = ebp; sub_00209200(); return; /* tail jmp 0x00209200 */

}

/**
 * sub_0024710B
 * Original: 0x0024710B - 0x00247116 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024710B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024710B: ;
    ecx = ebp + -220;
    g_seh_ebp = ebp; sub_00209200(); return; /* tail jmp 0x00209200 */

}

/**
 * sub_00247116
 * Original: 0x00247116 - 0x00247120 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247116(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247116: ;
    eax = 0x30B4D0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00247120
 * Original: 0x00247120 - 0x00247128 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247120: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001BDE40(); return; /* tail jmp 0x001BDE40 */

}

/**
 * sub_00247128
 * Original: 0x00247128 - 0x00247132 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247128(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247128: ;
    eax = 0x30B4F4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00247140
 * Original: 0x00247140 - 0x00247151 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247140: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024714Du); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_0024714D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00247151
 * Original: 0x00247151 - 0x0024715B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247151(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247151: ;
    eax = 0x30B518;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00247160
 * Original: 0x00247160 - 0x00247168 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247160: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001CE830(); return; /* tail jmp 0x001CE830 */

}

/**
 * sub_00247168
 * Original: 0x00247168 - 0x00247172 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247168(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247168: ;
    eax = 0x30B53C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00247180
 * Original: 0x00247180 - 0x0024718B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247180: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00247189u); RECOMP_ABI_CALL(0x0012B6D0u, sub_0012B6D0); /* call 0x0012B6D0 */

loc_00247189: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024718B
 * Original: 0x0024718B - 0x00247195 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024718B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024718B: ;
    eax = 0x30B560;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002471A0
 * Original: 0x002471A0 - 0x002471B4 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002471A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002471A0: ;
    ebx = MEM32(ebp + -16);
    eax = MEM32(ebx + 8);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002471B0u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_002471B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002471B4
 * Original: 0x002471B4 - 0x002471BE (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002471B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002471B4: ;
    eax = 0x30B584;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002471C0
 * Original: 0x002471C0 - 0x002471D6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002471C0(void)
{

loc_002471C0: ;
    ecx = 0x314338;
    PUSH32(esp, 0x002471CAu); RECOMP_ABI_CALL(0x0001EDF0u, sub_0001EDF0); /* call 0x0001EDF0 */

loc_002471CA: ;
    PUSH32(esp, 0x252EB0);
    PUSH32(esp, 0x002471D4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002471D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002471E0
 * Original: 0x002471E0 - 0x00247261 (129 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002471E0(void)
{

loc_002471E0: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3FB33333);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3FC00000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x40D9999A);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40D9999A);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x505860);
    PUSH32(esp, 0x50505860);
    PUSH32(esp, 0x80505860u);
    PUSH32(esp, 0x505860);
    PUSH32(esp, 0x50505860);
    PUSH32(esp, 0x80505860u);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC272D7AFu);
    ecx = 0x3143C0;
    PUSH32(esp, 0x00247255u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00247255: ;
    PUSH32(esp, 0x252EC0);
    PUSH32(esp, 0x0024725Fu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0024725F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247270
 * Original: 0x00247270 - 0x002472EE (126 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247270(void)
{

loc_00247270: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x3FE66666);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3FE66666);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x505860);
    PUSH32(esp, 0x50505860);
    PUSH32(esp, 0x80505860u);
    PUSH32(esp, 0x505860);
    PUSH32(esp, 0x50505860);
    PUSH32(esp, 0x80505860u);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC272D7AFu);
    ecx = 0x314468;
    PUSH32(esp, 0x002472E2u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_002472E2: ;
    PUSH32(esp, 0x252ED0);
    PUSH32(esp, 0x002472ECu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002472EC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002472F0
 * Original: 0x002472F0 - 0x0024736E (126 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002472F0(void)
{

loc_002472F0: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x3FE66666);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3FE66666);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x50585D);
    PUSH32(esp, 0x5050585D);
    PUSH32(esp, 0x8050585Du);
    PUSH32(esp, 0x50585D);
    PUSH32(esp, 0x5050585D);
    PUSH32(esp, 0x8050585Du);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC272D7AFu);
    ecx = 0x314510;
    PUSH32(esp, 0x00247362u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00247362: ;
    PUSH32(esp, 0x252EE0);
    PUSH32(esp, 0x0024736Cu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0024736C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247370
 * Original: 0x00247370 - 0x00247386 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247370(void)
{

loc_00247370: ;
    ecx = 0x3145B8;
    PUSH32(esp, 0x0024737Au); RECOMP_ABI_CALL(0x0001EEE0u, sub_0001EEE0); /* call 0x0001EEE0 */

loc_0024737A: ;
    PUSH32(esp, 0x252EF0);
    PUSH32(esp, 0x00247384u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247384: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247390
 * Original: 0x00247390 - 0x002473A6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247390(void)
{

loc_00247390: ;
    ecx = 0x314640;
    PUSH32(esp, 0x0024739Au); RECOMP_ABI_CALL(0x0001F0C0u, sub_0001F0C0); /* call 0x0001F0C0 */

loc_0024739A: ;
    PUSH32(esp, 0x252F00);
    PUSH32(esp, 0x002473A4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002473A4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002473B0
 * Original: 0x002473B0 - 0x002473C6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002473B0(void)
{

loc_002473B0: ;
    ecx = 0x3146C8;
    PUSH32(esp, 0x002473BAu); RECOMP_ABI_CALL(0x0001F1B0u, sub_0001F1B0); /* call 0x0001F1B0 */

loc_002473BA: ;
    PUSH32(esp, 0x252F10);
    PUSH32(esp, 0x002473C4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002473C4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002473D0
 * Original: 0x002473D0 - 0x002473E6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002473D0(void)
{

loc_002473D0: ;
    ecx = 0x314750;
    PUSH32(esp, 0x002473DAu); RECOMP_ABI_CALL(0x0001F2A0u, sub_0001F2A0); /* call 0x0001F2A0 */

loc_002473DA: ;
    PUSH32(esp, 0x252F20);
    PUSH32(esp, 0x002473E4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002473E4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002473F0
 * Original: 0x002473F0 - 0x00247406 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002473F0(void)
{

loc_002473F0: ;
    ecx = 0x3147D8;
    PUSH32(esp, 0x002473FAu); RECOMP_ABI_CALL(0x0001F390u, sub_0001F390); /* call 0x0001F390 */

loc_002473FA: ;
    PUSH32(esp, 0x252F30);
    PUSH32(esp, 0x00247404u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247404: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247410
 * Original: 0x00247410 - 0x00247426 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247410(void)
{

loc_00247410: ;
    ecx = 0x314860;
    PUSH32(esp, 0x0024741Au); RECOMP_ABI_CALL(0x0001ECF0u, sub_0001ECF0); /* call 0x0001ECF0 */

loc_0024741A: ;
    PUSH32(esp, 0x252F40);
    PUSH32(esp, 0x00247424u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247424: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247430
 * Original: 0x00247430 - 0x00247446 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247430(void)
{

loc_00247430: ;
    ecx = 0x3148E8;
    PUSH32(esp, 0x0024743Au); RECOMP_ABI_CALL(0x0001EFD0u, sub_0001EFD0); /* call 0x0001EFD0 */

loc_0024743A: ;
    PUSH32(esp, 0x252F50);
    PUSH32(esp, 0x00247444u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247444: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247450
 * Original: 0x00247450 - 0x00247466 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247450(void)
{

loc_00247450: ;
    ecx = 0x314978;
    PUSH32(esp, 0x0024745Au); RECOMP_ABI_CALL(0x00022780u, sub_00022780); /* call 0x00022780 */

loc_0024745A: ;
    PUSH32(esp, 0x252F60);
    PUSH32(esp, 0x00247464u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247464: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247470
 * Original: 0x00247470 - 0x00247483 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247470(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00247470: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x315820);
    PUSH32(esp, 0x0024747Fu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_0024747F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00247490
 * Original: 0x00247490 - 0x002474A6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247490(void)
{

loc_00247490: ;
    ecx = 0x315A20;
    PUSH32(esp, 0x0024749Au); RECOMP_ABI_CALL(0x00025B50u, sub_00025B50); /* call 0x00025B50 */

loc_0024749A: ;
    PUSH32(esp, 0x252F70);
    PUSH32(esp, 0x002474A4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002474A4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002474B0
 * Original: 0x002474B0 - 0x00247534 (132 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002474B0(void)
{

loc_002474B0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0xC0400000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x42400000);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x303234);
    PUSH32(esp, 0x60303234);
    PUSH32(esp, 0x60303234);
    PUSH32(esp, 0x303234);
    PUSH32(esp, 0x60303234);
    PUSH32(esp, 0x60303234);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC272D7AFu);
    ecx = 0x315AA8;
    PUSH32(esp, 0x00247528u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00247528: ;
    PUSH32(esp, 0x252F80);
    PUSH32(esp, 0x00247532u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247532: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247540
 * Original: 0x00247540 - 0x002475C4 (132 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247540(void)
{

loc_00247540: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0xC0400000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x303030);
    PUSH32(esp, 0x40303030);
    PUSH32(esp, 0x303030);
    PUSH32(esp, 0x505050);
    PUSH32(esp, 0x40505050);
    PUSH32(esp, 0x505050);
    PUSH32(esp, 0);
    PUSH32(esp, 0x29435A6B);
    ecx = 0x315B50;
    PUSH32(esp, 0x002475B8u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_002475B8: ;
    PUSH32(esp, 0x252F90);
    PUSH32(esp, 0x002475C2u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002475C2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002475D0
 * Original: 0x002475D0 - 0x00247654 (132 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002475D0(void)
{

loc_002475D0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x101010);
    PUSH32(esp, 0x40101010);
    PUSH32(esp, 0x80101010u);
    PUSH32(esp, 0x404040);
    PUSH32(esp, 0x40404040);
    PUSH32(esp, 0x80404040u);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC272D7AFu);
    ecx = 0x315BF8;
    PUSH32(esp, 0x00247648u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00247648: ;
    PUSH32(esp, 0x252FA0);
    PUSH32(esp, 0x00247652u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247652: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247660
 * Original: 0x00247660 - 0x002476AC (76 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247660(void)
{

loc_00247660: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F32B8C3);
    PUSH32(esp, 0x3F32B8C3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x315AA8);
    ecx = 0x315CA0;
    PUSH32(esp, 0x002476A0u); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_002476A0: ;
    PUSH32(esp, 0x252FB0);
    PUSH32(esp, 0x002476AAu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002476AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002476B0
 * Original: 0x002476B0 - 0x002476FC (76 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002476B0(void)
{

loc_002476B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F32B8C3);
    PUSH32(esp, 0x3F32B8C3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x315B50);
    ecx = 0x315CE0;
    PUSH32(esp, 0x002476F0u); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_002476F0: ;
    PUSH32(esp, 0x252FC0);
    PUSH32(esp, 0x002476FAu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002476FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247700
 * Original: 0x00247700 - 0x00247784 (132 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247700(void)
{

loc_00247700: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, 0x42200000);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0x41700000);
    PUSH32(esp, 0x303234);
    PUSH32(esp, 0x40303234);
    PUSH32(esp, 0x303234);
    PUSH32(esp, 0x303234);
    PUSH32(esp, 0x40303234);
    PUSH32(esp, 0x303234);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC272D7AFu);
    ecx = 0x315D20;
    PUSH32(esp, 0x00247778u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00247778: ;
    PUSH32(esp, 0x252FD0);
    PUSH32(esp, 0x00247782u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247782: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247790
 * Original: 0x00247790 - 0x002477DC (76 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247790(void)
{

loc_00247790: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, 0x3F32B8C3);
    PUSH32(esp, 0x3F32B8C3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x315D20);
    ecx = 0x315DC8;
    PUSH32(esp, 0x002477D0u); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_002477D0: ;
    PUSH32(esp, 0x252FE0);
    PUSH32(esp, 0x002477DAu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002477DA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002477E0
 * Original: 0x002477E0 - 0x00247861 (129 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002477E0(void)
{

loc_002477E0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3FE66666);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x42200000);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x41800000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x202428);
    PUSH32(esp, 0x40202428);
    PUSH32(esp, 0);
    PUSH32(esp, 0x303438);
    PUSH32(esp, 0x40303438);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC272D7AFu);
    ecx = 0x315E08;
    PUSH32(esp, 0x00247855u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00247855: ;
    PUSH32(esp, 0x252FF0);
    PUSH32(esp, 0x0024785Fu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0024785F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247870
 * Original: 0x00247870 - 0x002478F1 (129 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247870(void)
{

loc_00247870: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3FE66666);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x42200000);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x41800000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x202428);
    PUSH32(esp, 0x20202428);
    PUSH32(esp, 0);
    PUSH32(esp, 0x303438);
    PUSH32(esp, 0x20303438);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC272D7AFu);
    ecx = 0x315EB0;
    PUSH32(esp, 0x002478E5u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_002478E5: ;
    PUSH32(esp, 0x253000);
    PUSH32(esp, 0x002478EFu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002478EF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247900
 * Original: 0x00247900 - 0x00247924 (36 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247900(void)
{

loc_00247900: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x315EB0);
    PUSH32(esp, 0x315E08);
    ecx = 0x315F54;
    PUSH32(esp, 0x00247918u); RECOMP_ABI_CALL(0x00023C10u, sub_00023C10); /* call 0x00023C10 */

loc_00247918: ;
    PUSH32(esp, 0x253010);
    PUSH32(esp, 0x00247922u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247922: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247930
 * Original: 0x00247930 - 0x0024797F (79 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247930(void)
{

loc_00247930: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3FC90FDB);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 2);
    PUSH32(esp, 0x315F54);
    ecx = 0x315F68;
    PUSH32(esp, 0x00247973u); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_00247973: ;
    PUSH32(esp, 0x253020);
    PUSH32(esp, 0x0024797Du); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0024797D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247980
 * Original: 0x00247980 - 0x00247996 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247980(void)
{

loc_00247980: ;
    ecx = 0x315FA8;
    PUSH32(esp, 0x0024798Au); RECOMP_ABI_CALL(0x00028290u, sub_00028290); /* call 0x00028290 */

loc_0024798A: ;
    PUSH32(esp, 0x253030);
    PUSH32(esp, 0x00247994u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247994: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002479A0
 * Original: 0x002479A0 - 0x002479B6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002479A0(void)
{

loc_002479A0: ;
    ecx = 0x316030;
    PUSH32(esp, 0x002479AAu); RECOMP_ABI_CALL(0x00029700u, sub_00029700); /* call 0x00029700 */

loc_002479AA: ;
    PUSH32(esp, 0x253040);
    PUSH32(esp, 0x002479B4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002479B4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002479C0
 * Original: 0x002479C0 - 0x002479D6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002479C0(void)
{

loc_002479C0: ;
    ecx = 0x3160B8;
    PUSH32(esp, 0x002479CAu); RECOMP_ABI_CALL(0x0002A930u, sub_0002A930); /* call 0x0002A930 */

loc_002479CA: ;
    PUSH32(esp, 0x253050);
    PUSH32(esp, 0x002479D4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002479D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002479E0
 * Original: 0x002479E0 - 0x002479F6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002479E0(void)
{

loc_002479E0: ;
    ecx = 0x316140;
    PUSH32(esp, 0x002479EAu); RECOMP_ABI_CALL(0x0002B890u, sub_0002B890); /* call 0x0002B890 */

loc_002479EA: ;
    PUSH32(esp, 0x253060);
    PUSH32(esp, 0x002479F4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002479F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247A00
 * Original: 0x00247A00 - 0x00247A16 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247A00(void)
{

loc_00247A00: ;
    ecx = 0x3161C8;
    PUSH32(esp, 0x00247A0Au); RECOMP_ABI_CALL(0x0002BE90u, sub_0002BE90); /* call 0x0002BE90 */

loc_00247A0A: ;
    PUSH32(esp, 0x253070);
    PUSH32(esp, 0x00247A14u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247A14: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247A20
 * Original: 0x00247A20 - 0x00247A36 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247A20(void)
{

loc_00247A20: ;
    ecx = 0x316458;
    PUSH32(esp, 0x00247A2Au); RECOMP_ABI_CALL(0x0002C290u, sub_0002C290); /* call 0x0002C290 */

loc_00247A2A: ;
    PUSH32(esp, 0x253080);
    PUSH32(esp, 0x00247A34u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247A34: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247A40
 * Original: 0x00247A40 - 0x00247A56 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247A40(void)
{

loc_00247A40: ;
    ecx = 0x3164E0;
    PUSH32(esp, 0x00247A4Au); RECOMP_ABI_CALL(0x0002CD60u, sub_0002CD60); /* call 0x0002CD60 */

loc_00247A4A: ;
    PUSH32(esp, 0x253090);
    PUSH32(esp, 0x00247A54u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247A54: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247A60
 * Original: 0x00247A60 - 0x00247AE7 (135 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247A60(void)
{

loc_00247A60: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xBF19999Au);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x41E00000);
    PUSH32(esp, 0x41800000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x707068);
    PUSH32(esp, 0x10707068);
    PUSH32(esp, 0x10707068);
    PUSH32(esp, 0x505048);
    PUSH32(esp, 0x10505048);
    PUSH32(esp, 0x10505048);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC272D7AFu);
    ecx = 0x316568;
    PUSH32(esp, 0x00247ADBu); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00247ADB: ;
    PUSH32(esp, 0x2530A0);
    PUSH32(esp, 0x00247AE5u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247AE5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247AF0
 * Original: 0x00247AF0 - 0x00247B36 (70 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247AF0(void)
{

loc_00247AF0: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x3F32B8C3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x316568);
    ecx = 0x316610;
    PUSH32(esp, 0x00247B2Au); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_00247B2A: ;
    PUSH32(esp, 0x2530B0);
    PUSH32(esp, 0x00247B34u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247B34: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247B40
 * Original: 0x00247B40 - 0x00247BBE (126 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247B40(void)
{

loc_00247B40: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x40F0);
    PUSH32(esp, 0x800040F0u);
    PUSH32(esp, 0x800040F0u);
    PUSH32(esp, 0x808080);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2BB1FE0);
    ecx = 0x316650;
    PUSH32(esp, 0x00247BB2u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00247BB2: ;
    PUSH32(esp, 0x2530C0);
    PUSH32(esp, 0x00247BBCu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247BBC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247BC0
 * Original: 0x00247BC0 - 0x00247C06 (70 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247BC0(void)
{

loc_00247BC0: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40490FDB);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x316650);
    ecx = 0x3166F8;
    PUSH32(esp, 0x00247BFAu); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_00247BFA: ;
    PUSH32(esp, 0x2530D0);
    PUSH32(esp, 0x00247C04u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247C04: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247C10
 * Original: 0x00247C10 - 0x00247C91 (129 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247C10(void)
{

loc_00247C10: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x41700000);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x42400000);
    PUSH32(esp, 0x41C00000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x42400000);
    PUSH32(esp, 0x41C00000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0xC0C0C0);
    PUSH32(esp, 0x20C0C0C0);
    PUSH32(esp, 0xAADDFF);
    PUSH32(esp, 0x707070);
    PUSH32(esp, 0x20707070);
    PUSH32(esp, 0xAADDFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC272D7AFu);
    ecx = 0x316738;
    PUSH32(esp, 0x00247C85u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00247C85: ;
    PUSH32(esp, 0x2530E0);
    PUSH32(esp, 0x00247C8Fu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247C8F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247CA0
 * Original: 0x00247CA0 - 0x00247CEC (76 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247CA0(void)
{

loc_00247CA0: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x3EB2B8C3);
    PUSH32(esp, 0x403DE44F);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x316738);
    ecx = 0x3167E0;
    PUSH32(esp, 0x00247CE0u); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_00247CE0: ;
    PUSH32(esp, 0x2530F0);
    PUSH32(esp, 0x00247CEAu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247CEA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247CF0
 * Original: 0x00247CF0 - 0x00247D06 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247CF0(void)
{

loc_00247CF0: ;
    ecx = 0x316828;
    PUSH32(esp, 0x00247CFAu); RECOMP_ABI_CALL(0x0002E710u, sub_0002E710); /* call 0x0002E710 */

loc_00247CFA: ;
    PUSH32(esp, 0x253100);
    PUSH32(esp, 0x00247D04u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247D04: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247D10
 * Original: 0x00247D10 - 0x00247D26 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247D10(void)
{

loc_00247D10: ;
    ecx = 0x3168B0;
    PUSH32(esp, 0x00247D1Au); RECOMP_ABI_CALL(0x000304D0u, sub_000304D0); /* call 0x000304D0 */

loc_00247D1A: ;
    PUSH32(esp, 0x253110);
    PUSH32(esp, 0x00247D24u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247D24: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247D30
 * Original: 0x00247D30 - 0x00247D46 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247D30(void)
{

loc_00247D30: ;
    ecx = 0x316938;
    PUSH32(esp, 0x00247D3Au); RECOMP_ABI_CALL(0x00030930u, sub_00030930); /* call 0x00030930 */

loc_00247D3A: ;
    PUSH32(esp, 0x253120);
    PUSH32(esp, 0x00247D44u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247D44: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247D50
 * Original: 0x00247D50 - 0x00247D66 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247D50(void)
{

loc_00247D50: ;
    ecx = 0x3169C0;
    PUSH32(esp, 0x00247D5Au); RECOMP_ABI_CALL(0x000309A0u, sub_000309A0); /* call 0x000309A0 */

loc_00247D5A: ;
    PUSH32(esp, 0x253130);
    PUSH32(esp, 0x00247D64u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247D64: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247D70
 * Original: 0x00247D70 - 0x00247D86 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247D70(void)
{

loc_00247D70: ;
    ecx = 0x317268;
    PUSH32(esp, 0x00247D7Au); RECOMP_ABI_CALL(0x00034880u, sub_00034880); /* call 0x00034880 */

loc_00247D7A: ;
    PUSH32(esp, 0x253140);
    PUSH32(esp, 0x00247D84u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247D84: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247D90
 * Original: 0x00247D90 - 0x00247DA6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247D90(void)
{

loc_00247D90: ;
    ecx = 0x3172F0;
    PUSH32(esp, 0x00247D9Au); RECOMP_ABI_CALL(0x000348F0u, sub_000348F0); /* call 0x000348F0 */

loc_00247D9A: ;
    PUSH32(esp, 0x253150);
    PUSH32(esp, 0x00247DA4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247DA4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247DB0
 * Original: 0x00247DB0 - 0x00247DC6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247DB0(void)
{

loc_00247DB0: ;
    ecx = 0x317378;
    PUSH32(esp, 0x00247DBAu); RECOMP_ABI_CALL(0x000348F0u, sub_000348F0); /* call 0x000348F0 */

loc_00247DBA: ;
    PUSH32(esp, 0x253160);
    PUSH32(esp, 0x00247DC4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247DC4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247DD0
 * Original: 0x00247DD0 - 0x00247DE6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247DD0(void)
{

loc_00247DD0: ;
    ecx = 0x317400;
    PUSH32(esp, 0x00247DDAu); RECOMP_ABI_CALL(0x00034960u, sub_00034960); /* call 0x00034960 */

loc_00247DDA: ;
    PUSH32(esp, 0x253170);
    PUSH32(esp, 0x00247DE4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247DE4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247DF0
 * Original: 0x00247DF0 - 0x00247E03 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247DF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00247DF0: ;
    PUSH32(esp, 0x800);
    PUSH32(esp, 0x319520);
    PUSH32(esp, 0x00247DFFu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_00247DFF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00247E10
 * Original: 0x00247E10 - 0x00247E26 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247E10(void)
{

loc_00247E10: ;
    ecx = 0x31B520;
    PUSH32(esp, 0x00247E1Au); RECOMP_ABI_CALL(0x00036530u, sub_00036530); /* call 0x00036530 */

loc_00247E1A: ;
    PUSH32(esp, 0x253180);
    PUSH32(esp, 0x00247E24u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247E24: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247E30
 * Original: 0x00247E30 - 0x00247E54 (36 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247E30(void)
{

loc_00247E30: ;
    PUSH32(esp, 0x209040);
    PUSH32(esp, 0xB5E50);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x31B5B0);
    PUSH32(esp, 0x00247E48u); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_00247E48: ;
    PUSH32(esp, 0x253190);
    PUSH32(esp, 0x00247E52u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247E52: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247E60
 * Original: 0x00247E60 - 0x00247E76 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247E60(void)
{

loc_00247E60: ;
    ecx = 0x31B938;
    PUSH32(esp, 0x00247E6Au); RECOMP_ABI_CALL(0x00036C20u, sub_00036C20); /* call 0x00036C20 */

loc_00247E6A: ;
    PUSH32(esp, 0x2531B0);
    PUSH32(esp, 0x00247E74u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247E74: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247E80
 * Original: 0x00247E80 - 0x00247E96 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247E80(void)
{

loc_00247E80: ;
    ecx = 0x31B9C0;
    PUSH32(esp, 0x00247E8Au); RECOMP_ABI_CALL(0x00037F70u, sub_00037F70); /* call 0x00037F70 */

loc_00247E8A: ;
    PUSH32(esp, 0x2531C0);
    PUSH32(esp, 0x00247E94u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247E94: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247EA0
 * Original: 0x00247EA0 - 0x00247EB6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247EA0(void)
{

loc_00247EA0: ;
    ecx = 0x31BC50;
    PUSH32(esp, 0x00247EAAu); RECOMP_ABI_CALL(0x00038550u, sub_00038550); /* call 0x00038550 */

loc_00247EAA: ;
    PUSH32(esp, 0x2531D0);
    PUSH32(esp, 0x00247EB4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247EB4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247EC0
 * Original: 0x00247EC0 - 0x00247ED6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247EC0(void)
{

loc_00247EC0: ;
    ecx = 0x31BCD8;
    PUSH32(esp, 0x00247ECAu); RECOMP_ABI_CALL(0x00038DD0u, sub_00038DD0); /* call 0x00038DD0 */

loc_00247ECA: ;
    PUSH32(esp, 0x2531E0);
    PUSH32(esp, 0x00247ED4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247ED4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247EE0
 * Original: 0x00247EE0 - 0x00247EF6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247EE0(void)
{

loc_00247EE0: ;
    ecx = 0x31BD60;
    PUSH32(esp, 0x00247EEAu); RECOMP_ABI_CALL(0x00039130u, sub_00039130); /* call 0x00039130 */

loc_00247EEA: ;
    PUSH32(esp, 0x2531F0);
    PUSH32(esp, 0x00247EF4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247EF4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247F00
 * Original: 0x00247F00 - 0x00247F16 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247F00(void)
{

loc_00247F00: ;
    ecx = 0x31BDF8;
    PUSH32(esp, 0x00247F0Au); RECOMP_ABI_CALL(0x00039F90u, sub_00039F90); /* call 0x00039F90 */

loc_00247F0A: ;
    PUSH32(esp, 0x253200);
    PUSH32(esp, 0x00247F14u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247F14: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247F20
 * Original: 0x00247F20 - 0x00247F47 (39 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247F20(void)
{

loc_00247F20: ;
    PUSH32(esp, 0x39850);
    PUSH32(esp, 0x39B00);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x550);
    PUSH32(esp, 0x31BE80);
    PUSH32(esp, 0x00247F3Bu); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_00247F3B: ;
    PUSH32(esp, 0x253210);
    PUSH32(esp, 0x00247F45u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247F45: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247F50
 * Original: 0x00247F50 - 0x00247F66 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247F50(void)
{

loc_00247F50: ;
    ecx = 0x31FE48;
    PUSH32(esp, 0x00247F5Au); RECOMP_ABI_CALL(0x0003CD00u, sub_0003CD00); /* call 0x0003CD00 */

loc_00247F5A: ;
    PUSH32(esp, 0x253230);
    PUSH32(esp, 0x00247F64u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247F64: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247F70
 * Original: 0x00247F70 - 0x00247F86 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247F70(void)
{

loc_00247F70: ;
    ecx = 0x31FEE0;
    PUSH32(esp, 0x00247F7Au); RECOMP_ABI_CALL(0x0003E710u, sub_0003E710); /* call 0x0003E710 */

loc_00247F7A: ;
    PUSH32(esp, 0x253240);
    PUSH32(esp, 0x00247F84u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247F84: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247F90
 * Original: 0x00247F90 - 0x00247F9C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247F90(void)
{

loc_00247F90: ;
    PUSH32(esp, 0x253250);
    PUSH32(esp, 0x00247F9Au); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247F9A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247FA0
 * Original: 0x00247FA0 - 0x00247FB6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247FA0(void)
{

loc_00247FA0: ;
    ecx = 0x320008;
    PUSH32(esp, 0x00247FAAu); RECOMP_ABI_CALL(0x00043D90u, sub_00043D90); /* call 0x00043D90 */

loc_00247FAA: ;
    PUSH32(esp, 0x253260);
    PUSH32(esp, 0x00247FB4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247FB4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247FC0
 * Original: 0x00247FC0 - 0x00247FD6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247FC0(void)
{

loc_00247FC0: ;
    ecx = 0x320098;
    PUSH32(esp, 0x00247FCAu); RECOMP_ABI_CALL(0x00048840u, sub_00048840); /* call 0x00048840 */

loc_00247FCA: ;
    PUSH32(esp, 0x253270);
    PUSH32(esp, 0x00247FD4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00247FD4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247FE0
 * Original: 0x00247FE0 - 0x00247FF0 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247FE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00247FE0: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x320228);
    PUSH32(esp, 0x00247FECu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_00247FEC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00247FF0
 * Original: 0x00247FF0 - 0x00248010 (32 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247FF0(void)
{

loc_00247FF0: ;
    ecx = 0x320330;
    PUSH32(esp, 0x00247FFAu); RECOMP_ABI_CALL(0x00049290u, sub_00049290); /* call 0x00049290 */

loc_00247FFA: ;
    PUSH32(esp, 0x253280);
    PUSH32(esp, 0x00248004u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248004: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248010
 * Original: 0x00248010 - 0x00248020 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00248010: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x3204C0);
    PUSH32(esp, 0x0024801Cu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_0024801C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00248020
 * Original: 0x00248020 - 0x00248040 (32 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248020(void)
{

loc_00248020: ;
    ecx = 0x3205C8;
    PUSH32(esp, 0x0024802Au); RECOMP_ABI_CALL(0x0004BF60u, sub_0004BF60); /* call 0x0004BF60 */

loc_0024802A: ;
    PUSH32(esp, 0x253290);
    PUSH32(esp, 0x00248034u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248034: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248040
 * Original: 0x00248040 - 0x00248053 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00248040: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x320BB0);
    PUSH32(esp, 0x0024804Fu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_0024804F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00248060
 * Original: 0x00248060 - 0x00248073 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00248060: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x3213B8);
    PUSH32(esp, 0x0024806Fu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_0024806F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00248080
 * Original: 0x00248080 - 0x00248091 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248080(void)
{

loc_00248080: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E2C38)); /* movss */
    MEMF(0x3217B8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002480A0
 * Original: 0x002480A0 - 0x002480B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002480A0(void)
{

loc_002480A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E2C3C)); /* movss */
    MEMF(0x3217BC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002480C0
 * Original: 0x002480C0 - 0x002480D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002480C0(void)
{

loc_002480C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DE088)); /* movss */
    MEMF(0x3217C0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002480E0
 * Original: 0x002480E0 - 0x002480F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002480E0(void)
{

loc_002480E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC088)); /* movss */
    MEMF(0x3217C4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00248100
 * Original: 0x00248100 - 0x00248111 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248100(void)
{

loc_00248100: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DE088)); /* movss */
    MEMF(0x3217C8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00248120
 * Original: 0x00248120 - 0x00248131 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248120(void)
{

loc_00248120: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC088)); /* movss */
    MEMF(0x3217CC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00248140
 * Original: 0x00248140 - 0x00248151 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248140(void)
{

loc_00248140: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E27F0)); /* movss */
    MEMF(0x3217D0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00248160
 * Original: 0x00248160 - 0x00248171 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248160(void)
{

loc_00248160: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DE088)); /* movss */
    MEMF(0x3217D4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00248180
 * Original: 0x00248180 - 0x00248191 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248180(void)
{

loc_00248180: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E0A28)); /* movss */
    MEMF(0x3217D8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002481A0
 * Original: 0x002481A0 - 0x002481B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002481A0(void)
{

loc_002481A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E27F4)); /* movss */
    MEMF(0x3217DC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002481C0
 * Original: 0x002481C0 - 0x002481D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002481C0(void)
{

loc_002481C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E0A24)); /* movss */
    MEMF(0x3217E0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002481E0
 * Original: 0x002481E0 - 0x002481F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002481E0(void)
{

loc_002481E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E2C40)); /* movss */
    MEMF(0x3217E4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00248200
 * Original: 0x00248200 - 0x00248211 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248200(void)
{

loc_00248200: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E2C44)); /* movss */
    MEMF(0x3217E8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00248220
 * Original: 0x00248220 - 0x00248231 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248220(void)
{

loc_00248220: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E2C48)); /* movss */
    MEMF(0x3217EC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00248240
 * Original: 0x00248240 - 0x00248251 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248240(void)
{

loc_00248240: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E0838)); /* movss */
    MEMF(0x3217F0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00248260
 * Original: 0x00248260 - 0x00248276 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248260(void)
{

loc_00248260: ;
    ecx = 0x3217F8;
    PUSH32(esp, 0x0024826Au); RECOMP_ABI_CALL(0x00056BF0u, sub_00056BF0); /* call 0x00056BF0 */

loc_0024826A: ;
    PUSH32(esp, 0x2532A0);
    PUSH32(esp, 0x00248274u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248274: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248280
 * Original: 0x00248280 - 0x00248296 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248280(void)
{

loc_00248280: ;
    ecx = 0x321888;
    PUSH32(esp, 0x0024828Au); RECOMP_ABI_CALL(0x0005BA70u, sub_0005BA70); /* call 0x0005BA70 */

loc_0024828A: ;
    PUSH32(esp, 0x2532B0);
    PUSH32(esp, 0x00248294u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248294: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002482A0
 * Original: 0x002482A0 - 0x002482B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002482A0(void)
{

loc_002482A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DDA30)); /* movss */
    MEMF(0x321910) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002482C0
 * Original: 0x002482C0 - 0x002482D6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002482C0(void)
{

loc_002482C0: ;
    ecx = 0x321918;
    PUSH32(esp, 0x002482CAu); RECOMP_ABI_CALL(0x0005FB20u, sub_0005FB20); /* call 0x0005FB20 */

loc_002482CA: ;
    PUSH32(esp, 0x2532C0);
    PUSH32(esp, 0x002482D4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002482D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002482E0
 * Original: 0x002482E0 - 0x002482F6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002482E0(void)
{

loc_002482E0: ;
    ecx = 0x321E70;
    PUSH32(esp, 0x002482EAu); RECOMP_ABI_CALL(0x00063F10u, sub_00063F10); /* call 0x00063F10 */

loc_002482EA: ;
    PUSH32(esp, 0x2532D0);
    PUSH32(esp, 0x002482F4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002482F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248300
 * Original: 0x00248300 - 0x00248313 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00248300: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x322298);
    PUSH32(esp, 0x0024830Fu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_0024830F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00248320
 * Original: 0x00248320 - 0x0024832C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248320(void)
{

loc_00248320: ;
    PUSH32(esp, 0x2532E0);
    PUSH32(esp, 0x0024832Au); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0024832A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248330
 * Original: 0x00248330 - 0x00248346 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248330(void)
{

loc_00248330: ;
    ecx = 0x322698;
    PUSH32(esp, 0x0024833Au); RECOMP_ABI_CALL(0x0006FF50u, sub_0006FF50); /* call 0x0006FF50 */

loc_0024833A: ;
    PUSH32(esp, 0x2532F0);
    PUSH32(esp, 0x00248344u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248344: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248350
 * Original: 0x00248350 - 0x00248366 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248350(void)
{

loc_00248350: ;
    ecx = 0x322720;
    PUSH32(esp, 0x0024835Au); RECOMP_ABI_CALL(0x000709E0u, sub_000709E0); /* call 0x000709E0 */

loc_0024835A: ;
    PUSH32(esp, 0x253300);
    PUSH32(esp, 0x00248364u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248364: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248370
 * Original: 0x00248370 - 0x00248386 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248370(void)
{

loc_00248370: ;
    ecx = 0x3227A8;
    PUSH32(esp, 0x0024837Au); RECOMP_ABI_CALL(0x00070F50u, sub_00070F50); /* call 0x00070F50 */

loc_0024837A: ;
    PUSH32(esp, 0x253310);
    PUSH32(esp, 0x00248384u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248384: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248390
 * Original: 0x00248390 - 0x002483A6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248390(void)
{

loc_00248390: ;
    ecx = 0x322830;
    PUSH32(esp, 0x0024839Au); RECOMP_ABI_CALL(0x00071720u, sub_00071720); /* call 0x00071720 */

loc_0024839A: ;
    PUSH32(esp, 0x253320);
    PUSH32(esp, 0x002483A4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002483A4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002483B0
 * Original: 0x002483B0 - 0x002483C6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002483B0(void)
{

loc_002483B0: ;
    ecx = 0x3228B8;
    PUSH32(esp, 0x002483BAu); RECOMP_ABI_CALL(0x00071BA0u, sub_00071BA0); /* call 0x00071BA0 */

loc_002483BA: ;
    PUSH32(esp, 0x253330);
    PUSH32(esp, 0x002483C4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002483C4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002483D0
 * Original: 0x002483D0 - 0x002483E6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002483D0(void)
{

loc_002483D0: ;
    ecx = 0x322940;
    PUSH32(esp, 0x002483DAu); RECOMP_ABI_CALL(0x00071F10u, sub_00071F10); /* call 0x00071F10 */

loc_002483DA: ;
    PUSH32(esp, 0x253340);
    PUSH32(esp, 0x002483E4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002483E4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002483F0
 * Original: 0x002483F0 - 0x00248406 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002483F0(void)
{

loc_002483F0: ;
    ecx = 0x3229C8;
    PUSH32(esp, 0x002483FAu); RECOMP_ABI_CALL(0x00075D70u, sub_00075D70); /* call 0x00075D70 */

loc_002483FA: ;
    PUSH32(esp, 0x253350);
    PUSH32(esp, 0x00248404u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248404: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248410
 * Original: 0x00248410 - 0x00248426 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248410(void)
{

loc_00248410: ;
    ecx = 0x322A50;
    PUSH32(esp, 0x0024841Au); RECOMP_ABI_CALL(0x0007DE20u, sub_0007DE20); /* call 0x0007DE20 */

loc_0024841A: ;
    PUSH32(esp, 0x253360);
    PUSH32(esp, 0x00248424u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248424: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248430
 * Original: 0x00248430 - 0x00248446 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248430(void)
{

loc_00248430: ;
    ecx = 0x322AD8;
    PUSH32(esp, 0x0024843Au); RECOMP_ABI_CALL(0x00088080u, sub_00088080); /* call 0x00088080 */

loc_0024843A: ;
    PUSH32(esp, 0x253370);
    PUSH32(esp, 0x00248444u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248444: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248450
 * Original: 0x00248450 - 0x00248466 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248450(void)
{

loc_00248450: ;
    ecx = 0x322B60;
    PUSH32(esp, 0x0024845Au); RECOMP_ABI_CALL(0x0008A2A0u, sub_0008A2A0); /* call 0x0008A2A0 */

loc_0024845A: ;
    PUSH32(esp, 0x253380);
    PUSH32(esp, 0x00248464u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248464: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248470
 * Original: 0x00248470 - 0x00248486 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248470(void)
{

loc_00248470: ;
    ecx = 0x322BE8;
    PUSH32(esp, 0x0024847Au); RECOMP_ABI_CALL(0x0008A550u, sub_0008A550); /* call 0x0008A550 */

loc_0024847A: ;
    PUSH32(esp, 0x253390);
    PUSH32(esp, 0x00248484u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248484: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248490
 * Original: 0x00248490 - 0x002484A6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248490(void)
{

loc_00248490: ;
    ecx = 0x322C78;
    PUSH32(esp, 0x0024849Au); RECOMP_ABI_CALL(0x0008A550u, sub_0008A550); /* call 0x0008A550 */

loc_0024849A: ;
    PUSH32(esp, 0x2533A0);
    PUSH32(esp, 0x002484A4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002484A4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002484B0
 * Original: 0x002484B0 - 0x002484C6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002484B0(void)
{

loc_002484B0: ;
    ecx = 0x322D28;
    PUSH32(esp, 0x002484BAu); RECOMP_ABI_CALL(0x0008F8D0u, sub_0008F8D0); /* call 0x0008F8D0 */

loc_002484BA: ;
    PUSH32(esp, 0x2533B0);
    PUSH32(esp, 0x002484C4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002484C4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002484D0
 * Original: 0x002484D0 - 0x002484E0 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002484D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002484D0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x322DC0);
    PUSH32(esp, 0x002484DCu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_002484DC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002484E0
 * Original: 0x002484E0 - 0x00248500 (32 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002484E0(void)
{

loc_002484E0: ;
    ecx = 0x3232B0;
    PUSH32(esp, 0x002484EAu); RECOMP_ABI_CALL(0x000959D0u, sub_000959D0); /* call 0x000959D0 */

loc_002484EA: ;
    PUSH32(esp, 0x2533D0);
    PUSH32(esp, 0x002484F4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002484F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248500
 * Original: 0x00248500 - 0x00248516 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248500(void)
{

loc_00248500: ;
    ecx = 0x323338;
    PUSH32(esp, 0x0024850Au); RECOMP_ABI_CALL(0x00095D10u, sub_00095D10); /* call 0x00095D10 */

loc_0024850A: ;
    PUSH32(esp, 0x2533E0);
    PUSH32(esp, 0x00248514u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248514: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248520
 * Original: 0x00248520 - 0x00248536 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248520(void)
{

loc_00248520: ;
    ecx = 0x323498;
    PUSH32(esp, 0x0024852Au); RECOMP_ABI_CALL(0x00096E90u, sub_00096E90); /* call 0x00096E90 */

loc_0024852A: ;
    PUSH32(esp, 0x2533F0);
    PUSH32(esp, 0x00248534u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248534: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248540
 * Original: 0x00248540 - 0x00248556 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248540(void)
{

loc_00248540: ;
    ecx = 0x323528;
    PUSH32(esp, 0x0024854Au); RECOMP_ABI_CALL(0x00097440u, sub_00097440); /* call 0x00097440 */

loc_0024854A: ;
    PUSH32(esp, 0x253410);
    PUSH32(esp, 0x00248554u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248554: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248560
 * Original: 0x00248560 - 0x00248576 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248560(void)
{

loc_00248560: ;
    ecx = 0x3235B8;
    PUSH32(esp, 0x0024856Au); RECOMP_ABI_CALL(0x00096FE0u, sub_00096FE0); /* call 0x00096FE0 */

loc_0024856A: ;
    PUSH32(esp, 0x253400);
    PUSH32(esp, 0x00248574u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248574: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248580
 * Original: 0x00248580 - 0x00248591 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248580(void)
{

loc_00248580: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E6D94)); /* movss */
    MEMF(0x3235D4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002485A0
 * Original: 0x002485A0 - 0x002485B6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002485A0(void)
{

loc_002485A0: ;
    ecx = 0x3235E8;
    PUSH32(esp, 0x002485AAu); RECOMP_ABI_CALL(0x000A25C0u, sub_000A25C0); /* call 0x000A25C0 */

loc_002485AA: ;
    PUSH32(esp, 0x253420);
    PUSH32(esp, 0x002485B4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002485B4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002485C0
 * Original: 0x002485C0 - 0x002485D6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002485C0(void)
{

loc_002485C0: ;
    ecx = 0x323608;
    PUSH32(esp, 0x002485CAu); RECOMP_ABI_CALL(0x000A4580u, sub_000A4580); /* call 0x000A4580 */

loc_002485CA: ;
    PUSH32(esp, 0x253430);
    PUSH32(esp, 0x002485D4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002485D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002485E0
 * Original: 0x002485E0 - 0x002485F6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002485E0(void)
{

loc_002485E0: ;
    ecx = 0x323AD8;
    PUSH32(esp, 0x002485EAu); RECOMP_ABI_CALL(0x000A4890u, sub_000A4890); /* call 0x000A4890 */

loc_002485EA: ;
    PUSH32(esp, 0x253440);
    PUSH32(esp, 0x002485F4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002485F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248600
 * Original: 0x00248600 - 0x00248616 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248600(void)
{

loc_00248600: ;
    ecx = 0x323FB0;
    PUSH32(esp, 0x0024860Au); RECOMP_ABI_CALL(0x000AEE20u, sub_000AEE20); /* call 0x000AEE20 */

loc_0024860A: ;
    PUSH32(esp, 0x253450);
    PUSH32(esp, 0x00248614u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248614: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248620
 * Original: 0x00248620 - 0x00248636 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248620(void)
{

loc_00248620: ;
    ecx = 0x326A70;
    PUSH32(esp, 0x0024862Au); RECOMP_ABI_CALL(0x000AEDA0u, sub_000AEDA0); /* call 0x000AEDA0 */

loc_0024862A: ;
    PUSH32(esp, 0x253460);
    PUSH32(esp, 0x00248634u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248634: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248640
 * Original: 0x00248640 - 0x00248656 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248640(void)
{

loc_00248640: ;
    ecx = 0x329530;
    PUSH32(esp, 0x0024864Au); RECOMP_ABI_CALL(0x000AEDE0u, sub_000AEDE0); /* call 0x000AEDE0 */

loc_0024864A: ;
    PUSH32(esp, 0x253470);
    PUSH32(esp, 0x00248654u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248654: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248660
 * Original: 0x00248660 - 0x00248676 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248660(void)
{

loc_00248660: ;
    ecx = 0x32BFF0;
    PUSH32(esp, 0x0024866Au); RECOMP_ABI_CALL(0x000AEE60u, sub_000AEE60); /* call 0x000AEE60 */

loc_0024866A: ;
    PUSH32(esp, 0x253480);
    PUSH32(esp, 0x00248674u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248674: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248680
 * Original: 0x00248680 - 0x00248696 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248680(void)
{

loc_00248680: ;
    ecx = 0x32EAB0;
    PUSH32(esp, 0x0024868Au); RECOMP_ABI_CALL(0x000AEEA0u, sub_000AEEA0); /* call 0x000AEEA0 */

loc_0024868A: ;
    PUSH32(esp, 0x253490);
    PUSH32(esp, 0x00248694u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248694: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002486A0
 * Original: 0x002486A0 - 0x002486B6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002486A0(void)
{

loc_002486A0: ;
    ecx = 0x32EB30;
    PUSH32(esp, 0x002486AAu); RECOMP_ABI_CALL(0x000AEEF0u, sub_000AEEF0); /* call 0x000AEEF0 */

loc_002486AA: ;
    PUSH32(esp, 0x2534A0);
    PUSH32(esp, 0x002486B4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002486B4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002486C0
 * Original: 0x002486C0 - 0x002486E4 (36 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002486C0(void)
{

loc_002486C0: ;
    PUSH32(esp, 0x181000);
    PUSH32(esp, 0xAF5C0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x32EBB0);
    PUSH32(esp, 0x002486D8u); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_002486D8: ;
    PUSH32(esp, 0x2534B0);
    PUSH32(esp, 0x002486E2u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002486E2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002486F0
 * Original: 0x002486F0 - 0x00248714 (36 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002486F0(void)
{

loc_002486F0: ;
    PUSH32(esp, 0x181000);
    PUSH32(esp, 0xAF610);
    PUSH32(esp, 2);
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x32EC90);
    PUSH32(esp, 0x00248708u); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_00248708: ;
    PUSH32(esp, 0x2534D0);
    PUSH32(esp, 0x00248712u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248712: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248720
 * Original: 0x00248720 - 0x00248736 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248720(void)
{

loc_00248720: ;
    ecx = 0x32ED70;
    PUSH32(esp, 0x0024872Au); RECOMP_ABI_CALL(0x000AF650u, sub_000AF650); /* call 0x000AF650 */

loc_0024872A: ;
    PUSH32(esp, 0x2534F0);
    PUSH32(esp, 0x00248734u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248734: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248740
 * Original: 0x00248740 - 0x00248756 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248740(void)
{

loc_00248740: ;
    ecx = 0x32EDE0;
    PUSH32(esp, 0x0024874Au); RECOMP_ABI_CALL(0x000AF690u, sub_000AF690); /* call 0x000AF690 */

loc_0024874A: ;
    PUSH32(esp, 0x253500);
    PUSH32(esp, 0x00248754u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248754: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248760
 * Original: 0x00248760 - 0x002487DB (123 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248760(void)
{

loc_00248760: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x42700000);
    PUSH32(esp, 0x42700000);
    PUSH32(esp, 0x42700000);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0x303030);
    PUSH32(esp, 0x20303030);
    PUSH32(esp, 0x303030);
    PUSH32(esp, 0x404040);
    PUSH32(esp, 0x20404040);
    PUSH32(esp, 0x404040);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA7C73459u);
    ecx = 0x32EE50;
    PUSH32(esp, 0x002487CFu); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_002487CF: ;
    PUSH32(esp, 0x253510);
    PUSH32(esp, 0x002487D9u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002487D9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002487E0
 * Original: 0x002487E0 - 0x002487F6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002487E0(void)
{

loc_002487E0: ;
    ecx = 0x32EF00;
    PUSH32(esp, 0x002487EAu); RECOMP_ABI_CALL(0x000AF6D0u, sub_000AF6D0); /* call 0x000AF6D0 */

loc_002487EA: ;
    PUSH32(esp, 0x253520);
    PUSH32(esp, 0x002487F4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002487F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248800
 * Original: 0x00248800 - 0x00248875 (117 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248800(void)
{

loc_00248800: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x808080);
    PUSH32(esp, 0x10808080);
    PUSH32(esp, 0x808080);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA7C73459u);
    ecx = 0x32EF90;
    PUSH32(esp, 0x00248869u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00248869: ;
    PUSH32(esp, 0x253530);
    PUSH32(esp, 0x00248873u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248873: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248880
 * Original: 0x00248880 - 0x00248896 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248880(void)
{

loc_00248880: ;
    ecx = 0x32F040;
    PUSH32(esp, 0x0024888Au); RECOMP_ABI_CALL(0x000AFA70u, sub_000AFA70); /* call 0x000AFA70 */

loc_0024888A: ;
    PUSH32(esp, 0x253540);
    PUSH32(esp, 0x00248894u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248894: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002488A0
 * Original: 0x002488A0 - 0x00248921 (129 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002488A0(void)
{

loc_002488A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x505050);
    PUSH32(esp, 0x30505050);
    PUSH32(esp, 0x505050);
    PUSH32(esp, 0x505050);
    PUSH32(esp, 0x30505050);
    PUSH32(esp, 0x505050);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA7C73459u);
    ecx = 0x32F0D0;
    PUSH32(esp, 0x00248915u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00248915: ;
    PUSH32(esp, 0x253550);
    PUSH32(esp, 0x0024891Fu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0024891F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248930
 * Original: 0x00248930 - 0x002489AE (126 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248930(void)
{

loc_00248930: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xC1A00000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x505050);
    PUSH32(esp, 0x80505050u);
    PUSH32(esp, 0x80505050u);
    PUSH32(esp, 0x505050);
    PUSH32(esp, 0x80505050u);
    PUSH32(esp, 0x80505050u);
    PUSH32(esp, 0);
    PUSH32(esp, 0xB8BDEE9Au);
    ecx = 0x32F178;
    PUSH32(esp, 0x002489A2u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_002489A2: ;
    PUSH32(esp, 0x253560);
    PUSH32(esp, 0x002489ACu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002489AC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002489B0
 * Original: 0x002489B0 - 0x002489C6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002489B0(void)
{

loc_002489B0: ;
    ecx = 0x32F220;
    PUSH32(esp, 0x002489BAu); RECOMP_ABI_CALL(0x000AFE50u, sub_000AFE50); /* call 0x000AFE50 */

loc_002489BA: ;
    PUSH32(esp, 0x253570);
    PUSH32(esp, 0x002489C4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002489C4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002489D0
 * Original: 0x002489D0 - 0x00248A54 (132 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002489D0(void)
{

loc_002489D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xC1C80000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x808080);
    PUSH32(esp, 0x10808080);
    PUSH32(esp, 0x20808080);
    PUSH32(esp, 0x808080);
    PUSH32(esp, 0x10808080);
    PUSH32(esp, 0x20808080);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC272D7AFu);
    ecx = 0x32F2B0;
    PUSH32(esp, 0x00248A48u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00248A48: ;
    PUSH32(esp, 0x253580);
    PUSH32(esp, 0x00248A52u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248A52: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248A60
 * Original: 0x00248A60 - 0x00248ADB (123 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248A60(void)
{

loc_00248A60: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3FC00000);
    PUSH32(esp, 0x3FC00000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3FC00000);
    PUSH32(esp, 0x3FC00000);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x40206080);
    PUSH32(esp, 0x80FFFFFFu);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x40206080);
    PUSH32(esp, 0x80FFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0xF001EC09u);
    ecx = 0x32F6E0;
    PUSH32(esp, 0x00248ACFu); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00248ACF: ;
    PUSH32(esp, 0x253590);
    PUSH32(esp, 0x00248AD9u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248AD9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248AE0
 * Original: 0x00248AE0 - 0x00248B32 (82 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248AE0(void)
{

loc_00248AE0: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3FDF66F3);
    PUSH32(esp, 0x3D0EFA35);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CF5C28F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 5);
    PUSH32(esp, 0x32F6E0);
    ecx = 0x32F788;
    PUSH32(esp, 0x00248B26u); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_00248B26: ;
    PUSH32(esp, 0x2535A0);
    PUSH32(esp, 0x00248B30u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248B30: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248B40
 * Original: 0x00248B40 - 0x00248BBB (123 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248B40(void)
{

loc_00248B40: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x60102080);
    PUSH32(esp, 0x80FFFFFFu);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x60102080);
    PUSH32(esp, 0x80FFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2BB1FE0);
    ecx = 0x32F7C8;
    PUSH32(esp, 0x00248BAFu); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00248BAF: ;
    PUSH32(esp, 0x2535B0);
    PUSH32(esp, 0x00248BB9u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248BB9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248BC0
 * Original: 0x00248BC0 - 0x00248C0F (79 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248BC0(void)
{

loc_00248BC0: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3FDF66F3);
    PUSH32(esp, 0x3D0EFA35);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 8);
    PUSH32(esp, 0x32F7C8);
    ecx = 0x32F870;
    PUSH32(esp, 0x00248C03u); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_00248C03: ;
    PUSH32(esp, 0x2535C0);
    PUSH32(esp, 0x00248C0Du); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248C0D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248C10
 * Original: 0x00248C10 - 0x00248C8E (126 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248C10(void)
{

loc_00248C10: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x103060);
    PUSH32(esp, 0x40204080);
    PUSH32(esp, 0x80FFFFFFu);
    PUSH32(esp, 0x103060);
    PUSH32(esp, 0x40204080);
    PUSH32(esp, 0x80FFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2BB1FE0);
    ecx = 0x32F8B0;
    PUSH32(esp, 0x00248C82u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00248C82: ;
    PUSH32(esp, 0x2535D0);
    PUSH32(esp, 0x00248C8Cu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248C8C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248C90
 * Original: 0x00248C90 - 0x00248CD9 (73 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248C90(void)
{

loc_00248C90: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF000000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3FDF66F3);
    PUSH32(esp, 0x3D0EFA35);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x32F8B0);
    ecx = 0x32F958;
    PUSH32(esp, 0x00248CCDu); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_00248CCD: ;
    PUSH32(esp, 0x2535E0);
    PUSH32(esp, 0x00248CD7u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248CD7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248CE0
 * Original: 0x00248CE0 - 0x00248D58 (120 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248CE0(void)
{

loc_00248CE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x60507080);
    PUSH32(esp, 0x80507080u);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x60305080);
    PUSH32(esp, 0x80305080u);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2BB1FE0);
    ecx = 0x32F998;
    PUSH32(esp, 0x00248D4Cu); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00248D4C: ;
    PUSH32(esp, 0x2535F0);
    PUSH32(esp, 0x00248D56u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248D56: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248D60
 * Original: 0x00248D60 - 0x00248DAC (76 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248D60(void)
{

loc_00248D60: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3FDF66F3);
    PUSH32(esp, 0x3EB2B8C3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x32F998);
    ecx = 0x32FA40;
    PUSH32(esp, 0x00248DA0u); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_00248DA0: ;
    PUSH32(esp, 0x253600);
    PUSH32(esp, 0x00248DAAu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248DAA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248DB0
 * Original: 0x00248DB0 - 0x00248E25 (117 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248DB0(void)
{

loc_00248DB0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x603050C0);
    PUSH32(esp, 0x80507080u);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x601030C0);
    PUSH32(esp, 0x80305080u);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2BB1FE0);
    ecx = 0x32FA80;
    PUSH32(esp, 0x00248E19u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00248E19: ;
    PUSH32(esp, 0x253610);
    PUSH32(esp, 0x00248E23u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248E23: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248E30
 * Original: 0x00248E30 - 0x00248E76 (70 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248E30(void)
{

loc_00248E30: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F32B8C3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x32FA80);
    ecx = 0x32FB28;
    PUSH32(esp, 0x00248E6Au); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_00248E6A: ;
    PUSH32(esp, 0x253620);
    PUSH32(esp, 0x00248E74u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248E74: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248E80
 * Original: 0x00248E80 - 0x00248EFE (126 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248E80(void)
{

loc_00248E80: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x808080);
    PUSH32(esp, 0x50808080);
    PUSH32(esp, 0x80FFFFFFu);
    PUSH32(esp, 0x808080);
    PUSH32(esp, 0x50C0C0C0);
    PUSH32(esp, 0x80FFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC272D7AFu);
    ecx = 0x32FB68;
    PUSH32(esp, 0x00248EF2u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00248EF2: ;
    PUSH32(esp, 0x253630);
    PUSH32(esp, 0x00248EFCu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248EFC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248F00
 * Original: 0x00248F00 - 0x00248F4C (76 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248F00(void)
{

loc_00248F00: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, 0x3DB2B8C3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x32FB68);
    ecx = 0x32FC10;
    PUSH32(esp, 0x00248F40u); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_00248F40: ;
    PUSH32(esp, 0x253640);
    PUSH32(esp, 0x00248F4Au); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248F4A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248F50
 * Original: 0x00248F50 - 0x00248FCE (126 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248F50(void)
{

loc_00248F50: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC1A00000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x808060);
    PUSH32(esp, 0x30808060);
    PUSH32(esp, 0x60808080);
    PUSH32(esp, 0x808080);
    PUSH32(esp, 0x30808080);
    PUSH32(esp, 0x60808080);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC272D7AFu);
    ecx = 0x32FC50;
    PUSH32(esp, 0x00248FC2u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00248FC2: ;
    PUSH32(esp, 0x253650);
    PUSH32(esp, 0x00248FCCu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00248FCC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00248FD0
 * Original: 0x00248FD0 - 0x00249016 (70 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248FD0(void)
{

loc_00248FD0: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F060A92);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x78);
    PUSH32(esp, 0x32FC50);
    ecx = 0x32FCF8;
    PUSH32(esp, 0x0024900Au); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_0024900A: ;
    PUSH32(esp, 0x253660);
    PUSH32(esp, 0x00249014u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00249014: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00249020
 * Original: 0x00249020 - 0x00249098 (120 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249020(void)
{

loc_00249020: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x401030C0);
    PUSH32(esp, 0x80406080u);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x401030C0);
    PUSH32(esp, 0x80406080u);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2BB1FE0);
    ecx = 0x32FD38;
    PUSH32(esp, 0x0024908Cu); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_0024908C: ;
    PUSH32(esp, 0x253670);
    PUSH32(esp, 0x00249096u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00249096: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002490A0
 * Original: 0x002490A0 - 0x002490EF (79 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002490A0(void)
{

loc_002490A0: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3E567750);
    PUSH32(esp, 0xBD0EFA35u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x96);
    PUSH32(esp, 0x32FD38);
    ecx = 0x32FDE0;
    PUSH32(esp, 0x002490E3u); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_002490E3: ;
    PUSH32(esp, 0x253680);
    PUSH32(esp, 0x002490EDu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002490ED: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002490F0
 * Original: 0x002490F0 - 0x00249171 (129 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002490F0(void)
{

loc_002490F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0xBF000000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3FC00000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3FC00000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x808040);
    PUSH32(esp, 0x10808040);
    PUSH32(esp, 0x20808040);
    PUSH32(esp, 0x808040);
    PUSH32(esp, 0x10808040);
    PUSH32(esp, 0x20808040);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xA7C73459u);
    ecx = 0x32FE20;
    PUSH32(esp, 0x00249165u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00249165: ;
    PUSH32(esp, 0x253690);
    PUSH32(esp, 0x0024916Fu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0024916F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00249180
 * Original: 0x00249180 - 0x002491C9 (73 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249180(void)
{

loc_00249180: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3E32B8C3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x32FE20);
    ecx = 0x32FEC8;
    PUSH32(esp, 0x002491BDu); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_002491BD: ;
    PUSH32(esp, 0x2536A0);
    PUSH32(esp, 0x002491C7u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002491C7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002491D0
 * Original: 0x002491D0 - 0x00249248 (120 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002491D0(void)
{

loc_002491D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC1800000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF8733C1u);
    ecx = 0x32FF08;
    PUSH32(esp, 0x0024923Cu); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_0024923C: ;
    PUSH32(esp, 0x2536B0);
    PUSH32(esp, 0x00249246u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00249246: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00249250
 * Original: 0x00249250 - 0x0024929C (76 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249250(void)
{

loc_00249250: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3E32B8C3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x96);
    PUSH32(esp, 0x32FF08);
    ecx = 0x32FFB0;
    PUSH32(esp, 0x00249290u); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_00249290: ;
    PUSH32(esp, 0x2536C0);
    PUSH32(esp, 0x0024929Au); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0024929A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002492A0
 * Original: 0x002492A0 - 0x00249324 (132 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002492A0(void)
{

loc_002492A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xC0800000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x606060);
    PUSH32(esp, 0x40606060);
    PUSH32(esp, 0x808080);
    PUSH32(esp, 0x606060);
    PUSH32(esp, 0x40606060);
    PUSH32(esp, 0x808080);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA7C73459u);
    ecx = 0x32FFF0;
    PUSH32(esp, 0x00249318u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00249318: ;
    PUSH32(esp, 0x2536D0);
    PUSH32(esp, 0x00249322u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00249322: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00249330
 * Original: 0x00249330 - 0x00249376 (70 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249330(void)
{

loc_00249330: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x3E32B8C3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x32FFF0);
    ecx = 0x330098;
    PUSH32(esp, 0x0024936Au); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_0024936A: ;
    PUSH32(esp, 0x2536E0);
    PUSH32(esp, 0x00249374u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00249374: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00249380
 * Original: 0x00249380 - 0x002493F8 (120 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249380(void)
{

loc_00249380: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC1000000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0x303030);
    PUSH32(esp, 0x80303030u);
    PUSH32(esp, 0x80303030u);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA7C73459u);
    ecx = 0x3300D8;
    PUSH32(esp, 0x002493ECu); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_002493EC: ;
    PUSH32(esp, 0x2536F0);
    PUSH32(esp, 0x002493F6u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002493F6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00249400
 * Original: 0x00249400 - 0x00249446 (70 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249400(void)
{

loc_00249400: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF000000u);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3EB2B8C3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x3300D8);
    ecx = 0x330180;
    PUSH32(esp, 0x0024943Au); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_0024943A: ;
    PUSH32(esp, 0x253700);
    PUSH32(esp, 0x00249444u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00249444: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00249450
 * Original: 0x00249450 - 0x002494CB (123 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249450(void)
{

loc_00249450: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC1A00000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x101010);
    PUSH32(esp, 0x80101010u);
    PUSH32(esp, 0x80101010u);
    PUSH32(esp, 0x101010);
    PUSH32(esp, 0x80101010u);
    PUSH32(esp, 0x80101010u);
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF8733C1u);
    ecx = 0x3301C0;
    PUSH32(esp, 0x002494BFu); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_002494BF: ;
    PUSH32(esp, 0x253710);
    PUSH32(esp, 0x002494C9u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002494C9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002494D0
 * Original: 0x002494D0 - 0x00249516 (70 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002494D0(void)
{

loc_002494D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF000000u);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3F060A92);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x3301C0);
    ecx = 0x330268;
    PUSH32(esp, 0x0024950Au); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_0024950A: ;
    PUSH32(esp, 0x253720);
    PUSH32(esp, 0x00249514u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00249514: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00249520
 * Original: 0x00249520 - 0x0024959E (126 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249520(void)
{

loc_00249520: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC1A00000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0x202020);
    PUSH32(esp, 0x80202020u);
    PUSH32(esp, 0x80202020u);
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF8733C1u);
    ecx = 0x3302A8;
    PUSH32(esp, 0x00249592u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00249592: ;
    PUSH32(esp, 0x253730);
    PUSH32(esp, 0x0024959Cu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0024959C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002495A0
 * Original: 0x002495A0 - 0x002495E6 (70 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002495A0(void)
{

loc_002495A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF000000u);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x3F060A92);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x3302A8);
    ecx = 0x330350;
    PUSH32(esp, 0x002495DAu); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_002495DA: ;
    PUSH32(esp, 0x253740);
    PUSH32(esp, 0x002495E4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002495E4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002495F0
 * Original: 0x002495F0 - 0x00249671 (129 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002495F0(void)
{

loc_002495F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC1200000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x404020);
    PUSH32(esp, 0x80404040u);
    PUSH32(esp, 0x80606040u);
    PUSH32(esp, 0x404020);
    PUSH32(esp, 0x80404040u);
    PUSH32(esp, 0x80606040u);
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF8733C1u);
    ecx = 0x330390;
    PUSH32(esp, 0x00249665u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00249665: ;
    PUSH32(esp, 0x253750);
    PUSH32(esp, 0x0024966Fu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0024966F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00249680
 * Original: 0x00249680 - 0x002496C3 (67 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249680(void)
{

loc_00249680: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF000000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, 0x3E32B8C3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x330390);
    ecx = 0x330438;
    PUSH32(esp, 0x002496B7u); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_002496B7: ;
    PUSH32(esp, 0x253760);
    PUSH32(esp, 0x002496C1u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002496C1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002496D0
 * Original: 0x002496D0 - 0x0024974E (126 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002496D0(void)
{

loc_002496D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC1A00000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x404020);
    PUSH32(esp, 0x80404040u);
    PUSH32(esp, 0x80606040u);
    PUSH32(esp, 0x404020);
    PUSH32(esp, 0x80404040u);
    PUSH32(esp, 0x80606040u);
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF8733C1u);
    ecx = 0x330478;
    PUSH32(esp, 0x00249742u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00249742: ;
    PUSH32(esp, 0x253770);
    PUSH32(esp, 0x0024974Cu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0024974C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00249750
 * Original: 0x00249750 - 0x00249793 (67 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249750(void)
{

loc_00249750: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F060A92);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x330478);
    ecx = 0x330520;
    PUSH32(esp, 0x00249787u); RECOMP_ABI_CALL(0x00023B50u, sub_00023B50); /* call 0x00023B50 */

loc_00249787: ;
    PUSH32(esp, 0x253780);
    PUSH32(esp, 0x00249791u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00249791: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
