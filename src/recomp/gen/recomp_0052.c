/**
 * Mercenaries - Recompiled code chunk 52
 * Functions: 250 (0x002443F0 - 0x00245180)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002443F0
 * Original: 0x002443F0 - 0x002443F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002443F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002443F0: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_001A5DA0(); return; /* tail jmp 0x001A5DA0 */

}

/**
 * sub_002443F8
 * Original: 0x002443F8 - 0x00244402 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002443F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002443F8: ;
    eax = 0x308368;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244410
 * Original: 0x00244410 - 0x00244418 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244410: ;
    ecx = MEM32(ebp + -36);
    g_seh_ebp = ebp; sub_001CC0E0(); return; /* tail jmp 0x001CC0E0 */

}

/**
 * sub_00244418
 * Original: 0x00244418 - 0x00244422 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244418(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244418: ;
    eax = 0x30838C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244430
 * Original: 0x00244430 - 0x0024443B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244430: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00244439u); RECOMP_ABI_CALL(0x0012B150u, sub_0012B150); /* call 0x0012B150 */

loc_00244439: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024443B
 * Original: 0x0024443B - 0x00244445 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024443B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024443B: ;
    eax = 0x3083B0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244450
 * Original: 0x00244450 - 0x00244461 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244450: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024445Du); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_0024445D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00244461
 * Original: 0x00244461 - 0x0024446B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244461(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244461: ;
    eax = 0x3083D4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244470
 * Original: 0x00244470 - 0x0024447B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244470: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00244479u); RECOMP_ABI_CALL(0x0012B150u, sub_0012B150); /* call 0x0012B150 */

loc_00244479: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024447B
 * Original: 0x0024447B - 0x00244485 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024447B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024447B: ;
    eax = 0x3083F8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244490
 * Original: 0x00244490 - 0x002444A1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244490: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024449Du); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_0024449D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002444A1
 * Original: 0x002444A1 - 0x002444AB (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002444A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002444A1: ;
    eax = 0x30841C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002444B0
 * Original: 0x002444B0 - 0x002444BB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002444B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002444B0: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002444B9u); RECOMP_ABI_CALL(0x0012B150u, sub_0012B150); /* call 0x0012B150 */

loc_002444B9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002444BB
 * Original: 0x002444BB - 0x002444C5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002444BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002444BB: ;
    eax = 0x308440;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002444D0
 * Original: 0x002444D0 - 0x002444E1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002444D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002444D0: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002444DDu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_002444DD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002444E1
 * Original: 0x002444E1 - 0x002444EB (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002444E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002444E1: ;
    eax = 0x308464;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002444F0
 * Original: 0x002444F0 - 0x002444F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002444F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002444F0: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_002444F8
 * Original: 0x002444F8 - 0x00244500 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002444F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002444F8: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244500
 * Original: 0x00244500 - 0x0024450A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244500: ;
    eax = 0x308568;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244510
 * Original: 0x00244510 - 0x00244518 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244510: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00244518
 * Original: 0x00244518 - 0x00244522 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244518(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244518: ;
    eax = 0x3084D0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244530
 * Original: 0x00244530 - 0x00244538 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244530: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001970C0(); return; /* tail jmp 0x001970C0 */

}

/**
 * sub_00244538
 * Original: 0x00244538 - 0x00244542 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244538(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244538: ;
    eax = 0x3084F4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244550
 * Original: 0x00244550 - 0x00244558 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244550: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_0012B250(); return; /* tail jmp 0x0012B250 */

}

/**
 * sub_00244558
 * Original: 0x00244558 - 0x00244562 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244558(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244558: ;
    eax = 0x308488;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244570
 * Original: 0x00244570 - 0x00244578 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244570: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244578
 * Original: 0x00244578 - 0x00244582 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244578(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244578: ;
    eax = 0x3084AC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244590
 * Original: 0x00244590 - 0x0024459B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244590: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00244599u); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_00244599: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024459B
 * Original: 0x0024459B - 0x002445A5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024459B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024459B: ;
    eax = 0x308518;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002445B0
 * Original: 0x002445B0 - 0x002445BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002445B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002445B0: ;
    ecx = ebp + -368;
    g_seh_ebp = ebp; sub_00197230(); return; /* tail jmp 0x00197230 */

}

/**
 * sub_002445BB
 * Original: 0x002445BB - 0x002445C5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002445BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002445BB: ;
    eax = 0x30853C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002445D0
 * Original: 0x002445D0 - 0x002445D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002445D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002445D0: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_002445D8
 * Original: 0x002445D8 - 0x002445E0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002445D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002445D8: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_002445E0
 * Original: 0x002445E0 - 0x002445EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002445E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002445E0: ;
    eax = 0x308648;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002445F0
 * Original: 0x002445F0 - 0x002445F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002445F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002445F0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0003A420(); return; /* tail jmp 0x0003A420 */

}

/**
 * sub_002445F8
 * Original: 0x002445F8 - 0x00244602 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002445F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002445F8: ;
    eax = 0x3085D4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244610
 * Original: 0x00244610 - 0x00244618 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244610: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_0012B250(); return; /* tail jmp 0x0012B250 */

}

/**
 * sub_00244618
 * Original: 0x00244618 - 0x00244622 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244618(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244618: ;
    eax = 0x30858C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244630
 * Original: 0x00244630 - 0x00244638 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244630: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244638
 * Original: 0x00244638 - 0x00244642 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244638(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244638: ;
    eax = 0x3085B0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244650
 * Original: 0x00244650 - 0x0024465B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244650: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00244659u); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_00244659: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024465B
 * Original: 0x0024465B - 0x00244665 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024465B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024465B: ;
    eax = 0x3085F8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244670
 * Original: 0x00244670 - 0x0024467B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244670: ;
    ecx = ebp + -456;
    g_seh_ebp = ebp; sub_00198030(); return; /* tail jmp 0x00198030 */

}

/**
 * sub_0024467B
 * Original: 0x0024467B - 0x00244685 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024467B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024467B: ;
    eax = 0x30861C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244690
 * Original: 0x00244690 - 0x00244698 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244690: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00198EF0(); return; /* tail jmp 0x00198EF0 */

}

/**
 * sub_00244698
 * Original: 0x00244698 - 0x002446A2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244698(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244698: ;
    eax = 0x3086D8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002446B0
 * Original: 0x002446B0 - 0x002446B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002446B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002446B0: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_0012B250(); return; /* tail jmp 0x0012B250 */

}

/**
 * sub_002446B8
 * Original: 0x002446B8 - 0x002446C2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002446B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002446B8: ;
    eax = 0x30866C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002446D0
 * Original: 0x002446D0 - 0x002446D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002446D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002446D0: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_002446D8
 * Original: 0x002446D8 - 0x002446E2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002446D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002446D8: ;
    eax = 0x308690;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002446F0
 * Original: 0x002446F0 - 0x002446F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002446F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002446F0: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_002446F8
 * Original: 0x002446F8 - 0x00244700 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002446F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002446F8: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244700
 * Original: 0x00244700 - 0x0024470A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244700: ;
    eax = 0x308704;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244710
 * Original: 0x00244710 - 0x0024471B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244710: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00244719u); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_00244719: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024471B
 * Original: 0x0024471B - 0x00244725 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024471B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024471B: ;
    eax = 0x3086B4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244730
 * Original: 0x00244730 - 0x0024473B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244730: ;
    ecx = ebp + -544;
    g_seh_ebp = ebp; sub_001992D0(); return; /* tail jmp 0x001992D0 */

}

/**
 * sub_0024473B
 * Original: 0x0024473B - 0x00244746 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024473B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024473B: ;
    ecx = ebp + -708;
    g_seh_ebp = ebp; sub_00199080(); return; /* tail jmp 0x00199080 */

}

/**
 * sub_00244746
 * Original: 0x00244746 - 0x00244750 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244746(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244746: ;
    eax = 0x308730;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244750
 * Original: 0x00244750 - 0x00244758 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244750: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00244758
 * Original: 0x00244758 - 0x00244763 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244758(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244758: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00244763
 * Original: 0x00244763 - 0x0024476D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244763(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244763: ;
    eax = 0x308780;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244770
 * Original: 0x00244770 - 0x00244778 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244770: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00244778
 * Original: 0x00244778 - 0x00244782 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244778(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244778: ;
    eax = 0x3087A4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244790
 * Original: 0x00244790 - 0x00244798 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244790: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244798
 * Original: 0x00244798 - 0x002447A2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244798(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244798: ;
    eax = 0x308754;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002447B0
 * Original: 0x002447B0 - 0x002447B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002447B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002447B0: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_002447B8
 * Original: 0x002447B8 - 0x002447C0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002447B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002447B8: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_002447C0
 * Original: 0x002447C0 - 0x002447CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002447C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002447C0: ;
    eax = 0x3087F4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002447D0
 * Original: 0x002447D0 - 0x002447DB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002447D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002447D0: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002447D9u); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_002447D9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002447DB
 * Original: 0x002447DB - 0x002447E5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002447DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002447DB: ;
    eax = 0x3087C8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002447F0
 * Original: 0x002447F0 - 0x002447FB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002447F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002447F0: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002447F9u); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_002447F9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002447FB
 * Original: 0x002447FB - 0x00244803 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002447FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002447FB: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00244803
 * Original: 0x00244803 - 0x0024480D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244803(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244803: ;
    eax = 0x308820;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244810
 * Original: 0x00244810 - 0x00244818 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244810: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_0012B250(); return; /* tail jmp 0x0012B250 */

}

/**
 * sub_00244818
 * Original: 0x00244818 - 0x00244822 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244818(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244818: ;
    eax = 0x308844;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244830
 * Original: 0x00244830 - 0x00244838 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244830: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244838
 * Original: 0x00244838 - 0x00244842 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244838(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244838: ;
    eax = 0x308868;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244850
 * Original: 0x00244850 - 0x00244858 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244850: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244858
 * Original: 0x00244858 - 0x00244860 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244858(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244858: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244860
 * Original: 0x00244860 - 0x0024486A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244860: ;
    eax = 0x308894;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244870
 * Original: 0x00244870 - 0x0024487B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244870: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00244879u); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_00244879: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024487B
 * Original: 0x0024487B - 0x00244883 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024487B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024487B: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00244883
 * Original: 0x00244883 - 0x0024488D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244883(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244883: ;
    eax = 0x3088C0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244890
 * Original: 0x00244890 - 0x00244898 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244890: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_0012B250(); return; /* tail jmp 0x0012B250 */

}

/**
 * sub_00244898
 * Original: 0x00244898 - 0x002448A2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244898(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244898: ;
    eax = 0x3088E4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002448B0
 * Original: 0x002448B0 - 0x002448B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002448B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002448B0: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_002448B8
 * Original: 0x002448B8 - 0x002448C2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002448B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002448B8: ;
    eax = 0x308908;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002448D0
 * Original: 0x002448D0 - 0x002448D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002448D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002448D0: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_002448D8
 * Original: 0x002448D8 - 0x002448E0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002448D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002448D8: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_002448E0
 * Original: 0x002448E0 - 0x002448EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002448E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002448E0: ;
    eax = 0x308934;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002448F0
 * Original: 0x002448F0 - 0x002448F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002448F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002448F0: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_0012B250(); return; /* tail jmp 0x0012B250 */

}

/**
 * sub_002448F8
 * Original: 0x002448F8 - 0x00244902 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002448F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002448F8: ;
    eax = 0x308958;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244910
 * Original: 0x00244910 - 0x00244918 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244910: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244918
 * Original: 0x00244918 - 0x00244922 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244918(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244918: ;
    eax = 0x30897C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244930
 * Original: 0x00244930 - 0x00244938 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244930: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244938
 * Original: 0x00244938 - 0x00244940 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244938(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244938: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244940
 * Original: 0x00244940 - 0x0024494A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244940: ;
    eax = 0x3089A8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244950
 * Original: 0x00244950 - 0x0024495B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244950: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00244959u); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_00244959: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024495B
 * Original: 0x0024495B - 0x00244963 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024495B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024495B: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00244963
 * Original: 0x00244963 - 0x0024496D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244963(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244963: ;
    eax = 0x3089D4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244970
 * Original: 0x00244970 - 0x00244978 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244970: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_0012B250(); return; /* tail jmp 0x0012B250 */

}

/**
 * sub_00244978
 * Original: 0x00244978 - 0x00244982 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244978(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244978: ;
    eax = 0x3089F8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244990
 * Original: 0x00244990 - 0x00244998 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244990: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244998
 * Original: 0x00244998 - 0x002449A2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244998(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244998: ;
    eax = 0x308A1C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002449B0
 * Original: 0x002449B0 - 0x002449B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002449B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002449B0: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_002449B8
 * Original: 0x002449B8 - 0x002449C0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002449B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002449B8: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_002449C0
 * Original: 0x002449C0 - 0x002449CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002449C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002449C0: ;
    eax = 0x308A48;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002449D0
 * Original: 0x002449D0 - 0x002449D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002449D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002449D0: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_0012B250(); return; /* tail jmp 0x0012B250 */

}

/**
 * sub_002449D8
 * Original: 0x002449D8 - 0x002449E2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002449D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002449D8: ;
    eax = 0x308A6C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002449F0
 * Original: 0x002449F0 - 0x002449F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002449F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002449F0: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_002449F8
 * Original: 0x002449F8 - 0x00244A02 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002449F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002449F8: ;
    eax = 0x308A90;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244A10
 * Original: 0x00244A10 - 0x00244A18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244A10: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244A18
 * Original: 0x00244A18 - 0x00244A20 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244A18(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244A18: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244A20
 * Original: 0x00244A20 - 0x00244A2A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244A20: ;
    eax = 0x308ABC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244A30
 * Original: 0x00244A30 - 0x00244A3B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244A30: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00244A39u); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_00244A39: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00244A3B
 * Original: 0x00244A3B - 0x00244A43 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244A3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244A3B: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00244A43
 * Original: 0x00244A43 - 0x00244A4D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244A43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244A43: ;
    eax = 0x308AE8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244A50
 * Original: 0x00244A50 - 0x00244A58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244A50: ;
    ecx = MEM32(ebp + -84);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00244A58
 * Original: 0x00244A58 - 0x00244A62 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244A58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244A58: ;
    eax = 0x308B0C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244A70
 * Original: 0x00244A70 - 0x00244A7B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244A70: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00244A79u); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_00244A79: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00244A7B
 * Original: 0x00244A7B - 0x00244A85 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244A7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244A7B: ;
    eax = 0x308B30;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244A90
 * Original: 0x00244A90 - 0x00244A98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244A90: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_001A5DA0(); return; /* tail jmp 0x001A5DA0 */

}

/**
 * sub_00244A98
 * Original: 0x00244A98 - 0x00244AA2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244A98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244A98: ;
    eax = 0x308B54;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244AB0
 * Original: 0x00244AB0 - 0x00244AB8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244AB0: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244AB8
 * Original: 0x00244AB8 - 0x00244AC0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244AB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244AB8: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244AC0
 * Original: 0x00244AC0 - 0x00244ACA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244AC0: ;
    eax = 0x308C18;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244AD0
 * Original: 0x00244AD0 - 0x00244AD8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244AD0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00244AD8
 * Original: 0x00244AD8 - 0x00244AE2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244AD8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244AD8: ;
    eax = 0x308B78;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244AF0
 * Original: 0x00244AF0 - 0x00244AF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244AF0: ;
    ecx = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00244AF8
 * Original: 0x00244AF8 - 0x00244B03 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244AF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244AF8: ;
    ecx = MEM32(ebp + -28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00126EF0(); return; /* tail jmp 0x00126EF0 */

}

/**
 * sub_00244B03
 * Original: 0x00244B03 - 0x00244B0D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244B03(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244B03: ;
    eax = 0x308BA4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244B10
 * Original: 0x00244B10 - 0x00244B1B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244B10: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00244B19u); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_00244B19: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00244B1B
 * Original: 0x00244B1B - 0x00244B25 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244B1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244B1B: ;
    eax = 0x308C3C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244B30
 * Original: 0x00244B30 - 0x00244B38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244B30: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_0012B250(); return; /* tail jmp 0x0012B250 */

}

/**
 * sub_00244B38
 * Original: 0x00244B38 - 0x00244B42 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244B38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244B38: ;
    eax = 0x308BC8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244B50
 * Original: 0x00244B50 - 0x00244B58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244B50: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244B58
 * Original: 0x00244B58 - 0x00244B62 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244B58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244B58: ;
    eax = 0x308BEC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244B70
 * Original: 0x00244B70 - 0x00244B78 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244B70: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244B78
 * Original: 0x00244B78 - 0x00244B80 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244B78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244B78: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244B80
 * Original: 0x00244B80 - 0x00244B8A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244B80: ;
    eax = 0x308C68;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244B90
 * Original: 0x00244B90 - 0x00244B98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244B90: ;
    ecx = MEM32(ebp + -40);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00244B98
 * Original: 0x00244B98 - 0x00244BA3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244B98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244B98: ;
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00244BA3
 * Original: 0x00244BA3 - 0x00244BAD (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244BA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244BA3: ;
    eax = 0x308C94;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244BB0
 * Original: 0x00244BB0 - 0x00244BB8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244BB0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00244BB8
 * Original: 0x00244BB8 - 0x00244BC2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244BB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244BB8: ;
    eax = 0x308CB8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244BD0
 * Original: 0x00244BD0 - 0x00244BD8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244BD0: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_0012B250(); return; /* tail jmp 0x0012B250 */

}

/**
 * sub_00244BD8
 * Original: 0x00244BD8 - 0x00244BE2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244BD8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244BD8: ;
    eax = 0x308CDC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244BF0
 * Original: 0x00244BF0 - 0x00244BF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244BF0: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244BF8
 * Original: 0x00244BF8 - 0x00244C02 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244BF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244BF8: ;
    eax = 0x308D00;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244C10
 * Original: 0x00244C10 - 0x00244C1B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244C10: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00244C19u); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_00244C19: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00244C1B
 * Original: 0x00244C1B - 0x00244C25 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244C1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244C1B: ;
    eax = 0x308D24;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244C30
 * Original: 0x00244C30 - 0x00244C38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244C30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244C30: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00244C38
 * Original: 0x00244C38 - 0x00244C42 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244C38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244C38: ;
    eax = 0x308D48;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244C50
 * Original: 0x00244C50 - 0x00244C5B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244C50: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00244C59u); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_00244C59: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00244C5B
 * Original: 0x00244C5B - 0x00244C65 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244C5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244C5B: ;
    eax = 0x308D6C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244C70
 * Original: 0x00244C70 - 0x00244C7E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244C70: ;
    eax = MEM32(ebp + -132);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00244C7Cu); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_00244C7C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00244C7E
 * Original: 0x00244C7E - 0x00244C89 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244C7E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244C7E: ;
    ecx = MEM32(ebp + -132);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00244C89
 * Original: 0x00244C89 - 0x00244C93 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244C89(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244C89: ;
    eax = 0x308D98;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244CA0
 * Original: 0x00244CA0 - 0x00244CA8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244CA0: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244CA8
 * Original: 0x00244CA8 - 0x00244CB0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244CA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244CA8: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244CB0
 * Original: 0x00244CB0 - 0x00244CBA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244CB0: ;
    eax = 0x308DC4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244CC0
 * Original: 0x00244CC0 - 0x00244CC8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244CC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244CC0: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_0012B250(); return; /* tail jmp 0x0012B250 */

}

/**
 * sub_00244CC8
 * Original: 0x00244CC8 - 0x00244CD2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244CC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244CC8: ;
    eax = 0x308DE8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244CE0
 * Original: 0x00244CE0 - 0x00244CE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244CE0: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244CE8
 * Original: 0x00244CE8 - 0x00244CF2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244CE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244CE8: ;
    eax = 0x308E0C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244D00
 * Original: 0x00244D00 - 0x00244D0B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244D00: ;
    ecx = MEM32(ebp + -296);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00244D0B
 * Original: 0x00244D0B - 0x00244D19 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244D0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244D0B: ;
    ecx = MEM32(ebp + -296);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001C2A20(); return; /* tail jmp 0x001C2A20 */

}

/**
 * sub_00244D19
 * Original: 0x00244D19 - 0x00244D23 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244D19(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244D19: ;
    eax = 0x308E38;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244D30
 * Original: 0x00244D30 - 0x00244D38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244D30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244D30: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00244D38
 * Original: 0x00244D38 - 0x00244D42 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244D38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244D38: ;
    eax = 0x308E5C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244D50
 * Original: 0x00244D50 - 0x00244D58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244D50: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_0012B250(); return; /* tail jmp 0x0012B250 */

}

/**
 * sub_00244D58
 * Original: 0x00244D58 - 0x00244D62 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244D58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244D58: ;
    eax = 0x308E80;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244D70
 * Original: 0x00244D70 - 0x00244D78 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244D70: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244D78
 * Original: 0x00244D78 - 0x00244D82 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244D78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244D78: ;
    eax = 0x308EA4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244D90
 * Original: 0x00244D90 - 0x00244D9B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244D90: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00244D99u); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_00244D99: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00244D9B
 * Original: 0x00244D9B - 0x00244DA5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244D9B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244D9B: ;
    eax = 0x308EF4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244DB0
 * Original: 0x00244DB0 - 0x00244DB8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244DB0: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244DB8
 * Original: 0x00244DB8 - 0x00244DC0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244DB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244DB8: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244DC0
 * Original: 0x00244DC0 - 0x00244DCA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244DC0: ;
    eax = 0x308ED0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244DD0
 * Original: 0x00244DD0 - 0x00244DD8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244DD0: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244DD8
 * Original: 0x00244DD8 - 0x00244DE0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244DD8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244DD8: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244DE0
 * Original: 0x00244DE0 - 0x00244DEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244DE0: ;
    eax = 0x308F20;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244DF0
 * Original: 0x00244DF0 - 0x00244DF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244DF0: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_0012B250(); return; /* tail jmp 0x0012B250 */

}

/**
 * sub_00244DF8
 * Original: 0x00244DF8 - 0x00244E02 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244DF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244DF8: ;
    eax = 0x308F44;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244E10
 * Original: 0x00244E10 - 0x00244E18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244E10: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244E18
 * Original: 0x00244E18 - 0x00244E22 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244E18(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244E18: ;
    eax = 0x308F68;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244E30
 * Original: 0x00244E30 - 0x00244E3B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244E30: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00244E39u); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_00244E39: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00244E3B
 * Original: 0x00244E3B - 0x00244E46 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244E3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244E3B: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00244E44u); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_00244E44: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00244E46
 * Original: 0x00244E46 - 0x00244E50 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244E46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244E46: ;
    eax = 0x308F94;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244E50
 * Original: 0x00244E50 - 0x00244E58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244E50: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001BDE40(); return; /* tail jmp 0x001BDE40 */

}

/**
 * sub_00244E58
 * Original: 0x00244E58 - 0x00244E62 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244E58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244E58: ;
    eax = 0x308FB8;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244E70
 * Original: 0x00244E70 - 0x00244E7B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244E70: ;
    ecx = ebp + -608;
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00244E7B
 * Original: 0x00244E7B - 0x00244E86 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244E7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244E7B: ;
    ecx = ebp + -948;
    g_seh_ebp = ebp; sub_001AA4C0(); return; /* tail jmp 0x001AA4C0 */

}

/**
 * sub_00244E86
 * Original: 0x00244E86 - 0x00244E90 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244E86(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244E86: ;
    eax = 0x308FE4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244E90
 * Original: 0x00244E90 - 0x00244E9B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244E90: ;
    ecx = ebp + -544;
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00244E9B
 * Original: 0x00244E9B - 0x00244EA6 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244E9B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244E9B: ;
    ecx = ebp + -884;
    g_seh_ebp = ebp; sub_001AA4C0(); return; /* tail jmp 0x001AA4C0 */

}

/**
 * sub_00244EA6
 * Original: 0x00244EA6 - 0x00244EB0 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244EA6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244EA6: ;
    eax = 0x309010;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244EB0
 * Original: 0x00244EB0 - 0x00244EBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244EB0: ;
    ecx = ebp + -800;
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00244EBB
 * Original: 0x00244EBB - 0x00244EC5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244EBB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244EBB: ;
    eax = 0x309034;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244ED0
 * Original: 0x00244ED0 - 0x00244EDB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244ED0: ;
    ecx = ebp + -600;
    g_seh_ebp = ebp; sub_001BDEA0(); return; /* tail jmp 0x001BDEA0 */

}

/**
 * sub_00244EDB
 * Original: 0x00244EDB - 0x00244EE5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244EDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244EDB: ;
    eax = 0x309058;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244EF0
 * Original: 0x00244EF0 - 0x00244EF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244EF0: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_0012B250(); return; /* tail jmp 0x0012B250 */

}

/**
 * sub_00244EF8
 * Original: 0x00244EF8 - 0x00244F02 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244EF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244EF8: ;
    eax = 0x30907C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244F10
 * Original: 0x00244F10 - 0x00244F18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244F10: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244F18
 * Original: 0x00244F18 - 0x00244F22 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244F18(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244F18: ;
    eax = 0x3090A0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244F30
 * Original: 0x00244F30 - 0x00244F38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244F30: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244F38
 * Original: 0x00244F38 - 0x00244F40 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244F38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244F38: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244F40
 * Original: 0x00244F40 - 0x00244F4A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244F40: ;
    eax = 0x3090CC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244F50
 * Original: 0x00244F50 - 0x00244F58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244F50: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00244F58
 * Original: 0x00244F58 - 0x00244F66 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244F58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244F58: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x4D90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4D90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001C2A20(); return; /* tail jmp 0x001C2A20 */

}

/**
 * sub_00244F66
 * Original: 0x00244F66 - 0x00244F74 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244F66(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244F66: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x4D9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4D9C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001ACBC0(); return; /* tail jmp 0x001ACBC0 */

}

/**
 * sub_00244F74
 * Original: 0x00244F74 - 0x00244F7E (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244F74(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244F74: ;
    eax = 0x309100;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244F80
 * Original: 0x00244F80 - 0x00244F8B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244F80: ;
    ecx = ebp + -148;
    g_seh_ebp = ebp; sub_001CC0E0(); return; /* tail jmp 0x001CC0E0 */

}

/**
 * sub_00244F8B
 * Original: 0x00244F8B - 0x00244F96 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244F8B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244F8B: ;
    ecx = ebp + -148;
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00244F96
 * Original: 0x00244F96 - 0x00244FA0 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244F96(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244F96: ;
    eax = 0x30912C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244FA0
 * Original: 0x00244FA0 - 0x00244FAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244FA0: ;
    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_001CC0E0(); return; /* tail jmp 0x001CC0E0 */

}

/**
 * sub_00244FAB
 * Original: 0x00244FAB - 0x00244FB6 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244FAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244FAB: ;
    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00244FB6
 * Original: 0x00244FB6 - 0x00244FC0 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244FB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244FB6: ;
    eax = 0x309158;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244FC0
 * Original: 0x00244FC0 - 0x00244FC8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244FC0: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244FC8
 * Original: 0x00244FC8 - 0x00244FD0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244FC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244FC8: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00244FD0
 * Original: 0x00244FD0 - 0x00244FDA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244FD0: ;
    eax = 0x309184;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00244FE0
 * Original: 0x00244FE0 - 0x00244FEB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244FE0: ;
    ecx = MEM32(ebp + -152);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00244FEB
 * Original: 0x00244FEB - 0x00244FF9 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244FEB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244FEB: ;
    ecx = MEM32(ebp + -152);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001C2A20(); return; /* tail jmp 0x001C2A20 */

}

/**
 * sub_00244FF9
 * Original: 0x00244FF9 - 0x00245004 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244FF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244FF9: ;
    ecx = ebp + -148;
    g_seh_ebp = ebp; sub_001CC0E0(); return; /* tail jmp 0x001CC0E0 */

}

/**
 * sub_00245004
 * Original: 0x00245004 - 0x0024500F (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245004(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245004: ;
    ecx = ebp + -148;
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_0024500F
 * Original: 0x0024500F - 0x00245019 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024500F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024500F: ;
    eax = 0x3091C0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00245020
 * Original: 0x00245020 - 0x00245028 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245020: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_00245028
 * Original: 0x00245028 - 0x00245032 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245028(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245028: ;
    eax = 0x3091E4;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00245040
 * Original: 0x00245040 - 0x00245048 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245040: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_0012B250(); return; /* tail jmp 0x0012B250 */

}

/**
 * sub_00245048
 * Original: 0x00245048 - 0x00245052 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245048(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245048: ;
    eax = 0x309208;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00245060
 * Original: 0x00245060 - 0x00245068 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245060: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00245068
 * Original: 0x00245068 - 0x00245072 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245068(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245068: ;
    eax = 0x30922C;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00245080
 * Original: 0x00245080 - 0x0024508B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245080: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00245089u); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_00245089: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024508B
 * Original: 0x0024508B - 0x00245095 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024508B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024508B: ;
    eax = 0x309250;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002450A0
 * Original: 0x002450A0 - 0x002450A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002450A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002450A0: ;
    ecx = MEM32(ebp + -32);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}

/**
 * sub_002450A8
 * Original: 0x002450A8 - 0x002450B2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002450A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002450A8: ;
    eax = 0x309274;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002450C0
 * Original: 0x002450C0 - 0x002450C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002450C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002450C0: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_002450C8
 * Original: 0x002450C8 - 0x002450D2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002450C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002450C8: ;
    eax = 0x309298;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_002450E0
 * Original: 0x002450E0 - 0x002450E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002450E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002450E0: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_0012B250(); return; /* tail jmp 0x0012B250 */

}

/**
 * sub_002450E8
 * Original: 0x002450E8 - 0x002450F2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002450E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002450E8: ;
    eax = 0x3092BC;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00245100
 * Original: 0x00245100 - 0x00245108 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245100: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_0012B250(); return; /* tail jmp 0x0012B250 */

}

/**
 * sub_00245108
 * Original: 0x00245108 - 0x00245112 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245108(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245108: ;
    eax = 0x3092E0;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00245120
 * Original: 0x00245120 - 0x00245128 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245120: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00245128
 * Original: 0x00245128 - 0x00245132 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245128(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245128: ;
    eax = 0x309304;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00245140
 * Original: 0x00245140 - 0x00245148 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245140: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00245148
 * Original: 0x00245148 - 0x00245150 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245148(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245148: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_001AE0F0(); return; /* tail jmp 0x001AE0F0 */

}

/**
 * sub_00245150
 * Original: 0x00245150 - 0x0024515A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245150: ;
    eax = 0x309330;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00245160
 * Original: 0x00245160 - 0x0024516B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245160: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00245169u); RECOMP_ABI_CALL(0x00199F10u, sub_00199F10); /* call 0x00199F10 */

loc_00245169: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024516B
 * Original: 0x0024516B - 0x00245175 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024516B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024516B: ;
    eax = 0x309354;
    g_seh_ebp = ebp; sub_00237199(); return; /* tail jmp 0x00237199 */

}

/**
 * sub_00245180
 * Original: 0x00245180 - 0x00245188 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245180: ;
    ecx = MEM32(ebp + -32);
    g_seh_ebp = ebp; sub_0019FDA0(); return; /* tail jmp 0x0019FDA0 */

}
