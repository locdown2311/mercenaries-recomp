/**
 * Mercenaries - Recompiled code chunk 30
 * Functions: 250 (0x00188410 - 0x0018F4E0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00188410
 * Original: 0x00188410 - 0x001885EB (475 bytes, 112 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188410: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0x42E3E8;
    PUSH32(esp, 0x0018841Du); RECOMP_ABI_CALL(0x000D3BC0u, sub_000D3BC0); /* call 0x000D3BC0 */

loc_0018841D: ;
    PUSH32(esp, 0);
    MEM8(0x3BE2E8) = 0;
    PUSH32(esp, 0x0018842Bu); RECOMP_ABI_CALL(0x001592B0u, sub_001592B0); /* call 0x001592B0 */

loc_0018842B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00188432u); RECOMP_ABI_CALL(0x001F3290u, sub_001F3290); /* call 0x001F3290 */

loc_00188432: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00188439u); RECOMP_ABI_CALL(0x00159260u, sub_00159260); /* call 0x00159260 */

loc_00188439: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00188441u); RECOMP_ABI_CALL(0x00179680u, sub_00179680); /* call 0x00179680 */

loc_00188441: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0018844Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00188447u); } /* indirect call */
    }

loc_0018844A: ;
    PUSH32(esp, 0xD0813D81u);
    ecx = 0x30ECA0;
    PUSH32(esp, 0x00188459u); RECOMP_ABI_CALL(0x001FDF10u, sub_001FDF10); /* call 0x001FDF10 */

loc_00188459: ;
    SET_LO8(eax, MEM8(0x403384));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188467; /* je: equal / zero */

loc_00188462: ;
    PUSH32(esp, 0x00188467u); RECOMP_ABI_CALL(0x001758D0u, sub_001758D0); /* call 0x001758D0 */

loc_00188467: ;
    PUSH32(esp, 0);
    ecx = 0x4140E8;
    PUSH32(esp, 0x00188473u); RECOMP_ABI_CALL(0x000976E0u, sub_000976E0); /* call 0x000976E0 */

loc_00188473: ;
    PUSH32(esp, 0x00188478u); RECOMP_ABI_CALL(0x0016FC70u, sub_0016FC70); /* call 0x0016FC70 */

loc_00188478: ;
    PUSH32(esp, 0x0018847Du); RECOMP_ABI_CALL(0x00035FE0u, sub_00035FE0); /* call 0x00035FE0 */

loc_0018847D: ;
    PUSH32(esp, 0x00188482u); RECOMP_ABI_CALL(0x00108250u, sub_00108250); /* call 0x00108250 */

loc_00188482: ;
    PUSH32(esp, 0x00188487u); RECOMP_ABI_CALL(0x00111380u, sub_00111380); /* call 0x00111380 */

loc_00188487: ;
    PUSH32(esp, 0x0018848Cu); RECOMP_ABI_CALL(0x0016F9B0u, sub_0016F9B0); /* call 0x0016F9B0 */

loc_0018848C: ;
    ecx = 0x33CCA8;
    PUSH32(esp, 0x00188496u); RECOMP_ABI_CALL(0x000B49D0u, sub_000B49D0); /* call 0x000B49D0 */

loc_00188496: ;
    PUSH32(esp, 0x0018849Bu); RECOMP_ABI_CALL(0x000AD610u, sub_000AD610); /* call 0x000AD610 */

loc_0018849B: ;
    PUSH32(esp, 0x001884A0u); RECOMP_ABI_CALL(0x001586E0u, sub_001586E0); /* call 0x001586E0 */

loc_001884A0: ;
    PUSH32(esp, 0x001884A5u); RECOMP_ABI_CALL(0x0020C050u, sub_0020C050); /* call 0x0020C050 */

loc_001884A5: ;
    PUSH32(esp, 0x001884AAu); RECOMP_ABI_CALL(0x001FBB80u, sub_001FBB80); /* call 0x001FBB80 */

loc_001884AA: ;
    PUSH32(esp, 0x001884AFu); RECOMP_ABI_CALL(0x001F2970u, sub_001F2970); /* call 0x001F2970 */

loc_001884AF: ;
    PUSH32(esp, 0x001884B4u); RECOMP_ABI_CALL(0x00151080u, sub_00151080); /* call 0x00151080 */

loc_001884B4: ;
    PUSH32(esp, 0x001884B9u); RECOMP_ABI_CALL(0x001530F0u, sub_001530F0); /* call 0x001530F0 */

loc_001884B9: ;
    ecx = 0x79349C;
    PUSH32(esp, 0x001884C3u); RECOMP_ABI_CALL(0x00122890u, sub_00122890); /* call 0x00122890 */

loc_001884C3: ;
    ecx = MEM32(0x371DD8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001884D0u); RECOMP_ABI_CALL(0x00122DC0u, sub_00122DC0); /* call 0x00122DC0 */

loc_001884D0: ;
    ecx = MEM32(0x413F94);
    PUSH32(esp, 0x001884DBu); RECOMP_ABI_CALL(0x00111F00u, sub_00111F00); /* call 0x00111F00 */

loc_001884DB: ;
    PUSH32(esp, 0x001884E0u); RECOMP_ABI_CALL(0x002030C0u, sub_002030C0); /* call 0x002030C0 */

loc_001884E0: ;
    PUSH32(esp, 0x001884E5u); RECOMP_ABI_CALL(0x002033C0u, sub_002033C0); /* call 0x002033C0 */

loc_001884E5: ;
    PUSH32(esp, 0x001884EAu); RECOMP_ABI_CALL(0x000B7C90u, sub_000B7C90); /* call 0x000B7C90 */

loc_001884EA: ;
    PUSH32(esp, 0x001884EFu); RECOMP_ABI_CALL(0x00112500u, sub_00112500); /* call 0x00112500 */

loc_001884EF: ;
    PUSH32(esp, 0x001884F4u); RECOMP_ABI_CALL(0x00150F50u, sub_00150F50); /* call 0x00150F50 */

loc_001884F4: ;
    PUSH32(esp, 0x001884F9u); RECOMP_ABI_CALL(0x00123520u, sub_00123520); /* call 0x00123520 */

loc_001884F9: ;
    ecx = eax;
    PUSH32(esp, 0x00188500u); RECOMP_ABI_CALL(0x001253C0u, sub_001253C0); /* call 0x001253C0 */

loc_00188500: ;
    PUSH32(esp, 0x00188505u); RECOMP_ABI_CALL(0x00122900u, sub_00122900); /* call 0x00122900 */

loc_00188505: ;
    PUSH32(esp, 0x0018850Au); RECOMP_ABI_CALL(0x0014AB20u, sub_0014AB20); /* call 0x0014AB20 */

loc_0018850A: ;
    PUSH32(esp, 0x0018850Fu); RECOMP_ABI_CALL(0x001EFE90u, sub_001EFE90); /* call 0x001EFE90 */

loc_0018850F: ;
    PUSH32(esp, 0x00188514u); RECOMP_ABI_CALL(0x00063F00u, sub_00063F00); /* call 0x00063F00 */

loc_00188514: ;
    ecx = MEM32(0x842E24);
    PUSH32(esp, 0x0018851Fu); RECOMP_ABI_CALL(0x002178D0u, sub_002178D0); /* call 0x002178D0 */

loc_0018851F: ;
    PUSH32(esp, 0x00188524u); RECOMP_ABI_CALL(0x00207A70u, sub_00207A70); /* call 0x00207A70 */

loc_00188524: ;
    PUSH32(esp, 0x00188529u); RECOMP_ABI_CALL(0x00121820u, sub_00121820); /* call 0x00121820 */

loc_00188529: ;
    PUSH32(esp, 0x0018852Eu); RECOMP_ABI_CALL(0x00212950u, sub_00212950); /* call 0x00212950 */

loc_0018852E: ;
    PUSH32(esp, 0x00188533u); RECOMP_ABI_CALL(0x00203420u, sub_00203420); /* call 0x00203420 */

loc_00188533: ;
    ecx = 0x4140E8;
    PUSH32(esp, 0x0018853Du); RECOMP_ABI_CALL(0x00097D30u, sub_00097D30); /* call 0x00097D30 */

loc_0018853D: ;
    edx = MEM32(0x4031B0);
    ecx = 0x4031B0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018854Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00188548u); } /* indirect call */
    }

loc_0018854B: ;
    PUSH32(esp, 0x00188550u); RECOMP_ABI_CALL(0x0012EB80u, sub_0012EB80); /* call 0x0012EB80 */

loc_00188550: ;
    ecx = 0x323608;
    PUSH32(esp, 0x0018855Au); RECOMP_ABI_CALL(0x000A3F50u, sub_000A3F50); /* call 0x000A3F50 */

loc_0018855A: ;
    ecx = MEM32(0x371DD8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00188567u); RECOMP_ABI_CALL(0x00122DC0u, sub_00122DC0); /* call 0x00122DC0 */

loc_00188567: ;
    ecx = MEM32(0x793498);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00188574u); RECOMP_ABI_CALL(0x002053D0u, sub_002053D0); /* call 0x002053D0 */

loc_00188574: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0018857Bu); RECOMP_ABI_CALL(0x00215AB0u, sub_00215AB0); /* call 0x00215AB0 */

loc_0018857B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00188580: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00188586u); RECOMP_ABI_CALL(0x002059D0u, sub_002059D0); /* call 0x002059D0 */

loc_00188586: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00188580; /* jl: less (signed <) */

loc_0018858F: ;
    ecx = MEM32(0x643844);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0018859Cu); RECOMP_ABI_CALL(0x001F5C80u, sub_001F5C80); /* call 0x001F5C80 */

loc_0018859C: ;
    ecx = MEM32(0x7934C0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001885A9u); RECOMP_ABI_CALL(0x00205BB0u, sub_00205BB0); /* call 0x00205BB0 */

loc_001885A9: ;
    PUSH32(esp, 0x001885AEu); RECOMP_ABI_CALL(0x0020FF80u, sub_0020FF80); /* call 0x0020FF80 */

loc_001885AE: ;
    PUSH32(esp, 0x001885B3u); RECOMP_ABI_CALL(0x00146D20u, sub_00146D20); /* call 0x00146D20 */

loc_001885B3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001885BAu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_001885BA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001885C1u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_001885C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001885C9u); RECOMP_ABI_CALL(0x001F6790u, sub_001F6790); /* call 0x001F6790 */

loc_001885C9: ;
    MEM32(0x371D7C) = 0;
    PUSH32(esp, 0x001885D8u); RECOMP_ABI_CALL(0x00178960u, sub_00178960); /* call 0x00178960 */

loc_001885D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x59C00449) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x59C00449 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001885EA; /* jne: not equal / not zero */

loc_001885E0: ;
    ecx = 0x4322F8;
    g_seh_ebp = ebp; sub_00189270(); return; /* tail jmp 0x00189270 */

loc_001885EA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001885F0
 * Original: 0x001885F0 - 0x0018860B (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001885F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001885F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188603; /* je: equal / zero */

loc_001885F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188603; /* je: equal / zero */

loc_001885FE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_00188603: ;
    eax = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00188610
 * Original: 0x00188610 - 0x0018862E (30 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188610(void)
{

loc_00188610: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x11);
    MEM32(esi + 0xE6B0) = ecx;
    PUSH32(esp, 0x00188624u); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_00188624: ;
    MEM32(esi + 0xE6A0) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00188630
 * Original: 0x00188630 - 0x0018866C (60 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188630: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x6C0);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00188668; /* js: sign (negative) */

loc_0018863C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx + esi * 4 + 0x6A0;
    edi = edi;

loc_00188650: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00188659u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00188656u); } /* indirect call */
    }

loc_00188659: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00188665; /* jne: not equal / not zero */

loc_0018865D: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00188650; /* jge: greater or equal (signed >=) */

loc_00188665: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00188668: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00188670
 * Original: 0x00188670 - 0x0018867E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188670: ;
    edx = MEM32(ecx + 0x6C0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    esp += 4; return; /* ret */

}

/**
 * sub_00188680
 * Original: 0x00188680 - 0x00188687 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188680(void)
{

loc_00188680: ;
    SET_LO8(eax, MEM8(ecx + 0xE508));
    esp += 4; return; /* ret */

}

/**
 * sub_00188690
 * Original: 0x00188690 - 0x001886E2 (82 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188690: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001886DC; /* jne: not equal / not zero */

loc_0018869A: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x001886AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001886A7u); } /* indirect call */
    }

loc_001886AA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001886B2u); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_001886B2: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001886C8; /* jne: not equal / not zero */

loc_001886BE: ;
    MEM8(esi + 0x10) = 1;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001886C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001886D7; /* jne: not equal / not zero */

loc_001886CD: ;
    MEM8(esi + 0x11) = 1;

loc_001886D1: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001886D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001886D1; /* je: equal / zero */

loc_001886DC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001886F0
 * Original: 0x001886F0 - 0x00188754 (100 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001886F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001886F0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0018874D; /* jne: not equal / not zero */

loc_00188701: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00188711u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018870Eu); } /* indirect call */
    }

loc_00188711: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00188719u); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_00188719: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018872F; /* jne: not equal / not zero */

loc_00188725: ;
    MEM8(esi + 0x10) = LO8(ebx);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0018872F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018873E; /* jne: not equal / not zero */

loc_00188734: ;
    MEM8(esi + 0x11) = LO8(ebx);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0018873E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018874D; /* jne: not equal / not zero */

loc_00188743: ;
    MEM8(esi + 0x12) = LO8(ebx);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0018874D: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00188760
 * Original: 0x00188760 - 0x001887AC (76 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188760: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001887A6; /* jne: not equal / not zero */

loc_0018876A: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0018877Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00188777u); } /* indirect call */
    }

loc_0018877A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00188782u); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_00188782: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00188798; /* jne: not equal / not zero */

loc_0018878E: ;
    MEM8(esi + 0x14) = 1;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00188798: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_NE(_fa, _fb)) goto loc_001887A8; /* jne: not equal / not zero */

loc_0018879F: ;
    MEM8(esi + 0x15) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001887A6: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001887A8: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00188795
 * Original: 0x00188795 - 0x001887AC (23 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188795(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188795: ;
    esp += 12; return; /* ret 8 */

    MEM8(esi + 0x15) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001887A8: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001887B0
 * Original: 0x001887B0 - 0x001887F5 (69 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001887B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001887B0: ;
    eax = MEM32(ecx + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001887D4; /* je: equal / zero */

loc_001887BA: ;
    if (CMP_LE(_fas, _fbs)) goto loc_001887E0; /* jle: less or equal (signed <=) */

loc_001887BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001887E0; /* jg: greater (signed >) */

loc_001887C1: ;
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x14), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001887D9; /* jne: not equal / not zero */

loc_001887C6: ;
    _fa = (uint32_t)(MEM8(ecx + 0x15)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x15), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001887E0; /* je: equal / zero */

loc_001887CB: ;
    MEM32(ecx + 4) = 8;
    goto loc_001887E0;

loc_001887D4: ;
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x14), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001887E0; /* je: equal / zero */

loc_001887D9: ;
    MEM32(ecx + 4) = 7;

loc_001887E0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM8(ecx + 0x14) = LO8(edx);
    MEM8(ecx + 0x15) = LO8(edx);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00188800
 * Original: 0x00188800 - 0x00188811 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188800(void)
{

loc_00188800: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00188820
 * Original: 0x00188820 - 0x00188868 (72 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188820: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00188834u); RECOMP_ABI_CALL(0x0018D2D0u, sub_0018D2D0); /* call 0x0018D2D0 */

loc_00188834: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018884E; /* jne: not equal / not zero */

loc_00188839: ;
    MEM32(esi + 4) = 1;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018884E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018885A; /* jne: not equal / not zero */

loc_00188853: ;
    MEM32(esi + 4) = 2;

loc_0018885A: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00188870
 * Original: 0x00188870 - 0x001888E9 (121 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188870: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00188884u); RECOMP_ABI_CALL(0x0018D2D0u, sub_0018D2D0); /* call 0x0018D2D0 */

loc_00188884: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001888AB; /* jne: not equal / not zero */

loc_00188889: ;
    ecx = MEM32(0x4322F0);
    eax = 1;
    MEM8(ecx + 0xE508) = LO8(eax);
    MEM32(esi + 4) = eax;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001888AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001888B5; /* je: equal / zero */

loc_001888B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001888DB; /* jne: not equal / not zero */

loc_001888B5: ;
    edx = MEM32(0x4322F0);
    MEM8(edx + 0xE508) = 0;
    MEM32(esi + 4) = 2;
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ecx + 0xE6AC) = LO8(eax);

loc_001888DB: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001888F0
 * Original: 0x001888F0 - 0x00188A40 (336 bytes, 107 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001888F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001888F0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00188907u); RECOMP_ABI_CALL(0x0018D2D0u, sub_0018D2D0); /* call 0x0018D2D0 */

loc_00188907: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00188A23; /* jne: not equal / not zero */

loc_00188910: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00188930; /* jl: less (signed <) */

loc_00188918: ;
    MEM32(esi + 4) = 1;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00188930: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001889EC; /* jge: greater or equal (signed >=) */

loc_0018893B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esp + 0x34;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x0018894Bu); RECOMP_ABI_CALL(0x001FFC20u, sub_001FFC20); /* call 0x001FFC20 */

loc_0018894B: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00188953: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x20);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    edx = ecx + edi + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00188967u); RECOMP_ABI_CALL(0x00237FC0u, sub_00237FC0); /* call 0x00237FC0 */

loc_00188967: ;
    ecx = MEM32(esp + 0x40);
    eax = MEM32(esi + 0xC);
    MEM32(eax + ebx + 0x24) = ecx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + ebx + 0x28) = edx;
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00188985u); RECOMP_ABI_CALL(0x0018C9B0u, sub_0018C9B0); /* call 0x0018C9B0 */

loc_00188985: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ecx + ebp + 4) = eax;
    edx = MEM32(esi + 0xC);
    ecx = MEM32(edx + ebp + 4);
    eax = MEM32(esp + 0x10);
    edx = MEM32(0x4322F0);
    MEM32(eax + edx + 0xE534) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x100 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00188953; /* jl: less (signed <) */

loc_001889BC: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(0x4322F0);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001889D1u); RECOMP_ABI_CALL(0x0018D250u, sub_0018D250); /* call 0x0018D250 */

loc_001889D1: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(esi + 0x14) = eax;
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001889EC: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001889F5u); RECOMP_ABI_CALL(0x000443D0u, sub_000443D0); /* call 0x000443D0 */

loc_001889F5: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00188A0Au); RECOMP_ABI_CALL(0x0018D250u, sub_0018D250); /* call 0x0018D250 */

loc_00188A0A: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00188A23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00188A2F; /* jne: not equal / not zero */

loc_00188A28: ;
    MEM32(esi + 4) = 2;

loc_00188A2F: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00188A40
 * Original: 0x00188A40 - 0x00188A64 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188A40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0xE50C;
    edi = 8;
    /* nop */

loc_00188A50: ;
    ecx = esi + 0x20;
    MEM8(esi) = 0;
    PUSH32(esp, 0x00188A5Bu); RECOMP_ABI_CALL(0x001FFC20u, sub_001FFC20); /* call 0x001FFC20 */

loc_00188A5B: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00188A50; /* jne: not equal / not zero */

loc_00188A61: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00188A70
 * Original: 0x00188A70 - 0x00188A81 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188A70(void)
{

loc_00188A70: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = eax + ecx + 0xE50C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00188A90
 * Original: 0x00188A90 - 0x00188A97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188A90(void)
{

loc_00188A90: ;
    eax = ecx + 0xE66C;
    esp += 4; return; /* ret */

}

/**
 * sub_00188AA0
 * Original: 0x00188AA0 - 0x00188AA8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188AA0(void)
{

loc_00188AA0: ;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00188AB0
 * Original: 0x00188AB0 - 0x00188AC0 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188AB0(void)
{

loc_00188AB0: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(0x4322F0);
    MEM32(ecx + 0x6C8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00188AC0
 * Original: 0x00188AC0 - 0x00188AEC (44 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188AC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188AC0: ;
    eax = MEM32(ecx + 0x6C0);
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 0x6A0) = edx;
    eax = MEM32(ecx + 0x6C0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x6C0) = eax;
    ecx = MEM32(ecx + eax * 4 + 0x69C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00188AE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00188AE7u); } /* indirect call */
    }

loc_00188AE9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00188AF0
 * Original: 0x00188AF0 - 0x00188B16 (38 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188AF0: ;
    eax = MEM32(ecx + 0x6C0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x6C0) = eax;
    edx = MEM32(ecx + eax * 4 + 0x6A0);
    MEM32(ecx + 0x6C4) = edx;
    ecx = MEM32(ecx + eax * 4 + 0x6A0);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_00188B20
 * Original: 0x00188B20 - 0x00188B61 (65 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188B20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x6C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00188B41; /* jle: less or equal (signed <=) */

loc_00188B2D: ;
    /* nop */

loc_00188B30: ;
    ecx = esi;
    PUSH32(esp, 0x00188B37u); RECOMP_ABI_CALL(0x00188AF0u, sub_00188AF0); /* call 0x00188AF0 */

loc_00188B37: ;
    eax = MEM32(esi + 0x6C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00188B30; /* jg: greater (signed >) */

loc_00188B41: ;
    MEM32(esi + 0x6C4) = 0;
    MEM32(esi + 0x6C8) = 0;
    ecx = esi + 0x6CC;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0018D490(); return; /* tail jmp 0x0018D490 */

}

/**
 * sub_00188B70
 * Original: 0x00188B70 - 0x00188BD4 (100 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188B70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188B8A; /* je: equal / zero */

loc_00188B7A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00188B80u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00188B80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = 0;

loc_00188B8A: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188BA0; /* je: equal / zero */

loc_00188B92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00188BB7; /* jne: not equal / not zero */

loc_00188B97: ;
    goto loc_00188BA0;

    /* nop */

loc_00188BA0: ;
    ecx = MEM32(0x4322F0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x6FC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6FC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00188BB3u); RECOMP_ABI_CALL(0x002234E0u, sub_002234E0); /* call 0x002234E0 */

loc_00188BB3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00188BA0; /* jne: not equal / not zero */

loc_00188BB7: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00188BC0u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00188BC0: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00188BC9u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00188BC9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00188AB0(); return; /* tail jmp 0x00188AB0 */

}

/**
 * sub_00188BE0
 * Original: 0x00188BE0 - 0x00188E74 (660 bytes, 194 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188BE0: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00188D07; /* jne: not equal / not zero */

loc_00188BF7: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00188C08u); RECOMP_ABI_CALL(0x0018D2D0u, sub_0018D2D0); /* call 0x0018D2D0 */

loc_00188C08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00188C9A; /* jne: not equal / not zero */

loc_00188C11: ;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00188C45; /* jne: not equal / not zero */

loc_00188C19: ;
    eax = MEM32(ebp + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00188C21: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00188C45; /* jne: not equal / not zero */

loc_00188C26: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00188C21; /* jl: less (signed <) */

loc_00188C2F: ;
    eax = MEM32(0x4322F0);
    SET_LO8(ecx, MEM8(eax + 0xE6AD));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00188C45; /* jne: not equal / not zero */

loc_00188C3E: ;
    MEM32(ebp + 4) = 6;

loc_00188C45: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00188C69; /* jl: less (signed <) */

loc_00188C49: ;
    ecx = MEM32(ebp + 0x20);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, 0x00188C54u); RECOMP_ABI_CALL(0x0018C9B0u, sub_0018C9B0); /* call 0x0018C9B0 */

loc_00188C54: ;
    ecx = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + esi * 4 + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + esi * 4 + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188C69; /* je: equal / zero */

loc_00188C5D: ;
    MEM32(ebp + 4) = 6;
    MEM8(esi + ebp + 0x40) = 0;

loc_00188C69: ;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 4), 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188E5E; /* je: equal / zero */

loc_00188C73: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00188C87; /* jl: less (signed <) */

loc_00188C7B: ;
    MEM32(ebp + 8) = 0x19;
    goto loc_00188E5E;

loc_00188C87: ;
    ecx = MEM32(ebp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(ebp + 0x10) = eax;
    PUSH32(esp, 0x00188C94u); RECOMP_ABI_CALL(0x000443D0u, sub_000443D0); /* call 0x000443D0 */

loc_00188C94: ;
    edx = MEM32(ebp + 0x20);
    PUSH32(esp, edx);
    goto loc_00188CE9;

loc_00188C9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00188CFF; /* jne: not equal / not zero */

loc_00188C9F: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = 6;
    MEM32(ebp + 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00188CB7; /* jne: not equal / not zero */

loc_00188CAF: ;
    MEM32(ebp + 4) = ecx;
    goto loc_00188E5E;

loc_00188CB7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00188CD0; /* jl: less (signed <) */

loc_00188CBB: ;
    edx = MEM32(ebp + 0x1C);
    ecx = eax;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ebx, MEM8(ecx + edx + 0x64));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188CD0; /* je: equal / zero */

loc_00188CCB: ;
    MEM8(eax + ebp + 0x40) = 0;

loc_00188CD0: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00188C7B; /* jge: greater or equal (signed >=) */

loc_00188CD8: ;
    ecx = MEM32(ebp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(ebp + 0x10) = eax;
    PUSH32(esp, 0x00188CE5u); RECOMP_ABI_CALL(0x000443D0u, sub_000443D0); /* call 0x000443D0 */

loc_00188CE5: ;
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, eax);

loc_00188CE9: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00188CFAu); RECOMP_ABI_CALL(0x0018D210u, sub_0018D210); /* call 0x0018D210 */

loc_00188CFA: ;
    goto loc_00188E5E;

loc_00188CFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    goto loc_00188E55;

loc_00188D07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00188E52; /* jne: not equal / not zero */

loc_00188D10: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2F5CB8);
    PUSH32(esp, 2);
    PUSH32(esp, 0xA00);
    PUSH32(esp, 0x00188D22u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00188D22: ;
    PUSH32(esp, 0x2F5CA4);
    ecx = esp + 0x28;
    edi = eax;
    PUSH32(esp, 0x2F5C9C);
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = edi;
    PUSH32(esp, 0x00188D3Cu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00188D3C: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x6FC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6FC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00188D58u); RECOMP_ABI_CALL(0x002235E0u, sub_002235E0); /* call 0x002235E0 */

loc_00188D58: ;
    goto loc_00188D60;

    /* nop */

loc_00188D60: ;
    ecx = MEM32(0x4322F0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x6FC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6FC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00188D76u); RECOMP_ABI_CALL(0x002237B0u, sub_002237B0); /* call 0x002237B0 */

loc_00188D76: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188D60; /* je: equal / zero */

loc_00188D7A: ;
    eax = MEM32(esp + 0x14);
    esi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00188DC0; /* jne: not equal / not zero */

loc_00188D87: ;
    ecx = MEM32(0x4322F0);
    PUSH32(esp, 0x2F5CA4);
    _fb = (uint32_t)(0x6FC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6FC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00188D9Du); RECOMP_ABI_CALL(0x00223880u, sub_00223880); /* call 0x00223880 */

loc_00188D9D: ;
    /* nop */

loc_00188DA0: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6FC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6FC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00188DB6u); RECOMP_ABI_CALL(0x00223440u, sub_00223440); /* call 0x00223440 */

loc_00188DB6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188DA0; /* je: equal / zero */

loc_00188DBA: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188DD8; /* je: equal / zero */

loc_00188DC0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00188DC6u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00188DC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = 0;
    MEM32(ebp + 4) = 6;

loc_00188DD8: ;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 4), 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188E0B; /* je: equal / zero */

loc_00188DDE: ;
    eax = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00188DE4: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188E04; /* je: equal / zero */

loc_00188DE9: ;
    edi = 0x2F5CA4;
    esi = eax;
    ecx = 0x12;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00188E1B; /* je: equal / zero */

loc_00188DFB: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00188DE4; /* jl: less (signed <) */

loc_00188E04: ;
    MEM32(ebp + 4) = 5;

loc_00188E0B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00188E15u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00188E15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    goto loc_00188E5E;

loc_00188E1B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00188E04; /* jl: less (signed <) */

loc_00188E1F: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00188E30u); RECOMP_ABI_CALL(0x0018CB80u, sub_0018CB80); /* call 0x0018CB80 */

loc_00188E30: ;
    edx = MEM32(esp + 0x10);
    ecx = ebx + ebx * 4;
    _fa = (uint32_t)(MEM32(edx + ecx * 8 + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + ecx * 8 + 0x24), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00188E04; /* je: equal / zero */

loc_00188E3D: ;
    eax = edx;
    PUSH32(esp, eax);
    MEM32(ebp + 4) = 6;
    PUSH32(esp, 0x00188E4Cu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00188E4C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    goto loc_00188E5E;

loc_00188E52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */

loc_00188E55: ;
    if (CMP_NE(_fa, _fb)) goto loc_00188E5E; /* jne: not equal / not zero */

loc_00188E57: ;
    MEM32(ebp + 4) = 6;

loc_00188E5E: ;
    ecx = MEM32(ebp + 4);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00188E80
 * Original: 0x00188E80 - 0x00188EB9 (57 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188E80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00188E88u); RECOMP_ABI_CALL(0x00188AA0u, sub_00188AA0); /* call 0x00188AA0 */

loc_00188E88: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00188E99u); RECOMP_ABI_CALL(0x0018CB00u, sub_0018CB00); /* call 0x0018CB00 */

loc_00188E99: ;
    MEM32(esi + 8) = 8;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA43B7935u);
    PUSH32(esp, 0x00188EB7u); RECOMP_ABI_CALL(0x000D7720u, sub_000D7720); /* call 0x000D7720 */

loc_00188EB7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00188EC0
 * Original: 0x00188EC0 - 0x00188EE6 (38 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188EC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x4322F0);
    PUSH32(esp, 0x00188ECEu); RECOMP_ABI_CALL(0x00188A40u, sub_00188A40); /* call 0x00188A40 */

loc_00188ECE: ;
    ecx = esi;
    PUSH32(esp, 0x00188ED5u); RECOMP_ABI_CALL(0x00188AB0u, sub_00188AB0); /* call 0x00188AB0 */

loc_00188ED5: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A0);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000D77C0(); return; /* tail jmp 0x000D77C0 */

}

/**
 * sub_00188EF0
 * Original: 0x00188EF0 - 0x00188F80 (144 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188EF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00188F6B; /* jne: not equal / not zero */

loc_00188EF9: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00188F0Au); RECOMP_ABI_CALL(0x0018D2D0u, sub_0018D2D0); /* call 0x0018D2D0 */

loc_00188F0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00188F51; /* jne: not equal / not zero */

loc_00188F0F: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00188F6B; /* jne: not equal / not zero */

loc_00188F1E: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFC22CDD1u);
    ecx = eax + 0x74;
    PUSH32(esp, 0x00188F2Du); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_00188F2D: ;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00188F3Cu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00188F3C: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 8) = 0x17;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00188F51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00188F72; /* jne: not equal / not zero */

loc_00188F56: ;
    MEM32(esi + 4) = 2;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00188F6B: ;
    MEM32(esi + 4) = 1;

loc_00188F72: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00188F80
 * Original: 0x00188F80 - 0x00188FB2 (50 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188F80(void)
{

loc_00188F80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00188F88u); RECOMP_ABI_CALL(0x00188AA0u, sub_00188AA0); /* call 0x00188AA0 */

loc_00188F88: ;
    eax = MEM32(0x4322F0);
    MEM32(eax + 0xE6A4) = 2;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x8C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00188FA9u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00188FA9: ;
    MEM32(esi + 8) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00188FC0
 * Original: 0x00188FC0 - 0x00188FE7 (39 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188FC0: ;
    PUSH32(esp, 0x00188FC5u); RECOMP_ABI_CALL(0x00188AB0u, sub_00188AB0); /* call 0x00188AB0 */

loc_00188FC5: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00188FD6u); RECOMP_ABI_CALL(0x0018D490u, sub_0018D490); /* call 0x0018D490 */

loc_00188FD6: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0018CAA0(); return; /* tail jmp 0x0018CAA0 */

}

/**
 * sub_00188FF0
 * Original: 0x00188FF0 - 0x00189128 (312 bytes, 97 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00188FF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189028; /* jne: not equal / not zero */

loc_00189000: ;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0xC4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189012u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189012: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    MEM32(esi + 8) = 4;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00189028: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189062; /* jne: not equal / not zero */

loc_0018902D: ;
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(ecx + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6C8), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189116; /* jne: not equal / not zero */

loc_00189040: ;
    edx = ecx + 0x1C0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018904Cu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018904C: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    MEM32(esi + 8) = 0xA;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00189062: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189111; /* jne: not equal / not zero */

loc_0018906B: ;
    eax = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(eax + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x6C8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189116; /* jne: not equal / not zero */

loc_0018907C: ;
    ecx = eax + 0x6CC;
    PUSH32(esp, 0x00189087u); RECOMP_ABI_CALL(0x0018CC30u, sub_0018CC30); /* call 0x0018CC30 */

loc_00189087: ;
    ecx = MEM32(0x4322F0);
    SET_LO8(edx, MEM8(ecx + 0xE50C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189099; /* je: equal / zero */

loc_00189097: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00189099: ;
    SET_LO8(edx, MEM8(ecx + 0xE538));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001890A5; /* je: equal / zero */

loc_001890A3: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001890A5: ;
    SET_LO8(edx, MEM8(ecx + 0xE564));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001890B1; /* je: equal / zero */

loc_001890AF: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001890B1: ;
    SET_LO8(edx, MEM8(ecx + 0xE590));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001890BD; /* je: equal / zero */

loc_001890BB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001890BD: ;
    SET_LO8(edx, MEM8(ecx + 0xE5BC));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001890C9; /* je: equal / zero */

loc_001890C7: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001890C9: ;
    SET_LO8(edx, MEM8(ecx + 0xE5E8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001890D5; /* je: equal / zero */

loc_001890D3: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001890D5: ;
    SET_LO8(edx, MEM8(ecx + 0xE614));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001890E1; /* je: equal / zero */

loc_001890DF: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001890E1: ;
    SET_LO8(edx, MEM8(ecx + 0xE640));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189116; /* jne: not equal / not zero */

loc_001890EB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189116; /* je: equal / zero */

loc_001890EF: ;
    eax = ecx + 0x144;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001890FBu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_001890FB: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    MEM32(esi + 8) = 0x14;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00189111: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189119; /* jne: not equal / not zero */

loc_00189116: ;
    MEM32(esi + 4) = edi;

loc_00189119: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00189130
 * Original: 0x00189130 - 0x00189135 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189130: ;
    g_seh_ebp = ebp; sub_00188AA0(); return; /* tail jmp 0x00188AA0 */

}

/**
 * sub_00189140
 * Original: 0x00189140 - 0x001891F6 (182 bytes, 65 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189140: ;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189150; /* jne: not equal / not zero */

loc_00189146: ;
    eax = MEM32(esp + 4);
    MEM8(eax) = 0;
    esp += 8; return; /* ret 4 */

loc_00189150: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x23) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x23 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018917C; /* jne: not equal / not zero */

loc_00189154: ;
    ecx = MEM32(0x413FC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00189160u); RECOMP_ABI_CALL(0x00121650u, sub_00121650); /* call 0x00121650 */

loc_00189160: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x200);
    PUSH32(esp, edx);
    PUSH32(esp, 0xCA182B6Cu);
    ecx = eax;
    PUSH32(esp, 0x00189179u); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_00189179: ;
    esp += 8; return; /* ret 4 */

loc_0018917C: ;
    _fa = (uint32_t)(MEM8(0x6437D0)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x6437D0), 2 (8-bit) */
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x26);
    PUSH32(esp, esi);
    esi = 0x64;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    if (TEST_Z(_fa, _fb)) goto loc_001891C3; /* je: equal / zero */

loc_00189190: ;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x24);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x23);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x20);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x21);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x22);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0x2F5CDC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001891BCu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_001891BC: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001891C3: ;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x24);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x23);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x20);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x21);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x22);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2F5CDC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001891EFu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_001891EF: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00189200
 * Original: 0x00189200 - 0x00189204 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189200(void)
{

loc_00189200: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00189210
 * Original: 0x00189210 - 0x00189222 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189210(void)
{

loc_00189210: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00189219u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189219: ;
    MEM8(esi + 0xE509) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00189230
 * Original: 0x00189230 - 0x00189241 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189230(void)
{

loc_00189230: ;
    eax = ecx + 0x1C;
    PUSH32(esp, eax);
    MEM8(ecx + 0xE6AD) = 0;
    PUSH32(esp, 0x00189240u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189240: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00189250
 * Original: 0x00189250 - 0x00189261 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189250(void)
{

loc_00189250: ;
    eax = ecx + 0x38;
    PUSH32(esp, eax);
    MEM8(ecx + 0xE6AD) = 0;
    PUSH32(esp, 0x00189260u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189260: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00189270
 * Original: 0x00189270 - 0x001893A9 (313 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189270: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0x3C0480;
    PUSH32(esp, 0x0018927Du); RECOMP_ABI_CALL(0x000D4A10u, sub_000D4A10); /* call 0x000D4A10 */

loc_0018927D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189298; /* je: equal / zero */

loc_00189281: ;
    PUSH32(esp, 0);
    ecx = 0x3C0480;
    PUSH32(esp, 0x0018928Du); RECOMP_ABI_CALL(0x000D4A10u, sub_000D4A10); /* call 0x000D4A10 */

loc_0018928D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189293u); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_00189293: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0018929A;

loc_00189298: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018929A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8762095);
    ecx = 0x414150;
    PUSH32(esp, 0x001892AAu); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_001892AA: ;
    ecx = 0x3C0480;
    PUSH32(esp, 0x001892B4u); RECOMP_ABI_CALL(0x00067650u, sub_00067650); /* call 0x00067650 */

loc_001892B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001892CF; /* je: equal / zero */

loc_001892B8: ;
    PUSH32(esp, 0);
    ecx = 0x3C0480;
    PUSH32(esp, 0x001892C4u); RECOMP_ABI_CALL(0x00067650u, sub_00067650); /* call 0x00067650 */

loc_001892C4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001892CAu); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_001892CA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001892D1;

loc_001892CF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001892D1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7305B8D3);
    ecx = 0x414150;
    PUSH32(esp, 0x001892E1u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_001892E1: ;
    ecx = 0x3C0480;
    PUSH32(esp, 0x001892EBu); RECOMP_ABI_CALL(0x00194150u, sub_00194150); /* call 0x00194150 */

loc_001892EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189306; /* je: equal / zero */

loc_001892EF: ;
    PUSH32(esp, 0);
    ecx = 0x3C0480;
    PUSH32(esp, 0x001892FBu); RECOMP_ABI_CALL(0x00194150u, sub_00194150); /* call 0x00194150 */

loc_001892FB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189301u); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_00189301: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00189308;

loc_00189306: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00189308: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40FF3F78);
    ecx = 0x414150;
    PUSH32(esp, 0x00189318u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_00189318: ;
    ecx = 0x3C0480;
    PUSH32(esp, 0x00189322u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_00189322: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018933D; /* je: equal / zero */

loc_00189326: ;
    PUSH32(esp, 0);
    ecx = 0x3C0480;
    PUSH32(esp, 0x00189332u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_00189332: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189338u); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_00189338: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0018933F;

loc_0018933D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018933F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFDCB76EDu);
    ecx = 0x414150;
    PUSH32(esp, 0x0018934Fu); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_0018934F: ;
    ecx = 0x3C0480;
    PUSH32(esp, 0x00189359u); RECOMP_ABI_CALL(0x000D4A60u, sub_000D4A60); /* call 0x000D4A60 */

loc_00189359: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189374; /* je: equal / zero */

loc_0018935D: ;
    PUSH32(esp, 0);
    ecx = 0x3C0480;
    PUSH32(esp, 0x00189369u); RECOMP_ABI_CALL(0x000D4A60u, sub_000D4A60); /* call 0x000D4A60 */

loc_00189369: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018936Fu); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_0018936F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00189376;

loc_00189374: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00189376: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1833A8BC);
    ecx = 0x414150;
    PUSH32(esp, 0x00189386u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_00189386: ;
    SET_LO8(eax, MEM8(esi + 0xE508));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001893A7; /* je: equal / zero */

loc_00189390: ;
    _fb = (uint32_t)(0x84C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x84C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = 0x414150;
    PUSH32(esp, 0x001893A1u); RECOMP_ABI_CALL(0x00121B00u, sub_00121B00); /* call 0x00121B00 */

loc_001893A1: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0015F890(); return; /* tail jmp 0x0015F890 */

loc_001893A7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001893B0
 * Original: 0x001893B0 - 0x001893F5 (69 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001893B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001893B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x6C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001893F1; /* jle: less or equal (signed <=) */

loc_001893BD: ;
    ecx = MEM32(esi + eax * 4 + 0x69C);
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001893CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001893CBu); } /* indirect call */
    }

loc_001893CE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001893DD; /* jne: not equal / not zero */

loc_001893D2: ;
    ecx = esi;
    PUSH32(esp, 0x001893D9u); RECOMP_ABI_CALL(0x00188AF0u, sub_00188AF0); /* call 0x00188AF0 */

loc_001893D9: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001893DD: ;
    MEM32(esi + 0x6C4) = 0;
    MEM32(esi + 0x6C8) = 0;

loc_001893F1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00189400
 * Original: 0x00189400 - 0x00189484 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189400: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x0018940Cu); RECOMP_ABI_CALL(0x0008ECE0u, sub_0008ECE0); /* call 0x0008ECE0 */

loc_0018940C: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189453; /* je: equal / zero */

loc_00189415: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x440); PUSH32(esp, 0x0018941Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00189419u); } /* indirect call */
    }

loc_0018941F: ;
    ecx = MEM32(esi + 0x98);
    edx = MEM32(esi + 0xAC4);
    PUSH32(esp, edx);
    MEM32(esp + 8) = ecx;
    PUSH32(esp, 0xC8FFFAA4u);
    ecx = 0x414150;
    PUSH32(esp, 0x0018943Fu); RECOMP_ABI_CALL(0x00121DA0u, sub_00121DA0); /* call 0x00121DA0 */

loc_0018943F: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x9ED8A876u);
    ecx = 0x414150;
    PUSH32(esp, 0x00189453u); RECOMP_ABI_CALL(0x00121DA0u, sub_00121DA0); /* call 0x00121DA0 */

loc_00189453: ;
    ecx = 0x34ABC8;
    PUSH32(esp, 0x0018945Du); RECOMP_ABI_CALL(0x000CAEF0u, sub_000CAEF0); /* call 0x000CAEF0 */

loc_0018945D: ;
    ecx = 0x34AA1C;
    PUSH32(esp, 0x00189467u); RECOMP_ABI_CALL(0x000C9E60u, sub_000C9E60); /* call 0x000C9E60 */

loc_00189467: ;
    ecx = 0x323338;
    PUSH32(esp, 0x00189471u); RECOMP_ABI_CALL(0x00095F20u, sub_00095F20); /* call 0x00095F20 */

loc_00189471: ;
    PUSH32(esp, 0x00189476u); RECOMP_ABI_CALL(0x0015F870u, sub_0015F870); /* call 0x0015F870 */

loc_00189476: ;
    ecx = 0x3DA7D8;
    POP32(esp, esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00160B60(); return; /* tail jmp 0x00160B60 */

}

/**
 * sub_00189490
 * Original: 0x00189490 - 0x0018953C (172 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189490: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x0018949Eu); RECOMP_ABI_CALL(0x0008ECE0u, sub_0008ECE0); /* call 0x0008ECE0 */

loc_0018949E: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018950A; /* je: equal / zero */

loc_001894A7: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x444); PUSH32(esp, 0x001894B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001894ABu); } /* indirect call */
    }

loc_001894B1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC8FFFAA4u);
    ecx = 0x414150;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001894D4u); RECOMP_ABI_CALL(0x00122000u, sub_00122000); /* call 0x00122000 */

loc_001894D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001894E4; /* je: equal / zero */

loc_001894D8: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001894E4u); RECOMP_ABI_CALL(0x00057F50u, sub_00057F50); /* call 0x00057F50 */

loc_001894E4: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x9ED8A876u);
    ecx = 0x414150;
    PUSH32(esp, 0x001894F8u); RECOMP_ABI_CALL(0x00122000u, sub_00122000); /* call 0x00122000 */

loc_001894F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018950A; /* je: equal / zero */

loc_001894FC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esi + 0x98) = xmm0.f[0]; /* movss */

loc_0018950A: ;
    ecx = 0x34ABC8;
    PUSH32(esp, 0x00189514u); RECOMP_ABI_CALL(0x000CDC20u, sub_000CDC20); /* call 0x000CDC20 */

loc_00189514: ;
    ecx = 0x34AA1C;
    PUSH32(esp, 0x0018951Eu); RECOMP_ABI_CALL(0x000CE900u, sub_000CE900); /* call 0x000CE900 */

loc_0018951E: ;
    ecx = 0x323338;
    PUSH32(esp, 0x00189528u); RECOMP_ABI_CALL(0x00095FA0u, sub_00095FA0); /* call 0x00095FA0 */

loc_00189528: ;
    PUSH32(esp, 0x0018952Du); RECOMP_ABI_CALL(0x0015F890u, sub_0015F890); /* call 0x0015F890 */

loc_0018952D: ;
    ecx = 0x3DA7D8;
    PUSH32(esp, 0x00189537u); RECOMP_ABI_CALL(0x001611D0u, sub_001611D0); /* call 0x001611D0 */

loc_00189537: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00189540
 * Original: 0x00189540 - 0x00189583 (67 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189540: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00189548u); RECOMP_ABI_CALL(0x00188AA0u, sub_00188AA0); /* call 0x00188AA0 */

loc_00189548: ;
    eax = MEM32(0x4322F0);
    MEM32(eax + 0xE6A4) = 2;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00189568u); RECOMP_ABI_CALL(0x0018CA50u, sub_0018CA50); /* call 0x0018CA50 */

loc_00189568: ;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x8C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018957Au); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018957A: ;
    MEM32(esi + 8) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00189590
 * Original: 0x00189590 - 0x00189790 (512 bytes, 129 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189590: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 8);
    PUSH32(esp, edi);
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001895D4; /* jne: not equal / not zero */

loc_001895A1: ;
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(ecx + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6C8), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001895C8; /* jne: not equal / not zero */

loc_001895B0: ;
    eax = ecx + 0xC4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001895BCu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_001895BC: ;
    MEM32(ebx + 8) = 4;
    goto loc_00189770;

loc_001895C8: ;
    MEM32(ebx + 4) = 2;
    goto loc_00189770;

loc_001895D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189633; /* jne: not equal / not zero */

loc_001895D9: ;
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(ecx + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6C8), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189600; /* jne: not equal / not zero */

loc_001895E8: ;
    edx = ecx + 0x1C0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001895F4u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_001895F4: ;
    MEM32(ebx + 8) = 0xA;
    goto loc_00189770;

loc_00189600: ;
    MEM32(ecx + 0xE6A4) = edi;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189618u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189618: ;
    ecx = MEM32(0x4322F0);
    edx = MEM32(ecx + 0x6E4);
    MEM32(ebx + 0xC) = edx;
    MEM32(ebx + 8) = 3;
    goto loc_00189770;

loc_00189633: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00189684; /* jne: not equal / not zero */

loc_00189639: ;
    ecx = MEM32(0x4322F0);
    eax = 2;
    MEM32(ecx + 0xE6A4) = eax;
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(ecx + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6C8), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018976C; /* jne: not equal / not zero */

loc_0018965D: ;
    edx = MEM32(ebx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x6E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x6E4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018976C; /* je: equal / zero */

loc_0018966C: ;
    eax = ecx + 0xC4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189678u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189678: ;
    MEM32(ebx + 8) = 4;
    goto loc_0018976F;

loc_00189684: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001896A7; /* jne: not equal / not zero */

loc_00189689: ;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x1C0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018969Bu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018969B: ;
    MEM32(ebx + 8) = 0xA;
    goto loc_0018976F;

loc_001896A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189753; /* jne: not equal / not zero */

loc_001896B0: ;
    eax = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(eax + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x6C8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018974A; /* jne: not equal / not zero */

loc_001896C1: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = ebp;
    esi = 0x2C;
    goto loc_001896E0;

loc_001896CF: ;
    eax = MEM32(0x4322F0);
    goto loc_001896E0;

    /* nop */
    /* nop */

loc_001896E0: ;
    ecx = eax + ebp + 0xE52C;
    PUSH32(esp, ecx);
    ecx = esi + eax + 0xE52C;
    PUSH32(esp, 0x001896F4u); RECOMP_ABI_CALL(0x001FFC40u, sub_001FFC40); /* call 0x001FFC40 */

loc_001896F4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001896FE; /* je: equal / zero */

loc_001896F8: ;
    MEM32(esp + 0x10) = edi;
    ebp = esi;

loc_001896FE: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x160) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x160 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001896CF; /* jl: less (signed <) */

loc_0018970A: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(0x4322F0);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    SET_LO8(eax, MEM8(eax + ecx + 0xE50C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0018974A; /* je: equal / zero */

loc_00189725: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x23) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x23 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018974A; /* je: equal / zero */

loc_00189729: ;
    MEM32(ecx + 0xE698) = edx;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x330;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00189741u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189741: ;
    MEM32(ebx + 8) = 0xC;
    goto loc_0018976F;

loc_0018974A: ;
    MEM32(ebx + 4) = 2;
    goto loc_0018976F;

loc_00189753: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018976F; /* jne: not equal / not zero */

loc_00189758: ;
    ecx = MEM32(0x4322F0);
    edx = MEM32(ecx + 0x6C8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0018976C: ;
    MEM32(ebx + 4) = eax;

loc_0018976F: ;
    POP32(esp, esi);

loc_00189770: ;
    ecx = MEM32(0x4322F0);
    PUSH32(esp, 0x2F5E78);
    PUSH32(esp, 0x00189780u); RECOMP_ABI_CALL(0x00087D20u, sub_00087D20); /* call 0x00087D20 */

loc_00189780: ;
    ecx = MEM32(ebx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00189790
 * Original: 0x00189790 - 0x001897D3 (67 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189790: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00189798u); RECOMP_ABI_CALL(0x00188AA0u, sub_00188AA0); /* call 0x00188AA0 */

loc_00189798: ;
    eax = MEM32(0x4322F0);
    MEM32(eax + 0xE6A4) = 1;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001897B8u); RECOMP_ABI_CALL(0x0018CA50u, sub_0018CA50); /* call 0x0018CA50 */

loc_001897B8: ;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x8C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001897CAu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_001897CA: ;
    MEM32(esi + 8) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001897E0
 * Original: 0x001897E0 - 0x0018995C (380 bytes, 97 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001897E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001897E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189851; /* jne: not equal / not zero */

loc_001897F0: ;
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(ecx + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6C8), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189827; /* jne: not equal / not zero */

loc_001897FF: ;
    eax = ecx + 0xC4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018980Bu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018980B: ;
    ecx = MEM32(0x4322F0);
    MEM32(ecx + 0xE6A4) = 2;
    MEM32(esi + 8) = 4;
    goto loc_0018993D;

loc_00189827: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFB032B5Du);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00189836u); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_00189836: ;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00189845u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189845: ;
    MEM32(esi + 8) = 0x18;
    goto loc_0018993D;

loc_00189851: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001898A7; /* jne: not equal / not zero */

loc_00189856: ;
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(ecx + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6C8), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018987D; /* jne: not equal / not zero */

loc_00189865: ;
    eax = ecx + 0x15C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189871u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189871: ;
    MEM32(esi + 8) = 8;
    goto loc_0018993D;

loc_0018987D: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x991FDDFDu);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018988Cu); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_0018988C: ;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018989Bu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018989B: ;
    MEM32(esi + 8) = 0x15;
    goto loc_0018993D;

loc_001898A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189902; /* jne: not equal / not zero */

loc_001898AC: ;
    eax = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(eax + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x6C8), edi (32-bit) */
    PUSH32(esp, 2);
    ecx = eax + 0x74;
    if (CMP_NE(_fa, _fb)) goto loc_001898E0; /* jne: not equal / not zero */

loc_001898BE: ;
    PUSH32(esp, 0x9D87186Au);
    PUSH32(esp, 0x001898C8u); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_001898C8: ;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001898D7u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_001898D7: ;
    MEM32(esi + 8) = 0x17;
    goto loc_0018993D;

loc_001898E0: ;
    PUSH32(esp, 0xFB032B5Du);
    PUSH32(esp, 0x001898EAu); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_001898EA: ;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001898F9u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_001898F9: ;
    MEM32(esi + 8) = 0x18;
    goto loc_0018993D;

loc_00189902: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018992C; /* jne: not equal / not zero */

loc_00189907: ;
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(ecx + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6C8), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189927; /* jne: not equal / not zero */

loc_00189916: ;
    eax = ecx + 0x8C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189922u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189922: ;
    MEM32(esi + 8) = edi;
    goto loc_0018993D;

loc_00189927: ;
    MEM32(esi + 4) = edi;
    goto loc_0018993D;

loc_0018992C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189927; /* je: equal / zero */

loc_00189931: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018993D; /* jne: not equal / not zero */

loc_00189936: ;
    MEM32(esi + 4) = 2;

loc_0018993D: ;
    ecx = MEM32(0x4322F0);
    PUSH32(esp, 0x2F5E88);
    PUSH32(esp, 0x0018994Du); RECOMP_ABI_CALL(0x00087D20u, sub_00087D20); /* call 0x00087D20 */

loc_0018994D: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00189960
 * Original: 0x00189960 - 0x001899A3 (67 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189960: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00189968u); RECOMP_ABI_CALL(0x00188AA0u, sub_00188AA0); /* call 0x00188AA0 */

loc_00189968: ;
    eax = MEM32(0x4322F0);
    MEM32(eax + 0xE6A4) = 0;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00189988u); RECOMP_ABI_CALL(0x0018CA50u, sub_0018CA50); /* call 0x0018CA50 */

loc_00189988: ;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0xC4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018999Au); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018999A: ;
    MEM32(esi + 8) = 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001899B0
 * Original: 0x001899B0 - 0x00189A9D (237 bytes, 62 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001899B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001899B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189A09; /* jne: not equal / not zero */

loc_001899BB: ;
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(ecx + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6C8), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001899E2; /* jne: not equal / not zero */

loc_001899CA: ;
    eax = ecx + 0x33C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001899D6u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_001899D6: ;
    MEM32(esi + 8) = 8;
    goto loc_00189A7F;

loc_001899E2: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x2F1D5480);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001899F1u); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_001899F1: ;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00189A00u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189A00: ;
    MEM32(esi + 8) = 0x18;
    goto loc_00189A7F;

loc_00189A09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189A65; /* jne: not equal / not zero */

loc_00189A0E: ;
    eax = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(eax + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x6C8), 1 (32-bit) */
    PUSH32(esp, 2);
    ecx = eax + 0x74;
    if (CMP_NE(_fa, _fb)) goto loc_00189A43; /* jne: not equal / not zero */

loc_00189A21: ;
    PUSH32(esp, 0xBCD9B853u);
    PUSH32(esp, 0x00189A2Bu); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_00189A2B: ;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189A3Au); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189A3A: ;
    MEM32(esi + 8) = 0x17;
    goto loc_00189A7F;

loc_00189A43: ;
    PUSH32(esp, 0x2F1D5480);
    PUSH32(esp, 0x00189A4Du); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_00189A4D: ;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00189A5Cu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189A5C: ;
    MEM32(esi + 8) = 0x18;
    goto loc_00189A7F;

loc_00189A65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189A73; /* jne: not equal / not zero */

loc_00189A6A: ;
    MEM32(esi + 4) = 1;
    goto loc_00189A7F;

loc_00189A73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189A7F; /* jne: not equal / not zero */

loc_00189A78: ;
    MEM32(esi + 4) = 2;

loc_00189A7F: ;
    ecx = MEM32(0x4322F0);
    PUSH32(esp, 0x2F5E98);
    PUSH32(esp, 0x00189A8Fu); RECOMP_ABI_CALL(0x00087D20u, sub_00087D20); /* call 0x00087D20 */

loc_00189A8F: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00189AA0
 * Original: 0x00189AA0 - 0x00189AEE (78 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189AA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189AA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00189AA8u); RECOMP_ABI_CALL(0x00188AA0u, sub_00188AA0); /* call 0x00188AA0 */

loc_00189AA8: ;
    eax = MEM32(0x4322F0);
    MEM32(eax + 0xE6A4) = 1;
    ecx = MEM32(0x4322F0);
    PUSH32(esp, 0x00189AC2u); RECOMP_ABI_CALL(0x00188A40u, sub_00188A40); /* call 0x00188A40 */

loc_00189AC2: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00189AD3u); RECOMP_ABI_CALL(0x0018CA50u, sub_0018CA50); /* call 0x0018CA50 */

loc_00189AD3: ;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x8C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00189AE5u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189AE5: ;
    MEM32(esi + 8) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00189AF0
 * Original: 0x00189AF0 - 0x00189B27 (55 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189AF0: ;
    PUSH32(esp, 0x00189AF5u); RECOMP_ABI_CALL(0x00188AB0u, sub_00188AB0); /* call 0x00188AB0 */

loc_00189AF5: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00189B06u); RECOMP_ABI_CALL(0x0018D490u, sub_0018D490); /* call 0x0018D490 */

loc_00189B06: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00189B17u); RECOMP_ABI_CALL(0x0018CAA0u, sub_0018CAA0); /* call 0x0018CAA0 */

loc_00189B17: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A0);
    g_seh_ebp = ebp; sub_000D7660(); return; /* tail jmp 0x000D7660 */

}

/**
 * sub_00189B30
 * Original: 0x00189B30 - 0x00189C68 (312 bytes, 79 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189B30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189B67; /* jne: not equal / not zero */

loc_00189B3F: ;
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(ecx + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6C8), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189C43; /* jne: not equal / not zero */

loc_00189B52: ;
    eax = ecx + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189B5Bu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189B5B: ;
    MEM32(esi + 8) = 0x11;
    goto loc_00189C4A;

loc_00189B67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189BBD; /* jne: not equal / not zero */

loc_00189B6C: ;
    eax = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(eax + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x6C8), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189C43; /* jne: not equal / not zero */

loc_00189B7E: ;
    edx = MEM32(eax + 0xE6B0);
    _fa = (uint32_t)(MEM32(edx + 0x3EC4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x3EC4), ecx (32-bit) */
    ecx = eax + 0x74;
    PUSH32(esp, 4);
    if (CMP_NE(_fa, _fb)) goto loc_00189B98; /* jne: not equal / not zero */

loc_00189B91: ;
    PUSH32(esp, 0xE17C1720u);
    goto loc_00189B9D;

loc_00189B98: ;
    PUSH32(esp, 0x8D917D5);

loc_00189B9D: ;
    PUSH32(esp, 0x00189BA2u); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_00189BA2: ;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189BB1u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189BB1: ;
    MEM32(esi + 8) = 0x16;
    goto loc_00189C4A;

loc_00189BBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189BEF; /* jne: not equal / not zero */

loc_00189BC2: ;
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(ecx + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6C8), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189BE6; /* jne: not equal / not zero */

loc_00189BD1: ;
    edx = ecx + 0x330;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00189BDDu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189BDD: ;
    MEM32(esi + 8) = 8;
    goto loc_00189C4A;

loc_00189BE6: ;
    MEM32(esi + 4) = 6;
    goto loc_00189C4A;

loc_00189BEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189C39; /* jne: not equal / not zero */

loc_00189BF4: ;
    eax = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(eax + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x6C8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189C12; /* jne: not equal / not zero */

loc_00189C01: ;
    eax = MEM32(eax + 0xE6A0);
    MEM8(eax + 0xB8) = LO8(ecx);

loc_00189C0D: ;
    MEM32(esi + 4) = ecx;
    goto loc_00189C4A;

loc_00189C12: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFB032B5Du);
    ecx = eax + 0x74;
    PUSH32(esp, 0x00189C21u); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_00189C21: ;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00189C30u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189C30: ;
    MEM32(esi + 8) = 0x18;
    goto loc_00189C4A;

loc_00189C39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189C0D; /* je: equal / zero */

loc_00189C3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189C4A; /* jne: not equal / not zero */

loc_00189C43: ;
    MEM32(esi + 4) = 2;

loc_00189C4A: ;
    ecx = MEM32(0x4322F0);
    PUSH32(esp, 0x2F5EA8);
    PUSH32(esp, 0x00189C5Au); RECOMP_ABI_CALL(0x00087D20u, sub_00087D20); /* call 0x00087D20 */

loc_00189C5A: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00189C70
 * Original: 0x00189C70 - 0x00189D09 (153 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189C70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00189C78u); RECOMP_ABI_CALL(0x00188AA0u, sub_00188AA0); /* call 0x00188AA0 */

loc_00189C78: ;
    eax = MEM32(0x4322F0);
    MEM32(eax + 0xE6A4) = 0;
    ecx = MEM32(0x4322F0);
    PUSH32(esp, 0x00189C92u); RECOMP_ABI_CALL(0x00188A40u, sub_00188A40); /* call 0x00188A40 */

loc_00189C92: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00189CA3u); RECOMP_ABI_CALL(0x0018CA50u, sub_0018CA50); /* call 0x0018CA50 */

loc_00189CA3: ;
    ecx = MEM32(0x4322F0);
    MEM8(ecx + 0xE69C) = 0;
    ecx = MEM32(0x4322F0);
    SET_LO8(eax, MEM8(ecx + 0xE6AF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189CF4; /* je: equal / zero */

loc_00189CC0: ;
    MEM8(ecx + 0xE6AF) = 0;
    ecx = MEM32(0x4322F0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x2F1D5480);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00189CDCu); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_00189CDC: ;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00189CEBu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189CEB: ;
    MEM32(esi + 8) = 0x18;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00189CF4: ;
    eax = ecx + 0xC4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189D00u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189D00: ;
    MEM32(esi + 8) = 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00189D10
 * Original: 0x00189D10 - 0x00189DD3 (195 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189D10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00189D25u); RECOMP_ABI_CALL(0x0018CC30u, sub_0018CC30); /* call 0x0018CC30 */

loc_00189D25: ;
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x00189D2Eu); RECOMP_ABI_CALL(0x00188AB0u, sub_00188AB0); /* call 0x00188AB0 */

loc_00189D2E: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00189D3Fu); RECOMP_ABI_CALL(0x0018D490u, sub_0018D490); /* call 0x0018D490 */

loc_00189D3F: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A0);
    PUSH32(esp, 0x00189D4Fu); RECOMP_ABI_CALL(0x000D7660u, sub_000D7660); /* call 0x000D7660 */

loc_00189D4F: ;
    ecx = MEM32(0x4322F0);
    SET_LO8(eax, MEM8(ecx + 0xE50C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189D61; /* je: equal / zero */

loc_00189D5F: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00189D61: ;
    SET_LO8(eax, MEM8(ecx + 0xE538));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189D6D; /* je: equal / zero */

loc_00189D6B: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00189D6D: ;
    SET_LO8(eax, MEM8(ecx + 0xE564));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189D79; /* je: equal / zero */

loc_00189D77: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00189D79: ;
    SET_LO8(eax, MEM8(ecx + 0xE590));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189D85; /* je: equal / zero */

loc_00189D83: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00189D85: ;
    SET_LO8(eax, MEM8(ecx + 0xE5BC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189D91; /* je: equal / zero */

loc_00189D8F: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00189D91: ;
    SET_LO8(eax, MEM8(ecx + 0xE5E8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189D9D; /* je: equal / zero */

loc_00189D9B: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00189D9D: ;
    SET_LO8(eax, MEM8(ecx + 0xE614));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189DA9; /* je: equal / zero */

loc_00189DA7: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00189DA9: ;
    SET_LO8(eax, MEM8(ecx + 0xE640));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189DC6; /* jne: not equal / not zero */

loc_00189DB3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189DC6; /* je: equal / zero */

loc_00189DB7: ;
    edx = ecx + 0x150;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00189DC3u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189DC3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00189DC6: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0018CAA0(); return; /* tail jmp 0x0018CAA0 */

}

/**
 * sub_00189DE0
 * Original: 0x00189DE0 - 0x00189E2D (77 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189DE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00189DE9u); RECOMP_ABI_CALL(0x00188AA0u, sub_00188AA0); /* call 0x00188AA0 */

loc_00189DE9: ;
    eax = MEM32(0x4322F0);
    MEM32(eax + 0xE6A8) = MEM32(eax + 0xE6A8) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xE6A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x4322F0);
    MEM32(eax + 0xE6A4) = 1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x10) = LO8(ebx);
    MEM8(esi + 0x11) = LO8(ebx);
    MEM8(esi + 0x12) = LO8(ebx);
    ecx = MEM32(0x4322F0);
    edx = ecx + 0xC4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00189E20u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189E20: ;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 8) = 5;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00189E30
 * Original: 0x00189E30 - 0x00189E50 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189E30(void)
{

loc_00189E30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00189E36u); RECOMP_ABI_CALL(0x00188AB0u, sub_00188AB0); /* call 0x00188AB0 */

loc_00189E36: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A0);
    esi = eax;
    PUSH32(esp, 0x00189E48u); RECOMP_ABI_CALL(0x000D7800u, sub_000D7800); /* call 0x000D7800 */

loc_00189E48: ;
    MEM32(esi + 0xE698) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00189E50
 * Original: 0x00189E50 - 0x0018A201 (945 bytes, 285 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189E50: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = 5;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189F58; /* je: equal / zero */

loc_00189E6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189F53; /* jne: not equal / not zero */

loc_00189E73: ;
    ecx = MEM32(0x4322F0);
    eax = MEM32(ecx + 0x6C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189EA9; /* jne: not equal / not zero */

loc_00189E83: ;
    edx = ecx + 0x1C0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00189E8Fu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189E8F: ;
    ecx = MEM32(ebp + 4);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 8) = 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00189EA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189F0D; /* jne: not equal / not zero */

loc_00189EAE: ;
    edx = MEM32(ebp + 0x14);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(ebp + 0x14) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_00189ED6; /* jle: less or equal (signed <=) */

loc_00189EBC: ;
    MEM32(ebp + 4) = 2;
    ecx = MEM32(ebp + 4);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00189ED6: ;
    eax = MEM32(0x4322F0);

loc_00189EDB: ;
    MEM32(eax + 0xE6A4) = 1;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0xC4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00189EF7u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189EF7: ;
    ecx = MEM32(ebp + 4);
    MEM32(ebp + 8) = esi;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00189F0D: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x66402368);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00189F1Cu); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_00189F1C: ;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189F2Bu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189F2B: ;
    MEM32(ebp + 8) = 0x15;
    ecx = MEM32(0x4322F0);
    edx = MEM32(ecx + 0x6C8);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edx;
    MEM32(ebp + 4) = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00189F53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189F9B; /* jne: not equal / not zero */

loc_00189F58: ;
    ecx = MEM32(0x4322F0);
    PUSH32(esp, 0x00189F63u); RECOMP_ABI_CALL(0x00188A40u, sub_00188A40); /* call 0x00188A40 */

loc_00189F63: ;
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(ecx + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6C8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A04C; /* jne: not equal / not zero */

loc_00189F75: ;
    eax = ecx + 0xD8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189F81u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_00189F81: ;
    ecx = MEM32(ebp + 4);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 8) = 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00189F9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189FCB; /* jne: not equal / not zero */

loc_00189FA0: ;
    ecx = MEM32(0x4322F0);
    ecx = MEM32(ecx + 0xE6A0);
    PUSH32(esp, 0x00189FB1u); RECOMP_ABI_CALL(0x000DB610u, sub_000DB610); /* call 0x000DB610 */

loc_00189FB1: ;
    ecx = MEM32(ebp + 4);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 8) = 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00189FCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A105; /* jne: not equal / not zero */

loc_00189FD4: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A0);
    _fa = (uint32_t)(MEM8(ecx + 0x8C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x8C), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189FF1; /* jne: not equal / not zero */

loc_00189FE7: ;
    PUSH32(esp, 0x00189FECu); RECOMP_ABI_CALL(0x000DBD70u, sub_000DBD70); /* call 0x000DBD70 */

loc_00189FEC: ;
    eax = MEM32(0x4322F0);

loc_00189FF1: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A047; /* je: equal / zero */

loc_00189FF6: ;
    ecx = MEM32(eax + 0xE6A0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018A002u); RECOMP_ABI_CALL(0x000D7800u, sub_000D7800); /* call 0x000D7800 */

loc_0018A002: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    edx = MEM32(0x4322F0);
    esi = eax + edx + 0xE50C;
    ecx = 0xB;
    edi = esp + 0x10;
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
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0018A031; /* je: equal / zero */

loc_0018A026: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x23) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x23 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A031; /* je: equal / zero */

loc_0018A02A: ;
    MEM32(ebp + 4) = 7;

loc_0018A031: ;
    ecx = MEM32(ebp + 4);
    POP32(esp, esi);
    MEM8(ebp + 0x10) = LO8(ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0018A047: ;
    _fa = (uint32_t)(MEM8(ebp + 0x11)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x11), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A066; /* je: equal / zero */

loc_0018A04C: ;
    MEM32(ebp + 4) = 8;
    ecx = MEM32(ebp + 4);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0018A066: ;
    _fa = (uint32_t)(MEM8(ebp + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x12), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A0D2; /* je: equal / zero */

loc_0018A06B: ;
    ecx = MEM32(eax + 0xE6A0);
    PUSH32(esp, 0x0018A076u); RECOMP_ABI_CALL(0x000D7800u, sub_000D7800); /* call 0x000D7800 */

loc_0018A076: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM8(eax + ecx + 0xE50C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ecx + 0xE50C), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A0BC; /* je: equal / zero */

loc_0018A088: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x5C12435F);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018A097u); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_0018A097: ;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018A0A6u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018A0A6: ;
    ecx = MEM32(0x4322F0);
    edx = MEM32(ecx + 0x6E4);
    MEM32(ebp + 0xC) = edx;
    MEM32(ebp + 8) = 0x12;

loc_0018A0BC: ;
    ecx = MEM32(ebp + 4);
    POP32(esp, esi);
    MEM8(ebp + 0x12) = LO8(ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0018A0D2: ;
    ecx = eax + 0x684;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0018A0E0u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018A0E0: ;
    edx = MEM32(0x4322F0);
    eax = MEM32(edx + 0x6E4);
    ecx = MEM32(ebp + 4);
    MEM32(ebp + 0xC) = eax;
    POP32(esp, esi);
    MEM32(ebp + 8) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0018A105: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A17A; /* jne: not equal / not zero */

loc_0018A10A: ;
    ecx = MEM32(0x4322F0);
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x6E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x6E4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A14A; /* jne: not equal / not zero */

loc_0018A11B: ;
    _fa = (uint32_t)(MEM32(ecx + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6C8), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A14A; /* jne: not equal / not zero */

loc_0018A124: ;
    eax = ecx + 0x514;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018A130u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018A130: ;
    ecx = MEM32(ebp + 4);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 8) = 0xE;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0018A14A: ;
    edx = ecx + 0x684;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018A156u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018A156: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0x6E4);
    MEM32(ebp + 0xC) = ecx;
    ecx = MEM32(ebp + 4);
    POP32(esp, esi);
    MEM32(ebp + 8) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0018A17A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189EBC; /* je: equal / zero */

loc_0018A183: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A19F; /* jne: not equal / not zero */

loc_0018A188: ;
    eax = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(eax + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x6C8), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A04C; /* jne: not equal / not zero */

loc_0018A19A: ;
    goto loc_00189EDB;

loc_0018A19F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A1EE; /* jne: not equal / not zero */

loc_0018A1A3: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x6E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x6E4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A1CB; /* jne: not equal / not zero */

loc_0018A1B3: ;
    ecx = eax + 0x6CC;
    PUSH32(esp, 0x0018A1BEu); RECOMP_ABI_CALL(0x0018CBD0u, sub_0018CBD0); /* call 0x0018CBD0 */

loc_0018A1BE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00189FB1; /* jne: not equal / not zero */

loc_0018A1C6: ;
    eax = MEM32(0x4322F0);

loc_0018A1CB: ;
    MEM32(eax + 0xE6A4) = 1;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0xC4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018A1E7u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018A1E7: ;
    MEM32(ebp + 8) = 4;

loc_0018A1EE: ;
    ecx = MEM32(ebp + 4);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018A210
 * Original: 0x0018A210 - 0x0018A27F (111 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A210: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018A218u); RECOMP_ABI_CALL(0x00188AA0u, sub_00188AA0); /* call 0x00188AA0 */

loc_0018A218: ;
    eax = MEM32(0x4322F0);
    MEM32(eax + 0xE6A8) = MEM32(eax + 0xE6A8) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xE6A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x10) = LO8(eax);
    MEM8(esi + 0x11) = LO8(eax);
    MEM8(esi + 0x12) = LO8(eax);
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM8(ecx + 0xE6AE)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0xE6AE), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A25E; /* jne: not equal / not zero */

loc_0018A23C: ;
    eax = ecx + 0x1C0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018A248u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018A248: ;
    MEM32(esi + 8) = 0xA;
    ecx = MEM32(0x4322F0);
    MEM8(ecx + 0xE6AD) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018A25E: ;
    ecx = MEM32(ecx + 0xE6A0);
    PUSH32(esp, 0x0018A269u); RECOMP_ABI_CALL(0x000DB610u, sub_000DB610); /* call 0x000DB610 */

loc_0018A269: ;
    MEM32(esi + 8) = 0x10;
    edx = MEM32(0x4322F0);
    MEM8(edx + 0xE6AD) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A280
 * Original: 0x0018A280 - 0x0018A2AC (44 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A280(void)
{

loc_0018A280: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018A286u); RECOMP_ABI_CALL(0x00188AB0u, sub_00188AB0); /* call 0x00188AB0 */

loc_0018A286: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A0);
    esi = eax;
    PUSH32(esp, 0x0018A298u); RECOMP_ABI_CALL(0x000D7800u, sub_000D7800); /* call 0x000D7800 */

loc_0018A298: ;
    MEM32(esi + 0xE698) = eax;
    eax = MEM32(0x4322F0);
    MEM8(eax + 0xE6AD) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A2B0
 * Original: 0x0018A2B0 - 0x0018A68F (991 bytes, 305 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A2B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A364; /* jne: not equal / not zero */

loc_0018A2C7: ;
    ecx = MEM32(0x4322F0);
    PUSH32(esp, 0x0018A2D2u); RECOMP_ABI_CALL(0x00188A40u, sub_00188A40); /* call 0x00188A40 */

loc_0018A2D2: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0x6C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A311; /* jne: not equal / not zero */

loc_0018A2E2: ;
    MEM8(eax + 0xE6AE) = LO8(ebx);
    ecx = MEM32(0x4322F0);
    eax = ecx + 0x1C0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018A2FAu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018A2FA: ;
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018A311: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A346; /* jne: not equal / not zero */

loc_0018A316: ;
    MEM8(eax + 0xE6AE) = 1;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0xB0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018A32Fu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018A32F: ;
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018A346: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018A364: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A3EE; /* jne: not equal / not zero */

loc_0018A36D: ;
    ecx = MEM32(0x4322F0);
    edx = MEM32(esi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x6E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x6E4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A3AC; /* je: equal / zero */

loc_0018A37E: ;
    eax = ecx + 0xC4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018A38Au); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018A38A: ;
    MEM32(esi + 8) = edi;
    ecx = MEM32(0x4322F0);
    edx = MEM32(ecx + 0x6E4);
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018A3AC: ;
    _fa = (uint32_t)(MEM32(ecx + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6C8), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A3D7; /* jne: not equal / not zero */

loc_0018A3B5: ;
    ecx = MEM32(ecx + 0xE6A0);
    PUSH32(esp, 0x0018A3C0u); RECOMP_ABI_CALL(0x000DB610u, sub_000DB610); /* call 0x000DB610 */

loc_0018A3C0: ;
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018A3D7: ;
    MEM32(esi + 4) = 2;
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018A3EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A41A; /* jne: not equal / not zero */

loc_0018A3F3: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A0);
    PUSH32(esp, 0x0018A403u); RECOMP_ABI_CALL(0x000DB610u, sub_000DB610); /* call 0x000DB610 */

loc_0018A403: ;
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018A41A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A57E; /* jne: not equal / not zero */

loc_0018A423: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A0);
    _fa = (uint32_t)(MEM8(ecx + 0x8C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x8C), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A440; /* jne: not equal / not zero */

loc_0018A436: ;
    PUSH32(esp, 0x0018A43Bu); RECOMP_ABI_CALL(0x000DBD70u, sub_000DBD70); /* call 0x000DBD70 */

loc_0018A43B: ;
    eax = MEM32(0x4322F0);

loc_0018A440: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A4BD; /* je: equal / zero */

loc_0018A445: ;
    ecx = MEM32(eax + 0xE6A0);
    PUSH32(esp, 0x0018A450u); RECOMP_ABI_CALL(0x000D7800u, sub_000D7800); /* call 0x000D7800 */

loc_0018A450: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ecx = MEM32(0x4322F0);
    SET_LO8(eax, MEM8(eax + ecx + 0xE50C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A4A6; /* je: equal / zero */

loc_0018A464: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x23) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x23 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0018A473; /* jne: not equal / not zero */

loc_0018A46C: ;
    PUSH32(esp, 0xC38EF590u);
    goto loc_0018A478;

loc_0018A473: ;
    PUSH32(esp, 0xA593F1C1u);

loc_0018A478: ;
    PUSH32(esp, 0x0018A47Du); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_0018A47D: ;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018A48Cu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018A48C: ;
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    MEM8(esi + 0x10) = LO8(ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = 0x12;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018A4A6: ;
    MEM32(esi + 4) = 7;
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018A4BD: ;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x11), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A4D9; /* je: equal / zero */

loc_0018A4C2: ;
    MEM32(esi + 4) = 8;
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018A4D9: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x12), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A54E; /* je: equal / zero */

loc_0018A4DE: ;
    ecx = MEM32(eax + 0xE6A0);
    PUSH32(esp, 0x0018A4E9u); RECOMP_ABI_CALL(0x000D7800u, sub_000D7800); /* call 0x000D7800 */

loc_0018A4E9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ecx = MEM32(0x4322F0);
    SET_LO8(eax, MEM8(eax + ecx + 0xE50C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A53B; /* je: equal / zero */

loc_0018A4FD: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x23) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x23 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0018A50C; /* jne: not equal / not zero */

loc_0018A505: ;
    PUSH32(esp, 0x3F8C11FA);
    goto loc_0018A511;

loc_0018A50C: ;
    PUSH32(esp, 0x5C12435F);

loc_0018A511: ;
    PUSH32(esp, 0x0018A516u); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_0018A516: ;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018A525u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018A525: ;
    ecx = MEM32(0x4322F0);
    edx = MEM32(ecx + 0x6E4);
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 8) = 0x13;

loc_0018A53B: ;
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    MEM8(esi + 0x12) = LO8(ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018A54E: ;
    ecx = eax + 0x684;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0018A55Cu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018A55C: ;
    edx = MEM32(0x4322F0);
    eax = MEM32(edx + 0x6E4);
    ecx = MEM32(esi + 4);
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    MEM32(esi + 8) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018A57E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A5AF; /* jne: not equal / not zero */

loc_0018A583: ;
    ecx = MEM32(0x4322F0);
    edx = MEM32(ecx + 0x6C8);
    eax = 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A670; /* jne: not equal / not zero */

loc_0018A59C: ;
    MEM32(esi + 4) = eax;
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018A5AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A5FE; /* jne: not equal / not zero */

loc_0018A5B4: ;
    ecx = MEM32(0x4322F0);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x6E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x6E4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A67F; /* jne: not equal / not zero */

loc_0018A5C9: ;
    _fa = (uint32_t)(MEM32(ecx + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6C8), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A5F5; /* jne: not equal / not zero */

loc_0018A5D2: ;
    edx = ecx + 0x514;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018A5DEu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018A5DE: ;
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = 0xE;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018A5F5: ;
    eax = ecx + 0xC4;
    PUSH32(esp, eax);
    goto loc_0018A677;

loc_0018A5FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A642; /* jne: not equal / not zero */

loc_0018A603: ;
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(ecx + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6C8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A3D7; /* jne: not equal / not zero */

loc_0018A616: ;
    MEM32(esi + 0xC) = 0xFFFFFFFFu;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x684;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018A62Fu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018A62F: ;
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    MEM32(esi + 8) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018A642: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A67F; /* jne: not equal / not zero */

loc_0018A646: ;
    ecx = MEM32(0x4322F0);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x6E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x6E4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A670; /* jne: not equal / not zero */

loc_0018A657: ;
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018A662u); RECOMP_ABI_CALL(0x0018CBD0u, sub_0018CBD0); /* call 0x0018CBD0 */

loc_0018A662: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A3C0; /* jne: not equal / not zero */

loc_0018A66A: ;
    ecx = MEM32(0x4322F0);

loc_0018A670: ;
    edx = ecx + 0xC4;
    PUSH32(esp, edx);

loc_0018A677: ;
    PUSH32(esp, 0x0018A67Cu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018A67C: ;
    MEM32(esi + 8) = edi;

loc_0018A67F: ;
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018A690
 * Original: 0x0018A690 - 0x0018A7D2 (322 bytes, 98 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A690: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0018A69Fu); RECOMP_ABI_CALL(0x00188AA0u, sub_00188AA0); /* call 0x00188AA0 */

loc_0018A69F: ;
    eax = MEM32(0x4322F0);
    MEM32(eax + 0xE6A8) = MEM32(eax + 0xE6A8) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xE6A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x413FC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018A6B5u); RECOMP_ABI_CALL(0x00121650u, sub_00121650); /* call 0x00121650 */

loc_0018A6B5: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x400);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0018A6CDu); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_0018A6CD: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x14) = LO8(eax);
    MEM8(esi + 0x15) = LO8(eax);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98A95A56u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x98A95A56u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0018A770; /* ja: above (unsigned >) */

loc_0018A6E3: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0018A73C; /* je: equal / zero */

loc_0018A6E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D488F09) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D488F09 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A73C; /* je: equal / zero */

loc_0018A6EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C12435F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C12435F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A777; /* jne: not equal / not zero */

loc_0018A6F7: ;
    edi = MEM32(0x4322F0);
    ecx = MEM32(edi + 0xE6A0);
    _fb = (uint32_t)(0xE6A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xE6A0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018A70Eu); RECOMP_ABI_CALL(0x000D7800u, sub_000D7800); /* call 0x000D7800 */

loc_0018A70E: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ecx = MEM32(0x4322F0);
    edx = eax + ecx + 0xE50C;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018A730u); RECOMP_ABI_CALL(0x000D7690u, sub_000D7690); /* call 0x000D7690 */

loc_0018A730: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0018A73C: ;
    eax = MEM32(0x4322F0);
    ecx = eax + 0x6CC;
    edi = eax;
    PUSH32(esp, 0x0018A74Eu); RECOMP_ABI_CALL(0x0018D2B0u, sub_0018D2B0); /* call 0x0018D2B0 */

loc_0018A74E: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(edi + 0xE6A0);
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018A764u); RECOMP_ABI_CALL(0x000D7690u, sub_000D7690); /* call 0x000D7690 */

loc_0018A764: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0018A770: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB0044D3Bu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB0044D3Bu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A79E; /* je: equal / zero */

loc_0018A777: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(0x4322F0);
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0xE6A0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018A792u); RECOMP_ABI_CALL(0x000D7690u, sub_000D7690); /* call 0x000D7690 */

loc_0018A792: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0018A79E: ;
    eax = MEM32(0x4322F0);
    ecx = eax + 0x6CC;
    edi = eax;
    PUSH32(esp, 0x0018A7B0u); RECOMP_ABI_CALL(0x0018D2B0u, sub_0018D2B0); /* call 0x0018D2B0 */

loc_0018A7B0: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xE6A0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018A7C6u); RECOMP_ABI_CALL(0x000D7690u, sub_000D7690); /* call 0x000D7690 */

loc_0018A7C6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018A7E0
 * Original: 0x0018A7E0 - 0x0018A7E5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A7E0: ;
    g_seh_ebp = ebp; sub_0018AA80(); return; /* tail jmp 0x0018AA80 */

}

/**
 * sub_0018A7F0
 * Original: 0x0018A7F0 - 0x0018A85D (109 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A7F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018A804u); RECOMP_ABI_CALL(0x0018D2D0u, sub_0018D2D0); /* call 0x0018D2D0 */

loc_0018A804: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A82C; /* jne: not equal / not zero */

loc_0018A809: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    ecx = 0x3C0480;
    PUSH32(esp, 0x0018A817u); RECOMP_ABI_CALL(0x0015ED10u, sub_0015ED10); /* call 0x0015ED10 */

loc_0018A817: ;
    MEM32(esi + 4) = 1;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018A82C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A836; /* je: equal / zero */

loc_0018A831: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A84F; /* jne: not equal / not zero */

loc_0018A836: ;
    MEM32(esi + 4) = 2;
    edx = MEM32(0x4322F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(edx + 0xE6AC) = LO8(ecx);

loc_0018A84F: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018A860
 * Original: 0x0018A860 - 0x0018A87B (27 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A860: ;
    PUSH32(esp, 0x0018A865u); RECOMP_ABI_CALL(0x00189130u, sub_00189130); /* call 0x00189130 */

loc_0018A865: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018A87Au); RECOMP_ABI_CALL(0x0018D210u, sub_0018D210); /* call 0x0018D210 */

loc_0018A87A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A880
 * Original: 0x0018A880 - 0x0018A94B (203 bytes, 53 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A880: ;
    eax = MEM32(0x4322F0);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x118));
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A8A2; /* jne: not equal / not zero */

loc_0018A892: ;
    _fb = (uint32_t)(0xE50C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xE50C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = 0x23;
    MEM8(eax + 1) = LO8(edx);
    eax = MEM32(0x4322F0);

loc_0018A8A2: ;
    _fa = (uint32_t)(MEM8(eax + 0x119)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x119), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A8BA; /* jne: not equal / not zero */

loc_0018A8AA: ;
    _fb = (uint32_t)(0xE538) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xE538;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = 0x23;
    MEM8(eax + 1) = LO8(edx);
    eax = MEM32(0x4322F0);

loc_0018A8BA: ;
    _fa = (uint32_t)(MEM8(eax + 0x11A)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11A), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A8D2; /* jne: not equal / not zero */

loc_0018A8C2: ;
    _fb = (uint32_t)(0xE564) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xE564;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = 0x23;
    MEM8(eax + 1) = LO8(edx);
    eax = MEM32(0x4322F0);

loc_0018A8D2: ;
    _fa = (uint32_t)(MEM8(eax + 0x11B)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11B), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A8EA; /* jne: not equal / not zero */

loc_0018A8DA: ;
    _fb = (uint32_t)(0xE590) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xE590;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = 0x23;
    MEM8(eax + 1) = LO8(edx);
    eax = MEM32(0x4322F0);

loc_0018A8EA: ;
    _fa = (uint32_t)(MEM8(eax + 0x11C)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11C), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A902; /* jne: not equal / not zero */

loc_0018A8F2: ;
    _fb = (uint32_t)(0xE5BC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xE5BC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = 0x23;
    MEM8(eax + 1) = LO8(edx);
    eax = MEM32(0x4322F0);

loc_0018A902: ;
    _fa = (uint32_t)(MEM8(eax + 0x11D)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11D), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A91A; /* jne: not equal / not zero */

loc_0018A90A: ;
    _fb = (uint32_t)(0xE5E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xE5E8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = 0x23;
    MEM8(eax + 1) = LO8(edx);
    eax = MEM32(0x4322F0);

loc_0018A91A: ;
    _fa = (uint32_t)(MEM8(eax + 0x11E)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11E), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018A932; /* jne: not equal / not zero */

loc_0018A922: ;
    _fb = (uint32_t)(0xE614) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xE614;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = 0x23;
    MEM8(eax + 1) = LO8(edx);
    eax = MEM32(0x4322F0);

loc_0018A932: ;
    _fa = (uint32_t)(MEM8(eax + 0x11F)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11F), LO8(edx) (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0018A946; /* jne: not equal / not zero */

loc_0018A93B: ;
    _fb = (uint32_t)(0xE640) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xE640;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = 0x23;
    MEM8(eax + 1) = LO8(edx);

loc_0018A946: ;
    g_seh_ebp = ebp; sub_0018AA80(); return; /* tail jmp 0x0018AA80 */

}

/**
 * sub_0018A950
 * Original: 0x0018A950 - 0x0018AA3E (238 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A950: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(0x4322F0);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = ebx;
    PUSH32(esp, 0x0018A96Au); RECOMP_ABI_CALL(0x0018D2D0u, sub_0018D2D0); /* call 0x0018D2D0 */

loc_0018A96A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018AA00; /* jne: not equal / not zero */

loc_0018A975: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ebx + 0x10;
    edi = ebx + 0x30;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x70;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018A982: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A9BD; /* je: equal / zero */

loc_0018A987: ;
    eax = MEM32(0x4322F0);
    PUSH32(esp, 0x20);
    ecx = esi + eax + 0xE50C;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018A99Cu); RECOMP_ABI_CALL(0x00237FC0u, sub_00237FC0); /* call 0x00237FC0 */

loc_0018A99C: ;
    edx = MEM32(edi);
    eax = MEM32(0x4322F0);
    MEM32(esi + eax + 0xE52C) = edx;
    ecx = MEM32(edi + 4);
    edx = MEM32(0x4322F0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + edx + 0xE530) = ecx;

loc_0018A9BD: ;
    eax = MEM32(ebp);
    ecx = MEM32(0x4322F0);
    MEM32(esi + ecx + 0xE534) = eax;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x160) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x160 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018A982; /* jl: less (signed <) */

loc_0018A9E1: ;
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    ebx = edx;
    MEM32(edx + 4) = 1;
    ecx = MEM32(ebx + 4);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0018AA00: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AA0A; /* je: equal / zero */

loc_0018AA05: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018AA2E; /* jne: not equal / not zero */

loc_0018AA0A: ;
    ecx = MEM32(0x4322F0);
    PUSH32(esp, 0x0018AA15u); RECOMP_ABI_CALL(0x00188A40u, sub_00188A40); /* call 0x00188A40 */

loc_0018AA15: ;
    MEM32(ebx + 4) = 2;
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ecx + 0xE6AC) = LO8(eax);

loc_0018AA2E: ;
    ecx = MEM32(ebx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018AA40
 * Original: 0x0018AA40 - 0x0018AA7F (63 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AA40(void)
{

loc_0018AA40: ;
    PUSH32(esp, 0x0018AA45u); RECOMP_ABI_CALL(0x00189130u, sub_00189130); /* call 0x00189130 */

loc_0018AA45: ;
    ecx = MEM32(0x4322F0);
    PUSH32(esp, 0x0018AA50u); RECOMP_ABI_CALL(0x00188A40u, sub_00188A40); /* call 0x00188A40 */

loc_0018AA50: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE698);
    PUSH32(esp, ecx);
    ecx = eax + 0x844;
    PUSH32(esp, 0x0018AA67u); RECOMP_ABI_CALL(0x000443D0u, sub_000443D0); /* call 0x000443D0 */

loc_0018AA67: ;
    eax = MEM32(0x4322F0);
    edx = eax + 0x844;
    PUSH32(esp, edx);
    ecx = eax + 0x6CC;
    PUSH32(esp, 0x0018AA7Eu); RECOMP_ABI_CALL(0x0018D210u, sub_0018D210); /* call 0x0018D210 */

loc_0018AA7E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018AA80
 * Original: 0x0018AA80 - 0x0018AA85 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AA80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AA80: ;
    g_seh_ebp = ebp; sub_00188AB0(); return; /* tail jmp 0x00188AB0 */

}

/**
 * sub_0018AA90
 * Original: 0x0018AA90 - 0x0018AAD4 (68 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AA90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AA90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018AA98u); RECOMP_ABI_CALL(0x00189130u, sub_00189130); /* call 0x00189130 */

loc_0018AA98: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x48EA952);
    PUSH32(esp, 0x0018AAAFu); RECOMP_ABI_CALL(0x000D7720u, sub_000D7720); /* call 0x000D7720 */

loc_0018AAAF: ;
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    ecx = 0x3C0480;
    PUSH32(esp, 0x0018AABDu); RECOMP_ABI_CALL(0x0015ED30u, sub_0015ED30); /* call 0x0015ED30 */

loc_0018AABD: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018AAD2u); RECOMP_ABI_CALL(0x0018D250u, sub_0018D250); /* call 0x0018D250 */

loc_0018AAD2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018AAE0
 * Original: 0x0018AAE0 - 0x0018AAF5 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AAE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AAE0: ;
    PUSH32(esp, 0x0018AAE5u); RECOMP_ABI_CALL(0x0018AA80u, sub_0018AA80); /* call 0x0018AA80 */

loc_0018AAE5: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A0);
    g_seh_ebp = ebp; sub_000D77C0(); return; /* tail jmp 0x000D77C0 */

}

/**
 * sub_0018AB00
 * Original: 0x0018AB00 - 0x0018AC26 (294 bytes, 82 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AB00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x0018AB0Eu); RECOMP_ABI_CALL(0x00188AA0u, sub_00188AA0); /* call 0x00188AA0 */

loc_0018AB0E: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA43B7935u);
    MEM8(esp + 0x1B) = 1;
    PUSH32(esp, 0x0018AB2Au); RECOMP_ABI_CALL(0x000D7720u, sub_000D7720); /* call 0x000D7720 */

loc_0018AB2A: ;
    ecx = MEM32(0x4322F0);
    ecx = MEM32(ecx + 0xE6A0);
    PUSH32(esp, 0x0018AB3Bu); RECOMP_ABI_CALL(0x000D7800u, sub_000D7800); /* call 0x000D7800 */

loc_0018AB3B: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    edx = MEM32(0x4322F0);
    eax = eax + edx + 0xE50C;
    ecx = eax + 0x20;
    MEM8(eax) = 0;
    PUSH32(esp, 0x0018AB56u); RECOMP_ABI_CALL(0x001FFC20u, sub_001FFC20); /* call 0x001FFC20 */

loc_0018AB56: ;
    ecx = MEM32(0x4322F0);
    eax = ebp + 0x70;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebp + 0x10;
    edi = ebp + 0x30;
    MEM32(esp + 0x14) = eax;
    goto loc_0018AB70;

    /* nop */

loc_0018AB70: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x20);
    ecx = esi + ecx + 0xE50C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018AB84u); RECOMP_ABI_CALL(0x00237FC0u, sub_00237FC0); /* call 0x00237FC0 */

loc_0018AB84: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(esi + eax + 0xE52C);
    MEM32(edi) = ecx;
    edx = MEM32(0x4322F0);
    eax = MEM32(esi + edx + 0xE530);
    MEM32(edi + 4) = eax;
    ecx = MEM32(0x4322F0);
    edx = MEM32(esi + ecx + 0xE534);
    MEM32(ebx) = edx;
    ecx = MEM32(0x4322F0);
    SET_LO8(eax, MEM8(esi + ecx + 0xE50C));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018ABCA; /* je: equal / zero */

loc_0018ABC5: ;
    MEM8(esp + 0x13) = 0;

loc_0018ABCA: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x160) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x160 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0018AB70; /* jl: less (signed <) */

loc_0018ABE6: ;
    _fa = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x13), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018AC08; /* jne: not equal / not zero */

loc_0018ABED: ;
    eax = ecx + 0x144;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018ABF9u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018ABF9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 8) = 0x14;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0018AC08: ;
    edx = ebp + 0xC;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018AC17u); RECOMP_ABI_CALL(0x0018D250u, sub_0018D250); /* call 0x0018D250 */

loc_0018AC17: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 8) = 0xB;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018AC30
 * Original: 0x0018AC30 - 0x0018AC45 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AC30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AC30: ;
    PUSH32(esp, 0x0018AC35u); RECOMP_ABI_CALL(0x00188AB0u, sub_00188AB0); /* call 0x00188AB0 */

loc_0018AC35: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A0);
    g_seh_ebp = ebp; sub_000D77C0(); return; /* tail jmp 0x000D77C0 */

}

/**
 * sub_0018AC50
 * Original: 0x0018AC50 - 0x0018AD42 (242 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AC50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018AC70; /* jne: not equal / not zero */

loc_0018AC5B: ;
    MEM32(esi + 4) = 1;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018AC70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018AC8A; /* jne: not equal / not zero */

loc_0018AC75: ;
    MEM32(esi + 4) = 2;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018AC8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018ACB6; /* jne: not equal / not zero */

loc_0018AC8F: ;
    eax = MEM32(0x4322F0);
    edx = MEM32(eax + 0x6C8);
    ecx = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018ACB1; /* jne: not equal / not zero */

loc_0018ACA3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 4) = ecx;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018ACB1: ;
    ecx = eax + 0x74;
    goto loc_0018AD12;

loc_0018ACB6: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018ACC7u); RECOMP_ABI_CALL(0x0018D2D0u, sub_0018D2D0); /* call 0x0018D2D0 */

loc_0018ACC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018AD04; /* jne: not equal / not zero */

loc_0018ACCC: ;
    ecx = MEM32(0x4322F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFC22CDD1u);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018ACE0u); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_0018ACE0: ;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018ACEFu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018ACEF: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 8) = 0x17;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018AD04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018AD34; /* jne: not equal / not zero */

loc_0018AD09: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018AD12: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C0074FA);
    PUSH32(esp, 0x0018AD1Eu); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_0018AD1E: ;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018AD2Du); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018AD2D: ;
    MEM32(esi + 8) = 0x18;

loc_0018AD34: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018AD50
 * Original: 0x0018AD50 - 0x0018ADEA (154 bytes, 41 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AD50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018AD58u); RECOMP_ABI_CALL(0x00188AA0u, sub_00188AA0); /* call 0x00188AA0 */

loc_0018AD58: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12E4AC25);
    PUSH32(esp, 0x0018AD6Fu); RECOMP_ABI_CALL(0x000D7720u, sub_000D7720); /* call 0x000D7720 */

loc_0018AD6F: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018AD80u); RECOMP_ABI_CALL(0x0018CAF0u, sub_0018CAF0); /* call 0x0018CAF0 */

loc_0018AD80: ;
    PUSH32(esp, 0x2F5ED8);
    MEM32(esi + 8) = 8;
    MEM32(esi + 0x14) = 0xFFFFFFFFu;
    ecx = MEM32(0x4322F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x164);
    MEM8(ecx + 0xE6AD) = 1;
    PUSH32(esp, 0x0018ADACu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0018ADAC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018ADBB; /* je: equal / zero */

loc_0018ADB3: ;
    MEM32(eax) = 0x2F5E64;
    goto loc_0018ADBD;

loc_0018ADBB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018ADBD: ;
    PUSH32(esp, 0x2F5EB4);
    PUSH32(esp, 0);
    PUSH32(esp, 0xDCC4);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0018ADD1u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0018ADD1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018ADE3; /* je: equal / zero */

loc_0018ADD8: ;
    MEM32(eax) = 0x2F5E3C;
    MEM32(esi + 0x10) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018ADE3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018ADF0
 * Original: 0x0018ADF0 - 0x0018AE1F (47 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ADF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018ADF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018ADF8u); RECOMP_ABI_CALL(0x00188AB0u, sub_00188AB0); /* call 0x00188AB0 */

loc_0018ADF8: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A0);
    PUSH32(esp, 0x0018AE08u); RECOMP_ABI_CALL(0x000D77C0u, sub_000D77C0); /* call 0x000D77C0 */

loc_0018AE08: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018AE11u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0018AE11: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018AE1Au); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0018AE1A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018AE20
 * Original: 0x0018AE20 - 0x0018AE4D (45 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AE20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AE20: ;
    PUSH32(esp, 0x0018AE25u); RECOMP_ABI_CALL(0x00188AA0u, sub_00188AA0); /* call 0x00188AA0 */

loc_0018AE25: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x23AD9D47);
    PUSH32(esp, 0x0018AE3Cu); RECOMP_ABI_CALL(0x000D7720u, sub_000D7720); /* call 0x000D7720 */

loc_0018AE3C: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0018CAD0(); return; /* tail jmp 0x0018CAD0 */

}

/**
 * sub_0018AE50
 * Original: 0x0018AE50 - 0x0018AE79 (41 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AE50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AE50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018AE58u); RECOMP_ABI_CALL(0x00189130u, sub_00189130); /* call 0x00189130 */

loc_0018AE58: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018AE69u); RECOMP_ABI_CALL(0x0018CC50u, sub_0018CC50); /* call 0x0018CC50 */

loc_0018AE69: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0x6E4);
    MEM32(esi + 0xC) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018AE80
 * Original: 0x0018AE80 - 0x0018AE9E (30 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AE80: ;
    edx = ecx;
    PUSH32(esp, 0x0018AE87u); RECOMP_ABI_CALL(0x0018AA80u, sub_0018AA80); /* call 0x0018AA80 */

loc_0018AE87: ;
    ecx = MEM32(edx + 0xC);
    eax = MEM32(0x4322F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x6E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x6E4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AE9D; /* je: equal / zero */

loc_0018AE97: ;
    MEM32(eax + 0xE6A8) = MEM32(eax + 0xE6A8) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xE6A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0018AE9D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018AEA0
 * Original: 0x0018AEA0 - 0x0018AEB6 (22 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AEA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AEA0: ;
    PUSH32(esp, 0x0018AEA5u); RECOMP_ABI_CALL(0x00189130u, sub_00189130); /* call 0x00189130 */

loc_0018AEA5: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0018CC70(); return; /* tail jmp 0x0018CC70 */

}

/**
 * sub_0018AEC0
 * Original: 0x0018AEC0 - 0x0018AEDD (29 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AEC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AEC0: ;
    PUSH32(esp, 0x0018AEC5u); RECOMP_ABI_CALL(0x00188AA0u, sub_00188AA0); /* call 0x00188AA0 */

loc_0018AEC5: ;
    MEM32(ecx + 8) = 7;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0018CB10(); return; /* tail jmp 0x0018CB10 */

}

/**
 * sub_0018AEE0
 * Original: 0x0018AEE0 - 0x0018B07F (415 bytes, 121 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AEE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018AF46; /* jne: not equal / not zero */

loc_0018AEEB: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018AEFCu); RECOMP_ABI_CALL(0x0018D2D0u, sub_0018D2D0); /* call 0x0018D2D0 */

loc_0018AEFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018AF28; /* jne: not equal / not zero */

loc_0018AF01: ;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0x684;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018AF13u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018AF13: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 8) = 8;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018AF28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B071; /* jne: not equal / not zero */

loc_0018AF31: ;
    MEM32(esi + 4) = 2;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018AF46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B035; /* jne: not equal / not zero */

loc_0018AF4F: ;
    eax = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(eax + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x6C8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018AFD8; /* jne: not equal / not zero */

loc_0018AF5D: ;
    ecx = eax + 0x6CC;
    PUSH32(esp, 0x0018AF68u); RECOMP_ABI_CALL(0x0018CBB0u, sub_0018CBB0); /* call 0x0018CBB0 */

loc_0018AF68: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(0x4322F0);
    if (CMP_NE(_fa, _fb)) goto loc_0018AFB4; /* jne: not equal / not zero */

loc_0018AF72: ;
    eax = MEM32(ecx + 0xE6A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AF81; /* je: equal / zero */

loc_0018AF7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018AFD8; /* jne: not equal / not zero */

loc_0018AF81: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x6DAB6C6B);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018AF90u); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_0018AF90: ;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018AF9Fu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018AF9F: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 8) = 0x15;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018AFB4: ;
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018AFBFu); RECOMP_ABI_CALL(0x0018CBD0u, sub_0018CBD0); /* call 0x0018CBD0 */

loc_0018AFBF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B020; /* jne: not equal / not zero */

loc_0018AFC3: ;
    ecx = MEM32(0x4322F0);
    eax = MEM32(ecx + 0xE6A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AFED; /* je: equal / zero */

loc_0018AFD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AFED; /* je: equal / zero */

loc_0018AFD8: ;
    MEM32(esi + 4) = 6;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018AFED: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x6DAB6C6B);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018AFFCu); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_0018AFFC: ;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018B00Bu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B00B: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 8) = 0x15;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018B020: ;
    MEM32(esi + 4) = 5;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018B035: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B071; /* jne: not equal / not zero */

loc_0018B03A: ;
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(ecx + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6C8), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B06A; /* jne: not equal / not zero */

loc_0018B049: ;
    edx = ecx + 0x684;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018B055u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B055: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 8) = 8;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018B06A: ;
    MEM32(esi + 4) = 8;

loc_0018B071: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018B080
 * Original: 0x0018B080 - 0x0018B0AE (46 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B080(void)
{

loc_0018B080: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018B088u); RECOMP_ABI_CALL(0x00188AA0u, sub_00188AA0); /* call 0x00188AA0 */

loc_0018B088: ;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0x8C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018B09Au); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B09A: ;
    MEM32(esi + 8) = 1;
    MEM32(esi + 0xC) = 0xFFFFFFFFu;
    MEM8(esi + 0x10) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018B0B0
 * Original: 0x0018B0B0 - 0x0018B33D (653 bytes, 194 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B0B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B205; /* jne: not equal / not zero */

loc_0018B0C4: ;
    ecx = MEM32(0x4322F0);
    eax = MEM32(ecx + 0x6C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B256; /* jne: not equal / not zero */

loc_0018B0D9: ;
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018B0E4u); RECOMP_ABI_CALL(0x0018CBF0u, sub_0018CBF0); /* call 0x0018CBF0 */

loc_0018B0E4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B1BC; /* jne: not equal / not zero */

loc_0018B0EC: ;
    ecx = MEM32(0x4322F0);
    eax = MEM32(ecx + 0xE6A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B170; /* jne: not equal / not zero */

loc_0018B0FC: ;
    edx = MEM32(esi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xE6A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xE6A8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B135; /* jne: not equal / not zero */

loc_0018B107: ;
    eax = ecx + 0x120;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018B113u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B113: ;
    MEM32(esi + 8) = 8;
    ecx = MEM32(0x4322F0);
    MEM8(ecx + 0xE69C) = LO8(ebx);
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018B135: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B170; /* jne: not equal / not zero */

loc_0018B139: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x3ABA0738);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018B148u); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_0018B148: ;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018B157u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B157: ;
    ecx = MEM32(esi + 4);
    MEM8(esi + 0x10) = LO8(ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = 0x16;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018B170: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B30C; /* jne: not equal / not zero */

loc_0018B178: ;
    _fa = (uint32_t)(MEM32(ecx + 0x6A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6A0), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B30C; /* je: equal / zero */

loc_0018B184: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0xE0FB26F9u);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018B193u); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_0018B193: ;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018B1A2u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B1A2: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = 0x16;
    MEM8(esi + 0x10) = 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018B1BC: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B2EF; /* je: equal / zero */

loc_0018B1C7: ;
    ecx = MEM32(0x4322F0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x57AAB22);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018B1DCu); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_0018B1DC: ;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018B1EBu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B1EB: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = 0x18;
    MEM8(esi + 0x10) = 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018B205: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B268; /* jne: not equal / not zero */

loc_0018B20A: ;
    eax = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(eax + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x6C8), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B245; /* jne: not equal / not zero */

loc_0018B218: ;
    eax = MEM32(eax + 0xE6A8);
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x8C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018B233u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B233: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018B245: ;
    SET_LO8(ecx, MEM8(esi + 0x10));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax * 4 + 2;

loc_0018B256: ;
    MEM32(esi + 4) = eax;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018B268: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B2DE; /* jne: not equal / not zero */

loc_0018B26D: ;
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(ecx + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6C8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B29D; /* jne: not equal / not zero */

loc_0018B27B: ;
    edx = ecx + 0x684;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018B287u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B287: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018B29D: ;
    MEM8(ecx + 0xE69C) = 0;
    ecx = MEM32(0x4322F0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x57AAB22);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018B2B9u); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_0018B2B9: ;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018B2C8u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B2C8: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018B2DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B322; /* jne: not equal / not zero */

loc_0018B2E2: ;
    eax = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(eax + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x6C8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B305; /* jne: not equal / not zero */

loc_0018B2EF: ;
    MEM32(esi + 4) = 5;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018B305: ;
    MEM8(eax + 0xE69C) = 0;

loc_0018B30C: ;
    MEM32(esi + 4) = 6;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018B322: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B32E; /* jne: not equal / not zero */

loc_0018B327: ;
    MEM32(esi + 4) = 8;

loc_0018B32E: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018B340
 * Original: 0x0018B340 - 0x0018B381 (65 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B340(void)
{

loc_0018B340: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018B348u); RECOMP_ABI_CALL(0x00188AA0u, sub_00188AA0); /* call 0x00188AA0 */

loc_0018B348: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A4);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(0x4322F0);
    MEM32(edx + 0xE6A4) = 2;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0xC4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018B378u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B378: ;
    MEM32(esi + 8) = 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018B390
 * Original: 0x0018B390 - 0x0018B3A7 (23 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B390(void)
{

loc_0018B390: ;
    edx = ecx;
    PUSH32(esp, 0x0018B397u); RECOMP_ABI_CALL(0x00188AB0u, sub_00188AB0); /* call 0x00188AB0 */

loc_0018B397: ;
    eax = MEM32(edx + 0x10);
    ecx = MEM32(0x4322F0);
    MEM32(ecx + 0xE6A4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0018B3B0
 * Original: 0x0018B3B0 - 0x0018B59F (495 bytes, 151 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0018B3B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B3B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC00;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0018B4F6; /* jne: not equal / not zero */

loc_0018B3CC: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(0x4322F0);
    MEM32(ecx + 0xE6A4) = eax;
    ecx = MEM32(0x4322F0);
    eax = MEM32(ecx + 0x6C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B4E1; /* je: equal / zero */

loc_0018B3F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B4E1; /* je: equal / zero */

loc_0018B3F9: ;
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018B404u); RECOMP_ABI_CALL(0x0018CC00u, sub_0018CC00); /* call 0x0018CC00 */

loc_0018B404: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B4C8; /* jne: not equal / not zero */

loc_0018B40C: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018B41Du); RECOMP_ABI_CALL(0x0018CC30u, sub_0018CC30); /* call 0x0018CC30 */

loc_0018B41D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B4C8; /* jne: not equal / not zero */

loc_0018B425: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018B436u); RECOMP_ABI_CALL(0x0018CBF0u, sub_0018CBF0); /* call 0x0018CBF0 */

loc_0018B436: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B4C8; /* je: equal / zero */

loc_0018B43E: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018B44Fu); RECOMP_ABI_CALL(0x0018CBD0u, sub_0018CBD0); /* call 0x0018CBD0 */

loc_0018B44F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B4C8; /* je: equal / zero */

loc_0018B453: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B480; /* je: equal / zero */

loc_0018B463: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B480; /* je: equal / zero */

loc_0018B467: ;
    MEM32(esi + 4) = 6;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0018B480: ;
    _fa = (uint32_t)(MEM32(eax + 0x6A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x6A0), eax (32-bit) */
    ecx = eax + 0x74;
    if (CMP_NE(_fa, _fb)) goto loc_0018B494; /* jne: not equal / not zero */

loc_0018B48B: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x98A95A56u);
    goto loc_0018B49B;

loc_0018B494: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x1D488F09);

loc_0018B49B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018B4A0u); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_0018B4A0: ;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x74;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018B4AFu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B4AF: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 8) = 0x15;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0018B4C8: ;
    MEM32(esi + 4) = 5;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0018B4E1: ;
    MEM32(esi + 4) = eax;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0018B4F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B58D; /* jne: not equal / not zero */

loc_0018B4FF: ;
    edx = MEM32(0x4322F0);
    eax = MEM32(edx + 0x6C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B57B; /* jne: not equal / not zero */

loc_0018B510: ;
    _fa = (uint32_t)(MEM32(edx + 0x6A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x6A0), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B562; /* jne: not equal / not zero */

loc_0018B518: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x300;
    edi = esp + 8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx + 0x6CC;
    MEM32(esp + 8) = 2;
    MEM32(esp + 0x10) = 0x55;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018B540u); RECOMP_ABI_CALL(0x0018D2B0u, sub_0018D2B0); /* call 0x0018D2B0 */

loc_0018B540: ;
    MEM32(esp + 0x14) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018B550u); RECOMP_ABI_CALL(0x0022946Cu, sub_0022946C); /* call 0x0022946C */

loc_0018B550: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0018B562: ;
    MEM32(esi + 4) = 2;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0018B57B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx * 4 + 2;
    MEM32(esi + 4) = ecx;

loc_0018B58D: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018B5A0
 * Original: 0x0018B5A0 - 0x0018B5D1 (49 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B5A0(void)
{

loc_0018B5A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018B5A8u); RECOMP_ABI_CALL(0x00188AA0u, sub_00188AA0); /* call 0x00188AA0 */

loc_0018B5A8: ;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0x9C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018B5BAu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B5BA: ;
    MEM32(esi + 8) = 2;
    MEM32(esi + 0xC) = 0xFFFFFFFFu;
    MEM32(esi + 0x10) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018B5E0
 * Original: 0x0018B5E0 - 0x0018B93E (862 bytes, 258 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B5E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B617; /* jne: not equal / not zero */

loc_0018B5F0: ;
    ecx = MEM32(0x4322F0);
    eax = MEM32(ecx + 0x6C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B77B; /* je: equal / zero */

loc_0018B605: ;
    MEM32(esi + 4) = eax;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018B617: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B721; /* jne: not equal / not zero */

loc_0018B61F: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018B630u); RECOMP_ABI_CALL(0x0018CC30u, sub_0018CC30); /* call 0x0018CC30 */

loc_0018B630: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(0x4322F0);
    if (CMP_NE(_fa, _fb)) goto loc_0018B6F1; /* jne: not equal / not zero */

loc_0018B63E: ;
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018B649u); RECOMP_ABI_CALL(0x0018CBB0u, sub_0018CBB0); /* call 0x0018CBB0 */

loc_0018B649: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B69A; /* jne: not equal / not zero */

loc_0018B64D: ;
    ecx = MEM32(0x4322F0);
    eax = MEM32(ecx + 0xE6A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B666; /* je: equal / zero */

loc_0018B65E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B92C; /* jne: not equal / not zero */

loc_0018B666: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x6DAB6C6B);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018B675u); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_0018B675: ;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018B684u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B684: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    MEM32(esi + 8) = 0x15;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018B69A: ;
    eax = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(eax + 0xE6A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xE6A4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B6DB; /* jne: not equal / not zero */

loc_0018B6A8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x991FDDFDu);
    ecx = eax + 0x74;
    PUSH32(esp, 0x0018B6B6u); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_0018B6B6: ;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018B6C5u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B6C5: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    MEM32(esi + 8) = 0x16;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018B6DB: ;
    MEM32(esi + 4) = 6;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018B6F1: ;
    edx = ecx + 0xD8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018B6FDu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B6FD: ;
    MEM32(esi + 8) = 6;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A8);
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018B721: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B75B; /* jne: not equal / not zero */

loc_0018B726: ;
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(ecx + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6C8), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B92C; /* jne: not equal / not zero */

loc_0018B739: ;
    edx = ecx + 0x694;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018B745u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B745: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    MEM32(esi + 8) = 0;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018B75B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B6DB; /* je: equal / zero */

loc_0018B764: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B79D; /* jne: not equal / not zero */

loc_0018B769: ;
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(ecx + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6C8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B92C; /* je: equal / zero */

loc_0018B77B: ;
    eax = ecx + 0x694;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018B787u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B787: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    MEM32(esi + 8) = 0;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018B79D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B8C3; /* jne: not equal / not zero */

loc_0018B7A6: ;
    ecx = MEM32(0x4322F0);
    eax = MEM32(ecx + 0x6C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B7C9; /* jne: not equal / not zero */

loc_0018B7B7: ;
    MEM32(esi + 4) = eax;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018B7C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B811; /* jne: not equal / not zero */

loc_0018B7CD: ;
    ecx = MEM32(esi + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esi + 0x10) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_0018B92C; /* jg: greater (signed >) */

loc_0018B7DF: ;
    ecx = MEM32(0x4322F0);

loc_0018B7E5: ;
    edx = ecx + 0x9C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018B7F1u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B7F1: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A8);
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018B811: ;
    edx = MEM32(ecx + 0xE6A8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B849; /* je: equal / zero */

loc_0018B81C: ;
    eax = ecx + 0x9C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018B828u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B828: ;
    ecx = MEM32(0x4322F0);
    edx = MEM32(ecx + 0xE6A8);
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    MEM32(esi + 0xC) = edx;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018B849: ;
    eax = MEM32(ecx + 0xE6A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B887; /* jne: not equal / not zero */

loc_0018B854: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x66402368);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018B862u); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_0018B862: ;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018B871u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B871: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    MEM32(esi + 8) = 0x16;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018B887: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B6DB; /* jne: not equal / not zero */

loc_0018B88F: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x43EE3B64);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018B89Eu); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_0018B89E: ;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018B8ADu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B8AD: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    MEM32(esi + 8) = 0x13;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018B8C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B8F9; /* jne: not equal / not zero */

loc_0018B8C8: ;
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(ecx + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6C8), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B92C; /* jne: not equal / not zero */

loc_0018B8D7: ;
    eax = ecx + 0x144;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018B8E3u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018B8E3: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    MEM32(esi + 8) = 0x14;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018B8F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B927; /* jne: not equal / not zero */

loc_0018B8FE: ;
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM32(ecx + 0x6C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6C8), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B7E5; /* je: equal / zero */

loc_0018B911: ;
    MEM32(esi + 4) = 3;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018B927: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018B92F; /* jne: not equal / not zero */

loc_0018B92C: ;
    MEM32(esi + 4) = edi;

loc_0018B92F: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018B940
 * Original: 0x0018B940 - 0x0018BA4F (271 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018B940: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0018B948u); RECOMP_ABI_CALL(0x00178990u, sub_00178990); /* call 0x00178990 */

loc_0018B948: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4A364A32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4A364A32 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B9AA; /* je: equal / zero */

loc_0018B94F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4A5220AF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4A5220AF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018B9AA; /* je: equal / zero */

loc_0018B956: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400F92A5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400F92A5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018BA4B; /* jne: not equal / not zero */

loc_0018B961: ;
    PUSH32(esp, 0x2F5EFC);
    PUSH32(esp, 0xADFF4AE4u);
    ecx = 0x414150;
    PUSH32(esp, 0x0018B975u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_0018B975: ;
    eax = MEM32(0x3C04A0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018B982u); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_0018B982: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x81489181u);
    ecx = 0x414150;
    PUSH32(esp, 0x0018B995u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_0018B995: ;
    PUSH32(esp, 0);
    ecx = 0x414150;
    PUSH32(esp, 0xB70A6569u);
    PUSH32(esp, 0x0018B9A6u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_0018B9A6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0018B9AA: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018B9B2u); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_0018B9B2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0xADFF4AE4u);
    ecx = 0x414150;
    PUSH32(esp, 0x0018B9C5u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_0018B9C5: ;
    eax = MEM32(0x3C04A0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018B9D2u); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_0018B9D2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x81489181u);
    ecx = 0x414150;
    PUSH32(esp, 0x0018B9E5u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_0018B9E5: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x0018B9EFu); RECOMP_ABI_CALL(0x0008C7E0u, sub_0008C7E0); /* call 0x0008C7E0 */

loc_0018B9EF: ;
    eax = MEM32(eax + 0x9AC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018BA22; /* je: equal / zero */

loc_0018B9FC: ;
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, 0x2F0C54);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018BA0Cu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0018BA0C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB0FF0D96u);
    ecx = 0x414150;
    PUSH32(esp, 0x0018BA22u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_0018BA22: ;
    PUSH32(esp, 0x0018BA27u); RECOMP_ABI_CALL(0x000361F0u, sub_000361F0); /* call 0x000361F0 */

loc_0018BA27: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018BA30; /* je: equal / zero */

loc_0018BA2D: ;
    ecx = MEM32(eax + 4);

loc_0018BA30: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018BA38u); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_0018BA38: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0xB70A6569u);
    PUSH32(esp, 0x0018BA4Bu); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_0018BA4B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018BA50
 * Original: 0x0018BA50 - 0x0018BAC5 (117 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018BA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018BA50: ;
    PUSH32(esp, 0xADFF4AE4u);
    ecx = 0x414150;
    PUSH32(esp, 0x0018BA5Fu); RECOMP_ABI_CALL(0x00121BD0u, sub_00121BD0); /* call 0x00121BD0 */

loc_0018BA5F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018BA79; /* je: equal / zero */

loc_0018BA63: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018BA6Bu); RECOMP_ABI_CALL(0x00204D10u, sub_00204D10); /* call 0x00204D10 */

loc_0018BA6B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x3C0480;
    PUSH32(esp, 0x0018BA79u); RECOMP_ABI_CALL(0x000443D0u, sub_000443D0); /* call 0x000443D0 */

loc_0018BA79: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xADFF4AE4u);
    ecx = 0x414150;
    PUSH32(esp, 0x0018BA8Au); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_0018BA8A: ;
    PUSH32(esp, 0x81489181u);
    ecx = 0x414150;
    PUSH32(esp, 0x0018BA99u); RECOMP_ABI_CALL(0x00121BD0u, sub_00121BD0); /* call 0x00121BD0 */

loc_0018BA99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018BAB3; /* je: equal / zero */

loc_0018BA9D: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018BAA5u); RECOMP_ABI_CALL(0x00204D10u, sub_00204D10); /* call 0x00204D10 */

loc_0018BAA5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x3C0480;
    PUSH32(esp, 0x0018BAB3u); RECOMP_ABI_CALL(0x0014F580u, sub_0014F580); /* call 0x0014F580 */

loc_0018BAB3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x81489181u);
    ecx = 0x414150;
    PUSH32(esp, 0x0018BAC4u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_0018BAC4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018BAD0
 * Original: 0x0018BAD0 - 0x0018BBF9 (297 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018BAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018BAD0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x2F5F10);
    PUSH32(esp, ebx);
    ebx = ecx + 0xE66C;
    PUSH32(esp, esi);
    eax = ebx;
    MEM32(eax) = edx;
    SET_LO16(edx, MEM16(0x2F5F14));
    _fb = (uint32_t)(0xE68C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xE68C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM16(eax + 4) = LO16(edx);
    PUSH32(esp, 0x0018BAFDu); RECOMP_ABI_CALL(0x001FFCD0u, sub_001FFCD0); /* call 0x001FFCD0 */

loc_0018BAFD: ;
    eax = MEM32(0x413FC0);
    esi = MEM32(0x3C04A0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018BB0Eu); RECOMP_ABI_CALL(0x00121650u, sub_00121650); /* call 0x00121650 */

loc_0018BB0E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFDCB76EDu);
    ecx = 0x414150;
    edi = eax;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0018BB2Fu); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_0018BB2F: ;
    edx = MEM32(0x2F5F08);
    SET_LO8(eax, MEM8(0x2F5F0C));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC3C67997u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC3C67997u (32-bit) */
    MEM32(esp + 0x15) = ecx;
    MEM32(esp + 0x19) = ecx;
    MEM32(esp + 0x1D) = ecx;
    MEM32(esp + 0x21) = ecx;
    MEM32(esp + 0x25) = ecx;
    MEM32(esp + 0x29) = ecx;
    MEM16(esp + 0x2D) = LO16(ecx);
    MEM32(esp + 0x10) = edx;
    MEM8(esp + 0x14) = LO8(eax);
    MEM8(esp + 0x2F) = LO8(ecx);
    if (CMP_A(_fa, _fb)) goto loc_0018BBA9; /* ja: above (unsigned >) */

loc_0018BB6D: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0018BB9B; /* je: equal / zero */

loc_0018BB6F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x707E723D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x707E723D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018BB8D; /* je: equal / zero */

loc_0018BB77: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB5D9D774u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB5D9D774u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018BBDA; /* jne: not equal / not zero */

loc_0018BB7F: ;
    PUSH32(esp, 0x20);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x99399DCAu);
    goto loc_0018BBD3;

loc_0018BB8D: ;
    PUSH32(esp, 0x20);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0xB34399DFu);
    goto loc_0018BBD3;

loc_0018BB9B: ;
    PUSH32(esp, 0x20);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xF99B1469u);
    goto loc_0018BBD3;

loc_0018BBA9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD46EB4C7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD46EB4C7u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018BBC7; /* je: equal / zero */

loc_0018BBB1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE8E4793Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xE8E4793Eu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018BBDA; /* jne: not equal / not zero */

loc_0018BBB9: ;
    PUSH32(esp, 0x20);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBC912314u);
    goto loc_0018BBD3;

loc_0018BBC7: ;
    PUSH32(esp, 0x20);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x438F55D9);

loc_0018BBD3: ;
    ecx = edi;
    PUSH32(esp, 0x0018BBDAu); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_0018BBDA: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x2F5F00);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0018BBEFu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0018BBEF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018BC00
 * Original: 0x0018BC00 - 0x0018BCA1 (161 bytes, 43 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018BC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018BC00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018BC08u); RECOMP_ABI_CALL(0x00188AA0u, sub_00188AA0); /* call 0x00188AA0 */

loc_0018BC08: ;
    PUSH32(esp, 0x2F5F3C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x164);
    MEM32(esi + 8) = 8;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0018BC27u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0018BC27: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018BC36; /* je: equal / zero */

loc_0018BC2E: ;
    MEM32(eax) = 0x2F5E64;
    goto loc_0018BC38;

loc_0018BC36: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018BC38: ;
    PUSH32(esp, 0x2F5F18);
    PUSH32(esp, 0);
    PUSH32(esp, 0xDCC4);
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x0018BC4Cu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0018BC4C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018BC5B; /* je: equal / zero */

loc_0018BC53: ;
    MEM32(eax) = 0x2F5E3C;
    goto loc_0018BC5D;

loc_0018BC5B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018BC5D: ;
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(0x4322F0);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018BC75u); RECOMP_ABI_CALL(0x0018D210u, sub_0018D210); /* call 0x0018D210 */

loc_0018BC75: ;
    ecx = MEM32(0x4322F0);
    edx = MEM32(ecx + 0x6E4);
    eax = esi + 0x40;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x24) = 0;
    MEM32(esi + 0x18) = 0;
    ecx = 0x1010101;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018BCB0
 * Original: 0x0018BCB0 - 0x0018BD0F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018BCB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018BCB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xE508));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018BD0D; /* je: equal / zero */

loc_0018BCBD: ;
    eax = esi + 0xE4B4;
    PUSH32(esp, eax);
    ecx = 0x3C0480;
    PUSH32(esp, 0x0018BCCEu); RECOMP_ABI_CALL(0x0015ED10u, sub_0015ED10); /* call 0x0015ED10 */

loc_0018BCCE: ;
    ecx = esi + 0x84C;
    PUSH32(esp, ecx);
    ecx = 0x414150;
    PUSH32(esp, 0x0018BCDFu); RECOMP_ABI_CALL(0x00121B00u, sub_00121B00); /* call 0x00121B00 */

loc_0018BCDF: ;
    edx = esi + 0x4858;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018BCEBu); RECOMP_ABI_CALL(0x001EC590u, sub_001EC590); /* call 0x001EC590 */

loc_0018BCEB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018BCF3u); RECOMP_ABI_CALL(0x00189490u, sub_00189490); /* call 0x00189490 */

loc_0018BCF3: ;
    ecx = esi;
    PUSH32(esp, 0x0018BCFAu); RECOMP_ABI_CALL(0x0018BA50u, sub_0018BA50); /* call 0x0018BA50 */

loc_0018BCFA: ;
    ecx = 0x3C0480;
    PUSH32(esp, 0x0018BD04u); RECOMP_ABI_CALL(0x00189200u, sub_00189200); /* call 0x00189200 */

loc_0018BD04: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018BD0Au); RECOMP_ABI_CALL(0x00178970u, sub_00178970); /* call 0x00178970 */

loc_0018BD0A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018BD0D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018BD10
 * Original: 0x0018BD10 - 0x0018BEC2 (434 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018BD10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018BD10: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xE508));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018BEB9; /* je: equal / zero */

loc_0018BD2A: ;
    PUSH32(esp, 0x8762095);
    ecx = 0x414150;
    PUSH32(esp, 0x0018BD39u); RECOMP_ABI_CALL(0x00121BD0u, sub_00121BD0); /* call 0x00121BD0 */

loc_0018BD39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018BD52; /* je: equal / zero */

loc_0018BD3D: ;
    edx = esp + 0x208;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0018BD46: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018BD46; /* jne: not equal / not zero */

loc_0018BD50: ;
    goto loc_0018BD59;

loc_0018BD52: ;
    MEM8(esp + 0x208) = LO8(ebx);

loc_0018BD59: ;
    PUSH32(esp, 0x7305B8D3);
    ecx = 0x414150;
    PUSH32(esp, 0x0018BD68u); RECOMP_ABI_CALL(0x00121BD0u, sub_00121BD0); /* call 0x00121BD0 */

loc_0018BD68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018BD7E; /* je: equal / zero */

loc_0018BD6C: ;
    edx = esp + 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0018BD72: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018BD72; /* jne: not equal / not zero */

loc_0018BD7C: ;
    goto loc_0018BD82;

loc_0018BD7E: ;
    MEM8(esp + 8) = LO8(ebx);

loc_0018BD82: ;
    PUSH32(esp, 0x40FF3F78);
    ecx = 0x414150;
    PUSH32(esp, 0x0018BD91u); RECOMP_ABI_CALL(0x00121BD0u, sub_00121BD0); /* call 0x00121BD0 */

loc_0018BD91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018BDAC; /* je: equal / zero */

loc_0018BD95: ;
    edx = esp + 0x108;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_0018BDA0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018BDA0; /* jne: not equal / not zero */

loc_0018BDAA: ;
    goto loc_0018BDB3;

loc_0018BDAC: ;
    MEM8(esp + 0x108) = LO8(ebx);

loc_0018BDB3: ;
    PUSH32(esp, 0xFDCB76EDu);
    ecx = 0x414150;
    PUSH32(esp, 0x0018BDC2u); RECOMP_ABI_CALL(0x00121BD0u, sub_00121BD0); /* call 0x00121BD0 */

loc_0018BDC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018BDDC; /* je: equal / zero */

loc_0018BDC6: ;
    edx = esp + 0x308;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0018BDD0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018BDD0; /* jne: not equal / not zero */

loc_0018BDDA: ;
    goto loc_0018BDE3;

loc_0018BDDC: ;
    MEM8(esp + 0x308) = LO8(ebx);

loc_0018BDE3: ;
    eax = esi + 0x84C;
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x0018BDF4u); RECOMP_ABI_CALL(0x00121B00u, sub_00121B00); /* call 0x00121B00 */

loc_0018BDF4: ;
    _fa = (uint32_t)(MEM8(esp + 0x208)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x208), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018BE07; /* je: equal / zero */

loc_0018BDFD: ;
    ecx = esp + 0x208;
    PUSH32(esp, ecx);
    goto loc_0018BE08;

loc_0018BE07: ;
    PUSH32(esp, ebx);

loc_0018BE08: ;
    ecx = 0x414150;
    PUSH32(esp, 0x8762095);
    PUSH32(esp, 0x0018BE17u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_0018BE17: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 8), LO8(ebx) (8-bit) */
    ecx = 0x414150;
    if (CMP_EQ(_fa, _fb)) goto loc_0018BE29; /* je: equal / zero */

loc_0018BE22: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    goto loc_0018BE2A;

loc_0018BE29: ;
    PUSH32(esp, ebx);

loc_0018BE2A: ;
    PUSH32(esp, 0x7305B8D3);
    PUSH32(esp, 0x0018BE34u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_0018BE34: ;
    _fa = (uint32_t)(MEM8(esp + 0x108)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x108), LO8(ebx) (8-bit) */
    ecx = 0x414150;
    if (CMP_EQ(_fa, _fb)) goto loc_0018BE4C; /* je: equal / zero */

loc_0018BE42: ;
    eax = esp + 0x108;
    PUSH32(esp, eax);
    goto loc_0018BE4D;

loc_0018BE4C: ;
    PUSH32(esp, ebx);

loc_0018BE4D: ;
    PUSH32(esp, 0x40FF3F78);
    PUSH32(esp, 0x0018BE57u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_0018BE57: ;
    _fa = (uint32_t)(MEM8(esp + 0x308)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x308), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018BE6A; /* je: equal / zero */

loc_0018BE60: ;
    ecx = esp + 0x308;
    PUSH32(esp, ecx);
    goto loc_0018BE6B;

loc_0018BE6A: ;
    PUSH32(esp, ebx);

loc_0018BE6B: ;
    ecx = 0x414150;
    PUSH32(esp, 0xFDCB76EDu);
    PUSH32(esp, 0x0018BE7Au); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_0018BE7A: ;
    edx = esi + 0x4858;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018BE86u); RECOMP_ABI_CALL(0x001EC590u, sub_001EC590); /* call 0x001EC590 */

loc_0018BE86: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018BE8Eu); RECOMP_ABI_CALL(0x00189490u, sub_00189490); /* call 0x00189490 */

loc_0018BE8E: ;
    ecx = esi;
    PUSH32(esp, 0x0018BE95u); RECOMP_ABI_CALL(0x0018BA50u, sub_0018BA50); /* call 0x0018BA50 */

loc_0018BE95: ;
    _fb = (uint32_t)(0xE4B4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xE4B4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = 0x3C0480;
    PUSH32(esp, 0x0018BEA6u); RECOMP_ABI_CALL(0x0015ED10u, sub_0015ED10); /* call 0x0015ED10 */

loc_0018BEA6: ;
    ecx = 0x3C0480;
    PUSH32(esp, 0x0018BEB0u); RECOMP_ABI_CALL(0x00189200u, sub_00189200); /* call 0x00189200 */

loc_0018BEB0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018BEB6u); RECOMP_ABI_CALL(0x00178970u, sub_00178970); /* call 0x00178970 */

loc_0018BEB6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018BEB9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018BED0
 * Original: 0x0018BED0 - 0x0018C075 (421 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0018BED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018BED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x4018;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018BEE0u); RECOMP_ABI_CALL(0x00237830u, sub_00237830); /* call 0x00237830 */

loc_0018BEE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0x4000;
    MEM32(esp + 0x18) = 0;
    ecx = 0x1000;
    edi = esp + 0x1C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018BF18u); RECOMP_ABI_CALL(0x00121B00u, sub_00121B00); /* call 0x00121B00 */

loc_0018BF18: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018BF1Du); RECOMP_ABI_CALL(0x001EAE10u, sub_001EAE10); /* call 0x001EAE10 */

loc_0018BF1D: ;
    ecx = 0x3C0480;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018BF27u); RECOMP_ABI_CALL(0x000D4A10u, sub_000D4A10); /* call 0x000D4A10 */

loc_0018BF27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018BF42; /* je: equal / zero */

loc_0018BF2B: ;
    PUSH32(esp, 0);
    ecx = 0x3C0480;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018BF37u); RECOMP_ABI_CALL(0x000D4A10u, sub_000D4A10); /* call 0x000D4A10 */

loc_0018BF37: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018BF3Du); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_0018BF3D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0018BF44;

loc_0018BF42: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018BF44: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8762095);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018BF54u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_0018BF54: ;
    ecx = 0x3C0480;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018BF5Eu); RECOMP_ABI_CALL(0x000D4A60u, sub_000D4A60); /* call 0x000D4A60 */

loc_0018BF5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018BF79; /* je: equal / zero */

loc_0018BF62: ;
    PUSH32(esp, 0);
    ecx = 0x3C0480;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018BF6Eu); RECOMP_ABI_CALL(0x000D4A60u, sub_000D4A60); /* call 0x000D4A60 */

loc_0018BF6E: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018BF74u); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_0018BF74: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0018BF7B;

loc_0018BF79: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018BF7B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1833A8BC);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018BF8Bu); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_0018BF8B: ;
    ecx = 0x3C0480;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018BF95u); RECOMP_ABI_CALL(0x00194150u, sub_00194150); /* call 0x00194150 */

loc_0018BF95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018BFB0; /* je: equal / zero */

loc_0018BF99: ;
    PUSH32(esp, 0);
    ecx = 0x3C0480;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018BFA5u); RECOMP_ABI_CALL(0x00194150u, sub_00194150); /* call 0x00194150 */

loc_0018BFA5: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018BFABu); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_0018BFAB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0018BFB2;

loc_0018BFB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018BFB2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40FF3F78);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018BFC2u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_0018BFC2: ;
    ecx = 0x3C0480;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018BFCCu); RECOMP_ABI_CALL(0x00067650u, sub_00067650); /* call 0x00067650 */

loc_0018BFCC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018BFF4; /* jle: less or equal (signed <=) */

loc_0018BFD0: ;
    ecx = 0x3C0480;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018BFDAu); RECOMP_ABI_CALL(0x00067650u, sub_00067650); /* call 0x00067650 */

loc_0018BFDA: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x2DE4CC);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018BFEAu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0018BFEA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 8;
    PUSH32(esp, edx);
    goto loc_0018BFF6;

loc_0018BFF4: ;
    PUSH32(esp, 0);

loc_0018BFF6: ;
    ecx = 0x414150;
    PUSH32(esp, 0x7305B8D3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018C005u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_0018C005: ;
    ecx = 0x3C0480;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018C00Fu); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_0018C00F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018C037; /* jle: less or equal (signed <=) */

loc_0018C013: ;
    ecx = 0x3C0480;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018C01Du); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_0018C01D: ;
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, 0x2DE4CC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018C02Du); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0018C02D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    PUSH32(esp, ecx);
    goto loc_0018C039;

loc_0018C037: ;
    PUSH32(esp, 0);

loc_0018C039: ;
    ecx = 0x414150;
    PUSH32(esp, 0xFDCB76EDu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018C048u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_0018C048: ;
    ecx = 0x323338;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018C052u); RECOMP_ABI_CALL(0x00096030u, sub_00096030); /* call 0x00096030 */

loc_0018C052: ;
    ecx = 0x323338;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018C05Cu); RECOMP_ABI_CALL(0x00095F20u, sub_00095F20); /* call 0x00095F20 */

loc_0018C05C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018C061u); RECOMP_ABI_CALL(0x00189490u, sub_00189490); /* call 0x00189490 */

loc_0018C061: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0018C068u); RECOMP_ABI_CALL(0x0018BA50u, sub_0018BA50); /* call 0x0018BA50 */

loc_0018C068: ;
    POP32(esp, edi);
    MEM8(esi + 0xE508) = 0;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0018C080
 * Original: 0x0018C080 - 0x0018C2F1 (625 bytes, 156 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C080: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C134; /* jne: not equal / not zero */

loc_0018C092: ;
    ecx = MEM32(0x4322F0);
    eax = MEM32(ecx + 0x6C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018C102; /* je: equal / zero */

loc_0018C0A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018C0FD; /* je: equal / zero */

loc_0018C0A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C0E2; /* jne: not equal / not zero */

loc_0018C0AD: ;
    MEM8(ecx + 0xE6AF) = LO8(ebx);
    ecx = MEM32(0x4322F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2F1D5480);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018C0C7u); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_0018C0C7: ;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018C0D6u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018C0D6: ;
    MEM32(esi + 8) = 0x18;
    goto loc_0018C2D2;

loc_0018C0E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C2CB; /* jne: not equal / not zero */

loc_0018C0EB: ;
    PUSH32(esp, 2);
    MEM8(ecx + 0xE6AF) = LO8(ebx);
    PUSH32(esp, 0x3C0074FA);
    goto loc_0018C289;

loc_0018C0FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C10A; /* jne: not equal / not zero */

loc_0018C102: ;
    MEM8(ecx + 0xE6AE) = LO8(ebx);
    goto loc_0018C116;

loc_0018C10A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C11C; /* jne: not equal / not zero */

loc_0018C10F: ;
    MEM8(ecx + 0xE6AE) = 1;

loc_0018C116: ;
    ecx = MEM32(0x4322F0);

loc_0018C11C: ;
    eax = ecx + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018C128u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018C128: ;
    MEM32(esi + 8) = 3;
    goto loc_0018C2D2;

loc_0018C134: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C1AA; /* jne: not equal / not zero */

loc_0018C139: ;
    ecx = MEM32(0x4322F0);
    eax = MEM32(ecx + 0x6C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018C182; /* je: equal / zero */

loc_0018C14A: ;
    SET_LO8(edx, MEM8(ecx + 0xE6AE));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C2CB; /* jne: not equal / not zero */

loc_0018C158: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018C182; /* je: equal / zero */

loc_0018C15D: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018C182; /* je: equal / zero */

loc_0018C161: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C171; /* jne: not equal / not zero */

loc_0018C166: ;
    MEM8(ecx + 0xE6AF) = LO8(ebx);
    goto loc_0018C282;

loc_0018C171: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C2CB; /* jne: not equal / not zero */

loc_0018C17A: ;
    MEM8(ecx + 0xE6AF) = LO8(ebx);
    goto loc_0018C1D6;

loc_0018C182: ;
    PUSH32(esp, 0x0018C187u); RECOMP_ABI_CALL(0x0018BAD0u, sub_0018BAD0); /* call 0x0018BAD0 */

loc_0018C187: ;
    ecx = MEM32(0x4322F0);
    _fa = (uint32_t)(MEM8(ecx + 0xE69C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0xE69C), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C19E; /* jne: not equal / not zero */

loc_0018C195: ;
    edx = ecx + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018C19Eu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018C19E: ;
    MEM32(esi + 8) = 0x11;
    goto loc_0018C2D2;

loc_0018C1AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C22B; /* jne: not equal / not zero */

loc_0018C1AF: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0x6C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018C206; /* je: equal / zero */

loc_0018C1BF: ;
    _fa = (uint32_t)(MEM8(eax + 0xE69C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xE69C), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C206; /* jne: not equal / not zero */

loc_0018C1C7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C2CB; /* jne: not equal / not zero */

loc_0018C1D0: ;
    MEM8(eax + 0xE6AF) = LO8(ebx);

loc_0018C1D6: ;
    ecx = MEM32(0x4322F0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C0074FA);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018C1EBu); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_0018C1EB: ;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018C1FAu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018C1FA: ;
    MEM32(esi + 8) = 0x18;
    goto loc_0018C2D2;

loc_0018C206: ;
    MEM8(eax + 0xE6AF) = 1;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x3A0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018C21Fu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018C21F: ;
    MEM32(esi + 8) = 8;
    goto loc_0018C2D2;

loc_0018C22B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C2B8; /* jne: not equal / not zero */

loc_0018C234: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0x6C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C277; /* jne: not equal / not zero */

loc_0018C244: ;
    MEM8(eax + 0xE6AF) = LO8(ebx);
    ecx = MEM32(0x4322F0);
    PUSH32(esp, 2);
    PUSH32(esp, 0xBCD9B853u);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018C25Fu); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_0018C25F: ;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018C26Eu); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018C26E: ;
    MEM32(esi + 8) = 0x17;
    goto loc_0018C2D2;

loc_0018C277: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C2AF; /* jne: not equal / not zero */

loc_0018C27C: ;
    MEM8(eax + 0xE6AF) = LO8(ebx);

loc_0018C282: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x2F1D5480);

loc_0018C289: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018C297u); RECOMP_ABI_CALL(0x00188800u, sub_00188800); /* call 0x00188800 */

loc_0018C297: ;
    ecx = MEM32(0x4322F0);
    edx = ecx + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018C2A6u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018C2A6: ;
    MEM32(esi + 8) = 0x18;
    goto loc_0018C2D2;

loc_0018C2AF: ;
    MEM32(esi + 4) = 8;
    goto loc_0018C2D2;

loc_0018C2B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C2C6; /* jne: not equal / not zero */

loc_0018C2BD: ;
    MEM32(esi + 4) = 1;
    goto loc_0018C2D2;

loc_0018C2C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C2D2; /* jne: not equal / not zero */

loc_0018C2CB: ;
    MEM32(esi + 4) = 2;

loc_0018C2D2: ;
    ecx = MEM32(0x4322F0);
    PUSH32(esp, 0x2F5FB0);
    PUSH32(esp, 0x0018C2E2u); RECOMP_ABI_CALL(0x00087D20u, sub_00087D20); /* call 0x00087D20 */

loc_0018C2E2: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018C300
 * Original: 0x0018C300 - 0x0018C475 (373 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018C300: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(0x3DC948);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(0x3DC948) = ecx;
    MEMF(ebx + 0x170) = xmm0.f[0]; /* movss */
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE6A0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x48EA952);
    PUSH32(esp, 0x0018C336u); RECOMP_ABI_CALL(0x000D7720u, sub_000D7720); /* call 0x000D7720 */

loc_0018C336: ;
    eax = MEM32(0x4322F0);
    ecx = MEM32(eax + 0xE698);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    edi = ecx + eax + 0xE50C;
    esi = eax + 0xE66C;
    ecx = 0xB;
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
    eax = MEM32(0x4322F0);
    edx = MEM32(eax + 0xE698);
    PUSH32(esp, edx);
    ecx = eax + 0x844;
    PUSH32(esp, 0x0018C36Fu); RECOMP_ABI_CALL(0x000443D0u, sub_000443D0); /* call 0x000443D0 */

loc_0018C36F: ;
    PUSH32(esp, 0x0018C374u); RECOMP_ABI_CALL(0x00189400u, sub_00189400); /* call 0x00189400 */

loc_0018C374: ;
    ecx = MEM32(0x4322F0);
    PUSH32(esp, 0x0018C37Fu); RECOMP_ABI_CALL(0x0018B940u, sub_0018B940); /* call 0x0018B940 */

loc_0018C37F: ;
    eax = MEM32(0x4322F0);
    _fb = (uint32_t)(0x84C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x84C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x0018C394u); RECOMP_ABI_CALL(0x001219B0u, sub_001219B0); /* call 0x001219B0 */

loc_0018C394: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x4858) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4858;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018C3A6u); RECOMP_ABI_CALL(0x001ED7E0u, sub_001ED7E0); /* call 0x001ED7E0 */

loc_0018C3A6: ;
    edx = MEM32(0x4322F0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xE4B4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xE4B4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = 0x3C0480;
    PUSH32(esp, 0x0018C3C0u); RECOMP_ABI_CALL(0x0015ED30u, sub_0015ED30); /* call 0x0015ED30 */

loc_0018C3C0: ;
    eax = ebx + 0x70;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ebx + 0x10;
    edi = ebx + 0x30;
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_0018C3D0: ;
    ecx = MEM32(0x4322F0);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x20);
    edx = esi + ecx + 0xE50C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018C3EAu); RECOMP_ABI_CALL(0x00237FC0u, sub_00237FC0); /* call 0x00237FC0 */

loc_0018C3EA: ;
    ecx = MEM32(0x4322F0);
    edx = MEM32(esi + ecx + 0xE52C);
    MEM32(edi) = edx;
    eax = MEM32(0x4322F0);
    ecx = MEM32(esi + eax + 0xE530);
    MEM32(edi + 4) = ecx;
    edx = MEM32(0x4322F0);
    eax = MEM32(esi + edx + 0xE534);
    edx = MEM32(esp + 0x1C);
    MEM32(ebp) = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x160) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x160 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0018C3D0; /* jl: less (signed <) */

loc_0018C437: ;
    eax = MEM32(0x4322F0);
    ecx = eax + 0x844;
    esi = eax;
    PUSH32(esp, 0x0018C449u); RECOMP_ABI_CALL(0x0018C9B0u, sub_0018C9B0); /* call 0x0018C9B0 */

loc_0018C449: ;
    ecx = MEM32(esi + 0xE698);
    MEM32(ebx + ecx * 4 + 0x10) = eax;
    ecx = MEM32(0x4322F0);
    edx = ebx + 0xC;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018C468u); RECOMP_ABI_CALL(0x0018D250u, sub_0018D250); /* call 0x0018D250 */

loc_0018C468: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 8) = 0xB;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018C480
 * Original: 0x0018C480 - 0x0018C4C9 (73 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018C480: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018C488u); RECOMP_ABI_CALL(0x00189130u, sub_00189130); /* call 0x00189130 */

loc_0018C488: ;
    eax = MEM32(0x4322F0);
    SET_LO8(ecx, MEM8(eax + 0xE6AE));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018C4C1; /* je: equal / zero */

loc_0018C497: ;
    ecx = eax + 0x6CC;
    PUSH32(esp, 0x0018C4A2u); RECOMP_ABI_CALL(0x0018CC30u, sub_0018CC30); /* call 0x0018CC30 */

loc_0018C4A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C4C1; /* jne: not equal / not zero */

loc_0018C4A6: ;
    ecx = MEM32(0x4322F0);
    eax = ecx + 0x12C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018C4B8u); RECOMP_ABI_CALL(0x00188AC0u, sub_00188AC0); /* call 0x00188AC0 */

loc_0018C4B8: ;
    MEM32(esi + 8) = 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018C4C1: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0018C300(); return; /* tail jmp 0x0018C300 */

}

/**
 * sub_0018C4D0
 * Original: 0x0018C4D0 - 0x0018C5EB (283 bytes, 77 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0018C4D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C4EE; /* jne: not equal / not zero */

loc_0018C4DB: ;
    PUSH32(esp, 0x0018C4E0u); RECOMP_ABI_CALL(0x0018C300u, sub_0018C300); /* call 0x0018C300 */

loc_0018C4E0: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018C4EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C52B; /* jne: not equal / not zero */

loc_0018C4F3: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x170)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DBED0); /* comiss */
    MEMF(esi + 0x170) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018C5DD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DBED0)) */

loc_0018C516: ;
    MEM32(esi + 4) = 1;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018C52B: ;
    ecx = MEM32(0x4322F0);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0018C53Cu); RECOMP_ABI_CALL(0x0018D2D0u, sub_0018D2D0); /* call 0x0018D2D0 */

loc_0018C53C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x170)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    MEMF(esi + 0x170) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0018C5D1; /* jne: not equal / not zero */

loc_0018C557: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C589; /* jne: not equal / not zero */

loc_0018C55D: ;
    eax = MEM32(0x4322F0);
    ecx = eax + 0x844;
    PUSH32(esp, ecx);
    ecx = eax + 0x6CC;
    PUSH32(esp, 0x0018C574u); RECOMP_ABI_CALL(0x0018D250u, sub_0018D250); /* call 0x0018D250 */

loc_0018C574: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 8) = 0xD;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018C589: ;
    edx = MEM32(0x4322F0);
    eax = 1;
    MEM8(edx + 0xE508) = LO8(eax);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x170)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0018C5BC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC08C)) */

loc_0018C5AB: ;
    MEM32(esi + 4) = eax;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018C5BC: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 8) = 0xF;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018C5D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018C5DD; /* jne: not equal / not zero */

loc_0018C5D6: ;
    MEM32(esi + 4) = 2;

loc_0018C5DD: ;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018C5F0
 * Original: 0x0018C5F0 - 0x0018C761 (369 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C5F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C5F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2F5CFC;
    MEM32(esi + 0x10) = 0x2F5D0C;
    MEM32(esi + 0x1C) = 0x2F5D1C;
    MEM32(esi + 0x2C) = 0x2F5D2C;
    MEM32(esi + 0x38) = 0x2F5D3C;
    MEM32(esi + 0x44) = 0x2F5D4C;
    MEM32(esi + 0x5C) = 0x2F5D5C;
    MEM32(esi + 0x74) = 0x2F5D6C;
    MEM32(esi + 0x8C) = 0x2F5D7C;
    MEM32(esi + 0x9C) = 0x2F5D8C;
    MEM32(esi + 0xB0) = 0x2F5D9C;
    MEM32(esi + 0xC4) = 0x2F5DAC;
    MEM32(esi + 0xD8) = 0x2F5DBC;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x100) = ebx;
    MEM32(esi + 0x104) = ebx;
    MEM32(esi + 0x120) = 0x2F5DCC;
    MEM32(esi + 0x12C) = 0x2F5DDC;
    MEM32(esi + 0x144) = 0x2F5DEC;
    MEM32(esi + 0x150) = 0x2F5DFC;
    MEM32(esi + 0x15C) = 0x2F5F60;
    ecx = 0x2F5E50;
    MEM32(esi + 0x168) = ecx;
    MEM32(esi + 0x1C0) = 0x2F5F70;
    eax = 0x2F5E64;
    MEM32(esi + 0x1CC) = eax;
    MEM32(esi + 0x330) = 0x2F5E0C;
    MEM32(esi + 0x33C) = 0x2F5F80;
    MEM32(esi + 0x348) = ecx;
    MEM32(esi + 0x3A0) = 0x2F5F90;
    MEM32(esi + 0x3AC) = eax;
    MEM32(esi + 0x514) = 0x2F5FA0;
    MEM32(esi + 0x520) = eax;
    MEM32(esi + 0x684) = 0x2F5E1C;
    ecx = esi + 0x6CC;
    MEM32(esi + 0x694) = 0x2F5E2C;
    PUSH32(esp, 0x0018C716u); RECOMP_ABI_CALL(0x0018CA40u, sub_0018CA40); /* call 0x0018CA40 */

loc_0018C716: ;
    MEM32(esi + 0x844) = 0x2F5E3C;
    MEM32(esi + 0x6C0) = ebx;
    MEM32(0x4322F0) = esi;
    MEM32(esi + 0x6C4) = ebx;
    MEM32(esi + 0xE6A0) = ebx;
    MEM32(esi + 0xE698) = ebx;
    MEM32(esi + 0xE6A8) = ebx;
    MEM8(esi + 0xE508) = LO8(ebx);
    MEM8(esi + 0xE509) = LO8(ebx);
    MEM8(esi + 0xE6AF) = LO8(ebx);
    MEM32(esi + 0xE6B0) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018C770
 * Original: 0x0018C770 - 0x0018C7A2 (50 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C770: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    ebx = ecx;
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
    ecx = ebx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
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
    ecx = MEM32(eax + 8);
    POP32(esp, edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(eax + 8) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018C7B0
 * Original: 0x0018C7B0 - 0x0018C7E0 (48 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C7B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C7B0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(eax + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esp + 0x10);
    ecx = edx;
    ebx = ecx;
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
    ecx = ebx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
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
    ecx = MEM32(eax + 8);
    POP32(esp, edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(eax + 8) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018C7E0
 * Original: 0x0018C7E0 - 0x0018C80C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C7E0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    ecx = ecx & 0x800001FFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0018C7F9; /* jns: not sign (positive) */

loc_0018C7F1: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFE00u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0018C7F9: ;
    if ((ecx == 0)) goto loc_0018C80B; /* je: equal / zero */

loc_0018C7FB: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((9) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0018C80B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018C810
 * Original: 0x0018C810 - 0x0018C846 (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C810: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    edx = 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    eax = 0x811C9DC5u;
    if (CMP_LE(_fas, _fbs)) goto loc_0018C844; /* jle: less or equal (signed <=) */

loc_0018C822: ;
    ecx = MEM32(ecx);
    PUSH32(esp, edi);
    goto loc_0018C830;

    /* nop */
    edi = edi;

loc_0018C830: ;
    edi = (uint32_t)(int32_t)SMEM8(ecx + edx);
    edi = edi ^ eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1000193);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    eax = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0018C830; /* jl: less (signed <) */

loc_0018C843: ;
    POP32(esp, edi);

loc_0018C844: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018C850
 * Original: 0x0018C850 - 0x0018C887 (55 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C850(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C850: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, 0x20);
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0018C865u); RECOMP_ABI_CALL(0x0018C770u, sub_0018C770); /* call 0x0018C770 */

loc_0018C865: ;
    PUSH32(esp, 0x40);
    ecx = esi + 0x24;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0018C872u); RECOMP_ABI_CALL(0x0018C770u, sub_0018C770); /* call 0x0018C770 */

loc_0018C872: ;
    PUSH32(esp, 0x100);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x64;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0018C882u); RECOMP_ABI_CALL(0x0018C770u, sub_0018C770); /* call 0x0018C770 */

loc_0018C882: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018C890
 * Original: 0x0018C890 - 0x0018C8C7 (55 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C890: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, 0x20);
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0018C8A5u); RECOMP_ABI_CALL(0x0018C7B0u, sub_0018C7B0); /* call 0x0018C7B0 */

loc_0018C8A5: ;
    PUSH32(esp, 0x40);
    ecx = esi + 0x24;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0018C8B2u); RECOMP_ABI_CALL(0x0018C7B0u, sub_0018C7B0); /* call 0x0018C7B0 */

loc_0018C8B2: ;
    PUSH32(esp, 0x100);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x64;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0018C8C2u); RECOMP_ABI_CALL(0x0018C7B0u, sub_0018C7B0); /* call 0x0018C7B0 */

loc_0018C8C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018C8D0
 * Original: 0x0018C8D0 - 0x0018C8D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C8D0(void)
{

loc_0018C8D0: ;
    eax = 0x160;
    esp += 4; return; /* ret */

}

/**
 * sub_0018C8E0
 * Original: 0x0018C8E0 - 0x0018C920 (64 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C8E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C8E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, 0x400C);
    eax = esi + 8;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0018C8F8u); RECOMP_ABI_CALL(0x0018C770u, sub_0018C770); /* call 0x0018C770 */

loc_0018C8F8: ;
    PUSH32(esp, 0x9C5C);
    ecx = esi + 0x4014;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0018C90Bu); RECOMP_ABI_CALL(0x0018C770u, sub_0018C770); /* call 0x0018C770 */

loc_0018C90B: ;
    PUSH32(esp, 0x54);
    _fb = (uint32_t)(0xDC70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xDC70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0018C91Bu); RECOMP_ABI_CALL(0x0018C770u, sub_0018C770); /* call 0x0018C770 */

loc_0018C91B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018C920
 * Original: 0x0018C920 - 0x0018C960 (64 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C920: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, 0x400C);
    eax = esi + 8;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0018C938u); RECOMP_ABI_CALL(0x0018C7B0u, sub_0018C7B0); /* call 0x0018C7B0 */

loc_0018C938: ;
    PUSH32(esp, 0x9C5C);
    ecx = esi + 0x4014;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0018C94Bu); RECOMP_ABI_CALL(0x0018C7B0u, sub_0018C7B0); /* call 0x0018C7B0 */

loc_0018C94B: ;
    PUSH32(esp, 0x54);
    _fb = (uint32_t)(0xDC70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xDC70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0018C95Bu); RECOMP_ABI_CALL(0x0018C7B0u, sub_0018C7B0); /* call 0x0018C7B0 */

loc_0018C95B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018C960
 * Original: 0x0018C960 - 0x0018C966 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C960(void)
{

loc_0018C960: ;
    eax = 0xDCBC;
    esp += 4; return; /* ret */

}

/**
 * sub_0018C970
 * Original: 0x0018C970 - 0x0018C9A6 (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C970: ;
    edx = MEM32(esp + 8);
    ecx = 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    eax = 0x811C9DC5u;
    if (CMP_LE(_fas, _fbs)) goto loc_0018C9A5; /* jle: less or equal (signed <=) */

loc_0018C982: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    goto loc_0018C990;

    /* nop */

loc_0018C990: ;
    edi = (uint32_t)(int32_t)SMEM8(ecx + esi);
    edi = edi ^ eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1000193);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    eax = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0018C990; /* jl: less (signed <) */

loc_0018C9A3: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0018C9A5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018C9B0
 * Original: 0x0018C9B0 - 0x0018C9ED (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C9B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C9B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = esi + 8;
    PUSH32(esp, 0x400C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018C9C2u); RECOMP_ABI_CALL(0x0018C970u, sub_0018C970); /* call 0x0018C970 */

loc_0018C9C2: ;
    ecx = esi + 0xDC70;
    PUSH32(esp, 0x54);
    PUSH32(esp, ecx);
    edi = eax;
    PUSH32(esp, 0x0018C9D2u); RECOMP_ABI_CALL(0x0018C970u, sub_0018C970); /* call 0x0018C970 */

loc_0018C9D2: ;
    PUSH32(esp, 0x9C5C);
    _fb = (uint32_t)(0x4014) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4014;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    edi = edi ^ eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0018C9E5u); RECOMP_ABI_CALL(0x0018C970u, sub_0018C970); /* call 0x0018C970 */

loc_0018C9E5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018C9F0
 * Original: 0x0018C9F0 - 0x0018CA02 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C9F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018C9F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x54);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x0018C9FFu); RECOMP_ABI_CALL(0x0018C770u, sub_0018C770); /* call 0x0018C770 */

loc_0018C9FF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018CA10
 * Original: 0x0018CA10 - 0x0018CA22 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CA10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CA10: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x54);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x0018CA1Fu); RECOMP_ABI_CALL(0x0018C7B0u, sub_0018C7B0); /* call 0x0018C7B0 */

loc_0018CA1F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018CA30
 * Original: 0x0018CA30 - 0x0018CA36 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CA30(void)
{

loc_0018CA30: ;
    eax = 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_0018CA40
 * Original: 0x0018CA40 - 0x0018CA4E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CA40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CA40: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0x22) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018CA50
 * Original: 0x0018CA50 - 0x0018CA96 (70 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CA50: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018CA8F; /* jne: not equal / not zero */

loc_0018CA5A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi + 0x30;
    PUSH32(esp, 0x0018CA66u); RECOMP_ABI_CALL(0x002233A0u, sub_002233A0); /* call 0x002233A0 */

loc_0018CA66: ;
    eax = 2;
    MEM8(esi + 0x22) = 1;
    MEM32(esi + 0x14) = 0;
    MEM32(esi + 0x18) = 0;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi) = 0;
    MEM32(esi + 0x10) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018CA8F: ;
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018CAA0
 * Original: 0x0018CAA0 - 0x0018CAC3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CAA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x22)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x22), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018CABC; /* jne: not equal / not zero */

loc_0018CAA9: ;
    ecx = esi + 0x30;
    PUSH32(esp, 0x0018CAB1u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_0018CAB1: ;
    MEM8(esi + 0x22) = 0;
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018CABC: ;
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018CAD0
 * Original: 0x0018CAD0 - 0x0018CAE3 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CAD0(void)
{

loc_0018CAD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x30;
    PUSH32(esp, 0x0018CADBu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_0018CADB: ;
    MEM32(esi) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018CAF0
 * Original: 0x0018CAF0 - 0x0018CAFE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CAF0(void)
{

loc_0018CAF0: ;
    MEM32(ecx) = 2;
    MEM32(ecx + 0x24) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0018CB00
 * Original: 0x0018CB00 - 0x0018CB0E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CB00(void)
{

loc_0018CB00: ;
    MEM32(ecx) = 0xA;
    MEM32(ecx + 0x24) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0018CB10
 * Original: 0x0018CB10 - 0x0018CB28 (24 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CB10(void)
{

loc_0018CB10: ;
    MEM32(ecx + 0x174) = 0;
    MEM32(ecx + 0x24) = 1;
    MEM32(ecx) = 7;
    esp += 4; return; /* ret */

}

/**
 * sub_0018CB30
 * Original: 0x0018CB30 - 0x0018CB7D (77 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CB30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0018CB3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018CB39u); } /* indirect call */
    }

loc_0018CB3C: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0018CB77; /* je: equal / zero */

loc_0018CB41: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0018CB77; /* je: equal / zero */

loc_0018CB44: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0018CB77; /* jne: not equal / not zero */

loc_0018CB47: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018CB4Du); RECOMP_ABI_CALL(0x0018C960u, sub_0018C960); /* call 0x0018C960 */

loc_0018CB4D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018CB53u); RECOMP_ABI_CALL(0x0018C7E0u, sub_0018C7E0); /* call 0x0018C7E0 */

loc_0018CB53: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0018CB5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018CB5Cu); } /* indirect call */
    }

loc_0018CB5F: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    PUSH32(esp, 0x0018CB67u); RECOMP_ABI_CALL(0x0018C8D0u, sub_0018C8D0); /* call 0x0018C8D0 */

loc_0018CB67: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018CB6Du); RECOMP_ABI_CALL(0x0018C7E0u, sub_0018C7E0); /* call 0x0018C7E0 */

loc_0018CB6D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018CB77: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018CB80
 * Original: 0x0018CB80 - 0x0018CBAE (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CB80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CB80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018CB86u); RECOMP_ABI_CALL(0x0018C960u, sub_0018C960); /* call 0x0018C960 */

loc_0018CB86: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018CB8Cu); RECOMP_ABI_CALL(0x0018C7E0u, sub_0018C7E0); /* call 0x0018C7E0 */

loc_0018CB8C: ;
    esi = eax;
    PUSH32(esp, 0x0018CB93u); RECOMP_ABI_CALL(0x0018CA30u, sub_0018CA30); /* call 0x0018CA30 */

loc_0018CB93: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018CB99u); RECOMP_ABI_CALL(0x0018C7E0u, sub_0018C7E0); /* call 0x0018C7E0 */

loc_0018CB99: ;
    esi = eax + esi * 8;
    PUSH32(esp, 0x0018CBA1u); RECOMP_ABI_CALL(0x0018C8D0u, sub_0018C8D0); /* call 0x0018C8D0 */

loc_0018CBA1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018CBA7u); RECOMP_ABI_CALL(0x0018C7E0u, sub_0018C7E0); /* call 0x0018C7E0 */

loc_0018CBA7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018CBB0
 * Original: 0x0018CBB0 - 0x0018CBC7 (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CBB0: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018CBC4; /* je: equal / zero */

loc_0018CBB7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018CBC4; /* je: equal / zero */

loc_0018CBBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018CBC4; /* je: equal / zero */

loc_0018CBC1: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0018CBC4: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0018CBD0
 * Original: 0x0018CBD0 - 0x0018CBE2 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CBD0: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018CBDF; /* je: equal / zero */

loc_0018CBD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018CBDF; /* je: equal / zero */

loc_0018CBDC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0018CBDF: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0018CBF0
 * Original: 0x0018CBF0 - 0x0018CBF8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CBF0: ;
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C), 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0018CC00
 * Original: 0x0018CC00 - 0x0018CC25 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CC00: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018CC21; /* jne: not equal / not zero */

loc_0018CC09: ;
    PUSH32(esp, 0x0018CC0Eu); RECOMP_ABI_CALL(0x0018CB80u, sub_0018CB80); /* call 0x0018CB80 */

loc_0018CC0E: ;
    edx = MEM32(esi + 0x174);
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018CC21; /* jl: less (signed <) */

loc_0018CC1D: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018CC21: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018CC30
 * Original: 0x0018CC30 - 0x0018CC46 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CC30: ;
    edx = MEM32(ecx + 0x1C);
    eax = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018CC43; /* jne: not equal / not zero */

loc_0018CC3C: ;
    SET_LO8(edx, MEM8(ecx + 0x20));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018CC45; /* jne: not equal / not zero */

loc_0018CC43: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0018CC45: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018CC50
 * Original: 0x0018CC50 - 0x0018CC63 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CC50(void)
{

loc_0018CC50: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x30;
    PUSH32(esp, 0x0018CC5Bu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_0018CC5B: ;
    MEM32(esi) = 5;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018CC70
 * Original: 0x0018CC70 - 0x0018CC77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CC70(void)
{

loc_0018CC70: ;
    MEM32(ecx) = 6;
    esp += 4; return; /* ret */

}

/**
 * sub_0018CC80
 * Original: 0x0018CC80 - 0x0018CDBF (319 bytes, 104 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CC80: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2F5FBC);
    PUSH32(esp, 2);
    PUSH32(esp, 0xA00);
    ebx = ecx;
    PUSH32(esp, 0x0018CC9Cu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0018CC9C: ;
    PUSH32(esp, 0x2F5CA4);
    edi = eax;
    eax = esp + 0x24;
    PUSH32(esp, 0x2F5C9C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018CCB2u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0018CCB2: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x40);
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    esi = ebx + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0018CCC7u); RECOMP_ABI_CALL(0x002235E0u, sub_002235E0); /* call 0x002235E0 */

loc_0018CCC7: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0018CCD3u); RECOMP_ABI_CALL(0x002237B0u, sub_002237B0); /* call 0x002237B0 */

loc_0018CCD3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018CCC7; /* je: equal / zero */

loc_0018CCD7: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018CD83; /* je: equal / zero */

loc_0018CCE2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018CCE8u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0018CCE8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0018CCFAu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_0018CCFA: ;
    /* nop */

loc_0018CD00: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0018CD13u); RECOMP_ABI_CALL(0x002233C0u, sub_002233C0); /* call 0x002233C0 */

loc_0018CD13: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018CD00; /* je: equal / zero */

loc_0018CD17: ;
    ecx = ebx;
    PUSH32(esp, 0x0018CD1Eu); RECOMP_ABI_CALL(0x0018CB80u, sub_0018CB80); /* call 0x0018CB80 */

loc_0018CD1E: ;
    edx = MEM32(ebx + 0x174);
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018CD47; /* jge: greater or equal (signed >=) */

loc_0018CD2E: ;
    PUSH32(esp, 0);

loc_0018CD30: ;
    PUSH32(esp, 0x0018CD35u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0018CD35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 3;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0018CD47: ;
    PUSH32(esp, 0x2F5CA4);
    ecx = esi;
    PUSH32(esp, 0x0018CD53u); RECOMP_ABI_CALL(0x00087D20u, sub_00087D20); /* call 0x00087D20 */

loc_0018CD53: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0018CD5Fu); RECOMP_ABI_CALL(0x00223420u, sub_00223420); /* call 0x00223420 */

loc_0018CD5F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018CD53; /* je: equal / zero */

loc_0018CD63: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 1 (32-bit) */
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_0018CD30; /* jne: not equal / not zero */

loc_0018CD6C: ;
    PUSH32(esp, 0x0018CD71u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0018CD71: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0018CD83: ;
    PUSH32(esp, 0x2F5CA4);
    ecx = esi;
    PUSH32(esp, 0x0018CD8Fu); RECOMP_ABI_CALL(0x00223880u, sub_00223880); /* call 0x00223880 */

loc_0018CD8F: ;
    /* nop */

loc_0018CD90: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0018CD9Cu); RECOMP_ABI_CALL(0x00223440u, sub_00223440); /* call 0x00223440 */

loc_0018CD9C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018CD90; /* je: equal / zero */

loc_0018CDA0: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0018CD30; /* jne: not equal / not zero */

loc_0018CDA8: ;
    PUSH32(esp, 0x0018CDADu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0018CDAD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 2;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018CDC0
 * Original: 0x0018CDC0 - 0x0018CE9E (222 bytes, 81 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CDC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018CE5B; /* jne: not equal / not zero */

loc_0018CDD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(0x30ECD8) = 0x258;
    PUSH32(esp, 0x0018CDE1u); RECOMP_ABI_CALL(0x0018CB80u, sub_0018CB80); /* call 0x0018CB80 */

loc_0018CDE1: ;
    PUSH32(esp, 0x2F5FE4);
    ebx = eax;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0018CDF0u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0018CDF0: ;
    edi = eax;
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x28) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2F5CA4);
    ecx = esi + 0x30;
    PUSH32(esp, 0x0018CE20u); RECOMP_ABI_CALL(0x002238E0u, sub_002238E0); /* call 0x002238E0 */

loc_0018CE20: ;
    POP32(esp, edi);
    MEM32(esi + 0x24) = 2;
    POP32(esp, ebx);

loc_0018CE29: ;
    MEM32(0x30ECD8) = MEM32(0x30ECD8) - 1;
    _fa = (uint32_t)(MEM32(0x30ECD8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0018CE96; /* jns: not sign (positive) */

loc_0018CE31: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018CE43; /* je: equal / zero */

loc_0018CE39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018CE43; /* je: equal / zero */

loc_0018CE3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018CE53; /* jne: not equal / not zero */

loc_0018CE43: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018CE46: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0018CE4Fu); RECOMP_ABI_CALL(0x00223460u, sub_00223460); /* call 0x00223460 */

loc_0018CE4F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018CE46; /* je: equal / zero */

loc_0018CE53: ;
    eax = 3;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0018CE5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018CE29; /* jne: not equal / not zero */

loc_0018CE60: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi + 0x30;
    PUSH32(esp, 0x0018CE6Du); RECOMP_ABI_CALL(0x00223460u, sub_00223460); /* call 0x00223460 */

loc_0018CE6D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018CE29; /* je: equal / zero */

loc_0018CE71: ;
    edx = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018CE7Au); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0018CE7A: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x24) = 3;
    POP32(esp, esi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0018CE96: ;
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018CEA0
 * Original: 0x0018CEA0 - 0x0018CFB4 (276 bytes, 107 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018CEA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0018CEC9; /* jne: not equal / not zero */

loc_0018CEAD: ;
    PUSH32(esp, 0x2F5CA4);
    ecx = esi + 0x30;
    PUSH32(esp, 0x0018CEBAu); RECOMP_ABI_CALL(0x002235A0u, sub_002235A0); /* call 0x002235A0 */

loc_0018CEBA: ;
    ebx = 1;
    MEM32(esi + 0x24) = ebx;

loc_0018CEC2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0018CEC9: ;
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018CF05; /* jne: not equal / not zero */

loc_0018CED2: ;
    eax = esp + 0xC;
    edi = esi + 0x30;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0018CEE1u); RECOMP_ABI_CALL(0x00223420u, sub_00223420); /* call 0x00223420 */

loc_0018CEE1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018CEC2; /* je: equal / zero */

loc_0018CEE5: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018CF5F; /* jne: not equal / not zero */

loc_0018CEEB: ;
    PUSH32(esp, 0x2F6018);
    ecx = edi;
    PUSH32(esp, 0x0018CEF7u); RECOMP_ABI_CALL(0x002235A0u, sub_002235A0); /* call 0x002235A0 */

loc_0018CEF7: ;
    POP32(esp, edi);
    MEM32(esi + 0x24) = 2;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0018CF05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018CF3D; /* jne: not equal / not zero */

loc_0018CF0A: ;
    ecx = esp + 0xC;
    edi = esi + 0x30;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0018CF19u); RECOMP_ABI_CALL(0x00223420u, sub_00223420); /* call 0x00223420 */

loc_0018CF19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018CEC2; /* je: equal / zero */

loc_0018CF1D: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018CF5F; /* jne: not equal / not zero */

loc_0018CF23: ;
    PUSH32(esp, 0x2F600C);
    ecx = edi;
    PUSH32(esp, 0x0018CF2Fu); RECOMP_ABI_CALL(0x002235A0u, sub_002235A0); /* call 0x002235A0 */

loc_0018CF2F: ;
    POP32(esp, edi);
    MEM32(esi + 0x24) = 3;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0018CF3D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018CF83; /* jne: not equal / not zero */

loc_0018CF42: ;
    edx = esp + 0xC;
    edi = esi + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0018CF51u); RECOMP_ABI_CALL(0x00223420u, sub_00223420); /* call 0x00223420 */

loc_0018CF51: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018CEC2; /* je: equal / zero */

loc_0018CF59: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018CF69; /* je: equal / zero */

loc_0018CF5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 3;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0018CF69: ;
    PUSH32(esp, 0x2F5CA4);
    ecx = edi;
    PUSH32(esp, 0x0018CF75u); RECOMP_ABI_CALL(0x002235A0u, sub_002235A0); /* call 0x002235A0 */

loc_0018CF75: ;
    POP32(esp, edi);
    MEM32(esi + 0x24) = 4;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0018CF83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018CEC2; /* jne: not equal / not zero */

loc_0018CF8C: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    PUSH32(esp, 0x0018CF99u); RECOMP_ABI_CALL(0x00223420u, sub_00223420); /* call 0x00223420 */

loc_0018CF99: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018CEC2; /* je: equal / zero */

loc_0018CFA1: ;
    edx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018CFC0
 * Original: 0x0018CFC0 - 0x0018D0C6 (262 bytes, 90 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CFC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018CFC0: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2F6024);
    ebx = ecx;
    PUSH32(esp, 2);
    PUSH32(esp, 0xA00);
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x0018CFE1u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0018CFE1: ;
    PUSH32(esp, 0x2F5CA4);
    ebp = eax;
    eax = esp + 0x28;
    PUSH32(esp, 0x2F5C9C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018CFF7u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0018CFF7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x40);
    PUSH32(esp, ebp);
    ecx = esp + 0x20;
    esi = ebx + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0018D00Cu); RECOMP_ABI_CALL(0x002235E0u, sub_002235E0); /* call 0x002235E0 */

loc_0018D00C: ;
    /* nop */

loc_0018D010: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0018D01Cu); RECOMP_ABI_CALL(0x002237B0u, sub_002237B0); /* call 0x002237B0 */

loc_0018D01C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D010; /* je: equal / zero */

loc_0018D020: ;
    eax = MEM32(esp + 0x10);
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018D056; /* jne: not equal / not zero */

loc_0018D02D: ;
    PUSH32(esp, 0x2F5CA4);
    ecx = esi;
    PUSH32(esp, 0x0018D039u); RECOMP_ABI_CALL(0x00223880u, sub_00223880); /* call 0x00223880 */

loc_0018D039: ;
    /* nop */

loc_0018D040: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0018D04Cu); RECOMP_ABI_CALL(0x00223440u, sub_00223440); /* call 0x00223440 */

loc_0018D04C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D040; /* je: equal / zero */

loc_0018D050: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D073; /* je: equal / zero */

loc_0018D056: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0018D05Cu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0018D05C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ebx + 0x20) = 0;
    eax = 2;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0018D073: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp;

loc_0018D077: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D097; /* je: equal / zero */

loc_0018D07C: ;
    edi = 0x2F5CA4;
    esi = eax;
    ecx = 0x12;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_0018D0B8; /* je: equal / zero */

loc_0018D08E: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018D077; /* jl: less (signed <) */

loc_0018D097: ;
    edx = MEM32(esp + 0x14);
    MEM8(edx + 0x20) = 0;

loc_0018D09F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0018D0A5u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0018D0A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 2;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0018D0B8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018D097; /* jl: less (signed <) */

loc_0018D0BC: ;
    ecx = MEM32(esp + 0x14);
    MEM8(ecx + 0x20) = 1;
    goto loc_0018D09F;

}

/**
 * sub_0018D0D0
 * Original: 0x0018D0D0 - 0x0018D113 (67 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D0D0: ;
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018D106; /* jne: not equal / not zero */

loc_0018D0D8: ;
    MEM32(0x30ECDC) = 0x64;
    MEM32(ecx + 0x174) = 0x1000;
    MEM32(ecx + 0x24) = 2;

loc_0018D0F3: ;
    MEM32(0x30ECDC) = MEM32(0x30ECDC) - 1;
    _fa = (uint32_t)(MEM32(0x30ECDC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 0;
    SET_LO8(eax, ((_fas < 0)) ? 1 : 0); /* sets */
    eax = eax + eax + 1;
    esp += 4; return; /* ret */

loc_0018D106: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018D0F3; /* jne: not equal / not zero */

loc_0018D10B: ;
    MEM32(ecx + 0x24) = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_0018D120
 * Original: 0x0018D120 - 0x0018D179 (89 bytes, 33 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D120: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0018D139; /* je: equal / zero */

loc_0018D12A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D130u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0018D130: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_0018D139: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D143u); RECOMP_ABI_CALL(0x0018C7E0u, sub_0018C7E0); /* call 0x0018C7E0 */

loc_0018D143: ;
    PUSH32(esp, 0x2F604C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0018D153u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0018D153: ;
    ecx = MEM32(esi + 4);
    edx = ecx;
    edi = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    MEM32(esi + 8) = 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018D180
 * Original: 0x0018D180 - 0x0018D193 (19 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0018D180: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018D188u); RECOMP_ABI_CALL(0x0018C810u, sub_0018C810); /* call 0x0018C810 */

loc_0018D188: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx)));
    eax = eax - MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018D1A0
 * Original: 0x0018D1A0 - 0x0018D1AE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D1A0(void)
{

loc_0018D1A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018D1A8u); RECOMP_ABI_CALL(0x0018C810u, sub_0018C810); /* call 0x0018C810 */

loc_0018D1A8: ;
    ecx = MEM32(esi);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018D1B0
 * Original: 0x0018D1B0 - 0x0018D1C2 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D1B0(void)
{

loc_0018D1B0: ;
    PUSH32(esp, 0x0018D1B5u); RECOMP_ABI_CALL(0x0018C8D0u, sub_0018C8D0); /* call 0x0018C8D0 */

loc_0018D1B5: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D1BFu); RECOMP_ABI_CALL(0x0018D120u, sub_0018D120); /* call 0x0018D120 */

loc_0018D1BF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018D1D0
 * Original: 0x0018D1D0 - 0x0018D1E2 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D1D0(void)
{

loc_0018D1D0: ;
    PUSH32(esp, 0x0018D1D5u); RECOMP_ABI_CALL(0x0018C960u, sub_0018C960); /* call 0x0018C960 */

loc_0018D1D5: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D1DFu); RECOMP_ABI_CALL(0x0018D120u, sub_0018D120); /* call 0x0018D120 */

loc_0018D1DF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018D1F0
 * Original: 0x0018D1F0 - 0x0018D202 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D1F0(void)
{

loc_0018D1F0: ;
    PUSH32(esp, 0x0018D1F5u); RECOMP_ABI_CALL(0x0018CA30u, sub_0018CA30); /* call 0x0018CA30 */

loc_0018D1F5: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D1FFu); RECOMP_ABI_CALL(0x0018D120u, sub_0018D120); /* call 0x0018D120 */

loc_0018D1FF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018D210
 * Original: 0x0018D210 - 0x0018D250 (64 bytes, 27 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D210(void)
{

loc_0018D210: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esi + 0x10) = ecx;
    eax = MEM32(ecx);
    edi = esi + 4;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0018D224u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018D222u); } /* indirect call */
    }

loc_0018D224: ;
    ecx = MEM32(esi + 0x10);
    ebx = MEM32(esi + 8);
    edi = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0018D234u); RECOMP_ABI_CALL(0x0018CB30u, sub_0018CB30); /* call 0x0018CB30 */

loc_0018D234: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2F5CA4);
    ecx = esi + 0x30;
    PUSH32(esp, 0x0018D244u); RECOMP_ABI_CALL(0x002239E0u, sub_002239E0); /* call 0x002239E0 */

loc_0018D244: ;
    POP32(esp, edi);
    MEM32(esi) = 3;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018D250
 * Original: 0x0018D250 - 0x0018D2A2 (82 bytes, 34 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D250(void)
{

loc_0018D250: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esi + 0x10) = ecx;
    eax = MEM32(ecx);
    edi = esi + 4;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0018D264u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018D262u); } /* indirect call */
    }

loc_0018D264: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018D26Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018D26Au); } /* indirect call */
    }

loc_0018D26D: ;
    ecx = edi;
    PUSH32(esp, 0x0018D274u); RECOMP_ABI_CALL(0x0018D1A0u, sub_0018D1A0); /* call 0x0018D1A0 */

loc_0018D274: ;
    eax = MEM32(esi + 0x10);
    ebx = MEM32(esi + 8);
    edi = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0018D286u); RECOMP_ABI_CALL(0x0018CB30u, sub_0018CB30); /* call 0x0018CB30 */

loc_0018D286: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2F5CA4);
    ecx = esi + 0x30;
    PUSH32(esp, 0x0018D296u); RECOMP_ABI_CALL(0x002238E0u, sub_002238E0); /* call 0x002238E0 */

loc_0018D296: ;
    POP32(esp, edi);
    MEM32(esi) = 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018D2B0
 * Original: 0x0018D2B0 - 0x0018D2CA (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D2B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D2B0: ;
    PUSH32(esp, 0x0018D2B5u); RECOMP_ABI_CALL(0x0018CB80u, sub_0018CB80); /* call 0x0018CB80 */

loc_0018D2B5: ;
    _fb = (uint32_t)(0x3FFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x3FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xE) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018D2D0
 * Original: 0x0018D2D0 - 0x0018D490 (448 bytes, 180 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018D2D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = 1;
    if (CMP_A(_fa, _fb)) goto loc_0018D354; /* ja: above (unsigned >) */

loc_0018D2E1: ;
    PUSH32(esp, ebp);
    { uint32_t _jt = MEM32(eax * 4 + 0x18D460); /* switch: 11 entries, 10 targets */
    if (_jt == 0x0018D2E9u) goto loc_0018D2E9;
    if (_jt == 0x0018D319u) goto loc_0018D319;
    if (_jt == 0x0018D353u) goto loc_0018D353;
    if (_jt == 0x0018D35Au) goto loc_0018D35A;
    if (_jt == 0x0018D363u) goto loc_0018D363;
    if (_jt == 0x0018D36Cu) goto loc_0018D36C;
    if (_jt == 0x0018D3E0u) goto loc_0018D3E0;
    if (_jt == 0x0018D419u) goto loc_0018D419;
    if (_jt == 0x0018D447u) goto loc_0018D447;
    if (_jt == 0x0018D453u) goto loc_0018D453;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0018D2E9: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    PUSH32(esp, 0x0018D2F6u); RECOMP_ABI_CALL(0x00223420u, sub_00223420); /* call 0x00223420 */

loc_0018D2F6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D353; /* je: equal / zero */

loc_0018D2FA: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018D3FE; /* jne: not equal / not zero */

loc_0018D307: ;
    edi = 2;
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, edi);
    MEM32(esi) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0018D319: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0018D341; /* jne: not equal / not zero */

loc_0018D322: ;
    PUSH32(esp, 0x0018D327u); RECOMP_ABI_CALL(0x0018CC80u, sub_0018CC80); /* call 0x0018CC80 */

loc_0018D327: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018D348; /* jne: not equal / not zero */

loc_0018D32E: ;
    edi = 1;
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, edi);
    MEM32(esi + 0x24) = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0018D341: ;
    PUSH32(esp, 0x0018D346u); RECOMP_ABI_CALL(0x0018CDC0u, sub_0018CDC0); /* call 0x0018CDC0 */

loc_0018D346: ;
    edi = eax;

loc_0018D348: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0018D353; /* je: equal / zero */

loc_0018D34D: ;
    MEM32(esi) = 0;

loc_0018D353: ;
    POP32(esp, ebp);

loc_0018D354: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0018D35A: ;
    ecx = esi;
    PUSH32(esp, 0x0018D361u); RECOMP_ABI_CALL(0x0018CEA0u, sub_0018CEA0); /* call 0x0018CEA0 */

loc_0018D361: ;
    goto loc_0018D346;

loc_0018D363: ;
    ecx = esi;
    PUSH32(esp, 0x0018D36Au); RECOMP_ABI_CALL(0x0018D0D0u, sub_0018D0D0); /* call 0x0018D0D0 */

loc_0018D36A: ;
    goto loc_0018D346;

loc_0018D36C: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi + 0x30;
    PUSH32(esp, 0x0018D379u); RECOMP_ABI_CALL(0x002234E0u, sub_002234E0); /* call 0x002234E0 */

loc_0018D379: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D353; /* je: equal / zero */

loc_0018D37D: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018D3C9; /* jne: not equal / not zero */

loc_0018D386: ;
    ebp = esi + 4;
    ecx = ebp;
    PUSH32(esp, 0x0018D390u); RECOMP_ABI_CALL(0x0018D180u, sub_0018D180); /* call 0x0018D180 */

loc_0018D390: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D3B3; /* je: equal / zero */

loc_0018D394: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, ebp);
    edi = 2;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018D3A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018D39Fu); } /* indirect call */
    }

loc_0018D3A2: ;
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, edi);
    MEM8(esi + 0x21) = 1;
    MEM32(esi) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0018D3B3: ;
    edi = 4;
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, edi);
    MEM8(esi + 0x21) = 0;
    MEM32(esi) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0018D3C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018D353; /* jne: not equal / not zero */

loc_0018D3CE: ;
    edi = 3;
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, edi);
    MEM32(esi) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0018D3E0: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    PUSH32(esp, 0x0018D3EDu); RECOMP_ABI_CALL(0x00223460u, sub_00223460); /* call 0x00223460 */

loc_0018D3ED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D353; /* je: equal / zero */

loc_0018D3F5: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0018D435; /* je: equal / zero */

loc_0018D3FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0018D353; /* jne: not equal / not zero */

loc_0018D407: ;
    edi = 3;
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, edi);
    MEM32(esi) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0018D419: ;
    ecx = esi + 0x14;
    PUSH32(esp, ecx);
    edx = esi + 0x18;
    PUSH32(esp, edx);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    PUSH32(esp, 0x0018D42Du); RECOMP_ABI_CALL(0x002233C0u, sub_002233C0); /* call 0x002233C0 */

loc_0018D42D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D353; /* je: equal / zero */

loc_0018D435: ;
    edi = 2;
    POP32(esp, ebp);
    eax = edi;
    POP32(esp, edi);
    MEM32(esi) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0018D447: ;
    ecx = esi;
    PUSH32(esp, 0x0018D44Eu); RECOMP_ABI_CALL(0x0018CFC0u, sub_0018CFC0); /* call 0x0018CFC0 */

loc_0018D44E: ;
    goto loc_0018D346;

loc_0018D453: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    MEM32(esi) = edi;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018D490
 * Original: 0x0018D490 - 0x0018D4AD (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018D490: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D4A4; /* je: equal / zero */

loc_0018D498: ;
    ecx = esi;
    PUSH32(esp, 0x0018D49Fu); RECOMP_ABI_CALL(0x0018D2D0u, sub_0018D2D0); /* call 0x0018D2D0 */

loc_0018D49F: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018D498; /* jne: not equal / not zero */

loc_0018D4A4: ;
    ecx = esi + 4;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001EAB30(); return; /* tail jmp 0x001EAB30 */

}

/**
 * sub_0018D4B0
 * Original: 0x0018D4B0 - 0x0018D4C1 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D4B0(void)
{

loc_0018D4B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018D4D0
 * Original: 0x0018D4D0 - 0x0018D50F (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D4D0: ;
    eax = MEM32(0x4409AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D4FA; /* je: equal / zero */

loc_0018D4D9: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0018D505; /* jne: not equal / not zero */

loc_0018D4E8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0018D4EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018D4ECu); } /* indirect call */
    }

loc_0018D4EF: ;
    ecx = MEM32(esp + 4);
    MEM32(0x4409AC) = ecx;
    esp += 4; return; /* ret */

loc_0018D4FA: ;
    edx = MEM32(esp + 4);
    MEM32(0x4409AC) = edx;
    esp += 4; return; /* ret */

loc_0018D505: ;
    eax = MEM32(esp + 4);
    MEM32(0x4409AC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0018D510
 * Original: 0x0018D510 - 0x0018D575 (101 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018D510: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1000 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_0018D527; /* jg: greater (signed >) */

loc_0018D522: ;
    esi = 0x1000;

loc_0018D527: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0018D538u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018D535u); } /* indirect call */
    }

loc_0018D538: ;
    edx = edi + 8;
    ecx = edx;
    ebp = MEM32(ecx);
    ebx = eax;
    MEM32(ebx) = ebp;
    ebp = MEM32(ecx + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(ecx + 8);
    MEM32(ebx + 8) = ebp;
    ecx = MEM32(ecx + 0xC);
    MEM32(ebx + 0xC) = ecx;
    ebx = MEM32(esp + 0x14);
    ecx = eax + 0x10;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x14) = ecx;
    POP32(esp, edi);
    ebp = ecx + ebx;
    POP32(esp, esi);
    MEM32(edx) = ebp;
    POP32(esp, ebp);
    eax = ecx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018D580
 * Original: 0x0018D580 - 0x0018D5C2 (66 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D580: ;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = edx + esi + 0x10;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    edi = MEM32(esi);
    MEM32(ecx) = edi;
    edi = MEM32(esi + 4);
    MEM32(ecx + 4) = edi;
    edi = MEM32(esi + 8);
    MEM32(ecx + 8) = edi;
    esi = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    MEM32(ecx + 0xC) = esi;
    ecx = MEM32(0x4409AC);
    esi = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x0018D5BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018D5BAu); } /* indirect call */
    }

loc_0018D5BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018D5D0
 * Original: 0x0018D5D0 - 0x0018D5D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D5D0(void)
{

loc_0018D5D0: ;
    eax = 0x4409B4;
    esp += 4; return; /* ret */

}

/**
 * sub_0018D5E0
 * Original: 0x0018D5E0 - 0x0018D5E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018D5E0: ;
    g_seh_ebp = ebp; sub_0018F2D0(); return; /* tail jmp 0x0018F2D0 */

}

/**
 * sub_0018D5F0
 * Original: 0x0018D5F0 - 0x0018D647 (87 bytes, 36 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D5F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0018D601u); RECOMP_ABI_CALL(0x0018F190u, sub_0018F190); /* call 0x0018F190 */

loc_0018D601: ;
    edi = eax;
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0018D610u); RECOMP_ABI_CALL(0x0018F0F0u, sub_0018F0F0); /* call 0x0018F0F0 */

loc_0018D610: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D640; /* je: equal / zero */

loc_0018D618: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0018D620u); RECOMP_ABI_CALL(0x0018F080u, sub_0018F080); /* call 0x0018F080 */

loc_0018D620: ;
    edx = MEM32(esp + 0x14);
    esi = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D632u); RECOMP_ABI_CALL(0x0018F460u, sub_0018F460); /* call 0x0018F460 */

loc_0018D632: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018D638u); RECOMP_ABI_CALL(0x0018F480u, sub_0018F480); /* call 0x0018F480 */

loc_0018D638: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0018D640: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0018D650
 * Original: 0x0018D650 - 0x0018D6DB (139 bytes, 59 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D650: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 8;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0018D662u); RECOMP_ABI_CALL(0x0018F190u, sub_0018F190); /* call 0x0018F190 */

loc_0018D662: ;
    edi = eax;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0018D671u); RECOMP_ABI_CALL(0x0018F0F0u, sub_0018F0F0); /* call 0x0018F0F0 */

loc_0018D671: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D6BB; /* je: equal / zero */

loc_0018D679: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0018D681u); RECOMP_ABI_CALL(0x0018F080u, sub_0018F080); /* call 0x0018F080 */

loc_0018D681: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018D68Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018D68Au); } /* indirect call */
    }

loc_0018D68D: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D6AD; /* je: equal / zero */

loc_0018D695: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D69Bu); RECOMP_ABI_CALL(0x0018F510u, sub_0018F510); /* call 0x0018F510 */

loc_0018D69B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0018D6A7u); RECOMP_ABI_CALL(0x0018F0A0u, sub_0018F0A0); /* call 0x0018F0A0 */

loc_0018D6A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0018D6AD: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0018D6B5u); RECOMP_ABI_CALL(0x0018F1D0u, sub_0018F1D0); /* call 0x0018F1D0 */

loc_0018D6B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0018D6BB: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D6D5; /* je: equal / zero */

loc_0018D6C3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018D6C9u); RECOMP_ABI_CALL(0x0018F510u, sub_0018F510); /* call 0x0018F510 */

loc_0018D6C9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0018D6D5u); RECOMP_ABI_CALL(0x0018F110u, sub_0018F110); /* call 0x0018F110 */

loc_0018D6D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018D6E0
 * Original: 0x0018D6E0 - 0x0018D704 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0018D6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D6E0: ;
    _fa = (uint32_t)(MEM8(ecx + 5)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 5), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018D6FF; /* je: equal / zero */

loc_0018D6E6: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409B0);
    PUSH32(esp, 0x0018D6FCu); RECOMP_ABI_CALL(0x0018D5F0u, sub_0018D5F0); /* call 0x0018D5F0 */

loc_0018D6FC: ;
    esp += 12; return; /* ret 8 */

loc_0018D6FF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018D710
 * Original: 0x0018D710 - 0x0018D73B (43 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D710: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(0x4409B0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018D725u); RECOMP_ABI_CALL(0x0018D650u, sub_0018D650); /* call 0x0018D650 */

loc_0018D725: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D732; /* je: equal / zero */

loc_0018D729: ;
    MEM8(esi + 5) = MEM8(esi + 5) | 0x80;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0018D732: ;
    MEM8(esi + 5) = MEM8(esi + 5) & 0x7F;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018D740
 * Original: 0x0018D740 - 0x0018D78B (75 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D740(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D740: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x243F78);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM16(esi + 6) = 1;
    ecx = esi + 8;
    MEM32(esp + 0x10) = 0;
    MEM32(esi) = 0x2F6310;
    PUSH32(esp, 0x0018D779u); RECOMP_ABI_CALL(0x0018F290u, sub_0018F290); /* call 0x0018F290 */

loc_0018D779: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018D790
 * Original: 0x0018D790 - 0x0018D7B8 (40 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D790: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018D798u); RECOMP_ABI_CALL(0x0018D7C0u, sub_0018D7C0); /* call 0x0018D7C0 */

loc_0018D798: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018D7B2; /* je: equal / zero */

loc_0018D79F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0018D7B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018D7AFu); } /* indirect call */
    }

loc_0018D7B2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018D7C0
 * Original: 0x0018D7C0 - 0x0018D867 (167 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D7C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x243FA3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    MEM32(ebx) = 0x2F6310;
    edi = ebx + 8;
    ecx = edi;
    MEM32(esp + 0x1C) = 1;
    PUSH32(esp, 0x0018D7F9u); RECOMP_ABI_CALL(0x0018F060u, sub_0018F060); /* call 0x0018F060 */

loc_0018D7F9: ;
    esi = eax;
    PUSH32(esp, esi);
    eax = esp + 0x13;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0018D808u); RECOMP_ABI_CALL(0x0018F0F0u, sub_0018F0F0); /* call 0x0018F0F0 */

loc_0018D808: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018D843; /* je: equal / zero */

loc_0018D810: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0018D818u); RECOMP_ABI_CALL(0x0018F080u, sub_0018F080); /* call 0x0018F080 */

loc_0018D818: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018D824u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018D821u); } /* indirect call */
    }

loc_0018D824: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0018D82Cu); RECOMP_ABI_CALL(0x0018F0C0u, sub_0018F0C0); /* call 0x0018F0C0 */

loc_0018D82C: ;
    esi = eax;
    PUSH32(esp, esi);
    eax = esp + 0x13;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0018D83Bu); RECOMP_ABI_CALL(0x0018F0F0u, sub_0018F0F0); /* call 0x0018F0F0 */

loc_0018D83B: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018D810; /* jne: not equal / not zero */

loc_0018D843: ;
    ecx = edi;
    MEM8(esp + 0x1C) = 0;
    PUSH32(esp, 0x0018D84Fu); RECOMP_ABI_CALL(0x0018F2D0u, sub_0018F2D0); /* call 0x0018F2D0 */

loc_0018D84F: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(ebx) = 0x2DC684;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018D870
 * Original: 0x0018D870 - 0x0018D8BC (76 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D870: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x243FBB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x14);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0018D895u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018D892u); } /* indirect call */
    }

loc_0018D895: ;
    MEM16(eax + 4) = 0x14;
    MEM32(esp) = eax;
    ecx = eax;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x0018D8ADu); RECOMP_ABI_CALL(0x0018D740u, sub_0018D740); /* call 0x0018D740 */

loc_0018D8AD: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018D8C0
 * Original: 0x0018D8C0 - 0x0018D922 (98 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D8C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018D8C0: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    edx = ebp;
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x12);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0018D8DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018D8DCu); } /* indirect call */
    }

loc_0018D8DF: ;
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi);
    edi = eax;
    eax = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018D8F5u); RECOMP_ABI_CALL(0x0018F4B0u, sub_0018F4B0); /* call 0x0018F4B0 */

loc_0018D8F5: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0018D918; /* js: sign (negative) */

loc_0018D8FF: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018D918u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018D915u); } /* indirect call */
    }

loc_0018D918: ;
    MEM32(esi) = edi;
    POP32(esp, edi);
    MEM32(esi + 8) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018D930
 * Original: 0x0018D930 - 0x0018D99D (109 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018D930: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    ebp = eax + eax;
    if (CMP_NE(_fa, _fb)) goto loc_0018D947; /* jne: not equal / not zero */

loc_0018D942: ;
    ebp = 1;

loc_0018D947: ;
    ebx = MEM32(esp + 0x18);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    edx = ebp;
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0018D95Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018D95Bu); } /* indirect call */
    }

loc_0018D95E: ;
    ecx = MEM32(esi);
    edi = eax;
    eax = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018D970u); RECOMP_ABI_CALL(0x0018F4B0u, sub_0018F4B0); /* call 0x0018F4B0 */

loc_0018D970: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0018D993; /* js: sign (negative) */

loc_0018D97A: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018D993u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018D990u); } /* indirect call */
    }

loc_0018D993: ;
    MEM32(esi) = edi;
    POP32(esp, edi);
    MEM32(esi + 8) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018D9A0
 * Original: 0x0018D9A0 - 0x0018DA04 (100 bytes, 27 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D9A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018D9A0: ;
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x210;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(esp + 0x10) = esp;
    MEM8(eax) = 1;
    PUSH32(esp, 0x200);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0018D9C3u); RECOMP_ABI_CALL(0x0018F980u, sub_0018F980); /* call 0x0018F980 */

loc_0018D9C3: ;
    ecx = MEM32(esp + 0x214);
    PUSH32(esp, ecx);
    ecx = esp + 4;
    PUSH32(esp, 0x0018D9D4u); RECOMP_ABI_CALL(0x0018F7E0u, sub_0018F7E0); /* call 0x0018F7E0 */

loc_0018D9D4: ;
    ecx = MEM32(0x4409DC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x2F631C);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2636FE25);
    PUSH32(esp, 0x2F6314);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018D9F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018D9F2u); } /* indirect call */
    }

loc_0018D9F5: ;
    ecx = esp;
    PUSH32(esp, 0x0018D9FDu); RECOMP_ABI_CALL(0x0018FA00u, sub_0018FA00); /* call 0x0018FA00 */

loc_0018D9FD: ;
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x210;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018DA10
 * Original: 0x0018DA10 - 0x0018DA7B (107 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DA10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DA10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x243FD8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    MEM32(esi) = 0x2F6330;
    ecx = MEM32(0x4409AC);
    edx = MEM32(0x4409E0);
    eax = MEM32(ecx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0018DA4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DA49u); } /* indirect call */
    }

loc_0018DA4C: ;
    ecx = MEM32(esp + 0xC);
    MEM32(0x4409E0) = edi;
    MEM32(0x4409EC) = edi;
    MEM32(0x4409E4) = edi;
    MEM32(0x4409E8) = edi;
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
 * sub_0018DA80
 * Original: 0x0018DA80 - 0x0018DAA8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DA80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018DA88u); RECOMP_ABI_CALL(0x0018DA10u, sub_0018DA10); /* call 0x0018DA10 */

loc_0018DA88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018DAA2; /* je: equal / zero */

loc_0018DA8F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x16);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0018DAA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DA9Fu); } /* indirect call */
    }

loc_0018DAA2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018DAB0
 * Original: 0x0018DAB0 - 0x0018DAEC (60 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DAB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DAB0: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x16);
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0018DABFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DABCu); } /* indirect call */
    }

loc_0018DABF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(eax + 4) = 8;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2F6330;
    MEM32(0x4409E0) = ecx;
    MEM32(0x4409EC) = ecx;
    MEM32(0x4409E4) = ecx;
    MEM32(0x4409E8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0018DAF0
 * Original: 0x0018DAF0 - 0x0018DB0F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DAF0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2F6334;
    if (TEST_Z(_fa, _fb)) goto loc_0018DB09; /* je: equal / zero */

loc_0018DB00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018DB06u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0018DB06: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018DB09: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018DB10
 * Original: 0x0018DB10 - 0x0018DB73 (99 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DB10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DB10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x243FF8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 4) = esi;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = 0xFFFFFFFFu;
    MEM32(esp + 0x10) = eax;
    eax = esi + 0x2F;
    PUSH32(esp, 0x4000);
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    MEM32(esi) = 0x2F6364;
    PUSH32(esp, 0x0018DB61u); RECOMP_ABI_CALL(0x0018D4B0u, sub_0018D4B0); /* call 0x0018D4B0 */

loc_0018DB61: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018DB80
 * Original: 0x0018DB80 - 0x0018DBA2 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DB80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DB80: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018DB8Du); RECOMP_ABI_CALL(0x001F7180u, sub_001F7180); /* call 0x001F7180 */

loc_0018DB8D: ;
    ecx = eax;
    eax = ecx + 0x10;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018DBB0
 * Original: 0x0018DBB0 - 0x0018DBC9 (25 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DBB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018DBC6; /* je: equal / zero */

loc_0018DBB8: ;
    edx = MEM32(eax + -4);
    ecx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018DBC5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0018DBC5: ;
    POP32(esp, ecx);

loc_0018DBC6: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0018DBD0
 * Original: 0x0018DBD0 - 0x0018DBFA (42 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DBD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DBD0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018DBE2u); RECOMP_ABI_CALL(0x001F7180u, sub_001F7180); /* call 0x001F7180 */

loc_0018DBE2: ;
    ecx = eax;
    eax = ecx + esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = ~esi;
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + -4) = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0018DC00
 * Original: 0x0018DC00 - 0x0018DC19 (25 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DC00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018DC16; /* je: equal / zero */

loc_0018DC08: ;
    edx = MEM32(eax + -4);
    ecx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018DC15u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0018DC15: ;
    POP32(esp, ecx);

loc_0018DC16: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018DC20
 * Original: 0x0018DC20 - 0x0018DC3A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DC20(void)
{

loc_0018DC20: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 4));
    PUSH32(esp, 0x13);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018DC38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DC35u); } /* indirect call */
    }

loc_0018DC38: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018DC40
 * Original: 0x0018DC40 - 0x0018DC5E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DC40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018DC48u); RECOMP_ABI_CALL(0x0018DC60u, sub_0018DC60); /* call 0x0018DC60 */

loc_0018DC48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018DC58; /* je: equal / zero */

loc_0018DC4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018DC55u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0018DC55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018DC58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018DC60
 * Original: 0x0018DC60 - 0x0018DC67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DC60(void)
{

loc_0018DC60: ;
    MEM32(ecx) = 0x2F6334;
    esp += 4; return; /* ret */

}

/**
 * sub_0018DC70
 * Original: 0x0018DC70 - 0x0018DCF5 (133 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DC70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018DC70: ;
    _fa = (uint32_t)(MEM8(0x4409F9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x4409F9), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018DCF4; /* jne: not equal / not zero */

loc_0018DC79: ;
    ecx = MEM32(0x440A10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2F63EC);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0018DC89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DC86u); } /* indirect call */
    }

loc_0018DC89: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018DC8Fu); RECOMP_ABI_CALL(0x0018F8D0u, sub_0018F8D0); /* call 0x0018F8D0 */

loc_0018DC8F: ;
    ecx = MEM32(0x440A10);
    edx = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x131CB47);
    PUSH32(esp, 0x2F63D4);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018DCA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DCA4u); } /* indirect call */
    }

loc_0018DCA7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018DCADu); RECOMP_ABI_CALL(0x0018F8D0u, sub_0018F8D0); /* call 0x0018F8D0 */

loc_0018DCAD: ;
    ecx = MEM32(0x440A10);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2F63B4);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0018DCC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DCBDu); } /* indirect call */
    }

loc_0018DCC0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018DCC6u); RECOMP_ABI_CALL(0x0018F8D0u, sub_0018F8D0); /* call 0x0018F8D0 */

loc_0018DCC6: ;
    ecx = MEM32(0x440A10);
    edx = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2F6394);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018DCD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DCD6u); } /* indirect call */
    }

loc_0018DCD9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018DCDFu); RECOMP_ABI_CALL(0x0018F8D0u, sub_0018F8D0); /* call 0x0018F8D0 */

loc_0018DCDF: ;
    ecx = MEM32(0x440A10);
    eax = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0018DCEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DCEAu); } /* indirect call */
    }

loc_0018DCED: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0018F930(); return; /* tail jmp 0x0018F930 */

loc_0018DCF4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018DD00
 * Original: 0x0018DD00 - 0x0018DD28 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DD00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018DD08u); RECOMP_ABI_CALL(0x0019FDA0u, sub_0019FDA0); /* call 0x0019FDA0 */

loc_0018DD08: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018DD22; /* je: equal / zero */

loc_0018DD0F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0018DD22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DD1Fu); } /* indirect call */
    }

loc_0018DD22: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018DD30
 * Original: 0x0018DD30 - 0x0018DDD1 (161 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DD30: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24402E);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM16(esi + 6) = 1;
    MEM32(esi) = 0x2F6414;
    ecx = MEM32(0x440A14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEM32(esp + 0x14) = 0;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0018DD6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DD6Bu); } /* indirect call */
    }

loc_0018DD6E: ;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 0x0018DD77u); RECOMP_ABI_CALL(0x0018F960u, sub_0018F960); /* call 0x0018F960 */

loc_0018DD77: ;
    ecx = MEM32(0x440A14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM8(esp + 0x14) = 1;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0018DD89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DD86u); } /* indirect call */
    }

loc_0018DD89: ;
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x0018DD92u); RECOMP_ABI_CALL(0x0018F960u, sub_0018F960); /* call 0x0018F960 */

loc_0018DD92: ;
    ecx = MEM32(esi + 0x10);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    MEM8(esp + 0x10) = 2;
    if (CMP_NE(_fa, _fb)) goto loc_0018DDAB; /* jne: not equal / not zero */

loc_0018DDA5: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0018DDABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DDA9u); } /* indirect call */
    }

loc_0018DDAB: ;
    ecx = MEM32(esi + 0x1C);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018DDBF; /* jne: not equal / not zero */

loc_0018DDB9: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0018DDBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DDBDu); } /* indirect call */
    }

loc_0018DDBF: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018DDE0
 * Original: 0x0018DDE0 - 0x0018DDE4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DDE0(void)
{

loc_0018DDE0: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0018DDF0
 * Original: 0x0018DDF0 - 0x0018DDF4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DDF0(void)
{

loc_0018DDF0: ;
    eax = ecx + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0018DE00
 * Original: 0x0018DE00 - 0x0018DE28 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DE00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018DE08u); RECOMP_ABI_CALL(0x0018DE30u, sub_0018DE30); /* call 0x0018DE30 */

loc_0018DE08: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018DE22; /* je: equal / zero */

loc_0018DE0F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0018DE22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DE1Fu); } /* indirect call */
    }

loc_0018DE22: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018DE30
 * Original: 0x0018DE30 - 0x0018DE80 (80 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DE30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DE30: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244053);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = esi + 0x14;
    MEM32(esp + 0x10) = 1;
    PUSH32(esp, 0x0018DE5Du); RECOMP_ABI_CALL(0x0018FA00u, sub_0018FA00); /* call 0x0018FA00 */

loc_0018DE5D: ;
    ecx = esi + 8;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x0018DE6Au); RECOMP_ABI_CALL(0x0018FA00u, sub_0018FA00); /* call 0x0018FA00 */

loc_0018DE6A: ;
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
 * sub_0018DE80
 * Original: 0x0018DE80 - 0x0018DEB0 (48 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DE80(void)
{

loc_0018DE80: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x15);
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0018DE8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DE8Cu); } /* indirect call */
    }

loc_0018DE8F: ;
    MEM16(eax + 4) = 8;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2F6430;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018DEB0
 * Original: 0x0018DEB0 - 0x0018DED8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DEB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018DEB8u); RECOMP_ABI_CALL(0x0019FDA0u, sub_0019FDA0); /* call 0x0019FDA0 */

loc_0018DEB8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018DED2; /* je: equal / zero */

loc_0018DEBF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x15);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0018DED2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DECFu); } /* indirect call */
    }

loc_0018DED2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018DEE0
 * Original: 0x0018DEE0 - 0x0018DFB9 (217 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DEE0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244076);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x14);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0018DF06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DF03u); } /* indirect call */
    }

loc_0018DF06: ;
    MEM16(eax + 4) = 0x14;
    MEM32(esp + 4) = eax;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x0018DF24u); RECOMP_ABI_CALL(0x0018DFE0u, sub_0018DFE0); /* call 0x0018DFE0 */

loc_0018DF24: ;
    esi = eax;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0018DF3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DF37u); } /* indirect call */
    }

loc_0018DF3A: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018DFA5; /* je: equal / zero */

loc_0018DF44: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x24);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0018DF54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DF51u); } /* indirect call */
    }

loc_0018DF54: ;
    MEM16(eax + 4) = 0x24;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x1000);
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esp + 0x1C) = 1;
    PUSH32(esp, 0x0018DF73u); RECOMP_ABI_CALL(0x0018FE30u, sub_0018FE30); /* call 0x0018FE30 */

loc_0018DF73: ;
    MEM16(esi + 6) = MEM16(esi + 6) - 1;
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 6), 0 (16-bit) */
    edi = eax;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if (CMP_NE(_fa, _fb)) goto loc_0018DF90; /* jne: not equal / not zero */

loc_0018DF88: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0018DF90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DF8Eu); } /* indirect call */
    }

loc_0018DF90: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0018DFA5: ;
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
 * sub_0018DFC0
 * Original: 0x0018DFC0 - 0x0018DFDA (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DFC0(void)
{

loc_0018DFC0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 4));
    PUSH32(esp, 0x15);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018DFD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018DFD5u); } /* indirect call */
    }

loc_0018DFD8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018DFE0
 * Original: 0x0018DFE0 - 0x0018E01F (63 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018DFE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 1;
    MEM16(esi + 6) = LO16(eax);
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi) = 0x2F6450;
    MEM8(esi + 0x10) = LO8(eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x2F644C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018E00Bu); RECOMP_ABI_CALL(0x0023856Fu, sub_0023856F); /* call 0x0023856F */

loc_0018E00B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xC) = eax;
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x10) = LO8(ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018E020
 * Original: 0x0018E020 - 0x0018E039 (25 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E020: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0018E028u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E025u); } /* indirect call */
    }

loc_0018E028: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018E040
 * Original: 0x0018E040 - 0x0018E04C (12 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E040(void)
{

loc_0018E040: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0018E04Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E048u); } /* indirect call */
    }

loc_0018E04B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018E050
 * Original: 0x0018E050 - 0x0018E077 (39 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E050: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018E068u); RECOMP_ABI_CALL(0x00238582u, sub_00238582); /* call 0x00238582 */

loc_0018E068: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018E073; /* jg: greater (signed >) */

loc_0018E06F: ;
    MEM8(esi + 0x10) = 0;

loc_0018E073: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018E080
 * Original: 0x0018E080 - 0x0018E08C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E080(void)
{

loc_0018E080: ;
    SET_LO8(ecx, MEM8(ecx + 0x10));
    eax = MEM32(esp + 4);
    MEM8(eax) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018E090
 * Original: 0x0018E090 - 0x0018E0AF (31 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0018E090: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018E0A3u); RECOMP_ABI_CALL(0x0023867Au, sub_0023867A); /* call 0x0023867A */

loc_0018E0A3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018E0B0
 * Original: 0x0018E0B0 - 0x0018E0BD (13 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E0B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E0B0: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018E0B9u); RECOMP_ABI_CALL(0x00238708u, sub_00238708); /* call 0x00238708 */

loc_0018E0B9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018E0C0
 * Original: 0x0018E0C0 - 0x0018E0E8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E0C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018E0C8u); RECOMP_ABI_CALL(0x0018E0F0u, sub_0018E0F0); /* call 0x0018E0F0 */

loc_0018E0C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018E0E2; /* je: equal / zero */

loc_0018E0CF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x15);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0018E0E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E0DFu); } /* indirect call */
    }

loc_0018E0E2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018E0F0
 * Original: 0x0018E0F0 - 0x0018E111 (33 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E0F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x2F6450;
    if (CMP_EQ(_fa, _fb)) goto loc_0018E109; /* je: equal / zero */

loc_0018E100: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018E106u); RECOMP_ABI_CALL(0x00238861u, sub_00238861); /* call 0x00238861 */

loc_0018E106: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018E109: ;
    MEM32(esi) = 0x2DC684;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018E120
 * Original: 0x0018E120 - 0x0018E1CF (175 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E120: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244096);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x10);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0018E147u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E144u); } /* indirect call */
    }

loc_0018E147: ;
    MEM16(eax + 4) = 0x10;
    MEM32(esp + 8) = eax;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0018E165u); RECOMP_ABI_CALL(0x0018E1D0u, sub_0018E1D0); /* call 0x0018E1D0 */

loc_0018E165: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x1C);
    esi = eax;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0018E17Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E17Bu); } /* indirect call */
    }

loc_0018E17E: ;
    MEM16(eax + 4) = 0x1C;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x1000);
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esp + 0x1C) = 1;
    PUSH32(esp, 0x0018E19Du); RECOMP_ABI_CALL(0x001901A0u, sub_001901A0); /* call 0x001901A0 */

loc_0018E19D: ;
    MEM16(esi + 6) = MEM16(esi + 6) - 1;
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 6), 0 (16-bit) */
    edi = eax;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if (CMP_NE(_fa, _fb)) goto loc_0018E1BA; /* jne: not equal / not zero */

loc_0018E1B2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0018E1BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E1B8u); } /* indirect call */
    }

loc_0018E1BA: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018E1D0
 * Original: 0x0018E1D0 - 0x0018E200 (48 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E1D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E1D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 1;
    MEM16(esi + 6) = LO16(eax);
    MEM32(esi) = 0x2F647C;
    MEM8(esi + 0xC) = LO8(eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x2F6478);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018E1F4u); RECOMP_ABI_CALL(0x0023856Fu, sub_0023856F); /* call 0x0023856F */

loc_0018E1F4: ;
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018E200
 * Original: 0x0018E200 - 0x0018E23A (58 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E200: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E234; /* je: equal / zero */

loc_0018E20A: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018E21Du); RECOMP_ABI_CALL(0x002388B7u, sub_002388B7); /* call 0x002388B7 */

loc_0018E21D: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018E22D; /* jg: greater (signed >) */

loc_0018E226: ;
    ecx = edi;
    PUSH32(esp, 0x0018E22Du); RECOMP_ABI_CALL(0x0018E240u, sub_0018E240); /* call 0x0018E240 */

loc_0018E22D: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_0018E234: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018E240
 * Original: 0x0018E240 - 0x0018E263 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E240: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0018E25A; /* jbe: below or equal (unsigned <=) */

loc_0018E24A: ;
    SET_LO8(ecx, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E25A; /* je: equal / zero */

loc_0018E251: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018E257u); RECOMP_ABI_CALL(0x00238861u, sub_00238861); /* call 0x00238861 */

loc_0018E257: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018E25A: ;
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018E270
 * Original: 0x0018E270 - 0x0018E27F (15 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E270: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E27E; /* je: equal / zero */

loc_0018E277: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018E27Du); RECOMP_ABI_CALL(0x00238A2Bu, sub_00238A2B); /* call 0x00238A2B */

loc_0018E27D: ;
    POP32(esp, ecx);

loc_0018E27E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018E280
 * Original: 0x0018E280 - 0x0018E291 (17 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E280: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 4);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(eax) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018E2A0
 * Original: 0x0018E2A0 - 0x0018E2AA (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E2A0(void)
{

loc_0018E2A0: ;
    eax = MEM32(esp + 4);
    MEM8(eax) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018E2B0
 * Original: 0x0018E2B0 - 0x0018E2CF (31 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E2B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0018E2B0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018E2C3u); RECOMP_ABI_CALL(0x0023867Au, sub_0023867A); /* call 0x0023867A */

loc_0018E2C3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018E2D0
 * Original: 0x0018E2D0 - 0x0018E2DD (13 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E2D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E2D0: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018E2D9u); RECOMP_ABI_CALL(0x00238708u, sub_00238708); /* call 0x00238708 */

loc_0018E2D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018E2E0
 * Original: 0x0018E2E0 - 0x0018E308 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E2E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018E2E8u); RECOMP_ABI_CALL(0x0018E310u, sub_0018E310); /* call 0x0018E310 */

loc_0018E2E8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018E302; /* je: equal / zero */

loc_0018E2EF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x15);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0018E302u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E2FFu); } /* indirect call */
    }

loc_0018E302: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018E310
 * Original: 0x0018E310 - 0x0018E33F (47 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E310: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x2F647C;
    if (CMP_BE(_fa, _fb)) goto loc_0018E330; /* jbe: below or equal (unsigned <=) */

loc_0018E320: ;
    SET_LO8(ecx, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E330; /* je: equal / zero */

loc_0018E327: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018E32Du); RECOMP_ABI_CALL(0x00238861u, sub_00238861); /* call 0x00238861 */

loc_0018E32D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018E330: ;
    MEM32(esi + 8) = 0;
    MEM32(esi) = 0x2DC684;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018E340
 * Original: 0x0018E340 - 0x0018E3DB (155 bytes, 62 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018E340: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E3D5; /* je: equal / zero */

loc_0018E34D: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + ebp + -1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018E375; /* jne: not equal / not zero */

loc_0018E35A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0018E360u); RECOMP_ABI_CALL(0x002296BCu, sub_002296BC); /* call 0x002296BC */

loc_0018E360: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, 0x0018E36Bu); RECOMP_ABI_CALL(0x00238347u, sub_00238347); /* call 0x00238347 */

loc_0018E36B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0018E375: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x12);
    ebx = esi + 1;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0018E388u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E385u); } /* indirect call */
    }

loc_0018E388: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0018E39B; /* jle: less or equal (signed <=) */

loc_0018E38E: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;

loc_0018E392: ;
    SET_LO8(edx, MEM8(eax + ebp));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0018E392; /* jne: not equal / not zero */

loc_0018E39B: ;
    PUSH32(esp, edi);
    MEM8(edi + esi) = 0;
    PUSH32(esp, 0x0018E3A5u); RECOMP_ABI_CALL(0x002296BCu, sub_002296BC); /* call 0x002296BC */

loc_0018E3A5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, 0x0018E3B0u); RECOMP_ABI_CALL(0x00238347u, sub_00238347); /* call 0x00238347 */

loc_0018E3B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0018E3CC; /* js: sign (negative) */

loc_0018E3B7: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    ebx = ebx & 0x7FFFFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0018E3CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E3C9u); } /* indirect call */
    }

loc_0018E3CC: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0018E3D5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018E3E0
 * Original: 0x0018E3E0 - 0x0018E507 (295 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018E3E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2440A8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x4409FC);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x80000000u;
    PUSH32(esp, edi);
    edi = 0x4409FC;
    MEM32(esp + 0xC) = ebp;
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(esp + 0x20) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0018E48F; /* je: equal / zero */

loc_0018E421: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018E437; /* jne: not equal / not zero */

loc_0018E428: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esi); PUSH32(esp, 0x0018E42Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E428u); } /* indirect call */
    }

loc_0018E42A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E4C8; /* je: equal / zero */

loc_0018E432: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx) = eax;

loc_0018E437: ;
    edi = esi + 4;
    esi = MEM32(edi);

loc_0018E43C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018E421; /* jne: not equal / not zero */

loc_0018E440: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E48A; /* je: equal / zero */

loc_0018E449: ;
    /* nop */

loc_0018E450: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018E482; /* jl: less (signed <) */

loc_0018E455: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(ecx + ebx * 4);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esi); PUSH32(esp, 0x0018E45Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E45Cu); } /* indirect call */
    }

loc_0018E45E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E47F; /* je: equal / zero */

loc_0018E462: ;
    edx = MEM32(esi + 8);
    MEM32(edx) = eax;
    MEM32(edi) = esi;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + eax * 4);
    edi = esi + 4;
    MEM32(ecx + ebx * 4) = eax;

loc_0018E47F: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0018E455; /* jns: not sign (positive) */

loc_0018E482: ;
    ebx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018E450; /* jne: not equal / not zero */

loc_0018E48A: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, ebx);

loc_0018E48F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    POP32(esp, ebp);
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0018E4B9; /* js: sign (negative) */

loc_0018E49E: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018E4B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E4B6u); } /* indirect call */
    }

loc_0018E4B9: ;
    ecx = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0018E4C8: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018E4E9; /* jne: not equal / not zero */

loc_0018E4DA: ;
    eax = esp + 0xC;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018E4E6u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_0018E4E6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018E4E9: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx + edx * 4) = esi;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi);
    esi = MEM32(esi + 4);
    MEM32(eax + 4) = ebp;
    MEM32(edi) = esi;
    goto loc_0018E43C;

}

/**
 * sub_0018E510
 * Original: 0x0018E510 - 0x0018E61C (268 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E510: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2440A8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0x80000000u;
    PUSH32(esp, 4);
    eax = esp + 8;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x0018E557u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_0018E557: ;
    esi = MEM32(0x4409FC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E5A7; /* je: equal / zero */

loc_0018E564: ;
    goto loc_0018E570;

    /* nop */
    /* nop */

loc_0018E570: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018E591; /* jne: not equal / not zero */

loc_0018E582: ;
    edx = esp + 4;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018E58Eu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_0018E58E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018E591: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    MEM32(eax + ecx * 4) = esi;
    MEM32(esp + 8) = MEM32(esp + 8) + 1;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018E570; /* jne: not equal / not zero */

loc_0018E5A7: ;
    esi = MEM32(esp + 8);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0018E5E1; /* js: sign (negative) */

loc_0018E5AE: ;
    edi = edi;

loc_0018E5B0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + esi * 4);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018E5CD; /* jne: not equal / not zero */

loc_0018E5C7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0018E5CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E5CBu); } /* indirect call */
    }

loc_0018E5CD: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + esi * 4 + 4);
    edx = MEM32(ecx + 8);
    MEM32(edx) = 0;
    if ((_fas >= 0)) goto loc_0018E5B0; /* jns: not sign (positive) */

loc_0018E5E1: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0018E60D; /* js: sign (negative) */

loc_0018E5F2: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018E60Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E60Au); } /* indirect call */
    }

loc_0018E60D: ;
    ecx = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018E620
 * Original: 0x0018E620 - 0x0018E6AA (138 bytes, 48 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0018E620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E620: ;
    _fa = (uint32_t)(MEM8(0x4409F8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x4409F8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018E6A7; /* jne: not equal / not zero */

loc_0018E629: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0018E62Fu); RECOMP_ABI_CALL(0x0018E510u, sub_0018E510); /* call 0x0018E510 */

loc_0018E62F: ;
    eax = MEM32(0x4409DC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E64D; /* je: equal / zero */

loc_0018E63A: ;
    ecx = eax;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018E64D; /* jne: not equal / not zero */

loc_0018E647: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0018E64Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E64Bu); } /* indirect call */
    }

loc_0018E64D: ;
    eax = MEM32(0x440A10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x4409DC) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0018E66F; /* je: equal / zero */

loc_0018E65C: ;
    ecx = eax;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018E66F; /* jne: not equal / not zero */

loc_0018E669: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0018E66Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E66Du); } /* indirect call */
    }

loc_0018E66F: ;
    eax = MEM32(0x440A14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x440A10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0018E691; /* je: equal / zero */

loc_0018E67E: ;
    ecx = eax;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018E691; /* jne: not equal / not zero */

loc_0018E68B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0018E691u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E68Fu); } /* indirect call */
    }

loc_0018E691: ;
    PUSH32(esp, ebx);
    MEM32(0x440A14) = ebx;
    PUSH32(esp, 0x0018E69Du); RECOMP_ABI_CALL(0x0018D4D0u, sub_0018D4D0); /* call 0x0018D4D0 */

loc_0018E69D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x4409F8) = LO8(ebx);
    POP32(esp, ebx);

loc_0018E6A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018E6B0
 * Original: 0x0018E6B0 - 0x0018E6D2 (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E6B0(void)
{

loc_0018E6B0: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0018E6BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E6BCu); } /* indirect call */
    }

loc_0018E6BF: ;
    MEM16(eax + 4) = 8;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2F640C;
    esp += 4; return; /* ret */

}

/**
 * sub_0018E6E0
 * Original: 0x0018E6E0 - 0x0018E715 (53 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E6E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0018E6F0;

    /* nop */

loc_0018E6F0: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x2F64D4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0018E6FEu); RECOMP_ABI_CALL(0x0018F4A0u, sub_0018F4A0); /* call 0x0018F4A0 */

loc_0018E6FE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E708; /* je: equal / zero */

loc_0018E705: ;
    edi = eax + 1;

loc_0018E708: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018E6F0; /* jl: less (signed <) */

loc_0018E70E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018E720
 * Original: 0x0018E720 - 0x0018E8A7 (391 bytes, 103 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E720: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2440D6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x274) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x274;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x288);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = esp + 0x24;
    PUSH32(esp, 0x2F6504);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0018E756u); RECOMP_ABI_CALL(0x0018F3C0u, sub_0018F3C0); /* call 0x0018F3C0 */

loc_0018E756: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp;
    MEM32(esp + 0x20) = esp;
    PUSH32(esp, 0x200);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    MEM8(eax) = 1;
    PUSH32(esp, 0x0018E778u); RECOMP_ABI_CALL(0x0018F980u, sub_0018F980); /* call 0x0018F980 */

loc_0018E778: ;
    eax = MEM32(esp + 0x294);
    ecx = MEM32(esp + 0x28C);
    PUSH32(esp, 0x2F6500);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2A4);
    PUSH32(esp, 0x2F64F8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2A8);
    PUSH32(esp, 0x2F64F4);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x2F64EC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    MEM32(esp + 0x2AC) = 0;
    PUSH32(esp, 0x0018E7C7u); RECOMP_ABI_CALL(0x0018F7E0u, sub_0018F7E0); /* call 0x0018F7E0 */

loc_0018E7C7: ;
    ecx = eax;
    PUSH32(esp, 0x0018E7CEu); RECOMP_ABI_CALL(0x0018F7C0u, sub_0018F7C0); /* call 0x0018F7C0 */

loc_0018E7CE: ;
    ecx = eax;
    PUSH32(esp, 0x0018E7D5u); RECOMP_ABI_CALL(0x0018F830u, sub_0018F830); /* call 0x0018F830 */

loc_0018E7D5: ;
    ecx = eax;
    PUSH32(esp, 0x0018E7DCu); RECOMP_ABI_CALL(0x0018F7E0u, sub_0018F7E0); /* call 0x0018F7E0 */

loc_0018E7DC: ;
    ecx = eax;
    PUSH32(esp, 0x0018E7E3u); RECOMP_ABI_CALL(0x0018F7E0u, sub_0018F7E0); /* call 0x0018F7E0 */

loc_0018E7E3: ;
    ecx = eax;
    PUSH32(esp, 0x0018E7EAu); RECOMP_ABI_CALL(0x0018F7E0u, sub_0018F7E0); /* call 0x0018F7E0 */

loc_0018E7EA: ;
    ecx = eax;
    PUSH32(esp, 0x0018E7F1u); RECOMP_ABI_CALL(0x0018F7E0u, sub_0018F7E0); /* call 0x0018F7E0 */

loc_0018E7F1: ;
    ecx = eax;
    PUSH32(esp, 0x0018E7F8u); RECOMP_ABI_CALL(0x0018F7E0u, sub_0018F7E0); /* call 0x0018F7E0 */

loc_0018E7F8: ;
    ecx = eax;
    PUSH32(esp, 0x0018E7FFu); RECOMP_ABI_CALL(0x0018F7E0u, sub_0018F7E0); /* call 0x0018F7E0 */

loc_0018E7FF: ;
    ecx = eax;
    PUSH32(esp, 0x0018E806u); RECOMP_ABI_CALL(0x0018F7E0u, sub_0018F7E0); /* call 0x0018F7E0 */

loc_0018E806: ;
    edx = MEM32(esi);
    eax = esp + 0x7C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0018E812u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E80Fu); } /* indirect call */
    }

loc_0018E812: ;
    SET_LO8(eax, MEM8(esp + 0x2A0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E87A; /* je: equal / zero */

loc_0018E81D: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0018E826u); RECOMP_ABI_CALL(0x001902D0u, sub_001902D0); /* call 0x001902D0 */

loc_0018E826: ;
    PUSH32(esp, 0x14);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    MEM8(esp + 0x28C) = 1;
    PUSH32(esp, 0x0018E83Eu); RECOMP_ABI_CALL(0x00190290u, sub_00190290); /* call 0x00190290 */

loc_0018E83E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018E869; /* jle: less or equal (signed <=) */

loc_0018E845: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2F64D8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0018E851u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E84Eu); } /* indirect call */
    }

loc_0018E851: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x18E8B0);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFFEu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0018E869u); RECOMP_ABI_CALL(0x00190220u, sub_00190220); /* call 0x00190220 */

loc_0018E869: ;
    ecx = esp + 8;
    MEM8(esp + 0x284) = 0;
    PUSH32(esp, 0x0018E87Au); RECOMP_ABI_CALL(0x0019FDA0u, sub_0019FDA0); /* call 0x0019FDA0 */

loc_0018E87A: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x284) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0018E88Eu); RECOMP_ABI_CALL(0x0018FA00u, sub_0018FA00); /* call 0x0018FA00 */

loc_0018E88E: ;
    ecx = MEM32(esp + 0x27C);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x280) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x280;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0018E8B0
 * Original: 0x0018E8B0 - 0x0018E8BF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E8B0(void)
{

loc_0018E8B0: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0018E8BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E8BBu); } /* indirect call */
    }

loc_0018E8BE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018E8C0
 * Original: 0x0018E8C0 - 0x0018E8E1 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E8C0(void)
{

loc_0018E8C0: ;
    ecx = MEM32(0x440A10);
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0018E8D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E8CDu); } /* indirect call */
    }

loc_0018E8D0: ;
    ecx = eax;
    PUSH32(esp, 0x0018E8D7u); RECOMP_ABI_CALL(0x0018F7E0u, sub_0018F7E0); /* call 0x0018F7E0 */

loc_0018E8D7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018E8DDu); RECOMP_ABI_CALL(0x0018F940u, sub_0018F940); /* call 0x0018F940 */

loc_0018E8DD: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018E8F0
 * Original: 0x0018E8F0 - 0x0018E936 (70 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E8F0: ;
    edx = MEM32(ecx + 0x18);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0018E910; /* jle: less or equal (signed <=) */

loc_0018E8FB: ;
    esi = MEM32(ecx + 0x14);
    edi = MEM32(esp + 0x10);
    ecx = esi;

loc_0018E904: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E922; /* je: equal / zero */

loc_0018E908: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018E904; /* jl: less (signed <) */

loc_0018E910: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    MEM8(eax) = LO8(ecx);
    esp += 12; return; /* ret 8 */

loc_0018E922: ;
    eax = esi + eax * 8 + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    MEM8(eax) = LO8(ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018E940
 * Original: 0x0018E940 - 0x0018E98F (79 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018E940: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0018E95Fu); RECOMP_ABI_CALL(0x0018E990u, sub_0018E990); /* call 0x0018E990 */

loc_0018E95F: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018E988; /* jne: not equal / not zero */

loc_0018E964: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    eax = esp;
    PUSH32(esp, ebx);
    MEM8(eax) = 1;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0018E97Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E97Bu); } /* indirect call */
    }

loc_0018E97E: ;
    MEM32(0) = 0;

loc_0018E988: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0018E990
 * Original: 0x0018E990 - 0x0018EA11 (129 bytes, 51 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018E990: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0018E9A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018E9A0u); } /* indirect call */
    }

loc_0018E9A3: ;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 8) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi + 8;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x0018E9BCu); RECOMP_ABI_CALL(0x0018EA20u, sub_0018EA20); /* call 0x0018EA20 */

loc_0018E9BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018EA02; /* jne: not equal / not zero */

loc_0018E9C0: ;
    edx = MEM32(esi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018E9F3; /* jle: less or equal (signed <=) */

loc_0018E9C7: ;
    esi = MEM32(esi + 0x14);
    edi = MEM32(esp + 0x20);
    ecx = esi;

loc_0018E9D0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018E9EB; /* je: equal / zero */

loc_0018E9D4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018E9D0; /* jl: less (signed <) */

loc_0018E9DC: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0018E9EB: ;
    eax = esi + eax * 8 + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018EA02; /* jne: not equal / not zero */

loc_0018E9F3: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0018EA02: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax) = 1;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0018EA20
 * Original: 0x0018EA20 - 0x0018EA7B (91 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EA20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018EA20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0018EA62; /* jle: less or equal (signed <=) */

loc_0018EA2F: ;
    ebp = MEM32(esp + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018EA35: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + edi + 4);
    edx = MEM32(ebp + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018EA57; /* jne: not equal / not zero */

loc_0018EA44: ;
    edx = MEM32(ebp);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018EA50u); RECOMP_ABI_CALL(0x0018F3E0u, sub_0018F3E0); /* call 0x0018F3E0 */

loc_0018EA50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018EA6B; /* je: equal / zero */

loc_0018EA57: ;
    eax = MEM32(esi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018EA35; /* jl: less (signed <) */

loc_0018EA62: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018EA6B: ;
    edx = MEM32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ebx + ebx * 2;
    POP32(esp, ebp);
    eax = edx + ecx * 4 + 8;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018EA80
 * Original: 0x0018EA80 - 0x0018EAC5 (69 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EA80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018EA80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0018EA9Fu); RECOMP_ABI_CALL(0x0018E990u, sub_0018E990); /* call 0x0018E990 */

loc_0018EA9F: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018EABE; /* jne: not equal / not zero */

loc_0018EAA4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    eax = esp;
    PUSH32(esp, ebx);
    MEM8(eax) = 0;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0018EABEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018EABBu); } /* indirect call */
    }

loc_0018EABE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0018EAD0
 * Original: 0x0018EAD0 - 0x0018EB54 (132 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018EAD0: ;
    SET_LO8(eax, MEM8(esp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0018EB1A; /* je: equal / zero */

loc_0018EAE1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018EB4E; /* jle: less or equal (signed <=) */

loc_0018EAE7: ;
    edi = MEM32(ecx);
    ebx = MEM32(esp + 0x10);
    edx = edi;
    /* nop */

loc_0018EAF0: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018EB02; /* je: equal / zero */

loc_0018EAF4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018EAF0; /* jl: less (signed <) */

loc_0018EAFC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0018EB02: ;
    eax = edi + eax * 8 + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018EB4E; /* je: equal / zero */

loc_0018EB0A: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018EB14u); RECOMP_ABI_CALL(0x0018EB60u, sub_0018EB60); /* call 0x0018EB60 */

loc_0018EB14: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0018EB1A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018EB3E; /* jle: less or equal (signed <=) */

loc_0018EB20: ;
    edi = MEM32(ecx);
    ebx = MEM32(esp + 0x10);
    edx = edi;

loc_0018EB28: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018EB36; /* je: equal / zero */

loc_0018EB2C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018EB28; /* jl: less (signed <) */

loc_0018EB34: ;
    goto loc_0018EB3E;

loc_0018EB36: ;
    eax = edi + eax * 8 + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018EB4E; /* jne: not equal / not zero */

loc_0018EB3E: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018EB48u); RECOMP_ABI_CALL(0x0018EBB0u, sub_0018EBB0); /* call 0x0018EBB0 */

loc_0018EB48: ;
    MEM32(eax) = 1;

loc_0018EB4E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018EB60
 * Original: 0x0018EB60 - 0x0018EBB0 (80 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018EB60: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + -1;
    eax = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018EB8C; /* jl: less (signed <) */

loc_0018EB6F: ;
    esi = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    ebx = MEM32(esi);
    esi = edx + eax * 8;
    /* nop */

loc_0018EB80: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018EB97; /* je: equal / zero */

loc_0018EB84: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018EB80; /* jge: greater or equal (signed >=) */

loc_0018EB8C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018EB97: ;
    MEM32(ecx + 4) = edi;
    ecx = MEM32(edx + edi * 8);
    MEM32(edx + eax * 8) = ecx;
    ecx = MEM32(edx + edi * 8 + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + eax * 8 + 4) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018EBB0
 * Original: 0x0018EBB0 - 0x0018EC22 (114 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018EBB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0018EBDD; /* jle: less or equal (signed <=) */

loc_0018EBC3: ;
    edx = MEM32(esi);
    edi = MEM32(ebp);
    ecx = edx;
    /* nop */

loc_0018EBD0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018EC17; /* je: equal / zero */

loc_0018EBD4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018EBD0; /* jl: less (signed <) */

loc_0018EBDD: ;
    eax = MEM32(esi + 8);
    edi = ebx + 1;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018EC00; /* jge: greater or equal (signed >=) */

loc_0018EBEC: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018EBF4; /* jl: less (signed <) */

loc_0018EBF2: ;
    eax = edi;

loc_0018EBF4: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018EBFDu); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_0018EBFD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018EC00: ;
    eax = MEM32(esi);
    MEM32(esi + 4) = edi;
    ecx = MEM32(ebp);
    POP32(esp, edi);
    eax = eax + ebx * 8;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018EC17: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = edx + eax * 8 + 4;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018EC30
 * Original: 0x0018EC30 - 0x0018EC58 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018EC30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0018EC38u); RECOMP_ABI_CALL(0x0018EC60u, sub_0018EC60); /* call 0x0018EC60 */

loc_0018EC38: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0018EC52; /* je: equal / zero */

loc_0018EC3F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0018EC52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018EC4Fu); } /* indirect call */
    }

loc_0018EC52: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018EC60
 * Original: 0x0018EC60 - 0x0018ECE7 (135 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018EC60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2440F3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 1;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0018ECA8; /* js: sign (negative) */

loc_0018EC8C: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(0x4409AC);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x0018ECA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018ECA4u); } /* indirect call */
    }

loc_0018ECA7: ;
    POP32(esp, edi);

loc_0018ECA8: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x10) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0018ECD1; /* js: sign (negative) */

loc_0018ECB4: ;
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
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018ECD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018ECCEu); } /* indirect call */
    }

loc_0018ECD1: ;
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
 * sub_0018ECF0
 * Original: 0x0018ECF0 - 0x0018ED88 (152 bytes, 67 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ECF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018ECF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018ED32; /* jle: less or equal (signed <=) */

loc_0018ED03: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018ED05: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + ebx + 4);
    edx = MEM32(ebp + 4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018ED27; /* jne: not equal / not zero */

loc_0018ED14: ;
    edx = MEM32(ebp);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018ED20u); RECOMP_ABI_CALL(0x0018F3E0u, sub_0018F3E0); /* call 0x0018F3E0 */

loc_0018ED20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018ED78; /* je: equal / zero */

loc_0018ED27: ;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018ED05; /* jl: less (signed <) */

loc_0018ED32: ;
    ebx = MEM32(esi + 4);
    eax = MEM32(esi + 8);
    edi = ebx + 1;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018ED58; /* jge: greater or equal (signed >=) */

loc_0018ED44: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018ED4C; /* jl: less (signed <) */

loc_0018ED4A: ;
    eax = edi;

loc_0018ED4C: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0018ED55u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_0018ED55: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0018ED58: ;
    ecx = MEM32(esi);
    MEM32(esi + 4) = edi;
    edx = MEM32(ebp);
    eax = ebx + ebx * 2;
    eax = ecx + eax * 4;
    POP32(esp, edi);
    MEM32(eax) = edx;
    ecx = MEM32(ebp + 4);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018ED78: ;
    edx = MEM32(esi);
    ecx = edi + edi * 2;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = edx + ecx * 4 + 8;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018ED90
 * Original: 0x0018ED90 - 0x0018EDEF (95 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ED90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018ED90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0018EDA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018ED9Fu); } /* indirect call */
    }

loc_0018EDA2: ;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x0018EDBDu); RECOMP_ABI_CALL(0x0018EA20u, sub_0018EA20); /* call 0x0018EA20 */

loc_0018EDBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018EDDA; /* jne: not equal / not zero */

loc_0018EDC1: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0018EDCDu); RECOMP_ABI_CALL(0x0018ECF0u, sub_0018ECF0); /* call 0x0018ECF0 */

loc_0018EDCD: ;
    MEM32(eax) = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0018EDDA: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0018EDE6u); RECOMP_ABI_CALL(0x0018ECF0u, sub_0018ECF0); /* call 0x0018ECF0 */

loc_0018EDE6: ;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018EDF0
 * Original: 0x0018EDF0 - 0x0018EE4B (91 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018EDF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0018EE02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018EDFFu); } /* indirect call */
    }

loc_0018EE02: ;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x0018EE1Du); RECOMP_ABI_CALL(0x0018EA20u, sub_0018EA20); /* call 0x0018EA20 */

loc_0018EE1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018EE44; /* je: equal / zero */

loc_0018EE21: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0018EE2Du); RECOMP_ABI_CALL(0x0018ECF0u, sub_0018ECF0); /* call 0x0018ECF0 */

loc_0018EE2D: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0018EE44; /* jne: not equal / not zero */

loc_0018EE38: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0018EE44u); RECOMP_ABI_CALL(0x0018EE50u, sub_0018EE50); /* call 0x0018EE50 */

loc_0018EE44: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018EE50
 * Original: 0x0018EE50 - 0x0018EECA (122 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EE50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018EE50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx + 4);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    if ((_fas < 0)) goto loc_0018EE90; /* js: sign (negative) */

loc_0018EE5C: ;
    ebp = MEM32(esp + 0x14);
    edi = esi + esi * 2;
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0018EE66: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + edi + 4);
    edx = MEM32(ebp + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018EE88; /* jne: not equal / not zero */

loc_0018EE75: ;
    edx = MEM32(ebp);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018EE81u); RECOMP_ABI_CALL(0x0018F3E0u, sub_0018F3E0); /* call 0x0018F3E0 */

loc_0018EE81: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018EE9C; /* je: equal / zero */

loc_0018EE88: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018EE66; /* jge: greater or equal (signed >=) */

loc_0018EE90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0018EE9C: ;
    eax = MEM32(ebx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 4) = eax;
    ebx = MEM32(ebx);
    ecx = eax + eax * 2;
    edx = ebx + ecx * 4;
    eax = esi + esi * 2;
    ecx = ebx + eax * 4;
    eax = MEM32(edx);
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    POP32(esp, edi);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edx + 8);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 8) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018EED0
 * Original: 0x0018EED0 - 0x0018F056 (390 bytes, 115 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018EED0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x244116);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    SET_LO8(edx, MEM8(0x4409F8));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F044; /* je: equal / zero */

loc_0018EEFC: ;
    PUSH32(esp, 0x4030);
    PUSH32(esp, 0x0018EF06u); RECOMP_ABI_CALL(0x001F7180u, sub_001F7180); /* call 0x001F7180 */

loc_0018EF06: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0018EF1E; /* je: equal / zero */

loc_0018EF15: ;
    ecx = eax;
    PUSH32(esp, 0x0018EF1Cu); RECOMP_ABI_CALL(0x0018DB10u, sub_0018DB10); /* call 0x0018DB10 */

loc_0018EF1C: ;
    goto loc_0018EF20;

loc_0018EF1E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0018EF20: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0018EF2Fu); RECOMP_ABI_CALL(0x0018D4D0u, sub_0018D4D0); /* call 0x0018D4D0 */

loc_0018EF2F: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0018EF41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018EF3Eu); } /* indirect call */
    }

loc_0018EF41: ;
    esi = eax;
    MEM16(esi + 4) = 8;
    MEM16(esi + 6) = 1;
    MEM32(esi) = 0x2F6420;
    eax = MEM32(0x440A14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018EF71; /* je: equal / zero */

loc_0018EF5E: ;
    ecx = eax;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018EF71; /* jne: not equal / not zero */

loc_0018EF6B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0018EF71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018EF6Fu); } /* indirect call */
    }

loc_0018EF71: ;
    ecx = MEM32(0x4409AC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    MEM32(0x440A14) = esi;
    eax = MEM32(ecx);
    PUSH32(esp, 0x20);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0018EF86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018EF83u); } /* indirect call */
    }

loc_0018EF86: ;
    MEM16(eax + 4) = 0x20;
    MEM32(esp + 8) = eax;
    ecx = eax;
    MEM32(esp + 0x14) = 1;
    PUSH32(esp, 0x0018EF9Fu); RECOMP_ABI_CALL(0x0018DD30u, sub_0018DD30); /* call 0x0018DD30 */

loc_0018EF9F: ;
    esi = eax;
    eax = MEM32(0x440A10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_0018EFC5; /* je: equal / zero */

loc_0018EFB2: ;
    ecx = eax;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018EFC5; /* jne: not equal / not zero */

loc_0018EFBF: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0018EFC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018EFC3u); } /* indirect call */
    }

loc_0018EFC5: ;
    ecx = MEM32(0x4409AC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    MEM32(0x440A10) = esi;
    eax = MEM32(ecx);
    PUSH32(esp, 0x20);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0018EFDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018EFD7u); } /* indirect call */
    }

loc_0018EFDA: ;
    esi = eax;
    MEM16(esi + 4) = 0x20;
    MEM16(esi + 6) = 1;
    MEM32(esi) = 0x2F6498;
    eax = 0x80000000u;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(0x4409DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F021; /* je: equal / zero */

loc_0018F00E: ;
    ecx = eax;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = MEM16(eax) - 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018F021; /* jne: not equal / not zero */

loc_0018F01B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0018F021u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F01Fu); } /* indirect call */
    }

loc_0018F021: ;
    MEM32(0x4409DC) = esi;
    PUSH32(esp, 0x0018F02Cu); RECOMP_ABI_CALL(0x0018E3E0u, sub_0018E3E0); /* call 0x0018E3E0 */

loc_0018F02C: ;
    ecx = MEM32(0x4409F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0018F037u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F034u); } /* indirect call */
    }

loc_0018F037: ;
    MEM8(0x4409F8) = 1;
    PUSH32(esp, 0x0018F043u); RECOMP_ABI_CALL(0x0018DC70u, sub_0018DC70); /* call 0x0018DC70 */

loc_0018F043: ;
    POP32(esp, esi);

loc_0018F044: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018F060
 * Original: 0x0018F060 - 0x0018F07E (30 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F060: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018F07D; /* jl: less (signed <) */

loc_0018F069: ;
    ecx = MEM32(ecx);
    goto loc_0018F070;

    /* nop */

loc_0018F070: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018F07D; /* jne: not equal / not zero */

loc_0018F075: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018F070; /* jle: less or equal (signed <=) */

loc_0018F07D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018F080
 * Original: 0x0018F080 - 0x0018F092 (18 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F080: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + eax * 4 + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018F0A0
 * Original: 0x0018F0A0 - 0x0018F0B6 (22 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F0A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F0A0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 8);
    MEM32(ecx + eax * 4 + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018F0C0
 * Original: 0x0018F0C0 - 0x0018F0E1 (33 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F0C0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018F0DE; /* jg: greater (signed >) */

loc_0018F0CC: ;
    ecx = MEM32(ecx);
    ecx = ecx + eax * 4;

loc_0018F0D1: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018F0DE; /* jne: not equal / not zero */

loc_0018F0D6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018F0D1; /* jle: less or equal (signed <=) */

loc_0018F0DE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018F0F0
 * Original: 0x0018F0F0 - 0x0018F105 (21 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F0F0: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    eax = MEM32(esp + 4);
    SET_LO8(ecx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    MEM8(eax) = LO8(ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018F110
 * Original: 0x0018F110 - 0x0018F18B (123 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018F110: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(esi + 8);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0018F12E; /* jle: less or equal (signed <=) */

loc_0018F122: ;
    edx = eax + eax + 2;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0018F12Eu); RECOMP_ABI_CALL(0x0018F2F0u, sub_0018F2F0); /* call 0x0018F2F0 */

loc_0018F12E: ;
    edi = MEM32(esp + 0x14);
    edx = MEM32(esi + 8);
    ecx = MEM32(esi);
    eax = edi;
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x9E3779B1u);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F160; /* je: equal / zero */

loc_0018F14A: ;
    /* nop */

loc_0018F150: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F160; /* je: equal / zero */

loc_0018F155: ;
    ebx = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + eax * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018F150; /* jne: not equal / not zero */

loc_0018F160: ;
    ebp = MEM32(ecx + eax * 4);
    ebx = MEM32(esi + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = ebx;
    MEM32(ecx + eax * 4) = edi;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(edx + ecx * 4 + 4) = eax;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0018F190
 * Original: 0x0018F190 - 0x0018F1C6 (54 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F190: ;
    edx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x9E3779B1u);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esi + eax * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F1BE; /* je: equal / zero */

loc_0018F1AF: ;
    /* nop */

loc_0018F1B0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F1C1; /* je: equal / zero */

loc_0018F1B4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esi + eax * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018F1B0; /* jne: not equal / not zero */

loc_0018F1BE: ;
    eax = edx + 1;

loc_0018F1C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018F1D0
 * Original: 0x0018F1D0 - 0x0018F287 (183 bytes, 72 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F1D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018F1D0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    MEM32(ecx + 4) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(eax + edi * 4) = 0;
    esi = MEM32(ecx + 8);
    edx = MEM32(ecx);
    eax = esi + edi;
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F20A; /* je: equal / zero */

loc_0018F1F8: ;
    ebx = edx;
    /* nop */

loc_0018F200: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + eax * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018F200; /* jne: not equal / not zero */

loc_0018F20A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = eax;
    eax = edi + 1;
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F280; /* je: equal / zero */

loc_0018F21C: ;
    /* nop */

loc_0018F220: ;
    ebx = MEM32(ecx);
    ebp = MEM32(ebx + eax * 4);
    edx = ebp;
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x9E3779B1u);
    edx = edx & esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0018F23E; /* jb: below (unsigned <) */

loc_0018F23A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0018F272; /* ja: above (unsigned >) */

loc_0018F23E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0018F24A; /* jae: above or equal (unsigned >=) */

loc_0018F242: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0018F272; /* ja: above (unsigned >) */

loc_0018F246: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0018F272; /* jbe: below or equal (unsigned <=) */

loc_0018F24A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0018F252; /* jbe: below or equal (unsigned <=) */

loc_0018F24E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0018F272; /* jb: below (unsigned <) */

loc_0018F252: ;
    MEM32(ebx + edi * 4) = ebp;
    edx = MEM32(ecx + 8);
    esi = MEM32(ecx);
    ebx = edx + eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esi + ebx * 4 + 4);
    MEM32(esi + edx * 4 + 4) = edi;
    edx = MEM32(ecx);
    MEM32(edx + eax * 4) = 0;
    edi = eax;

loc_0018F272: ;
    esi = MEM32(ecx + 8);
    edx = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018F220; /* jne: not equal / not zero */

loc_0018F280: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018F290
 * Original: 0x0018F290 - 0x0018F2C9 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F290: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x80);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0018F2A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F2A2u); } /* indirect call */
    }

loc_0018F2A5: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi) = eax;
    PUSH32(esp, 0x0018F2B4u); RECOMP_ABI_CALL(0x0018F4E0u, sub_0018F4E0); /* call 0x0018F4E0 */

loc_0018F2B4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0xF;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018F2D0
 * Original: 0x0018F2D0 - 0x0018F2F0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F2D0(void)
{

loc_0018F2D0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = ecx;
    esi = MEM32(eax + 8);
    ecx = MEM32(0x4409AC);
    eax = MEM32(eax);
    edx = MEM32(ecx);
    PUSH32(esp, 0x12);
    esi = esi * 8 + 8;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0018F2EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F2EBu); } /* indirect call */
    }

loc_0018F2EE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018F2F0
 * Original: 0x0018F2F0 - 0x0018F387 (151 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F2F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018F2F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(0x4409AC);
    edi = MEM32(esi + 8);
    eax = MEM32(ecx);
    ebp = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    edx = ebx * 8;
    PUSH32(esp, edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0018F315u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F312u); } /* indirect call */
    }

loc_0018F315: ;
    ecx = ebx * 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi) = eax;
    PUSH32(esp, 0x0018F327u); RECOMP_ABI_CALL(0x0018F4E0u, sub_0018F4E0); /* call 0x0018F4E0 */

loc_0018F327: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 8) = ebx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 4) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0018F36A; /* jle: less or equal (signed <=) */

loc_0018F33B: ;
    edx = ebp + edi * 4;
    MEM32(esp + 0x14) = edx;

loc_0018F343: ;
    eax = MEM32(ebp + ebx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F35A; /* je: equal / zero */

loc_0018F34B: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0018F35Au); RECOMP_ABI_CALL(0x0018F110u, sub_0018F110); /* call 0x0018F110 */

loc_0018F35A: ;
    ecx = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0018F343; /* jl: less (signed <) */

loc_0018F36A: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    edx = edi * 8;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0018F380u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0018F37Du); } /* indirect call */
    }

loc_0018F380: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018F390
 * Original: 0x0018F390 - 0x0018F395 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018F390: ;
    g_seh_ebp = ebp; sub_00238ADC(); return; /* tail jmp 0x00238ADC */

}

/**
 * sub_0018F3A0
 * Original: 0x0018F3A0 - 0x0018F3BD (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F3A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F3A0: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0018F3B9u); RECOMP_ABI_CALL(0x00238ADCu, sub_00238ADC); /* call 0x00238ADC */

loc_0018F3B9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018F3C0
 * Original: 0x0018F3C0 - 0x0018F3D8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F3C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F3C0: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0018F3D4u); RECOMP_ABI_CALL(0x002380E4u, sub_002380E4); /* call 0x002380E4 */

loc_0018F3D4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018F3E0
 * Original: 0x0018F3E0 - 0x0018F45A (122 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F3E0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0018F3F0: ;
    SET_LO8(eax, MEM8(edi + esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018F3FC; /* jne: not equal / not zero */

loc_0018F3F7: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F444; /* je: equal / zero */

loc_0018F3FC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x41 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018F40B; /* jl: less (signed <) */

loc_0018F400: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018F40B; /* jg: greater (signed >) */

loc_0018F404: ;
    SET_LO8(ebx, LO8(eax));
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + 0x20);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    goto loc_0018F40D;

loc_0018F40B: ;
    SET_LO8(ebx, LO8(eax));

loc_0018F40D: ;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x41 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018F420; /* jl: less (signed <) */

loc_0018F414: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018F420; /* jg: greater (signed >) */

loc_0018F419: ;
    SET_LO8(edx, LO8(ecx));
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 0x20);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    goto loc_0018F422;

loc_0018F420: ;
    SET_LO8(edx, LO8(ecx));

loc_0018F422: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(edx) (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018F44A; /* jl: less (signed <) */

loc_0018F426: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x41 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018F430; /* jl: less (signed <) */

loc_0018F42A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018F430; /* jg: greater (signed >) */

loc_0018F42E: ;
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_0018F430: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x41 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0018F43D; /* jl: less (signed <) */

loc_0018F435: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018F43D; /* jg: greater (signed >) */

loc_0018F43A: ;
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 0x20);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_0018F43D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0018F451; /* jg: greater (signed >) */

loc_0018F441: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0018F3F0;

loc_0018F444: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0018F44A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0018F451: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018F460
 * Original: 0x0018F460 - 0x0018F472 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018F460: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018F471; /* je: equal / zero */

loc_0018F468: ;
    MEM32(esp + 0xC) = eax;
    g_seh_ebp = ebp; sub_00237FC0(); return; /* tail jmp 0x00237FC0 */

loc_0018F471: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018F480
 * Original: 0x0018F480 - 0x0018F491 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F480: ;
    eax = MEM32(esp + 4);
    edx = eax + 1;

loc_0018F487: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0018F487; /* jne: not equal / not zero */

loc_0018F48E: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_0018F4A0
 * Original: 0x0018F4A0 - 0x0018F4A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F4A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018F4A0: ;
    g_seh_ebp = ebp; sub_00238BD0(); return; /* tail jmp 0x00238BD0 */

}

/**
 * sub_0018F4B0
 * Original: 0x0018F4B0 - 0x0018F4CF (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F4B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F4B0: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
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
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
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
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018F4D0
 * Original: 0x0018F4D0 - 0x0018F4D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F4D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018F4D0: ;
    g_seh_ebp = ebp; sub_00238C00(); return; /* tail jmp 0x00238C00 */

}

/**
 * sub_0018F4E0
 * Original: 0x0018F4E0 - 0x0018F50B (43 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F4E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018F4E0: ;
    SET_LO8(eax, MEM8(esp + 8));
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(eax));
    SET_HI8(ebx, LO8(ebx));
    edx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(eax, LO16(ebx));
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
