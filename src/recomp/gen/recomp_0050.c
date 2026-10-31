/**
 * Mercenaries - Recompiled code chunk 50
 * Functions: 250 (0x002428F8 - 0x002436A6)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002428F8
 * Original: 0x002428F8 - 0x00242902 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002428F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002428F8: ;
    eax = 0x306804;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242910
 * Original: 0x00242910 - 0x00242918 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242910: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00126EF0(); return; /* tail jmp 0x00126EF0 */

}

/**
 * sub_00242918
 * Original: 0x00242918 - 0x00242922 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242918(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242918: ;
    eax = 0x306828;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242930
 * Original: 0x00242930 - 0x00242938 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242930: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001BDE70(); return; /* tail jmp 0x001BDE70 */

}

/**
 * sub_00242938
 * Original: 0x00242938 - 0x00242942 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242938(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242938: ;
    eax = 0x30684C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242950
 * Original: 0x00242950 - 0x00242958 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242950: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00047670(); return; /* tail jmp 0x00047670 */

}

/**
 * sub_00242958
 * Original: 0x00242958 - 0x00242962 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242958(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242958: ;
    eax = 0x306870;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242970
 * Original: 0x00242970 - 0x00242978 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242970: ;
    ecx = MEM32(ebp + -52);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00242978
 * Original: 0x00242978 - 0x00242983 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242978(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242978: ;
    ecx = MEM32(ebp + -52);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDE70(); return; /* tail jmp 0x001BDE70 */

}

/**
 * sub_00242983
 * Original: 0x00242983 - 0x00242999 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242983(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242983: ;
    PUSH32(esp, 0x1BDEA0);
    PUSH32(esp, 3);
    PUSH32(esp, 0xC);
    eax = MEM32(ebp + -52);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242998u); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_00242998: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00242999
 * Original: 0x00242999 - 0x002429A3 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242999(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242999: ;
    eax = 0x3068A4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002429B0
 * Original: 0x002429B0 - 0x002429B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002429B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002429B0: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_001273C0(); return; /* tail jmp 0x001273C0 */

}

/**
 * sub_002429B8
 * Original: 0x002429B8 - 0x002429C2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002429B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002429B8: ;
    eax = 0x3068C8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002429D0
 * Original: 0x002429D0 - 0x002429D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002429D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002429D0: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_001273C0(); return; /* tail jmp 0x001273C0 */

}

/**
 * sub_002429D8
 * Original: 0x002429D8 - 0x002429E2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002429D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002429D8: ;
    eax = 0x3068EC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002429F0
 * Original: 0x002429F0 - 0x002429F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002429F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002429F0: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_001273C0(); return; /* tail jmp 0x001273C0 */

}

/**
 * sub_002429F8
 * Original: 0x002429F8 - 0x00242A02 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002429F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002429F8: ;
    eax = 0x306910;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242A10
 * Original: 0x00242A10 - 0x00242A18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242A10: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_001271F0(); return; /* tail jmp 0x001271F0 */

}

/**
 * sub_00242A18
 * Original: 0x00242A18 - 0x00242A20 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242A18(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242A18: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_001273C0(); return; /* tail jmp 0x001273C0 */

}

/**
 * sub_00242A20
 * Original: 0x00242A20 - 0x00242A28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242A20: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_001273C0(); return; /* tail jmp 0x001273C0 */

}

/**
 * sub_00242A28
 * Original: 0x00242A28 - 0x00242A32 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242A28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242A28: ;
    eax = 0x306944;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242A40
 * Original: 0x00242A40 - 0x00242A48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242A40: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00127320(); return; /* tail jmp 0x00127320 */

}

/**
 * sub_00242A48
 * Original: 0x00242A48 - 0x00242A53 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242A48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242A48: ;
    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_001273C0(); return; /* tail jmp 0x001273C0 */

}

/**
 * sub_00242A53
 * Original: 0x00242A53 - 0x00242A5D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242A53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242A53: ;
    eax = 0x306970;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242A60
 * Original: 0x00242A60 - 0x00242A68 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242A60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242A60: ;
    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00127320(); return; /* tail jmp 0x00127320 */

}

/**
 * sub_00242A68
 * Original: 0x00242A68 - 0x00242A72 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242A68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242A68: ;
    eax = 0x306994;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242A80
 * Original: 0x00242A80 - 0x00242A88 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242A80: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00242A88
 * Original: 0x00242A88 - 0x00242A93 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242A88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242A88: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDE70(); return; /* tail jmp 0x001BDE70 */

}

/**
 * sub_00242A93
 * Original: 0x00242A93 - 0x00242AA9 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242A93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242A93: ;
    PUSH32(esp, 0x1BDEA0);
    PUSH32(esp, 3);
    PUSH32(esp, 0xC);
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242AA8u); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_00242AA8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00242AA9
 * Original: 0x00242AA9 - 0x00242AB3 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242AA9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242AA9: ;
    eax = 0x3069C8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242AC0
 * Original: 0x00242AC0 - 0x00242AC8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242AC0: ;
    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_001273C0(); return; /* tail jmp 0x001273C0 */

}

/**
 * sub_00242AC8
 * Original: 0x00242AC8 - 0x00242AD2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242AC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242AC8: ;
    eax = 0x3069EC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242AE0
 * Original: 0x00242AE0 - 0x00242AE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242AE0: ;
    ecx = ebp + -92;
    g_seh_ebp = ebp; sub_001273C0(); return; /* tail jmp 0x001273C0 */

}

/**
 * sub_00242AE8
 * Original: 0x00242AE8 - 0x00242AF0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242AE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242AE8: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_001270C0(); return; /* tail jmp 0x001270C0 */

}

/**
 * sub_00242AF0
 * Original: 0x00242AF0 - 0x00242AF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242AF0: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_001270C0(); return; /* tail jmp 0x001270C0 */

}

/**
 * sub_00242AF8
 * Original: 0x00242AF8 - 0x00242B00 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242AF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242AF8: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_001270C0(); return; /* tail jmp 0x001270C0 */

}

/**
 * sub_00242B00
 * Original: 0x00242B00 - 0x00242B08 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242B00: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_001270C0(); return; /* tail jmp 0x001270C0 */

}

/**
 * sub_00242B08
 * Original: 0x00242B08 - 0x00242B12 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242B08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242B08: ;
    eax = 0x306A30;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242B20
 * Original: 0x00242B20 - 0x00242B2B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242B20: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242B29u); RECOMP_ABI_CALL(0x0012B170u, sub_0012B170); /* call 0x0012B170 */

loc_00242B29: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242B29
 * Original: 0x00242B29 - 0x00242B2B (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242B29(void)
{

loc_00242B29: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242B2B
 * Original: 0x00242B2B - 0x00242B35 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242B2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242B2B: ;
    eax = 0x306A54;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242B40
 * Original: 0x00242B40 - 0x00242B48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242B40: ;
    ecx = ebp + -84;
    g_seh_ebp = ebp; sub_00227FC0(); return; /* tail jmp 0x00227FC0 */

}

/**
 * sub_00242B48
 * Original: 0x00242B48 - 0x00242B52 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242B48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242B48: ;
    eax = 0x306A78;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242B60
 * Original: 0x00242B60 - 0x00242B6B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242B60: ;
    ecx = ebp + -3092;
    g_seh_ebp = ebp; sub_00227FC0(); return; /* tail jmp 0x00227FC0 */

}

/**
 * sub_00242B6B
 * Original: 0x00242B6B - 0x00242B76 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242B6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242B6B: ;
    ecx = ebp + -3168;
    g_seh_ebp = ebp; sub_0012BC00(); return; /* tail jmp 0x0012BC00 */

}

/**
 * sub_00242B76
 * Original: 0x00242B76 - 0x00242B80 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242B76(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242B76: ;
    eax = 0x306AA4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242B80
 * Original: 0x00242B80 - 0x00242B8E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242B80: ;
    eax = MEM32(ebp + -172);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242B8Cu); RECOMP_ABI_CALL(0x0012B150u, sub_0012B150); /* call 0x0012B150 */

loc_00242B8C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242B8E
 * Original: 0x00242B8E - 0x00242B9C (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242B8E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242B8E: ;
    eax = MEM32(ebp + -172);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242B9Au); RECOMP_ABI_CALL(0x0012B6B0u, sub_0012B6B0); /* call 0x0012B6B0 */

loc_00242B9A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242B9C
 * Original: 0x00242B9C - 0x00242BA6 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242B9C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242B9C: ;
    eax = 0x306AD0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242BB0
 * Original: 0x00242BB0 - 0x00242BB8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242BB0: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_00227FC0(); return; /* tail jmp 0x00227FC0 */

}

/**
 * sub_00242BB8
 * Original: 0x00242BB8 - 0x00242BC2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242BB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242BB8: ;
    eax = 0x306AF4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242BD0
 * Original: 0x00242BD0 - 0x00242BDB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242BD0: ;
    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00242BDB
 * Original: 0x00242BDB - 0x00242BE3 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242BDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242BDB: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_0012B6A0(); return; /* tail jmp 0x0012B6A0 */

}

/**
 * sub_00242BE3
 * Original: 0x00242BE3 - 0x00242BED (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242BE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242BE3: ;
    eax = 0x306B20;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242BF0
 * Original: 0x00242BF0 - 0x00242BFB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242BF0: ;
    ecx = ebp + -344;
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00242BFB
 * Original: 0x00242BFB - 0x00242C06 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242BFB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242BFB: ;
    ecx = ebp + -388;
    g_seh_ebp = ebp; sub_0012B250(); return; /* tail jmp 0x0012B250 */

}

/**
 * sub_00242C06
 * Original: 0x00242C06 - 0x00242C11 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242C06(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242C06: ;
    ecx = ebp + -240;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00242C11
 * Original: 0x00242C11 - 0x00242C1C (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242C11(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242C11: ;
    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00242C1C
 * Original: 0x00242C1C - 0x00242C26 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242C1C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242C1C: ;
    eax = 0x306B5C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242C30
 * Original: 0x00242C30 - 0x00242C3B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242C30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242C30: ;
    ecx = ebp + -148;
    g_seh_ebp = ebp; sub_00018AD0(); return; /* tail jmp 0x00018AD0 */

}

/**
 * sub_00242C3B
 * Original: 0x00242C3B - 0x00242C45 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242C3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242C3B: ;
    eax = 0x306B80;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242C50
 * Original: 0x00242C50 - 0x00242C5B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242C50: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00242C5B
 * Original: 0x00242C5B - 0x00242C66 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242C5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242C5B: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDE70(); return; /* tail jmp 0x001BDE70 */

}

/**
 * sub_00242C66
 * Original: 0x00242C66 - 0x00242C70 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242C66(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242C66: ;
    eax = 0x306BAC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242C70
 * Original: 0x00242C70 - 0x00242C78 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242C70: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_001BDE70(); return; /* tail jmp 0x001BDE70 */

}

/**
 * sub_00242C78
 * Original: 0x00242C78 - 0x00242C83 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242C78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242C78: ;
    eax = MEM32(ebp + -56);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242C81u); RECOMP_ABI_CALL(0x0012B150u, sub_0012B150); /* call 0x0012B150 */

loc_00242C81: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242C83
 * Original: 0x00242C83 - 0x00242C8D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242C83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242C83: ;
    eax = 0x306BD8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242C90
 * Original: 0x00242C90 - 0x00242C98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242C90: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_0012DA80(); return; /* tail jmp 0x0012DA80 */

}

/**
 * sub_00242C98
 * Original: 0x00242C98 - 0x00242CA0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242C98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242C98: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_001BDE70(); return; /* tail jmp 0x001BDE70 */

}

/**
 * sub_00242CA0
 * Original: 0x00242CA0 - 0x00242CA8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242CA0: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00242CA8
 * Original: 0x00242CA8 - 0x00242CB0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242CA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242CA8: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_00047670(); return; /* tail jmp 0x00047670 */

}

/**
 * sub_00242CB0
 * Original: 0x00242CB0 - 0x00242CBB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242CB0: ;
    eax = MEM32(ebp + -84);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242CB9u); RECOMP_ABI_CALL(0x0012B150u, sub_0012B150); /* call 0x0012B150 */

loc_00242CB9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242CBB
 * Original: 0x00242CBB - 0x00242CC5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242CBB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242CBB: ;
    eax = 0x306C1C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242CD0
 * Original: 0x00242CD0 - 0x00242CDB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242CD0: ;
    ecx = ebp + -1056;
    g_seh_ebp = ebp; sub_001C2A20(); return; /* tail jmp 0x001C2A20 */

}

/**
 * sub_00242CDB
 * Original: 0x00242CDB - 0x00242CE5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242CDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242CDB: ;
    eax = 0x306C40;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242CF0
 * Original: 0x00242CF0 - 0x00242CFB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242CF0: ;
    ecx = ebp + -1056;
    g_seh_ebp = ebp; sub_001C2A20(); return; /* tail jmp 0x001C2A20 */

}

/**
 * sub_00242CFB
 * Original: 0x00242CFB - 0x00242D06 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242CFB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242CFB: ;
    ecx = ebp + -1184;
    g_seh_ebp = ebp; sub_001CC0E0(); return; /* tail jmp 0x001CC0E0 */

}

/**
 * sub_00242D06
 * Original: 0x00242D06 - 0x00242D10 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242D06(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242D06: ;
    eax = 0x306C6C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242D10
 * Original: 0x00242D10 - 0x00242D1B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242D10: ;
    ecx = ebp + -1056;
    g_seh_ebp = ebp; sub_001C2A20(); return; /* tail jmp 0x001C2A20 */

}

/**
 * sub_00242D1B
 * Original: 0x00242D1B - 0x00242D26 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242D1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242D1B: ;
    ecx = ebp + -1232;
    g_seh_ebp = ebp; sub_001CC0E0(); return; /* tail jmp 0x001CC0E0 */

}

/**
 * sub_00242D26
 * Original: 0x00242D26 - 0x00242D30 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242D26(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242D26: ;
    eax = 0x306C98;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242D30
 * Original: 0x00242D30 - 0x00242D3B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242D30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242D30: ;
    ecx = ebp + -1056;
    g_seh_ebp = ebp; sub_001C2A20(); return; /* tail jmp 0x001C2A20 */

}

/**
 * sub_00242D3B
 * Original: 0x00242D3B - 0x00242D46 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242D3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242D3B: ;
    ecx = ebp + -1200;
    g_seh_ebp = ebp; sub_001CC0E0(); return; /* tail jmp 0x001CC0E0 */

}

/**
 * sub_00242D46
 * Original: 0x00242D46 - 0x00242D50 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242D46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242D46: ;
    eax = 0x306CC4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242D50
 * Original: 0x00242D50 - 0x00242D5E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242D50: ;
    eax = MEM32(ebp + -304);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242D5Cu); RECOMP_ABI_CALL(0x0012B150u, sub_0012B150); /* call 0x0012B150 */

loc_00242D5C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242D5E
 * Original: 0x00242D5E - 0x00242D6C (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242D5E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242D5E: ;
    eax = MEM32(ebp + -308);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242D6Au); RECOMP_ABI_CALL(0x0012B150u, sub_0012B150); /* call 0x0012B150 */

loc_00242D6A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242D6C
 * Original: 0x00242D6C - 0x00242D7A (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242D6C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242D6C: ;
    eax = MEM32(ebp + -304);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242D78u); RECOMP_ABI_CALL(0x0012B150u, sub_0012B150); /* call 0x0012B150 */

loc_00242D78: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242D7A
 * Original: 0x00242D7A - 0x00242D88 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242D7A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242D7A: ;
    eax = MEM32(ebp + -304);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242D86u); RECOMP_ABI_CALL(0x0012B150u, sub_0012B150); /* call 0x0012B150 */

loc_00242D86: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242D88
 * Original: 0x00242D88 - 0x00242D92 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242D88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242D88: ;
    eax = 0x306D00;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242DA0
 * Original: 0x00242DA0 - 0x00242DAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242DA0: ;
    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_0012B1F0(); return; /* tail jmp 0x0012B1F0 */

}

/**
 * sub_00242DAB
 * Original: 0x00242DAB - 0x00242DB9 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242DAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242DAB: ;
    eax = MEM32(ebp + -212);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242DB7u); RECOMP_ABI_CALL(0x0012B170u, sub_0012B170); /* call 0x0012B170 */

loc_00242DB7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242DB9
 * Original: 0x00242DB9 - 0x00242DC3 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242DB9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242DB9: ;
    eax = 0x306D60;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242DD0
 * Original: 0x00242DD0 - 0x00242DDB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242DD0: ;
    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_0012B1F0(); return; /* tail jmp 0x0012B1F0 */

}

/**
 * sub_00242DDB
 * Original: 0x00242DDB - 0x00242DE9 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242DDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242DDB: ;
    eax = MEM32(ebp + -308);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242DE7u); RECOMP_ABI_CALL(0x0012B150u, sub_0012B150); /* call 0x0012B150 */

loc_00242DE7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242DE9
 * Original: 0x00242DE9 - 0x00242DF7 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242DE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242DE9: ;
    eax = MEM32(ebp + -308);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242DF5u); RECOMP_ABI_CALL(0x0012B170u, sub_0012B170); /* call 0x0012B170 */

loc_00242DF5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242DF7
 * Original: 0x00242DF7 - 0x00242E01 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242DF7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242DF7: ;
    eax = 0x306D34;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242E10
 * Original: 0x00242E10 - 0x00242E1B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242E10: ;
    ecx = ebp + -192;
    g_seh_ebp = ebp; sub_0012B1F0(); return; /* tail jmp 0x0012B1F0 */

}

/**
 * sub_00242E1B
 * Original: 0x00242E1B - 0x00242E29 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242E1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242E1B: ;
    eax = MEM32(ebp + -196);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242E27u); RECOMP_ABI_CALL(0x0012B6D0u, sub_0012B6D0); /* call 0x0012B6D0 */

loc_00242E27: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242E27
 * Original: 0x00242E27 - 0x00242E29 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242E27(void)
{

loc_00242E27: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242E29
 * Original: 0x00242E29 - 0x00242E33 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242E29(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242E29: ;
    eax = 0x306D8C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242E40
 * Original: 0x00242E40 - 0x00242E48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242E40: ;
    ecx = ebp + -92;
    g_seh_ebp = ebp; sub_00208DF0(); return; /* tail jmp 0x00208DF0 */

}

/**
 * sub_00242E48
 * Original: 0x00242E48 - 0x00242E52 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242E48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242E48: ;
    eax = 0x306DB0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242E60
 * Original: 0x00242E60 - 0x00242E68 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242E60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242E60: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_00227FC0(); return; /* tail jmp 0x00227FC0 */

}

/**
 * sub_00242E68
 * Original: 0x00242E68 - 0x00242E70 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242E68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242E68: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_00227FC0(); return; /* tail jmp 0x00227FC0 */

}

/**
 * sub_00242E70
 * Original: 0x00242E70 - 0x00242E7A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242E70: ;
    eax = 0x306DDC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242E80
 * Original: 0x00242E80 - 0x00242E8E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242E80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242E80: ;
    eax = MEM32(ebp + -676);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242E8Cu); RECOMP_ABI_CALL(0x0012B150u, sub_0012B150); /* call 0x0012B150 */

loc_00242E8C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242E8E
 * Original: 0x00242E8E - 0x00242E99 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242E8E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242E8E: ;
    ecx = ebp + -272;
    g_seh_ebp = ebp; sub_0012B1F0(); return; /* tail jmp 0x0012B1F0 */

}

/**
 * sub_00242E99
 * Original: 0x00242E99 - 0x00242EA3 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242E99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242E99: ;
    eax = 0x306E08;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242EB0
 * Original: 0x00242EB0 - 0x00242EBB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242EB0: ;
    eax = MEM32(ebp + -32);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242EB9u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00242EB9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242EBB
 * Original: 0x00242EBB - 0x00242EC5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242EBB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242EBB: ;
    eax = 0x306E2C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242ED0
 * Original: 0x00242ED0 - 0x00242ED8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242ED0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00242ED8
 * Original: 0x00242ED8 - 0x00242EE2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242ED8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242ED8: ;
    eax = 0x306E50;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242EF0
 * Original: 0x00242EF0 - 0x00242EFB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242EF0: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242EF9u); RECOMP_ABI_CALL(0x00137BA0u, sub_00137BA0); /* call 0x00137BA0 */

loc_00242EF9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242EFB
 * Original: 0x00242EFB - 0x00242F06 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242EFB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242EFB: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242F04u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00242F04: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242F06
 * Original: 0x00242F06 - 0x00242F11 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242F06(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242F06: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242F0Fu); RECOMP_ABI_CALL(0x00132C60u, sub_00132C60); /* call 0x00132C60 */

loc_00242F0F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242F11
 * Original: 0x00242F11 - 0x00242F1B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242F11(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242F11: ;
    eax = 0x306E84;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242F20
 * Original: 0x00242F20 - 0x00242F28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242F20: ;
    ecx = ebp + -76;
    g_seh_ebp = ebp; sub_00227FC0(); return; /* tail jmp 0x00227FC0 */

}

/**
 * sub_00242F28
 * Original: 0x00242F28 - 0x00242F32 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242F28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242F28: ;
    eax = 0x306EA8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242F40
 * Original: 0x00242F40 - 0x00242F4B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242F40: ;
    ecx = ebp + -368;
    g_seh_ebp = ebp; sub_00018DF0(); return; /* tail jmp 0x00018DF0 */

}

/**
 * sub_00242F4B
 * Original: 0x00242F4B - 0x00242F59 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242F4B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242F4B: ;
    eax = MEM32(ebp + -696);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242F57u); RECOMP_ABI_CALL(0x00137BA0u, sub_00137BA0); /* call 0x00137BA0 */

loc_00242F57: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242F59
 * Original: 0x00242F59 - 0x00242F67 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242F59(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242F59: ;
    eax = MEM32(ebp + -696);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242F65u); RECOMP_ABI_CALL(0x00137BA0u, sub_00137BA0); /* call 0x00137BA0 */

loc_00242F65: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242F67
 * Original: 0x00242F67 - 0x00242F71 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242F67(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242F67: ;
    eax = 0x306EDC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242F80
 * Original: 0x00242F80 - 0x00242F88 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242F80: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00242F88
 * Original: 0x00242F88 - 0x00242F92 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242F88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242F88: ;
    eax = 0x306F00;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00242FA0
 * Original: 0x00242FA0 - 0x00242FAB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242FA0: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242FA9u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00242FA9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242FAB
 * Original: 0x00242FAB - 0x00242FB6 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242FAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242FAB: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242FB4u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00242FB4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242FB6
 * Original: 0x00242FB6 - 0x00242FC1 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242FB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242FB6: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242FBFu); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00242FBF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242FC1
 * Original: 0x00242FC1 - 0x00242FCC (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242FC1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242FC1: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242FCAu); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00242FCA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242FCC
 * Original: 0x00242FCC - 0x00242FD7 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242FCC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242FCC: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242FD5u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00242FD5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242FD7
 * Original: 0x00242FD7 - 0x00242FE2 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242FD7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242FD7: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242FE0u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00242FE0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242FE2
 * Original: 0x00242FE2 - 0x00242FED (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242FE2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242FE2: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242FEBu); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00242FEB: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242FED
 * Original: 0x00242FED - 0x00242FF8 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242FED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242FED: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00242FF6u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00242FF6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00242FF8
 * Original: 0x00242FF8 - 0x00243003 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242FF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242FF8: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00243001u); RECOMP_ABI_CALL(0x001362F0u, sub_001362F0); /* call 0x001362F0 */

loc_00243001: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00243003
 * Original: 0x00243003 - 0x0024300D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243003(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243003: ;
    eax = 0x306F64;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243010
 * Original: 0x00243010 - 0x00243018 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243010: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00047F30(); return; /* tail jmp 0x00047F30 */

}

/**
 * sub_00243018
 * Original: 0x00243018 - 0x00243023 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243018(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243018: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000476A0(); return; /* tail jmp 0x000476A0 */

}

/**
 * sub_00243023
 * Original: 0x00243023 - 0x00243031 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243023(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243023: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xAC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000476D0(); return; /* tail jmp 0x000476D0 */

}

/**
 * sub_00243031
 * Original: 0x00243031 - 0x0024303F (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243031(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243031: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xDC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00047760(); return; /* tail jmp 0x00047760 */

}

/**
 * sub_0024303F
 * Original: 0x0024303F - 0x0024304D (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024303F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024303F: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x108;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00047F40(); return; /* tail jmp 0x00047F40 */

}

/**
 * sub_0024304D
 * Original: 0x0024304D - 0x0024305B (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024304D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024304D: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x17C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x17C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00047810(); return; /* tail jmp 0x00047810 */

}

/**
 * sub_0024305B
 * Original: 0x0024305B - 0x00243065 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024305B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024305B: ;
    eax = 0x306FB0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243070
 * Original: 0x00243070 - 0x00243078 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243070: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00243078
 * Original: 0x00243078 - 0x00243082 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243078(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243078: ;
    eax = 0x306FD4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243090
 * Original: 0x00243090 - 0x0024309E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243090: ;
    eax = MEM32(ebp + -244);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024309Cu); RECOMP_ABI_CALL(0x00015D20u, sub_00015D20); /* call 0x00015D20 */

loc_0024309C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024309E
 * Original: 0x0024309E - 0x002430AC (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024309E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024309E: ;
    eax = MEM32(ebp + -244);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002430AAu); RECOMP_ABI_CALL(0x00015D20u, sub_00015D20); /* call 0x00015D20 */

loc_002430AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002430AC
 * Original: 0x002430AC - 0x002430BA (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002430AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002430AC: ;
    eax = MEM32(ebp + -244);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002430B8u); RECOMP_ABI_CALL(0x00137BA0u, sub_00137BA0); /* call 0x00137BA0 */

loc_002430B8: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002430BA
 * Original: 0x002430BA - 0x002430C4 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002430BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002430BA: ;
    eax = 0x307008;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002430D0
 * Original: 0x002430D0 - 0x002430DE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002430D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002430D0: ;
    eax = MEM32(ebp + -164);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002430DCu); RECOMP_ABI_CALL(0x00015D20u, sub_00015D20); /* call 0x00015D20 */

loc_002430DC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002430DE
 * Original: 0x002430DE - 0x002430E8 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002430DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002430DE: ;
    eax = 0x30702C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002430F0
 * Original: 0x002430F0 - 0x002430FE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002430F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002430F0: ;
    eax = MEM32(ebp + -276);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002430FCu); RECOMP_ABI_CALL(0x00015D20u, sub_00015D20); /* call 0x00015D20 */

loc_002430FC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002430FE
 * Original: 0x002430FE - 0x00243108 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002430FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002430FE: ;
    eax = 0x307050;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243110
 * Original: 0x00243110 - 0x0024311E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243110: ;
    eax = MEM32(ebp + -148);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024311Cu); RECOMP_ABI_CALL(0x00015D20u, sub_00015D20); /* call 0x00015D20 */

loc_0024311C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024311E
 * Original: 0x0024311E - 0x0024312C (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024311E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024311E: ;
    eax = MEM32(ebp + -148);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024312Au); RECOMP_ABI_CALL(0x00015D20u, sub_00015D20); /* call 0x00015D20 */

loc_0024312A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024312C
 * Original: 0x0024312C - 0x0024313A (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024312C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024312C: ;
    eax = MEM32(ebp + -148);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00243138u); RECOMP_ABI_CALL(0x00137BA0u, sub_00137BA0); /* call 0x00137BA0 */

loc_00243138: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024313A
 * Original: 0x0024313A - 0x00243144 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024313A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024313A: ;
    eax = 0x307084;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243150
 * Original: 0x00243150 - 0x0024315B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243150: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00243159u); RECOMP_ABI_CALL(0x00137BA0u, sub_00137BA0); /* call 0x00137BA0 */

loc_00243159: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024315B
 * Original: 0x0024315B - 0x00243166 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024315B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024315B: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00243164u); RECOMP_ABI_CALL(0x00132C60u, sub_00132C60); /* call 0x00132C60 */

loc_00243164: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00243166
 * Original: 0x00243166 - 0x00243170 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243166(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243166: ;
    eax = 0x3070B0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243170
 * Original: 0x00243170 - 0x00243178 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243170: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00243178
 * Original: 0x00243178 - 0x00243182 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243178(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243178: ;
    eax = 0x3070D4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243190
 * Original: 0x00243190 - 0x0024319B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243190: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00243199u); RECOMP_ABI_CALL(0x00137BA0u, sub_00137BA0); /* call 0x00137BA0 */

loc_00243199: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024319B
 * Original: 0x0024319B - 0x002431A6 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024319B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024319B: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002431A4u); RECOMP_ABI_CALL(0x00132C60u, sub_00132C60); /* call 0x00132C60 */

loc_002431A4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002431A6
 * Original: 0x002431A6 - 0x002431B0 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002431A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002431A6: ;
    eax = 0x307100;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002431B0
 * Original: 0x002431B0 - 0x002431BE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002431B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002431B0: ;
    eax = MEM32(ebp + -172);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002431BCu); RECOMP_ABI_CALL(0x00137BA0u, sub_00137BA0); /* call 0x00137BA0 */

loc_002431BC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002431BE
 * Original: 0x002431BE - 0x002431CC (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002431BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002431BE: ;
    eax = MEM32(ebp + -172);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002431CAu); RECOMP_ABI_CALL(0x00137BA0u, sub_00137BA0); /* call 0x00137BA0 */

loc_002431CA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002431CC
 * Original: 0x002431CC - 0x002431D6 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002431CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002431CC: ;
    eax = 0x30712C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002431E0
 * Original: 0x002431E0 - 0x002431EE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002431E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002431E0: ;
    eax = MEM32(ebp + -236);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002431ECu); RECOMP_ABI_CALL(0x00137BA0u, sub_00137BA0); /* call 0x00137BA0 */

loc_002431EC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002431EE
 * Original: 0x002431EE - 0x002431FC (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002431EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002431EE: ;
    eax = MEM32(ebp + -188);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002431FAu); RECOMP_ABI_CALL(0x00137BA0u, sub_00137BA0); /* call 0x00137BA0 */

loc_002431FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002431FC
 * Original: 0x002431FC - 0x00243206 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002431FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002431FC: ;
    eax = 0x307158;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243210
 * Original: 0x00243210 - 0x00243218 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243210: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00126EF0(); return; /* tail jmp 0x00126EF0 */

}

/**
 * sub_00243218
 * Original: 0x00243218 - 0x00243222 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243218(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243218: ;
    eax = 0x30717C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243230
 * Original: 0x00243230 - 0x00243238 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243230: ;
    ecx = ebp + -124;
    g_seh_ebp = ebp; sub_00018AD0(); return; /* tail jmp 0x00018AD0 */

}

/**
 * sub_00243238
 * Original: 0x00243238 - 0x00243242 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243238(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243238: ;
    eax = 0x3071A0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243250
 * Original: 0x00243250 - 0x00243258 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243250: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_00209040(); return; /* tail jmp 0x00209040 */

}

/**
 * sub_00243258
 * Original: 0x00243258 - 0x00243262 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243258(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243258: ;
    eax = 0x3071C4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243270
 * Original: 0x00243270 - 0x00243278 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243270: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_0012B1F0(); return; /* tail jmp 0x0012B1F0 */

}

/**
 * sub_00243278
 * Original: 0x00243278 - 0x00243286 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243278(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243278: ;
    eax = MEM32(ebp + -244);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00243284u); RECOMP_ABI_CALL(0x0012B6D0u, sub_0012B6D0); /* call 0x0012B6D0 */

loc_00243284: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00243286
 * Original: 0x00243286 - 0x00243294 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243286(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243286: ;
    eax = MEM32(ebp + -244);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00243292u); RECOMP_ABI_CALL(0x0013C8B0u, sub_0013C8B0); /* call 0x0013C8B0 */

loc_00243292: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00243294
 * Original: 0x00243294 - 0x0024329E (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243294(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243294: ;
    eax = 0x3071F8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002432A0
 * Original: 0x002432A0 - 0x002432A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002432A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002432A0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_002432A8
 * Original: 0x002432A8 - 0x002432B2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002432A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002432A8: ;
    eax = 0x30721C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002432C0
 * Original: 0x002432C0 - 0x002432CB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002432C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002432C0: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002432C9u); RECOMP_ABI_CALL(0x00137BA0u, sub_00137BA0); /* call 0x00137BA0 */

loc_002432C9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002432CB
 * Original: 0x002432CB - 0x002432D6 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002432CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002432CB: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002432D4u); RECOMP_ABI_CALL(0x00132C60u, sub_00132C60); /* call 0x00132C60 */

loc_002432D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002432D6
 * Original: 0x002432D6 - 0x002432E0 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002432D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002432D6: ;
    eax = 0x307248;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002432E0
 * Original: 0x002432E0 - 0x002432EB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002432E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002432E0: ;
    eax = MEM32(ebp + -52);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002432E9u); RECOMP_ABI_CALL(0x00137BA0u, sub_00137BA0); /* call 0x00137BA0 */

loc_002432E9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002432EB
 * Original: 0x002432EB - 0x002432F5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002432EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002432EB: ;
    eax = 0x30726C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243300
 * Original: 0x00243300 - 0x00243308 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243300: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00126EF0(); return; /* tail jmp 0x00126EF0 */

}

/**
 * sub_00243308
 * Original: 0x00243308 - 0x00243312 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243308(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243308: ;
    eax = 0x307290;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243320
 * Original: 0x00243320 - 0x00243339 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243320: ;
    PUSH32(esp, 0x18AD0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x88);
    eax = ebp + -556;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00243338u); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_00243338: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00243339
 * Original: 0x00243339 - 0x00243343 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243339(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243339: ;
    eax = 0x3072B4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243350
 * Original: 0x00243350 - 0x00243358 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243350: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00243358
 * Original: 0x00243358 - 0x00243362 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243358(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243358: ;
    eax = 0x3072D8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243370
 * Original: 0x00243370 - 0x0024337B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243370: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00243379u); RECOMP_ABI_CALL(0x00137BA0u, sub_00137BA0); /* call 0x00137BA0 */

loc_00243379: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024337B
 * Original: 0x0024337B - 0x00243386 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024337B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024337B: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00243384u); RECOMP_ABI_CALL(0x00132C60u, sub_00132C60); /* call 0x00132C60 */

loc_00243384: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00243386
 * Original: 0x00243386 - 0x00243390 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243386(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243386: ;
    eax = 0x307304;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243390
 * Original: 0x00243390 - 0x0024339E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243390: ;
    eax = MEM32(ebp + -436);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024339Cu); RECOMP_ABI_CALL(0x00137BA0u, sub_00137BA0); /* call 0x00137BA0 */

loc_0024339C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024339E
 * Original: 0x0024339E - 0x002433A8 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024339E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024339E: ;
    eax = 0x307328;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002433B0
 * Original: 0x002433B0 - 0x002433C6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002433B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002433B0: ;
    PUSH32(esp, 0x29C40);
    PUSH32(esp, 8);
    PUSH32(esp, 0xD0);
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002433C5u); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_002433C5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002433C6
 * Original: 0x002433C6 - 0x002433D4 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002433C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002433C6: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x694) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x694;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00029C50(); return; /* tail jmp 0x00029C50 */

}

/**
 * sub_002433D4
 * Original: 0x002433D4 - 0x002433E2 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002433D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002433D4: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x69C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x69C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001F3C60(); return; /* tail jmp 0x001F3C60 */

}

/**
 * sub_002433E2
 * Original: 0x002433E2 - 0x002433EC (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002433E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002433E2: ;
    eax = 0x30735C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002433F0
 * Original: 0x002433F0 - 0x002433F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002433F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002433F0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001FA0A0(); return; /* tail jmp 0x001FA0A0 */

}

/**
 * sub_002433F8
 * Original: 0x002433F8 - 0x00243403 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002433F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002433F8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00029C60(); return; /* tail jmp 0x00029C60 */

}

/**
 * sub_00243403
 * Original: 0x00243403 - 0x0024340D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243403(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243403: ;
    eax = 0x307388;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243410
 * Original: 0x00243410 - 0x0024341B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243410: ;
    ecx = ebp + -192;
    g_seh_ebp = ebp; sub_00018AD0(); return; /* tail jmp 0x00018AD0 */

}

/**
 * sub_0024341B
 * Original: 0x0024341B - 0x00243425 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024341B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024341B: ;
    eax = 0x3073AC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243430
 * Original: 0x00243430 - 0x0024343B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243430: ;
    ecx = MEM32(ebp + -132);
    g_seh_ebp = ebp; sub_001C5B90(); return; /* tail jmp 0x001C5B90 */

}

/**
 * sub_0024343B
 * Original: 0x0024343B - 0x00243445 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024343B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024343B: ;
    eax = 0x3073D0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243450
 * Original: 0x00243450 - 0x0024345B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243450: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00243459u); RECOMP_ABI_CALL(0x00015D20u, sub_00015D20); /* call 0x00015D20 */

loc_00243459: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024345B
 * Original: 0x0024345B - 0x00243466 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024345B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024345B: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00243464u); RECOMP_ABI_CALL(0x00015D20u, sub_00015D20); /* call 0x00015D20 */

loc_00243464: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00243466
 * Original: 0x00243466 - 0x00243470 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243466(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243466: ;
    eax = 0x3073FC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243470
 * Original: 0x00243470 - 0x0024347B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243470: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00243479u); RECOMP_ABI_CALL(0x00015D20u, sub_00015D20); /* call 0x00015D20 */

loc_00243479: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024347B
 * Original: 0x0024347B - 0x00243485 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024347B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024347B: ;
    eax = 0x307420;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243490
 * Original: 0x00243490 - 0x0024349B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243490: ;
    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_0012B1F0(); return; /* tail jmp 0x0012B1F0 */

}

/**
 * sub_0024349B
 * Original: 0x0024349B - 0x002434A9 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024349B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024349B: ;
    eax = MEM32(ebp + -452);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002434A7u); RECOMP_ABI_CALL(0x0012B150u, sub_0012B150); /* call 0x0012B150 */

loc_002434A7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002434A9
 * Original: 0x002434A9 - 0x002434B7 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002434A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002434A9: ;
    eax = MEM32(ebp + -404);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002434B5u); RECOMP_ABI_CALL(0x0012B170u, sub_0012B170); /* call 0x0012B170 */

loc_002434B5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002434B7
 * Original: 0x002434B7 - 0x002434C1 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002434B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002434B7: ;
    eax = 0x307454;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002434D0
 * Original: 0x002434D0 - 0x002434DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002434D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002434D0: ;
    ecx = ebp + -148;
    g_seh_ebp = ebp; sub_00018AD0(); return; /* tail jmp 0x00018AD0 */

}

/**
 * sub_002434DB
 * Original: 0x002434DB - 0x002434E5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002434DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002434DB: ;
    eax = 0x307478;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002434F0
 * Original: 0x002434F0 - 0x002434F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002434F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002434F0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00146220(); return; /* tail jmp 0x00146220 */

}

/**
 * sub_002434F8
 * Original: 0x002434F8 - 0x00243502 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002434F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002434F8: ;
    eax = 0x30749C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243510
 * Original: 0x00243510 - 0x0024351B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243510: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00243519u); RECOMP_ABI_CALL(0x001462C0u, sub_001462C0); /* call 0x001462C0 */

loc_00243519: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024351B
 * Original: 0x0024351B - 0x00243525 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024351B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024351B: ;
    eax = 0x3074C0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243530
 * Original: 0x00243530 - 0x0024353E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243530: ;
    eax = MEM32(ebp + -180);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024353Cu); RECOMP_ABI_CALL(0x0012B150u, sub_0012B150); /* call 0x0012B150 */

loc_0024353C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024353E
 * Original: 0x0024353E - 0x0024354C (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024353E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024353E: ;
    eax = MEM32(ebp + -180);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024354Au); RECOMP_ABI_CALL(0x0012B190u, sub_0012B190); /* call 0x0012B190 */

loc_0024354A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024354C
 * Original: 0x0024354C - 0x00243556 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024354C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024354C: ;
    eax = 0x3074EC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243560
 * Original: 0x00243560 - 0x0024356E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243560: ;
    eax = MEM32(ebp + -260);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024356Cu); RECOMP_ABI_CALL(0x0012B150u, sub_0012B150); /* call 0x0012B150 */

loc_0024356C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024356E
 * Original: 0x0024356E - 0x00243579 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024356E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024356E: ;
    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_0012B1F0(); return; /* tail jmp 0x0012B1F0 */

}

/**
 * sub_00243579
 * Original: 0x00243579 - 0x00243587 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243579(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243579: ;
    eax = MEM32(ebp + -260);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00243585u); RECOMP_ABI_CALL(0x0012B170u, sub_0012B170); /* call 0x0012B170 */

loc_00243585: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00243587
 * Original: 0x00243587 - 0x00243591 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243587(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243587: ;
    eax = 0x307520;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002435A0
 * Original: 0x002435A0 - 0x002435AB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002435A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002435A0: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_002435AB
 * Original: 0x002435AB - 0x002435B5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002435AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002435AB: ;
    eax = 0x307544;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002435C0
 * Original: 0x002435C0 - 0x002435CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002435C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002435C0: ;
    ecx = ebp + -1388;
    g_seh_ebp = ebp; sub_00149200(); return; /* tail jmp 0x00149200 */

}

/**
 * sub_002435CB
 * Original: 0x002435CB - 0x002435D5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002435CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002435CB: ;
    eax = 0x307568;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002435E0
 * Original: 0x002435E0 - 0x002435E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002435E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002435E0: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_00227FC0(); return; /* tail jmp 0x00227FC0 */

}

/**
 * sub_002435E8
 * Original: 0x002435E8 - 0x002435F2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002435E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002435E8: ;
    eax = 0x30758C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243600
 * Original: 0x00243600 - 0x00243608 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243600: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001FA0A0(); return; /* tail jmp 0x001FA0A0 */

}

/**
 * sub_00243608
 * Original: 0x00243608 - 0x00243613 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243608(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243608: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0008BE80(); return; /* tail jmp 0x0008BE80 */

}

/**
 * sub_00243613
 * Original: 0x00243613 - 0x00243621 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243613(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243613: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x160;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0008BEA0(); return; /* tail jmp 0x0008BEA0 */

}

/**
 * sub_00243621
 * Original: 0x00243621 - 0x0024362B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243621(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243621: ;
    eax = 0x3075C0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243630
 * Original: 0x00243630 - 0x0024363B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243630: ;
    ecx = ebp + -148;
    g_seh_ebp = ebp; sub_00018AD0(); return; /* tail jmp 0x00018AD0 */

}

/**
 * sub_0024363B
 * Original: 0x0024363B - 0x00243645 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024363B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024363B: ;
    eax = 0x3075E4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243650
 * Original: 0x00243650 - 0x00243658 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243650: ;
    ecx = ebp + -108;
    g_seh_ebp = ebp; sub_00216900(); return; /* tail jmp 0x00216900 */

}

/**
 * sub_00243658
 * Original: 0x00243658 - 0x00243662 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243658(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243658: ;
    eax = 0x307608;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243670
 * Original: 0x00243670 - 0x0024367B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243670: ;
    ecx = ebp + -1280;
    g_seh_ebp = ebp; sub_00209200(); return; /* tail jmp 0x00209200 */

}

/**
 * sub_0024367B
 * Original: 0x0024367B - 0x00243686 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024367B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024367B: ;
    ecx = ebp + -1072;
    g_seh_ebp = ebp; sub_00209040(); return; /* tail jmp 0x00209040 */

}

/**
 * sub_00243686
 * Original: 0x00243686 - 0x00243690 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243686(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243686: ;
    eax = 0x307634;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00243690
 * Original: 0x00243690 - 0x0024369B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00243690: ;
    ecx = ebp + -1280;
    g_seh_ebp = ebp; sub_00209200(); return; /* tail jmp 0x00209200 */

}

/**
 * sub_0024369B
 * Original: 0x0024369B - 0x002436A6 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024369B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024369B: ;
    ecx = ebp + -1072;
    g_seh_ebp = ebp; sub_00209040(); return; /* tail jmp 0x00209040 */

}

/**
 * sub_002436A6
 * Original: 0x002436A6 - 0x002436B1 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002436A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002436A6: ;
    ecx = ebp + -1304;
    g_seh_ebp = ebp; sub_00208DF0(); return; /* tail jmp 0x00208DF0 */

}
