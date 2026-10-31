/**
 * Mercenaries - Recompiled code chunk 25
 * Functions: 250 (0x0014C870 - 0x001547E0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0014C870
 * Original: 0x0014C870 - 0x0014C885 (21 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014C870: ;
    MEM32(ecx) = 0x2F1FEC;
    MEM32(ecx + 0x80) = 0x2E6470;
    g_seh_ebp = ebp; sub_001FA0A0(); return; /* tail jmp 0x001FA0A0 */

}

/**
 * sub_0014C890
 * Original: 0x0014C890 - 0x0014C8B8 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014C890: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x37A6D8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014C8A1u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014C8A1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014C8B0; /* jge: greater or equal (signed >=) */

loc_0014C8A8: ;
    eax = 0x37A4D4;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

loc_0014C8B0: ;
    eax = MEM32(eax * 4 + 0x37A4D8);
    esp += 4; return; /* ret */

}

/**
 * sub_0014C8C0
 * Original: 0x0014C8C0 - 0x0014C928 (104 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014C8C0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0014C915; /* jne: not equal / not zero */

loc_0014C8CA: ;
    eax = esi + 0x30;
    PUSH32(esp, eax);
    ecx = esi + 0xA0;
    PUSH32(esp, 0x0014C8D9u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0014C8D9: ;
    edx = MEM32(esi + 0x74);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x7C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    ecx = esi + 0x80;
    MEM32(ecx + 0x64) = edx;
    MEMF(ecx + 0x68) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x6C) = xmm0.f[0]; /* movss */
    SET_LO8(eax, MEM8(esi + 0x70));
    edx = MEM32(ecx);
    MEM32(esi + 0xE0) = 0x2040FF00;
    MEM8(esi + 0xF0) = LO8(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0014C911u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014C90Eu); } /* indirect call */
    }

loc_0014C911: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0014C915: ;
    eax = MEM32(esi + 0x80);
    ecx = esi + 0x80;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0014C924u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014C921u); } /* indirect call */
    }

loc_0014C924: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014C930
 * Original: 0x0014C930 - 0x0014C9E8 (184 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014C930: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014C938u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_0014C938: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x2F1FEC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x88) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = eax;
    MEMF(esi + 0xE4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xEC) = xmm0.f[0]; /* movss */
    MEM8(esi + 0xF0) = LO8(eax);
    MEM32(esi + 0x80) = 0x2F200C;
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014C9F0
 * Original: 0x0014C9F0 - 0x0014CA0E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014C9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014C9F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014C9F8u); RECOMP_ABI_CALL(0x0014C870u, sub_0014C870); /* call 0x0014C870 */

loc_0014C9F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014CA08; /* je: equal / zero */

loc_0014C9FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014CA05u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0014CA05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014CA08: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014CA10
 * Original: 0x0014CA10 - 0x0014CAFF (239 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014CA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014CA10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, esi);
    ecx = edi + 0x30;
    PUSH32(esp, 0x0014CA21u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0014CA21: ;
    eax = MEM32(esi + 0x40);
    MEM32(edi + 0x74) = eax;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 0x3F);
    eax = esi + 0x354;
    MEM32(edi + 0x78) = ecx;
    edx = MEM32(esi + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5127F14D);
    MEM32(edi + 0x7C) = edx;
    PUSH32(esp, 0x0014CA46u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014CA46: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014CA55; /* jge: greater or equal (signed >=) */

loc_0014CA4D: ;
    eax = esi + 0x250;
    goto loc_0014CA5C;

loc_0014CA55: ;
    eax = esi + eax * 4 + 0x254;

loc_0014CA5C: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014CA64u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0014CA64: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70C67E32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70C67E32 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014CA74; /* jne: not equal / not zero */

loc_0014CA6E: ;
    MEM8(edi + 0x70) = 0;
    goto loc_0014CA7F;

loc_0014CA74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAFD98518u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAFD98518u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014CA7F; /* jne: not equal / not zero */

loc_0014CA7B: ;
    MEM8(edi + 0x70) = 1;

loc_0014CA7F: ;
    PUSH32(esp, 0x3F);
    ecx = esi + 0x354;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8D39BDE6u);
    PUSH32(esp, 0x0014CA92u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014CA92: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014CAA1; /* jge: greater or equal (signed >=) */

loc_0014CA99: ;
    eax = esi + 0x250;
    goto loc_0014CAA8;

loc_0014CAA1: ;
    eax = esi + eax * 4 + 0x254;

loc_0014CAA8: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014CAD9; /* je: equal / zero */

loc_0014CAAE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014CAB4u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0014CAB4: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x37A6D8);
    PUSH32(esp, eax);
    MEM32(edi + 0x28) = eax;
    PUSH32(esp, 0x0014CAC4u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_0014CAC4: ;
    MEM32(eax * 4 + 0x37A4D8) = edi;
    eax = MEM32(0x37A4D0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x37A4D0) = eax;

loc_0014CAD9: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0014CAE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014CADDu); } /* indirect call */
    }

loc_0014CAE0: ;
    PUSH32(esp, 0);
    esi = edi + 0x80;
    PUSH32(esp, esi);
    ecx = 0x37A8D8;
    PUSH32(esp, 0x0014CAF3u); RECOMP_ABI_CALL(0x0020AF60u, sub_0020AF60); /* call 0x0020AF60 */

loc_0014CAF3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0014CAFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014CAF7u); } /* indirect call */
    }

loc_0014CAFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014CB00
 * Original: 0x0014CB00 - 0x0014CB29 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014CB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014CB00: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37A4B0);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014CB1E; /* je: equal / zero */

loc_0014CB0E: ;
    edi = edi;

loc_0014CB10: ;
    eax = MEM32(ecx);
    esi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0014CB17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014CB14u); } /* indirect call */
    }

loc_0014CB17: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014CB10; /* jne: not equal / not zero */

loc_0014CB1E: ;
    ecx = 0x37A8D8;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00209700(); return; /* tail jmp 0x00209700 */

}

/**
 * sub_0014CB30
 * Original: 0x0014CB30 - 0x0014CCF2 (450 bytes, 119 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0014CB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0014CB30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x70));
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014CBB1; /* jne: not equal / not zero */

loc_0014CB46: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    eax = esi + 0x60;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp + 8);
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x14); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 0x10) = edx;
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x10); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEM32(esp + 0xC) = ecx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    goto loc_0014CCE4;

loc_0014CBB1: ;
    ecx = esi + 0x60;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0xC) = edx;
    edx = esi + 0x30;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x34;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CBD5u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0014CBD5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014CC66u); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_0014CC66: ;
    eax = MEM32(esp + 0x24);
    xmm3 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    xmm1 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x7C)); /* movss */
    MEM32(esp + 0xC) = eax;
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014CCE8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_0014CCAC: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm4.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014CCE8; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm5.f[0]) */

loc_0014CCBB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014CCE8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0014CCC6: ;
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014CCE8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_0014CCD2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014CCE8; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0014CCDD: ;
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */

loc_0014CCE4: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014CCE8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0014CCE6: ;
    SET_LO8(ebx, 1);

loc_0014CCE8: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014CD00
 * Original: 0x0014CD00 - 0x0014CD30 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014CD00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014CD00: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x660E4490);
    esi = ecx;
    PUSH32(esp, 0x0014CD10u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_0014CD10: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0014CD1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014CD1Cu); } /* indirect call */
    }

loc_0014CD1F: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0014CD2Bu); RECOMP_ABI_CALL(0x0014CB30u, sub_0014CB30); /* call 0x0014CB30 */

loc_0014CD2B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0014CD30
 * Original: 0x0014CD30 - 0x0014CD9C (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014CD30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014CD30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014CD38u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_0014CD38: ;
    MEM32(esi) = 0x2F202C;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM16(esi + 0x24) = LO16(ecx);
    SET_LO16(eax, MEM16(0x413FE0));
    MEM16(esi + 0x26) = LO16(eax);
    MEM32(esi + 0x70) = ecx;
    MEM32(esi + 0x74) = ecx;
    eax = esi + 0x68;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x78;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(0x413FE0);
    MEM32(eax * 4 + 0x413D68) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x413FE0) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    PUSH32(esp, ecx);
    edx = esi + 0x28;
    PUSH32(esp, 0x2DD608);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014CD95u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0014CD95: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014CDA0
 * Original: 0x0014CDA0 - 0x0014CDAC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014CDA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014CDA0: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0014CDB0(); return; /* tail jmp 0x0014CDB0 */

}

/**
 * sub_0014CDB0
 * Original: 0x0014CDB0 - 0x0014CE0D (93 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014CDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014CDB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014CE08; /* je: equal / zero */

loc_0014CDC2: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x1C);
    edx = MEM32(ecx + 0x20);
    MEM32(ecx + 0x24) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x20);
    edx = MEM32(ecx + 0x1C);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0014CDEB; /* je: equal / zero */

loc_0014CDE5: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0014CDEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014CDE9u); } /* indirect call */
    }

loc_0014CDEB: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFF00u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014CDC2; /* jne: not equal / not zero */

loc_0014CE08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014CE10
 * Original: 0x0014CE10 - 0x0014CE57 (71 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014CE10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014CE10: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x1C;
    PUSH32(esp, edi);
    MEM32(ecx + 0x74) = MEM32(ecx + 0x74) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = MEM32(eax);
    edi = MEM32(eax + 4);
    MEM32(eax + 8) = 0;
    MEM32(esi + 4) = edi;
    esi = MEM32(eax + 4);
    edi = MEM32(eax);
    MEM32(esi) = edi;
    esi = MEM32(ecx + 0x84);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = esi;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014CE60
 * Original: 0x0014CE60 - 0x0014CEA5 (69 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014CE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014CE60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014CE75; /* je: equal / zero */

loc_0014CE6A: ;
    PUSH32(esp, eax);
    ecx = 0x37A4D0;
    PUSH32(esp, 0x0014CE75u); RECOMP_ABI_CALL(0x0014C7E0u, sub_0014C7E0); /* call 0x0014C7E0 */

loc_0014CE75: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0014CE7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014CE79u); } /* indirect call */
    }

loc_0014CE7C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0014CE83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014CE80u); } /* indirect call */
    }

loc_0014CE83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014CE92; /* jne: not equal / not zero */

loc_0014CE87: ;
    PUSH32(esp, esi);
    ecx = 0x37A448;
    PUSH32(esp, 0x0014CE92u); RECOMP_ABI_CALL(0x0014CE10u, sub_0014CE10); /* call 0x0014CE10 */

loc_0014CE92: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = 0x37A8D8;
    PUSH32(esp, 0x0014CEA3u); RECOMP_ABI_CALL(0x0020AF90u, sub_0020AF90); /* call 0x0020AF90 */

loc_0014CEA3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014CEB0
 * Original: 0x0014CEB0 - 0x0014CEBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014CEB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014CEB0: ;
    MEM32(ecx) = 0x2F2040;
    g_seh_ebp = ebp; sub_0014C870(); return; /* tail jmp 0x0014C870 */

}

/**
 * sub_0014CEC0
 * Original: 0x0014CEC0 - 0x0014CF17 (87 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014CEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014CEC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x128);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CED8; /* je: equal / zero */

loc_0014CED2: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0014CED8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014CED5u); } /* indirect call */
    }

loc_0014CED8: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x230)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    ecx = MEM32(esi + 0x21C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x228); /* mulss */
    MEMF(esi + 0x228) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0014CF12; /* je: equal / zero */

loc_0014CF0C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0014CF12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014CF0Fu); } /* indirect call */
    }

loc_0014CF12: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014CF20
 * Original: 0x0014CF20 - 0x0014CF48 (40 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014CF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014CF20: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x128);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014CF32; /* je: equal / zero */

loc_0014CF2D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0014CF32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014CF2Fu); } /* indirect call */
    }

loc_0014CF32: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x128) = ecx;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CF45; /* je: equal / zero */

loc_0014CF41: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0014CF45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014CF43u); } /* indirect call */
    }

loc_0014CF45: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014CF50
 * Original: 0x0014CF50 - 0x0014CF78 (40 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014CF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014CF50: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x21C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014CF62; /* je: equal / zero */

loc_0014CF5D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0014CF62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014CF5Fu); } /* indirect call */
    }

loc_0014CF62: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x21C) = ecx;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0014CF75; /* je: equal / zero */

loc_0014CF71: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0014CF75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014CF73u); } /* indirect call */
    }

loc_0014CF75: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014CF80
 * Original: 0x0014CF80 - 0x0014CFBC (60 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014CF80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014CF80: ;
    eax = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x228); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014CFA2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x228)) */

loc_0014CF91: ;
    ecx = eax;
    eax = ecx + 0x154;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0014CF50(); return; /* tail jmp 0x0014CF50 */

loc_0014CFA2: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x228)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014CFB9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xC)) */

loc_0014CFB0: ;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0x228) = ecx;

loc_0014CFB9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014CFC0
 * Original: 0x0014CFC0 - 0x0014D005 (69 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014CFC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014CFC0: ;
    eax = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x228); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014CFE2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x228)) */

loc_0014CFD1: ;
    ecx = eax;
    eax = ecx + 0x17C;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0014CF50(); return; /* tail jmp 0x0014CF50 */

loc_0014CFE2: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x228)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014D002; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xC)) */

loc_0014CFF0: ;
    ecx = MEM32(ecx + 4);
    edx = ecx + 0x12C;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0014CF50(); return; /* tail jmp 0x0014CF50 */

loc_0014D002: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014D010
 * Original: 0x0014D010 - 0x0014D055 (69 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014D010: ;
    eax = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x228); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014D032; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x228)) */

loc_0014D021: ;
    ecx = eax;
    eax = ecx + 0x1A4;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0014CF50(); return; /* tail jmp 0x0014CF50 */

loc_0014D032: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x228)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014D052; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xC)) */

loc_0014D040: ;
    ecx = MEM32(ecx + 4);
    edx = ecx + 0x154;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0014CF50(); return; /* tail jmp 0x0014CF50 */

loc_0014D052: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014D060
 * Original: 0x0014D060 - 0x0014D0A5 (69 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014D060: ;
    eax = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x228); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014D082; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x228)) */

loc_0014D071: ;
    ecx = eax;
    eax = ecx + 0x1CC;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0014CF50(); return; /* tail jmp 0x0014CF50 */

loc_0014D082: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x228)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014D0A2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xC)) */

loc_0014D090: ;
    ecx = MEM32(ecx + 4);
    edx = ecx + 0x17C;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0014CF50(); return; /* tail jmp 0x0014CF50 */

loc_0014D0A2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014D0B0
 * Original: 0x0014D0B0 - 0x0014D0F5 (69 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014D0B0: ;
    eax = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x228); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014D0D2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x228)) */

loc_0014D0C1: ;
    ecx = eax;
    eax = ecx + 0x1F4;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0014CF50(); return; /* tail jmp 0x0014CF50 */

loc_0014D0D2: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x228)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014D0F2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xC)) */

loc_0014D0E0: ;
    ecx = MEM32(ecx + 4);
    edx = ecx + 0x1A4;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0014CF50(); return; /* tail jmp 0x0014CF50 */

loc_0014D0F2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014D100
 * Original: 0x0014D100 - 0x0014D13D (61 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014D100: ;
    eax = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x228); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014D11D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x228)) */

loc_0014D111: ;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x228) = ecx;

loc_0014D11A: ;
    esp += 8; return; /* ret 4 */

loc_0014D11D: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x228)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014D11A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0xC)) */

loc_0014D12B: ;
    ecx = MEM32(ecx + 4);
    edx = ecx + 0x1CC;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0014CF50(); return; /* tail jmp 0x0014CF50 */

}

/**
 * sub_0014D140
 * Original: 0x0014D140 - 0x0014D196 (86 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D140(void)
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

loc_0014D140: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x0014D14Bu); RECOMP_ABI_CALL(0x0014CD00u, sub_0014CD00); /* call 0x0014CD00 */

loc_0014D14B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014D18A; /* jne: not equal / not zero */

loc_0014D14F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* comiss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014D192; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC08C)) */

loc_0014D168: ;
    PUSH32(esp, 0x20808080);
    ecx = 0x35D5F0;
    PUSH32(esp, 0x0014D177u); RECOMP_ABI_CALL(0x000ECAC0u, sub_000ECAC0); /* call 0x000ECAC0 */

loc_0014D177: ;
    ecx = MEM32(esi + 4);
    eax = ecx + 0x10C;
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0014CF20(); return; /* tail jmp 0x0014CF20 */

loc_0014D18A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */

loc_0014D192: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014D1A0
 * Original: 0x0014D1A0 - 0x0014D1AE (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D1A0(void)
{

loc_0014D1A0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0014D1B0
 * Original: 0x0014D1B0 - 0x0014D21E (110 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D1B0(void)
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

loc_0014D1B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x0014D1BBu); RECOMP_ABI_CALL(0x0014CD00u, sub_0014CD00); /* call 0x0014CD00 */

loc_0014D1BB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014D202; /* jne: not equal / not zero */

loc_0014D1BF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* comiss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014D21A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC08C)) */

loc_0014D1E0: ;
    PUSH32(esp, 0x50808080);
    ecx = 0x35D5F0;
    PUSH32(esp, 0x0014D1EFu); RECOMP_ABI_CALL(0x000ECAC0u, sub_000ECAC0); /* call 0x000ECAC0 */

loc_0014D1EF: ;
    ecx = MEM32(esi + 4);
    eax = ecx + 0x11C;
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0014CF20(); return; /* tail jmp 0x0014CF20 */

loc_0014D202: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */

loc_0014D21A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014D220
 * Original: 0x0014D220 - 0x0014D29C (124 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014D220: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0014D298; /* je: equal / zero */

loc_0014D22B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xF);
    ebx = esi + 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014D238u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014D238: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014D297; /* jl: less (signed <) */

loc_0014D23F: ;
    MEM32(esi + eax * 4 + 0x48) = 0;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    edi = eax + 1;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi & 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = edx;
    eax = MEM32(esi + edi * 4 + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014D296; /* je: equal / zero */

loc_0014D25B: ;
    goto loc_0014D260;

    /* nop */

loc_0014D260: ;
    eax = MEM32(esi + edi * 4 + 0x48);
    MEM32(esi + edi * 4 + 0x48) = 0;
    ecx = MEM32(esi);
    PUSH32(esp, 0xF);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esi) = ecx;
    PUSH32(esp, 0x0014D27Au); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_0014D27A: ;
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
    edi = edi & 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = edx;
    eax = MEM32(esi + edi * 4 + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014D260; /* jne: not equal / not zero */

loc_0014D296: ;
    POP32(esp, edi);

loc_0014D297: ;
    POP32(esp, ebx);

loc_0014D298: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014D2A0
 * Original: 0x0014D2A0 - 0x0014D3E7 (327 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D2A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014D2A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014D2A8u); RECOMP_ABI_CALL(0x0014C930u, sub_0014C930); /* call 0x0014C930 */

loc_0014D2A8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x2F2040;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x100) = eax;
    MEM32(esi + 0x104) = eax;
    MEM32(esi + 0x108) = eax;
    MEM32(esi + 0x110) = eax;
    MEM32(esi + 0x10C) = 0x2F206C;
    MEM32(esi + 0x120) = eax;
    MEM32(esi + 0x11C) = 0x2F2060;
    MEMF(esi + 0x134) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x138) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x130) = eax;
    MEM32(esi + 0x12C) = 0x2F2078;
    MEMF(esi + 0x15C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x160) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x158) = eax;
    MEM32(esi + 0x154) = 0x2F2084;
    MEMF(esi + 0x184) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x188) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x180) = eax;
    MEM32(esi + 0x17C) = 0x2F2090;
    MEMF(esi + 0x1AC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1B0) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x1A8) = eax;
    MEM32(esi + 0x1A4) = 0x2F209C;
    MEMF(esi + 0x1D4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1D8) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x1D0) = eax;
    MEM32(esi + 0x1CC) = 0x2F20A8;
    MEMF(esi + 0x1FC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x200) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x1F8) = eax;
    MEM32(esi + 0x1F4) = 0x2F20B4;
    MEMF(esi + 0x228) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    MEMF(esi + 0x22C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC09C)); /* movss */
    MEM32(esi + 0x128) = eax;
    MEM32(esi + 0x21C) = eax;
    MEM32(esi + 0x224) = 1;
    MEMF(esi + 0x230) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014D3F0
 * Original: 0x0014D3F0 - 0x0014D40E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014D3F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014D3F8u); RECOMP_ABI_CALL(0x0014CEB0u, sub_0014CEB0); /* call 0x0014CEB0 */

loc_0014D3F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014D408; /* je: equal / zero */

loc_0014D3FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014D405u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0014D405: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014D408: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014D410
 * Original: 0x0014D410 - 0x0014D415 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014D410: ;
    g_seh_ebp = ebp; sub_0014CA10(); return; /* tail jmp 0x0014CA10 */

}

/**
 * sub_0014D420
 * Original: 0x0014D420 - 0x0014D440 (32 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014D420: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37A990);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014D43E; /* je: equal / zero */

loc_0014D42E: ;
    edi = edi;

loc_0014D430: ;
    eax = MEM32(ecx);
    esi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0014D437u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014D434u); } /* indirect call */
    }

loc_0014D437: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014D430; /* jne: not equal / not zero */

loc_0014D43E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014D440
 * Original: 0x0014D440 - 0x0014D475 (53 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014D440: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x37A990);
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014D469; /* je: equal / zero */

loc_0014D450: ;
    ebx = MEM32(esp + 0x10);

loc_0014D454: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0014D45Cu); RECOMP_ABI_CALL(0x0014CB30u, sub_0014CB30); /* call 0x0014CB30 */

loc_0014D45C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014D46F; /* je: equal / zero */

loc_0014D460: ;
    edi = MEM32(edi);
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014D454; /* jne: not equal / not zero */

loc_0014D469: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0014D46F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0014D480
 * Original: 0x0014D480 - 0x0014D4AA (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014D480: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014D48Au); RECOMP_ABI_CALL(0x0014D440u, sub_0014D440); /* call 0x0014D440 */

loc_0014D48A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014D4A9; /* je: equal / zero */

loc_0014D491: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x228)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC34C); /* subss */
    MEMF(eax + 0x228) = xmm0.f[0]; /* movss */

loc_0014D4A9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D4B0
 * Original: 0x0014D4B0 - 0x0014D4DA (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014D4B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014D4BAu); RECOMP_ABI_CALL(0x0014D440u, sub_0014D440); /* call 0x0014D440 */

loc_0014D4BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014D4D9; /* je: equal / zero */

loc_0014D4C1: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x228)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC094); /* subss */
    MEMF(eax + 0x228) = xmm0.f[0]; /* movss */

loc_0014D4D9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D4E0
 * Original: 0x0014D4E0 - 0x0014D601 (289 bytes, 84 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_0014D4E0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x28);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    PUSH32(esp, esi);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, edi);
    edi = MEM32(0x322BC8);
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    ebx = ecx;
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0014D5F8; /* je: equal / zero */

loc_0014D552: ;
    eax = MEM32(esi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0014D55Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014D55Bu); } /* indirect call */
    }

loc_0014D55E: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0014D56Au); RECOMP_ABI_CALL(0x0014CB30u, sub_0014CB30); /* call 0x0014CB30 */

loc_0014D56A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0014D5EB; /* jne: not equal / not zero */

loc_0014D56E: ;
    ecx = MEM32(0x30EFF0);
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
    if (0x13) _cf = (int)(((ecx) >> (32 - (0x13))) & 1);
    ecx = ecx << 0x13;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax;
    if (0xD) _cf = (int)(((edx) >> ((0xD) - 1)) & 1);
    edx = edx >> 0xD;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x30EFF0) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((8) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((8) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7FFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x3F800000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x34) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC08C); /* subss */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0014D5D0;

    /* nop */
    /* nop */

loc_0014D5D0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + eax * 4 + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0014D5E3; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0014D5DB: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0014D5D0; /* jl: less (signed <) */

loc_0014D5E1: ;
    goto loc_0014D5EB;

loc_0014D5E3: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0014D5EBu); RECOMP_ABI_CALL(0x000884F0u, sub_000884F0); /* call 0x000884F0 */

loc_0014D5EB: ;
    edi = MEM32(edi);
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0014D552; /* jne: not equal / not zero */

loc_0014D5F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014D610
 * Original: 0x0014D610 - 0x0014D652 (66 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D610(void)
{

loc_0014D610: ;
    eax = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEM32(eax + 0x224) = 0;
    eax = ecx + 0x10;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014D651u); RECOMP_ABI_CALL(0x0014D4E0u, sub_0014D4E0); /* call 0x0014D4E0 */

loc_0014D651: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D660
 * Original: 0x0014D660 - 0x0014D6A2 (66 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D660(void)
{

loc_0014D660: ;
    eax = MEM32(ecx + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEM32(eax + 0x224) = 1;
    eax = ecx + 0x10;
    MEMF(ecx + 0x14) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    MEMF(eax) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0014D6A1u); RECOMP_ABI_CALL(0x0014D4E0u, sub_0014D4E0); /* call 0x0014D4E0 */

loc_0014D6A1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D6B0
 * Original: 0x0014D6B0 - 0x0014D6FA (74 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D6B0(void)
{

loc_0014D6B0: ;
    eax = MEM32(ecx + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC904)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    MEM32(eax + 0x224) = 2;
    eax = ecx + 0x10;
    MEMF(ecx + 0x14) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    MEMF(eax) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0014D6F9u); RECOMP_ABI_CALL(0x0014D4E0u, sub_0014D4E0); /* call 0x0014D4E0 */

loc_0014D6F9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D700
 * Original: 0x0014D700 - 0x0014D75A (90 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D700(void)
{

loc_0014D700: ;
    eax = MEM32(ecx + 4);
    xmm1 = XMM_SCALAR(MEMF(0x2DD414)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax + 0x224) = 3;
    MEMF(ecx + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC904)); /* movss */
    MEMF(ecx + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    eax = ecx + 0x10;
    MEMF(ecx + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DDA40)); /* movss */
    MEMF(ecx + 0x20) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    MEMF(eax) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0014D759u); RECOMP_ABI_CALL(0x0014D4E0u, sub_0014D4E0); /* call 0x0014D4E0 */

loc_0014D759: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D760
 * Original: 0x0014D760 - 0x0014D7B2 (82 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D760(void)
{

loc_0014D760: ;
    eax = MEM32(ecx + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC3C4)); /* movss */
    MEM32(eax + 0x224) = 4;
    eax = ecx + 0x10;
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC394)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DD414)); /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014D7B1u); RECOMP_ABI_CALL(0x0014D4E0u, sub_0014D4E0); /* call 0x0014D4E0 */

loc_0014D7B1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D7C0
 * Original: 0x0014D7C0 - 0x0014D812 (82 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D7C0(void)
{

loc_0014D7C0: ;
    eax = MEM32(ecx + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax + 0x224) = 5;
    eax = ecx + 0x10;
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DD414)); /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC884)); /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC394)); /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014D811u); RECOMP_ABI_CALL(0x0014D4E0u, sub_0014D4E0); /* call 0x0014D4E0 */

loc_0014D811: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014D820
 * Original: 0x0014D820 - 0x0014D88C (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014D820: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014D828u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_0014D828: ;
    MEM32(esi) = 0x2F20C0;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM16(esi + 0x24) = LO16(ecx);
    SET_LO16(eax, MEM16(0x413FE0));
    MEM16(esi + 0x26) = LO16(eax);
    MEM32(esi + 0x70) = ecx;
    MEM32(esi + 0x74) = ecx;
    eax = esi + 0x68;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x78;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(0x413FE0);
    MEM32(eax * 4 + 0x413D68) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x413FE0) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    PUSH32(esp, ecx);
    edx = esi + 0x28;
    PUSH32(esp, 0x2DD608);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014D885u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0014D885: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014D890
 * Original: 0x0014D890 - 0x0014D89C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014D890: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0014D8A0(); return; /* tail jmp 0x0014D8A0 */

}

/**
 * sub_0014D8A0
 * Original: 0x0014D8A0 - 0x0014D90C (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014D8A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014D907; /* je: equal / zero */

loc_0014D8B2: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x100);
    edx = MEM32(ecx + 0x104);
    MEM32(ecx + 0x108) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x104);
    edx = MEM32(ecx + 0x100);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0014D8EA; /* je: equal / zero */

loc_0014D8E4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0014D8EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014D8E8u); } /* indirect call */
    }

loc_0014D8EA: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFDC0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFDC0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014D8B2; /* jne: not equal / not zero */

loc_0014D907: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014D910
 * Original: 0x0014D910 - 0x0014D95A (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014D910: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x100;
    PUSH32(esp, edi);
    MEM32(ecx + 0x74) = MEM32(ecx + 0x74) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = MEM32(eax);
    edi = MEM32(eax + 4);
    MEM32(eax + 8) = 0;
    MEM32(esi + 4) = edi;
    esi = MEM32(eax + 4);
    edi = MEM32(eax);
    MEM32(esi) = edi;
    esi = MEM32(ecx + 0x84);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = esi;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014D960
 * Original: 0x0014D960 - 0x0014D991 (49 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014D960: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014D968u); RECOMP_ABI_CALL(0x0014CE60u, sub_0014CE60); /* call 0x0014CE60 */

loc_0014D968: ;
    eax = MEM32(esi + 0x220);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014D97D; /* je: equal / zero */

loc_0014D972: ;
    PUSH32(esp, eax);
    ecx = 0x37A9B0;
    PUSH32(esp, 0x0014D97Du); RECOMP_ABI_CALL(0x0014D220u, sub_0014D220); /* call 0x0014D220 */

loc_0014D97D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0014D984u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014D981u); } /* indirect call */
    }

loc_0014D984: ;
    PUSH32(esp, esi);
    ecx = 0x37A928;
    PUSH32(esp, 0x0014D98Fu); RECOMP_ABI_CALL(0x0014D910u, sub_0014D910); /* call 0x0014D910 */

loc_0014D98F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014D9A0
 * Original: 0x0014D9A0 - 0x0014D9AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D9A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014D9A0: ;
    MEM32(ecx) = 0x2F20F8;
    g_seh_ebp = ebp; sub_0014C870(); return; /* tail jmp 0x0014C870 */

}

/**
 * sub_0014D9B0
 * Original: 0x0014D9B0 - 0x0014D9C4 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014D9B0: ;
    eax = MEM32(ecx + 0x138);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014D9C1; /* je: equal / zero */

loc_0014D9BA: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

loc_0014D9C1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014D9D0
 * Original: 0x0014D9D0 - 0x0014D9F8 (40 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014D9D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x138);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014D9E2; /* je: equal / zero */

loc_0014D9DD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0014D9E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014D9DFu); } /* indirect call */
    }

loc_0014D9E2: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x138) = ecx;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0014D9F5; /* je: equal / zero */

loc_0014D9F1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0014D9F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014D9F3u); } /* indirect call */
    }

loc_0014D9F5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014DA00
 * Original: 0x0014DA00 - 0x0014DA09 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DA00(void)
{

loc_0014DA00: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0014DA10
 * Original: 0x0014DA10 - 0x0014DA9F (143 bytes, 41 insns)
 * Category: game_debug
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0014DA10: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x660E4490);
    esi = ecx;
    PUSH32(esp, 0x0014DA20u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_0014DA20: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0014DA2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014DA2Cu); } /* indirect call */
    }

loc_0014DA2F: ;
    ecx = MEM32(esi + 4);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014DA3Cu); RECOMP_ABI_CALL(0x0014CB30u, sub_0014CB30); /* call 0x0014CB30 */

loc_0014DA3C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014DA90; /* jne: not equal / not zero */

loc_0014DA40: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* comiss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014DA98; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC08C)) */

loc_0014DA59: ;
    PUSH32(esp, 0x2F2118);
    PUSH32(esp, 0x35DFB0);
    PUSH32(esp, 0x0014DA68u); RECOMP_ABI_CALL(0x000F1FE0u, sub_000F1FE0); /* call 0x000F1FE0 */

loc_0014DA68: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x200000FF);
    ecx = 0x35D5F0;
    PUSH32(esp, 0x0014DA7Au); RECOMP_ABI_CALL(0x000ECAC0u, sub_000ECAC0); /* call 0x000ECAC0 */

loc_0014DA7A: ;
    ecx = MEM32(esi + 4);
    eax = ecx + 0x10C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014DA89u); RECOMP_ABI_CALL(0x0014D9D0u, sub_0014D9D0); /* call 0x0014D9D0 */

loc_0014DA89: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0014DA90: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */

loc_0014DA98: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014DAA0
 * Original: 0x0014DAA0 - 0x0014DABD (29 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DAA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014DAA0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0xF3366B2Fu);
    PUSH32(esp, 0);
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0014DAB9u); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_0014DAB9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0014DAC0
 * Original: 0x0014DAC0 - 0x0014DBB1 (241 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0014DAC0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x660E4490);
    esi = ecx;
    PUSH32(esp, 0x0014DAD0u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_0014DAD0: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0014DADFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014DADCu); } /* indirect call */
    }

loc_0014DADF: ;
    ecx = MEM32(esi + 4);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014DAECu); RECOMP_ABI_CALL(0x0014CB30u, sub_0014CB30); /* call 0x0014CB30 */

loc_0014DAEC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014DB4C; /* jne: not equal / not zero */

loc_0014DAF0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* comiss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014DBAA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC08C)) */

loc_0014DB15: ;
    PUSH32(esp, 0x2F2134);
    PUSH32(esp, 0x35DFB0);
    PUSH32(esp, 0x0014DB24u); RECOMP_ABI_CALL(0x000F1FE0u, sub_000F1FE0); /* call 0x000F1FE0 */

loc_0014DB24: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x50808080);
    ecx = 0x35D5F0;
    PUSH32(esp, 0x0014DB36u); RECOMP_ABI_CALL(0x000ECAC0u, sub_000ECAC0); /* call 0x000ECAC0 */

loc_0014DB36: ;
    ecx = MEM32(esi + 4);
    eax = ecx + 0x11C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014DB45u); RECOMP_ABI_CALL(0x0014D9D0u, sub_0014D9D0); /* call 0x0014D9D0 */

loc_0014DB45: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0014DB4C: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0xC) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC880)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014DB8D; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0014DB75: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014DB8D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0014DB7E: ;
    PUSH32(esp, 0x412DCFF4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0014DB8Au); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_0014DB8A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014DB8D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC8AC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014DBAA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC8AC)) */

loc_0014DB9B: ;
    ecx = MEM32(esi + 4);
    edx = ecx + 0x128;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014DBAAu); RECOMP_ABI_CALL(0x0014D9D0u, sub_0014D9D0); /* call 0x0014D9D0 */

loc_0014DBAA: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014DBC0
 * Original: 0x0014DBC0 - 0x0014DC1C (92 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DBC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014DBC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014DBC8u); RECOMP_ABI_CALL(0x0014C930u, sub_0014C930); /* call 0x0014C930 */

loc_0014DBC8: ;
    MEM32(esi) = 0x2F20F8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x100) = eax;
    MEM32(esi + 0x104) = eax;
    MEM32(esi + 0x108) = eax;
    MEM32(esi + 0x110) = eax;
    MEM32(esi + 0x10C) = 0x2F20E0;
    MEM32(esi + 0x120) = eax;
    MEM32(esi + 0x11C) = 0x2F20D4;
    MEM32(esi + 0x12C) = eax;
    MEM32(esi + 0x128) = 0x2F20EC;
    MEM32(esi + 0x138) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014DC20
 * Original: 0x0014DC20 - 0x0014DC3E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014DC20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014DC28u); RECOMP_ABI_CALL(0x0014D9A0u, sub_0014D9A0); /* call 0x0014D9A0 */

loc_0014DC28: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014DC38; /* je: equal / zero */

loc_0014DC2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014DC35u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0014DC35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014DC38: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014DC40
 * Original: 0x0014DC40 - 0x0014DC6B (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014DC40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x37AEC8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014DC54u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014DC54: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014DC63; /* jge: greater or equal (signed >=) */

loc_0014DC5B: ;
    eax = 0x37AAC4;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

loc_0014DC63: ;
    eax = MEM32(eax * 4 + 0x37AAC8);
    esp += 4; return; /* ret */

}

/**
 * sub_0014DC70
 * Original: 0x0014DC70 - 0x0014DE92 (546 bytes, 156 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0014DC70: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x30));
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x660E4490);
    esi = ecx;
    PUSH32(esp, 0x0014DC82u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_0014DC82: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    eax = MEM32(edi);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0014DC93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014DC90u); } /* indirect call */
    }

loc_0014DC93: ;
    edx = MEM32(edi);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0014DC9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014DC9Cu); } /* indirect call */
    }

loc_0014DC9F: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DBED0); /* comiss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014DE1F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DBED0)) */

loc_0014DCBF: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014DE1F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0014DCD9: ;
    PUSH32(esp, 0x0014DCDEu); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_0014DCDE: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC340)); /* fsub dword ptr [0x2dc340] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC08C)); /* fadd dword ptr [0x2dc08c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC3C4)); /* fmul dword ptr [0x2dc3c4] */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x30EFF0);
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
    if (0xD) _cf = (int)(((edx) >> ((0xD) - 1)) & 1);
    edx = edx >> 0xD;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0x13) _cf = (int)(((ecx) >> (32 - (0x13))) & 1);
    ecx = ecx << 0x13;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x30EFF0) = ecx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 3;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebx = edx;
    PUSH32(esp, 0x0014DD38u); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_0014DD38: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC340)); /* fsub dword ptr [0x2dc340] */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC350)); /* fmul dword ptr [0x2dc350] */
    ecx = 0x30EFF0;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0014DD57u); RECOMP_ABI_CALL(0x00011ED0u, sub_00011ED0); /* call 0x00011ED0 */

loc_0014DD57: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014DD66u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_0014DD66: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0014DDDF; /* jne: not equal / not zero */

loc_0014DDC2: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x0014DDDDu); RECOMP_ABI_CALL(0x000161A0u, sub_000161A0); /* call 0x000161A0 */

loc_0014DDDD: ;
    goto loc_0014DE1C;

loc_0014DDDF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0014DE01; /* jne: not equal / not zero */

loc_0014DDE4: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    PUSH32(esp, 0x0014DDFFu); RECOMP_ABI_CALL(0x000161F0u, sub_000161F0); /* call 0x000161F0 */

loc_0014DDFF: ;
    goto loc_0014DE1C;

loc_0014DE01: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0x0014DE1Cu); RECOMP_ABI_CALL(0x00042640u, sub_00042640); /* call 0x00042640 */

loc_0014DE1C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014DE1F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC34C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014DE89; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC34C)) */

loc_0014DE2D: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 5);
    PUSH32(esp, 0x43C80000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41C80000);
    PUSH32(esp, 0x41C80000);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x54);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x0014DE68u); RECOMP_ABI_CALL(0x000B6460u, sub_000B6460); /* call 0x000B6460 */

loc_0014DE68: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0014DE7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014DE74u); } /* indirect call */
    }

loc_0014DE7A: ;
    ecx = MEM32(esi + 4);
    eax = ecx + 0x11C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014DE89u); RECOMP_ABI_CALL(0x0014D9D0u, sub_0014D9D0); /* call 0x0014D9D0 */

loc_0014DE89: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014DEA0
 * Original: 0x0014DEA0 - 0x0014DF62 (194 bytes, 56 insns)
 * Category: game_physics
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014DEA0: ;
    _fb = (uint32_t)(0x818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x818;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x0014DEB1u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_0014DEB1: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0014DEC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014DEBDu); } /* indirect call */
    }

loc_0014DEC0: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0014DEC9u); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_0014DEC9: ;
    PUSH32(esp, 0x2DC8F4);
    PUSH32(esp, 0x2DC8E0);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0014DEDCu); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_0014DEDC: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0014DEEAu); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0014DEEA: ;
    PUSH32(esp, 0x2F1F94);
    PUSH32(esp, 0x2F1F7C);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0014DEFDu); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_0014DEFD: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0014DF0Bu); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0014DF0B: ;
    edx = MEM32(esp + 0x820);
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x49E50DC8);
    ecx = 0x4031B0;
    PUSH32(esp, 0x0014DF2Bu); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_0014DF2B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014DF56; /* je: equal / zero */

loc_0014DF31: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0014DF38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014DF35u); } /* indirect call */
    }

loc_0014DF38: ;
    edx = MEM32(0x30D374);
    ecx = MEM32(0x30D370);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014DF56; /* jne: not equal / not zero */

loc_0014DF4A: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x818;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0014DF56: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x818) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x818;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014DF70
 * Original: 0x0014DF70 - 0x0014E019 (169 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014DF70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0014DF7Eu); RECOMP_ABI_CALL(0x0014CA10u, sub_0014CA10); /* call 0x0014CA10 */

loc_0014DF7E: ;
    PUSH32(esp, 0x3F);
    eax = edi + 0x354;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8D39BDE6u);
    PUSH32(esp, 0x0014DF91u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0014DF91: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014DFA0; /* jge: greater or equal (signed >=) */

loc_0014DF98: ;
    eax = edi + 0x250;
    goto loc_0014DFA7;

loc_0014DFA0: ;
    eax = edi + eax * 4 + 0x254;

loc_0014DFA7: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014DFDE; /* je: equal / zero */

loc_0014DFAD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014DFB3u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0014DFB3: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x37AEC8);
    PUSH32(esp, eax);
    MEM32(esi + 0x13C) = eax;
    PUSH32(esp, 0x0014DFC9u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_0014DFC9: ;
    MEM32(eax * 4 + 0x37AAC8) = esi;
    eax = MEM32(0x37AAC0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x37AAC0) = eax;

loc_0014DFDE: ;
    ecx = esi + 0x11C;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 0x110) = esi;
    MEM32(esi + 0x120) = esi;
    MEM32(esi + 0x12C) = esi;
    PUSH32(esp, 0x0014DFFEu); RECOMP_ABI_CALL(0x0014D9D0u, sub_0014D9D0); /* call 0x0014D9D0 */

loc_0014DFFE: ;
    edx = MEM32(esi + 0x7C);
    eax = MEM32(esi + 0x74);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = 0x35D5F0;
    PUSH32(esp, 0x0014E014u); RECOMP_ABI_CALL(0x000ECB00u, sub_000ECB00); /* call 0x000ECB00 */

loc_0014E014: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014E020
 * Original: 0x0014E020 - 0x0014E040 (32 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E020: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37AAA0);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E03E; /* je: equal / zero */

loc_0014E02E: ;
    edi = edi;

loc_0014E030: ;
    eax = MEM32(ecx);
    esi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0014E037u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E034u); } /* indirect call */
    }

loc_0014E037: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014E030; /* jne: not equal / not zero */

loc_0014E03E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014E040
 * Original: 0x0014E040 - 0x0014E2C9 (649 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0014E040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E040: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x660E4490);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E057u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_0014E057: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0014E068u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E065u); } /* indirect call */
    }

loc_0014E068: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DD448); /* addss */
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0014E088u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E085u); } /* indirect call */
    }

loc_0014E088: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E096u); RECOMP_ABI_CALL(0x001F64B0u, sub_001F64B0); /* call 0x001F64B0 */

loc_0014E096: ;
    xmm3 = XMM_SCALAR(MEMF(0x2E27C8)); /* movss */
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    eax = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEM32(esp + 0x28) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 8); /* addss */
    MEM32(esp + 0x30) = ecx;
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    edx = esp + 0x40;
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x30) = eax;
    MEMF(esp + 0x78) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E119u); RECOMP_ABI_CALL(0x0014DEA0u, sub_0014DEA0); /* call 0x0014DEA0 */

loc_0014E119: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E14C; /* je: equal / zero */

loc_0014E11D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0014E127u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E121u); } /* indirect call */
    }

loc_0014E127: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x190); PUSH32(esp, 0x0014E14Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E146u); } /* indirect call */
    }

loc_0014E14C: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x24); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2E27C8)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    edx = esp + 0x40;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, edx);
    ecx = edi;
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E1C2u); RECOMP_ABI_CALL(0x0014DEA0u, sub_0014DEA0); /* call 0x0014DEA0 */

loc_0014E1C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E211; /* je: equal / zero */

loc_0014E1C6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0014E1D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E1CAu); } /* indirect call */
    }

loc_0014E1D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC874)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    edx = MEM32(eax);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x34;
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, esi);
    ecx = eax;
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x190); PUSH32(esp, 0x0014E211u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E20Bu); } /* indirect call */
    }

loc_0014E211: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E27C8); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    edx = esp + 0x40;
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, edx);
    ecx = edi;
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014E26Eu); RECOMP_ABI_CALL(0x0014DEA0u, sub_0014DEA0); /* call 0x0014DEA0 */

loc_0014E26E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E2C3; /* je: equal / zero */

loc_0014E272: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0014E27Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E276u); } /* indirect call */
    }

loc_0014E27C: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(0x2DC874)); /* movss */
    edx = MEM32(eax);
    ecx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x2C); /* subss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x34); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    PUSH32(esp, esi);
    ecx = eax;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x190); PUSH32(esp, 0x0014E2C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E2BDu); } /* indirect call */
    }

loc_0014E2C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0014E2D0
 * Original: 0x0014E2D0 - 0x0014E33C (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E2D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E2D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014E2D8u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_0014E2D8: ;
    MEM32(esi) = 0x2F214C;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM16(esi + 0x24) = LO16(ecx);
    SET_LO16(eax, MEM16(0x413FE0));
    MEM16(esi + 0x26) = LO16(eax);
    MEM32(esi + 0x70) = ecx;
    MEM32(esi + 0x74) = ecx;
    eax = esi + 0x68;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x78;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(0x413FE0);
    MEM32(eax * 4 + 0x413D68) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x413FE0) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    PUSH32(esp, ecx);
    edx = esi + 0x28;
    PUSH32(esp, 0x2DD608);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014E335u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0014E335: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014E340
 * Original: 0x0014E340 - 0x0014E34C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014E340: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0014E350(); return; /* tail jmp 0x0014E350 */

}

/**
 * sub_0014E350
 * Original: 0x0014E350 - 0x0014E3BC (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E350: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E3B7; /* je: equal / zero */

loc_0014E362: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x100);
    edx = MEM32(ecx + 0x104);
    MEM32(ecx + 0x108) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x104);
    edx = MEM32(ecx + 0x100);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0014E39A; /* je: equal / zero */

loc_0014E394: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0014E39Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E398u); } /* indirect call */
    }

loc_0014E39A: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFEC0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFEC0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014E362; /* jne: not equal / not zero */

loc_0014E3B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014E3C0
 * Original: 0x0014E3C0 - 0x0014E3EA (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E3C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014E3C8u); RECOMP_ABI_CALL(0x0014CE60u, sub_0014CE60); /* call 0x0014CE60 */

loc_0014E3C8: ;
    eax = MEM32(esi + 0x13C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E3DD; /* je: equal / zero */

loc_0014E3D2: ;
    PUSH32(esp, eax);
    ecx = 0x37AAC0;
    PUSH32(esp, 0x0014E3DDu); RECOMP_ABI_CALL(0x00064C30u, sub_00064C30); /* call 0x00064C30 */

loc_0014E3DD: ;
    PUSH32(esp, esi);
    ecx = 0x37AA38;
    PUSH32(esp, 0x0014E3E8u); RECOMP_ABI_CALL(0x0014D910u, sub_0014D910); /* call 0x0014D910 */

loc_0014E3E8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014E3F0
 * Original: 0x0014E3F0 - 0x0014E412 (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E3F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E3F0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0014E402u); RECOMP_ABI_CALL(0x0014E040u, sub_0014E040); /* call 0x0014E040 */

loc_0014E402: ;
    PUSH32(esp, 0xFAF19474u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0014E40Eu); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_0014E40E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0014E420
 * Original: 0x0014E420 - 0x0014E45A (58 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E420: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x22C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0014E444; /* jle: less or equal (signed <=) */

loc_0014E42E: ;
    edi = MEM32(esp + 0xC);
    edx = ecx + 0x230;

loc_0014E438: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E44B; /* je: equal / zero */

loc_0014E43C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014E438; /* jl: less (signed <) */

loc_0014E444: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_0014E44B: ;
    POP32(esp, edi);
    eax = eax + eax * 2;
    POP32(esp, esi);
    eax = ecx + eax * 4 + 0x230;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014E460
 * Original: 0x0014E460 - 0x0014E4A3 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014E460: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 0x1C) = esi;
    MEM32(ecx + 0x24) = esi;
    MEM32(ecx + 0x28) = esi;
    MEMF(ecx + 0x6E0) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x22C) = esi;
    eax = ecx + 0x230;
    edx = 0x64;

loc_0014E495: ;
    MEM32(eax) = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014E495; /* jne: not equal / not zero */

loc_0014E49D: ;
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_0014E4B0
 * Original: 0x0014E4B0 - 0x0014E4D1 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E4B0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0014E4B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E4B5u); } /* indirect call */
    }

loc_0014E4B8: ;
    esi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E4CF; /* je: equal / zero */

loc_0014E4BF: ;
    ecx = MEM32(0x300E80);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014E4CCu); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014E4CC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014E4CF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014E4E0
 * Original: 0x0014E4E0 - 0x0014E530 (80 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E4E0: ;
    eax = MEM32(ecx + 0x22C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014E52D; /* jge: greater or equal (signed >=) */

loc_0014E4EB: ;
    edx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD6CC); /* mulss */
    eax = eax + eax * 2;
    eax = ecx + eax * 4 + 0x230;
    MEM32(eax) = edx;
    MEM32(eax + 8) = 0x4140CC;
    edx = MEM32(0x4140CC);
    MEM32(eax + 4) = edx;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    edx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = esi;
    MEM32(ecx + 0x22C) = MEM32(ecx + 0x22C) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x22C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);

loc_0014E52D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014E530
 * Original: 0x0014E530 - 0x0014E6C4 (404 bytes, 130 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014E530: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC9E4A6ADu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC9E4A6ADu (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0014E55E; /* jne: not equal / not zero */

loc_0014E543: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x6E0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014E55E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0014E554: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0014E55E: ;
    eax = MEM32(0x6437B4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0014E585u); RECOMP_ABI_CALL(0x00202CB0u, sub_00202CB0); /* call 0x00202CB0 */

loc_0014E585: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0014E599; /* jne: not equal / not zero */

loc_0014E58E: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0014E599: ;
    PUSH32(esp, 0x94E4E309u);
    ecx = ebx;
    PUSH32(esp, 0x0014E5A5u); RECOMP_ABI_CALL(0x00212720u, sub_00212720); /* call 0x00212720 */

loc_0014E5A5: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xFADC0CD2u);
    ecx = ebx;
    PUSH32(esp, 0x0014E5B5u); RECOMP_ABI_CALL(0x00212720u, sub_00212720); /* call 0x00212720 */

loc_0014E5B5: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0014E5D7; /* jp: parity */

loc_0014E5CD: ;
    xmm3 = XMM_SCALAR(MEMF(0x2F2160)); /* movss */
    goto loc_0014E5E1;

loc_0014E5D7: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm3.f[0]; /* mulss */

loc_0014E5E1: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    xmm2 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x18); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x14); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0014E6B8; /* ja: above (unsigned >) (xmm4.f[0] vs xmm3.f[0]) */

loc_0014E62D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x20); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014E6B8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x20)) */

loc_0014E639: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0014E641u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014E641: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E6B8; /* je: equal / zero */

loc_0014E647: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0014E64Fu); RECOMP_ABI_CALL(0x0014E420u, sub_0014E420); /* call 0x0014E420 */

loc_0014E64F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0014E6B8; /* jne: not equal / not zero */

loc_0014E653: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E66A; /* je: equal / zero */

loc_0014E65A: ;
    edx = MEM32(0x300E80);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014E667u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014E667: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014E66A: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0014E673u); RECOMP_ABI_CALL(0x001FFAC0u, sub_001FFAC0); /* call 0x001FFAC0 */

loc_0014E673: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0014E6B8; /* je: equal / zero */

loc_0014E67D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    PUSH32(esp, 0x85D8A7E8u);
    ecx = ebx;
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x24) = 0;
    PUSH32(esp, 0x0014E69Bu); RECOMP_ABI_CALL(0x00212720u, sub_00212720); /* call 0x00212720 */

loc_0014E69B: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0014E6ACu); RECOMP_ABI_CALL(0x0014E4E0u, sub_0014E4E0); /* call 0x0014E4E0 */

loc_0014E6AC: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0014E6B8: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014E6D0
 * Original: 0x0014E6D0 - 0x0014E76D (157 bytes, 62 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E6D0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0014E6E5; /* je: equal / zero */

loc_0014E6DF: ;
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x28), 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014E6EF; /* jl: less (signed <) */

loc_0014E6E5: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0014E6EF: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0014E701u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E6FEu); } /* indirect call */
    }

loc_0014E701: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0014E711u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E70Bu); } /* indirect call */
    }

loc_0014E711: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014E71Cu); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0014E71C: ;
    ebx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E762; /* je: equal / zero */

loc_0014E725: ;
    edx = MEM32(edi + 0x28);
    MEM32(edi + edx * 8 + 0x2C) = ebx;
    eax = MEM32(esi + 8);
    edx = MEM32(eax + 0x28);
    ecx = MEM32(edi + 0x28);
    MEM32(edi + ecx * 8 + 0x30) = edx;
    MEM32(edi + 0x28) = MEM32(edi + 0x28) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF0); PUSH32(esp, 0x0014E746u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E740u); } /* indirect call */
    }

loc_0014E746: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E762; /* je: equal / zero */

loc_0014E74A: ;
    PUSH32(esp, esi);
    ecx = 0x30D4B0;
    PUSH32(esp, 0x0014E755u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_0014E755: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E762; /* je: equal / zero */

loc_0014E759: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0014E762u); RECOMP_ABI_CALL(0x0004D920u, sub_0004D920); /* call 0x0004D920 */

loc_0014E762: ;
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0014E770
 * Original: 0x0014E770 - 0x0014E7A0 (48 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E770: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014E778u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_0014E778: ;
    MEM32(esi) = 0x2F2164;
    eax = esi + 0x238;
    ecx = 0x64;
    /* nop */

loc_0014E790: ;
    MEM32(eax) = 0;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014E790; /* jne: not equal / not zero */

loc_0014E79C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014E7A0
 * Original: 0x0014E7A0 - 0x0014E823 (131 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014E7A0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    edx = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0014E7BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E7B4u); } /* indirect call */
    }

loc_0014E7BA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x0014E7CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E7C4u); } /* indirect call */
    }

loc_0014E7CA: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0014E7D2u); RECOMP_ABI_CALL(0x0014E530u, sub_0014E530); /* call 0x0014E530 */

loc_0014E7D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E819; /* je: equal / zero */

loc_0014E7D6: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 0x28);
    MEM32(edi + 0x24) = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x0014E7E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E7E3u); } /* indirect call */
    }

loc_0014E7E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E80F; /* je: equal / zero */

loc_0014E7ED: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0014E7F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E7F1u); } /* indirect call */
    }

loc_0014E7F4: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014E80F; /* jne: not equal / not zero */

loc_0014E806: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0014E80Fu); RECOMP_ABI_CALL(0x0004D920u, sub_0004D920); /* call 0x0004D920 */

loc_0014E80F: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0014E819: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014E830
 * Original: 0x0014E830 - 0x0014EA78 (584 bytes, 198 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E830(void)
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

loc_0014E830: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x6E0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    PUSH32(esp, edi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014E864; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014E849: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x2C); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0x6E0) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014E864; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0014E85C: ;
    MEMF(esi + 0x6E0) = xmm1.f[0]; /* movss */

loc_0014E864: ;
    eax = MEM32(esi + 0x1C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E930; /* je: equal / zero */

loc_0014E871: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014E877u); RECOMP_ABI_CALL(0x001FEDB0u, sub_001FEDB0); /* call 0x001FEDB0 */

loc_0014E877: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esi + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_0014E8BB; /* jne: not equal / not zero */

loc_0014E881: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014E887u); RECOMP_ABI_CALL(0x00170730u, sub_00170730); /* call 0x00170730 */

loc_0014E887: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E91D; /* je: equal / zero */

loc_0014E894: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x0014E89Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E898u); } /* indirect call */
    }

loc_0014E89E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E91D; /* je: equal / zero */

loc_0014E8A2: ;
    PUSH32(esp, edi);
    ecx = 0x30D4B0;
    PUSH32(esp, 0x0014E8ADu); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_0014E8AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E91D; /* je: equal / zero */

loc_0014E8B1: ;
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x0014E8B9u); RECOMP_ABI_CALL(0x0004D920u, sub_0004D920); /* call 0x0004D920 */

loc_0014E8B9: ;
    goto loc_0014E91D;

loc_0014E8BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E930; /* je: equal / zero */

loc_0014E8BF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014E8C5u); RECOMP_ABI_CALL(0x00170730u, sub_00170730); /* call 0x00170730 */

loc_0014E8C5: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E90A; /* je: equal / zero */

loc_0014E8CE: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x98)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014E90A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0014E8DF: ;
    eax = MEM32(edi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0014E8EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E8E8u); } /* indirect call */
    }

loc_0014E8EB: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0014E8FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E8F5u); } /* indirect call */
    }

loc_0014E8FB: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014E905u); RECOMP_ABI_CALL(0x001FF820u, sub_001FF820); /* call 0x001FF820 */

loc_0014E905: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0014E930;

loc_0014E90A: ;
    edx = MEM32(0x300E80);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014E91Au); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014E91A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014E91D: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    MEM32(esi + 0x1C) = ebp;
    MEM32(esi + 0x24) = ebp;
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */

loc_0014E930: ;
    eax = MEM32(esi + 0x22C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014E99B; /* jle: less or equal (signed <=) */

loc_0014E93C: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    eax = esi + 0x238;

loc_0014E945: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E961; /* je: equal / zero */

loc_0014E94B: ;
    ecx = MEM32(ecx);
    _fb = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x6921A0); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014E98D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014E961: ;
    ecx = MEM32(esi + 0x22C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x22C) = ecx;
    if ((_fa == 0)) goto loc_0014E98D; /* je: equal / zero */

loc_0014E970: ;
    ecx = ecx + ecx * 2;
    ecx = esi + ecx * 4 + 0x230;
    ebx = MEM32(ecx);
    edi = eax + -8;
    MEM32(edi) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(edi + 4) = ebx;
    ecx = MEM32(ecx + 8);
    MEM32(edi + 8) = ecx;

loc_0014E98D: ;
    ecx = MEM32(esi + 0x22C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014E945; /* jl: less (signed <) */

loc_0014E99B: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014EA6E; /* jle: less or equal (signed <=) */

loc_0014E9A4: ;
    edi = esi + 0x2C;

loc_0014E9A7: ;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014E9AFu); RECOMP_ABI_CALL(0x001FEDB0u, sub_001FEDB0); /* call 0x001FEDB0 */

loc_0014E9AF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EA06; /* je: equal / zero */

loc_0014E9B6: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014E9BFu); RECOMP_ABI_CALL(0x00170730u, sub_00170730); /* call 0x00170730 */

loc_0014E9BF: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014E9F2; /* je: equal / zero */

loc_0014E9C8: ;
    edx = MEM32(ebx);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0014E9D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E9D1u); } /* indirect call */
    }

loc_0014E9D4: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0014E9E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014E9DEu); } /* indirect call */
    }

loc_0014E9E4: ;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014E9EDu); RECOMP_ABI_CALL(0x001FF820u, sub_001FF820); /* call 0x001FF820 */

loc_0014E9ED: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0014EA5F;

loc_0014E9F2: ;
    edx = MEM32(0x300E80);
    eax = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014EA01u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014EA01: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0014EA5F;

loc_0014EA06: ;
    MEM32(esi + 0x28) = MEM32(esi + 0x28) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014EA12u); RECOMP_ABI_CALL(0x00170730u, sub_00170730); /* call 0x00170730 */

loc_0014EA12: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EA4B; /* je: equal / zero */

loc_0014EA1B: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x0014EA25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014EA1Fu); } /* indirect call */
    }

loc_0014EA25: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EA4B; /* je: equal / zero */

loc_0014EA29: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0014EA30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014EA2Du); } /* indirect call */
    }

loc_0014EA30: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014EA4B; /* jne: not equal / not zero */

loc_0014EA42: ;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x0014EA4Bu); RECOMP_ABI_CALL(0x0004D920u, sub_0004D920); /* call 0x0004D920 */

loc_0014EA4B: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EA5F; /* je: equal / zero */

loc_0014EA52: ;
    ecx = MEM32(esi + eax * 8 + 0x2C);
    MEM32(edi) = ecx;
    edx = MEM32(esi + eax * 8 + 0x30);
    MEM32(edi + 4) = edx;

loc_0014EA5F: ;
    eax = MEM32(esi + 0x28);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014E9A7; /* jl: less (signed <) */

loc_0014EA6E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014EA80
 * Original: 0x0014EA80 - 0x0014EA8F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EA80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014EA80: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0014EA90
 * Original: 0x0014EA90 - 0x0014EAC0 (48 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014EA90: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EABE; /* je: equal / zero */

loc_0014EA9A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x807CE387u);
    PUSH32(esp, 0x0014EAA5u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014EAA5: ;
    edi = eax;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014EABD; /* jne: not equal / not zero */

loc_0014EAAD: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0014EAB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014EAB1u); } /* indirect call */
    }

loc_0014EAB4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0014EABAu); RECOMP_ABI_CALL(0x002000F0u, sub_002000F0); /* call 0x002000F0 */

loc_0014EABA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014EABD: ;
    POP32(esp, edi);

loc_0014EABE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014EAC0
 * Original: 0x0014EAC0 - 0x0014EADE (30 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014EAC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EACF; /* je: equal / zero */

loc_0014EACA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0014EACFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014EACCu); } /* indirect call */
    }

loc_0014EACF: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0014EADAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014EAD8u); } /* indirect call */
    }

loc_0014EADA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014EAE0
 * Original: 0x0014EAE0 - 0x0014EB8C (172 bytes, 68 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0014EAE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014EAE0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EB87; /* je: equal / zero */

loc_0014EAF1: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EB87; /* je: equal / zero */

loc_0014EAFC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x807CE387u);
    PUSH32(esp, 0x0014EB08u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014EB08: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0xDB925AABu);
    edi = eax;
    PUSH32(esp, 0x0014EB17u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014EB17: ;
    ebx = eax;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014EB28; /* jne: not equal / not zero */

loc_0014EB1F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0014EB25u); RECOMP_ABI_CALL(0x002000F0u, sub_002000F0); /* call 0x002000F0 */

loc_0014EB25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014EB28: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014EB40; /* jne: not equal / not zero */

loc_0014EB2C: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esi + 8) = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0014EB36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014EB33u); } /* indirect call */
    }

loc_0014EB36: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(esi + 0x10) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0014EB40: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014EB62; /* jne: not equal / not zero */

loc_0014EB45: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0014EB4Bu); RECOMP_ABI_CALL(0x00202CB0u, sub_00202CB0); /* call 0x00202CB0 */

loc_0014EB4B: ;
    MEM32(esi + 8) = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0014EB58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014EB55u); } /* indirect call */
    }

loc_0014EB58: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(esi + 0x10) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0014EB62: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014EB7B; /* jne: not equal / not zero */

loc_0014EB67: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0014EB6Fu); RECOMP_ABI_CALL(0x00200030u, sub_00200030); /* call 0x00200030 */

loc_0014EB6F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0014EB75u); RECOMP_ABI_CALL(0x00202CB0u, sub_00202CB0); /* call 0x00202CB0 */

loc_0014EB75: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;

loc_0014EB7B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0014EB82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014EB7Fu); } /* indirect call */
    }

loc_0014EB82: ;
    POP32(esp, edi);
    MEM32(esi + 0x10) = ebp;
    POP32(esp, ebx);

loc_0014EB87: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014EB90
 * Original: 0x0014EB90 - 0x0014EB95 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014EB90: ;
    g_seh_ebp = ebp; sub_0014EA90(); return; /* tail jmp 0x0014EA90 */

}

/**
 * sub_0014EBA0
 * Original: 0x0014EBA0 - 0x0014ECC2 (290 bytes, 87 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014EBA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014ECB5; /* je: equal / zero */

loc_0014EBB1: ;
    eax = MEM32(esi + 0xE0);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EBD4; /* je: equal / zero */

loc_0014EBBE: ;
    ecx = MEM32(0x300E80);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014EBCBu); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014EBCB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xE0) = edi;

loc_0014EBD4: ;
    eax = MEM32(esi + 0xE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EBF4; /* je: equal / zero */

loc_0014EBDE: ;
    edx = MEM32(0x300E80);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014EBEBu); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014EBEB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xE8) = edi;

loc_0014EBF4: ;
    eax = MEM32(esi + 0xF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EC14; /* je: equal / zero */

loc_0014EBFE: ;
    ecx = MEM32(0x300E80);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014EC0Bu); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014EC0B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xF0) = edi;

loc_0014EC14: ;
    eax = MEM32(esi + 0xF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EC34; /* je: equal / zero */

loc_0014EC1E: ;
    edx = MEM32(0x300E80);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014EC2Bu); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014EC2B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xF4) = edi;

loc_0014EC34: ;
    eax = MEM32(esi + 0xEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EC54; /* je: equal / zero */

loc_0014EC3E: ;
    ecx = MEM32(0x300E80);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014EC4Bu); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014EC4B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xEC) = edi;

loc_0014EC54: ;
    eax = MEM32(esi + 0xF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EC74; /* je: equal / zero */

loc_0014EC5E: ;
    edx = MEM32(0x300E80);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014EC6Bu); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014EC6B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xF8) = edi;

loc_0014EC74: ;
    eax = MEM32(esi + 0xFC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EC94; /* je: equal / zero */

loc_0014EC7E: ;
    ecx = MEM32(0x300E80);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014EC8Bu); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014EC8B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xFC) = edi;

loc_0014EC94: ;
    eax = MEM32(esi + 0x100);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014ECB4; /* je: equal / zero */

loc_0014EC9E: ;
    edx = MEM32(0x300E80);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014ECABu); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014ECAB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x100) = edi;

loc_0014ECB4: ;
    POP32(esp, edi);

loc_0014ECB5: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0014ECBDu); RECOMP_ABI_CALL(0x0014EAE0u, sub_0014EAE0); /* call 0x0014EAE0 */

loc_0014ECBD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014ECD0
 * Original: 0x0014ECD0 - 0x0014ED2A (90 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014ECD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014ECD0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014ED25; /* je: equal / zero */

loc_0014ECDD: ;
    eax = MEM32(esi + 0x144);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA7FC5A40u);
    MEM32(esp + 0xC) = eax;
    edi = eax;
    PUSH32(esp, 0x0014ECF4u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014ECF4: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0014ED01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014ECFEu); } /* indirect call */
    }

loc_0014ED01: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0014ED0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014ED0Bu); } /* indirect call */
    }

loc_0014ED0E: ;
    ecx = MEM32(esi + 0xF8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014ED1Bu); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0014ED1B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xF8) = eax;
    POP32(esp, edi);

loc_0014ED25: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0014ED30
 * Original: 0x0014ED30 - 0x0014EDA6 (118 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014ED30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014ED30: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014ED9F; /* je: equal / zero */

loc_0014ED3D: ;
    PUSH32(esp, 0x807CE387u);
    PUSH32(esp, 0x0014ED47u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014ED47: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014ED9F; /* jne: not equal / not zero */

loc_0014ED4D: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014ED9F; /* je: equal / zero */

loc_0014ED54: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014ED5Au); RECOMP_ABI_CALL(0x00200140u, sub_00200140); /* call 0x00200140 */

loc_0014ED5A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014ED9F; /* je: equal / zero */

loc_0014ED61: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esi + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x144);
    PUSH32(esp, eax);
    ebx = edi;
    PUSH32(esp, 0x0014ED78u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014ED78: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0014ED85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014ED82u); } /* indirect call */
    }

loc_0014ED85: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0014ED92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014ED8Fu); } /* indirect call */
    }

loc_0014ED92: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0014ED9Au); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0014ED9A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0014ED9F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014EDB0
 * Original: 0x0014EDB0 - 0x0014EE88 (216 bytes, 65 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014EDB0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EE81; /* je: equal / zero */

loc_0014EDC1: ;
    PUSH32(esp, 0x807CE387u);
    PUSH32(esp, 0x0014EDCBu); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014EDCB: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014EE81; /* jne: not equal / not zero */

loc_0014EDD5: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EE81; /* je: equal / zero */

loc_0014EDE0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014EDE6u); RECOMP_ABI_CALL(0x00200140u, sub_00200140); /* call 0x00200140 */

loc_0014EDE6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EE81; /* je: equal / zero */

loc_0014EDF1: ;
    eax = MEM32(esi + 0xF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EE15; /* je: equal / zero */

loc_0014EDFB: ;
    ecx = MEM32(0x300E80);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014EE08u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014EE08: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xF0) = 0;

loc_0014EE15: ;
    edx = MEM32(esi + 0x144);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0xB19D1BEDu);
    MEM32(esp + 0xC) = edx;
    edi = edx;
    PUSH32(esp, 0x0014EE2Fu); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014EE2F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0014EE3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014EE39u); } /* indirect call */
    }

loc_0014EE3C: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0014EE49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014EE46u); } /* indirect call */
    }

loc_0014EE49: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0014EE51u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0014EE51: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xF0) = eax;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0014EE81; /* je: equal / zero */

loc_0014EE5F: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x24); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DDA48); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x2F217C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014EE7Eu); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_0014EE7E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014EE81: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014EE90
 * Original: 0x0014EE90 - 0x0014EF5F (207 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EE90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014EE90: ;
    eax = MEM32(0x300E80);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xE0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014EEA5u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014EEA5: ;
    edx = MEM32(0x300E80);
    eax = MEM32(esi + 0xE8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014EEB8u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014EEB8: ;
    ecx = MEM32(0x300E80);
    edx = MEM32(esi + 0xF0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014EECBu); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014EECB: ;
    eax = MEM32(0x300E80);
    ecx = MEM32(esi + 0xF4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014EEDDu); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014EEDD: ;
    edx = MEM32(0x300E80);
    eax = MEM32(esi + 0xEC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014EEF0u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014EEF0: ;
    ecx = MEM32(0x300E80);
    edx = MEM32(esi + 0xF8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014EF03u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014EF03: ;
    eax = MEM32(0x300E80);
    ecx = MEM32(esi + 0x138);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014EF15u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014EF15: ;
    edx = MEM32(0x300E80);
    eax = MEM32(esi + 0x13C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014EF28u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014EF28: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xE0) = eax;
    MEM32(esi + 0xE8) = eax;
    MEM32(esi + 0xF0) = eax;
    MEM32(esi + 0xF4) = eax;
    MEM32(esi + 0xEC) = eax;
    MEM32(esi + 0xF8) = eax;
    MEM32(esi + 0x138) = eax;
    MEM32(esi + 0x13C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014EF60
 * Original: 0x0014EF60 - 0x0014EF6D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EF60(void)
{

loc_0014EF60: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x144) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014EF70
 * Original: 0x0014EF70 - 0x0014EFF1 (129 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014EF70: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x140));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014EFD7; /* jne: not equal / not zero */

loc_0014EF82: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EFD3; /* je: equal / zero */

loc_0014EF86: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014EFA2; /* jne: not equal / not zero */

loc_0014EF8E: ;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014EF97u); RECOMP_ABI_CALL(0x0014EAC0u, sub_0014EAC0); /* call 0x0014EAC0 */

loc_0014EF97: ;
    MEM8(esi + 0x140) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0014EFA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014EFBD; /* jne: not equal / not zero */

loc_0014EFA7: ;
    ecx = esi + 0x2C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0014EFB2u); RECOMP_ABI_CALL(0x0014EAC0u, sub_0014EAC0); /* call 0x0014EAC0 */

loc_0014EFB2: ;
    MEM8(esi + 0x140) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0014EFBD: ;
    edx = esi + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0014EFC8u); RECOMP_ABI_CALL(0x0014EAC0u, sub_0014EAC0); /* call 0x0014EAC0 */

loc_0014EFC8: ;
    MEM8(esi + 0x140) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0014EFD3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014EFE6; /* je: equal / zero */

loc_0014EFD7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014EFE6; /* jne: not equal / not zero */

loc_0014EFDB: ;
    eax = esi + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0014EFE6u); RECOMP_ABI_CALL(0x0014EAC0u, sub_0014EAC0); /* call 0x0014EAC0 */

loc_0014EFE6: ;
    MEM8(esi + 0x140) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F000
 * Original: 0x0014F000 - 0x0014F026 (38 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F000: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0xE8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F024; /* je: equal / zero */

loc_0014F010: ;
    ecx = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0014F017u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014F014u); } /* indirect call */
    }

loc_0014F017: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0xFF972644u);
    PUSH32(esp, 0x0014F024u); RECOMP_ABI_CALL(0x0014ED30u, sub_0014ED30); /* call 0x0014ED30 */

loc_0014F024: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014F030
 * Original: 0x0014F030 - 0x0014F03E (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F030(void)
{

loc_0014F030: ;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 0x18A31280);
    PUSH32(esp, 0x0014F03Du); RECOMP_ABI_CALL(0x0014ED30u, sub_0014ED30); /* call 0x0014ED30 */

loc_0014F03D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014F040
 * Original: 0x0014F040 - 0x0014F04E (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F040(void)
{

loc_0014F040: ;
    eax = MEM32(ecx + 8);
    MEM32(eax + 0xD8) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_0014F050
 * Original: 0x0014F050 - 0x0014F079 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F050: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM32(ecx + 0xD8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xD8), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014F06B; /* jge: greater or equal (signed >=) */

loc_0014F061: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014F06B; /* jle: less or equal (signed <=) */

loc_0014F065: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014F06Bu); RECOMP_ABI_CALL(0x0014EDB0u, sub_0014EDB0); /* call 0x0014EDB0 */

loc_0014F06B: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    MEM32(eax + 0xD8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014F080
 * Original: 0x0014F080 - 0x0014F099 (25 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F080(void)
{

loc_0014F080: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014F0A0
 * Original: 0x0014F0A0 - 0x0014F0E7 (71 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F0A0(void)
{

loc_0014F0A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x54019347);
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0014F0BDu); RECOMP_ABI_CALL(0x0014ED30u, sub_0014ED30); /* call 0x0014ED30 */

loc_0014F0BD: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x144);
    PUSH32(esp, 0x0014F0CBu); RECOMP_ABI_CALL(0x000442A0u, sub_000442A0); /* call 0x000442A0 */

loc_0014F0CB: ;
    ecx = MEM32(esi + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0xCC); /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0xC); /* divss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014F0F0
 * Original: 0x0014F0F0 - 0x0014F1B8 (200 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0014F0F0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014F10B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esi + 0xC)) */

loc_0014F0FC: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014F108u); RECOMP_ABI_CALL(0x0014EAC0u, sub_0014EAC0); /* call 0x0014EAC0 */

loc_0014F108: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */

loc_0014F10B: ;
    eax = MEM32(esi + 8);
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xD0)); /* movss */
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2DC880); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014F135; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0014F130: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0014F145;

loc_0014F135: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014F145; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0014F142: ;
    xmm0 = xmm2; /* movaps */

loc_0014F145: ;
    MEMF(eax + 0xD0) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xCC); /* addss */
    MEMF(eax + 0xCC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014F189; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014F173: ;
    eax = MEM32(esi + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xCC)); /* movss */
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xCC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x10); /* comiss */
    if ((_fca > _fcb)) goto loc_0014F1A1; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esi + 0x10)) */

loc_0014F189: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014F1A6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esi + 0x14)) */

loc_0014F18F: ;
    eax = MEM32(esi + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xCC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014F1A6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_0014F1A1: ;
    ecx = MEM32(esi + 0x10);
    MEM32(eax) = ecx;

loc_0014F1A6: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F1C0
 * Original: 0x0014F1C0 - 0x0014F1CE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F1C0(void)
{

loc_0014F1C0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F1D0
 * Original: 0x0014F1D0 - 0x0014F218 (72 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F1D0(void)
{

loc_0014F1D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x54019347);
    PUSH32(esp, 0x0014F1E0u); RECOMP_ABI_CALL(0x0014ED30u, sub_0014ED30); /* call 0x0014ED30 */

loc_0014F1E0: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x144);
    PUSH32(esp, 0x0014F1EEu); RECOMP_ABI_CALL(0x000442A0u, sub_000442A0); /* call 0x000442A0 */

loc_0014F1EE: ;
    ecx = MEM32(esi + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 0xF4) = 0;
    edx = MEM32(esi + 8);
    MEMF(edx + 0xD4) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 8);
    MEM32(eax + 0xD8) = 0xFFFFFFFEu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014F220
 * Original: 0x0014F220 - 0x0014F22F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F220(void)
{

loc_0014F220: ;
    eax = MEM32(ecx + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0xD4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0014F230
 * Original: 0x0014F230 - 0x0014F303 (211 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014F230: ;
    eax = MEM32(ecx + 8);
    fp_push(MEMF(eax + 0xB4)); /* fld float */
    xmm4 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    xmm5 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm4; /* movaps */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0xCC)); /* fsub dword ptr [eax + 0xcc] */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm1 = xmm2; /* movaps */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0014F27D; /* ja: above (unsigned >) (xmm1.f[0] vs xmm3.f[0]) */

loc_0014F272: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = xmm0; /* movaps */
    if ((_fca > _fcb)) goto loc_0014F27D; /* ja: above (unsigned >) (xmm3.f[0] vs xmm0.f[0]) */

loc_0014F27A: ;
    xmm1 = xmm3; /* movaps */

loc_0014F27D: ;
    eax = MEM32(ecx + 8);
    xmm0 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xBC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xD0); /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014F2A8; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0014F2A3: ;
    xmm0 = xmm2; /* movaps */
    goto loc_0014F2B0;

loc_0014F2A8: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014F2B0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0014F2AD: ;
    xmm0 = xmm3; /* movaps */

loc_0014F2B0: ;
    eax = MEM32(ecx + 8);
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0xCC); /* addss */
    MEMF(eax + 0xCC) = xmm1.f[0]; /* movss */
    eax = MEM32(ecx + 8);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xD0); /* addss */
    MEMF(eax + 0xD0) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 8);
    edx = MEM32(eax + 0xCC);
    MEM32(eax + 0xD4) = edx;
    eax = MEM32(ecx + 8);
    SET_LO8(edx, MEM8(eax + 0xC4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014F300; /* jne: not equal / not zero */

loc_0014F2F2: ;
    ecx = eax;
    edx = ecx + 0x2C;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0014EAC0(); return; /* tail jmp 0x0014EAC0 */

loc_0014F300: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0014F310
 * Original: 0x0014F310 - 0x0014F337 (39 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F310: ;
    PUSH32(esp, 0x0014F315u); RECOMP_ABI_CALL(0x0014EA80u, sub_0014EA80); /* call 0x0014EA80 */

loc_0014F315: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x34) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0014F340
 * Original: 0x0014F340 - 0x0014F3E4 (164 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F340: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F3D7; /* je: equal / zero */

loc_0014F351: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F36E; /* je: equal / zero */

loc_0014F35B: ;
    ecx = MEM32(0x300E80);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014F368u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014F368: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = edi;

loc_0014F36E: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F388; /* je: equal / zero */

loc_0014F375: ;
    edx = MEM32(0x300E80);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014F382u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014F382: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = edi;

loc_0014F388: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F3A2; /* je: equal / zero */

loc_0014F38F: ;
    ecx = MEM32(0x300E80);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014F39Cu); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014F39C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = edi;

loc_0014F3A2: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F3BC; /* je: equal / zero */

loc_0014F3A9: ;
    edx = MEM32(0x300E80);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014F3B6u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014F3B6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = edi;

loc_0014F3BC: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F3D6; /* je: equal / zero */

loc_0014F3C3: ;
    ecx = MEM32(0x300E80);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014F3D0u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014F3D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x24) = edi;

loc_0014F3D6: ;
    POP32(esp, edi);

loc_0014F3D7: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0014F3DFu); RECOMP_ABI_CALL(0x0014EAE0u, sub_0014EAE0); /* call 0x0014EAE0 */

loc_0014F3DF: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F3F0
 * Original: 0x0014F3F0 - 0x0014F468 (120 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F3F0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F463; /* je: equal / zero */

loc_0014F3FD: ;
    PUSH32(esp, 0x807CE387u);
    PUSH32(esp, 0x0014F407u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014F407: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014F463; /* jne: not equal / not zero */

loc_0014F40D: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F463; /* je: equal / zero */

loc_0014F414: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014F41Au); RECOMP_ABI_CALL(0x00200140u, sub_00200140); /* call 0x00200140 */

loc_0014F41A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F463; /* je: equal / zero */

loc_0014F421: ;
    eax = MEM32(esi + 0x34);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA7FC5A40u);
    MEM32(esp + 0xC) = eax;
    edi = eax;
    PUSH32(esp, 0x0014F438u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014F438: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0014F445u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014F442u); } /* indirect call */
    }

loc_0014F445: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0014F452u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014F44Fu); } /* indirect call */
    }

loc_0014F452: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014F45Cu); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0014F45C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x24) = eax;
    POP32(esp, edi);

loc_0014F463: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0014F470
 * Original: 0x0014F470 - 0x0014F47A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F470(void)
{

loc_0014F470: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x34) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F480
 * Original: 0x0014F480 - 0x0014F499 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F480: ;
    PUSH32(esp, 0x0014F485u); RECOMP_ABI_CALL(0x0014EA80u, sub_0014EA80); /* call 0x0014EA80 */

loc_0014F485: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x24) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0014F4A0
 * Original: 0x0014F4A0 - 0x0014F4F6 (86 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F4A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F4E9; /* je: equal / zero */

loc_0014F4AD: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F4CB; /* je: equal / zero */

loc_0014F4B4: ;
    ecx = MEM32(0x300E80);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014F4C1u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014F4C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = 0;

loc_0014F4CB: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F4E9; /* je: equal / zero */

loc_0014F4D2: ;
    edx = MEM32(0x300E80);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014F4DFu); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014F4DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = 0;

loc_0014F4E9: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0014F4F1u); RECOMP_ABI_CALL(0x0014EAE0u, sub_0014EAE0); /* call 0x0014EAE0 */

loc_0014F4F1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F500
 * Original: 0x0014F500 - 0x0014F57E (126 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F500: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F579; /* je: equal / zero */

loc_0014F50D: ;
    PUSH32(esp, 0x807CE387u);
    PUSH32(esp, 0x0014F517u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014F517: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014F579; /* jne: not equal / not zero */

loc_0014F51D: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F579; /* je: equal / zero */

loc_0014F524: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014F52Au); RECOMP_ABI_CALL(0x00200140u, sub_00200140); /* call 0x00200140 */

loc_0014F52A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F579; /* je: equal / zero */

loc_0014F531: ;
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014F575; /* jne: not equal / not zero */

loc_0014F538: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA7FC5A40u);
    MEM32(esp + 0xC) = eax;
    edi = eax;
    PUSH32(esp, 0x0014F54Fu); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014F54F: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0014F55Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014F559u); } /* indirect call */
    }

loc_0014F55C: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0014F569u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014F566u); } /* indirect call */
    }

loc_0014F569: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0014F571u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0014F571: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_0014F575: ;
    MEM8(esi + 0x24) = 2;

loc_0014F579: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0014F580
 * Original: 0x0014F580 - 0x0014F58A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F580(void)
{

loc_0014F580: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x20) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F590
 * Original: 0x0014F590 - 0x0014F5D6 (70 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F590: ;
    SET_LO8(eax, MEM8(ecx));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0014F5AD; /* je: equal / zero */

loc_0014F59A: ;
    eax = MEM32(ecx + 4);
    esi = MEM32(ecx + eax * 4 + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    MEM32(ecx + 4) = edx;

loc_0014F5AD: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + eax * 4 + 0xC) = edx;
    eax = MEM32(ecx + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), edx (32-bit) */
    MEM32(ecx + 8) = edx;
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0014F5D1; /* jne: not equal / not zero */

loc_0014F5CE: ;
    MEM8(ecx) = 1;

loc_0014F5D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F5E0
 * Original: 0x0014F5E0 - 0x0014F625 (69 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F5E0: ;
    SET_LO8(eax, MEM8(ecx + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F5EA; /* je: equal / zero */

loc_0014F5E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0014F5EA: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0014F61B; /* jne: not equal / not zero */

loc_0014F5F3: ;
    eax = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014F60A; /* jge: greater or equal (signed >=) */

loc_0014F5FD: ;
    edi = MEM32(ecx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014F608; /* jl: less (signed <) */

loc_0014F604: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014F61B; /* jl: less (signed <) */

loc_0014F608: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */

loc_0014F60A: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0014F611; /* jle: less or equal (signed <=) */

loc_0014F60C: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014F61B; /* jge: greater or equal (signed >=) */

loc_0014F611: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014F61B; /* jl: less (signed <) */

loc_0014F616: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014F61B: ;
    eax = MEM32(ecx + 4);
    POP32(esp, edi);
    eax = esi + eax * 4 + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014F630
 * Original: 0x0014F630 - 0x0014F64F (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F630: ;
    eax = MEM32(ecx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = MEM32(ecx);
    MEM32(ecx + 4) = edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 8) (32-bit) */
    POP32(esp, esi);
    eax = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0014F64E; /* jne: not equal / not zero */

loc_0014F64A: ;
    MEM8(ecx + 8) = 1;

loc_0014F64E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014F650
 * Original: 0x0014F650 - 0x0014F720 (208 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F650: ;
    PUSH32(esp, 0x0014F655u); RECOMP_ABI_CALL(0x0014EA80u, sub_0014EA80); /* call 0x0014EA80 */

loc_0014F655: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0xE0) = eax;
    MEM32(ecx + 0xE8) = eax;
    MEM32(ecx + 0xF0) = eax;
    MEM32(ecx + 0xF4) = eax;
    MEM32(ecx + 0xEC) = eax;
    MEM32(ecx + 0xF8) = eax;
    MEM32(ecx + 0x138) = eax;
    MEM32(ecx + 0x13C) = eax;
    MEM32(ecx + 0xFC) = eax;
    MEM32(ecx + 0x100) = eax;
    MEM8(ecx + 0xC4) = LO8(eax);
    MEM8(ecx + 0xDC) = LO8(eax);
    MEM32(ecx + 0x144) = eax;
    MEM8(ecx + 0x140) = LO8(eax);
    MEMF(ecx + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xD0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xD4) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0xD8) = 0xFFFFFFFFu;
    MEM32(ecx + 0x1C) = ecx;
    MEM32(ecx + 0x28) = ecx;
    MEM32(ecx + 0x34) = ecx;
    eax = ecx + 0x14;
    MEM32(ecx + 0x40) = ecx;
    MEM32(ecx + 0x5C) = ecx;
    MEM32(ecx + 0x78) = ecx;
    PUSH32(esp, eax);
    MEM32(ecx + 0x94) = ecx;
    MEM32(ecx + 0xAC) = ecx;
    PUSH32(esp, 0x0014F71Fu); RECOMP_ABI_CALL(0x0014EAC0u, sub_0014EAC0); /* call 0x0014EAC0 */

loc_0014F71F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014F720
 * Original: 0x0014F720 - 0x0014FEDE (1982 bytes, 512 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014F720: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x40));
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0014FED4; /* je: equal / zero */

loc_0014F736: ;
    ecx = MEM32(esi + 0x144);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x0014F744u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014F73Eu); } /* indirect call */
    }

loc_0014F744: ;
    edi = eax;
    ecx = edi;
    PUSH32(esp, 0x0014F74Du); RECOMP_ABI_CALL(0x001338A0u, sub_001338A0); /* call 0x001338A0 */

loc_0014F74D: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x392E7385);
    PUSH32(esp, 0x0014F75Eu); RECOMP_ABI_CALL(0x00212720u, sub_00212720); /* call 0x00212720 */

loc_0014F75E: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x19654EB4);
    PUSH32(esp, 0x0014F76Fu); RECOMP_ABI_CALL(0x00212720u, sub_00212720); /* call 0x00212720 */

loc_0014F76F: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_push(MEMF(0x2DC098)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (!(_fa & 1u) /* fcompi */) goto loc_0014FED4; /* jae: above or equal (unsigned >=) */

loc_0014F787: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x24); /* comiss */
    if ((_fca >= _fcb)) goto loc_0014FED4; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esp + 0x24)) */

loc_0014F795: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x2E4)); /* movss */
    SET_LO8(ebx, MEM8(edi + 0x2EC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x2E8)); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F7CF; /* je: equal / zero */

loc_0014F7C1: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */

loc_0014F7CF: ;
    ecx = edi;
    PUSH32(esp, 0x0014F7D6u); RECOMP_ABI_CALL(0x00133690u, sub_00133690); /* call 0x00133690 */

loc_0014F7D6: ;
    ecx = edi;
    MEM8(esi + 0xC4) = LO8(eax);
    PUSH32(esp, 0x0014F7E3u); RECOMP_ABI_CALL(0x001302C0u, sub_001302C0); /* call 0x001302C0 */

loc_0014F7E3: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    PUSH32(esp, 0x0014F7EEu); RECOMP_ABI_CALL(0x001345D0u, sub_001345D0); /* call 0x001345D0 */

loc_0014F7EE: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esi + 0xC4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F818; /* je: equal / zero */

loc_0014F7FC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esi + 0xBC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_0014F826;

loc_0014F818: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esi + 0xBC) = xmm0.f[0]; /* movss */

loc_0014F826: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0014F842; /* jnp: not parity */

loc_0014F839: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0014F842; /* jne: not equal / not zero */

loc_0014F83D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_0014F850;

loc_0014F842: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xC8); /* addss */

loc_0014F850: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DE25C)); /* movss */
    MEMF(esi + 0xC8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xB4); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0014F880; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0014F873: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC3DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014F883; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014F880: ;
    xmm0 = xmm1; /* movaps */

loc_0014F883: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xB4); /* addss */
    ecx = edi;
    MEMF(esi + 0xB4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0014F89Au); RECOMP_ABI_CALL(0x00134450u, sub_00134450); /* call 0x00134450 */

loc_0014F89A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0014F8A7; /* jne: not equal / not zero */

loc_0014F89E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_0014F8A7: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0014F8B3u); RECOMP_ABI_CALL(0x00130090u, sub_00130090); /* call 0x00130090 */

loc_0014F8B3: ;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0014F8BFu); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_0014F8BF: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0014F8D0; /* je: equal / zero */

loc_0014F8C6: ;
    edx = MEM32(esp + 0x54);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0014F8D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014F8CDu); } /* indirect call */
    }

loc_0014F8D0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xCC)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014F8E5; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0014F8E0: ;
    xmm0 = xmm2; /* movaps */
    goto loc_0014F8F5;

loc_0014F8E5: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014F8F5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014F8F2: ;
    xmm0 = xmm1; /* movaps */

loc_0014F8F5: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEMF(esi + 0xCC) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0014F963; /* jne: not equal / not zero */

loc_0014F903: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0014F91F; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_0014F90E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0014F91F; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_0014F919: ;
    MEM32(esi + 0xE0) = ebp;

loc_0014F91F: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x223FBDB2);
    PUSH32(esp, 0x0014F92Cu); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014F92C: ;
    edx = MEM32(esi + 0xE8);
    PUSH32(esp, eax);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014F943u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0014F943: ;
    ecx = MEM32(esi + 0xCC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2F21CC);
    PUSH32(esp, eax);
    MEM32(esi + 0xE8) = eax;
    PUSH32(esp, 0x0014F95Bu); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_0014F95B: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0014FEC8;

loc_0014F963: ;
    SET_LO8(eax, MEM8(esi + 0x140));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FEC8; /* je: equal / zero */

loc_0014F971: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x807CE387u);
    PUSH32(esp, 0x0014F97Eu); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014F97E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014F984u); RECOMP_ABI_CALL(0x00200140u, sub_00200140); /* call 0x00200140 */

loc_0014F984: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FEC8; /* je: equal / zero */

loc_0014F98F: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x30);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x44);
    MEM32(edx + 4) = ecx;
    ecx = 0x33CCA8;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x0014F9B7u); RECOMP_ABI_CALL(0x000B4D80u, sub_000B4D80); /* call 0x000B4D80 */

loc_0014F9B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0014FA49; /* ja: above (unsigned >) */

loc_0014F9C0: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x14FEE0); /* switch: 7 entries, 6 targets */
    if (_jt == 0x0014F9C7u) goto loc_0014F9C7;
    if (_jt == 0x0014F9DBu) goto loc_0014F9DB;
    if (_jt == 0x0014F9EFu) goto loc_0014F9EF;
    if (_jt == 0x0014FA03u) goto loc_0014FA03;
    if (_jt == 0x0014FA17u) goto loc_0014FA17;
    if (_jt == 0x0014FA2Bu) goto loc_0014FA2B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0014F9C7: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x7385541F);
    PUSH32(esp, 0x0014F9D4u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014F9D4: ;
    PUSH32(esp, 0x319CBA48);
    goto loc_0014FA3D;

loc_0014F9DB: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0xD0CF9DF8u);
    PUSH32(esp, 0x0014F9E8u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014F9E8: ;
    PUSH32(esp, 0x9FAE2DE3u);
    goto loc_0014FA3D;

loc_0014F9EF: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x6D589ED5);
    PUSH32(esp, 0x0014F9FCu); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014F9FC: ;
    PUSH32(esp, 0x6EA9C2A);
    goto loc_0014FA3D;

loc_0014FA03: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x16F55A8);
    PUSH32(esp, 0x0014FA10u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014FA10: ;
    PUSH32(esp, 0xA41AAC5);
    goto loc_0014FA3D;

loc_0014FA17: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0xE7D43F5Bu);
    PUSH32(esp, 0x0014FA24u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014FA24: ;
    PUSH32(esp, 0x8CA7FFCCu);
    goto loc_0014FA3D;

loc_0014FA2B: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x740DC48D);
    PUSH32(esp, 0x0014FA38u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014FA38: ;
    PUSH32(esp, 0xA8965862u);

loc_0014FA3D: ;
    ecx = MEM32(esi + 8);
    edi = eax;
    PUSH32(esp, 0x0014FA47u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014FA47: ;
    ebp = eax;

loc_0014FA49: ;
    eax = MEM32(esi + 0x138);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0014FA6D; /* jne: not equal / not zero */

loc_0014FA53: ;
    MEM32(esi + 0x138) = edi;
    MEM32(esi + 0x13C) = ebp;
    MEM32(esi + 0xEC) = ebx;
    MEM32(esi + 0xE0) = ebx;
    goto loc_0014FADF;

loc_0014FA6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0014FADF; /* je: equal / zero */

loc_0014FA71: ;
    ebx = esi + 0x104;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0014FA7Fu); RECOMP_ABI_CALL(0x0014F590u, sub_0014F590); /* call 0x0014F590 */

loc_0014FA7F: ;
    ecx = MEM32(ebx + 4);
    MEM32(esp + 0x48) = ecx;
    ecx = esp + 0x44;
    MEM32(esp + 0x44) = ebx;
    MEM8(esp + 0x4C) = 0;
    PUSH32(esp, 0x0014FA98u); RECOMP_ABI_CALL(0x0014F5E0u, sub_0014F5E0); /* call 0x0014F5E0 */

loc_0014FA98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FAC3; /* je: equal / zero */

loc_0014FA9C: ;
    /* nop */

loc_0014FAA0: ;
    ecx = esp + 0x44;
    PUSH32(esp, 0x0014FAA9u); RECOMP_ABI_CALL(0x0014F5E0u, sub_0014F5E0); /* call 0x0014F5E0 */

loc_0014FAA9: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0014FADD; /* jne: not equal / not zero */

loc_0014FAAD: ;
    ecx = esp + 0x44;
    PUSH32(esp, 0x0014FAB6u); RECOMP_ABI_CALL(0x0014F630u, sub_0014F630); /* call 0x0014F630 */

loc_0014FAB6: ;
    ecx = esp + 0x44;
    PUSH32(esp, 0x0014FABFu); RECOMP_ABI_CALL(0x0014F5E0u, sub_0014F5E0); /* call 0x0014F5E0 */

loc_0014FABF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0014FAA0; /* jne: not equal / not zero */

loc_0014FAC3: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x138) = edi;
    MEM32(esi + 0x13C) = ebp;
    MEM32(esi + 0xEC) = eax;
    MEM32(esi + 0xE0) = eax;

loc_0014FADD: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0014FADF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    edi = MEM32(esp + 0x14);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014FB77; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0014FAF6: ;
    edx = MEM32(esi + 0x13C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xE0);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014FB13u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0014FB13: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2F21C0);
    PUSH32(esp, eax);
    MEM32(esi + 0xE0) = eax;
    PUSH32(esp, 0x0014FB29u); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_0014FB29: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esi + 0xE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x2F21B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014FB3Fu); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_0014FB3F: ;
    ecx = MEM32(esi + 0xE0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2F21A4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014FB51u); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_0014FB51: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    edx = MEM32(esi + 0xE0);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x50)); /* fdiv dword ptr [esp + 0x50] */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x2E7864);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014FB72u); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_0014FB72: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0014FB7D;

loc_0014FB77: ;
    MEM32(esi + 0xE0) = ebx;

loc_0014FB7D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014FBBC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0014FB8C: ;
    edx = MEM32(esi + 0xFC);
    PUSH32(esp, 0x5D35C6E4);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014FBA7u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0014FBA7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2F21A4);
    PUSH32(esp, eax);
    MEM32(esi + 0xFC) = eax;
    PUSH32(esp, 0x0014FBB9u); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_0014FBB9: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014FBBC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DD418); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014FBFB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DD418)) */

loc_0014FBCB: ;
    edx = MEM32(esi + 0x100);
    PUSH32(esp, 0x3D2CE3D7);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014FBE6u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0014FBE6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2E7864);
    PUSH32(esp, eax);
    MEM32(esi + 0x100) = eax;
    PUSH32(esp, 0x0014FBF8u); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_0014FBF8: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014FBFB: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x1C)); /* fdiv dword ptr [esp + 0x1c] */
    MEMF(esp + 0x54) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x2DC098)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0014FD45; /* jbe: below or equal (unsigned <=) */

loc_0014FC19: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */

loc_0014FC22: ;
    edi = MEM32(esp + 0x54);

loc_0014FC26: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x223FBDB2);
    PUSH32(esp, 0x0014FC33u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014FC33: ;
    edx = MEM32(esi + 0xE8);
    PUSH32(esp, eax);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014FC4Au); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0014FC4A: ;
    ecx = MEM32(esi + 0xCC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2F21CC);
    PUSH32(esp, eax);
    MEM32(esi + 0xE8) = eax;
    PUSH32(esp, 0x0014FC62u); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_0014FC62: ;
    edx = MEM32(esi + 0xD0);
    eax = MEM32(esi + 0xE8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x2F2198);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014FC7Au); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_0014FC7A: ;
    ecx = MEM32(esi + 0xE8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2E7864);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014FC8Cu); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_0014FC8C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xD4)); /* movss */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014FD09; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0014FCA0: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0xE32CE994u);
    PUSH32(esp, 0x0014FCADu); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014FCAD: ;
    ecx = MEM32(esi + 0xF4);
    PUSH32(esp, eax);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014FCC4u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0014FCC4: ;
    edx = MEM32(esi + 0xCC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x2F21CC);
    PUSH32(esp, eax);
    MEM32(esi + 0xF4) = eax;
    PUSH32(esp, 0x0014FCDCu); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_0014FCDC: ;
    eax = MEM32(esi + 0xD4);
    ecx = MEM32(esi + 0xF4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2F2198);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014FCF4u); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_0014FCF4: ;
    edx = MEM32(esi + 0xF4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2E7864);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014FD06u); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_0014FD06: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014FD09: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xBC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC3CC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014FDC4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC3CC)) */

loc_0014FD1E: ;
    _fa = (uint32_t)(MEM32(esi + 0xF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xF0), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0014FDC4; /* jne: not equal / not zero */

loc_0014FD2A: ;
    SET_LO8(eax, MEM8(esi + 0xC4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0014FDC4; /* jne: not equal / not zero */

loc_0014FD38: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0014FD40u); RECOMP_ABI_CALL(0x0014EDB0u, sub_0014EDB0); /* call 0x0014EDB0 */

loc_0014FD40: ;
    goto loc_0014FE10;

loc_0014FD45: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014FD60; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014FD58: ;
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    goto loc_0014FD73;

loc_0014FD60: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014FC22; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0014FD73: ;
    eax = MEM32(esi + 0x138);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xEC);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014FD90u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0014FD90: ;
    edi = MEM32(esp + 0x64);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2E7864);
    PUSH32(esp, eax);
    MEM32(esi + 0xEC) = eax;
    PUSH32(esp, 0x0014FDA6u); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_0014FDA6: ;
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esi + 0xEC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2F218C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014FDBCu); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_0014FDBC: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0014FC26;

loc_0014FDC4: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3C4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xBC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014FDF7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0xBC)) */

loc_0014FDD5: ;
    eax = MEM32(esi + 0xF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0014FDF7; /* je: equal / zero */

loc_0014FDDF: ;
    ecx = MEM32(0x300E80);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014FDECu); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_0014FDEC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xF0) = ebx;
    goto loc_0014FE10;

loc_0014FDF7: ;
    ecx = MEM32(esi + 0xF0);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014FE0Du); RECOMP_ABI_CALL(0x001FF820u, sub_001FF820); /* call 0x001FF820 */

loc_0014FE0D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014FE10: ;
    ecx = MEM32(esi + 0xF0);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014FE26u); RECOMP_ABI_CALL(0x001FF820u, sub_001FF820); /* call 0x001FF820 */

loc_0014FE26: ;
    eax = MEM32(esi + 0xF0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0014FEC8; /* je: equal / zero */

loc_0014FE37: ;
    edx = MEM32(esi + 0xCC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x2F21CC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014FE49u); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_0014FE49: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esi + 0xD8); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DDA48); /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0014FE6C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0014FE64: ;
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    goto loc_0014FE85;

loc_0014FE6C: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0014FE85; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0014FE7F: ;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */

loc_0014FE85: ;
    eax = MEM32(esp + 0x54);
    ecx = MEM32(esi + 0xF0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2F2184);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014FE9Bu); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_0014FE9B: ;
    edx = MEM32(esi + 0xD4);
    eax = MEM32(esi + 0xF0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x2F2198);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014FEB3u); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_0014FEB3: ;
    ecx = MEM32(esi + 0xF0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2E7864);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014FEC5u); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_0014FEC5: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014FEC8: ;
    edx = MEM32(esi + 0xBC);
    MEM32(esi + 0xC0) = edx;

loc_0014FED4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x40)) >> 32) & 1);
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
 * sub_0014FF00
 * Original: 0x0014FF00 - 0x0015009E (414 bytes, 103 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FF00(void)
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

loc_0014FF00: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0014FF10u); RECOMP_ABI_CALL(0x00150D70u, sub_00150D70); /* call 0x00150D70 */

loc_0014FF10: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150097; /* je: equal / zero */

loc_0014FF1B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x807CE387u);
    PUSH32(esp, 0x0014FF26u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0014FF26: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014FF2Cu); RECOMP_ABI_CALL(0x00202CB0u, sub_00202CB0); /* call 0x00202CB0 */

loc_0014FF2C: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150096; /* je: equal / zero */

loc_0014FF39: ;
    PUSH32(esp, 0x392E7385);
    ecx = edi;
    PUSH32(esp, 0x0014FF45u); RECOMP_ABI_CALL(0x00212720u, sub_00212720); /* call 0x00212720 */

loc_0014FF45: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x19654EB4);
    ecx = edi;
    PUSH32(esp, 0x0014FF55u); RECOMP_ABI_CALL(0x00212720u, sub_00212720); /* call 0x00212720 */

loc_0014FF55: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0014FF7B; /* jp: parity */

loc_0014FF6D: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_0014FF7B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0014FF9C; /* jp: parity */

loc_0014FF8E: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_0014FF9C: ;
    PUSH32(esp, 0xA981CC59u);
    ecx = edi;
    PUSH32(esp, 0x0014FFA8u); RECOMP_ABI_CALL(0x00212720u, sub_00212720); /* call 0x00212720 */

loc_0014FFA8: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xA881CAC6u);
    ecx = edi;
    PUSH32(esp, 0x0014FFB8u); RECOMP_ABI_CALL(0x00212720u, sub_00212720); /* call 0x00212720 */

loc_0014FFB8: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xA781C933u);
    ecx = edi;
    PUSH32(esp, 0x0014FFC8u); RECOMP_ABI_CALL(0x00212720u, sub_00212720); /* call 0x00212720 */

loc_0014FFC8: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xA681C7A0u);
    ecx = edi;
    PUSH32(esp, 0x0014FFD8u); RECOMP_ABI_CALL(0x00212720u, sub_00212720); /* call 0x00212720 */

loc_0014FFD8: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xAD81D2A5u);
    ecx = edi;
    PUSH32(esp, 0x0014FFE8u); RECOMP_ABI_CALL(0x00212720u, sub_00212720); /* call 0x00212720 */

loc_0014FFE8: ;
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(esp + 0xC);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD418); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] / xmm0.f[0]; /* divss */
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0x38;
    MEM32(esi + 0x44) = 0;
    MEMF(esi + 0x48) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0x00150028u); RECOMP_ABI_CALL(0x0014F080u, sub_0014F080); /* call 0x0014F080 */

loc_00150028: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC894); /* mulss */
    PUSH32(esp, edx);
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] / xmm0.f[0]; /* divss */
    PUSH32(esp, eax);
    ecx = esi + 0x54;
    MEM32(esi + 0x60) = 1;
    MEMF(esi + 0x64) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0x00150058u); RECOMP_ABI_CALL(0x0014F080u, sub_0014F080); /* call 0x0014F080 */

loc_00150058: ;
    ecx = MEM32(esp + 0x18);
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2F21D0); /* mulss */
    PUSH32(esp, 0x3F800000);
    xmm0 = xmm1; /* movaps */
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    ecx = esi + 0x70;
    MEM32(esi + 0x7C) = 2;
    MEMF(esi + 0x80) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00150088u); RECOMP_ABI_CALL(0x0014F080u, sub_0014F080); /* call 0x0014F080 */

loc_00150088: ;
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 8); /* divss */
    MEMF(esi + 0xB0) = xmm1.f[0]; /* movss */

loc_00150096: ;
    POP32(esp, edi);

loc_00150097: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001500A0
 * Original: 0x001500A0 - 0x0015010B (107 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001500A0(void)
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

loc_001500A0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xB4)); /* fmul dword ptr [ecx + 0xb4] */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_00150106; /* ja: above (unsigned >) */

loc_001500B8: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC340); /* comiss */
    if ((_fca >= _fcb)) goto loc_00150106; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x2DC340)) */

loc_001500C9: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x4C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001500DB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp)) */

loc_001500D4: ;
    eax = 0xFFFFFFFEu;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001500DB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x50;

loc_001500E0: ;
    xmm0 = XMM_SCALAR(MEMF(edx + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0xB4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00150109; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_001500F6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001500E0; /* jl: less (signed <) */

loc_001500FF: ;
    eax = 2;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00150106: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00150109: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00150110
 * Original: 0x00150110 - 0x001502A1 (401 bytes, 113 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150110(void)
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

loc_00150110: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    xmm0 = XMM_SCALAR(MEMF(edi + 0xBC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00150219; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0015012B: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00150133u); RECOMP_ABI_CALL(0x001500A0u, sub_001500A0); /* call 0x001500A0 */

loc_00150133: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015015C; /* jl: less (signed <) */

loc_00150139: ;
    PUSH32(esp, 0x54019347);
    ecx = edi;
    PUSH32(esp, 0x00150145u); RECOMP_ABI_CALL(0x0014ED30u, sub_0014ED30); /* call 0x0014ED30 */

loc_00150145: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00150156u); RECOMP_ABI_CALL(0x0014EAC0u, sub_0014EAC0); /* call 0x0014EAC0 */

loc_00150156: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015015C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00150180; /* jne: not equal / not zero */

loc_00150161: ;
    SET_LO8(eax, MEM8(edi + 0xC4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150180; /* je: equal / zero */

loc_0015016B: ;
    ecx = MEM32(esi + 8);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = ecx + 0xA4;
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0014EAC0(); return; /* tail jmp 0x0014EAC0 */

loc_00150180: ;
    eax = MEM32(esi + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xBC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC340); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC090); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xD0); /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC3F0); /* mulss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001501C6; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_001501C1: ;
    xmm0 = xmm2; /* movaps */
    goto loc_001501CE;

loc_001501C6: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001501CE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_001501CB: ;
    xmm0 = xmm3; /* movaps */

loc_001501CE: ;
    ecx = MEM32(esi + 8);
    MEMF(ecx + 0xD0) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 8);
    xmm0 = XMM_SCALAR(MEMF(edx + 0xCC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00150200; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_001501ED: ;
    POP32(esp, ebx);
    eax = edx;
    POP32(esp, edi);
    xmm0 = xmm2; /* movaps */
    MEMF(eax + 0xCC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00150200: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00150208; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00150205: ;
    xmm0 = xmm3; /* movaps */

loc_00150208: ;
    eax = MEM32(esi + 8);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEMF(eax + 0xCC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00150219: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xD0)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x2DC090); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00150248; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00150243: ;
    xmm0 = xmm2; /* movaps */
    goto loc_00150250;

loc_00150248: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00150250; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0015024D: ;
    xmm0 = xmm3; /* movaps */

loc_00150250: ;
    ecx = MEM32(esi + 8);
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC3CC); /* mulss */
    MEMF(ecx + 0xD0) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 8);
    xmm0 = XMM_SCALAR(MEMF(edx + 0xCC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00150289; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00150277: ;
    eax = edx;
    POP32(esp, edi);
    xmm0 = xmm2; /* movaps */
    MEMF(eax + 0xCC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00150289: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00150291; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0015028E: ;
    xmm0 = xmm3; /* movaps */

loc_00150291: ;
    eax = MEM32(esi + 8);
    POP32(esp, edi);
    MEMF(eax + 0xCC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001502B0
 * Original: 0x001502B0 - 0x0015040E (350 bytes, 92 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001502B0(void)
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

loc_001502B0: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC3CC); /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xCC); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001502F3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001502EE: ;
    xmm0 = xmm1; /* movaps */
    goto loc_001502FB;

loc_001502F3: ;
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001502FB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_001502F8: ;
    xmm0 = xmm4; /* movaps */

loc_001502FB: ;
    eax = MEM32(esi + 8);
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2DC880); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xBC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0xD0); /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00150324; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_0015031F: ;
    xmm1 = xmm3; /* movaps */
    goto loc_0015032C;

loc_00150324: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015032C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00150329: ;
    xmm1 = xmm2; /* movaps */

loc_0015032C: ;
    eax = MEM32(esi + 8);
    xmm2 = XMM_SCALAR(MEMF(eax + 0xCC)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 0xCC) = xmm2.f[0]; /* movss */
    eax = MEM32(esi + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xD0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 0xD0) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xCC); /* comiss */
    ecx = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001503AA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0xCC)) */

loc_0015036D: ;
    PUSH32(esp, 0x00150372u); RECOMP_ABI_CALL(0x001500A0u, sub_001500A0); /* call 0x001500A0 */

loc_00150372: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = MEM32(esi + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00150387; /* jne: not equal / not zero */

loc_0015037A: ;
    edx = ecx + 0x2C;
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0014EAC0(); return; /* tail jmp 0x0014EAC0 */

loc_00150387: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015039C; /* jne: not equal / not zero */

loc_0015038C: ;
    eax = ecx + 0xA4;
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0014EAC0(); return; /* tail jmp 0x0014EAC0 */

loc_0015039C: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    edx = MEM32(eax + ecx + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001503CF;

loc_001503AA: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xCC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015040A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x18)) */

loc_001503B8: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00150401; /* jge: greater or equal (signed >=) */

loc_001503C0: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    edx = MEM32(eax + ecx + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001503CF: ;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001503DBu); RECOMP_ABI_CALL(0x0014F1C0u, sub_0014F1C0); /* call 0x0014F1C0 */

loc_001503DB: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x8C);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001503EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001503EBu); } /* indirect call */
    }

loc_001503EE: ;
    ecx = MEM32(esi + 8);
    eax = ecx + 0x8C;
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0014EAC0(); return; /* tail jmp 0x0014EAC0 */

loc_00150401: ;
    edx = MEM32(esi + 0x18);
    MEM32(ecx + 0xCC) = edx;

loc_0015040A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150410
 * Original: 0x00150410 - 0x001504B1 (161 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150410: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001504A3; /* je: equal / zero */

loc_00150421: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x34);
    eax = esp + 0x18;
    _fb = (uint32_t)(0x2E4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2E4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00150438u); RECOMP_ABI_CALL(0x00130090u, sub_00130090); /* call 0x00130090 */

loc_00150438: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00150444u); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_00150444: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ebx, MEM8(esp + 0x28));
    if (CMP_NE(_fa, _fb)) goto loc_00150485; /* jne: not equal / not zero */

loc_0015044F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150481; /* je: equal / zero */

loc_00150453: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x18A31280);
    PUSH32(esp, 0x00150460u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_00150460: ;
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);

loc_0015046B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00150472u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_00150472: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00150475: ;
    POP32(esp, edi);
    MEM8(esi + 0x30) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00150481: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150475; /* je: equal / zero */

loc_00150485: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00150475; /* jne: not equal / not zero */

loc_00150489: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0xFF972644u);
    PUSH32(esp, 0x00150496u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_00150496: ;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    goto loc_0015046B;

loc_001504A3: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    MEM8(esi + 0x30) = LO8(eax);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001504C0
 * Original: 0x001504C0 - 0x00150832 (882 bytes, 257 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001504C0(void)
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

loc_001504C0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015082B; /* je: equal / zero */

loc_001504D1: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x34);
    PUSH32(esp, 0x392E7385);
    _fb = (uint32_t)(0x2E4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2E4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001504E5u); RECOMP_ABI_CALL(0x00212720u, sub_00212720); /* call 0x00212720 */

loc_001504E5: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(edi + 0xA4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x98)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0015050A; /* je: equal / zero */

loc_00150501: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_0015050A: ;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00150516u); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_00150516: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x9C)); /* movss */
    fp_push(MEMF(eax)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x94)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DDC40); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00150578; /* jbe: below or equal (unsigned <=) */

loc_00150568: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    goto loc_0015057E;

loc_00150578: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */

loc_0015057E: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00150591; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0015058C: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00150599;

loc_00150591: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00150599; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00150596: ;
    xmm0 = xmm2; /* movaps */

loc_00150599: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    ecx = esp + 0x28;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = edi;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x001505C1u); RECOMP_ABI_CALL(0x00130090u, sub_00130090); /* call 0x00130090 */

loc_001505C1: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x001505CDu); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_001505CD: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015060A; /* jne: not equal / not zero */

loc_001505D3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca > _fcb)) goto loc_001505E9; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_001505E2: ;
    MEM32(esi + 0x14) = 0;

loc_001505E9: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x223FBDB2);
    PUSH32(esp, 0x001505F6u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_001505F6: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    goto loc_0015080F;

loc_0015060A: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015082A; /* je: equal / zero */

loc_00150615: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x807CE387u);
    PUSH32(esp, 0x00150622u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_00150622: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00150628u); RECOMP_ABI_CALL(0x00200140u, sub_00200140); /* call 0x00200140 */

loc_00150628: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015082A; /* je: equal / zero */

loc_00150633: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015064F; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00150647: ;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    goto loc_00150668;

loc_0015064F: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00150668; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00150662: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_00150668: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    edi = MEM32(esp + 8);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001506C2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00150677: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0xF613B933u);
    PUSH32(esp, 0x00150684u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_00150684: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00150698u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_00150698: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x2F21B0);
    PUSH32(esp, eax);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x001506ABu); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_001506AB: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2E7864);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001506BAu); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_001506BA: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001506E3;

loc_001506C2: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001506DC; /* je: equal / zero */

loc_001506C9: ;
    ecx = MEM32(0x300E80);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001506D6u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_001506D6: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001506DC: ;
    MEM32(esi + 0x14) = 0;

loc_001506E3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00150721; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_001506EE: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x57EFE39E);
    PUSH32(esp, 0x001506FBu); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_001506FB: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015070Fu); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0015070F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2E7864);
    PUSH32(esp, eax);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x0015071Eu); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_0015071E: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00150721: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x6216A7E2);
    PUSH32(esp, 0x0015072Eu); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_0015072E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00150740; /* jge: greater or equal (signed >=) */

loc_0015073A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00150740: ;
    ecx = MEM32(esi + 8);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x1D1BAEE2);
    PUSH32(esp, 0x00150751u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_00150751: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00150763; /* jge: greater or equal (signed >=) */

loc_0015075D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00150763: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_001507A3; /* jbe: below or equal (unsigned <=) */

loc_0015077A: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0xD8C54F41u);
    PUSH32(esp, 0x00150787u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_00150787: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015079Bu); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0015079B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = eax;
    goto loc_001507E8;

loc_001507A3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = MEM32(esi + 0x20);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001507D5; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001507BC: ;
    edx = MEM32(0x300E80);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001507C9u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_001507C9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = 0;
    goto loc_001507E8;

loc_001507D5: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001507E5u); RECOMP_ABI_CALL(0x001FF820u, sub_001FF820); /* call 0x001FF820 */

loc_001507E5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001507E8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x223FBDB2);
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00150800u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_00150800: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x1C);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);

loc_0015080F: ;
    PUSH32(esp, 0x00150814u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_00150814: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2F21CC);
    PUSH32(esp, eax);
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x00150827u); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_00150827: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015082A: ;
    POP32(esp, edi);

loc_0015082B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00150840
 * Original: 0x00150840 - 0x00150BAB (875 bytes, 282 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00150840: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00150BA4; /* je: equal / zero */

loc_00150851: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00150BA4; /* je: equal / zero */

loc_0015085C: ;
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00150868; /* je: equal / zero */

loc_00150863: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi + 0x24) = LO8(eax);

loc_00150868: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC0812ED3u);
    PUSH32(esp, 0x00150873u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_00150873: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0xEE05D83Bu);
    ebx = eax;
    PUSH32(esp, 0x00150882u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_00150882: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x2C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x2C8)) >> 32) & 1);
    ecx = ecx + 0x2C8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x00150894u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00150891u); } /* indirect call */
    }

loc_00150894: ;
    fp_push(MEMF(0x30E9DC)); /* fld float */
    ecx = MEM32(esi + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0xD1151B0Eu);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x001508AFu); RECOMP_ABI_CALL(0x00212720u, sub_00212720); /* call 0x00212720 */

loc_001508AF: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x6DE5D030);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001508C4u); RECOMP_ABI_CALL(0x00212720u, sub_00212720); /* call 0x00212720 */

loc_001508C4: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00150BA3; /* jbe: below or equal (unsigned <=) */

loc_001508DC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00150BA3; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_001508F4: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00150909; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00150901: ;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    goto loc_00150918;

loc_00150909: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00150BA3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00150918: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x98);
    PUSH32(esp, edi);
    edi = eax;
    edx = MEM32(edi);
    MEM32(esp + 0x18) = ecx;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x00150932u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015092Cu); } /* indirect call */
    }

loc_00150932: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    eax = MEM32(edi);
    ecx = edi;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xE8); PUSH32(esp, 0x00150944u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015093Eu); } /* indirect call */
    }

loc_00150944: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x18) / fp_top()); /* fdivr dword ptr [esp + 0x18] */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x2DC098)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00150965; /* jbe: below or equal (unsigned <=) */

loc_00150960: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_00150976;

loc_00150965: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0015097C; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00150976: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_0015097C: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_00150A49; /* jne: not equal / not zero */

loc_00150987: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebp = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_001509DF; /* je: equal / zero */

loc_0015098F: ;
    ecx = MEM32(esi + 0x20);
    edi = ecx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEM32(esp + 0x44) = ecx;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x001509A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001509A0u); } /* indirect call */
    }

loc_001509A3: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x001509B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001509ADu); } /* indirect call */
    }

loc_001509B0: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001509BAu); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_001509BA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x2F21E4);
    PUSH32(esp, eax);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x001509C9u); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_001509C9: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x2F21DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001509DCu); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_001509DC: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001509DF: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00150BA1; /* je: equal / zero */

loc_001509EB: ;
    ecx = MEM32(esi + 0x20);
    edi = ecx;
    edx = eax;
    eax = MEM32(edi);
    MEM32(esp + 0x3C) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00150A03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00150A00u); } /* indirect call */
    }

loc_00150A03: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00150A10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00150A0Du); } /* indirect call */
    }

loc_00150A10: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00150A1Au); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_00150A1A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x2F21E4);
    PUSH32(esp, eax);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x00150A29u); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_00150A29: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x2F21DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00150A3Cu); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_00150A3C: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00150A49: ;
    eax = MEM32(esi + 0x20);
    fp_push(MEMF(eax + 0x35C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(eax + 0x360)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x364)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x2DC098)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00150A85; /* jbe: below or equal (unsigned <=) */

loc_00150A80: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_00150A93;

loc_00150A85: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00150A93; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00150A90: ;
    xmm0 = xmm1; /* movaps */

loc_00150A93: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x1C); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DD6C0); /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2DC904); /* mulss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00150ABB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00150AB6: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00150AC3;

loc_00150ABB: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00150AC3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00150AC0: ;
    xmm0 = xmm2; /* movaps */

loc_00150AC3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    ebp = MEM32(esp + 0x14);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00150B37; /* je: equal / zero */

loc_00150AD9: ;
    edi = MEM32(esi + 0x20);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00150AE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00150AE6u); } /* indirect call */
    }

loc_00150AE9: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00150AF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00150AF3u); } /* indirect call */
    }

loc_00150AF6: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00150B00u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_00150B00: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x2F21E4);
    PUSH32(esp, eax);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x00150B0Fu); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_00150B0F: ;
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x2F21D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00150B21u); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_00150B21: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2F21DC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00150B34u); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_00150B34: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00150B37: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00150BA1; /* je: equal / zero */

loc_00150B3F: ;
    ecx = MEM32(esi + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edi = ecx;
    edx = MEM32(edi);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    MEM32(esp + 0x44) = ecx;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00150B53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00150B50u); } /* indirect call */
    }

loc_00150B53: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00150B60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00150B5Du); } /* indirect call */
    }

loc_00150B60: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00150B6Au); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_00150B6A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x2F21E4);
    PUSH32(esp, eax);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x00150B79u); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_00150B79: ;
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x2F21D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00150B8Bu); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_00150B8B: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2F21DC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00150B9Eu); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_00150B9E: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00150BA1: ;
    POP32(esp, ebp);
    POP32(esp, edi);

loc_00150BA3: ;
    POP32(esp, ebx);

loc_00150BA4: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00150BB0
 * Original: 0x00150BB0 - 0x00150BC2 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150BB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00150BD0
 * Original: 0x00150BD0 - 0x00150C17 (71 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150BD0: ;
    eax = MEM32(0x300E80);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00150BE2u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_00150BE2: ;
    edx = MEM32(0x300E80);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00150BF2u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_00150BF2: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150C15; /* je: equal / zero */

loc_00150BFC: ;
    PUSH32(esp, 0x807CE387u);
    PUSH32(esp, 0x00150C06u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_00150C06: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00150C15; /* jne: not equal / not zero */

loc_00150C0C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00150C12u); RECOMP_ABI_CALL(0x002000F0u, sub_002000F0); /* call 0x002000F0 */

loc_00150C12: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00150C15: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00150C20
 * Original: 0x00150C20 - 0x00150C2A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150C20(void)
{

loc_00150C20: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150C30
 * Original: 0x00150C30 - 0x00150C9A (106 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00150C30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00150C95; /* je: equal / zero */

loc_00150C3D: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00150C62; /* je: equal / zero */

loc_00150C44: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00150C4Au); RECOMP_ABI_CALL(0x001FED70u, sub_001FED70); /* call 0x001FED70 */

loc_00150C4A: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_00150C62; /* jb: below (unsigned <) */

loc_00150C5B: ;
    MEM32(esi + 0x20) = 0;

loc_00150C62: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    PUSH32(esp, 0x8EAB16D9u);
    PUSH32(esp, 0x00150C73u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_00150C73: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00150C84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00150C81u); } /* indirect call */
    }

loc_00150C84: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00150C8Eu); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_00150C8E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = eax;
    POP32(esp, edi);

loc_00150C95: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
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
 * sub_00150CA0
 * Original: 0x00150CA0 - 0x00150CD0 (48 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150CA0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150CCB; /* je: equal / zero */

loc_00150CAD: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    eax = esi + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00150CBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00150CBBu); } /* indirect call */
    }

loc_00150CBE: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00150CC8u); RECOMP_ABI_CALL(0x001FF820u, sub_001FF820); /* call 0x001FF820 */

loc_00150CC8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00150CCB: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00150CD0
 * Original: 0x00150CD0 - 0x00150D18 (72 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150CD0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00150D13; /* jne: not equal / not zero */

loc_00150CDC: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150D13; /* je: equal / zero */

loc_00150CE3: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    PUSH32(esp, 0xC171219Fu);
    PUSH32(esp, 0x00150CF1u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_00150CF1: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00150D02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00150CFFu); } /* indirect call */
    }

loc_00150D02: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00150D0Cu); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_00150D0C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x24) = eax;
    POP32(esp, edi);

loc_00150D13: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00150D20
 * Original: 0x00150D20 - 0x00150D65 (69 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150D20: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00150D5E; /* jne: not equal / not zero */

loc_00150D2C: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150D5E; /* je: equal / zero */

loc_00150D33: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00150D41u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_00150D41: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00150D52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00150D4Fu); } /* indirect call */
    }

loc_00150D52: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00150D5Au); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_00150D5A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_00150D5E: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150D70
 * Original: 0x00150D70 - 0x00150D87 (23 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150D70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00150D7Du); RECOMP_ABI_CALL(0x00202CB0u, sub_00202CB0); /* call 0x00202CB0 */

loc_00150D7D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150D90
 * Original: 0x00150D90 - 0x00150E1B (139 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00150D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150D90: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150E16; /* je: equal / zero */

loc_00150D9D: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150E16; /* je: equal / zero */

loc_00150DA4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x807CE387u);
    PUSH32(esp, 0x00150DB0u); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_00150DB0: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0xDB925AABu);
    edi = eax;
    PUSH32(esp, 0x00150DBFu); RECOMP_ABI_CALL(0x00212760u, sub_00212760); /* call 0x00212760 */

loc_00150DBF: ;
    ebx = eax;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00150DD4; /* jne: not equal / not zero */

loc_00150DC7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150DD4; /* je: equal / zero */

loc_00150DCB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00150DD1u); RECOMP_ABI_CALL(0x002000F0u, sub_002000F0); /* call 0x002000F0 */

loc_00150DD1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00150DD4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00150E06; /* je: equal / zero */

loc_00150DDD: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00150DED; /* jne: not equal / not zero */

loc_00150DE2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00150DE8u); RECOMP_ABI_CALL(0x00202CB0u, sub_00202CB0); /* call 0x00202CB0 */

loc_00150DE8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00150E06;

loc_00150DED: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00150E09; /* jne: not equal / not zero */

loc_00150DF2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150E09; /* je: equal / zero */

loc_00150DF6: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00150DFDu); RECOMP_ABI_CALL(0x00200030u, sub_00200030); /* call 0x00200030 */

loc_00150DFD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00150E03u); RECOMP_ABI_CALL(0x00202CB0u, sub_00202CB0); /* call 0x00202CB0 */

loc_00150E03: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00150E06: ;
    MEM32(esi + 8) = eax;

loc_00150E09: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x1C) = ebp;
    POP32(esp, ebx);

loc_00150E16: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150E20
 * Original: 0x00150E20 - 0x00150E32 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150E20(void)
{

loc_00150E20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00150E28u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_00150E28: ;
    MEM32(esi) = 0x2F21F0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00150E40
 * Original: 0x00150E40 - 0x00150EE6 (166 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150E40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150E40: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2F2204)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2E75BC)); /* movss */
    edx = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x18;
    edi = edx + 0x28;
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x10) = xmm0.f[0]; /* movss */
    MEM8(edx + 0x14) = 1;
    MEM32(edx) = 0;
    MEM32(edx + 4) = 0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEMF(edx + 0x34) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x38) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x40) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x44) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x54) = xmm1.f[0]; /* movss */
    MEMF(edx + 0x58) = xmm2.f[0]; /* movss */
    MEMF(edx + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x60) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x64) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x74) = xmm1.f[0]; /* movss */
    MEMF(edx + 0x78) = xmm2.f[0]; /* movss */
    MEMF(edx + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x80) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x84) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x20) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x24) = xmm0.f[0]; /* movss */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00150EF0
 * Original: 0x00150EF0 - 0x00150F0A (26 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150EF0(void)
{

loc_00150EF0: ;
    eax = MEM32(ecx);
    edx = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = edx;
    MEM8(ecx + 0x14) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150F10
 * Original: 0x00150F10 - 0x00150F2C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150F10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150F10: ;
    PUSH32(esp, 0x00150F15u); RECOMP_ABI_CALL(0x001FEC60u, sub_001FEC60); /* call 0x001FEC60 */

loc_00150F15: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00150F1Cu); RECOMP_ABI_CALL(0x00200220u, sub_00200220); /* call 0x00200220 */

loc_00150F1C: ;
    PUSH32(esp, 0x00150F21u); RECOMP_ABI_CALL(0x00206850u, sub_00206850); /* call 0x00206850 */

loc_00150F21: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00150F28u); RECOMP_ABI_CALL(0x00200220u, sub_00200220); /* call 0x00200220 */

loc_00150F28: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00150F30
 * Original: 0x00150F30 - 0x00150F35 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00150F30: ;
    g_seh_ebp = ebp; sub_001FFDA0(); return; /* tail jmp 0x001FFDA0 */

}

/**
 * sub_00150F40
 * Original: 0x00150F40 - 0x00150F45 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00150F40: ;
    g_seh_ebp = ebp; sub_001FFDB0(); return; /* tail jmp 0x001FFDB0 */

}

/**
 * sub_00150F50
 * Original: 0x00150F50 - 0x00150F55 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00150F50: ;
    g_seh_ebp = ebp; sub_001FFDE0(); return; /* tail jmp 0x001FFDE0 */

}

/**
 * sub_00150F60
 * Original: 0x00150F60 - 0x00150F65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00150F60: ;
    g_seh_ebp = ebp; sub_001FFE20(); return; /* tail jmp 0x001FFE20 */

}

/**
 * sub_00150F70
 * Original: 0x00150F70 - 0x00150F89 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150F70: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37BA08)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x37BA08) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150F88; /* je: equal / zero */

loc_00150F7C: ;
    MEM32(0x37BA08) = eax;
    MEM8(0x37B9E8) = 1;

loc_00150F88: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00150F90
 * Original: 0x00150F90 - 0x00150FA6 (22 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150F90(void)
{

loc_00150F90: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(0x37BA00) = xmm0.f[0]; /* movss */
    MEM8(0x37B9E8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00150FB0
 * Original: 0x00150FB0 - 0x00150FC6 (22 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150FB0(void)
{

loc_00150FB0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(0x37B9FC) = xmm0.f[0]; /* movss */
    MEM8(0x37B9E8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00150FD0
 * Original: 0x00150FD0 - 0x00151002 (50 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150FD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150FD0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3DDC94D8);
    MEM32(0x37BA10) = 3;
    PUSH32(esp, 0x00150FE6u); RECOMP_ABI_CALL(0x00200030u, sub_00200030); /* call 0x00200030 */

loc_00150FE6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xE28D61C6u);
    PUSH32(esp, 0x00150FF2u); RECOMP_ABI_CALL(0x00200030u, sub_00200030); /* call 0x00200030 */

loc_00150FF2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1CE36E21);
    PUSH32(esp, 0x00150FFEu); RECOMP_ABI_CALL(0x00200030u, sub_00200030); /* call 0x00200030 */

loc_00150FFE: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00151010
 * Original: 0x00151010 - 0x00151041 (49 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151010: ;
    PUSH32(esp, 0x00151015u); RECOMP_ABI_CALL(0x00150F10u, sub_00150F10); /* call 0x00150F10 */

loc_00151015: ;
    PUSH32(esp, 0x3DDC94D8);
    MEM32(0x37BA10) = 0;
    PUSH32(esp, 0x00151029u); RECOMP_ABI_CALL(0x002000F0u, sub_002000F0); /* call 0x002000F0 */

loc_00151029: ;
    PUSH32(esp, 0xE28D61C6u);
    PUSH32(esp, 0x00151033u); RECOMP_ABI_CALL(0x002000F0u, sub_002000F0); /* call 0x002000F0 */

loc_00151033: ;
    PUSH32(esp, 0x1CE36E21);
    PUSH32(esp, 0x0015103Du); RECOMP_ABI_CALL(0x002000F0u, sub_002000F0); /* call 0x002000F0 */

loc_0015103D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00151050
 * Original: 0x00151050 - 0x00151076 (38 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151050: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x11E1FC01);
    MEM32(0x37BA10) = 2;
    PUSH32(esp, 0x00151066u); RECOMP_ABI_CALL(0x00200030u, sub_00200030); /* call 0x00200030 */

loc_00151066: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3DDC94D8);
    PUSH32(esp, 0x00151072u); RECOMP_ABI_CALL(0x00200030u, sub_00200030); /* call 0x00200030 */

loc_00151072: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00151080
 * Original: 0x00151080 - 0x001510A2 (34 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151080: ;
    PUSH32(esp, 0x11E1FC01);
    MEM32(0x37BA10) = 0;
    PUSH32(esp, 0x00151094u); RECOMP_ABI_CALL(0x002000F0u, sub_002000F0); /* call 0x002000F0 */

loc_00151094: ;
    PUSH32(esp, 0x3DDC94D8);
    PUSH32(esp, 0x0015109Eu); RECOMP_ABI_CALL(0x002000F0u, sub_002000F0); /* call 0x002000F0 */

loc_0015109E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001510B0
 * Original: 0x001510B0 - 0x001510C0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001510B0(void)
{

loc_001510B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = 0x37C420;
    PUSH32(esp, 0x001510BFu); RECOMP_ABI_CALL(0x00150EF0u, sub_00150EF0); /* call 0x00150EF0 */

loc_001510BF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001510C0
 * Original: 0x001510C0 - 0x001510FA (58 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001510C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001510C0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x001510C7u); RECOMP_ABI_CALL(0x001FFDF0u, sub_001FFDF0); /* call 0x001FFDF0 */

loc_001510C7: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x001510CEu); RECOMP_ABI_CALL(0x001FFDF0u, sub_001FFDF0); /* call 0x001FFDF0 */

loc_001510CE: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x001510D5u); RECOMP_ABI_CALL(0x001FFDF0u, sub_001FFDF0); /* call 0x001FFDF0 */

loc_001510D5: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x001510DCu); RECOMP_ABI_CALL(0x001FFDF0u, sub_001FFDF0); /* call 0x001FFDF0 */

loc_001510DC: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x001510E3u); RECOMP_ABI_CALL(0x001FFDF0u, sub_001FFDF0); /* call 0x001FFDF0 */

loc_001510E3: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x001510EAu); RECOMP_ABI_CALL(0x001FFDF0u, sub_001FFDF0); /* call 0x001FFDF0 */

loc_001510EA: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    ecx = 0x37C420;
    PUSH32(esp, 0x001510F9u); RECOMP_ABI_CALL(0x00150EF0u, sub_00150EF0); /* call 0x00150EF0 */

loc_001510F9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00151100
 * Original: 0x00151100 - 0x0015113A (58 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151100: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00151107u); RECOMP_ABI_CALL(0x001FFE00u, sub_001FFE00); /* call 0x001FFE00 */

loc_00151107: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0015110Eu); RECOMP_ABI_CALL(0x001FFE00u, sub_001FFE00); /* call 0x001FFE00 */

loc_0015110E: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00151115u); RECOMP_ABI_CALL(0x001FFE00u, sub_001FFE00); /* call 0x001FFE00 */

loc_00151115: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x0015111Cu); RECOMP_ABI_CALL(0x001FFE00u, sub_001FFE00); /* call 0x001FFE00 */

loc_0015111C: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x00151123u); RECOMP_ABI_CALL(0x001FFE00u, sub_001FFE00); /* call 0x001FFE00 */

loc_00151123: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x0015112Au); RECOMP_ABI_CALL(0x001FFE00u, sub_001FFE00); /* call 0x001FFE00 */

loc_0015112A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = 0x37C420;
    PUSH32(esp, 0x00151139u); RECOMP_ABI_CALL(0x00150EF0u, sub_00150EF0); /* call 0x00150EF0 */

loc_00151139: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00151140
 * Original: 0x00151140 - 0x0015114D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151140(void)
{

loc_00151140: ;
    PUSH32(esp, 3);
    ecx = 0x37C420;
    PUSH32(esp, 0x0015114Cu); RECOMP_ABI_CALL(0x00150EF0u, sub_00150EF0); /* call 0x00150EF0 */

loc_0015114C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00151150
 * Original: 0x00151150 - 0x0015115D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151150(void)
{

loc_00151150: ;
    PUSH32(esp, 0);
    ecx = 0x37C420;
    PUSH32(esp, 0x0015115Cu); RECOMP_ABI_CALL(0x00150EF0u, sub_00150EF0); /* call 0x00150EF0 */

loc_0015115C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00151160
 * Original: 0x00151160 - 0x00151184 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151160: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, 1);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0xD) = LO8(edx);
    MEM8(ecx + 0x2C) = LO8(eax);
    MEM8(ecx + 0x2D) = LO8(eax);
    MEM8(ecx + 0xC) = LO8(edx);
    MEM32(ecx + 0x24) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00151190
 * Original: 0x00151190 - 0x001511DE (78 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151190: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001511A4; /* jne: not equal / not zero */

loc_0015119D: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001511D9; /* jne: not equal / not zero */

loc_001511A2: ;
    goto loc_001511CE;

loc_001511A4: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001511CE; /* je: equal / zero */

loc_001511AA: ;
    ecx = MEM32(0x300E80);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001511B7u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_001511B7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;

loc_001511CE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 4) = ebx;
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */

loc_001511D9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001511E0
 * Original: 0x001511E0 - 0x00151207 (39 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001511E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001511E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001511FE; /* je: equal / zero */

loc_001511EC: ;
    ecx = MEM32(0x300E80);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001511F9u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_001511F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edi;

loc_001511FE: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00151210
 * Original: 0x00151210 - 0x00151217 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151210: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00151220
 * Original: 0x00151220 - 0x0015122D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151220(void)
{

loc_00151220: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(ecx + 0xD) = 0;
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00151230
 * Original: 0x00151230 - 0x0015123D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151230(void)
{

loc_00151230: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(ecx + 0xD) = 1;
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00151240
 * Original: 0x00151240 - 0x00151270 (48 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151240: ;
    eax = MEM32(ecx + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00151270
 * Original: 0x00151270 - 0x00151289 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151270: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 0x10) = eax;
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x54) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00151290
 * Original: 0x00151290 - 0x0015129B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151290(void)
{

loc_00151290: ;
    MEM32(0x37B9B0) = 0x37C4C8;
    esp += 4; return; /* ret */

}

/**
 * sub_001512A0
 * Original: 0x001512A0 - 0x00151301 (97 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001512A0(void)
{

loc_001512A0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(ecx + 0x30);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 0x34);
    MEM32(eax + 0x34) = edx;
    ecx = MEM32(ecx + 0x38);
    MEM32(eax + 0x38) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00151310
 * Original: 0x00151310 - 0x0015132D (29 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151310(void)
{

loc_00151310: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx) = 0;
    MEM32(ecx + 4) = 3;
    MEM32(ecx + 8) = 0;
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00151330
 * Original: 0x00151330 - 0x00151354 (36 bytes, 10 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151330(void)
{

loc_00151330: ;
    edx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00151360
 * Original: 0x00151360 - 0x00151390 (48 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151360: ;
    eax = MEM32(ecx + 0x200);
    edx = MEM32(esp + 4);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = MEM32(edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(eax + 8) = esi;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = edx;
    MEM32(ecx + 0x200) = MEM32(ecx + 0x200) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x200)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00151390
 * Original: 0x00151390 - 0x001513A9 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151390(void)
{

loc_00151390: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx) = 0;
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001513B0
 * Original: 0x001513B0 - 0x001513D0 (32 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001513B0(void)
{

loc_001513B0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0xC) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001513D0
 * Original: 0x001513D0 - 0x001513DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001513D0(void)
{

loc_001513D0: ;
    MEM32(ecx + 0x200) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001513E0
 * Original: 0x001513E0 - 0x001514B3 (211 bytes, 67 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001513E0(void)
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

loc_001513E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x200);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015147E; /* jge: greater or equal (signed >=) */

loc_001513F5: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    if (CMP_LE(_fas, _fbs)) goto loc_00151462; /* jle: less or equal (signed <=) */

loc_00151406: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC3DC)); /* movss */
    eax = esi + 0xC;

loc_00151411: ;
    _fa = (uint32_t)(MEM32(eax + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -12), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00151454; /* jne: not equal / not zero */

loc_00151416: ;
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + -4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + -8); /* subss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00151474; /* ja: above (unsigned >) (xmm3.f[0] vs xmm4.f[0]) */

loc_00151454: ;
    ebp = MEM32(esi + 0x200);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00151411; /* jl: less (signed <) */

loc_00151462: ;
    PUSH32(esp, edi);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0015146Eu); RECOMP_ABI_CALL(0x001513B0u, sub_001513B0); /* call 0x001513B0 */

loc_0015146E: ;
    MEM32(esi + 0x200) = MEM32(esi + 0x200) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x200)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00151474: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0015147E: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001514A9u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_001514A9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001514C0
 * Original: 0x001514C0 - 0x00151522 (98 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001514C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001514C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x200);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00151510; /* jle: less or equal (signed <=) */

loc_001514D3: ;
    PUSH32(esp, esi);
    esi = ebx;

loc_001514D6: ;
    eax = MEM32(esi);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001514FEu); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_001514FE: ;
    eax = MEM32(ebx + 0x200);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001514D6; /* jl: less (signed <) */

loc_0015150F: ;
    POP32(esp, esi);

loc_00151510: ;
    POP32(esp, edi);
    MEM32(ebx + 0x200) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00151530
 * Original: 0x00151530 - 0x0015156F (63 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151530: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015155C; /* je: equal / zero */

loc_0015153A: ;
    esi = ZX16(MEM16(ecx));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015155C; /* jle: less or equal (signed <=) */

loc_00151543: ;
    edx = ecx + 0x1644;
    /* nop */

loc_00151550: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151563; /* je: equal / zero */

loc_00151554: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00151550; /* jl: less (signed <) */

loc_0015155C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00151563: ;
    eax = MEM32(ecx + eax * 8 + 0x1648);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00151570
 * Original: 0x00151570 - 0x00151576 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151570(void)
{

loc_00151570: ;
    eax = MEM32(0x37BA18);
    esp += 4; return; /* ret */

}

/**
 * sub_00151580
 * Original: 0x00151580 - 0x001515D1 (81 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151580(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00151580: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 4); /* subss */
    xmm3 = XMM_SCALAR(MEMF(0x30F2E8)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001515BB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001515B0: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

loc_001515BB: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_001515CC; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_001515C6: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_001515CC: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001515E0
 * Original: 0x001515E0 - 0x00151B42 (1378 bytes, 396 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001515E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001515E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3C0)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 8); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0015160D; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001515FD: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3C4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0015160D; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0015160A: ;
    xmm0 = xmm1; /* movaps */

loc_0015160D: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2F220C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_00151646; /* ja: above (unsigned >) */

loc_0015163B: ;
    SET_LO8(eax, MEM8(esi + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00151B2D; /* je: equal / zero */

loc_00151646: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015167F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_00151655: ;
    xmm5 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC090); /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm5.f[0]; /* movss */
    ebp = 2;
    ebx = 1;
    goto loc_001516A3;

loc_0015167F: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC090); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    ebp = 1;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm5 = xmm1; /* movaps */

loc_001516A3: ;
    xmm1 = XMM_SCALAR(MEMF(0x30F2E8)); /* movss */
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    PUSH32(esp, edi);
    xmm2 = xmm1; /* movaps */
    xmm3 = xmm1; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_001517EC; /* jne: not equal / not zero */

loc_001516C9: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001516E1; /* jne: not equal / not zero */

loc_001516D1: ;
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x10); /* addss */
    MEMF(esi + 0x10) = xmm2.f[0]; /* movss */
    goto loc_00151732;

loc_001516E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001516F6; /* jne: not equal / not zero */

loc_001516E6: ;
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x10); /* addss */
    MEMF(esi + 0x10) = xmm1.f[0]; /* movss */
    goto loc_00151732;

loc_001516F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015170B; /* jne: not equal / not zero */

loc_001516FB: ;
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x10); /* addss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    goto loc_00151732;

loc_0015170B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00151720; /* jne: not equal / not zero */

loc_00151710: ;
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x10); /* addss */
    MEMF(esi + 0x10) = xmm3.f[0]; /* movss */
    goto loc_00151732;

loc_00151720: ;
    xmm4.f[0] = xmm4.f[0] * MEMF(0x2DC8D4); /* mulss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esi + 0x10); /* addss */
    MEMF(esi + 0x10) = xmm4.f[0]; /* movss */

loc_00151732: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x30F2E8); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00151755; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0015174A: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = xmm2; /* movaps */
    if ((_fca > _fcb)) goto loc_00151755; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_00151752: ;
    xmm0 = xmm1; /* movaps */

loc_00151755: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00151767; /* jp: parity */

loc_00151763: ;
    MEM8(esi + 0x14) = 0;

loc_00151767: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00151770: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001517E1; /* je: equal / zero */

loc_00151774: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001517E1; /* je: equal / zero */

loc_00151779: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001517E1; /* je: equal / zero */

loc_0015177E: ;
    eax = edi + ebx * 8;
    xmm0 = XMM_SCALAR(MEMF(esi + eax * 4 + 0x28)); /* movss */
    ecx = edi + ebp * 8;
    xmm1 = XMM_SCALAR(MEMF(esi + ecx * 4 + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x10); /* addss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x30F2E8); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001517B8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001517B3: ;
    xmm0 = xmm1; /* movaps */
    goto loc_001517C0;

loc_001517B8: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001517C0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_001517BD: ;
    xmm0 = xmm2; /* movaps */

loc_001517C0: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 0x001517D5u); RECOMP_ABI_CALL(0x00212DD0u, sub_00212DD0); /* call 0x00212DD0 */

loc_001517D5: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001517E1: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00151770; /* jl: less (signed <) */

loc_001517E7: ;
    goto loc_001518FD;

loc_001517EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00151875; /* jne: not equal / not zero */

loc_001517F5: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x30F2E8); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015181F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0015181A: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00151827;

loc_0015181F: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00151827; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00151824: ;
    xmm0 = xmm2; /* movaps */

loc_00151827: ;
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x30F2E8); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00151841; /* jp: parity */

loc_0015183D: ;
    MEM8(esi + 0x14) = 0;

loc_00151841: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00151843: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015186A; /* je: equal / zero */

loc_00151847: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015186A; /* je: equal / zero */

loc_0015184C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015186A; /* je: equal / zero */

loc_00151851: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x10); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00151867u); RECOMP_ABI_CALL(0x00212DD0u, sub_00212DD0); /* call 0x00212DD0 */

loc_00151867: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015186A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00151843; /* jl: less (signed <) */

loc_00151870: ;
    goto loc_001518FD;

loc_00151875: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00151926; /* jne: not equal / not zero */

loc_0015187E: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x30F2E8); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001518A8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001518A3: ;
    xmm0 = xmm1; /* movaps */
    goto loc_001518B0;

loc_001518A8: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001518B0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_001518AD: ;
    xmm0 = xmm2; /* movaps */

loc_001518B0: ;
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x30F2E8); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001518CA; /* jp: parity */

loc_001518C6: ;
    MEM8(esi + 0x14) = 0;

loc_001518CA: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001518D0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001518F7; /* je: equal / zero */

loc_001518D4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001518F7; /* je: equal / zero */

loc_001518D9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001518F7; /* je: equal / zero */

loc_001518DE: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x10); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 0x001518F4u); RECOMP_ABI_CALL(0x00212DD0u, sub_00212DD0); /* call 0x00212DD0 */

loc_001518F4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001518F7: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001518D0; /* jl: less (signed <) */

loc_001518FD: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00151908u); RECOMP_ABI_CALL(0x00212DD0u, sub_00212DD0); /* call 0x00212DD0 */

loc_00151908: ;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00151913u); RECOMP_ABI_CALL(0x00212DD0u, sub_00212DD0); /* call 0x00212DD0 */

loc_00151913: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0015191Eu); RECOMP_ABI_CALL(0x00212DD0u, sub_00212DD0); /* call 0x00212DD0 */

loc_0015191E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00151B24;

loc_00151926: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001519BC; /* jne: not equal / not zero */

loc_0015192F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x2DC8D4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x2EBCFC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00151957; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00151952: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00151962;

loc_00151957: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00151962; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0015195F: ;
    xmm0 = xmm2; /* movaps */

loc_00151962: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00151974; /* jp: parity */

loc_00151970: ;
    MEM8(esi + 0x14) = 0;

loc_00151974: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00151976: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001519A4; /* ja: above (unsigned >) */

loc_0015197B: ;
    { uint32_t _jt = MEM32(edi * 4 + 0x151B44); /* switch: 5 entries, 4 targets */
    if (_jt == 0x00151982u) goto loc_00151982;
    if (_jt == 0x00151994u) goto loc_00151994;
    if (_jt == 0x0015199Cu) goto loc_0015199C;
    if (_jt == 0x001519A4u) goto loc_001519A4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00151982: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x10); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    goto loc_001519A8;

loc_00151994: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    goto loc_001519A9;

loc_0015199C: ;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    goto loc_001519A9;

loc_001519A4: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ecx);

loc_001519A8: ;
    PUSH32(esp, edi);

loc_001519A9: ;
    PUSH32(esp, 0x001519AEu); RECOMP_ABI_CALL(0x00212DD0u, sub_00212DD0); /* call 0x00212DD0 */

loc_001519AE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00151976; /* jl: less (signed <) */

loc_001519B7: ;
    goto loc_00151B24;

loc_001519BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00151AA4; /* jne: not equal / not zero */

loc_001519C5: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    MEMF(esi + 0x10) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x30F2E8); /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0x001519FAu); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_001519FA: ;
    MEMF(esi + 0x10) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x30F2E8)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00151A18; /* jp: parity */

loc_00151A14: ;
    MEM8(esi + 0x14) = 0;

loc_00151A18: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00151A20: ;
    eax = edi;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    if ((_fa == 0)) goto loc_00151A78; /* je: equal / zero */

loc_00151A28: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00151A5D; /* je: equal / zero */

loc_00151A2B: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00151A42; /* je: equal / zero */

loc_00151A30: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x10); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edi);
    goto loc_00151A91;

loc_00151A42: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC3D0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x24); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 3);
    goto loc_00151A91;

loc_00151A5D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC3D0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x20); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 1);
    goto loc_00151A91;

loc_00151A78: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC3D0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x1C); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);

loc_00151A91: ;
    PUSH32(esp, 0x00151A96u); RECOMP_ABI_CALL(0x00212DD0u, sub_00212DD0); /* call 0x00212DD0 */

loc_00151A96: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00151A20; /* jl: less (signed <) */

loc_00151A9F: ;
    goto loc_00151B24;

loc_00151AA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00151B2A; /* jne: not equal / not zero */

loc_00151AAD: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2F2208)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00151AD4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00151ACF: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00151ADC;

loc_00151AD4: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00151ADC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00151AD9: ;
    xmm0 = xmm2; /* movaps */

loc_00151ADC: ;
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x30F2E8); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00151AF6; /* jp: parity */

loc_00151AF2: ;
    MEM8(esi + 0x14) = 0;

loc_00151AF6: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00151AF8: ;
    eax = edi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00151B10; /* je: equal / zero */

loc_00151AFD: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x10); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edi);
    goto loc_00151B16;

loc_00151B10: ;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 1);

loc_00151B16: ;
    PUSH32(esp, 0x00151B1Bu); RECOMP_ABI_CALL(0x00212DD0u, sub_00212DD0); /* call 0x00212DD0 */

loc_00151B1B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00151AF8; /* jl: less (signed <) */

loc_00151B24: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */

loc_00151B2A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00151B2D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00151B60
 * Original: 0x00151B60 - 0x00151D9B (571 bytes, 178 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151B60(void)
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

loc_00151B60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00151B6Eu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00151B6E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x8E31017Fu);
    ecx = esi;
    PUSH32(esp, 0x00151B7Fu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_00151B7F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151B90; /* je: equal / zero */

loc_00151B83: ;
    ecx = esi;
    PUSH32(esp, 0x00151B8Au); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_00151B8A: ;
    MEMF(0x30F2E8) = (float)fp_top(); fp_pop(); /* fstp */

loc_00151B90: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x28C84A34);
    ecx = esi;
    PUSH32(esp, 0x00151B9Eu); RECOMP_ABI_CALL(0x001EEFB0u, sub_001EEFB0); /* call 0x001EEFB0 */

loc_00151B9E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151D96; /* je: equal / zero */

loc_00151BA6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x933B5BDEu);
    ecx = esi;
    PUSH32(esp, 0x00151BB8u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_00151BB8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151BD1; /* je: equal / zero */

loc_00151BBC: ;
    ecx = esi;
    PUSH32(esp, 0x00151BC3u); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_00151BC3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00151BC9u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00151BC9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x37BA0C) = eax;

loc_00151BD1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xD13A63D1u);
    ecx = esi;
    PUSH32(esp, 0x00151BDFu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_00151BDF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151C89; /* je: equal / zero */

loc_00151BE7: ;
    ecx = esi;
    PUSH32(esp, 0x00151BEEu); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_00151BEE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00151BF4u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00151BF4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x00151C00u); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_00151C00: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    PUSH32(esp, 0x00151C0Bu); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_00151C0B: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    PUSH32(esp, 0x00151C16u); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_00151C16: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x37BA14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00151C3F; /* jle: less or equal (signed <=) */

loc_00151C26: ;
    ecx = 0x37BA20;
    edi = edx;
    /* nop */

loc_00151C30: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = ecx; /* cmove */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00151C30; /* jne: not equal / not zero */

loc_00151C3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00151C52; /* jne: not equal / not zero */

loc_00151C3F: ;
    eax = edx + edx * 4;
    eax = eax * 8 + 0x37BA20;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ebx;
    MEM32(0x37BA14) = edx;

loc_00151C52: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    PUSH32(esp, 0xD13A63D1u);
    ecx = esi;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00151C81u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_00151C81: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00151BE7; /* jne: not equal / not zero */

loc_00151C89: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xAEBBAD4Du);
    ecx = esi;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00151C9Fu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_00151C9F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151D77; /* je: equal / zero */

loc_00151CA7: ;
    ecx = esi;
    PUSH32(esp, 0x00151CAEu); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_00151CAE: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00151CB6u); RECOMP_ABI_CALL(0x00204D10u, sub_00204D10); /* call 0x00204D10 */

loc_00151CB6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x00151CC2u); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_00151CC2: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00151CCAu); RECOMP_ABI_CALL(0x00204D10u, sub_00204D10); /* call 0x00204D10 */

loc_00151CCA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00151CD6u); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_00151CD6: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00151CDEu); RECOMP_ABI_CALL(0x00204D10u, sub_00204D10); /* call 0x00204D10 */

loc_00151CDE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xADA7AFDBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xADA7AFDBu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00151CEA; /* jne: not equal / not zero */

loc_00151CE8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00151CEA: ;
    edx = MEM32(0x37BA14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00151D0B; /* jle: less or equal (signed <=) */

loc_00151CF6: ;
    ecx = 0x37BA20;
    goto loc_00151D00;

    /* nop */

loc_00151D00: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) ebx = ecx; /* cmove */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00151D00; /* jne: not equal / not zero */

loc_00151D0B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7678F1A5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x7678F1A5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00151D41; /* ja: above (unsigned >) */

loc_00151D13: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00151D3C; /* je: equal / zero */

loc_00151D15: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6446BDC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x6446BDC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151D37; /* je: equal / zero */

loc_00151D1D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x45C3FDDC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x45C3FDDC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151D32; /* je: equal / zero */

loc_00151D25: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63103B03) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x63103B03 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00151D59; /* jne: not equal / not zero */

loc_00151D2D: ;
    MEM32(ebx + 0x24) = eax;
    goto loc_00151D59;

loc_00151D32: ;
    MEM32(ebx + 0x1C) = eax;
    goto loc_00151D59;

loc_00151D37: ;
    MEM32(ebx + 0x20) = eax;
    goto loc_00151D59;

loc_00151D3C: ;
    MEM32(ebx + 0x10) = eax;
    goto loc_00151D59;

loc_00151D41: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x79BED1FB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x79BED1FB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151D56; /* je: equal / zero */

loc_00151D49: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDF5F4622u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xDF5F4622u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00151D59; /* jne: not equal / not zero */

loc_00151D51: ;
    MEM32(ebx + 0x18) = eax;
    goto loc_00151D59;

loc_00151D56: ;
    MEM32(ebx + 0x14) = eax;

loc_00151D59: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0xAEBBAD4Du);
    ecx = esi;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00151D6Fu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_00151D6F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00151CA7; /* jne: not equal / not zero */

loc_00151D77: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00151D82u); RECOMP_ABI_CALL(0x001EEFB0u, sub_001EEFB0); /* call 0x001EEFB0 */

loc_00151D82: ;
    eax = MEM32(0x37BA0C);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(0x37BA04) = eax;
    MEM8(0x37B9E8) = 1;
    POP32(esp, ebx);

loc_00151D96: ;
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
 * sub_00151DA0
 * Original: 0x00151DA0 - 0x00151DB0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151DA0(void)
{

loc_00151DA0: ;
    eax = 1;
    MEM32(0x37BA10) = eax;
    MEM8(0x37B9E0) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00151DB0
 * Original: 0x00151DB0 - 0x00151DBD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151DB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x37BA10) = eax;
    MEM8(0x37B9E0) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00151DC0
 * Original: 0x00151DC0 - 0x00151E1D (93 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151DC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151DC0: ;
    PUSH32(esp, 0xE28D61C6u);
    PUSH32(esp, 0x00151DCAu); RECOMP_ABI_CALL(0x002000F0u, sub_002000F0); /* call 0x002000F0 */

loc_00151DCA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x45334CEC);
    PUSH32(esp, 0x00151DD6u); RECOMP_ABI_CALL(0x00200030u, sub_00200030); /* call 0x00200030 */

loc_00151DD6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x37B9B4;
    PUSH32(esp, 0x00151DE3u); RECOMP_ABI_CALL(0x00151220u, sub_00151220); /* call 0x00151220 */

loc_00151DE3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00151DEAu); RECOMP_ABI_CALL(0x001FFDF0u, sub_001FFDF0); /* call 0x001FFDF0 */

loc_00151DEA: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00151DF1u); RECOMP_ABI_CALL(0x001FFDF0u, sub_001FFDF0); /* call 0x001FFDF0 */

loc_00151DF1: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00151DF8u); RECOMP_ABI_CALL(0x001FFDF0u, sub_001FFDF0); /* call 0x001FFDF0 */

loc_00151DF8: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00151DFFu); RECOMP_ABI_CALL(0x001FFDF0u, sub_001FFDF0); /* call 0x001FFDF0 */

loc_00151DFF: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x00151E06u); RECOMP_ABI_CALL(0x001FFDF0u, sub_001FFDF0); /* call 0x001FFDF0 */

loc_00151E06: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x00151E0Du); RECOMP_ABI_CALL(0x001FFDF0u, sub_001FFDF0); /* call 0x001FFDF0 */

loc_00151E0D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = 0x37C420;
    PUSH32(esp, 0x00151E1Cu); RECOMP_ABI_CALL(0x00150EF0u, sub_00150EF0); /* call 0x00150EF0 */

loc_00151E1C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00151E20
 * Original: 0x00151E20 - 0x00151E7D (93 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151E20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151E20: ;
    PUSH32(esp, 0x45334CEC);
    PUSH32(esp, 0x00151E2Au); RECOMP_ABI_CALL(0x002000F0u, sub_002000F0); /* call 0x002000F0 */

loc_00151E2A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xE28D61C6u);
    PUSH32(esp, 0x00151E36u); RECOMP_ABI_CALL(0x00200030u, sub_00200030); /* call 0x00200030 */

loc_00151E36: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x37B9B4;
    PUSH32(esp, 0x00151E43u); RECOMP_ABI_CALL(0x00151230u, sub_00151230); /* call 0x00151230 */

loc_00151E43: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00151E4Au); RECOMP_ABI_CALL(0x001FFE00u, sub_001FFE00); /* call 0x001FFE00 */

loc_00151E4A: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00151E51u); RECOMP_ABI_CALL(0x001FFE00u, sub_001FFE00); /* call 0x001FFE00 */

loc_00151E51: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00151E58u); RECOMP_ABI_CALL(0x001FFE00u, sub_001FFE00); /* call 0x001FFE00 */

loc_00151E58: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00151E5Fu); RECOMP_ABI_CALL(0x001FFE00u, sub_001FFE00); /* call 0x001FFE00 */

loc_00151E5F: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x00151E66u); RECOMP_ABI_CALL(0x001FFE00u, sub_001FFE00); /* call 0x001FFE00 */

loc_00151E66: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x00151E6Du); RECOMP_ABI_CALL(0x001FFE00u, sub_001FFE00); /* call 0x001FFE00 */

loc_00151E6D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = 0x37C420;
    PUSH32(esp, 0x00151E7Cu); RECOMP_ABI_CALL(0x00150EF0u, sub_00150EF0); /* call 0x00150EF0 */

loc_00151E7C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00151E80
 * Original: 0x00151E80 - 0x00151EDD (93 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151E80: ;
    PUSH32(esp, 0xE28D61C6u);
    PUSH32(esp, 0x00151E8Au); RECOMP_ABI_CALL(0x002000F0u, sub_002000F0); /* call 0x002000F0 */

loc_00151E8A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x11E1FC01);
    PUSH32(esp, 0x00151E96u); RECOMP_ABI_CALL(0x00200030u, sub_00200030); /* call 0x00200030 */

loc_00151E96: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x37B9B4;
    PUSH32(esp, 0x00151EA3u); RECOMP_ABI_CALL(0x00151220u, sub_00151220); /* call 0x00151220 */

loc_00151EA3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00151EAAu); RECOMP_ABI_CALL(0x001FFDF0u, sub_001FFDF0); /* call 0x001FFDF0 */

loc_00151EAA: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00151EB1u); RECOMP_ABI_CALL(0x001FFDF0u, sub_001FFDF0); /* call 0x001FFDF0 */

loc_00151EB1: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00151EB8u); RECOMP_ABI_CALL(0x001FFDF0u, sub_001FFDF0); /* call 0x001FFDF0 */

loc_00151EB8: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00151EBFu); RECOMP_ABI_CALL(0x001FFDF0u, sub_001FFDF0); /* call 0x001FFDF0 */

loc_00151EBF: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x00151EC6u); RECOMP_ABI_CALL(0x001FFDF0u, sub_001FFDF0); /* call 0x001FFDF0 */

loc_00151EC6: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x00151ECDu); RECOMP_ABI_CALL(0x001FFDF0u, sub_001FFDF0); /* call 0x001FFDF0 */

loc_00151ECD: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    ecx = 0x37C420;
    PUSH32(esp, 0x00151EDCu); RECOMP_ABI_CALL(0x00150EF0u, sub_00150EF0); /* call 0x00150EF0 */

loc_00151EDC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00151EE0
 * Original: 0x00151EE0 - 0x00151F3D (93 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151EE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151EE0: ;
    PUSH32(esp, 0x11E1FC01);
    PUSH32(esp, 0x00151EEAu); RECOMP_ABI_CALL(0x002000F0u, sub_002000F0); /* call 0x002000F0 */

loc_00151EEA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xE28D61C6u);
    PUSH32(esp, 0x00151EF6u); RECOMP_ABI_CALL(0x00200030u, sub_00200030); /* call 0x00200030 */

loc_00151EF6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x37B9B4;
    PUSH32(esp, 0x00151F03u); RECOMP_ABI_CALL(0x00151230u, sub_00151230); /* call 0x00151230 */

loc_00151F03: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00151F0Au); RECOMP_ABI_CALL(0x001FFE00u, sub_001FFE00); /* call 0x001FFE00 */

loc_00151F0A: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00151F11u); RECOMP_ABI_CALL(0x001FFE00u, sub_001FFE00); /* call 0x001FFE00 */

loc_00151F11: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00151F18u); RECOMP_ABI_CALL(0x001FFE00u, sub_001FFE00); /* call 0x001FFE00 */

loc_00151F18: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00151F1Fu); RECOMP_ABI_CALL(0x001FFE00u, sub_001FFE00); /* call 0x001FFE00 */

loc_00151F1F: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x00151F26u); RECOMP_ABI_CALL(0x001FFE00u, sub_001FFE00); /* call 0x001FFE00 */

loc_00151F26: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x00151F2Du); RECOMP_ABI_CALL(0x001FFE00u, sub_001FFE00); /* call 0x001FFE00 */

loc_00151F2D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = 0x37C420;
    PUSH32(esp, 0x00151F3Cu); RECOMP_ABI_CALL(0x00150EF0u, sub_00150EF0); /* call 0x00150EF0 */

loc_00151F3C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00151F40
 * Original: 0x00151F40 - 0x00151F45 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00151F40: ;
    g_seh_ebp = ebp; sub_001511E0(); return; /* tail jmp 0x001511E0 */

}

/**
 * sub_00151F50
 * Original: 0x00151F50 - 0x0015201A (202 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00151F50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00151F6A; /* jne: not equal / not zero */

loc_00151F5F: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00152015; /* jne: not equal / not zero */

loc_00151F68: ;
    goto loc_00151F94;

loc_00151F6A: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00151F94; /* je: equal / zero */

loc_00151F70: ;
    ecx = MEM32(0x300E80);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00151F7Du); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_00151F7D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;

loc_00151F94: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xADA7AFDBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xADA7AFDBu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00151FDD; /* jne: not equal / not zero */

loc_00151F9C: ;
    ecx = MEM32(0x30EFF0);
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
    MEM32(0x30EFF0) = ecx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 3;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(esi + 0x24) = edx;

loc_00151FDD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = edi;
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x413FA8)); /* movss */
    MEMF(esi + 0x18) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0x1C) = edx;
    MEM8(esi + 0xC) = 1;
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */

loc_00152015: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00152020
 * Original: 0x00152020 - 0x00152203 (483 bytes, 136 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152020(void)
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

loc_00152020: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(0x2DDEB4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_00152165; /* jl: less (signed <) */

loc_00152051: ;
    edx = esi + -4;
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx + 0x14;
    edi = edx * 4;

loc_00152062: ;
    xmm3 = XMM_SCALAR(MEMF(eax + -4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + -8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    xmm7 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015209E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0015209B: ;
    xmm0 = xmm1; /* movaps */

loc_0015209E: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    xmm7 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001520DB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001520D8: ;
    xmm0 = xmm1; /* movaps */

loc_001520DB: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    xmm7 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00152118; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00152115: ;
    xmm0 = xmm1; /* movaps */

loc_00152118: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    xmm7 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00152155; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00152152: ;
    xmm0 = xmm1; /* movaps */

loc_00152155: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00152062; /* jne: not equal / not zero */

loc_0015215F: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_00152165: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001521BA; /* jge: greater or equal (signed >=) */

loc_00152169: ;
    eax = edi + edi * 2;
    eax = ecx + eax * 4 + 0x14;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00152172: ;
    xmm3 = XMM_SCALAR(MEMF(eax + -4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + -8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    xmm7 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001521AE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001521AB: ;
    xmm0 = xmm1; /* movaps */

loc_001521AE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00152172; /* jne: not equal / not zero */

loc_001521B4: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_001521BA: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001521D6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_001521CC: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_001521D6: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001521F9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_001521E7: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(ecx) - fp_top()); /* fsubr dword ptr [ecx] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_001521F9: ;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00152210
 * Original: 0x00152210 - 0x00152273 (99 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152210: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x37B9B0);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1644);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00152225: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015226D; /* jl: less (signed <) */

loc_00152229: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015226D; /* jge: greater or equal (signed >=) */

loc_0015222E: ;
    edx = MEM32(esi + eax * 8 + 0x1644);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015226D; /* je: equal / zero */

loc_00152239: ;
    ecx = MEM32(esi + eax * 8 + 0x1648);
    _fa = (uint32_t)(MEM8(ecx + 0x54)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x54), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015224B; /* je: equal / zero */

loc_00152246: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152266; /* je: equal / zero */

loc_0015224B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152250; /* jne: not equal / not zero */

loc_0015224F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00152250: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00152262; /* jl: less (signed <) */

loc_00152254: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00152262; /* jge: greater or equal (signed >=) */

loc_00152259: ;
    edi = MEM32(esi + eax * 8 + 0x1644);
    goto loc_00152225;

loc_00152262: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00152225;

loc_00152266: ;
    eax = MEM32(ecx + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0015226D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00152280
 * Original: 0x00152280 - 0x001522E0 (96 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152280: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x37B9B0);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1644);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00152291: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001522DA; /* jl: less (signed <) */

loc_00152295: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001522DA; /* jge: greater or equal (signed >=) */

loc_0015229A: ;
    edx = MEM32(esi + eax * 8 + 0x1644);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001522DA; /* je: equal / zero */

loc_001522A5: ;
    ecx = MEM32(esi + eax * 8 + 0x1648);
    SET_LO8(ebx, MEM8(ecx + 0x54));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001522B8; /* je: equal / zero */

loc_001522B3: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001522D3; /* je: equal / zero */

loc_001522B8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001522BD; /* jne: not equal / not zero */

loc_001522BC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001522BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001522CF; /* jl: less (signed <) */

loc_001522C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001522CF; /* jge: greater or equal (signed >=) */

loc_001522C6: ;
    edi = MEM32(esi + eax * 8 + 0x1644);
    goto loc_00152291;

loc_001522CF: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00152291;

loc_001522D3: ;
    eax = MEM32(ecx + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001522DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001522E0
 * Original: 0x001522E0 - 0x001522E8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001522E0(void)
{

loc_001522E0: ;
    PUSH32(esp, 0x001522E5u); RECOMP_ABI_CALL(0x00151310u, sub_00151310); /* call 0x00151310 */

loc_001522E5: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001522F0
 * Original: 0x001522F0 - 0x0015251E (558 bytes, 179 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001522F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001522F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    MEM32(esi + 0x200) = 0;
    PUSH32(esp, 0x00152309u); RECOMP_ABI_CALL(0x001522E0u, sub_001522E0); /* call 0x001522E0 */

loc_00152309: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD50F518Du);
    PUSH32(esp, 0x00152319u); RECOMP_ABI_CALL(0x00151330u, sub_00151330); /* call 0x00151330 */

loc_00152319: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00152321u); RECOMP_ABI_CALL(0x00151360u, sub_00151360); /* call 0x00151360 */

loc_00152321: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4A208D56);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00152335u); RECOMP_ABI_CALL(0x00151330u, sub_00151330); /* call 0x00151330 */

loc_00152335: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0015233Du); RECOMP_ABI_CALL(0x00151360u, sub_00151360); /* call 0x00151360 */

loc_0015233D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1A1B65B7);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00152351u); RECOMP_ABI_CALL(0x00151330u, sub_00151330); /* call 0x00151330 */

loc_00152351: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00152359u); RECOMP_ABI_CALL(0x00151360u, sub_00151360); /* call 0x00151360 */

loc_00152359: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0xBDA5B3D0u);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0015236Du); RECOMP_ABI_CALL(0x00151330u, sub_00151330); /* call 0x00151330 */

loc_0015236D: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00152375u); RECOMP_ABI_CALL(0x00151360u, sub_00151360); /* call 0x00151360 */

loc_00152375: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x6316F007);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00152389u); RECOMP_ABI_CALL(0x00151330u, sub_00151330); /* call 0x00151330 */

loc_00152389: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00152391u); RECOMP_ABI_CALL(0x00151360u, sub_00151360); /* call 0x00151360 */

loc_00152391: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2044BD1C);
    ecx = esp + 0x14;
    PUSH32(esp, 0x001523A5u); RECOMP_ABI_CALL(0x00151330u, sub_00151330); /* call 0x00151330 */

loc_001523A5: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001523ADu); RECOMP_ABI_CALL(0x00151360u, sub_00151360); /* call 0x00151360 */

loc_001523AD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x5F261AFA);
    ecx = esp + 0x14;
    PUSH32(esp, 0x001523C1u); RECOMP_ABI_CALL(0x00151330u, sub_00151330); /* call 0x00151330 */

loc_001523C1: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001523C9u); RECOMP_ABI_CALL(0x00151360u, sub_00151360); /* call 0x00151360 */

loc_001523C9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0xDE396099u);
    ecx = esp + 0x14;
    PUSH32(esp, 0x001523DDu); RECOMP_ABI_CALL(0x00151330u, sub_00151330); /* call 0x00151330 */

loc_001523DD: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001523E5u); RECOMP_ABI_CALL(0x00151360u, sub_00151360); /* call 0x00151360 */

loc_001523E5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x85602673u);
    ecx = esp + 0x14;
    PUSH32(esp, 0x001523F9u); RECOMP_ABI_CALL(0x00151330u, sub_00151330); /* call 0x00151330 */

loc_001523F9: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00152401u); RECOMP_ABI_CALL(0x00151360u, sub_00151360); /* call 0x00151360 */

loc_00152401: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x81F70523u);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00152415u); RECOMP_ABI_CALL(0x00151330u, sub_00151330); /* call 0x00151330 */

loc_00152415: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0015241Du); RECOMP_ABI_CALL(0x00151360u, sub_00151360); /* call 0x00151360 */

loc_0015241D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x6D7E7DF1);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00152431u); RECOMP_ABI_CALL(0x00151330u, sub_00151330); /* call 0x00151330 */

loc_00152431: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00152439u); RECOMP_ABI_CALL(0x00151360u, sub_00151360); /* call 0x00151360 */

loc_00152439: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC2002534u);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0015244Du); RECOMP_ABI_CALL(0x00151330u, sub_00151330); /* call 0x00151330 */

loc_0015244D: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00152455u); RECOMP_ABI_CALL(0x00151360u, sub_00151360); /* call 0x00151360 */

loc_00152455: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0xBB11490Au);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00152469u); RECOMP_ABI_CALL(0x00151330u, sub_00151330); /* call 0x00151330 */

loc_00152469: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00152471u); RECOMP_ABI_CALL(0x00151360u, sub_00151360); /* call 0x00151360 */

loc_00152471: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0xD82B69B6u);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00152485u); RECOMP_ABI_CALL(0x00151330u, sub_00151330); /* call 0x00151330 */

loc_00152485: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0015248Du); RECOMP_ABI_CALL(0x00151360u, sub_00151360); /* call 0x00151360 */

loc_0015248D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x9D14D161u);
    ecx = esp + 0x14;
    PUSH32(esp, 0x001524A1u); RECOMP_ABI_CALL(0x00151330u, sub_00151330); /* call 0x00151330 */

loc_001524A1: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001524A9u); RECOMP_ABI_CALL(0x00151360u, sub_00151360); /* call 0x00151360 */

loc_001524A9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x68913E38);
    ecx = esp + 0x14;
    PUSH32(esp, 0x001524BDu); RECOMP_ABI_CALL(0x00151330u, sub_00151330); /* call 0x00151330 */

loc_001524BD: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001524C5u); RECOMP_ABI_CALL(0x00151360u, sub_00151360); /* call 0x00151360 */

loc_001524C5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0xFD7F7D2Bu);
    ecx = esp + 0x14;
    PUSH32(esp, 0x001524D9u); RECOMP_ABI_CALL(0x00151330u, sub_00151330); /* call 0x00151330 */

loc_001524D9: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001524E1u); RECOMP_ABI_CALL(0x00151360u, sub_00151360); /* call 0x00151360 */

loc_001524E1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0xD91BD651u);
    ecx = esp + 0x14;
    PUSH32(esp, 0x001524F5u); RECOMP_ABI_CALL(0x00151330u, sub_00151330); /* call 0x00151330 */

loc_001524F5: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001524FDu); RECOMP_ABI_CALL(0x00151360u, sub_00151360); /* call 0x00151360 */

loc_001524FD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0xA8D4D6A8u);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00152511u); RECOMP_ABI_CALL(0x00151330u, sub_00151330); /* call 0x00151330 */

loc_00152511: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00152519u); RECOMP_ABI_CALL(0x00151360u, sub_00151360); /* call 0x00151360 */

loc_00152519: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00152520
 * Original: 0x00152520 - 0x0015257C (92 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152520: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x204) = eax;
    MEM32(ecx + 0x210) = eax;
    MEMF(ecx + 0x208) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x214) = LO8(eax);
    MEM32(ecx + 0x218) = eax;
    MEM32(ecx + 0x21C) = eax;
    MEM32(ecx + 0x220) = eax;
    MEM32(ecx + 0x224) = eax;
    MEM32(ecx + 0x228) = eax;
    MEM32(ecx + 0x22C) = eax;
    MEM32(ecx + 0x230) = eax;
    MEM32(ecx + 0x234) = eax;
    MEM32(ecx + 0x238) = eax;
    MEM32(ecx + 0x23C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00152580
 * Original: 0x00152580 - 0x00152614 (148 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152580: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00152588u); RECOMP_ABI_CALL(0x0010C220u, sub_0010C220); /* call 0x0010C220 */

loc_00152588: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001525AC; /* jne: not equal / not zero */

loc_0015258C: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;

loc_00152594: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001525B0; /* je: equal / zero */

loc_00152598: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00152594; /* jl: less (signed <) */

loc_001525A1: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001525A9u); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_001525A9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001525AC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001525B0: ;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_001525A1; /* je: equal / zero */

loc_001525B7: ;
    SET_LO8(ecx, MEM8(esi + 0x214));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001525DB; /* je: equal / zero */

loc_001525C1: ;
    ecx = MEM32(esi + 0x218);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & 0x80000007u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001525D5; /* jns: not sign (positive) */

loc_001525D0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001525D5: ;
    MEM32(esi + 0x218) = ecx;

loc_001525DB: ;
    edx = MEM32(esi + 0x21C);
    MEM32(esi + edx * 4 + 0x220) = eax;
    eax = MEM32(esi + 0x21C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0x80000007u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001525FB; /* jns: not sign (positive) */

loc_001525F6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001525FB: ;
    _fa = (uint32_t)(MEM32(esi + 0x218)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x218), eax (32-bit) */
    MEM32(esi + 0x21C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001525AC; /* jne: not equal / not zero */

loc_00152609: ;
    MEM8(esi + 0x214) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00152620
 * Original: 0x00152620 - 0x001527B8 (408 bytes, 126 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152620(void)
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

loc_00152620: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x20C); /* comiss */
    PUSH32(esp, edi);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015272E; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x20C)) */

loc_00152637: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x218);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edi;
    ecx = ebp;
    MEM8(esp + 0x1C) = 0;
    edi = edi;

loc_00152650: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015270B; /* jne: not equal / not zero */

loc_0015265C: ;
    SET_LO8(ebx, MEM8(esi + 0x214));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152688; /* jne: not equal / not zero */

loc_00152666: ;
    eax = MEM32(esi + 0x21C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015267A; /* jge: greater or equal (signed >=) */

loc_00152670: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00152678; /* jl: less (signed <) */

loc_00152674: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00152688; /* jl: less (signed <) */

loc_00152678: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */

loc_0015267A: ;
    if (CMP_LE(_fas, _fbs)) goto loc_00152680; /* jle: less or equal (signed <=) */

loc_0015267C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00152688; /* jge: greater or equal (signed >=) */

loc_00152680: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015270B; /* jge: greater or equal (signed >=) */

loc_00152688: ;
    edx = esi + ecx * 4 + 0x220;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152709; /* je: equal / zero */

loc_00152693: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001526B9; /* jne: not equal / not zero */

loc_00152697: ;
    eax = MEM32(esi + 0x21C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001526AB; /* jge: greater or equal (signed >=) */

loc_001526A1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001526A9; /* jl: less (signed <) */

loc_001526A5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001526B9; /* jl: less (signed <) */

loc_001526A9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */

loc_001526AB: ;
    if (CMP_LE(_fas, _fbs)) goto loc_001526B1; /* jle: less or equal (signed <=) */

loc_001526AD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001526B9; /* jge: greater or equal (signed >=) */

loc_001526B1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001526B9; /* jl: less (signed <) */

loc_001526B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001526BB;

loc_001526B9: ;
    eax = edx;

loc_001526BB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_001526D9; /* je: equal / zero */

loc_001526C1: ;
    edx = MEM32(eax + 4);
    edi = MEM32(edi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001526D9; /* jg: greater (signed >) */

loc_001526CB: ;
    if (CMP_NE(_fa, _fb)) goto loc_001526DD; /* jne: not equal / not zero */

loc_001526CD: ;
    edx = MEM32(esp + 0x10);
    edx = MEM32(edx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 8) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001526DD; /* jle: less or equal (signed <=) */

loc_001526D9: ;
    MEM32(esp + 0x10) = eax;

loc_001526DD: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & 0x80000007u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001526EB; /* jns: not sign (positive) */

loc_001526E6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001526EB: ;
    eax = MEM32(esi + 0x21C);
    edi = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152650; /* jne: not equal / not zero */

loc_001526FF: ;
    MEM8(esp + 0x1C) = 1;
    goto loc_00152650;

loc_00152709: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015270B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0015273F; /* je: equal / zero */

loc_00152711: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015271Au); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_0015271A: ;
    MEM32(esi + 0x204) = eax;
    ecx = MEM32(edi + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20C) = ecx;
    goto loc_0015273D;

loc_0015272E: ;
    edx = MEM32(esi + 0x204);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015273Au); RECOMP_ABI_CALL(0x001FF8A0u, sub_001FF8A0); /* call 0x001FF8A0 */

loc_0015273A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015273D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015273F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00152762; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00152755: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC424)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00152765; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00152762: ;
    xmm0 = xmm1; /* movaps */

loc_00152765: ;
    MEMF(esi + 0x20C) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x214) = 0;
    MEM32(esi + 0x218) = edx;
    MEM32(esi + 0x21C) = edx;
    POP32(esp, edi);
    MEM32(esi + 0x220) = edx;
    MEM32(esi + 0x224) = edx;
    MEM32(esi + 0x228) = edx;
    MEM32(esi + 0x22C) = edx;
    MEM32(esi + 0x230) = edx;
    MEM32(esi + 0x234) = edx;
    MEM32(esi + 0x238) = edx;
    MEM32(esi + 0x23C) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001527C0
 * Original: 0x001527C0 - 0x001527C8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001527C0(void)
{

loc_001527C0: ;
    PUSH32(esp, 0x001527C5u); RECOMP_ABI_CALL(0x00151390u, sub_00151390); /* call 0x00151390 */

loc_001527C5: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001527D0
 * Original: 0x001527D0 - 0x001528B8 (232 bytes, 85 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001527D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001527D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_001527F1; /* jbe: below or equal (unsigned <=) */

loc_001527DF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001527E5u); RECOMP_ABI_CALL(0x00151530u, sub_00151530); /* call 0x00151530 */

loc_001527E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001527F1; /* je: equal / zero */

loc_001527E9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001527F1: ;
    PUSH32(esp, ebp);
    ebp = 0x40;
    _fa = (uint32_t)(MEM16(esi + 2)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 2), LO16(ebp) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001528AF; /* jae: above or equal (unsigned >=) */

loc_00152801: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */

loc_00152803: ;
    if (CMP_NE(_fa, _fb)) goto loc_00152849; /* jne: not equal / not zero */

loc_00152805: ;
    eax = MEM32(esi + 0x1844);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esi + 0x1844) = eax;
    MEM32(ebx) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00152805; /* je: equal / zero */

loc_0015281A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), LO16(eax) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00152845; /* jbe: below or equal (unsigned <=) */

loc_00152821: ;
    ecx = esi + 0x1644;

loc_00152827: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015283A; /* je: equal / zero */

loc_0015282B: ;
    edi = ZX16(MEM16(esi));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00152827; /* jl: less (signed <) */

loc_00152836: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    goto loc_00152803;

loc_0015283A: ;
    ecx = MEM32(esi + eax * 8 + 0x1648);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152805; /* jne: not equal / not zero */

loc_00152845: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    goto loc_00152803;

loc_00152849: ;
    eax = ZX16(MEM16(esi));
    ecx = MEM32(ebx);
    MEM32(esi + eax * 8 + 0x1644) = ecx;
    edx = ZX16(MEM16(esi + 2));
    ecx = ZX16(MEM16(esi));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58);
    eax = edx + esi + 0x44;
    MEM32(esi + ecx * 8 + 0x1648) = eax;
    edx = ZX16(MEM16(esi + 2));
    MEM8(edx + esi + 4) = 1;
    _fa = (uint32_t)(MEM16(esi + 2)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 2), LO16(ebp) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0015289B; /* jae: above or equal (unsigned >=) */

loc_00152879: ;
    /* nop */

loc_00152880: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 2));
    ecx = ZX16(LO16(eax));
    SET_LO8(edx, MEM8(ecx + esi + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015289B; /* je: equal / zero */

loc_00152891: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebp) (16-bit) */
    MEM16(esi + 2) = LO16(eax);
    if (CMP_B(_fa, _fb)) goto loc_00152880; /* jb: below (unsigned <) */

loc_0015289B: ;
    MEM16(esi) = MEM16(esi) + 1;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edx = ZX16(MEM16(esi));
    eax = MEM32(esi + edx * 8 + 0x1640);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001528AF: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001528C0
 * Original: 0x001528C0 - 0x0015296E (174 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001528C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001528C0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015296A; /* je: equal / zero */

loc_001528CD: ;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(ecx));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00152969; /* jle: less or equal (signed <=) */

loc_001528DB: ;
    eax = ecx + 0x1644;
    PUSH32(esp, ebp);

loc_001528E2: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001528F7; /* je: equal / zero */

loc_001528E6: ;
    ebp = ZX16(MEM16(ecx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001528E2; /* jl: less (signed <) */

loc_001528F1: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_001528F7: ;
    eax = MEM32(ecx + edx * 8 + 0x1648);
    edi = esi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00152921; /* jge: greater or equal (signed >=) */

loc_00152905: ;
    edi = MEM32(ecx + esi * 8 + 0x163C);
    MEM32(ecx + edx * 8 + 0x1644) = edi;
    esi = MEM32(ecx + esi * 8 + 0x1640);
    MEM32(ecx + edx * 8 + 0x1648) = esi;

loc_00152921: ;
    edx = ZX16(MEM16(ecx));
    edx = ecx + edx * 8 + 0x163C;
    MEM32(edx) = 0;
    MEM32(edx + 4) = 0;
    MEM16(ecx) = MEM16(ecx) - 1;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152968; /* je: equal / zero */

loc_0015293F: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x44;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = 0x2E8BA2E9;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + ecx + 4) = 0;
    edx = ZX16(MEM16(ecx + 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00152968; /* jge: greater or equal (signed >=) */

loc_00152964: ;
    MEM16(ecx + 2) = LO16(eax);

loc_00152968: ;
    POP32(esp, ebp);

loc_00152969: ;
    POP32(esp, esi);

loc_0015296A: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00152970
 * Original: 0x00152970 - 0x00152987 (23 bytes, 7 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00152970(void)
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

loc_00152970: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015297Au); RECOMP_ABI_CALL(0x00151580u, sub_00151580); /* call 0x00151580 */

loc_0015297A: ;
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx + 0x14) = 1;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00152990
 * Original: 0x00152990 - 0x001529A7 (23 bytes, 7 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00152990(void)
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

loc_00152990: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015299Au); RECOMP_ABI_CALL(0x00151580u, sub_00151580); /* call 0x00151580 */

loc_0015299A: ;
    MEMF(ecx + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx + 0x14) = 1;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001529B0
 * Original: 0x001529B0 - 0x001529C7 (23 bytes, 7 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001529B0(void)
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

loc_001529B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001529BAu); RECOMP_ABI_CALL(0x00151580u, sub_00151580); /* call 0x00151580 */

loc_001529BA: ;
    MEMF(ecx + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx + 0x14) = 1;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001529D0
 * Original: 0x001529D0 - 0x00152A0A (58 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001529D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001529D0: ;
    PUSH32(esp, 0x001529D5u); RECOMP_ABI_CALL(0x001FFD70u, sub_001FFD70); /* call 0x001FFD70 */

loc_001529D5: ;
    ecx = 0x37B9B4;
    PUSH32(esp, 0x001529DFu); RECOMP_ABI_CALL(0x00151160u, sub_00151160); /* call 0x00151160 */

loc_001529DF: ;
    PUSH32(esp, 0x001529E4u); RECOMP_ABI_CALL(0x00151290u, sub_00151290); /* call 0x00151290 */

loc_001529E4: ;
    ecx = 0x37DD10;
    PUSH32(esp, 0x001529EEu); RECOMP_ABI_CALL(0x001522F0u, sub_001522F0); /* call 0x001522F0 */

loc_001529EE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x37BA10) = eax;
    MEM32(0x37BA0C) = eax;
    MEM32(0x37BA08) = eax;
    MEM32(0x37BA04) = eax;
    MEM32(0x37BA14) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00152A10
 * Original: 0x00152A10 - 0x00152A7C (108 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152A10: ;
    PUSH32(esp, 0x00152A15u); RECOMP_ABI_CALL(0x001FFD90u, sub_001FFD90); /* call 0x001FFD90 */

loc_00152A15: ;
    ecx = 0x37C4A8;
    PUSH32(esp, 0x00152A1Fu); RECOMP_ABI_CALL(0x001FA170u, sub_001FA170); /* call 0x001FA170 */

loc_00152A1F: ;
    ecx = 0x37DD10;
    PUSH32(esp, 0x00152A29u); RECOMP_ABI_CALL(0x00152520u, sub_00152520); /* call 0x00152520 */

loc_00152A29: ;
    ecx = 0x37DF50;
    PUSH32(esp, 0x00152A33u); RECOMP_ABI_CALL(0x001513D0u, sub_001513D0); /* call 0x001513D0 */

loc_00152A33: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DFE78)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(0x37B9F4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(0x37B9E4) = eax;
    MEMF(0x37B9F0) = xmm0.f[0]; /* movss */
    MEMF(0x37BA00) = xmm0.f[0]; /* movss */
    MEMF(0x37B9FC) = xmm0.f[0]; /* movss */
    MEM32(0x37B9F8) = 0xFFFFFFFFu;
    MEM32(0x37B9EC) = eax;
    MEM8(0x37B9E8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00152A80
 * Original: 0x00152A80 - 0x00152A90 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152A80(void)
{

loc_00152A80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = 0x37C420;
    PUSH32(esp, 0x00152A8Fu); RECOMP_ABI_CALL(0x00152970u, sub_00152970); /* call 0x00152970 */

loc_00152A8F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00152A90
 * Original: 0x00152A90 - 0x00152AA0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152A90(void)
{

loc_00152A90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = 0x37C420;
    PUSH32(esp, 0x00152A9Fu); RECOMP_ABI_CALL(0x00152990u, sub_00152990); /* call 0x00152990 */

loc_00152A9F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00152AA0
 * Original: 0x00152AA0 - 0x00152AB0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152AA0(void)
{

loc_00152AA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = 0x37C420;
    PUSH32(esp, 0x00152AAFu); RECOMP_ABI_CALL(0x001529B0u, sub_001529B0); /* call 0x001529B0 */

loc_00152AAF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00152AB0
 * Original: 0x00152AB0 - 0x00152E62 (946 bytes, 271 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152AB0(void)
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

loc_00152AB0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152E3F; /* jne: not equal / not zero */

loc_00152AC1: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152E3F; /* jne: not equal / not zero */

loc_00152ACC: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00152D8A; /* je: equal / zero */

loc_00152AD8: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = MEMF(esi + 0x28); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00152D8A; /* jb: below (unsigned <) (xmm2.f[0] vs MEMF(esi + 0x28)) */

loc_00152AE5: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    SET_LO8(eax, MEM8(esi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x14) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x413FA8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x18); /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC090); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x413FA8); /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00152B5A; /* je: equal / zero */

loc_00152B38: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00152B5A; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_00152B3D: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00152B52; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00152B4A: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    goto loc_00152B60;

loc_00152B52: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_00152B60;

loc_00152B5A: ;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */

loc_00152B60: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x1C)); /* fsub dword ptr [esi + 0x1c] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00152B9B; /* jbe: below or equal (unsigned <=) */

loc_00152B74: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00152B80u); RECOMP_ABI_CALL(0x00206440u, sub_00206440); /* call 0x00206440 */

loc_00152B80: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */

loc_00152B9B: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DD414)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esi + 4);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x20) = xmm2.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x413FA8)); /* movss */
    MEMF(esi + 0x18) = xmm1.f[0]; /* movss */
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00152BDC; /* je: equal / zero */

loc_00152BD4: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3C4)); /* movss */

loc_00152BDC: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00152CAA; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_00152BEB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152BF7; /* je: equal / zero */

loc_00152BEF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152CAA; /* jne: not equal / not zero */

loc_00152BF7: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5DA8B911) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5DA8B911 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00152C4F; /* ja: above (unsigned >) */

loc_00152C01: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00152C41; /* je: equal / zero */

loc_00152C03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31D95F12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31D95F12 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00152C2C; /* ja: above (unsigned >) */

loc_00152C0A: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00152C9C; /* je: equal / zero */

loc_00152C10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB3E9A83) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB3E9A83 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152C1E; /* je: equal / zero */

loc_00152C17: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23E9891F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23E9891F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152C23; /* jne: not equal / not zero */

loc_00152C1E: ;
    edi = 0xEBC140C9u;

loc_00152C23: ;
    MEM8(esi + 0xC) = 1;
    goto loc_00152D4D;

loc_00152C2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E520DCB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E520DCB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152C23; /* jne: not equal / not zero */

loc_00152C33: ;
    edi = 0xF6D2C260u;
    MEM8(esi + 0xC) = 1;
    goto loc_00152D4D;

loc_00152C41: ;
    edi = 0xC69A677Bu;
    MEM8(esi + 0xC) = 1;
    goto loc_00152D4D;

loc_00152C4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA290AE9Bu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA290AE9Bu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152C1E; /* je: equal / zero */

loc_00152C56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xADA7AFDBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xADA7AFDBu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152C72; /* je: equal / zero */

loc_00152C5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xECA4A890u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xECA4A890u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152C23; /* jne: not equal / not zero */

loc_00152C64: ;
    edi = 0x2EEBBFD9;
    MEM8(esi + 0xC) = 1;
    goto loc_00152D4D;

loc_00152C72: ;
    eax = MEM32(esi + 0x24);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00152C9C; /* je: equal / zero */

loc_00152C7A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00152C8E; /* je: equal / zero */

loc_00152C7D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00152C23; /* jne: not equal / not zero */

loc_00152C80: ;
    edi = 0x4ED0FC08;
    MEM8(esi + 0xC) = 1;
    goto loc_00152D4D;

loc_00152C8E: ;
    edi = 0xC19C616Fu;
    MEM8(esi + 0xC) = 1;
    goto loc_00152D4D;

loc_00152C9C: ;
    edi = 0x4E84C91A;
    MEM8(esi + 0xC) = 1;
    goto loc_00152D4D;

loc_00152CAA: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00152D4D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00152CB3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152CBF; /* jne: not equal / not zero */

loc_00152CB7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152D4D; /* jne: not equal / not zero */

loc_00152CBF: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5DA8B911) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5DA8B911 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00152D05; /* ja: above (unsigned >) */

loc_00152CC9: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00152CFE; /* je: equal / zero */

loc_00152CCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31D95F12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31D95F12 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00152CF0; /* ja: above (unsigned >) */

loc_00152CD2: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00152D3D; /* je: equal / zero */

loc_00152CD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB3E9A83) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB3E9A83 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152CE9; /* je: equal / zero */

loc_00152CDB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23E9891F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23E9891F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152D49; /* jne: not equal / not zero */

loc_00152CE2: ;
    edi = 0x45004DCC;
    goto loc_00152D49;

loc_00152CE9: ;
    edi = 0xBE845968u;
    goto loc_00152D49;

loc_00152CF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E520DCB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E520DCB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152D49; /* jne: not equal / not zero */

loc_00152CF7: ;
    edi = 0xA7FBC653u;
    goto loc_00152D49;

loc_00152CFE: ;
    edi = 0x7270C346;
    goto loc_00152D49;

loc_00152D05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA290AE9Bu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA290AE9Bu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152D44; /* je: equal / zero */

loc_00152D0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xADA7AFDBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xADA7AFDBu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152D21; /* je: equal / zero */

loc_00152D13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xECA4A890u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xECA4A890u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152D49; /* jne: not equal / not zero */

loc_00152D1A: ;
    edi = 0x42C6C2BC;
    goto loc_00152D49;

loc_00152D21: ;
    eax = MEM32(esi + 0x24);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00152D3D; /* je: equal / zero */

loc_00152D29: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00152D36; /* je: equal / zero */

loc_00152D2C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00152D49; /* jne: not equal / not zero */

loc_00152D2F: ;
    edi = 0xA87352ABu;
    goto loc_00152D49;

loc_00152D36: ;
    edi = 0xCC65991Au;
    goto loc_00152D49;

loc_00152D3D: ;
    edi = 0xF8AB8AD;
    goto loc_00152D49;

loc_00152D44: ;
    edi = 0x5DBE6ACF;

loc_00152D49: ;
    MEM8(esi + 0xC) = 0;

loc_00152D4D: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152D6D; /* je: equal / zero */

loc_00152D53: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152DD5; /* je: equal / zero */

loc_00152D57: ;
    ecx = MEM32(0x300E80);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00152D64u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_00152D64: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_00152D6D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00152D75u); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_00152D75: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = edi;
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    goto loc_00152DD3;

loc_00152D8A: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152DD5; /* je: equal / zero */

loc_00152D91: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152DC0; /* je: equal / zero */

loc_00152D97: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00152D9Du); RECOMP_ABI_CALL(0x001FEDB0u, sub_001FEDB0); /* call 0x001FEDB0 */

loc_00152D9D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152DD5; /* jne: not equal / not zero */

loc_00152DA4: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152DC0; /* je: equal / zero */

loc_00152DAA: ;
    edx = MEM32(0x300E80);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00152DB7u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_00152DB7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_00152DC0: ;
    edi = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00152DC9u); RECOMP_ABI_CALL(0x00152210u, sub_00152210); /* call 0x00152210 */

loc_00152DC9: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00152DD0u); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_00152DD0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00152DD3: ;
    MEM32(esi) = eax;

loc_00152DD5: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00152E28; /* je: equal / zero */

loc_00152DDC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00152DE2u); RECOMP_ABI_CALL(0x001FF8A0u, sub_001FF8A0); /* call 0x001FF8A0 */

loc_00152DE2: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00152DEAu); RECOMP_ABI_CALL(0x001FEDB0u, sub_001FEDB0); /* call 0x001FEDB0 */

loc_00152DEA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152E28; /* jne: not equal / not zero */

loc_00152DF1: ;
    ecx = MEM32(0x300E80);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00152E00u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_00152E00: ;
    PUSH32(esp, 3);
    MEM32(esi) = 0;
    PUSH32(esp, 0x00152E0Du); RECOMP_ABI_CALL(0x00011E90u, sub_00011E90); /* call 0x00011E90 */

loc_00152E0D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152E28; /* jne: not equal / not zero */

loc_00152E14: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00152E1Bu); RECOMP_ABI_CALL(0x00011E90u, sub_00011E90); /* call 0x00011E90 */

loc_00152E1B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 4) = 0;

loc_00152E28: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00152E3F: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152E5B; /* je: equal / zero */

loc_00152E45: ;
    ecx = MEM32(0x300E80);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00152E52u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_00152E52: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_00152E5B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00152E70
 * Original: 0x00152E70 - 0x00152E80 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152E70(void)
{

loc_00152E70: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(0x37B9B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00152E7Fu); RECOMP_ABI_CALL(0x001528C0u, sub_001528C0); /* call 0x001528C0 */

loc_00152E7F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00152E80
 * Original: 0x00152E80 - 0x00152ED5 (85 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152E80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x37B9B0);
    ebx = MEM32(edi + 0x1644);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00152E91: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00152ED1; /* jl: less (signed <) */

loc_00152E95: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00152ED1; /* jge: greater or equal (signed >=) */

loc_00152E9A: ;
    eax = MEM32(edi + esi * 8 + 0x1644);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152ED1; /* je: equal / zero */

loc_00152EA5: ;
    ecx = MEM32(edi + esi * 8 + 0x1648);
    PUSH32(esp, 0x00152EB1u); RECOMP_ABI_CALL(0x00152E70u, sub_00152E70); /* call 0x00152E70 */

loc_00152EB1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + esi * 8 + 0x1644)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + esi * 8 + 0x1644) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152EBB; /* jne: not equal / not zero */

loc_00152EBA: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00152EBB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00152ECD; /* jl: less (signed <) */

loc_00152EBF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00152ECD; /* jge: greater or equal (signed >=) */

loc_00152EC4: ;
    ebx = MEM32(edi + esi * 8 + 0x1644);
    goto loc_00152E91;

loc_00152ECD: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00152E91;

loc_00152ED1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00152EE0
 * Original: 0x00152EE0 - 0x00152F32 (82 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152EE0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x37B9B0);
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00152EFAu); RECOMP_ABI_CALL(0x001527D0u, sub_001527D0); /* call 0x001527D0 */

loc_00152EFA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152F2B; /* je: equal / zero */

loc_00152F00: ;
    ecx = esi;
    PUSH32(esp, 0x00152F07u); RECOMP_ABI_CALL(0x00151270u, sub_00151270); /* call 0x00151270 */

loc_00152F07: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x14);
    MEM32(esi) = ecx;
    PUSH32(esp, edx);
    ecx = esi + 0x18;
    PUSH32(esp, 0x00152F1Au); RECOMP_ABI_CALL(0x001512A0u, sub_001512A0); /* call 0x001512A0 */

loc_00152F1A: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 4);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00152F2B: ;
    eax = MEM32(esp + 4);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00152F40
 * Original: 0x00152F40 - 0x00152F8F (79 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152F40: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x37B9B0);
    eax = esp;
    PUSH32(esp, eax);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x00152F58u); RECOMP_ABI_CALL(0x001527D0u, sub_001527D0); /* call 0x001527D0 */

loc_00152F58: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152F8A; /* je: equal / zero */

loc_00152F5E: ;
    PUSH32(esp, 0x00152F63u); RECOMP_ABI_CALL(0x00151270u, sub_00151270); /* call 0x00151270 */

loc_00152F63: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x10) = eax;
    eax = MEM32(esp);
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00152F8A: ;
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00152F90
 * Original: 0x00152F90 - 0x00152FAC (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00152F90: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x37B9B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00152FA0u); RECOMP_ABI_CALL(0x00151530u, sub_00151530); /* call 0x00151530 */

loc_00152FA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152FAB; /* je: equal / zero */

loc_00152FA4: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00152E70(); return; /* tail jmp 0x00152E70 */

loc_00152FAB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00152FB0
 * Original: 0x00152FB0 - 0x00153011 (97 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152FB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x37B9B0);
    ebx = MEM32(edi + 0x1644);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00152FC1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015300D; /* jl: less (signed <) */

loc_00152FC5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015300D; /* jge: greater or equal (signed >=) */

loc_00152FCA: ;
    eax = MEM32(edi + esi * 8 + 0x1644);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015300D; /* je: equal / zero */

loc_00152FD5: ;
    ecx = MEM32(edi + esi * 8 + 0x1648);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152FE8; /* je: equal / zero */

loc_00152FE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152FED; /* jne: not equal / not zero */

loc_00152FE8: ;
    PUSH32(esp, 0x00152FEDu); RECOMP_ABI_CALL(0x00152E70u, sub_00152E70); /* call 0x00152E70 */

loc_00152FED: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + esi * 8 + 0x1644)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + esi * 8 + 0x1644) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152FF7; /* jne: not equal / not zero */

loc_00152FF6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00152FF7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00153009; /* jl: less (signed <) */

loc_00152FFB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00153009; /* jge: greater or equal (signed >=) */

loc_00153000: ;
    ebx = MEM32(edi + esi * 8 + 0x1644);
    goto loc_00152FC1;

loc_00153009: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00152FC1;

loc_0015300D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00153020
 * Original: 0x00153020 - 0x0015307B (91 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153020: ;
    PUSH32(esp, esi);
    edx = ecx;
    esi = 0x20;

loc_00153028: ;
    PUSH32(esp, 0x0015302Du); RECOMP_ABI_CALL(0x001522E0u, sub_001522E0); /* call 0x001522E0 */

loc_0015302D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00153028; /* jne: not equal / not zero */

loc_00153033: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(edx + 0x214) = LO8(eax);
    MEM32(edx + 0x218) = eax;
    MEM32(edx + 0x21C) = eax;
    MEM32(edx + 0x220) = eax;
    MEM32(edx + 0x224) = eax;
    MEM32(edx + 0x228) = eax;
    MEM32(edx + 0x22C) = eax;
    MEM32(edx + 0x230) = eax;
    MEM32(edx + 0x234) = eax;
    MEM32(edx + 0x238) = eax;
    MEM32(edx + 0x23C) = eax;
    eax = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00153080
 * Original: 0x00153080 - 0x001530ED (109 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00153080: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = ebx + 0x64;
    edi = 0x40;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00153090: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0xB5E50);
    PUSH32(esp, 4);
    PUSH32(esp, 0xC);
    eax = esi + 4;
    PUSH32(esp, eax);
    MEMF(esi + -8) = xmm0.f[0]; /* movss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    MEM32(esi) = ebp;
    PUSH32(esp, 0x001530B1u); RECOMP_ABI_CALL(0x00015B30u, sub_00015B30); /* call 0x00015B30 */

loc_001530B1: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x58;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00153090; /* jne: not equal / not zero */

loc_001530B7: ;
    eax = ebx + 0x1644;
    ecx = 0x40;

loc_001530C2: ;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001530C2; /* jne: not equal / not zero */

loc_001530CD: ;
    MEM16(ebx) = LO16(ebp);
    MEM16(ebx + 2) = LO16(ebp);
    MEM32(ebx + 0x1844) = ebp;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + 4;
    ecx = 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001530F0
 * Original: 0x001530F0 - 0x00153129 (57 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001530F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001530F0: ;
    PUSH32(esp, 0x001530F5u); RECOMP_ABI_CALL(0x00152E80u, sub_00152E80); /* call 0x00152E80 */

loc_001530F5: ;
    ecx = 0x37B9B4;
    PUSH32(esp, 0x001530FFu); RECOMP_ABI_CALL(0x00151F40u, sub_00151F40); /* call 0x00151F40 */

loc_001530FF: ;
    PUSH32(esp, 0x00153104u); RECOMP_ABI_CALL(0x001FEC60u, sub_001FEC60); /* call 0x001FEC60 */

loc_00153104: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0015310Bu); RECOMP_ABI_CALL(0x00200220u, sub_00200220); /* call 0x00200220 */

loc_0015310B: ;
    PUSH32(esp, 0x00153110u); RECOMP_ABI_CALL(0x00206850u, sub_00206850); /* call 0x00206850 */

loc_00153110: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00153117u); RECOMP_ABI_CALL(0x00200220u, sub_00200220); /* call 0x00200220 */

loc_00153117: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0015311Fu); RECOMP_ABI_CALL(0x002001C0u, sub_002001C0); /* call 0x002001C0 */

loc_0015311F: ;
    ecx = 0x37C4A8;
    g_seh_ebp = ebp; sub_001FA1D0(); return; /* tail jmp 0x001FA1D0 */

}

/**
 * sub_00153130
 * Original: 0x00153130 - 0x00153344 (532 bytes, 182 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00153130: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001532BB; /* je: equal / zero */

loc_00153142: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001532BB; /* je: equal / zero */

loc_0015314B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00153159; /* je: equal / zero */

loc_00153150: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015333C; /* jne: not equal / not zero */

loc_00153159: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x00153163u); RECOMP_ABI_CALL(0x0008C7E0u, sub_0008C7E0); /* call 0x0008C7E0 */

loc_00153163: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00153172u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015316Fu); } /* indirect call */
    }

loc_00153172: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001531B6; /* jne: not equal / not zero */

loc_00153179: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(edx + 4) = ecx;
    ecx = esi + 0x18;
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x0015319Au); RECOMP_ABI_CALL(0x00152020u, sub_00152020); /* call 0x00152020 */

loc_0015319A: ;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001531B0; /* jp: parity */

loc_001531AA: ;
    MEM8(esi + 0x54) = 1;
    goto loc_001531D7;

loc_001531B0: ;
    MEM8(esi + 0x54) = 0;
    goto loc_001531D7;

loc_001531B6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001531BCu); RECOMP_ABI_CALL(0x0011F740u, sub_0011F740); /* call 0x0011F740 */

loc_001531BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001531D7; /* je: equal / zero */

loc_001531C3: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x001531CFu); RECOMP_ABI_CALL(0x001496B0u, sub_001496B0); /* call 0x001496B0 */

loc_001531CF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x54) = LO8(edx);

loc_001531D7: ;
    SET_LO8(eax, MEM8(esi + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015326E; /* je: equal / zero */

loc_001531E2: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(esi + 8);
    if (CMP_NE(_fa, _fb)) goto loc_0015321E; /* jne: not equal / not zero */

loc_001531EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00153207; /* je: equal / zero */

loc_001531EE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001531F4u); RECOMP_ABI_CALL(0x001FED90u, sub_001FED90); /* call 0x001FED90 */

loc_001531F4: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_0015333C; /* jb: below (unsigned <) */

loc_00153207: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00153210u); RECOMP_ABI_CALL(0x001FF7B0u, sub_001FF7B0); /* call 0x001FF7B0 */

loc_00153210: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0015321E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00153239; /* jne: not equal / not zero */

loc_00153222: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015322Bu); RECOMP_ABI_CALL(0x001FF7B0u, sub_001FF7B0); /* call 0x001FF7B0 */

loc_0015322B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00153239: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015323Fu); RECOMP_ABI_CALL(0x001FED90u, sub_001FED90); /* call 0x001FED90 */

loc_0015323F: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015324Cu); RECOMP_ABI_CALL(0x001FED70u, sub_001FED70); /* call 0x001FED70 */

loc_0015324C: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0015333C; /* jbe: below or equal (unsigned <=) */

loc_0015325F: ;
    ecx = esi;
    PUSH32(esp, 0x00153266u); RECOMP_ABI_CALL(0x00152E70u, sub_00152E70); /* call 0x00152E70 */

loc_00153266: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0015326E: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001532AC; /* je: equal / zero */

loc_00153275: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015327Bu); RECOMP_ABI_CALL(0x001FED90u, sub_001FED90); /* call 0x001FED90 */

loc_0015327B: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00153288u); RECOMP_ABI_CALL(0x001FED70u, sub_001FED70); /* call 0x001FED70 */

loc_00153288: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001532AC; /* jp: parity */

loc_00153299: ;
    ecx = MEM32(0x300E80);
    edx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001532A9u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_001532A9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001532AC: ;
    MEM32(esi + 8) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001532BB: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015333C; /* je: equal / zero */

loc_001532C2: ;
    ecx = MEM32(0x37A42C);
    edx = MEM32(0x37A438);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001532D7u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_001532D7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_001532E5; /* jge: greater or equal (signed >=) */

loc_001532DE: ;
    eax = 0x37A43C;
    goto loc_001532EE;

loc_001532E5: ;
    ecx = MEM32(0x37A434);
    eax = ecx + eax * 4;

loc_001532EE: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015333C; /* je: equal / zero */

loc_001532F4: ;
    PUSH32(esp, 0x8423E0);
    ecx = edi;
    PUSH32(esp, 0x00153300u); RECOMP_ABI_CALL(0x001496B0u, sub_001496B0); /* call 0x001496B0 */

loc_00153300: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00153310; /* je: equal / zero */

loc_00153304: ;
    MEM8(esi + 0x54) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00153310: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC08C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x8423E0);
    ecx = edi;
    PUSH32(esp, 0x0015332Fu); RECOMP_ABI_CALL(0x001497F0u, sub_001497F0); /* call 0x001497F0 */

loc_0015332F: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_0015333C; /* ja: above (unsigned >) */

loc_00153338: ;
    MEM8(esi + 0x54) = 0;

loc_0015333C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00153350
 * Original: 0x00153350 - 0x001533AC (92 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00153350: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x37B9B0);
    ebx = MEM32(edi + 0x1644);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00153366: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001533A7; /* jl: less (signed <) */

loc_0015336A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001533A7; /* jge: greater or equal (signed >=) */

loc_0015336F: ;
    eax = MEM32(edi + esi * 8 + 0x1644);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001533A7; /* je: equal / zero */

loc_0015337A: ;
    ecx = MEM32(edi + esi * 8 + 0x1648);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00153387u); RECOMP_ABI_CALL(0x00153130u, sub_00153130); /* call 0x00153130 */

loc_00153387: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + esi * 8 + 0x1644)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + esi * 8 + 0x1644) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00153391; /* jne: not equal / not zero */

loc_00153390: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00153391: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001533A3; /* jl: less (signed <) */

loc_00153395: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001533A3; /* jge: greater or equal (signed >=) */

loc_0015339A: ;
    ebx = MEM32(edi + esi * 8 + 0x1644);
    goto loc_00153366;

loc_001533A3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00153366;

loc_001533A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001533B0
 * Original: 0x001533B0 - 0x001539AB (1531 bytes, 418 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001533B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001533B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x37B9F0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC350); /* comiss */
    MEMF(0x37B9F0) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001533EB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC350)) */

loc_001533D2: ;
    eax = MEM32(0x413FA8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(0x37B9F0) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001533E8u); RECOMP_ABI_CALL(0x00150FB0u, sub_00150FB0); /* call 0x00150FB0 */

loc_001533E8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001533EB: ;
    eax = MEM32(0x37BA10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0015393A; /* jne: not equal / not zero */

loc_001533FF: ;
    eax = MEM32(0x41410C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = 0x6438E0;
    if (CMP_EQ(_fa, _fb)) goto loc_00153410; /* je: equal / zero */

loc_0015340D: ;
    ecx = eax + 0x10;

loc_00153410: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(ecx);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(ecx + 8);
    MEMF(0x8423E0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(esp + 0x1C) = ecx;
    MEMF(0x8423E4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(0x8423E8) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0015345C; /* jne: not equal / not zero */

loc_00153455: ;
    eax = 0x6438E0;
    goto loc_0015345F;

loc_0015345C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015345F: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20)) >> 32) & 1);
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(esp + 0x14) = edx;
    ecx = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(eax + 8);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(esp + 0x1C) = edx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    ecx = esp + 0x14;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x001534B7u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_001534B7: ;
    MEMF(0x842150) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001534C2u); RECOMP_ABI_CALL(0x00178960u, sub_00178960); /* call 0x00178960 */

loc_001534C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4249D707) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4249D707 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00153513; /* jne: not equal / not zero */

loc_001534C9: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x001534D3u); RECOMP_ABI_CALL(0x0008C7E0u, sub_0008C7E0); /* call 0x0008C7E0 */

loc_001534D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00153513; /* je: equal / zero */

loc_001534DA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x001534E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001534DEu); } /* indirect call */
    }

loc_001534E1: ;
    edx = MEM32(eax);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x001534EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001534EAu); } /* indirect call */
    }

loc_001534ED: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(0x8423EC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(0x8423F0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(0x8423F4) = xmm0.f[0]; /* movss */

loc_00153513: ;
    PUSH32(esp, 0x00153518u); RECOMP_ABI_CALL(0x00152280u, sub_00152280); /* call 0x00152280 */

loc_00153518: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00153535; /* je: equal / zero */

loc_0015351E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37BA04)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x37BA04) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00153535; /* je: equal / zero */

loc_00153526: ;
    _fa = (uint32_t)(MEM32(0x37BA08)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37BA08), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00153535; /* jne: not equal / not zero */

loc_0015352E: ;
    MEM8(0x37B9E8) = 1;

loc_00153535: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0015353Cu); RECOMP_ABI_CALL(0x00212DC0u, sub_00212DC0); /* call 0x00212DC0 */

loc_0015353C: ;
    fp_push(MEMF(0x2F2210)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00153576; /* jbe: below or equal (unsigned <=) */

loc_0015354B: ;
    eax = MEM32(0x37B9E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00153786; /* je: equal / zero */

loc_00153558: ;
    edx = MEM32(0x300E80);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00153565u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_00153565: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x37B9E4) = ebx;
    goto loc_0015378E;

loc_00153576: ;
    _fa = (uint32_t)(MEM8(0x37B9E8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x37B9E8), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00153778; /* je: equal / zero */

loc_00153582: ;
    edx = MEM32(0x37BA14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00153778; /* jle: less or equal (signed <=) */

loc_00153590: ;
    eax = MEM32(0x37BA08);
    _cf = 0; /* logical op clears CF */
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001535A0; /* je: equal / zero */

loc_0015359C: ;
    ebp = eax;
    goto loc_001535AC;

loc_001535A0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ebp = esi;
    if (CMP_NE(_fa, _fb)) goto loc_001535AC; /* jne: not equal / not zero */

loc_001535A6: ;
    ebp = MEM32(0x37BA0C);

loc_001535AC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001536DA; /* jle: less or equal (signed <=) */

loc_001535B6: ;
    ecx = 0x37BA20;
    goto loc_001535C0;

    /* nop */

loc_001535C0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) edi = eax; /* cmove */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x28)) >> 32) & 1);
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001535C0; /* jl: less (signed <) */

loc_001535CD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001536D5; /* jl: less (signed <) */

loc_001535D5: ;
    xmm0 = XMM_SCALAR(MEMF(0x37BA00)); /* movss */
    eax = edi + edi * 4;
    if (3) _cf = (int)(((eax) >> (32 - (3))) & 1);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x37BA24); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x37B9FC)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015361B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x37BA24)) */

loc_001535F4: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x37BA2C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00153604; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x37BA2C)) */

loc_001535FD: ;
    esi = 5;
    goto loc_0015363D;

loc_00153604: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x37BA28); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00153614; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x37BA28)) */

loc_0015360D: ;
    esi = 4;
    goto loc_0015363D;

loc_00153614: ;
    esi = 3;
    goto loc_0015363D;

loc_0015361B: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x37BA2C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015362B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x37BA2C)) */

loc_00153624: ;
    esi = 2;
    goto loc_0015363D;

loc_0015362B: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x37BA28); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0015363B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x37BA28)) */

loc_00153634: ;
    esi = 1;
    goto loc_0015363D;

loc_0015363B: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015363D: ;
    _fa = (uint32_t)(MEM32(0x37B9F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37B9F8), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015365F; /* jne: not equal / not zero */

loc_00153645: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37B9EC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x37B9EC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015365F; /* jne: not equal / not zero */

loc_0015364D: ;
    eax = MEM32(0x37B9E4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00153658u); RECOMP_ABI_CALL(0x001FEDB0u, sub_001FEDB0); /* call 0x001FEDB0 */

loc_00153658: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001536D5; /* jne: not equal / not zero */

loc_0015365F: ;
    xmm0 = XMM_SCALAR(MEMF(0x37B9F4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC3F4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00153770; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC3F4)) */

loc_00153674: ;
    ecx = MEM32(0x300E80);
    edx = MEM32(0x37B9E4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00153687u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_00153687: ;
    SET_LO8(eax, MEM8(0x37BA1C));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x37B9E4) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_001536B5; /* jne: not equal / not zero */

loc_00153699: ;
    eax = edi + edi * 4;
    ecx = esi + eax * 2;
    edx = MEM32(ecx * 4 + 0x37BA30);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001536ADu); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_001536AD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x37B9E4) = eax;

loc_001536B5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(0x37BA04) = ebp;
    MEM32(0x37B9F8) = edi;
    MEM32(0x37B9EC) = esi;
    MEM8(0x37B9E8) = LO8(ebx);
    goto loc_0015378E;

loc_001536D5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00153759; /* jne: not equal / not zero */

loc_001536DA: ;
    _fa = (uint32_t)(MEM32(0x37BA04)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37BA04), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00153700; /* je: equal / zero */

loc_001536E2: ;
    eax = MEM32(0x300E80);
    ecx = MEM32(0x37B9E4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001536F4u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_001536F4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x37B9E4) = eax;
    goto loc_00153705;

loc_00153700: ;
    eax = MEM32(0x37B9E4);

loc_00153705: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00153730; /* je: equal / zero */

loc_00153709: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015371A; /* je: equal / zero */

loc_0015370D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00153713u); RECOMP_ABI_CALL(0x001FEDB0u, sub_001FEDB0); /* call 0x001FEDB0 */

loc_00153713: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015372B; /* jne: not equal / not zero */

loc_0015371A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00153721u); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_00153721: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x37B9E4) = eax;
    goto loc_00153739;

loc_0015372B: ;
    eax = MEM32(0x37B9E4);

loc_00153730: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00153736u); RECOMP_ABI_CALL(0x001FF8A0u, sub_001FF8A0); /* call 0x001FF8A0 */

loc_00153736: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00153739: ;
    xmm0 = XMM_SCALAR(MEMF(0x37B9F4)); /* movss */
    MEM32(0x37BA04) = ebp;
    MEM32(0x37B9F8) = 0xFFFFFFFFu;
    MEM8(0x37B9E8) = LO8(ebx);
    goto loc_0015378E;

loc_00153759: ;
    edx = MEM32(0x37B9E4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00153765u); RECOMP_ABI_CALL(0x001FF8A0u, sub_001FF8A0); /* call 0x001FF8A0 */

loc_00153765: ;
    xmm0 = XMM_SCALAR(MEMF(0x37B9F4)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00153770: ;
    MEM8(0x37B9E8) = LO8(ebx);
    goto loc_0015378E;

loc_00153778: ;
    eax = MEM32(0x37B9E4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00153783u); RECOMP_ABI_CALL(0x001FF8A0u, sub_001FF8A0); /* call 0x001FF8A0 */

loc_00153783: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00153786: ;
    xmm0 = XMM_SCALAR(MEMF(0x37B9F4)); /* movss */

loc_0015378E: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    PUSH32(esp, 0x660E4490);
    MEMF(0x37B9F4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001537A6u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_001537A6: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015385E; /* je: equal / zero */

loc_001537B3: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001537BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001537B7u); } /* indirect call */
    }

loc_001537BA: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001537E2; /* jne: not equal / not zero */

loc_001537CC: ;
    PUSH32(esp, ebx);
    ecx = 0x37C420;
    PUSH32(esp, 0x001537D7u); RECOMP_ABI_CALL(0x00202690u, sub_00202690); /* call 0x00202690 */

loc_001537D7: ;
    MEM8(0x37BA1C) = LO8(ebx);
    goto loc_00153961;

loc_001537E2: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001537E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001537E6u); } /* indirect call */
    }

loc_001537E9: ;
    edx = MEM32(0x30D3B4);
    ecx = MEM32(0x30D3B0);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015385E; /* jne: not equal / not zero */

loc_001537FB: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00153802u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001537FFu); } /* indirect call */
    }

loc_00153802: ;
    ebp = MEM32(0x30D3B4);
    edx = MEM32(0x30D3B0);
    esi = eax;
    _cf = 0; /* logical op clears CF */
    esi = esi & ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(edx));
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    esi = ~esi;
    _cf = 0; /* logical op clears CF */
    esi = esi & edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x36C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x370); /* divss */
    PUSH32(esp, ecx);
    ecx = 0x37C420;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0015383Cu); RECOMP_ABI_CALL(0x00202690u, sub_00202690); /* call 0x00202690 */

loc_0015383C: ;
    ecx = esi;
    PUSH32(esp, 0x00153843u); RECOMP_ABI_CALL(0x00049DA0u, sub_00049DA0); /* call 0x00049DA0 */

loc_00153843: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001537D7; /* jne: not equal / not zero */

loc_00153847: ;
    ecx = esi;
    PUSH32(esp, 0x0015384Eu); RECOMP_ABI_CALL(0x00049CD0u, sub_00049CD0); /* call 0x00049CD0 */

loc_0015384E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001537D7; /* jne: not equal / not zero */

loc_00153852: ;
    MEM8(0x37BA1C) = 1;
    goto loc_00153942;

loc_0015385E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001538D8; /* je: equal / zero */

loc_0015386B: ;
    eax = MEM32(edi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00153877u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153874u); } /* indirect call */
    }

loc_00153877: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    fp_push(MEMF(eax)); /* fld float */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC3D0)); /* fmul dword ptr [0x2dc3d0] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001538C7; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_001538BF: ;
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    goto loc_001538D8;

loc_001538C7: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_001538D8; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_001538D2: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_001538D8: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = 0x37C420;
    PUSH32(esp, 0x001538E7u); RECOMP_ABI_CALL(0x00202690u, sub_00202690); /* call 0x00202690 */

loc_001538E7: ;
    _fa = (uint32_t)(MEM8(0x37BA1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x37BA1C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001537D7; /* jne: not equal / not zero */

loc_001538F3: ;
    eax = MEM32(edi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x001538FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001538FCu); } /* indirect call */
    }

loc_001538FF: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_001537D7; /* jbe: below or equal (unsigned <=) */

loc_00153931: ;
    MEM8(0x37BA1C) = 1;
    goto loc_00153942;

loc_0015393A: ;
    _fa = (uint32_t)(MEM8(0x37BA1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x37BA1C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00153961; /* je: equal / zero */

loc_00153942: ;
    eax = MEM32(0x37B9E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00153961; /* je: equal / zero */

loc_0015394B: ;
    edx = MEM32(0x300E80);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00153958u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_00153958: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x37B9E4) = ebx;

loc_00153961: ;
    esi = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    ecx = 0x37C420;
    PUSH32(esp, 0x00153970u); RECOMP_ABI_CALL(0x001515E0u, sub_001515E0); /* call 0x001515E0 */

loc_00153970: ;
    PUSH32(esp, esi);
    ecx = 0x37B9B4;
    PUSH32(esp, 0x0015397Bu); RECOMP_ABI_CALL(0x00152AB0u, sub_00152AB0); /* call 0x00152AB0 */

loc_0015397B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00153981u); RECOMP_ABI_CALL(0x00153350u, sub_00153350); /* call 0x00153350 */

loc_00153981: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = 0x37DD10;
    PUSH32(esp, 0x0015398Fu); RECOMP_ABI_CALL(0x00152620u, sub_00152620); /* call 0x00152620 */

loc_0015398F: ;
    PUSH32(esp, esi);
    ecx = 0x37DF50;
    PUSH32(esp, 0x0015399Au); RECOMP_ABI_CALL(0x001514C0u, sub_001514C0); /* call 0x001514C0 */

loc_0015399A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001539A0u); RECOMP_ABI_CALL(0x00200220u, sub_00200220); /* call 0x00200220 */

loc_001539A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001539B0
 * Original: 0x001539B0 - 0x001539BF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001539B0(void)
{

loc_001539B0: ;
    eax = MEM32(0x413F98);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001539BBu); RECOMP_ABI_CALL(0x001533B0u, sub_001533B0); /* call 0x001533B0 */

loc_001539BB: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001539C0
 * Original: 0x001539C0 - 0x001539C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001539C0(void)
{

loc_001539C0: ;
    MEM32(ecx) = 0x2F2214;
    esp += 4; return; /* ret */

}

/**
 * sub_001539D0
 * Original: 0x001539D0 - 0x00153A05 (53 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001539D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001539D0: ;
    eax = MEM32(ecx + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001539ED; /* je: equal / zero */

loc_001539D7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = eax;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xC4); PUSH32(esp, 0x001539E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001539E1u); } /* indirect call */
    }

loc_001539E7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001539ED: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00153A10
 * Original: 0x00153A10 - 0x00153A40 (48 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153A10: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x2F2214;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEMF(eax + 0x58) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x5C) = ecx;
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x18) = LO8(ecx);
    MEM8(eax + 0x38) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00153A40
 * Original: 0x00153A40 - 0x00153A5E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153A40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00153A48u); RECOMP_ABI_CALL(0x001539C0u, sub_001539C0); /* call 0x001539C0 */

loc_00153A48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00153A58; /* je: equal / zero */

loc_00153A4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00153A55u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00153A55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00153A58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00153A60
 * Original: 0x00153A60 - 0x00153A69 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153A60(void)
{

loc_00153A60: ;
    eax = ecx;
    MEM32(eax) = 0x2F2220;
    esp += 4; return; /* ret */

}

/**
 * sub_00153A70
 * Original: 0x00153A70 - 0x00153A77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153A70(void)
{

loc_00153A70: ;
    MEM32(ecx) = 0x2F2220;
    esp += 4; return; /* ret */

}

/**
 * sub_00153A80
 * Original: 0x00153A80 - 0x00153B49 (201 bytes, 67 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00153A80: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x400;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00153B3F; /* jle: less or equal (signed <=) */

loc_00153AA5: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    edx = ecx + 0x10014;
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x10) = eax;

loc_00153AC1: ;
    edx = MEM32(esp + 0x24);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00153AC7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x28) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00153B14; /* jge: greater or equal (signed >=) */

loc_00153ACD: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x3FF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00153B01; /* jg: greater (signed >) */

loc_00153AD5: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00153AFC; /* je: equal / zero */

loc_00153AD7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153AE9; /* je: equal / zero */

loc_00153ADC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x3FE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00153B0F; /* jne: not equal / not zero */

loc_00153AE4: ;
    ecx = edx + -16;
    goto loc_00153B0C;

loc_00153AE9: ;
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + ecx + 4;
    eax = MEM32(esp + 0x14);
    goto loc_00153B0C;

loc_00153AFC: ;
    MEM32(ebx + esi * 4) = edx;
    goto loc_00153B0F;

loc_00153B01: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x400 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00153B0F; /* jne: not equal / not zero */

loc_00153B09: ;
    ecx = edx + 0x10;

loc_00153B0C: ;
    MEM32(ebx + esi * 4) = ecx;

loc_00153B0F: ;
    ecx = MEM32(esp + 0x18);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00153B14: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00153AC7; /* jl: less (signed <) */

loc_00153B1C: ;
    edx = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x10) = edx;
    if ((_fa != 0)) goto loc_00153AC1; /* jne: not equal / not zero */

loc_00153B3D: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00153B3F: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00153B50
 * Original: 0x00153B50 - 0x00153BCC (124 bytes, 41 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153B50: ;
    eax = MEM32(esp + 0xC);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2F2224)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x2E0C7C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = (uint32_t)recomp_cvt_si32((double)xmm2.f[0], g_mxcsr, 1); /* cvttss2si */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00153B95; /* jge: greater or equal (signed >=) */

loc_00153B8F: ;
    MEM32(ecx) = 0;

loc_00153B95: ;
    eax = 0x400;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edi = eax + -1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00153BA6; /* jle: less or equal (signed <=) */

loc_00153BA4: ;
    MEM32(ecx) = edi;

loc_00153BA6: ;
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00153BC1; /* jge: greater or equal (signed >=) */

loc_00153BBB: ;
    MEM32(ecx) = 0;

loc_00153BC1: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00153BC7; /* jle: less or equal (signed <=) */

loc_00153BC5: ;
    MEM32(ecx) = edi;

loc_00153BC7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00153BD0
 * Original: 0x00153BD0 - 0x00153C68 (152 bytes, 60 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153BD0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    eax = 0x400;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00153C60; /* jl: less (signed <) */

loc_00153BE9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00153C60; /* jge: greater or equal (signed >=) */

loc_00153BED: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00153C60; /* jl: less (signed <) */

loc_00153BF5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00153C60; /* jge: greater or equal (signed >=) */

loc_00153BF9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00153C4C; /* jg: greater (signed >) */

loc_00153C01: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00153C38; /* je: equal / zero */

loc_00153C03: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153C24; /* je: equal / zero */

loc_00153C08: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00153C60; /* jne: not equal / not zero */

loc_00153C10: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = esi + ecx + 0x10004;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00153C24: ;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx + ecx + 4;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00153C38: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = esi + ecx + 0x10014;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00153C4C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x400 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00153C60; /* jne: not equal / not zero */

loc_00153C54: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = esi + ecx + 0x10024;

loc_00153C60: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00153C70
 * Original: 0x00153C70 - 0x00153CCB (91 bytes, 37 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153C70: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00153C90u); RECOMP_ABI_CALL(0x00153B50u, sub_00153B50); /* call 0x00153B50 */

loc_00153C90: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00153CA7u); RECOMP_ABI_CALL(0x00153B50u, sub_00153B50); /* call 0x00153B50 */

loc_00153CA7: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00153CC5; /* jne: not equal / not zero */

loc_00153CB3: ;
    ecx = MEM32(esp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00153CC5; /* jne: not equal / not zero */

loc_00153CBC: ;
    eax = 1;
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_00153CC5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00153CD0
 * Original: 0x00153CD0 - 0x00153CEF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153CD0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2F2228;
    if (TEST_Z(_fa, _fb)) goto loc_00153CE9; /* je: equal / zero */

loc_00153CE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00153CE6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00153CE6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00153CE9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00153CF0
 * Original: 0x00153CF0 - 0x00153D0E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153CF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00153CF8u); RECOMP_ABI_CALL(0x00153A70u, sub_00153A70); /* call 0x00153A70 */

loc_00153CF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00153D08; /* je: equal / zero */

loc_00153CFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00153D05u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00153D05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00153D08: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00153D10
 * Original: 0x00153D10 - 0x00153D2D (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153D10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153D29; /* je: equal / zero */

loc_00153D1C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00153D22u); RECOMP_ABI_CALL(0x00149A20u, sub_00149A20); /* call 0x00149A20 */

loc_00153D22: ;
    MEM32(esi + 0x10) = 0;

loc_00153D29: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00153D30
 * Original: 0x00153D30 - 0x00153E1A (234 bytes, 94 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153D30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00153D30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    MEM32(esp + 4) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00153E11; /* jle: less or equal (signed <=) */

loc_00153D48: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00153D62u); RECOMP_ABI_CALL(0x00153B50u, sub_00153B50); /* call 0x00153B50 */

loc_00153D62: ;
    eax = MEM32(esp + 0x2C);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, ~LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00153D70; /* je: equal / zero */

loc_00153D6F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00153D70: ;
    ecx = MEM32(esp + 0x18);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x400;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    edx = MEM32(esp + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00153E06; /* jle: less or equal (signed <=) */

loc_00153D9A: ;
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x38) = edx;
    goto loc_00153DB0;

loc_00153DA3: ;
    esi = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x34);
    goto loc_00153DB0;

    /* nop */

loc_00153DB0: ;
    MEM32(esp + 0x20) = edx;

loc_00153DB4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x24) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00153DE2; /* jge: greater or equal (signed >=) */

loc_00153DBA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00153DE2; /* jl: less (signed <) */

loc_00153DBE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00153DE2; /* jge: greater or equal (signed >=) */

loc_00153DC2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00153DE2; /* jl: less (signed <) */

loc_00153DC6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00153DE2; /* jge: greater or equal (signed >=) */

loc_00153DCA: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00153DD6u); RECOMP_ABI_CALL(0x00153BD0u, sub_00153BD0); /* call 0x00153BD0 */

loc_00153DD6: ;
    edx = MEM32(esp + 0x1C);
    MEM32(edx + ebp * 4) = eax;
    eax = MEM32(esp + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00153DE2: ;
    ecx = MEM32(esp + 0x20);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ecx;
    if ((_fa != 0)) goto loc_00153DB4; /* jne: not equal / not zero */

loc_00153DEE: ;
    ecx = MEM32(esp + 0x38);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x38) = ecx;
    if ((_fa != 0)) goto loc_00153DA3; /* jne: not equal / not zero */

loc_00153DFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

loc_00153E06: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

loc_00153E11: ;
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_00153E20
 * Original: 0x00153E20 - 0x00153F6E (334 bytes, 102 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153E20: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x48);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x58)); /* movss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00153E41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153E3Eu); } /* indirect call */
    }

loc_00153E41: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    edi = MEM32(esp + 0x50);
    xmm4 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC098); /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm6.f[0]; /* movss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm6.f[0]; /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm5.f[0]; /* subss */
    PUSH32(esp, edi);
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    eax = esp + 0x1C;
    MEMF(esp + 0x30) = xmm6.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    xmm6 = xmm0; /* movaps */
    xmm7 = xmm4; /* movaps */
    MEMF(esp + 0x38) = xmm5.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] + xmm3.f[0]; /* addss */
    xmm5 = xmm0; /* movaps */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    ecx = esi;
    MEMF(esp + 0x40) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm3.f[0]; /* movss */
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00153F12u); RECOMP_ABI_CALL(0x00153C70u, sub_00153C70); /* call 0x00153C70 */

loc_00153F12: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153F58; /* je: equal / zero */

loc_00153F16: ;
    PUSH32(esp, edi);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00153F28u); RECOMP_ABI_CALL(0x00153C70u, sub_00153C70); /* call 0x00153C70 */

loc_00153F28: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153F58; /* je: equal / zero */

loc_00153F2C: ;
    PUSH32(esp, edi);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00153F3Eu); RECOMP_ABI_CALL(0x00153C70u, sub_00153C70); /* call 0x00153C70 */

loc_00153F3E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153F58; /* je: equal / zero */

loc_00153F42: ;
    PUSH32(esp, edi);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00153F54u); RECOMP_ABI_CALL(0x00153C70u, sub_00153C70); /* call 0x00153C70 */

loc_00153F54: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00153F63; /* jne: not equal / not zero */

loc_00153F58: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00153F63: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00153F70
 * Original: 0x00153F70 - 0x00153FE6 (118 bytes, 43 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153F70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153F70: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = 0x3AE208;
    PUSH32(esp, 0x00153FABu); RECOMP_ABI_CALL(0x00153D30u, sub_00153D30); /* call 0x00153D30 */

loc_00153FAB: ;
    PUSH32(esp, 0x3FE);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x3AE208;
    PUSH32(esp, 0x00153FBDu); RECOMP_ABI_CALL(0x00153A80u, sub_00153A80); /* call 0x00153A80 */

loc_00153FBD: ;
    PUSH32(esp, 0x3FF);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x3AE208;
    PUSH32(esp, 0x00153FCFu); RECOMP_ABI_CALL(0x00153A80u, sub_00153A80); /* call 0x00153A80 */

loc_00153FCF: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x3AE208;
    PUSH32(esp, 0x00153FE1u); RECOMP_ABI_CALL(0x00153A80u, sub_00153A80); /* call 0x00153A80 */

loc_00153FE1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00153FF0
 * Original: 0x00153FF0 - 0x00154066 (118 bytes, 43 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153FF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153FF0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = 0x37E160;
    PUSH32(esp, 0x0015402Bu); RECOMP_ABI_CALL(0x00153D30u, sub_00153D30); /* call 0x00153D30 */

loc_0015402B: ;
    PUSH32(esp, 0x3FE);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x37E160;
    PUSH32(esp, 0x0015403Du); RECOMP_ABI_CALL(0x00153A80u, sub_00153A80); /* call 0x00153A80 */

loc_0015403D: ;
    PUSH32(esp, 0x3FF);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x37E160;
    PUSH32(esp, 0x0015404Fu); RECOMP_ABI_CALL(0x00153A80u, sub_00153A80); /* call 0x00153A80 */

loc_0015404F: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x37E160;
    PUSH32(esp, 0x00154061u); RECOMP_ABI_CALL(0x00153A80u, sub_00153A80); /* call 0x00153A80 */

loc_00154061: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00154070
 * Original: 0x00154070 - 0x001540E6 (118 bytes, 43 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154070: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = 0x38E198;
    PUSH32(esp, 0x001540ABu); RECOMP_ABI_CALL(0x00153D30u, sub_00153D30); /* call 0x00153D30 */

loc_001540AB: ;
    PUSH32(esp, 0x3FE);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x38E198;
    PUSH32(esp, 0x001540BDu); RECOMP_ABI_CALL(0x00153A80u, sub_00153A80); /* call 0x00153A80 */

loc_001540BD: ;
    PUSH32(esp, 0x3FF);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x38E198;
    PUSH32(esp, 0x001540CFu); RECOMP_ABI_CALL(0x00153A80u, sub_00153A80); /* call 0x00153A80 */

loc_001540CF: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x38E198;
    PUSH32(esp, 0x001540E1u); RECOMP_ABI_CALL(0x00153A80u, sub_00153A80); /* call 0x00153A80 */

loc_001540E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001540F0
 * Original: 0x001540F0 - 0x00154166 (118 bytes, 43 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001540F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001540F0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = 0x39E1D0;
    PUSH32(esp, 0x0015412Bu); RECOMP_ABI_CALL(0x00153D30u, sub_00153D30); /* call 0x00153D30 */

loc_0015412B: ;
    PUSH32(esp, 0x3FE);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x39E1D0;
    PUSH32(esp, 0x0015413Du); RECOMP_ABI_CALL(0x00153A80u, sub_00153A80); /* call 0x00153A80 */

loc_0015413D: ;
    PUSH32(esp, 0x3FF);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x39E1D0;
    PUSH32(esp, 0x0015414Fu); RECOMP_ABI_CALL(0x00153A80u, sub_00153A80); /* call 0x00153A80 */

loc_0015414F: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x39E1D0;
    PUSH32(esp, 0x00154161u); RECOMP_ABI_CALL(0x00153A80u, sub_00153A80); /* call 0x00153A80 */

loc_00154161: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00154170
 * Original: 0x00154170 - 0x001541C8 (88 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00154170: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00154180u); RECOMP_ABI_CALL(0x00153E20u, sub_00153E20); /* call 0x00153E20 */

loc_00154180: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015418E; /* jne: not equal / not zero */

loc_00154184: ;
    POP32(esp, edi);
    eax = 0x10;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0015418E: ;
    PUSH32(esp, 0x3FE);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0015419Bu); RECOMP_ABI_CALL(0x00153E20u, sub_00153E20); /* call 0x00153E20 */

loc_0015419B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001541A9; /* jne: not equal / not zero */

loc_0015419F: ;
    POP32(esp, edi);
    eax = 0x3FE;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001541A9: ;
    PUSH32(esp, 0x3FF);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001541B6u); RECOMP_ABI_CALL(0x00153E20u, sub_00153E20); /* call 0x00153E20 */

loc_001541B6: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x3FF)) >> 32) & 1);
    eax = eax + 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001541D0
 * Original: 0x001541D0 - 0x00154254 (132 bytes, 62 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001541D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001541D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001541FF; /* je: equal / zero */

loc_001541E9: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001541FFu); RECOMP_ABI_CALL(0x00153F70u, sub_00153F70); /* call 0x00153F70 */

loc_001541FF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00154219; /* je: equal / zero */

loc_00154204: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00154219u); RECOMP_ABI_CALL(0x00153FF0u, sub_00153FF0); /* call 0x00153FF0 */

loc_00154219: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00154233; /* je: equal / zero */

loc_0015421E: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00154233u); RECOMP_ABI_CALL(0x00154070u, sub_00154070); /* call 0x00154070 */

loc_00154233: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015424D; /* je: equal / zero */

loc_00154238: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0015424Du); RECOMP_ABI_CALL(0x001540F0u, sub_001540F0); /* call 0x001540F0 */

loc_0015424D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00154260
 * Original: 0x00154260 - 0x001542BF (95 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154260: ;
    eax = ecx;
    PUSH32(esp, esi);
    MEM32(eax) = 0x2F2228;
    edx = eax + 4;
    esi = 0x1000;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00154273: ;
    MEM32(edx + 4) = edx;
    MEM32(edx) = edx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00154273; /* jne: not equal / not zero */

loc_00154284: ;
    MEM32(eax + 0x1000C) = ecx;
    MEM32(eax + 0x10010) = ecx;
    edx = eax + 0x10004;
    MEM32(edx + 4) = edx;
    MEM32(edx) = edx;
    edx = eax + 0x10014;
    MEM32(edx + 4) = edx;
    MEM32(edx) = edx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    edx = eax + 0x10024;
    MEM32(edx + 4) = edx;
    MEM32(edx) = edx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001542C0
 * Original: 0x001542C0 - 0x001543C0 (256 bytes, 90 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001542C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001542C0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001542D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001542D5u); } /* indirect call */
    }

loc_001542D8: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001542E0u); RECOMP_ABI_CALL(0x00154170u, sub_00154170); /* call 0x00154170 */

loc_001542E0: ;
    ebx = eax;
    PUSH32(esp, ebx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001542F9u); RECOMP_ABI_CALL(0x00153B50u, sub_00153B50); /* call 0x00153B50 */

loc_001542F9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00154390; /* jg: greater (signed >) */

loc_00154305: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00154368; /* je: equal / zero */

loc_00154307: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154340; /* je: equal / zero */

loc_0015430C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001543B7; /* jne: not equal / not zero */

loc_00154318: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + edi + 0x10004;
    ecx = edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00154334u); RECOMP_ABI_CALL(0x0014A2A0u, sub_0014A2A0); /* call 0x0014A2A0 */

loc_00154334: ;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00154340: ;
    ecx = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0xC);
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx + edi + 4;
    ecx = edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015435Cu); RECOMP_ABI_CALL(0x0014A2A0u, sub_0014A2A0); /* call 0x0014A2A0 */

loc_0015435C: ;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00154368: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + edi + 0x10014;
    ecx = edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00154384u); RECOMP_ABI_CALL(0x0014A2A0u, sub_0014A2A0); /* call 0x0014A2A0 */

loc_00154384: ;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00154390: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x400 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001543B7; /* jne: not equal / not zero */

loc_00154398: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx + edi + 0x10024;
    ecx = edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001543B4u); RECOMP_ABI_CALL(0x0014A2A0u, sub_0014A2A0); /* call 0x0014A2A0 */

loc_001543B4: ;
    MEM32(esi + 0x10) = edi;

loc_001543B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001543C0
 * Original: 0x001543C0 - 0x00154453 (147 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001543C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001543C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x5C);
    ecx = esi;
    PUSH32(esp, 0x001543D0u); RECOMP_ABI_CALL(0x00011570u, sub_00011570); /* call 0x00011570 */

loc_001543D0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001543E4; /* je: equal / zero */

loc_001543D4: ;
    PUSH32(esp, ebx);
    ecx = 0x3AE208;
    PUSH32(esp, 0x001543DFu); RECOMP_ABI_CALL(0x001542C0u, sub_001542C0); /* call 0x001542C0 */

loc_001543DF: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001543E4: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x001543EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001543E9u); } /* indirect call */
    }

loc_001543EF: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x001543FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001543F5u); } /* indirect call */
    }

loc_001543FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154412; /* je: equal / zero */

loc_001543FF: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x00154409u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154403u); } /* indirect call */
    }

loc_00154409: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00154410u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015440Du); } /* indirect call */
    }

loc_00154410: ;
    edi = eax;

loc_00154412: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154428; /* jne: not equal / not zero */

loc_00154417: ;
    ecx = 0x38E198;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00154422u); RECOMP_ABI_CALL(0x001542C0u, sub_001542C0); /* call 0x001542C0 */

loc_00154422: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00154428: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015443D; /* jne: not equal / not zero */

loc_0015442C: ;
    ecx = 0x37E160;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00154437u); RECOMP_ABI_CALL(0x001542C0u, sub_001542C0); /* call 0x001542C0 */

loc_00154437: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0015443D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015444D; /* jne: not equal / not zero */

loc_00154442: ;
    ecx = 0x39E1D0;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015444Du); RECOMP_ABI_CALL(0x001542C0u, sub_001542C0); /* call 0x001542C0 */

loc_0015444D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00154460
 * Original: 0x00154460 - 0x001544B6 (86 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154460: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2435E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 8) = 0x2F222C;
    edi = MEM32(esp + 0x1C);
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001544A3; /* je: equal / zero */

loc_00154495: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015449Bu); RECOMP_ABI_CALL(0x00153D10u, sub_00153D10); /* call 0x00153D10 */

loc_0015449B: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001544A3u); RECOMP_ABI_CALL(0x001543C0u, sub_001543C0); /* call 0x001543C0 */

loc_001544A3: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001544C0
 * Original: 0x001544C0 - 0x00154549 (137 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001544C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001544C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x28;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM8(esi + 0x2A0) = LO8(eax);
    MEM8(esi + 0x2A1) = LO8(eax);
    eax = MEM32(ecx);
    MEM32(esi + 0x24) = 8;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001544E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001544E3u); } /* indirect call */
    }

loc_001544E5: ;
    edx = MEM32(esi + 0x3C);
    ecx = esi + 0x3C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001544EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001544EBu); } /* indirect call */
    }

loc_001544ED: ;
    eax = MEM32(esi + 0x64);
    ecx = esi + 0x64;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001544F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001544F3u); } /* indirect call */
    }

loc_001544F5: ;
    edx = MEM32(esi + 0x100);
    ecx = esi + 0x100;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00154503u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154501u); } /* indirect call */
    }

loc_00154503: ;
    eax = MEM32(esi + 0x160);
    ecx = esi + 0x160;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00154511u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015450Fu); } /* indirect call */
    }

loc_00154511: ;
    edx = MEM32(esi + 0x1D4);
    ecx = esi + 0x1D4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0015451Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015451Du); } /* indirect call */
    }

loc_0015451F: ;
    eax = MEM32(esi + 0x218);
    ecx = esi + 0x218;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0015452Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015452Bu); } /* indirect call */
    }

loc_0015452D: ;
    edx = MEM32(esi + 0x22C);
    ecx = esi + 0x22C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0015453Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154539u); } /* indirect call */
    }

loc_0015453B: ;
    ecx = 0x35C940;
    PUSH32(esp, 0x00154545u); RECOMP_ABI_CALL(0x000FDAA0u, sub_000FDAA0); /* call 0x000FDAA0 */

loc_00154545: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00154550
 * Original: 0x00154550 - 0x001545D7 (135 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154550: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0x35C940;
    PUSH32(esp, 0x0015455Du); RECOMP_ABI_CALL(0x000FDAF0u, sub_000FDAF0); /* call 0x000FDAF0 */

loc_0015455D: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154570; /* je: equal / zero */

loc_00154564: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00154569u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154566u); } /* indirect call */
    }

loc_00154569: ;
    MEM32(esi + 0x20) = 0;

loc_00154570: ;
    edx = MEM32(esi + 0x28);
    ecx = esi + 0x28;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00154579u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154576u); } /* indirect call */
    }

loc_00154579: ;
    eax = MEM32(esi + 0x3C);
    ecx = esi + 0x3C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00154582u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015457Fu); } /* indirect call */
    }

loc_00154582: ;
    edx = MEM32(esi + 0x64);
    ecx = esi + 0x64;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0015458Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154588u); } /* indirect call */
    }

loc_0015458B: ;
    eax = MEM32(esi + 0x100);
    ecx = esi + 0x100;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0015459Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154597u); } /* indirect call */
    }

loc_0015459A: ;
    edx = MEM32(esi + 0x160);
    ecx = esi + 0x160;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001545A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001545A6u); } /* indirect call */
    }

loc_001545A9: ;
    eax = MEM32(esi + 0x1D4);
    ecx = esi + 0x1D4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001545B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001545B5u); } /* indirect call */
    }

loc_001545B8: ;
    edx = MEM32(esi + 0x218);
    ecx = esi + 0x218;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001545C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001545C4u); } /* indirect call */
    }

loc_001545C7: ;
    eax = MEM32(esi + 0x22C);
    ecx = esi + 0x22C;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_001545E0
 * Original: 0x001545E0 - 0x001545F1 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001545E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001545E0: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001545EE; /* je: equal / zero */

loc_001545E7: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

loc_001545EE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00154600
 * Original: 0x00154600 - 0x00154617 (23 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154600(void)
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

loc_00154600: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015460E; /* je: equal / zero */

loc_00154607: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x20)); return; /* indirect tail jmp */

loc_0015460E: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00154620
 * Original: 0x00154620 - 0x00154633 (19 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00154620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154620: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015462E; /* je: equal / zero */

loc_00154627: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x24)); return; /* indirect tail jmp */

loc_0015462E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00154640
 * Original: 0x00154640 - 0x00154653 (19 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00154640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154640: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015464E; /* je: equal / zero */

loc_00154647: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

loc_0015464E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00154660
 * Original: 0x00154660 - 0x00154697 (55 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154660: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015467F; /* je: equal / zero */

loc_00154667: ;
    edx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00154679u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154676u); } /* indirect call */
    }

loc_00154679: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0015467F: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001546A0
 * Original: 0x001546A0 - 0x001546B5 (21 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001546A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001546A0: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001546AE; /* je: equal / zero */

loc_001546A7: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x3C)); return; /* indirect tail jmp */

loc_001546AE: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001546C0
 * Original: 0x001546C0 - 0x00154748 (136 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001546C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001546C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001546CF; /* je: equal / zero */

loc_001546CA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001546CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001546CCu); } /* indirect call */
    }

loc_001546CF: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015472E; /* ja: above (unsigned >) */

loc_001546D8: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x154748); /* switch: 8 entries, 8 targets */
    if (_jt == 0x001546DFu) goto loc_001546DF;
    if (_jt == 0x001546E7u) goto loc_001546E7;
    if (_jt == 0x001546EFu) goto loc_001546EF;
    if (_jt == 0x001546F7u) goto loc_001546F7;
    if (_jt == 0x00154702u) goto loc_00154702;
    if (_jt == 0x0015470Du) goto loc_0015470D;
    if (_jt == 0x00154718u) goto loc_00154718;
    if (_jt == 0x00154723u) goto loc_00154723;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001546DF: ;
    ecx = esi + 0x28;
    MEM32(esi + 0x20) = ecx;
    goto loc_00154735;

loc_001546E7: ;
    edx = esi + 0x3C;
    MEM32(esi + 0x20) = edx;
    goto loc_00154735;

loc_001546EF: ;
    ecx = esi + 0x64;
    MEM32(esi + 0x20) = ecx;
    goto loc_00154735;

loc_001546F7: ;
    edx = esi + 0x100;
    MEM32(esi + 0x20) = edx;
    goto loc_00154735;

loc_00154702: ;
    ecx = esi + 0x160;
    MEM32(esi + 0x20) = ecx;
    goto loc_00154735;

loc_0015470D: ;
    edx = esi + 0x1D4;
    MEM32(esi + 0x20) = edx;
    goto loc_00154735;

loc_00154718: ;
    ecx = esi + 0x218;
    MEM32(esi + 0x20) = ecx;
    goto loc_00154735;

loc_00154723: ;
    edx = esi + 0x22C;
    MEM32(esi + 0x20) = edx;
    goto loc_00154735;

loc_0015472E: ;
    MEM32(esi + 0x20) = 0;

loc_00154735: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x24) = eax;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00154745; /* je: equal / zero */

loc_00154740: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00154745u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154742u); } /* indirect call */
    }

loc_00154745: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00154770
 * Original: 0x00154770 - 0x0015479E (46 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154770: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE2ACC87) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xE2ACC87 (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0015478A; /* jne: not equal / not zero */

loc_00154780: ;
    ecx = 0x35CDC8;
    PUSH32(esp, 0x0015478Au); RECOMP_ABI_CALL(0x000FC010u, sub_000FC010); /* call 0x000FC010 */

loc_0015478A: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154799; /* je: equal / zero */

loc_00154791: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00154799u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154796u); } /* indirect call */
    }

loc_00154799: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001547A0
 * Original: 0x001547A0 - 0x001547B1 (17 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001547A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001547A0: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001547AE; /* je: equal / zero */

loc_001547A7: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x30)); return; /* indirect tail jmp */

loc_001547AE: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001547C0
 * Original: 0x001547C0 - 0x001547D5 (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001547C0(void)
{

loc_001547C0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 0x10) = 0;
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001547E0
 * Original: 0x001547E0 - 0x00154807 (39 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001547E0(void)
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

loc_001547E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x45B624D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x45B624D0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154801; /* je: equal / zero */

loc_001547EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46B62663) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x46B62663 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001547FB; /* je: equal / zero */

loc_001547F2: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_001547FB: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00154801: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
