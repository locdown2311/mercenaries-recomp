/**
 * Mercenaries - Recompiled code chunk 57
 * Functions: 250 (0x0024FEA0 - 0x00252AE0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0024FEA0
 * Original: 0x0024FEA0 - 0x0024FEB6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FEA0(void)
{

loc_0024FEA0: ;
    ecx = 0x3717A0;
    PUSH32(esp, 0x0024FEAAu); RECOMP_ABI_CALL(0x00112510u, sub_00112510); /* call 0x00112510 */

loc_0024FEAA: ;
    PUSH32(esp, 0x254710);
    PUSH32(esp, 0x0024FEB4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0024FEB4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024FEC0
 * Original: 0x0024FEC0 - 0x0024FED6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FEC0(void)
{

loc_0024FEC0: ;
    ecx = 0x371848;
    PUSH32(esp, 0x0024FECAu); RECOMP_ABI_CALL(0x00111F60u, sub_00111F60); /* call 0x00111F60 */

loc_0024FECA: ;
    PUSH32(esp, 0x254720);
    PUSH32(esp, 0x0024FED4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0024FED4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024FEE0
 * Original: 0x0024FEE0 - 0x0024FEEC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FEE0(void)
{

loc_0024FEE0: ;
    PUSH32(esp, 0x254730);
    PUSH32(esp, 0x0024FEEAu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0024FEEA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024FEF0
 * Original: 0x0024FEF0 - 0x0024FEFC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FEF0(void)
{

loc_0024FEF0: ;
    PUSH32(esp, 0x254740);
    PUSH32(esp, 0x0024FEFAu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0024FEFA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024FF00
 * Original: 0x0024FF00 - 0x0024FF1E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FF00: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0x371DE8;
    ecx = 0x400;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0024FF10: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0024FF10; /* jne: not equal / not zero */

loc_0024FF1D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FF20
 * Original: 0x0024FF20 - 0x0024FF3C (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FF20: ;
    eax = 0x373DE8;
    ecx = 0x400;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0024FF30: ;
    MEM8(eax) = LO8(edx);
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0024FF30; /* jne: not equal / not zero */

loc_0024FF3B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FF40
 * Original: 0x0024FF40 - 0x0024FF56 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FF40(void)
{

loc_0024FF40: ;
    ecx = 0x375EB4;
    PUSH32(esp, 0x0024FF4Au); RECOMP_ABI_CALL(0x000308A0u, sub_000308A0); /* call 0x000308A0 */

loc_0024FF4A: ;
    PUSH32(esp, 0x254770);
    PUSH32(esp, 0x0024FF54u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0024FF54: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024FF60
 * Original: 0x0024FF60 - 0x0024FF6C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FF60(void)
{

loc_0024FF60: ;
    PUSH32(esp, 0x254780);
    PUSH32(esp, 0x0024FF6Au); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0024FF6A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024FF70
 * Original: 0x0024FF70 - 0x0024FFE6 (118 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0024FF70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FF70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2F1780)); /* movss */
    PUSH32(esp, 0x3F000000);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2F177C)); /* movss */
    PUSH32(esp, ecx);
    ecx = 0x37A2F0;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024FFD5u); RECOMP_ABI_CALL(0x00191680u, sub_00191680); /* call 0x00191680 */

loc_0024FFD5: ;
    PUSH32(esp, 0x254840);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024FFDFu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0024FFDF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0024FFF0
 * Original: 0x0024FFF0 - 0x00250066 (118 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0024FFF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FFF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2F1784)); /* movss */
    PUSH32(esp, 0x3F000000);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2F16E8)); /* movss */
    PUSH32(esp, ecx);
    ecx = 0x37A320;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00250055u); RECOMP_ABI_CALL(0x00191680u, sub_00191680); /* call 0x00191680 */

loc_00250055: ;
    PUSH32(esp, 0x254790);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0025005Fu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0025005F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00250070
 * Original: 0x00250070 - 0x002500E6 (118 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00250070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250070: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2F1788)); /* movss */
    PUSH32(esp, 0x3F000000);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2F16EC)); /* movss */
    PUSH32(esp, ecx);
    ecx = 0x37A350;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002500D5u); RECOMP_ABI_CALL(0x00191680u, sub_00191680); /* call 0x00191680 */

loc_002500D5: ;
    PUSH32(esp, 0x2547A0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002500DFu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002500DF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002500F0
 * Original: 0x002500F0 - 0x00250111 (33 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002500F0(void)
{

loc_002500F0: ;
    eax = MEM32(0x30ED84);
    PUSH32(esp, eax);
    PUSH32(esp, 0x30E900);
    ecx = 0x37A380;
    PUSH32(esp, 0x00250105u); RECOMP_ABI_CALL(0x001907D0u, sub_001907D0); /* call 0x001907D0 */

loc_00250105: ;
    PUSH32(esp, 0x2547B0);
    PUSH32(esp, 0x0025010Fu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0025010F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250120
 * Original: 0x00250120 - 0x00250142 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250120: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x2547C0);
    MEM32(0x37A3A0) = eax;
    MEM32(0x37A3A4) = eax;
    MEM32(0x37A3A8) = 0x37A2F0;
    PUSH32(esp, 0x00250140u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250140: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250150
 * Original: 0x00250150 - 0x00250172 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250150: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x2547E0);
    MEM32(0x37A3AC) = eax;
    MEM32(0x37A3B0) = eax;
    MEM32(0x37A3B4) = 0x37A320;
    PUSH32(esp, 0x00250170u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250170: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250180
 * Original: 0x00250180 - 0x002501A2 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250180: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x254800);
    MEM32(0x37A3B8) = eax;
    MEM32(0x37A3BC) = eax;
    MEM32(0x37A3C0) = 0x37A350;
    PUSH32(esp, 0x002501A0u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002501A0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002501B0
 * Original: 0x002501B0 - 0x002501D2 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002501B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002501B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x254820);
    MEM32(0x37A3C4) = eax;
    MEM32(0x37A3C8) = eax;
    MEM32(0x37A3CC) = 0x37A380;
    PUSH32(esp, 0x002501D0u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002501D0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002501E0
 * Original: 0x002501E0 - 0x002501F6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002501E0(void)
{

loc_002501E0: ;
    ecx = 0x37A400;
    PUSH32(esp, 0x002501EAu); RECOMP_ABI_CALL(0x001462E0u, sub_001462E0); /* call 0x001462E0 */

loc_002501EA: ;
    PUSH32(esp, 0x254850);
    PUSH32(esp, 0x002501F4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002501F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250200
 * Original: 0x00250200 - 0x00250216 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250200(void)
{

loc_00250200: ;
    ecx = 0x37A448;
    PUSH32(esp, 0x0025020Au); RECOMP_ABI_CALL(0x0014CD30u, sub_0014CD30); /* call 0x0014CD30 */

loc_0025020A: ;
    PUSH32(esp, 0x254860);
    PUSH32(esp, 0x00250214u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250214: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250220
 * Original: 0x00250220 - 0x00250233 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250220: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x37A6D8);
    PUSH32(esp, 0x0025022Fu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_0025022F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00250240
 * Original: 0x00250240 - 0x00250256 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250240(void)
{

loc_00250240: ;
    ecx = 0x37A8D8;
    PUSH32(esp, 0x0025024Au); RECOMP_ABI_CALL(0x0008F9A0u, sub_0008F9A0); /* call 0x0008F9A0 */

loc_0025024A: ;
    PUSH32(esp, 0x254870);
    PUSH32(esp, 0x00250254u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250254: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250260
 * Original: 0x00250260 - 0x00250276 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250260(void)
{

loc_00250260: ;
    ecx = 0x37A928;
    PUSH32(esp, 0x0025026Au); RECOMP_ABI_CALL(0x0014D820u, sub_0014D820); /* call 0x0014D820 */

loc_0025026A: ;
    PUSH32(esp, 0x254880);
    PUSH32(esp, 0x00250274u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250274: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250280
 * Original: 0x00250280 - 0x00250290 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250280: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x37A9F8);
    PUSH32(esp, 0x0025028Cu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_0025028C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00250290
 * Original: 0x00250290 - 0x002502B0 (32 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250290(void)
{

loc_00250290: ;
    ecx = 0x37AA38;
    PUSH32(esp, 0x0025029Au); RECOMP_ABI_CALL(0x0014E2D0u, sub_0014E2D0); /* call 0x0014E2D0 */

loc_0025029A: ;
    PUSH32(esp, 0x254890);
    PUSH32(esp, 0x002502A4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002502A4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002502B0
 * Original: 0x002502B0 - 0x002502C3 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002502B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002502B0: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x37AEC8);
    PUSH32(esp, 0x002502BFu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_002502BF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002502D0
 * Original: 0x002502D0 - 0x002502E6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002502D0(void)
{

loc_002502D0: ;
    ecx = 0x37B2C8;
    PUSH32(esp, 0x002502DAu); RECOMP_ABI_CALL(0x0014E770u, sub_0014E770); /* call 0x0014E770 */

loc_002502DA: ;
    PUSH32(esp, 0x2548A0);
    PUSH32(esp, 0x002502E4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002502E4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002502F0
 * Original: 0x002502F0 - 0x00250318 (40 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002502F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002502F0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0x37BA28;
    ecx = 0x40;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00250300: ;
    MEM32(eax + -8) = edx;
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00250300; /* jne: not equal / not zero */

loc_00250317: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250320
 * Original: 0x00250320 - 0x0025032A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00250320: ;
    ecx = 0x37C420;
    g_seh_ebp = ebp; sub_00150E40(); return; /* tail jmp 0x00150E40 */

}

/**
 * sub_00250330
 * Original: 0x00250330 - 0x00250346 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250330(void)
{

loc_00250330: ;
    ecx = 0x37C4A8;
    PUSH32(esp, 0x0025033Au); RECOMP_ABI_CALL(0x00150E20u, sub_00150E20); /* call 0x00150E20 */

loc_0025033A: ;
    PUSH32(esp, 0x2548B0);
    PUSH32(esp, 0x00250344u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250344: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250350
 * Original: 0x00250350 - 0x00250366 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250350(void)
{

loc_00250350: ;
    ecx = 0x37C4C8;
    PUSH32(esp, 0x0025035Au); RECOMP_ABI_CALL(0x00153080u, sub_00153080); /* call 0x00153080 */

loc_0025035A: ;
    PUSH32(esp, 0x2548C0);
    PUSH32(esp, 0x00250364u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250364: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250370
 * Original: 0x00250370 - 0x00250386 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250370(void)
{

loc_00250370: ;
    ecx = 0x37DD10;
    PUSH32(esp, 0x0025037Au); RECOMP_ABI_CALL(0x00153020u, sub_00153020); /* call 0x00153020 */

loc_0025037A: ;
    PUSH32(esp, 0x2548D0);
    PUSH32(esp, 0x00250384u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250384: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250390
 * Original: 0x00250390 - 0x002503AC (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250390: ;
    ecx = 0x37DF50;
    edx = 0x20;
    /* nop */

loc_002503A0: ;
    PUSH32(esp, 0x002503A5u); RECOMP_ABI_CALL(0x001527C0u, sub_001527C0); /* call 0x001527C0 */

loc_002503A5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002503A0; /* jne: not equal / not zero */

loc_002503AB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002503B0
 * Original: 0x002503B0 - 0x002503C6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002503B0(void)
{

loc_002503B0: ;
    ecx = 0x37E158;
    PUSH32(esp, 0x002503BAu); RECOMP_ABI_CALL(0x00153A60u, sub_00153A60); /* call 0x00153A60 */

loc_002503BA: ;
    PUSH32(esp, 0x2548E0);
    PUSH32(esp, 0x002503C4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002503C4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002503D0
 * Original: 0x002503D0 - 0x002503E6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002503D0(void)
{

loc_002503D0: ;
    ecx = 0x37E160;
    PUSH32(esp, 0x002503DAu); RECOMP_ABI_CALL(0x00154260u, sub_00154260); /* call 0x00154260 */

loc_002503DA: ;
    PUSH32(esp, 0x2548F0);
    PUSH32(esp, 0x002503E4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002503E4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002503F0
 * Original: 0x002503F0 - 0x00250406 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002503F0(void)
{

loc_002503F0: ;
    ecx = 0x38E198;
    PUSH32(esp, 0x002503FAu); RECOMP_ABI_CALL(0x00154260u, sub_00154260); /* call 0x00154260 */

loc_002503FA: ;
    PUSH32(esp, 0x254900);
    PUSH32(esp, 0x00250404u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250404: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250410
 * Original: 0x00250410 - 0x00250426 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250410(void)
{

loc_00250410: ;
    ecx = 0x39E1D0;
    PUSH32(esp, 0x0025041Au); RECOMP_ABI_CALL(0x00154260u, sub_00154260); /* call 0x00154260 */

loc_0025041A: ;
    PUSH32(esp, 0x254910);
    PUSH32(esp, 0x00250424u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250424: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250430
 * Original: 0x00250430 - 0x00250446 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250430(void)
{

loc_00250430: ;
    ecx = 0x3AE208;
    PUSH32(esp, 0x0025043Au); RECOMP_ABI_CALL(0x00154260u, sub_00154260); /* call 0x00154260 */

loc_0025043A: ;
    PUSH32(esp, 0x254920);
    PUSH32(esp, 0x00250444u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250444: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250450
 * Original: 0x00250450 - 0x00250466 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250450(void)
{

loc_00250450: ;
    ecx = 0x3BE250;
    PUSH32(esp, 0x0025045Au); RECOMP_ABI_CALL(0x00157210u, sub_00157210); /* call 0x00157210 */

loc_0025045A: ;
    PUSH32(esp, 0x254930);
    PUSH32(esp, 0x00250464u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250464: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250470
 * Original: 0x00250470 - 0x00250486 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250470(void)
{

loc_00250470: ;
    ecx = 0x3BE340;
    PUSH32(esp, 0x0025047Au); RECOMP_ABI_CALL(0x001588B0u, sub_001588B0); /* call 0x001588B0 */

loc_0025047A: ;
    PUSH32(esp, 0x2549B0);
    PUSH32(esp, 0x00250484u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250484: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250490
 * Original: 0x00250490 - 0x0025049A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00250490: ;
    ecx = 0x3BE858;
    g_seh_ebp = ebp; sub_0015A2A0(); return; /* tail jmp 0x0015A2A0 */

}

/**
 * sub_002504A0
 * Original: 0x002504A0 - 0x002504B6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002504A0(void)
{

loc_002504A0: ;
    ecx = 0x3BEC58;
    PUSH32(esp, 0x002504AAu); RECOMP_ABI_CALL(0x0008F9A0u, sub_0008F9A0); /* call 0x0008F9A0 */

loc_002504AA: ;
    PUSH32(esp, 0x254940);
    PUSH32(esp, 0x002504B4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002504B4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002504C0
 * Original: 0x002504C0 - 0x002504D6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002504C0(void)
{

loc_002504C0: ;
    ecx = 0x3BECA8;
    PUSH32(esp, 0x002504CAu); RECOMP_ABI_CALL(0x00159C60u, sub_00159C60); /* call 0x00159C60 */

loc_002504CA: ;
    PUSH32(esp, 0x2549C0);
    PUSH32(esp, 0x002504D4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002504D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002504E0
 * Original: 0x002504E0 - 0x002504F6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002504E0(void)
{

loc_002504E0: ;
    ecx = 0x3BECD0;
    PUSH32(esp, 0x002504EAu); RECOMP_ABI_CALL(0x00159C80u, sub_00159C80); /* call 0x00159C80 */

loc_002504EA: ;
    PUSH32(esp, 0x2549D0);
    PUSH32(esp, 0x002504F4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002504F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250500
 * Original: 0x00250500 - 0x00250524 (36 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250500(void)
{

loc_00250500: ;
    PUSH32(esp, 0x30890);
    PUSH32(esp, 0x31080);
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3BECF8);
    PUSH32(esp, 0x00250518u); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_00250518: ;
    PUSH32(esp, 0x254950);
    PUSH32(esp, 0x00250522u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250522: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250530
 * Original: 0x00250530 - 0x00250546 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250530(void)
{

loc_00250530: ;
    ecx = 0x3BED10;
    PUSH32(esp, 0x0025053Au); RECOMP_ABI_CALL(0x00031080u, sub_00031080); /* call 0x00031080 */

loc_0025053A: ;
    PUSH32(esp, 0x254970);
    PUSH32(esp, 0x00250544u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250544: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250550
 * Original: 0x00250550 - 0x00250566 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250550(void)
{

loc_00250550: ;
    ecx = 0x3BED24;
    PUSH32(esp, 0x0025055Au); RECOMP_ABI_CALL(0x00158470u, sub_00158470); /* call 0x00158470 */

loc_0025055A: ;
    PUSH32(esp, 0x254980);
    PUSH32(esp, 0x00250564u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250564: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250570
 * Original: 0x00250570 - 0x00250586 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250570(void)
{

loc_00250570: ;
    ecx = 0x3BED38;
    PUSH32(esp, 0x0025057Au); RECOMP_ABI_CALL(0x00158490u, sub_00158490); /* call 0x00158490 */

loc_0025057A: ;
    PUSH32(esp, 0x254990);
    PUSH32(esp, 0x00250584u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250584: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250590
 * Original: 0x00250590 - 0x002505A6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250590(void)
{

loc_00250590: ;
    ecx = 0x3BED4C;
    PUSH32(esp, 0x0025059Au); RECOMP_ABI_CALL(0x001584B0u, sub_001584B0); /* call 0x001584B0 */

loc_0025059A: ;
    PUSH32(esp, 0x2549A0);
    PUSH32(esp, 0x002505A4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002505A4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002505B0
 * Original: 0x002505B0 - 0x002505BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002505B0(void)
{

loc_002505B0: ;
    PUSH32(esp, 0x2549E0);
    PUSH32(esp, 0x002505BAu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002505BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002505C0
 * Original: 0x002505C0 - 0x002505D0 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002505C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002505C0: ;
    ecx = 0x3BED70;
    g_seh_ebp = ebp; sub_0015C310(); return; /* tail jmp 0x0015C310 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_002505D0
 * Original: 0x002505D0 - 0x002505E0 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002505D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002505D0: ;
    ecx = 0x3BF678;
    g_seh_ebp = ebp; sub_0015DBA0(); return; /* tail jmp 0x0015DBA0 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_002505E0
 * Original: 0x002505E0 - 0x002505F6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002505E0(void)
{

loc_002505E0: ;
    ecx = 0x3C0470;
    PUSH32(esp, 0x002505EAu); RECOMP_ABI_CALL(0x0015E860u, sub_0015E860); /* call 0x0015E860 */

loc_002505EA: ;
    PUSH32(esp, 0x2549F0);
    PUSH32(esp, 0x002505F4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002505F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250600
 * Original: 0x00250600 - 0x0025060A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00250600: ;
    ecx = 0x3C0480;
    g_seh_ebp = ebp; sub_0015ED50(); return; /* tail jmp 0x0015ED50 */

}

/**
 * sub_00250610
 * Original: 0x00250610 - 0x00250623 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250610: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x3C0700);
    PUSH32(esp, 0x0025061Fu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_0025061F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00250630
 * Original: 0x00250630 - 0x00250654 (36 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250630(void)
{

loc_00250630: ;
    PUSH32(esp, 0x209040);
    PUSH32(esp, 0x15EF30);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x78);
    PUSH32(esp, 0x3C0900);
    PUSH32(esp, 0x00250648u); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_00250648: ;
    PUSH32(esp, 0x254A00);
    PUSH32(esp, 0x00250652u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250652: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250660
 * Original: 0x00250660 - 0x00250676 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250660(void)
{

loc_00250660: ;
    ecx = 0x3C2700;
    PUSH32(esp, 0x0025066Au); RECOMP_ABI_CALL(0x0015EE70u, sub_0015EE70); /* call 0x0015EE70 */

loc_0025066A: ;
    PUSH32(esp, 0x254A20);
    PUSH32(esp, 0x00250674u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250674: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250680
 * Original: 0x00250680 - 0x00250690 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250680: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x3C3138);
    PUSH32(esp, 0x0025068Cu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_0025068C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00250690
 * Original: 0x00250690 - 0x002506C0 (48 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250690(void)
{

loc_00250690: ;
    PUSH32(esp, 0x15FD40);
    PUSH32(esp, 0x15FD00);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x1760);
    PUSH32(esp, 0x3C31B8);
    PUSH32(esp, 0x002506ABu); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_002506AB: ;
    PUSH32(esp, 0x254A40);
    PUSH32(esp, 0x002506B5u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002506B5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002506C0
 * Original: 0x002506C0 - 0x002506D6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002506C0(void)
{

loc_002506C0: ;
    ecx = 0x3DA7B8;
    PUSH32(esp, 0x002506CAu); RECOMP_ABI_CALL(0x0015FA60u, sub_0015FA60); /* call 0x0015FA60 */

loc_002506CA: ;
    PUSH32(esp, 0x254A30);
    PUSH32(esp, 0x002506D4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002506D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002506E0
 * Original: 0x002506E0 - 0x002506F6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002506E0(void)
{

loc_002506E0: ;
    ecx = 0x3DA7D8;
    PUSH32(esp, 0x002506EAu); RECOMP_ABI_CALL(0x00161CC0u, sub_00161CC0); /* call 0x00161CC0 */

loc_002506EA: ;
    PUSH32(esp, 0x254A60);
    PUSH32(esp, 0x002506F4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002506F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250700
 * Original: 0x00250700 - 0x00250716 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250700(void)
{

loc_00250700: ;
    ecx = 0x3DC970;
    PUSH32(esp, 0x0025070Au); RECOMP_ABI_CALL(0x0016B7F0u, sub_0016B7F0); /* call 0x0016B7F0 */

loc_0025070A: ;
    PUSH32(esp, 0x254A70);
    PUSH32(esp, 0x00250714u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250714: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250720
 * Original: 0x00250720 - 0x002507A4 (132 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250720(void)
{

loc_00250720: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3FC00000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x606060);
    PUSH32(esp, 0x50606060);
    PUSH32(esp, 0x606060);
    PUSH32(esp, 0x606060);
    PUSH32(esp, 0x50606060);
    PUSH32(esp, 0x606060);
    PUSH32(esp, 0);
    PUSH32(esp, 0xAA497B22u);
    ecx = 0x402C60;
    PUSH32(esp, 0x00250798u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00250798: ;
    PUSH32(esp, 0x254A80);
    PUSH32(esp, 0x002507A2u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002507A2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002507B0
 * Original: 0x002507B0 - 0x00250834 (132 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002507B0(void)
{

loc_002507B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0xC0000000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x505050);
    PUSH32(esp, 0x10505050);
    PUSH32(esp, 0x505050);
    PUSH32(esp, 0x505050);
    PUSH32(esp, 0x10505050);
    PUSH32(esp, 0x505050);
    PUSH32(esp, 0);
    PUSH32(esp, 0x13B816A7);
    ecx = 0x402D08;
    PUSH32(esp, 0x00250828u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00250828: ;
    PUSH32(esp, 0x254A90);
    PUSH32(esp, 0x00250832u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250832: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250840
 * Original: 0x00250840 - 0x002508BE (126 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250840(void)
{

loc_00250840: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x41E00000);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x428C0000);
    PUSH32(esp, 0x42700000);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, 0x202020);
    PUSH32(esp, 0x20202020);
    PUSH32(esp, 0x202020);
    PUSH32(esp, 0x303030);
    PUSH32(esp, 0x20303030);
    PUSH32(esp, 0x303030);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA7C73459u);
    ecx = 0x402DB0;
    PUSH32(esp, 0x002508B2u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_002508B2: ;
    PUSH32(esp, 0x254AA0);
    PUSH32(esp, 0x002508BCu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002508BC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002508C0
 * Original: 0x002508C0 - 0x00250944 (132 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002508C0(void)
{

loc_002508C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x181818);
    PUSH32(esp, 0x30181818);
    PUSH32(esp, 0x181818);
    PUSH32(esp, 0x202020);
    PUSH32(esp, 0x30202020);
    PUSH32(esp, 0x202020);
    PUSH32(esp, 0);
    PUSH32(esp, 0x13B816A7);
    ecx = 0x402E58;
    PUSH32(esp, 0x00250938u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00250938: ;
    PUSH32(esp, 0x254AB0);
    PUSH32(esp, 0x00250942u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250942: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250950
 * Original: 0x00250950 - 0x002509D7 (135 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250950(void)
{

loc_00250950: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xBF000000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3010);
    PUSH32(esp, 0x80003010u);
    PUSH32(esp, 0x3010);
    PUSH32(esp, 0x1030);
    PUSH32(esp, 0x80001030u);
    PUSH32(esp, 0x1030);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2648CD55);
    ecx = 0x402F00;
    PUSH32(esp, 0x002509CBu); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_002509CB: ;
    PUSH32(esp, 0x254AC0);
    PUSH32(esp, 0x002509D5u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002509D5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002509E0
 * Original: 0x002509E0 - 0x00250A64 (132 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002509E0(void)
{

loc_002509E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0xBF99999Au);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x1030);
    PUSH32(esp, 0x80001030u);
    PUSH32(esp, 0x1030);
    PUSH32(esp, 0x1030);
    PUSH32(esp, 0x80001030u);
    PUSH32(esp, 0x1030);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2648CD55);
    ecx = 0x402FA8;
    PUSH32(esp, 0x00250A58u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00250A58: ;
    PUSH32(esp, 0x254AD0);
    PUSH32(esp, 0x00250A62u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250A62: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250A70
 * Original: 0x00250A70 - 0x00250AF4 (132 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250A70(void)
{

loc_00250A70: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0xBFA66666u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3E3851EC);
    PUSH32(esp, 0x3E3851EC);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3E3851EC);
    PUSH32(esp, 0x3E3851EC);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x2030);
    PUSH32(esp, 0x80002030u);
    PUSH32(esp, 0x2030);
    PUSH32(esp, 0x2030);
    PUSH32(esp, 0x80002030u);
    PUSH32(esp, 0x2030);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2648CD55);
    ecx = 0x403050;
    PUSH32(esp, 0x00250AE8u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00250AE8: ;
    PUSH32(esp, 0x254AE0);
    PUSH32(esp, 0x00250AF2u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250AF2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250B00
 * Original: 0x00250B00 - 0x00250B84 (132 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250B00(void)
{

loc_00250B00: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0xBF8CCCCDu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3010);
    PUSH32(esp, 0x80003010u);
    PUSH32(esp, 0x3010);
    PUSH32(esp, 0x3010);
    PUSH32(esp, 0x80003010u);
    PUSH32(esp, 0x3010);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2648CD55);
    ecx = 0x4030F8;
    PUSH32(esp, 0x00250B78u); RECOMP_ABI_CALL(0x001FB660u, sub_001FB660); /* call 0x001FB660 */

loc_00250B78: ;
    PUSH32(esp, 0x254AF0);
    PUSH32(esp, 0x00250B82u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250B82: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250B90
 * Original: 0x00250B90 - 0x00250BB0 (32 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250B90(void)
{

loc_00250B90: ;
    ecx = 0x4031B0;
    PUSH32(esp, 0x00250B9Au); RECOMP_ABI_CALL(0x001EAD90u, sub_001EAD90); /* call 0x001EAD90 */

loc_00250B9A: ;
    PUSH32(esp, 0x254B00);
    MEM32(0x4031B0) = 0x2F3190;
    PUSH32(esp, 0x00250BAEu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250BAE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250BB0
 * Original: 0x00250BB0 - 0x00250BD0 (32 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250BB0(void)
{

loc_00250BB0: ;
    ecx = 0x403248;
    PUSH32(esp, 0x00250BBAu); RECOMP_ABI_CALL(0x00173670u, sub_00173670); /* call 0x00173670 */

loc_00250BBA: ;
    PUSH32(esp, 0x254B10);
    PUSH32(esp, 0x00250BC4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250BC4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250BD0
 * Original: 0x00250BD0 - 0x00250BE6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250BD0(void)
{

loc_00250BD0: ;
    ecx = 0x4033E0;
    PUSH32(esp, 0x00250BDAu); RECOMP_ABI_CALL(0x00175740u, sub_00175740); /* call 0x00175740 */

loc_00250BDA: ;
    PUSH32(esp, 0x254B20);
    PUSH32(esp, 0x00250BE4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250BE4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250BF0
 * Original: 0x00250BF0 - 0x00250C06 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250BF0(void)
{

loc_00250BF0: ;
    ecx = 0x403400;
    PUSH32(esp, 0x00250BFAu); RECOMP_ABI_CALL(0x00176EE0u, sub_00176EE0); /* call 0x00176EE0 */

loc_00250BFA: ;
    PUSH32(esp, 0x254B40);
    PUSH32(esp, 0x00250C04u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250C04: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250C10
 * Original: 0x00250C10 - 0x00250C26 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250C10(void)
{

loc_00250C10: ;
    ecx = 0x4036A8;
    PUSH32(esp, 0x00250C1Au); RECOMP_ABI_CALL(0x001766B0u, sub_001766B0); /* call 0x001766B0 */

loc_00250C1A: ;
    PUSH32(esp, 0x254B30);
    PUSH32(esp, 0x00250C24u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250C24: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250C30
 * Original: 0x00250C30 - 0x00250C46 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250C30(void)
{

loc_00250C30: ;
    ecx = 0x403750;
    PUSH32(esp, 0x00250C3Au); RECOMP_ABI_CALL(0x00177A10u, sub_00177A10); /* call 0x00177A10 */

loc_00250C3A: ;
    PUSH32(esp, 0x254B50);
    PUSH32(esp, 0x00250C44u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250C44: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250C50
 * Original: 0x00250C50 - 0x00250C75 (37 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250C50: ;
    eax = 0x403838;
    edx = 0x10;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00250C60: ;
    MEM32(eax + -8) = ecx;
    MEM32(eax + -4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM8(eax + 8) = LO8(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00250C60; /* jne: not equal / not zero */

loc_00250C74: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250C80
 * Original: 0x00250C80 - 0x00250C8C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250C80(void)
{

loc_00250C80: ;
    PUSH32(esp, 0x254B60);
    PUSH32(esp, 0x00250C8Au); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250C8A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250C90
 * Original: 0x00250C90 - 0x00250CA6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250C90(void)
{

loc_00250C90: ;
    ecx = 0x4140A0;
    PUSH32(esp, 0x00250C9Au); RECOMP_ABI_CALL(0x00111EC0u, sub_00111EC0); /* call 0x00111EC0 */

loc_00250C9A: ;
    PUSH32(esp, 0x254B70);
    PUSH32(esp, 0x00250CA4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250CA4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250CB0
 * Original: 0x00250CB0 - 0x00250CBA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00250CB0: ;
    ecx = 0x4140CC;
    g_seh_ebp = ebp; sub_001FFD10(); return; /* tail jmp 0x001FFD10 */

}

/**
 * sub_00250CC0
 * Original: 0x00250CC0 - 0x00250CCA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250CC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00250CC0: ;
    ecx = 0x4140D8;
    g_seh_ebp = ebp; sub_001FFD10(); return; /* tail jmp 0x001FFD10 */

}

/**
 * sub_00250CD0
 * Original: 0x00250CD0 - 0x00250CE6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250CD0(void)
{

loc_00250CD0: ;
    ecx = 0x4140E8;
    PUSH32(esp, 0x00250CDAu); RECOMP_ABI_CALL(0x00097AD0u, sub_00097AD0); /* call 0x00097AD0 */

loc_00250CDA: ;
    PUSH32(esp, 0x254BB0);
    PUSH32(esp, 0x00250CE4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250CE4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250CF0
 * Original: 0x00250CF0 - 0x00250CFC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250CF0(void)
{

loc_00250CF0: ;
    PUSH32(esp, 0x254BC0);
    PUSH32(esp, 0x00250CFAu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250CFA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250D00
 * Original: 0x00250D00 - 0x00250D0C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250D00(void)
{

loc_00250D00: ;
    PUSH32(esp, 0x254BD0);
    PUSH32(esp, 0x00250D0Au); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250D0A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250D10
 * Original: 0x00250D10 - 0x00250D1C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250D10(void)
{

loc_00250D10: ;
    PUSH32(esp, 0x254BE0);
    PUSH32(esp, 0x00250D1Au); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250D1A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250D20
 * Original: 0x00250D20 - 0x00250D2A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00250D20: ;
    ecx = 0x414148;
    g_seh_ebp = ebp; sub_000B5E50(); return; /* tail jmp 0x000B5E50 */

}

/**
 * sub_00250D30
 * Original: 0x00250D30 - 0x00250D46 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250D30(void)
{

loc_00250D30: ;
    ecx = 0x414150;
    PUSH32(esp, 0x00250D3Au); RECOMP_ABI_CALL(0x00121FC0u, sub_00121FC0); /* call 0x00121FC0 */

loc_00250D3A: ;
    PUSH32(esp, 0x254B80);
    PUSH32(esp, 0x00250D44u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250D44: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250D50
 * Original: 0x00250D50 - 0x00250D66 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250D50(void)
{

loc_00250D50: ;
    ecx = 0x417168;
    PUSH32(esp, 0x00250D5Au); RECOMP_ABI_CALL(0x00179850u, sub_00179850); /* call 0x00179850 */

loc_00250D5A: ;
    PUSH32(esp, 0x254B90);
    PUSH32(esp, 0x00250D64u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250D64: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250D70
 * Original: 0x00250D70 - 0x00250D8E (30 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250D70: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x100;
    edi = 0x4171A4;
    PUSH32(esp, 0x254BF0);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x00250D89u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250D89: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00250D90
 * Original: 0x00250D90 - 0x00250DA6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250D90(void)
{

loc_00250D90: ;
    ecx = 0x4175A4;
    PUSH32(esp, 0x00250D9Au); RECOMP_ABI_CALL(0x00181100u, sub_00181100); /* call 0x00181100 */

loc_00250D9A: ;
    PUSH32(esp, 0x254C00);
    PUSH32(esp, 0x00250DA4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250DA4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250DB0
 * Original: 0x00250DB0 - 0x00250DC6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250DB0(void)
{

loc_00250DB0: ;
    ecx = 0x4175B8;
    PUSH32(esp, 0x00250DBAu); RECOMP_ABI_CALL(0x001872B0u, sub_001872B0); /* call 0x001872B0 */

loc_00250DBA: ;
    PUSH32(esp, 0x254C10);
    PUSH32(esp, 0x00250DC4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250DC4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250DD0
 * Original: 0x00250DD0 - 0x00250DE6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250DD0(void)
{

loc_00250DD0: ;
    ecx = 0x4175D8;
    PUSH32(esp, 0x00250DDAu); RECOMP_ABI_CALL(0x00179890u, sub_00179890); /* call 0x00179890 */

loc_00250DDA: ;
    PUSH32(esp, 0x254C20);
    PUSH32(esp, 0x00250DE4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250DE4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250DF0
 * Original: 0x00250DF0 - 0x00250E06 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250DF0(void)
{

loc_00250DF0: ;
    ecx = 0x4175EC;
    PUSH32(esp, 0x00250DFAu); RECOMP_ABI_CALL(0x00178B20u, sub_00178B20); /* call 0x00178B20 */

loc_00250DFA: ;
    PUSH32(esp, 0x254C30);
    PUSH32(esp, 0x00250E04u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250E04: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250E10
 * Original: 0x00250E10 - 0x00250E26 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250E10(void)
{

loc_00250E10: ;
    ecx = 0x417600;
    PUSH32(esp, 0x00250E1Au); RECOMP_ABI_CALL(0x00222B20u, sub_00222B20); /* call 0x00222B20 */

loc_00250E1A: ;
    PUSH32(esp, 0x254BA0);
    PUSH32(esp, 0x00250E24u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250E24: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250E30
 * Original: 0x00250E30 - 0x00250E46 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250E30(void)
{

loc_00250E30: ;
    ecx = 0x425970;
    PUSH32(esp, 0x00250E3Au); RECOMP_ABI_CALL(0x00205720u, sub_00205720); /* call 0x00205720 */

loc_00250E3A: ;
    PUSH32(esp, 0x254C40);
    PUSH32(esp, 0x00250E44u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250E44: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250E50
 * Original: 0x00250E50 - 0x00250E66 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250E50(void)
{

loc_00250E50: ;
    ecx = 0x425B4C;
    PUSH32(esp, 0x00250E5Au); RECOMP_ABI_CALL(0x00179790u, sub_00179790); /* call 0x00179790 */

loc_00250E5A: ;
    PUSH32(esp, 0x254C50);
    PUSH32(esp, 0x00250E64u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250E64: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250E70
 * Original: 0x00250E70 - 0x00250E86 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250E70(void)
{

loc_00250E70: ;
    ecx = 0x425B88;
    PUSH32(esp, 0x00250E7Au); RECOMP_ABI_CALL(0x00179820u, sub_00179820); /* call 0x00179820 */

loc_00250E7A: ;
    PUSH32(esp, 0x254C60);
    PUSH32(esp, 0x00250E84u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250E84: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250E90
 * Original: 0x00250E90 - 0x00250EA6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250E90(void)
{

loc_00250E90: ;
    ecx = 0x426BC8;
    PUSH32(esp, 0x00250E9Au); RECOMP_ABI_CALL(0x00185CF0u, sub_00185CF0); /* call 0x00185CF0 */

loc_00250E9A: ;
    PUSH32(esp, 0x254D70);
    PUSH32(esp, 0x00250EA4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250EA4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250EB0
 * Original: 0x00250EB0 - 0x00250EC6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250EB0(void)
{

loc_00250EB0: ;
    ecx = 0x42AA9C;
    PUSH32(esp, 0x00250EBAu); RECOMP_ABI_CALL(0x00183A90u, sub_00183A90); /* call 0x00183A90 */

loc_00250EBA: ;
    PUSH32(esp, 0x254C70);
    PUSH32(esp, 0x00250EC4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250EC4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250ED0
 * Original: 0x00250ED0 - 0x00250EE6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250ED0(void)
{

loc_00250ED0: ;
    ecx = 0x42AAA4;
    PUSH32(esp, 0x00250EDAu); RECOMP_ABI_CALL(0x00183AA0u, sub_00183AA0); /* call 0x00183AA0 */

loc_00250EDA: ;
    PUSH32(esp, 0x254C80);
    PUSH32(esp, 0x00250EE4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250EE4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250EF0
 * Original: 0x00250EF0 - 0x00250F06 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250EF0(void)
{

loc_00250EF0: ;
    ecx = 0x42AAD0;
    PUSH32(esp, 0x00250EFAu); RECOMP_ABI_CALL(0x00183AC0u, sub_00183AC0); /* call 0x00183AC0 */

loc_00250EFA: ;
    PUSH32(esp, 0x254C90);
    PUSH32(esp, 0x00250F04u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250F04: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250F10
 * Original: 0x00250F10 - 0x00250F26 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250F10(void)
{

loc_00250F10: ;
    ecx = 0x42AAE8;
    PUSH32(esp, 0x00250F1Au); RECOMP_ABI_CALL(0x001810E0u, sub_001810E0); /* call 0x001810E0 */

loc_00250F1A: ;
    PUSH32(esp, 0x254CA0);
    PUSH32(esp, 0x00250F24u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250F24: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250F30
 * Original: 0x00250F30 - 0x00250F46 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250F30(void)
{

loc_00250F30: ;
    ecx = 0x42AAEC;
    PUSH32(esp, 0x00250F3Au); RECOMP_ABI_CALL(0x00183AE0u, sub_00183AE0); /* call 0x00183AE0 */

loc_00250F3A: ;
    PUSH32(esp, 0x254CB0);
    PUSH32(esp, 0x00250F44u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250F44: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250F50
 * Original: 0x00250F50 - 0x00250F66 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250F50(void)
{

loc_00250F50: ;
    ecx = 0x42AAF8;
    PUSH32(esp, 0x00250F5Au); RECOMP_ABI_CALL(0x001810F0u, sub_001810F0); /* call 0x001810F0 */

loc_00250F5A: ;
    PUSH32(esp, 0x254CC0);
    PUSH32(esp, 0x00250F64u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250F64: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250F70
 * Original: 0x00250F70 - 0x00250F86 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250F70(void)
{

loc_00250F70: ;
    ecx = 0x42AB00;
    PUSH32(esp, 0x00250F7Au); RECOMP_ABI_CALL(0x00183AF0u, sub_00183AF0); /* call 0x00183AF0 */

loc_00250F7A: ;
    PUSH32(esp, 0x254CD0);
    PUSH32(esp, 0x00250F84u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250F84: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250F90
 * Original: 0x00250F90 - 0x00250FA6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250F90(void)
{

loc_00250F90: ;
    ecx = 0x42AB2C;
    PUSH32(esp, 0x00250F9Au); RECOMP_ABI_CALL(0x00183B10u, sub_00183B10); /* call 0x00183B10 */

loc_00250F9A: ;
    PUSH32(esp, 0x254CE0);
    PUSH32(esp, 0x00250FA4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250FA4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250FB0
 * Original: 0x00250FB0 - 0x00250FC6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250FB0(void)
{

loc_00250FB0: ;
    ecx = 0x42AB54;
    PUSH32(esp, 0x00250FBAu); RECOMP_ABI_CALL(0x00183B30u, sub_00183B30); /* call 0x00183B30 */

loc_00250FBA: ;
    PUSH32(esp, 0x254CF0);
    PUSH32(esp, 0x00250FC4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250FC4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250FD0
 * Original: 0x00250FD0 - 0x00250FE6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250FD0(void)
{

loc_00250FD0: ;
    ecx = 0x42AB68;
    PUSH32(esp, 0x00250FDAu); RECOMP_ABI_CALL(0x00183B50u, sub_00183B50); /* call 0x00183B50 */

loc_00250FDA: ;
    PUSH32(esp, 0x254D00);
    PUSH32(esp, 0x00250FE4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00250FE4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00250FF0
 * Original: 0x00250FF0 - 0x00251006 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250FF0(void)
{

loc_00250FF0: ;
    ecx = 0x42AD28;
    PUSH32(esp, 0x00250FFAu); RECOMP_ABI_CALL(0x00183B90u, sub_00183B90); /* call 0x00183B90 */

loc_00250FFA: ;
    PUSH32(esp, 0x254D10);
    PUSH32(esp, 0x00251004u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251004: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251010
 * Original: 0x00251010 - 0x00251026 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251010(void)
{

loc_00251010: ;
    ecx = 0x42AD60;
    PUSH32(esp, 0x0025101Au); RECOMP_ABI_CALL(0x00183BC0u, sub_00183BC0); /* call 0x00183BC0 */

loc_0025101A: ;
    PUSH32(esp, 0x254D20);
    PUSH32(esp, 0x00251024u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251024: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251030
 * Original: 0x00251030 - 0x00251046 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251030(void)
{

loc_00251030: ;
    ecx = 0x42AD7C;
    PUSH32(esp, 0x0025103Au); RECOMP_ABI_CALL(0x00183BE0u, sub_00183BE0); /* call 0x00183BE0 */

loc_0025103A: ;
    PUSH32(esp, 0x254D30);
    PUSH32(esp, 0x00251044u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251044: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251050
 * Original: 0x00251050 - 0x00251066 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251050(void)
{

loc_00251050: ;
    ecx = 0x42AD98;
    PUSH32(esp, 0x0025105Au); RECOMP_ABI_CALL(0x00183C00u, sub_00183C00); /* call 0x00183C00 */

loc_0025105A: ;
    PUSH32(esp, 0x254D40);
    PUSH32(esp, 0x00251064u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251064: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251070
 * Original: 0x00251070 - 0x00251094 (36 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251070(void)
{

loc_00251070: ;
    PUSH32(esp, 0x209040);
    PUSH32(esp, 0x180F10);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x42ADA8);
    PUSH32(esp, 0x00251088u); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_00251088: ;
    PUSH32(esp, 0x254D50);
    PUSH32(esp, 0x00251092u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251092: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002510A0
 * Original: 0x002510A0 - 0x002510B6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002510A0(void)
{

loc_002510A0: ;
    ecx = 0x42B6E8;
    PUSH32(esp, 0x002510AAu); RECOMP_ABI_CALL(0x00186150u, sub_00186150); /* call 0x00186150 */

loc_002510AA: ;
    PUSH32(esp, 0x254D80);
    PUSH32(esp, 0x002510B4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002510B4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002510C0
 * Original: 0x002510C0 - 0x002510D6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002510C0(void)
{

loc_002510C0: ;
    ecx = 0x42BE88;
    PUSH32(esp, 0x002510CAu); RECOMP_ABI_CALL(0x000BCED0u, sub_000BCED0); /* call 0x000BCED0 */

loc_002510CA: ;
    PUSH32(esp, 0x254D90);
    PUSH32(esp, 0x002510D4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002510D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002510E0
 * Original: 0x002510E0 - 0x002510F6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002510E0(void)
{

loc_002510E0: ;
    ecx = 0x42C268;
    PUSH32(esp, 0x002510EAu); RECOMP_ABI_CALL(0x00215B00u, sub_00215B00); /* call 0x00215B00 */

loc_002510EA: ;
    PUSH32(esp, 0x254DA0);
    PUSH32(esp, 0x002510F4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002510F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251100
 * Original: 0x00251100 - 0x00251291 (401 bytes, 111 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251100(void)
{

loc_00251100: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x27B324A4);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x67);
    PUSH32(esp, 0x1F);
    PUSH32(esp, 5);
    PUSH32(esp, 0x9D89FC44u);
    ecx = 0x42C2C8;
    PUSH32(esp, 0x00251128u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_00251128: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x27B324A4);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x67);
    PUSH32(esp, 5);
    PUSH32(esp, 5);
    PUSH32(esp, 0x8C3FA07Eu);
    ecx = 0x42C2E8;
    PUSH32(esp, 0x00251150u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_00251150: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x27B324A4);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x67);
    PUSH32(esp, 0x53);
    PUSH32(esp, 5);
    PUSH32(esp, 0x16C2B9F3);
    ecx = 0x42C308;
    PUSH32(esp, 0x00251178u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_00251178: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x27B324A4);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x67);
    PUSH32(esp, 0x39);
    PUSH32(esp, 5);
    PUSH32(esp, 0x93E7AA53u);
    ecx = 0x42C328;
    PUSH32(esp, 0x002511A0u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_002511A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x27B324A4);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x67);
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x71);
    PUSH32(esp, 0xE2FA2E32u);
    ecx = 0x42C348;
    PUSH32(esp, 0x002511C8u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_002511C8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x27B324A4);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x67);
    PUSH32(esp, 5);
    PUSH32(esp, 0x71);
    PUSH32(esp, 0x9CC94B98u);
    ecx = 0x42C368;
    PUSH32(esp, 0x002511F0u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_002511F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x27B324A4);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x67);
    PUSH32(esp, 0x53);
    PUSH32(esp, 0x71);
    PUSH32(esp, 0xFD51EE4Cu);
    ecx = 0x42C388;
    PUSH32(esp, 0x00251218u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_00251218: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x27B324A4);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x67);
    PUSH32(esp, 0x39);
    PUSH32(esp, 0x71);
    PUSH32(esp, 0x18DFF076);
    ecx = 0x42C3A8;
    PUSH32(esp, 0x00251240u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_00251240: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x27B324A4);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x67);
    PUSH32(esp, 0x6D);
    PUSH32(esp, 5);
    PUSH32(esp, 0x3A817CA2);
    ecx = 0x42C3C8;
    PUSH32(esp, 0x00251268u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_00251268: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x27B324A4);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x67);
    PUSH32(esp, 0x6D);
    PUSH32(esp, 0x71);
    PUSH32(esp, 0xED962208u);
    ecx = 0x42C3E8;
    PUSH32(esp, 0x00251290u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_00251290: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002512A0
 * Original: 0x002512A0 - 0x002512B6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002512A0(void)
{

loc_002512A0: ;
    ecx = 0x42C408;
    PUSH32(esp, 0x002512AAu); RECOMP_ABI_CALL(0x001866A0u, sub_001866A0); /* call 0x001866A0 */

loc_002512AA: ;
    PUSH32(esp, 0x254DE0);
    PUSH32(esp, 0x002512B4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002512B4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002512C0
 * Original: 0x002512C0 - 0x002512D6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002512C0(void)
{

loc_002512C0: ;
    ecx = 0x42C560;
    PUSH32(esp, 0x002512CAu); RECOMP_ABI_CALL(0x001866B0u, sub_001866B0); /* call 0x001866B0 */

loc_002512CA: ;
    PUSH32(esp, 0x254DF0);
    PUSH32(esp, 0x002512D4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002512D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002512E0
 * Original: 0x002512E0 - 0x002512F6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002512E0(void)
{

loc_002512E0: ;
    ecx = 0x42C738;
    PUSH32(esp, 0x002512EAu); RECOMP_ABI_CALL(0x001866C0u, sub_001866C0); /* call 0x001866C0 */

loc_002512EA: ;
    PUSH32(esp, 0x254E00);
    PUSH32(esp, 0x002512F4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002512F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251300
 * Original: 0x00251300 - 0x00251316 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251300(void)
{

loc_00251300: ;
    ecx = 0x42C740;
    PUSH32(esp, 0x0025130Au); RECOMP_ABI_CALL(0x0008F9A0u, sub_0008F9A0); /* call 0x0008F9A0 */

loc_0025130A: ;
    PUSH32(esp, 0x254E10);
    PUSH32(esp, 0x00251314u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251314: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251320
 * Original: 0x00251320 - 0x00251336 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251320(void)
{

loc_00251320: ;
    ecx = 0x42C790;
    PUSH32(esp, 0x0025132Au); RECOMP_ABI_CALL(0x00186D90u, sub_00186D90); /* call 0x00186D90 */

loc_0025132A: ;
    PUSH32(esp, 0x254F20);
    PUSH32(esp, 0x00251334u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251334: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251340
 * Original: 0x00251340 - 0x00251356 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251340(void)
{

loc_00251340: ;
    ecx = 0x42C7B8;
    PUSH32(esp, 0x0025134Au); RECOMP_ABI_CALL(0x000A5A20u, sub_000A5A20); /* call 0x000A5A20 */

loc_0025134A: ;
    PUSH32(esp, 0x254DB0);
    PUSH32(esp, 0x00251354u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251354: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251360
 * Original: 0x00251360 - 0x00251391 (49 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251360(void)
{

loc_00251360: ;
    PUSH32(esp, 0xED962208u);
    PUSH32(esp, 0x3A817CA2);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41B00000);
    PUSH32(esp, 0x42CE0000);
    PUSH32(esp, 0x816FEDE0u);
    ecx = 0x42D080;
    PUSH32(esp, 0x00251385u); RECOMP_ABI_CALL(0x00186D20u, sub_00186D20); /* call 0x00186D20 */

loc_00251385: ;
    PUSH32(esp, 0x254E20);
    PUSH32(esp, 0x0025138Fu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0025138F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002513A0
 * Original: 0x002513A0 - 0x002513D1 (49 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002513A0(void)
{

loc_002513A0: ;
    PUSH32(esp, 0x18DFF076);
    PUSH32(esp, 0xFD51EE4Cu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41B00000);
    PUSH32(esp, 0x42CE0000);
    PUSH32(esp, 0xE60759E9u);
    ecx = 0x42D0A0;
    PUSH32(esp, 0x002513C5u); RECOMP_ABI_CALL(0x00186D20u, sub_00186D20); /* call 0x00186D20 */

loc_002513C5: ;
    PUSH32(esp, 0x254E30);
    PUSH32(esp, 0x002513CFu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002513CF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002513E0
 * Original: 0x002513E0 - 0x00251411 (49 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002513E0(void)
{

loc_002513E0: ;
    PUSH32(esp, 0x8C3FA07Eu);
    PUSH32(esp, 0x9D89FC44u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41B00000);
    PUSH32(esp, 0x42CE0000);
    PUSH32(esp, 0x7C74677B);
    ecx = 0x42D0C0;
    PUSH32(esp, 0x00251405u); RECOMP_ABI_CALL(0x00186D20u, sub_00186D20); /* call 0x00186D20 */

loc_00251405: ;
    PUSH32(esp, 0x254E40);
    PUSH32(esp, 0x0025140Fu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0025140F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251420
 * Original: 0x00251420 - 0x00251451 (49 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251420(void)
{

loc_00251420: ;
    PUSH32(esp, 0x911B0193u);
    PUSH32(esp, 0xB72CA533u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41B00000);
    PUSH32(esp, 0x42CE0000);
    PUSH32(esp, 0x227BC650);
    ecx = 0x42D0E0;
    PUSH32(esp, 0x00251445u); RECOMP_ABI_CALL(0x00186D20u, sub_00186D20); /* call 0x00186D20 */

loc_00251445: ;
    PUSH32(esp, 0x254E50);
    PUSH32(esp, 0x0025144Fu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0025144F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251460
 * Original: 0x00251460 - 0x00251491 (49 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251460(void)
{

loc_00251460: ;
    PUSH32(esp, 0xB8D3DEC1u);
    PUSH32(esp, 0x928B71D);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41B00000);
    PUSH32(esp, 0x42CE0000);
    PUSH32(esp, 0xF4DE996Eu);
    ecx = 0x42D100;
    PUSH32(esp, 0x00251485u); RECOMP_ABI_CALL(0x00186D20u, sub_00186D20); /* call 0x00186D20 */

loc_00251485: ;
    PUSH32(esp, 0x254E60);
    PUSH32(esp, 0x0025148Fu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0025148F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002514A0
 * Original: 0x002514A0 - 0x002514D1 (49 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002514A0(void)
{

loc_002514A0: ;
    PUSH32(esp, 0x9CC94B98u);
    PUSH32(esp, 0xE2FA2E32u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41B00000);
    PUSH32(esp, 0x42CE0000);
    PUSH32(esp, 0xEF286CA5u);
    ecx = 0x42D120;
    PUSH32(esp, 0x002514C5u); RECOMP_ABI_CALL(0x00186D20u, sub_00186D20); /* call 0x00186D20 */

loc_002514C5: ;
    PUSH32(esp, 0x254E70);
    PUSH32(esp, 0x002514CFu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002514CF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002514E0
 * Original: 0x002514E0 - 0x002514F6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002514E0(void)
{

loc_002514E0: ;
    ecx = 0x42D140;
    PUSH32(esp, 0x002514EAu); RECOMP_ABI_CALL(0x00186DB0u, sub_00186DB0); /* call 0x00186DB0 */

loc_002514EA: ;
    PUSH32(esp, 0x254E80);
    PUSH32(esp, 0x002514F4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002514F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251500
 * Original: 0x00251500 - 0x00251516 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251500(void)
{

loc_00251500: ;
    ecx = 0x42D154;
    PUSH32(esp, 0x0025150Au); RECOMP_ABI_CALL(0x00186DD0u, sub_00186DD0); /* call 0x00186DD0 */

loc_0025150A: ;
    PUSH32(esp, 0x254E90);
    PUSH32(esp, 0x00251514u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251514: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251520
 * Original: 0x00251520 - 0x00251536 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251520(void)
{

loc_00251520: ;
    ecx = 0x42D168;
    PUSH32(esp, 0x0025152Au); RECOMP_ABI_CALL(0x000A5A20u, sub_000A5A20); /* call 0x000A5A20 */

loc_0025152A: ;
    PUSH32(esp, 0x254DC0);
    PUSH32(esp, 0x00251534u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251534: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251540
 * Original: 0x00251540 - 0x00251571 (49 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251540(void)
{

loc_00251540: ;
    PUSH32(esp, 0x93E7AA53u);
    PUSH32(esp, 0x16C2B9F3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41B00000);
    PUSH32(esp, 0x42CE0000);
    PUSH32(esp, 0xD091583Fu);
    ecx = 0x42DA30;
    PUSH32(esp, 0x00251565u); RECOMP_ABI_CALL(0x00186D20u, sub_00186D20); /* call 0x00186D20 */

loc_00251565: ;
    PUSH32(esp, 0x254EA0);
    PUSH32(esp, 0x0025156Fu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0025156F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251580
 * Original: 0x00251580 - 0x002515B1 (49 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251580(void)
{

loc_00251580: ;
    PUSH32(esp, 0x93E7AA53u);
    PUSH32(esp, 0x16C2B9F3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41B00000);
    PUSH32(esp, 0x42CE0000);
    PUSH32(esp, 0x628048A0);
    ecx = 0x42DA50;
    PUSH32(esp, 0x002515A5u); RECOMP_ABI_CALL(0x00186D20u, sub_00186D20); /* call 0x00186D20 */

loc_002515A5: ;
    PUSH32(esp, 0x254EB0);
    PUSH32(esp, 0x002515AFu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002515AF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002515C0
 * Original: 0x002515C0 - 0x002515F1 (49 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002515C0(void)
{

loc_002515C0: ;
    PUSH32(esp, 0x93E7AA53u);
    PUSH32(esp, 0x16C2B9F3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41B00000);
    PUSH32(esp, 0x42CE0000);
    PUSH32(esp, 0x126A1C9E);
    ecx = 0x42DA70;
    PUSH32(esp, 0x002515E5u); RECOMP_ABI_CALL(0x00186D20u, sub_00186D20); /* call 0x00186D20 */

loc_002515E5: ;
    PUSH32(esp, 0x254EC0);
    PUSH32(esp, 0x002515EFu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002515EF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251600
 * Original: 0x00251600 - 0x00251631 (49 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251600(void)
{

loc_00251600: ;
    PUSH32(esp, 0x93E7AA53u);
    PUSH32(esp, 0x16C2B9F3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41B00000);
    PUSH32(esp, 0x42CE0000);
    PUSH32(esp, 0x547781CB);
    ecx = 0x42DA90;
    PUSH32(esp, 0x00251625u); RECOMP_ABI_CALL(0x00186D20u, sub_00186D20); /* call 0x00186D20 */

loc_00251625: ;
    PUSH32(esp, 0x254ED0);
    PUSH32(esp, 0x0025162Fu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0025162F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251640
 * Original: 0x00251640 - 0x00251671 (49 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251640(void)
{

loc_00251640: ;
    PUSH32(esp, 0x93E7AA53u);
    PUSH32(esp, 0x16C2B9F3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41B00000);
    PUSH32(esp, 0x42CE0000);
    PUSH32(esp, 0x1834F0AC);
    ecx = 0x42DAB0;
    PUSH32(esp, 0x00251665u); RECOMP_ABI_CALL(0x00186D20u, sub_00186D20); /* call 0x00186D20 */

loc_00251665: ;
    PUSH32(esp, 0x254EE0);
    PUSH32(esp, 0x0025166Fu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0025166F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251680
 * Original: 0x00251680 - 0x00251696 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251680(void)
{

loc_00251680: ;
    ecx = 0x42DAD0;
    PUSH32(esp, 0x0025168Au); RECOMP_ABI_CALL(0x00186E50u, sub_00186E50); /* call 0x00186E50 */

loc_0025168A: ;
    PUSH32(esp, 0x254EF0);
    PUSH32(esp, 0x00251694u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251694: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002516A0
 * Original: 0x002516A0 - 0x002516B6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002516A0(void)
{

loc_002516A0: ;
    ecx = 0x42DAE8;
    PUSH32(esp, 0x002516AAu); RECOMP_ABI_CALL(0x000A5A20u, sub_000A5A20); /* call 0x000A5A20 */

loc_002516AA: ;
    PUSH32(esp, 0x254DD0);
    PUSH32(esp, 0x002516B4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002516B4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002516C0
 * Original: 0x002516C0 - 0x002516E7 (39 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002516C0(void)
{

loc_002516C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x41B00000);
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0xB9EF387Bu);
    ecx = 0x42E3B0;
    PUSH32(esp, 0x002516DBu); RECOMP_ABI_CALL(0x00186650u, sub_00186650); /* call 0x00186650 */

loc_002516DB: ;
    PUSH32(esp, 0x254F00);
    PUSH32(esp, 0x002516E5u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002516E5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002516F0
 * Original: 0x002516F0 - 0x00251717 (39 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002516F0(void)
{

loc_002516F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x41B00000);
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0xDFA2EFB1u);
    ecx = 0x42E3C8;
    PUSH32(esp, 0x0025170Bu); RECOMP_ABI_CALL(0x00186650u, sub_00186650); /* call 0x00186650 */

loc_0025170B: ;
    PUSH32(esp, 0x254F10);
    PUSH32(esp, 0x00251715u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251715: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251720
 * Original: 0x00251720 - 0x00251736 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251720(void)
{

loc_00251720: ;
    ecx = 0x42E3E8;
    PUSH32(esp, 0x0025172Au); RECOMP_ABI_CALL(0x00185CF0u, sub_00185CF0); /* call 0x00185CF0 */

loc_0025172A: ;
    PUSH32(esp, 0x254F70);
    PUSH32(esp, 0x00251734u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251734: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251740
 * Original: 0x00251740 - 0x00251756 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251740(void)
{

loc_00251740: ;
    ecx = 0x4322BC;
    PUSH32(esp, 0x0025174Au); RECOMP_ABI_CALL(0x00187290u, sub_00187290); /* call 0x00187290 */

loc_0025174A: ;
    PUSH32(esp, 0x254F30);
    PUSH32(esp, 0x00251754u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251754: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251760
 * Original: 0x00251760 - 0x00251776 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251760(void)
{

loc_00251760: ;
    ecx = 0x4322C4;
    PUSH32(esp, 0x0025176Au); RECOMP_ABI_CALL(0x001872A0u, sub_001872A0); /* call 0x001872A0 */

loc_0025176A: ;
    PUSH32(esp, 0x254F60);
    PUSH32(esp, 0x00251774u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251774: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251780
 * Original: 0x00251780 - 0x002517A4 (36 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251780(void)
{

loc_00251780: ;
    PUSH32(esp, 0x209040);
    PUSH32(esp, 0x180F10);
    PUSH32(esp, 1);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x4322CC);
    PUSH32(esp, 0x00251798u); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_00251798: ;
    PUSH32(esp, 0x254F40);
    PUSH32(esp, 0x002517A2u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002517A2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002517B0
 * Original: 0x002517B0 - 0x002517BA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002517B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002517B0: ;
    ecx = 0x4322F8;
    g_seh_ebp = ebp; sub_0018C5F0(); return; /* tail jmp 0x0018C5F0 */

}

/**
 * sub_002517C0
 * Original: 0x002517C0 - 0x002517EA (42 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002517C0(void)
{

loc_002517C0: ;
    eax = MEM32(0x30ECF8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x4409B4;
    PUSH32(esp, 0x002517DEu); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_002517DE: ;
    PUSH32(esp, 0x254F80);
    PUSH32(esp, 0x002517E8u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002517E8: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002517F0
 * Original: 0x002517F0 - 0x00251805 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002517F0(void)
{

loc_002517F0: ;
    eax = MEM32(0x4409FC);
    MEM32(0x30ED00) = eax;
    MEM32(0x4409FC) = 0x30ECFC;
    esp += 4; return; /* ret */

}

/**
 * sub_00251810
 * Original: 0x00251810 - 0x00251825 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251810(void)
{

loc_00251810: ;
    eax = MEM32(0x4409FC);
    MEM32(0x30ED0C) = eax;
    MEM32(0x4409FC) = 0x30ED08;
    esp += 4; return; /* ret */

}

/**
 * sub_00251830
 * Original: 0x00251830 - 0x00251845 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251830(void)
{

loc_00251830: ;
    eax = MEM32(0x4409FC);
    MEM32(0x30ED20) = eax;
    MEM32(0x4409FC) = 0x30ED1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00251850
 * Original: 0x00251850 - 0x0025187C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251850(void)
{

loc_00251850: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x2F6598);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2F6760);
    ecx = 0x440A18;
    PUSH32(esp, 0x00251870u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251870: ;
    PUSH32(esp, 0x254FA0);
    PUSH32(esp, 0x0025187Au); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0025187A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251880
 * Original: 0x00251880 - 0x002518B2 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251880(void)
{

loc_00251880: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x2F65F8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x2F6678);
    PUSH32(esp, 0x4409B4);
    PUSH32(esp, 0x2F6770);
    ecx = 0x440A40;
    PUSH32(esp, 0x002518A6u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_002518A6: ;
    PUSH32(esp, 0x254F90);
    PUSH32(esp, 0x002518B0u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002518B0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002518C0
 * Original: 0x002518C0 - 0x002518F5 (53 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002518C0(void)
{

loc_002518C0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x2F6B80);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x84);
    PUSH32(esp, 0x2F6BA0);
    PUSH32(esp, 0x440B80);
    PUSH32(esp, 0x2F6BE4);
    ecx = 0x440A68;
    PUSH32(esp, 0x002518E9u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_002518E9: ;
    PUSH32(esp, 0x254FB0);
    PUSH32(esp, 0x002518F3u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002518F3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251900
 * Original: 0x00251900 - 0x00251932 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251900(void)
{

loc_00251900: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x2F6D80);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x2F6DC0);
    PUSH32(esp, 0x440C4C);
    PUSH32(esp, 0x2F6E18);
    ecx = 0x440A90;
    PUSH32(esp, 0x00251926u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251926: ;
    PUSH32(esp, 0x254FC0);
    PUSH32(esp, 0x00251930u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251930: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251940
 * Original: 0x00251940 - 0x0025196F (47 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251940(void)
{

loc_00251940: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x2F6F28);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, 0x440D14);
    PUSH32(esp, 0x2F6FA8);
    ecx = 0x440AB8;
    PUSH32(esp, 0x00251963u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251963: ;
    PUSH32(esp, 0x254FD0);
    PUSH32(esp, 0x0025196Du); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0025196D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251970
 * Original: 0x00251970 - 0x0025199F (47 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251970(void)
{

loc_00251970: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x2F6FC4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4409B4);
    PUSH32(esp, 0x2F6FE0);
    ecx = 0x440AE0;
    PUSH32(esp, 0x00251993u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251993: ;
    PUSH32(esp, 0x254FE0);
    PUSH32(esp, 0x0025199Du); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0025199D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002519A0
 * Original: 0x002519A0 - 0x002519CC (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002519A0(void)
{

loc_002519A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x440AE0);
    PUSH32(esp, 0x2F6FE8);
    ecx = 0x440B08;
    PUSH32(esp, 0x002519C0u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_002519C0: ;
    PUSH32(esp, 0x254FF0);
    PUSH32(esp, 0x002519CAu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002519CA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002519D0
 * Original: 0x002519D0 - 0x002519FF (47 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002519D0(void)
{

loc_002519D0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x2F6FFC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x440B08);
    PUSH32(esp, 0x2F700C);
    ecx = 0x440B30;
    PUSH32(esp, 0x002519F3u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_002519F3: ;
    PUSH32(esp, 0x255000);
    PUSH32(esp, 0x002519FDu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002519FD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251A00
 * Original: 0x00251A00 - 0x00251A32 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251A00(void)
{

loc_00251A00: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x2F701C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x2F702C);
    PUSH32(esp, 0x440B30);
    PUSH32(esp, 0x2F7050);
    ecx = 0x440B58;
    PUSH32(esp, 0x00251A26u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251A26: ;
    PUSH32(esp, 0x255010);
    PUSH32(esp, 0x00251A30u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251A30: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251A40
 * Original: 0x00251A40 - 0x00251A6C (44 bytes, 14 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251A40(void)
{

loc_00251A40: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4409B4);
    PUSH32(esp, 0x2F705C);
    ecx = 0x440B80;
    PUSH32(esp, 0x00251A60u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251A60: ;
    PUSH32(esp, 0x255020);
    PUSH32(esp, 0x00251A6Au); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251A6A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251A70
 * Original: 0x00251A70 - 0x00251A9F (47 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251A70(void)
{

loc_00251A70: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x2F7070);
    PUSH32(esp, 0x440B30);
    PUSH32(esp, 0x2F7088);
    ecx = 0x440BA8;
    PUSH32(esp, 0x00251A93u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251A93: ;
    PUSH32(esp, 0x255030);
    PUSH32(esp, 0x00251A9Du); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251A9D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251AA0
 * Original: 0x00251AA0 - 0x00251AD2 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251AA0(void)
{

loc_00251AA0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x2F7098);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x2F70B8);
    PUSH32(esp, 0x440B30);
    PUSH32(esp, 0x2F70E0);
    ecx = 0x440BD0;
    PUSH32(esp, 0x00251AC6u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251AC6: ;
    PUSH32(esp, 0x255040);
    PUSH32(esp, 0x00251AD0u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251AD0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251AE0
 * Original: 0x00251AE0 - 0x00251B12 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251AE0(void)
{

loc_00251AE0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x2F7BE8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x2F7C08);
    PUSH32(esp, 0x440AE0);
    PUSH32(esp, 0x2F7C38);
    ecx = 0x440BFC;
    PUSH32(esp, 0x00251B06u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251B06: ;
    PUSH32(esp, 0x255050);
    PUSH32(esp, 0x00251B10u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251B10: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251B20
 * Original: 0x00251B20 - 0x00251B52 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251B20(void)
{

loc_00251B20: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x2F7C4C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x2F7C6C);
    PUSH32(esp, 0x440B30);
    PUSH32(esp, 0x2F7CA0);
    ecx = 0x440C24;
    PUSH32(esp, 0x00251B46u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251B46: ;
    PUSH32(esp, 0x255060);
    PUSH32(esp, 0x00251B50u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251B50: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251B60
 * Original: 0x00251B60 - 0x00251B8C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251B60(void)
{

loc_00251B60: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x440AE0);
    PUSH32(esp, 0x2F7D08);
    ecx = 0x440C4C;
    PUSH32(esp, 0x00251B80u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251B80: ;
    PUSH32(esp, 0x255070);
    PUSH32(esp, 0x00251B8Au); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251B8A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251B90
 * Original: 0x00251B90 - 0x00251BC2 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251B90(void)
{

loc_00251B90: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x2F7D1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x2F7D4C);
    PUSH32(esp, 0x440B30);
    PUSH32(esp, 0x2F7D6C);
    ecx = 0x440C74;
    PUSH32(esp, 0x00251BB6u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251BB6: ;
    PUSH32(esp, 0x255080);
    PUSH32(esp, 0x00251BC0u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251BC0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251BD0
 * Original: 0x00251BD0 - 0x00251BFF (47 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251BD0(void)
{

loc_00251BD0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x2F7D90);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x440AE0);
    PUSH32(esp, 0x2F7DB0);
    ecx = 0x440C9C;
    PUSH32(esp, 0x00251BF3u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251BF3: ;
    PUSH32(esp, 0x255090);
    PUSH32(esp, 0x00251BFDu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251BFD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251C00
 * Original: 0x00251C00 - 0x00251C32 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251C00(void)
{

loc_00251C00: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x2F7DC0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x2F7DD0);
    PUSH32(esp, 0x440C9C);
    PUSH32(esp, 0x2F7DF0);
    ecx = 0x440CC4;
    PUSH32(esp, 0x00251C26u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251C26: ;
    PUSH32(esp, 0x2550A0);
    PUSH32(esp, 0x00251C30u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251C30: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251C40
 * Original: 0x00251C40 - 0x00251C72 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251C40(void)
{

loc_00251C40: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x2F7E04);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x2F7E24);
    PUSH32(esp, 0x440C4C);
    PUSH32(esp, 0x2F7E60);
    ecx = 0x440CEC;
    PUSH32(esp, 0x00251C66u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251C66: ;
    PUSH32(esp, 0x2550B0);
    PUSH32(esp, 0x00251C70u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251C70: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251C80
 * Original: 0x00251C80 - 0x00251CAC (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251C80(void)
{

loc_00251C80: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x440AE0);
    PUSH32(esp, 0x2F7E6C);
    ecx = 0x440D14;
    PUSH32(esp, 0x00251CA0u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251CA0: ;
    PUSH32(esp, 0x2550C0);
    PUSH32(esp, 0x00251CAAu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251CAA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251CB0
 * Original: 0x00251CB0 - 0x00251CC6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251CB0(void)
{

loc_00251CB0: ;
    ecx = 0x440D3C;
    PUSH32(esp, 0x00251CBAu); RECOMP_ABI_CALL(0x001B2D70u, sub_001B2D70); /* call 0x001B2D70 */

loc_00251CBA: ;
    PUSH32(esp, 0x2550D0);
    PUSH32(esp, 0x00251CC4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251CC4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251CD0
 * Original: 0x00251CD0 - 0x00251CDF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00251CD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00251CD0: ;
    fp_push(MEMD(0x2F7FF0)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    MEMF(0x440D48) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00251CE0
 * Original: 0x00251CE0 - 0x00251CEF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00251CE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00251CE0: ;
    fp_push(MEMD(0x2F7FF0)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    MEMF(0x440D4C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00251CF0
 * Original: 0x00251CF0 - 0x00251D25 (53 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251CF0(void)
{

loc_00251CF0: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x2F82B0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0x2F8340);
    PUSH32(esp, 0x440F10);
    PUSH32(esp, 0x2F83DC);
    ecx = 0x440D50;
    PUSH32(esp, 0x00251D19u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251D19: ;
    PUSH32(esp, 0x2550E0);
    PUSH32(esp, 0x00251D23u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251D23: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251D30
 * Original: 0x00251D30 - 0x00251D65 (53 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251D30(void)
{

loc_00251D30: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x2F8490);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x90);
    PUSH32(esp, 0x2F8530);
    PUSH32(esp, 0x440F10);
    PUSH32(esp, 0x2F85BC);
    ecx = 0x440D78;
    PUSH32(esp, 0x00251D59u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251D59: ;
    PUSH32(esp, 0x2550F0);
    PUSH32(esp, 0x00251D63u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251D63: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251D70
 * Original: 0x00251D70 - 0x00251DA8 (56 bytes, 14 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251D70(void)
{

loc_00251D70: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x2F87F8);
    PUSH32(esp, 2);
    PUSH32(esp, 0x30EDB0);
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0x2F88C8);
    PUSH32(esp, 0x440FB0);
    PUSH32(esp, 0x2F8AC8);
    ecx = 0x440DA0;
    PUSH32(esp, 0x00251D9Cu); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251D9C: ;
    PUSH32(esp, 0x255100);
    PUSH32(esp, 0x00251DA6u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251DA6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251DB0
 * Original: 0x00251DB0 - 0x00251DE2 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251DB0(void)
{

loc_00251DB0: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x2F8B18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x2F8BA8);
    PUSH32(esp, 0x440F10);
    PUSH32(esp, 0x2F8C68);
    ecx = 0x440DC8;
    PUSH32(esp, 0x00251DD6u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251DD6: ;
    PUSH32(esp, 0x255110);
    PUSH32(esp, 0x00251DE0u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251DE0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251DF0
 * Original: 0x00251DF0 - 0x00251E28 (56 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251DF0(void)
{

loc_00251DF0: ;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x2F8CE8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x30EDCC);
    PUSH32(esp, 0x90);
    PUSH32(esp, 0x2F8E88);
    PUSH32(esp, 0x4409B4);
    PUSH32(esp, 0x2F9234);
    ecx = 0x440DF0;
    PUSH32(esp, 0x00251E1Cu); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251E1C: ;
    PUSH32(esp, 0x255120);
    PUSH32(esp, 0x00251E26u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251E26: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251E30
 * Original: 0x00251E30 - 0x00251E5F (47 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251E30(void)
{

loc_00251E30: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x2F92E4);
    PUSH32(esp, 0x441008);
    PUSH32(esp, 0x2F92FC);
    ecx = 0x440E18;
    PUSH32(esp, 0x00251E53u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251E53: ;
    PUSH32(esp, 0x255130);
    PUSH32(esp, 0x00251E5Du); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251E5D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251E60
 * Original: 0x00251E60 - 0x00251E8F (47 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251E60(void)
{

loc_00251E60: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x2F9340);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x440EC0);
    PUSH32(esp, 0x2F9358);
    ecx = 0x440E40;
    PUSH32(esp, 0x00251E83u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251E83: ;
    PUSH32(esp, 0x255140);
    PUSH32(esp, 0x00251E8Du); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251E8D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251E90
 * Original: 0x00251E90 - 0x00251EBF (47 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251E90(void)
{

loc_00251E90: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x2F93A8);
    PUSH32(esp, 0x441008);
    PUSH32(esp, 0x2F93C0);
    ecx = 0x440E68;
    PUSH32(esp, 0x00251EB3u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251EB3: ;
    PUSH32(esp, 0x255150);
    PUSH32(esp, 0x00251EBDu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251EBD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251EC0
 * Original: 0x00251EC0 - 0x00251ED6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251EC0(void)
{

loc_00251EC0: ;
    ecx = 0x440E90;
    PUSH32(esp, 0x00251ECAu); RECOMP_ABI_CALL(0x001C7A20u, sub_001C7A20); /* call 0x001C7A20 */

loc_00251ECA: ;
    PUSH32(esp, 0x255160);
    PUSH32(esp, 0x00251ED4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251ED4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251EE0
 * Original: 0x00251EE0 - 0x00251F0F (47 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251EE0(void)
{

loc_00251EE0: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x2F93F8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4409B4);
    PUSH32(esp, 0x2F9438);
    ecx = 0x440E98;
    PUSH32(esp, 0x00251F03u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251F03: ;
    PUSH32(esp, 0x255170);
    PUSH32(esp, 0x00251F0Du); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251F0D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251F10
 * Original: 0x00251F10 - 0x00251F3F (47 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251F10(void)
{

loc_00251F10: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x2F951C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4409B4);
    PUSH32(esp, 0x2F952C);
    ecx = 0x440EC0;
    PUSH32(esp, 0x00251F33u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251F33: ;
    PUSH32(esp, 0x255180);
    PUSH32(esp, 0x00251F3Du); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251F3D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251F40
 * Original: 0x00251F40 - 0x00251F6C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251F40(void)
{

loc_00251F40: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x440F88);
    PUSH32(esp, 0x2F9538);
    ecx = 0x440EE8;
    PUSH32(esp, 0x00251F60u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251F60: ;
    PUSH32(esp, 0x255190);
    PUSH32(esp, 0x00251F6Au); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251F6A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251F70
 * Original: 0x00251F70 - 0x00251F9C (44 bytes, 14 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251F70(void)
{

loc_00251F70: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x440E98);
    PUSH32(esp, 0x2F9544);
    ecx = 0x440F10;
    PUSH32(esp, 0x00251F90u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251F90: ;
    PUSH32(esp, 0x2551A0);
    PUSH32(esp, 0x00251F9Au); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251F9A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251FA0
 * Original: 0x00251FA0 - 0x00251FD2 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251FA0(void)
{

loc_00251FA0: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x2F9558);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x2F95A8);
    PUSH32(esp, 0x440E98);
    PUSH32(esp, 0x2F9604);
    ecx = 0x440F38;
    PUSH32(esp, 0x00251FC6u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00251FC6: ;
    PUSH32(esp, 0x2551B0);
    PUSH32(esp, 0x00251FD0u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00251FD0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251FE0
 * Original: 0x00251FE0 - 0x0025200C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251FE0(void)
{

loc_00251FE0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x2F964C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2F9754);
    ecx = 0x440F60;
    PUSH32(esp, 0x00252000u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252000: ;
    PUSH32(esp, 0x2551D0);
    PUSH32(esp, 0x0025200Au); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0025200A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252010
 * Original: 0x00252010 - 0x00252042 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252010(void)
{

loc_00252010: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x2F9670);
    PUSH32(esp, 1);
    PUSH32(esp, 0x30EDD0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4409B4);
    PUSH32(esp, 0x2F9760);
    ecx = 0x440F88;
    PUSH32(esp, 0x00252036u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252036: ;
    PUSH32(esp, 0x2551C0);
    PUSH32(esp, 0x00252040u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252040: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252050
 * Original: 0x00252050 - 0x00252082 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252050(void)
{

loc_00252050: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x2F97A4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x30EDD4);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x440F88);
    PUSH32(esp, 0x2F9864);
    ecx = 0x440FB0;
    PUSH32(esp, 0x00252076u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252076: ;
    PUSH32(esp, 0x2551E0);
    PUSH32(esp, 0x00252080u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252080: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252090
 * Original: 0x00252090 - 0x002520A6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252090(void)
{

loc_00252090: ;
    ecx = 0x440FD8;
    PUSH32(esp, 0x0025209Au); RECOMP_ABI_CALL(0x001CB600u, sub_001CB600); /* call 0x001CB600 */

loc_0025209A: ;
    PUSH32(esp, 0x2551F0);
    PUSH32(esp, 0x002520A4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002520A4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002520B0
 * Original: 0x002520B0 - 0x002520DC (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002520B0(void)
{

loc_002520B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4409B4);
    PUSH32(esp, 0x2F9AC4);
    ecx = 0x440FE0;
    PUSH32(esp, 0x002520D0u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_002520D0: ;
    PUSH32(esp, 0x255200);
    PUSH32(esp, 0x002520DAu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002520DA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002520E0
 * Original: 0x002520E0 - 0x0025210F (47 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002520E0(void)
{

loc_002520E0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x2F9AD8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0);
    PUSH32(esp, 0x440EE8);
    PUSH32(esp, 0x2F9AE8);
    ecx = 0x441008;
    PUSH32(esp, 0x00252103u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252103: ;
    PUSH32(esp, 0x255210);
    PUSH32(esp, 0x0025210Du); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0025210D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252110
 * Original: 0x00252110 - 0x0025213C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252110(void)
{

loc_00252110: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4409B4);
    PUSH32(esp, 0x2F9AF8);
    ecx = 0x441030;
    PUSH32(esp, 0x00252130u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252130: ;
    PUSH32(esp, 0x255220);
    PUSH32(esp, 0x0025213Au); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0025213A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252140
 * Original: 0x00252140 - 0x0025216C (44 bytes, 14 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252140(void)
{

loc_00252140: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x441030);
    PUSH32(esp, 0x2F9B0C);
    ecx = 0x441058;
    PUSH32(esp, 0x00252160u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252160: ;
    PUSH32(esp, 0x255230);
    PUSH32(esp, 0x0025216Au); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0025216A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252170
 * Original: 0x00252170 - 0x0025219F (47 bytes, 14 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252170(void)
{

loc_00252170: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2F9B70);
    PUSH32(esp, 0x441058);
    PUSH32(esp, 0x2F9B88);
    ecx = 0x441080;
    PUSH32(esp, 0x00252193u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252193: ;
    PUSH32(esp, 0x255240);
    PUSH32(esp, 0x0025219Du); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0025219D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002521A0
 * Original: 0x002521A0 - 0x002521D2 (50 bytes, 14 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002521A0(void)
{

loc_002521A0: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x2F9BA8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x2F9BF8);
    PUSH32(esp, 0x441058);
    PUSH32(esp, 0x2F9C88);
    ecx = 0x4410A8;
    PUSH32(esp, 0x002521C6u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_002521C6: ;
    PUSH32(esp, 0x255250);
    PUSH32(esp, 0x002521D0u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002521D0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002521E0
 * Original: 0x002521E0 - 0x00252212 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002521E0(void)
{

loc_002521E0: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x2F9D80);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x2F9E40);
    PUSH32(esp, 0x4409B4);
    PUSH32(esp, 0x2F9F08);
    ecx = 0x4410E4;
    PUSH32(esp, 0x00252206u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252206: ;
    PUSH32(esp, 0x255260);
    PUSH32(esp, 0x00252210u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252210: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252220
 * Original: 0x00252220 - 0x00252235 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252220(void)
{

loc_00252220: ;
    eax = MEM32(0x4409FC);
    MEM32(0x30EE34) = eax;
    MEM32(0x4409FC) = 0x30EE30;
    esp += 4; return; /* ret */

}

/**
 * sub_00252240
 * Original: 0x00252240 - 0x00252255 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252240(void)
{

loc_00252240: ;
    eax = MEM32(0x4409FC);
    MEM32(0x30EE40) = eax;
    MEM32(0x4409FC) = 0x30EE3C;
    esp += 4; return; /* ret */

}

/**
 * sub_00252260
 * Original: 0x00252260 - 0x00252292 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252260(void)
{

loc_00252260: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x2F9F98);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x2F9FD8);
    PUSH32(esp, 0x441324);
    PUSH32(esp, 0x2FA02C);
    ecx = 0x44111C;
    PUSH32(esp, 0x00252286u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252286: ;
    PUSH32(esp, 0x255270);
    PUSH32(esp, 0x00252290u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252290: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002522A0
 * Original: 0x002522A0 - 0x002522D2 (50 bytes, 14 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002522A0(void)
{

loc_002522A0: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x2FA1A8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x2FA258);
    PUSH32(esp, 0x44134C);
    PUSH32(esp, 0x2FA36C);
    ecx = 0x441144;
    PUSH32(esp, 0x002522C6u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_002522C6: ;
    PUSH32(esp, 0x255280);
    PUSH32(esp, 0x002522D0u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002522D0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002522E0
 * Original: 0x002522E0 - 0x00252312 (50 bytes, 14 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002522E0(void)
{

loc_002522E0: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x2FA380);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x2FA3B0);
    PUSH32(esp, 0x441374);
    PUSH32(esp, 0x2FA408);
    ecx = 0x44116C;
    PUSH32(esp, 0x00252306u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252306: ;
    PUSH32(esp, 0x255290);
    PUSH32(esp, 0x00252310u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252310: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252320
 * Original: 0x00252320 - 0x00252352 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252320(void)
{

loc_00252320: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x2FA420);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x2FA470);
    PUSH32(esp, 0x4413C4);
    PUSH32(esp, 0x2FA4D0);
    ecx = 0x441194;
    PUSH32(esp, 0x00252346u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252346: ;
    PUSH32(esp, 0x2552A0);
    PUSH32(esp, 0x00252350u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252350: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252360
 * Original: 0x00252360 - 0x00252392 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252360(void)
{

loc_00252360: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x2FA4E8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x2FA518);
    PUSH32(esp, 0x4413EC);
    PUSH32(esp, 0x2FA574);
    ecx = 0x4411BC;
    PUSH32(esp, 0x00252386u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252386: ;
    PUSH32(esp, 0x2552B0);
    PUSH32(esp, 0x00252390u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252390: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002523A0
 * Original: 0x002523A0 - 0x002523D2 (50 bytes, 14 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002523A0(void)
{

loc_002523A0: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x2FA588);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x2FA5C8);
    PUSH32(esp, 0x441414);
    PUSH32(esp, 0x2FA64C);
    ecx = 0x4411E4;
    PUSH32(esp, 0x002523C6u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_002523C6: ;
    PUSH32(esp, 0x2552C0);
    PUSH32(esp, 0x002523D0u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002523D0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002523E0
 * Original: 0x002523E0 - 0x00252412 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002523E0(void)
{

loc_002523E0: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x2FA660);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x2FA6D0);
    PUSH32(esp, 0x44143C);
    PUSH32(esp, 0x2FA764);
    ecx = 0x44120C;
    PUSH32(esp, 0x00252406u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252406: ;
    PUSH32(esp, 0x2552D0);
    PUSH32(esp, 0x00252410u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252410: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252420
 * Original: 0x00252420 - 0x00252452 (50 bytes, 14 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252420(void)
{

loc_00252420: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x2FA780);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x2FA820);
    PUSH32(esp, 0x44139C);
    PUSH32(esp, 0x2FA8EC);
    ecx = 0x441234;
    PUSH32(esp, 0x00252446u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252446: ;
    PUSH32(esp, 0x2552E0);
    PUSH32(esp, 0x00252450u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252450: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252460
 * Original: 0x00252460 - 0x00252492 (50 bytes, 14 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252460(void)
{

loc_00252460: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x2FA8FC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x2FA92C);
    PUSH32(esp, 0x441464);
    PUSH32(esp, 0x2FA984);
    ecx = 0x44125C;
    PUSH32(esp, 0x00252486u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252486: ;
    PUSH32(esp, 0x2552F0);
    PUSH32(esp, 0x00252490u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252490: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002524A0
 * Original: 0x002524A0 - 0x002524CF (47 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002524A0(void)
{

loc_002524A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x2FA998);
    PUSH32(esp, 0x44148C);
    PUSH32(esp, 0x2FA9B0);
    ecx = 0x441284;
    PUSH32(esp, 0x002524C3u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_002524C3: ;
    PUSH32(esp, 0x255300);
    PUSH32(esp, 0x002524CDu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002524CD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002524D0
 * Original: 0x002524D0 - 0x002524FF (47 bytes, 14 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002524D0(void)
{

loc_002524D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x2FA9C4);
    PUSH32(esp, 0x4412D4);
    PUSH32(esp, 0x2FA9DC);
    ecx = 0x4412AC;
    PUSH32(esp, 0x002524F3u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_002524F3: ;
    PUSH32(esp, 0x255310);
    PUSH32(esp, 0x002524FDu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002524FD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252500
 * Original: 0x00252500 - 0x00252532 (50 bytes, 14 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252500(void)
{

loc_00252500: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x2FA9F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x2FAA80);
    PUSH32(esp, 0x4412FC);
    PUSH32(esp, 0x2FAB44);
    ecx = 0x4412D4;
    PUSH32(esp, 0x00252526u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252526: ;
    PUSH32(esp, 0x255320);
    PUSH32(esp, 0x00252530u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252530: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252540
 * Original: 0x00252540 - 0x0025256F (47 bytes, 14 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252540(void)
{

loc_00252540: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2FAB58);
    PUSH32(esp, 0x4409B4);
    PUSH32(esp, 0x2FAB70);
    ecx = 0x4412FC;
    PUSH32(esp, 0x00252563u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252563: ;
    PUSH32(esp, 0x255330);
    PUSH32(esp, 0x0025256Du); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0025256D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252570
 * Original: 0x00252570 - 0x0025259F (47 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252570(void)
{

loc_00252570: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2FAB84);
    PUSH32(esp, 0x4412FC);
    PUSH32(esp, 0x2FAB9C);
    ecx = 0x441324;
    PUSH32(esp, 0x00252593u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252593: ;
    PUSH32(esp, 0x255340);
    PUSH32(esp, 0x0025259Du); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0025259D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002525A0
 * Original: 0x002525A0 - 0x002525CF (47 bytes, 14 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002525A0(void)
{

loc_002525A0: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x2FABB8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4409B4);
    PUSH32(esp, 0x2FACD0);
    ecx = 0x44134C;
    PUSH32(esp, 0x002525C3u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_002525C3: ;
    PUSH32(esp, 0x255350);
    PUSH32(esp, 0x002525CDu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002525CD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002525D0
 * Original: 0x002525D0 - 0x002525FC (44 bytes, 14 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002525D0(void)
{

loc_002525D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4409B4);
    PUSH32(esp, 0x2FACE0);
    ecx = 0x441374;
    PUSH32(esp, 0x002525F0u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_002525F0: ;
    PUSH32(esp, 0x255360);
    PUSH32(esp, 0x002525FAu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002525FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252600
 * Original: 0x00252600 - 0x0025262F (47 bytes, 14 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252600(void)
{

loc_00252600: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2FAD5C);
    PUSH32(esp, 0x4412FC);
    PUSH32(esp, 0x2FAD74);
    ecx = 0x44139C;
    PUSH32(esp, 0x00252623u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252623: ;
    PUSH32(esp, 0x255370);
    PUSH32(esp, 0x0025262Du); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0025262D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252630
 * Original: 0x00252630 - 0x0025265F (47 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252630(void)
{

loc_00252630: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2FADB4);
    PUSH32(esp, 0x4412FC);
    PUSH32(esp, 0x2FADCC);
    ecx = 0x4413C4;
    PUSH32(esp, 0x00252653u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252653: ;
    PUSH32(esp, 0x255380);
    PUSH32(esp, 0x0025265Du); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_0025265D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252660
 * Original: 0x00252660 - 0x00252692 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252660(void)
{

loc_00252660: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x2FADE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x2FAE14);
    PUSH32(esp, 0x4412FC);
    PUSH32(esp, 0x2FAE64);
    ecx = 0x4413EC;
    PUSH32(esp, 0x00252686u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252686: ;
    PUSH32(esp, 0x255390);
    PUSH32(esp, 0x00252690u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252690: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002526A0
 * Original: 0x002526A0 - 0x002526D2 (50 bytes, 14 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002526A0(void)
{

loc_002526A0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x2FAE7C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2FAE8C);
    PUSH32(esp, 0x4412FC);
    PUSH32(esp, 0x2FAEB0);
    ecx = 0x441414;
    PUSH32(esp, 0x002526C6u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_002526C6: ;
    PUSH32(esp, 0x2553A0);
    PUSH32(esp, 0x002526D0u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002526D0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002526E0
 * Original: 0x002526E0 - 0x00252712 (50 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002526E0(void)
{

loc_002526E0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x2FAEC4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2FAED4);
    PUSH32(esp, 0x4412FC);
    PUSH32(esp, 0x2FAEEC);
    ecx = 0x44143C;
    PUSH32(esp, 0x00252706u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252706: ;
    PUSH32(esp, 0x2553B0);
    PUSH32(esp, 0x00252710u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252710: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252720
 * Original: 0x00252720 - 0x00252752 (50 bytes, 14 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252720(void)
{

loc_00252720: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x2FAF04);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2FAF14);
    PUSH32(esp, 0x4412FC);
    PUSH32(esp, 0x2FAF2C);
    ecx = 0x441464;
    PUSH32(esp, 0x00252746u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252746: ;
    PUSH32(esp, 0x2553C0);
    PUSH32(esp, 0x00252750u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252750: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252760
 * Original: 0x00252760 - 0x00252795 (53 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252760(void)
{

loc_00252760: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x2FAFAC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x30EE48);
    PUSH32(esp, 8);
    PUSH32(esp, 0x2FAFCC);
    PUSH32(esp, 0x4409B4);
    PUSH32(esp, 0x2FB1CC);
    ecx = 0x44148C;
    PUSH32(esp, 0x00252789u); RECOMP_ABI_CALL(0x0018F740u, sub_0018F740); /* call 0x0018F740 */

loc_00252789: ;
    PUSH32(esp, 0x2553D0);
    PUSH32(esp, 0x00252793u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252793: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002527A0
 * Original: 0x002527A0 - 0x002527BC (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002527A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002527A0: ;
    ecx = 0x4916E0;
    edx = 0x4E20;
    /* nop */

loc_002527B0: ;
    PUSH32(esp, 0x002527B5u); RECOMP_ABI_CALL(0x001EB100u, sub_001EB100); /* call 0x001EB100 */

loc_002527B5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002527B0; /* jne: not equal / not zero */

loc_002527BB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002527C0
 * Original: 0x002527C0 - 0x002527D3 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002527C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002527C0: ;
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0x4D0068);
    PUSH32(esp, 0x002527CFu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_002527CF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002527E0
 * Original: 0x002527E0 - 0x002527FC (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002527E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002527E0: ;
    ecx = 0x514068;
    edx = 0x4000;
    /* nop */

loc_002527F0: ;
    PUSH32(esp, 0x002527F5u); RECOMP_ABI_CALL(0x001EB2A0u, sub_001EB2A0); /* call 0x001EB2A0 */

loc_002527F5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002527F0; /* jne: not equal / not zero */

loc_002527FB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00252800
 * Original: 0x00252800 - 0x0025281C (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252800: ;
    ecx = 0x544068;
    edx = 0x4000;
    /* nop */

loc_00252810: ;
    PUSH32(esp, 0x00252815u); RECOMP_ABI_CALL(0x001EBBF0u, sub_001EBBF0); /* call 0x001EBBF0 */

loc_00252815: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00252810; /* jne: not equal / not zero */

loc_0025281B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00252820
 * Original: 0x00252820 - 0x00252833 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252820: ;
    PUSH32(esp, 0x4000);
    PUSH32(esp, 0x624070);
    PUSH32(esp, 0x0025282Fu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_0025282F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00252840
 * Original: 0x00252840 - 0x0025284A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252840: ;
    ecx = 0x634070;
    g_seh_ebp = ebp; sub_001EBF40(); return; /* tail jmp 0x001EBF40 */

}

/**
 * sub_00252850
 * Original: 0x00252850 - 0x0025285A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252850: ;
    ecx = 0x63DCD0;
    g_seh_ebp = ebp; sub_001ECA20(); return; /* tail jmp 0x001ECA20 */

}

/**
 * sub_00252860
 * Original: 0x00252860 - 0x00252873 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252860: ;
    PUSH32(esp, 0x800);
    PUSH32(esp, 0x63FD70);
    PUSH32(esp, 0x0025286Fu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_0025286F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00252880
 * Original: 0x00252880 - 0x0025288A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252880: ;
    ecx = 0x641D88;
    g_seh_ebp = ebp; sub_001F2AB0(); return; /* tail jmp 0x001F2AB0 */

}

/**
 * sub_00252890
 * Original: 0x00252890 - 0x0025289A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252890: ;
    ecx = 0x641D8C;
    g_seh_ebp = ebp; sub_001F2AB0(); return; /* tail jmp 0x001F2AB0 */

}

/**
 * sub_002528A0
 * Original: 0x002528A0 - 0x002528B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002528A0(void)
{

loc_002528A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FC81C)); /* movss */
    MEMF(0x641D90) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002528C0
 * Original: 0x002528C0 - 0x002528D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002528C0(void)
{

loc_002528C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC40C)); /* movss */
    MEMF(0x641D94) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002528E0
 * Original: 0x002528E0 - 0x002528F6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002528E0(void)
{

loc_002528E0: ;
    ecx = 0x643320;
    PUSH32(esp, 0x002528EAu); RECOMP_ABI_CALL(0x001F3610u, sub_001F3610); /* call 0x001F3610 */

loc_002528EA: ;
    PUSH32(esp, 0x2553E0);
    PUSH32(esp, 0x002528F4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_002528F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252900
 * Original: 0x00252900 - 0x00252916 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252900(void)
{

loc_00252900: ;
    ecx = 0x643370;
    PUSH32(esp, 0x0025290Au); RECOMP_ABI_CALL(0x001F00B0u, sub_001F00B0); /* call 0x001F00B0 */

loc_0025290A: ;
    PUSH32(esp, 0x2553F0);
    PUSH32(esp, 0x00252914u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252914: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252920
 * Original: 0x00252920 - 0x00252931 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252920(void)
{

loc_00252920: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FCA34)); /* movss */
    MEMF(0x643388) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00252940
 * Original: 0x00252940 - 0x00252951 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252940(void)
{

loc_00252940: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FCA38)); /* movss */
    MEMF(0x64338C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00252960
 * Original: 0x00252960 - 0x00252976 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252960(void)
{

loc_00252960: ;
    ecx = 0x643860;
    PUSH32(esp, 0x0025296Au); RECOMP_ABI_CALL(0x001F7790u, sub_001F7790); /* call 0x001F7790 */

loc_0025296A: ;
    PUSH32(esp, 0x255400);
    PUSH32(esp, 0x00252974u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252974: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252980
 * Original: 0x00252980 - 0x00252A0F (143 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252980: ;
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
    ecx = 0x6438E0;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00252A0Bu); RECOMP_ABI_CALL(0x001F6440u, sub_001F6440); /* call 0x001F6440 */

loc_00252A0B: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00252A10
 * Original: 0x00252A10 - 0x00252A1A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252A10: ;
    ecx = 0x6459C0;
    g_seh_ebp = ebp; sub_001F6E50(); return; /* tail jmp 0x001F6E50 */

}

/**
 * sub_00252A20
 * Original: 0x00252A20 - 0x00252A2A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00252A20: ;
    ecx = 0x645AC8;
    g_seh_ebp = ebp; sub_001F9FD0(); return; /* tail jmp 0x001F9FD0 */

}

/**
 * sub_00252A30
 * Original: 0x00252A30 - 0x00252A46 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252A30(void)
{

loc_00252A30: ;
    ecx = 0x65BD0C;
    PUSH32(esp, 0x00252A3Au); RECOMP_ABI_CALL(0x001FA250u, sub_001FA250); /* call 0x001FA250 */

loc_00252A3A: ;
    PUSH32(esp, 0x255410);
    PUSH32(esp, 0x00252A44u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252A44: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252A50
 * Original: 0x00252A50 - 0x00252A66 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252A50(void)
{

loc_00252A50: ;
    ecx = 0x687D28;
    PUSH32(esp, 0x00252A5Au); RECOMP_ABI_CALL(0x001FA270u, sub_001FA270); /* call 0x001FA270 */

loc_00252A5A: ;
    PUSH32(esp, 0x255420);
    PUSH32(esp, 0x00252A64u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252A64: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252A70
 * Original: 0x00252A70 - 0x00252A7C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252A70(void)
{

loc_00252A70: ;
    PUSH32(esp, 0x255440);
    PUSH32(esp, 0x00252A7Au); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252A7A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252A80
 * Original: 0x00252A80 - 0x00252A8C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252A80(void)
{

loc_00252A80: ;
    PUSH32(esp, 0x255460);
    PUSH32(esp, 0x00252A8Au); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252A8A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252A90
 * Original: 0x00252A90 - 0x00252A9C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252A90(void)
{

loc_00252A90: ;
    PUSH32(esp, 0x255480);
    PUSH32(esp, 0x00252A9Au); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252A9A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252AA0
 * Original: 0x00252AA0 - 0x00252AAC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252AA0(void)
{

loc_00252AA0: ;
    PUSH32(esp, 0x2554A0);
    PUSH32(esp, 0x00252AAAu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252AAA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252AB0
 * Original: 0x00252AB0 - 0x00252AC6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252AB0(void)
{

loc_00252AB0: ;
    ecx = 0x690B58;
    PUSH32(esp, 0x00252ABAu); RECOMP_ABI_CALL(0x001FF910u, sub_001FF910); /* call 0x001FF910 */

loc_00252ABA: ;
    PUSH32(esp, 0x255430);
    PUSH32(esp, 0x00252AC4u); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252AC4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252AD0
 * Original: 0x00252AD0 - 0x00252ADC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252AD0(void)
{

loc_00252AD0: ;
    PUSH32(esp, 0x2554C0);
    PUSH32(esp, 0x00252ADAu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252ADA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00252AE0
 * Original: 0x00252AE0 - 0x00252AEC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252AE0(void)
{

loc_00252AE0: ;
    PUSH32(esp, 0x2554D0);
    PUSH32(esp, 0x00252AEAu); RECOMP_ABI_CALL(0x002377EFu, sub_002377EF); /* call 0x002377EF */

loc_00252AEA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
