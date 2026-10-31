/**
 * Mercenaries - Recompiled code chunk 58
 * Functions: 250 (0x00252AF0 - 0x00253D20)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00252AF0
 * Original: 0x00252AF0 - 0x00252B06 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252AF0(void)
{

loc_00252AF0: ;
    ecx = 0x692218;
    PUSH32(esp, 0x00252AFAu); RECOMP_ABI_CALL(0x002036C0u, sub_002036C0); /* call 0x002036C0 */

loc_00252AFA: ;
    PUSH32(esp, 0x2554E0);
    PUSH32(esp, 0x00252B04u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252B04: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252B10
 * Original: 0x00252B10 - 0x00252B26 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252B10(void)
{

loc_00252B10: ;
    ecx = 0x692318;
    PUSH32(esp, 0x00252B1Au); RECOMP_ABI_CALL(0x00203840u, sub_00203840); /* call 0x00203840 */

loc_00252B1A: ;
    PUSH32(esp, 0x2554F0);
    PUSH32(esp, 0x00252B24u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252B24: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252B30
 * Original: 0x00252B30 - 0x00252B43 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252B30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252B30: ;
    PUSH32(esp, 0x10000);
    PUSH32(esp, 0x753498);
    PUSH32(esp, 0x00252B3Fu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_00252B3F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00252B50
 * Original: 0x00252B50 - 0x00252B66 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252B50(void)
{

loc_00252B50: ;
    ecx = 0x7934C8;
    PUSH32(esp, 0x00252B5Au); RECOMP_ABI_CALL(0x001F7790u, sub_001F7790); /* call 0x001F7790 */

loc_00252B5A: ;
    PUSH32(esp, 0x255500);
    PUSH32(esp, 0x00252B64u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252B64: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252B70
 * Original: 0x00252B70 - 0x00252BBE (78 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252B70: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 4);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(0x79354C) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x793550) = ecx;
    MEM32(0x793554) = edx;
    MEM32(0x793558) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00252BC0
 * Original: 0x00252BC0 - 0x00252BCC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252BC0(void)
{

loc_00252BC0: ;
    PUSH32(esp, 0x255510);
    PUSH32(esp, 0x00252BCAu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252BCA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252BD0
 * Original: 0x00252BD0 - 0x00252BE6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252BD0(void)
{

loc_00252BD0: ;
    ecx = 0x7ABD90;
    PUSH32(esp, 0x00252BDAu); RECOMP_ABI_CALL(0x002171A0u, sub_002171A0); /* call 0x002171A0 */

loc_00252BDA: ;
    PUSH32(esp, 0x255520);
    PUSH32(esp, 0x00252BE4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252BE4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252BF0
 * Original: 0x00252BF0 - 0x00252C49 (89 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252BF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252BF0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x6459E8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459EC)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459F0)); /* movss */
    PUSH32(esp, 0);
    eax = esp + 4;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC09C)); /* movss */
    PUSH32(esp, eax);
    ecx = 0x841FE4;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00252C3Bu); RECOMP_ABI_CALL(0x00212010u, sub_00212010); /* call 0x00212010 */

loc_00252C3B: ;
    PUSH32(esp, 0x255530);
    PUSH32(esp, 0x00252C45u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252C45: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00252C50
 * Original: 0x00252C50 - 0x00252C5C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252C50(void)
{

loc_00252C50: ;
    PUSH32(esp, 0x255540);
    PUSH32(esp, 0x00252C5Au); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252C5A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252C60
 * Original: 0x00252C60 - 0x00252C6C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252C60(void)
{

loc_00252C60: ;
    PUSH32(esp, 0x255560);
    PUSH32(esp, 0x00252C6Au); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252C6A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252C70
 * Original: 0x00252C70 - 0x00252C99 (41 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252C70: ;
    eax = 0x842168;
    edx = 0x20;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00252C80: ;
    MEM32(eax + -8) = ecx;
    MEM32(eax + -4) = ecx;
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM32(eax + 4) = ecx;
    MEM8(eax + 8) = 5;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00252C80; /* jne: not equal / not zero */

loc_00252C98: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00252CA0
 * Original: 0x00252CA0 - 0x00252CC7 (39 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252CA0(void)
{

loc_00252CA0: ;
    PUSH32(esp, 0x209040);
    PUSH32(esp, 0x219400);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x134);
    PUSH32(esp, 0x842E78);
    PUSH32(esp, 0x00252CBBu); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_00252CBB: ;
    PUSH32(esp, 0x2555B0);
    PUSH32(esp, 0x00252CC5u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252CC5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252CD0
 * Original: 0x00252CD0 - 0x00252CF7 (39 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252CD0(void)
{

loc_00252CD0: ;
    PUSH32(esp, 0x209040);
    PUSH32(esp, 0x218160);
    PUSH32(esp, 0x300);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x847B78);
    PUSH32(esp, 0x00252CEBu); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_00252CEB: ;
    PUSH32(esp, 0x255580);
    PUSH32(esp, 0x00252CF5u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252CF5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252D00
 * Original: 0x00252D00 - 0x00252D0C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252D00(void)
{

loc_00252D00: ;
    PUSH32(esp, 0x2555A0);
    PUSH32(esp, 0x00252D0Au); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252D0A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252D10
 * Original: 0x00252D10 - 0x00252D33 (35 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252D10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x84DB78;
    edi = 8;
    /* nop */

loc_00252D20: ;
    ecx = esi;
    PUSH32(esp, 0x00252D27u); RECOMP_ABI_CALL(0x00217BF0u, sub_00217BF0); /* call 0x00217BF0 */

loc_00252D27: ;
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x160;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00252D20; /* jne: not equal / not zero */

loc_00252D30: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00252D40
 * Original: 0x00252D40 - 0x00252D64 (36 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252D40(void)
{

loc_00252D40: ;
    PUSH32(esp, 0x30890);
    PUSH32(esp, 0x31080);
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x85BED8);
    PUSH32(esp, 0x00252D58u); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_00252D58: ;
    PUSH32(esp, 0x2555D0);
    PUSH32(esp, 0x00252D62u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252D62: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252D70
 * Original: 0x00252D70 - 0x00252DFF (143 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252D70: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = 0x85C530;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00252DFBu); RECOMP_ABI_CALL(0x001F6440u, sub_001F6440); /* call 0x001F6440 */

loc_00252DFB: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00252E00
 * Original: 0x00252E00 - 0x00252E16 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252E00(void)
{

loc_00252E00: ;
    ecx = 0x85C600;
    PUSH32(esp, 0x00252E0Au); RECOMP_ABI_CALL(0x00226BA0u, sub_00226BA0); /* call 0x00226BA0 */

loc_00252E0A: ;
    PUSH32(esp, 0x2555F0);
    PUSH32(esp, 0x00252E14u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252E14: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252E20
 * Original: 0x00252E20 - 0x00252E35 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252E20(void)
{

loc_00252E20: ;
    eax = MEM32(0x4409FC);
    MEM32(0x3135D4) = eax;
    MEM32(0x4409FC) = 0x3135D0;
    esp += 4; return; /* ret */

}

/**
 * sub_00252E25
 * Original: 0x00252E25 - 0x00252E35 (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252E25(void)
{

loc_00252E25: ;
    MEM32(0x3135D4) = eax;
    MEM32(0x4409FC) = 0x3135D0;
    esp += 4; return; /* ret */

}

/**
 * sub_00252E40
 * Original: 0x00252E40 - 0x00252E6F (47 bytes, 14 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252E40(void)
{

loc_00252E40: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x30309C);
    PUSH32(esp, 0x440B80);
    PUSH32(esp, 0x3030B4);
    ecx = 0x8692BC;
    PUSH32(esp, 0x00252E63u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252E63: ;
    PUSH32(esp, 0x255600);
    PUSH32(esp, 0x00252E6Du); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252E6D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252E70
 * Original: 0x00252E70 - 0x00252EA2 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252E70(void)
{

loc_00252E70: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x303294);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x3032B4);
    PUSH32(esp, 0x440EE8);
    PUSH32(esp, 0x3032D4);
    ecx = 0x869310;
    PUSH32(esp, 0x00252E96u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252E96: ;
    PUSH32(esp, 0x255610);
    PUSH32(esp, 0x00252EA0u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252EA0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252EB0
 * Original: 0x00252EB0 - 0x00252EBA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252EB0: ;
    ecx = 0x314338;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00252EC0
 * Original: 0x00252EC0 - 0x00252ECA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252EC0: ;
    ecx = 0x3143C0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00252ED0
 * Original: 0x00252ED0 - 0x00252EDA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252ED0: ;
    ecx = 0x314468;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00252EE0
 * Original: 0x00252EE0 - 0x00252EEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252EE0: ;
    ecx = 0x314510;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00252EF0
 * Original: 0x00252EF0 - 0x00252EFA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252EF0: ;
    ecx = 0x3145B8;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00252F00
 * Original: 0x00252F00 - 0x00252F0A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252F00: ;
    ecx = 0x314640;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00252F10
 * Original: 0x00252F10 - 0x00252F1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252F10: ;
    ecx = 0x3146C8;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00252F20
 * Original: 0x00252F20 - 0x00252F2A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252F20: ;
    ecx = 0x314750;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00252F30
 * Original: 0x00252F30 - 0x00252F3A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252F30: ;
    ecx = 0x3147D8;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00252F40
 * Original: 0x00252F40 - 0x00252F4A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252F40: ;
    ecx = 0x314860;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00252F50
 * Original: 0x00252F50 - 0x00252F5A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252F50: ;
    ecx = 0x3148E8;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00252F60
 * Original: 0x00252F60 - 0x00252F6A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252F60: ;
    ecx = 0x314978;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00252F70
 * Original: 0x00252F70 - 0x00252F7A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252F70: ;
    ecx = 0x315A20;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00252F80
 * Original: 0x00252F80 - 0x00252F8A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252F80: ;
    ecx = 0x315AA8;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00252F90
 * Original: 0x00252F90 - 0x00252F9A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252F90: ;
    ecx = 0x315B50;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00252FA0
 * Original: 0x00252FA0 - 0x00252FAA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252FA0: ;
    ecx = 0x315BF8;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00252FB0
 * Original: 0x00252FB0 - 0x00252FBA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252FB0: ;
    ecx = 0x315CA0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00252FC0
 * Original: 0x00252FC0 - 0x00252FCA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252FC0: ;
    ecx = 0x315CE0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00252FD0
 * Original: 0x00252FD0 - 0x00252FDA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252FD0: ;
    ecx = 0x315D20;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00252FE0
 * Original: 0x00252FE0 - 0x00252FEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252FE0: ;
    ecx = 0x315DC8;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00252FF0
 * Original: 0x00252FF0 - 0x00252FFA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252FF0: ;
    ecx = 0x315E08;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253000
 * Original: 0x00253000 - 0x0025300A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253000: ;
    ecx = 0x315EB0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253010
 * Original: 0x00253010 - 0x0025301A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253010: ;
    ecx = 0x315F54;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253020
 * Original: 0x00253020 - 0x0025302A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253020: ;
    ecx = 0x315F68;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253030
 * Original: 0x00253030 - 0x0025303A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253030: ;
    ecx = 0x315FA8;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253040
 * Original: 0x00253040 - 0x0025304A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253040: ;
    ecx = 0x316030;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253050
 * Original: 0x00253050 - 0x0025305A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253050: ;
    ecx = 0x3160B8;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253060
 * Original: 0x00253060 - 0x0025306A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253060: ;
    ecx = 0x316140;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253070
 * Original: 0x00253070 - 0x0025307A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253070: ;
    ecx = 0x3161C8;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253080
 * Original: 0x00253080 - 0x0025308A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253080: ;
    ecx = 0x316458;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253090
 * Original: 0x00253090 - 0x0025309A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253090: ;
    ecx = 0x3164E0;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_002530A0
 * Original: 0x002530A0 - 0x002530AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002530A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002530A0: ;
    ecx = 0x316568;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002530B0
 * Original: 0x002530B0 - 0x002530BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002530B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002530B0: ;
    ecx = 0x316610;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002530C0
 * Original: 0x002530C0 - 0x002530CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002530C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002530C0: ;
    ecx = 0x316650;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002530D0
 * Original: 0x002530D0 - 0x002530DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002530D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002530D0: ;
    ecx = 0x3166F8;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002530E0
 * Original: 0x002530E0 - 0x002530EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002530E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002530E0: ;
    ecx = 0x316738;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002530F0
 * Original: 0x002530F0 - 0x002530FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002530F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002530F0: ;
    ecx = 0x3167E0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253100
 * Original: 0x00253100 - 0x0025310A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253100: ;
    ecx = 0x316828;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253110
 * Original: 0x00253110 - 0x0025311A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253110: ;
    ecx = 0x3168B0;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253120
 * Original: 0x00253120 - 0x0025312A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253120: ;
    ecx = 0x316938;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253130
 * Original: 0x00253130 - 0x0025313A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253130: ;
    ecx = 0x3169C0;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253140
 * Original: 0x00253140 - 0x0025314A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253140: ;
    ecx = 0x317268;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253150
 * Original: 0x00253150 - 0x0025315A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253150: ;
    ecx = 0x3172F0;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253160
 * Original: 0x00253160 - 0x0025316A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253160: ;
    ecx = 0x317378;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253170
 * Original: 0x00253170 - 0x0025317A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253170: ;
    ecx = 0x317400;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253180
 * Original: 0x00253180 - 0x0025318A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253180: ;
    ecx = 0x31B520;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253190
 * Original: 0x00253190 - 0x002531A4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253190(void)
{

loc_00253190: ;
    PUSH32(esp, 0x209040);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x31B5B0);
    PUSH32(esp, 0x002531A3u); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_002531A3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002531B0
 * Original: 0x002531B0 - 0x002531BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002531B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002531B0: ;
    ecx = 0x31B938;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_002531C0
 * Original: 0x002531C0 - 0x002531CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002531C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002531C0: ;
    ecx = 0x31B9C0;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_002531D0
 * Original: 0x002531D0 - 0x002531DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002531D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002531D0: ;
    ecx = 0x31BC50;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_002531E0
 * Original: 0x002531E0 - 0x002531EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002531E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002531E0: ;
    ecx = 0x31BCD8;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_002531F0
 * Original: 0x002531F0 - 0x002531FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002531F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002531F0: ;
    ecx = 0x31BD60;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253200
 * Original: 0x00253200 - 0x0025320A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253200: ;
    ecx = 0x31BDF8;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253210
 * Original: 0x00253210 - 0x00253227 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253210(void)
{

loc_00253210: ;
    PUSH32(esp, 0x39850);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x550);
    PUSH32(esp, 0x31BE80);
    PUSH32(esp, 0x00253226u); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_00253226: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00253230
 * Original: 0x00253230 - 0x0025323A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253230: ;
    ecx = 0x31FE48;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253240
 * Original: 0x00253240 - 0x0025324A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253240: ;
    ecx = 0x31FEE0;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253250
 * Original: 0x00253250 - 0x00253251 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253250(void)
{

loc_00253250: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00253260
 * Original: 0x00253260 - 0x0025326A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253260: ;
    ecx = 0x320008;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253270
 * Original: 0x00253270 - 0x0025327A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253270: ;
    ecx = 0x320098;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253280
 * Original: 0x00253280 - 0x0025328A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253280: ;
    ecx = 0x320330;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253290
 * Original: 0x00253290 - 0x0025329A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253290: ;
    ecx = 0x3205C8;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_002532A0
 * Original: 0x002532A0 - 0x002532AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002532A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002532A0: ;
    ecx = 0x3217F8;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_002532B0
 * Original: 0x002532B0 - 0x002532BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002532B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002532B0: ;
    ecx = 0x321888;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_002532C0
 * Original: 0x002532C0 - 0x002532CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002532C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002532C0: ;
    ecx = 0x321918;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_002532D0
 * Original: 0x002532D0 - 0x002532DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002532D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002532D0: ;
    ecx = 0x321E70;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_002532E0
 * Original: 0x002532E0 - 0x002532E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002532E0(void)
{

loc_002532E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002532F0
 * Original: 0x002532F0 - 0x002532FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002532F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002532F0: ;
    ecx = 0x322698;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253300
 * Original: 0x00253300 - 0x0025330A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253300: ;
    ecx = 0x322720;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253310
 * Original: 0x00253310 - 0x0025331A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253310: ;
    ecx = 0x3227A8;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253320
 * Original: 0x00253320 - 0x0025332A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253320: ;
    ecx = 0x322830;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253330
 * Original: 0x00253330 - 0x0025333A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253330: ;
    ecx = 0x3228B8;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253340
 * Original: 0x00253340 - 0x0025334A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253340: ;
    ecx = 0x322940;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253350
 * Original: 0x00253350 - 0x0025335A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253350: ;
    ecx = 0x3229C8;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253360
 * Original: 0x00253360 - 0x0025336A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253360: ;
    ecx = 0x322A50;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253370
 * Original: 0x00253370 - 0x0025337A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253370: ;
    ecx = 0x322AD8;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253380
 * Original: 0x00253380 - 0x0025338A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253380: ;
    ecx = 0x322B60;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253390
 * Original: 0x00253390 - 0x0025339A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253390: ;
    ecx = 0x322BE8;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_002533A0
 * Original: 0x002533A0 - 0x002533AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002533A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002533A0: ;
    ecx = 0x322C78;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_002533B0
 * Original: 0x002533B0 - 0x002533BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002533B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002533B0: ;
    ecx = 0x322D28;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_002533C0
 * Original: 0x002533C0 - 0x002533CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002533C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002533C0: ;
    ecx = 0x322DC8;
    g_seh_ebp = ebp; sub_0008BF10(); return; /* tail jmp 0x0008BF10 */

}

/**
 * sub_002533D0
 * Original: 0x002533D0 - 0x002533DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002533D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002533D0: ;
    ecx = 0x3232B0;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_002533E0
 * Original: 0x002533E0 - 0x002533EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002533E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002533E0: ;
    ecx = 0x323338;
    g_seh_ebp = ebp; sub_00095D00(); return; /* tail jmp 0x00095D00 */

}

/**
 * sub_002533F0
 * Original: 0x002533F0 - 0x002533FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002533F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002533F0: ;
    ecx = 0x323498;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253400
 * Original: 0x00253400 - 0x0025340A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253400: ;
    ecx = 0x3235B8;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253410
 * Original: 0x00253410 - 0x0025341A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253410: ;
    ecx = 0x323528;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253420
 * Original: 0x00253420 - 0x0025342A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253420: ;
    ecx = 0x3235E8;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253430
 * Original: 0x00253430 - 0x0025343A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253430: ;
    ecx = 0x323608;
    g_seh_ebp = ebp; sub_000A44A0(); return; /* tail jmp 0x000A44A0 */

}

/**
 * sub_00253440
 * Original: 0x00253440 - 0x0025344A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253440: ;
    ecx = 0x323AD8;
    g_seh_ebp = ebp; sub_000A45A0(); return; /* tail jmp 0x000A45A0 */

}

/**
 * sub_00253450
 * Original: 0x00253450 - 0x0025345A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253450: ;
    ecx = 0x323FB0;
    g_seh_ebp = ebp; sub_00181000(); return; /* tail jmp 0x00181000 */

}

/**
 * sub_00253460
 * Original: 0x00253460 - 0x0025346A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253460: ;
    ecx = 0x326A70;
    g_seh_ebp = ebp; sub_00181000(); return; /* tail jmp 0x00181000 */

}

/**
 * sub_00253470
 * Original: 0x00253470 - 0x0025347A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253470: ;
    ecx = 0x329530;
    g_seh_ebp = ebp; sub_00181000(); return; /* tail jmp 0x00181000 */

}

/**
 * sub_00253480
 * Original: 0x00253480 - 0x0025348A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253480: ;
    ecx = 0x32BFF0;
    g_seh_ebp = ebp; sub_00181000(); return; /* tail jmp 0x00181000 */

}

/**
 * sub_00253490
 * Original: 0x00253490 - 0x0025349A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253490: ;
    ecx = 0x32EAB0;
    g_seh_ebp = ebp; sub_00181000(); return; /* tail jmp 0x00181000 */

}

/**
 * sub_002534A0
 * Original: 0x002534A0 - 0x002534AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002534A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002534A0: ;
    ecx = 0x32EB30;
    g_seh_ebp = ebp; sub_00181000(); return; /* tail jmp 0x00181000 */

}

/**
 * sub_002534B0
 * Original: 0x002534B0 - 0x002534C4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002534B0(void)
{

loc_002534B0: ;
    PUSH32(esp, 0x181000);
    PUSH32(esp, 2);
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x32EBB0);
    PUSH32(esp, 0x002534C3u); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_002534C3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002534D0
 * Original: 0x002534D0 - 0x002534E4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002534D0(void)
{

loc_002534D0: ;
    PUSH32(esp, 0x181000);
    PUSH32(esp, 2);
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x32EC90);
    PUSH32(esp, 0x002534E3u); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_002534E3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002534F0
 * Original: 0x002534F0 - 0x002534FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002534F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002534F0: ;
    ecx = 0x32ED70;
    g_seh_ebp = ebp; sub_00181000(); return; /* tail jmp 0x00181000 */

}

/**
 * sub_00253500
 * Original: 0x00253500 - 0x0025350A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253500: ;
    ecx = 0x32EDE0;
    g_seh_ebp = ebp; sub_00181000(); return; /* tail jmp 0x00181000 */

}

/**
 * sub_00253510
 * Original: 0x00253510 - 0x0025351A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253510: ;
    ecx = 0x32EE50;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253520
 * Original: 0x00253520 - 0x0025352A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253520: ;
    ecx = 0x32EF00;
    g_seh_ebp = ebp; sub_00181000(); return; /* tail jmp 0x00181000 */

}

/**
 * sub_00253530
 * Original: 0x00253530 - 0x0025353A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253530: ;
    ecx = 0x32EF90;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253540
 * Original: 0x00253540 - 0x0025354A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253540: ;
    ecx = 0x32F040;
    g_seh_ebp = ebp; sub_00181000(); return; /* tail jmp 0x00181000 */

}

/**
 * sub_00253550
 * Original: 0x00253550 - 0x0025355A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253550: ;
    ecx = 0x32F0D0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253560
 * Original: 0x00253560 - 0x0025356A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253560: ;
    ecx = 0x32F178;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253570
 * Original: 0x00253570 - 0x0025357A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253570: ;
    ecx = 0x32F220;
    g_seh_ebp = ebp; sub_00181000(); return; /* tail jmp 0x00181000 */

}

/**
 * sub_00253580
 * Original: 0x00253580 - 0x0025358A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253580: ;
    ecx = 0x32F2B0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253590
 * Original: 0x00253590 - 0x0025359A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253590: ;
    ecx = 0x32F6E0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002535A0
 * Original: 0x002535A0 - 0x002535AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002535A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002535A0: ;
    ecx = 0x32F788;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002535B0
 * Original: 0x002535B0 - 0x002535BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002535B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002535B0: ;
    ecx = 0x32F7C8;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002535C0
 * Original: 0x002535C0 - 0x002535CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002535C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002535C0: ;
    ecx = 0x32F870;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002535D0
 * Original: 0x002535D0 - 0x002535DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002535D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002535D0: ;
    ecx = 0x32F8B0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002535E0
 * Original: 0x002535E0 - 0x002535EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002535E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002535E0: ;
    ecx = 0x32F958;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002535F0
 * Original: 0x002535F0 - 0x002535FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002535F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002535F0: ;
    ecx = 0x32F998;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253600
 * Original: 0x00253600 - 0x0025360A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253600: ;
    ecx = 0x32FA40;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253610
 * Original: 0x00253610 - 0x0025361A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253610: ;
    ecx = 0x32FA80;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253620
 * Original: 0x00253620 - 0x0025362A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253620: ;
    ecx = 0x32FB28;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253630
 * Original: 0x00253630 - 0x0025363A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253630: ;
    ecx = 0x32FB68;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253640
 * Original: 0x00253640 - 0x0025364A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253640: ;
    ecx = 0x32FC10;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253650
 * Original: 0x00253650 - 0x0025365A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253650: ;
    ecx = 0x32FC50;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253660
 * Original: 0x00253660 - 0x0025366A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253660: ;
    ecx = 0x32FCF8;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253670
 * Original: 0x00253670 - 0x0025367A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253670: ;
    ecx = 0x32FD38;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253680
 * Original: 0x00253680 - 0x0025368A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253680: ;
    ecx = 0x32FDE0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253690
 * Original: 0x00253690 - 0x0025369A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253690: ;
    ecx = 0x32FE20;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002536A0
 * Original: 0x002536A0 - 0x002536AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002536A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002536A0: ;
    ecx = 0x32FEC8;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002536B0
 * Original: 0x002536B0 - 0x002536BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002536B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002536B0: ;
    ecx = 0x32FF08;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002536C0
 * Original: 0x002536C0 - 0x002536CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002536C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002536C0: ;
    ecx = 0x32FFB0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002536D0
 * Original: 0x002536D0 - 0x002536DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002536D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002536D0: ;
    ecx = 0x32FFF0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002536E0
 * Original: 0x002536E0 - 0x002536EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002536E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002536E0: ;
    ecx = 0x330098;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002536F0
 * Original: 0x002536F0 - 0x002536FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002536F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002536F0: ;
    ecx = 0x3300D8;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253700
 * Original: 0x00253700 - 0x0025370A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253700: ;
    ecx = 0x330180;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253710
 * Original: 0x00253710 - 0x0025371A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253710: ;
    ecx = 0x3301C0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253720
 * Original: 0x00253720 - 0x0025372A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253720: ;
    ecx = 0x330268;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253730
 * Original: 0x00253730 - 0x0025373A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253730: ;
    ecx = 0x3302A8;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253740
 * Original: 0x00253740 - 0x0025374A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253740: ;
    ecx = 0x330350;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253750
 * Original: 0x00253750 - 0x0025375A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253750: ;
    ecx = 0x330390;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253760
 * Original: 0x00253760 - 0x0025376A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253760: ;
    ecx = 0x330438;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253770
 * Original: 0x00253770 - 0x0025377A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253770: ;
    ecx = 0x330478;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253780
 * Original: 0x00253780 - 0x0025378A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253780: ;
    ecx = 0x330520;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253790
 * Original: 0x00253790 - 0x0025379A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253790: ;
    ecx = 0x330560;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002537A0
 * Original: 0x002537A0 - 0x002537AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002537A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002537A0: ;
    ecx = 0x330608;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002537B0
 * Original: 0x002537B0 - 0x002537BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002537B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002537B0: ;
    ecx = 0x330648;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002537C0
 * Original: 0x002537C0 - 0x002537CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002537C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002537C0: ;
    ecx = 0x3306F0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002537D0
 * Original: 0x002537D0 - 0x002537DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002537D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002537D0: ;
    ecx = 0x330730;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002537E0
 * Original: 0x002537E0 - 0x002537EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002537E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002537E0: ;
    ecx = 0x330770;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002537F0
 * Original: 0x002537F0 - 0x002537FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002537F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002537F0: ;
    ecx = 0x330818;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253800
 * Original: 0x00253800 - 0x0025380A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253800: ;
    ecx = 0x330858;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253810
 * Original: 0x00253810 - 0x0025381A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253810: ;
    ecx = 0x330898;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253820
 * Original: 0x00253820 - 0x0025382A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253820: ;
    ecx = 0x330940;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253830
 * Original: 0x00253830 - 0x0025383A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253830: ;
    ecx = 0x330980;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253840
 * Original: 0x00253840 - 0x0025384A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253840: ;
    ecx = 0x330A24;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253850
 * Original: 0x00253850 - 0x0025385A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253850: ;
    ecx = 0x330A58;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253860
 * Original: 0x00253860 - 0x0025386A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253860: ;
    ecx = 0x330A98;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253870
 * Original: 0x00253870 - 0x0025387A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253870: ;
    ecx = 0x330B40;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253880
 * Original: 0x00253880 - 0x0025388A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253880: ;
    ecx = 0x330BE8;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253890
 * Original: 0x00253890 - 0x0025389A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253890: ;
    ecx = 0x330C28;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002538A0
 * Original: 0x002538A0 - 0x002538AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002538A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002538A0: ;
    ecx = 0x330CD0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002538B0
 * Original: 0x002538B0 - 0x002538BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002538B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002538B0: ;
    ecx = 0x330D78;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002538C0
 * Original: 0x002538C0 - 0x002538CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002538C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002538C0: ;
    ecx = 0x330E1C;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002538D0
 * Original: 0x002538D0 - 0x002538DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002538D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002538D0: ;
    ecx = 0x330E30;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002538E0
 * Original: 0x002538E0 - 0x002538EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002538E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002538E0: ;
    ecx = 0x330E70;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002538F0
 * Original: 0x002538F0 - 0x002538FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002538F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002538F0: ;
    ecx = 0x330EB0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253900
 * Original: 0x00253900 - 0x0025390A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253900: ;
    ecx = 0x330F58;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253910
 * Original: 0x00253910 - 0x0025391A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253910: ;
    ecx = 0x330F98;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253920
 * Original: 0x00253920 - 0x0025392A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253920: ;
    ecx = 0x330FC8;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253930
 * Original: 0x00253930 - 0x0025393A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253930: ;
    ecx = 0x331070;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253940
 * Original: 0x00253940 - 0x0025394A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253940: ;
    ecx = 0x3310B0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253950
 * Original: 0x00253950 - 0x0025395A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253950: ;
    ecx = 0x3310E0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253960
 * Original: 0x00253960 - 0x0025396A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253960: ;
    ecx = 0x331184;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253970
 * Original: 0x00253970 - 0x0025397A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253970: ;
    ecx = 0x3311B8;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253980
 * Original: 0x00253980 - 0x0025398A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253980: ;
    ecx = 0x3311F8;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253990
 * Original: 0x00253990 - 0x0025399A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253990: ;
    ecx = 0x3312A0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002539A0
 * Original: 0x002539A0 - 0x002539AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002539A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002539A0: ;
    ecx = 0x331348;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002539B0
 * Original: 0x002539B0 - 0x002539BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002539B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002539B0: ;
    ecx = 0x3313F0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_002539C0
 * Original: 0x002539C0 - 0x002539CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002539C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002539C0: ;
    ecx = 0x331FB0;
    g_seh_ebp = ebp; sub_00181000(); return; /* tail jmp 0x00181000 */

}

/**
 * sub_002539D0
 * Original: 0x002539D0 - 0x002539DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002539D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002539D0: ;
    ecx = 0x3323A0;
    g_seh_ebp = ebp; sub_000A71B0(); return; /* tail jmp 0x000A71B0 */

}

/**
 * sub_002539E0
 * Original: 0x002539E0 - 0x002539EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002539E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002539E0: ;
    ecx = 0x332480;
    g_seh_ebp = ebp; sub_000EFAF0(); return; /* tail jmp 0x000EFAF0 */

}

/**
 * sub_002539F0
 * Original: 0x002539F0 - 0x002539FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002539F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002539F0: ;
    ecx = 0x332494;
    g_seh_ebp = ebp; sub_000B40D0(); return; /* tail jmp 0x000B40D0 */

}

/**
 * sub_00253A00
 * Original: 0x00253A00 - 0x00253A0A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253A00: ;
    ecx = 0x3324F0;
    g_seh_ebp = ebp; sub_000EFAF0(); return; /* tail jmp 0x000EFAF0 */

}

/**
 * sub_00253A10
 * Original: 0x00253A10 - 0x00253A1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253A10: ;
    ecx = 0x332548;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253A20
 * Original: 0x00253A20 - 0x00253A2A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253A20: ;
    ecx = 0x3325F0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253A30
 * Original: 0x00253A30 - 0x00253A3A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253A30: ;
    ecx = 0x332698;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253A40
 * Original: 0x00253A40 - 0x00253A4A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253A40: ;
    ecx = 0x332740;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253A50
 * Original: 0x00253A50 - 0x00253A5A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253A50: ;
    ecx = 0x3327E8;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253A60
 * Original: 0x00253A60 - 0x00253A6A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253A60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253A60: ;
    ecx = 0x332890;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253A70
 * Original: 0x00253A70 - 0x00253A7A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253A70: ;
    ecx = 0x332938;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253A80
 * Original: 0x00253A80 - 0x00253A8A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253A80: ;
    ecx = 0x3329E0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253A90
 * Original: 0x00253A90 - 0x00253A9A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253A90: ;
    ecx = 0x332A20;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253AA0
 * Original: 0x00253AA0 - 0x00253AAA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253AA0: ;
    ecx = 0x332AC8;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253AB0
 * Original: 0x00253AB0 - 0x00253ABA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253AB0: ;
    ecx = 0x332B08;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253AC0
 * Original: 0x00253AC0 - 0x00253ACA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253AC0: ;
    ecx = 0x332BB0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253AD0
 * Original: 0x00253AD0 - 0x00253ADA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253AD0: ;
    ecx = 0x332BF0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253AE0
 * Original: 0x00253AE0 - 0x00253AEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253AE0: ;
    ecx = 0x332C98;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253AF0
 * Original: 0x00253AF0 - 0x00253AFA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253AF0: ;
    ecx = 0x332CD8;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253B00
 * Original: 0x00253B00 - 0x00253B0A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253B00: ;
    ecx = 0x332D80;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253B10
 * Original: 0x00253B10 - 0x00253B1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253B10: ;
    ecx = 0x332DC0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253B20
 * Original: 0x00253B20 - 0x00253B2A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253B20: ;
    ecx = 0x332E68;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253B30
 * Original: 0x00253B30 - 0x00253B3A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253B30: ;
    ecx = 0x332EA8;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253B40
 * Original: 0x00253B40 - 0x00253B4A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253B40: ;
    ecx = 0x332F50;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253B50
 * Original: 0x00253B50 - 0x00253B5A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253B50: ;
    ecx = 0x332F90;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253B60
 * Original: 0x00253B60 - 0x00253B6A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253B60: ;
    ecx = 0x333038;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253B70
 * Original: 0x00253B70 - 0x00253B7A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253B70: ;
    ecx = 0x3330E0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253B80
 * Original: 0x00253B80 - 0x00253B8A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253B80: ;
    ecx = 0x333188;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253B90
 * Original: 0x00253B90 - 0x00253B9A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253B90: ;
    ecx = 0x3331C8;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253BA0
 * Original: 0x00253BA0 - 0x00253BAA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253BA0: ;
    ecx = 0x333270;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253BB0
 * Original: 0x00253BB0 - 0x00253BBA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253BB0: ;
    ecx = 0x3332B0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253BC0
 * Original: 0x00253BC0 - 0x00253BCA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253BC0: ;
    ecx = 0x333358;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253BD0
 * Original: 0x00253BD0 - 0x00253BDA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253BD0: ;
    ecx = 0x333398;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253BE0
 * Original: 0x00253BE0 - 0x00253BEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253BE0: ;
    ecx = 0x333440;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253BF0
 * Original: 0x00253BF0 - 0x00253BFA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253BF0: ;
    ecx = 0x3334E8;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253C00
 * Original: 0x00253C00 - 0x00253C0A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253C00: ;
    ecx = 0x333590;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253C10
 * Original: 0x00253C10 - 0x00253C1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253C10: ;
    ecx = 0x333638;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253C20
 * Original: 0x00253C20 - 0x00253C2A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253C20: ;
    ecx = 0x3336E0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253C30
 * Original: 0x00253C30 - 0x00253C3A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253C30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253C30: ;
    ecx = 0x333788;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253C40
 * Original: 0x00253C40 - 0x00253C4A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253C40: ;
    ecx = 0x3337C8;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253C50
 * Original: 0x00253C50 - 0x00253C5A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253C50: ;
    ecx = 0x333808;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253C60
 * Original: 0x00253C60 - 0x00253C6A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253C60: ;
    ecx = 0x333848;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253C70
 * Original: 0x00253C70 - 0x00253C7A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253C70: ;
    ecx = 0x3338F0;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253C80
 * Original: 0x00253C80 - 0x00253C8A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253C80: ;
    ecx = 0x333998;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253C90
 * Original: 0x00253C90 - 0x00253C9A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253C90: ;
    ecx = 0x333A40;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253CA0
 * Original: 0x00253CA0 - 0x00253CAA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253CA0: ;
    ecx = 0x333AE8;
    g_seh_ebp = ebp; sub_000A7160(); return; /* tail jmp 0x000A7160 */

}

/**
 * sub_00253CB0
 * Original: 0x00253CB0 - 0x00253CBA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253CB0: ;
    ecx = 0x334B60;
    g_seh_ebp = ebp; sub_000A7160(); return; /* tail jmp 0x000A7160 */

}

/**
 * sub_00253CC0
 * Original: 0x00253CC0 - 0x00253CCA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253CC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253CC0: ;
    ecx = 0x335BD8;
    g_seh_ebp = ebp; sub_000A7160(); return; /* tail jmp 0x000A7160 */

}

/**
 * sub_00253CD0
 * Original: 0x00253CD0 - 0x00253CDA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253CD0: ;
    ecx = 0x336C50;
    g_seh_ebp = ebp; sub_000A7160(); return; /* tail jmp 0x000A7160 */

}

/**
 * sub_00253CE0
 * Original: 0x00253CE0 - 0x00253CEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253CE0: ;
    ecx = 0x337CC8;
    g_seh_ebp = ebp; sub_000A7160(); return; /* tail jmp 0x000A7160 */

}

/**
 * sub_00253CF0
 * Original: 0x00253CF0 - 0x00253CFA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253CF0: ;
    ecx = 0x338D50;
    g_seh_ebp = ebp; sub_000A7160(); return; /* tail jmp 0x000A7160 */

}

/**
 * sub_00253D00
 * Original: 0x00253D00 - 0x00253D0A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253D00: ;
    ecx = 0x339DD8;
    g_seh_ebp = ebp; sub_000A7160(); return; /* tail jmp 0x000A7160 */

}

/**
 * sub_00253D10
 * Original: 0x00253D10 - 0x00253D1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253D10: ;
    ecx = 0x33AE60;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}

/**
 * sub_00253D20
 * Original: 0x00253D20 - 0x00253D2A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253D20: ;
    ecx = 0x33AF08;
    g_seh_ebp = ebp; sub_00015B90(); return; /* tail jmp 0x00015B90 */

}
