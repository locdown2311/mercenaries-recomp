/**
 * Mercenaries - Recompiled code chunk 37
 * Functions: 250 (0x001D89C0 - 0x001DF5A0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001D89C0
 * Original: 0x001D89C0 - 0x001D89C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D89C0(void)
{

loc_001D89C0: ;
    eax = 0x441374;
    esp += 4; return; /* ret */

}

/**
 * sub_001D89D0
 * Original: 0x001D89D0 - 0x001D89DE (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D89D0(void)
{

loc_001D89D0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(ecx + 0x20, xmm0); /* movaps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D89E0
 * Original: 0x001D89E0 - 0x001D89FC (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D89E0(void)
{

loc_001D89E0: ;
    eax = ecx;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2FACFC;
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D8A00
 * Original: 0x001D8A00 - 0x001D8C35 (565 bytes, 211 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8A00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x34;
    MEM32(esi + 0xC) = ebp;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001D8A8E; /* jle: less or equal (signed <=) */

loc_001D8A1F: ;
    ecx = MEM32(edi + 8);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D8A45; /* jge: greater or equal (signed >=) */

loc_001D8A2C: ;
    eax = ecx + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D8A35; /* jl: less (signed <) */

loc_001D8A33: ;
    eax = ebp;

loc_001D8A35: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D8A3Eu); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001D8A3E: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D8A45: ;
    ecx = ebp;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D8A73; /* jl: less (signed <) */

loc_001D8A4E: ;
    edi = edi;

loc_001D8A50: ;
    edx = MEM32(edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + eax * 4) = ecx;
    edx = MEM32(edi);
    MEM32(edx + eax * 4 + 4) = ecx;
    edx = MEM32(edi);
    MEM32(edx + eax * 4 + 8) = ecx;
    edx = MEM32(edi);
    MEM32(edx + eax * 4 + 0xC) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D8A50; /* jl: less (signed <) */

loc_001D8A73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D8A8E; /* jge: greater or equal (signed >=) */

loc_001D8A77: ;
    goto loc_001D8A80;

    /* nop */

loc_001D8A80: ;
    ecx = MEM32(edi);
    MEM32(ecx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D8A80; /* jl: less (signed <) */

loc_001D8A8E: ;
    MEM32(edi + 4) = ebp;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ebx + 4);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D8AD8; /* jge: greater or equal (signed >=) */

loc_001D8AA2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D8ABB; /* js: sign (negative) */

loc_001D8AA6: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D8ABBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8AB8u); } /* indirect call */
    }

loc_001D8ABB: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D8ACFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8ACCu); } /* indirect call */
    }

loc_001D8ACF: ;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebx + 4);
    MEM32(esi + 0x18) = eax;

loc_001D8AD8: ;
    ecx = MEM32(ebx + 4);
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(ebx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_001D8AFD; /* jle: less or equal (signed <=) */

loc_001D8AEA: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001D8AF0: ;
    xmm0 = XMM_MEM(ecx + eax); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D8AF0; /* jne: not equal / not zero */

loc_001D8AFD: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ebx + 0x10);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D8B44; /* jge: greater or equal (signed >=) */

loc_001D8B0E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D8B27; /* js: sign (negative) */

loc_001D8B12: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D8B27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8B24u); } /* indirect call */
    }

loc_001D8B27: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D8B3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8B38u); } /* indirect call */
    }

loc_001D8B3B: ;
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(ebx + 0x10);
    MEM32(esi + 0x24) = eax;

loc_001D8B44: ;
    ecx = MEM32(ebx + 0x10);
    eax = MEM32(esi + 0x1C);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(ebx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(ebx + 0xC);
    if (CMP_LE(_fas, _fbs)) goto loc_001D8B6D; /* jle: less or equal (signed <=) */

loc_001D8B57: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001D8B60: ;
    xmm0 = XMM_MEM(ecx + eax); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D8B60; /* jne: not equal / not zero */

loc_001D8B6D: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ebx + 0x1C);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D8BB4; /* jge: greater or equal (signed >=) */

loc_001D8B7E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D8B97; /* js: sign (negative) */

loc_001D8B82: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D8B97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8B94u); } /* indirect call */
    }

loc_001D8B97: ;
    eax = MEM32(ebx + 0x1C);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D8BABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8BA8u); } /* indirect call */
    }

loc_001D8BAB: ;
    MEM32(esi + 0x28) = eax;
    ecx = MEM32(ebx + 0x1C);
    MEM32(esi + 0x30) = ecx;

loc_001D8BB4: ;
    edx = MEM32(ebx + 0x1C);
    MEM32(esi + 0x2C) = edx;
    edi = MEM32(ebx + 0x1C);
    ebx = MEM32(ebx + 0x18);
    esi = MEM32(esi + 0x28);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_001D8C17; /* jl: less (signed <) */

loc_001D8BCE: ;
    ecx = edi + -4;
    edx = ebx + 0xC;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi + 4;
    MEM32(esp + 0x18) = ebx;
    ebp = ecx * 4;
    goto loc_001D8BF0;

    /* nop */

loc_001D8BF0: ;
    ebx = MEM32(edx + -12);
    MEM32(eax + -4) = ebx;
    ebx = MEM32(esp + 0x18);
    ebx = MEM32(ebx + eax);
    MEM32(eax) = ebx;
    ebx = MEM32(edx + -4);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(edx);
    MEM32(eax + 8) = ebx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D8BF0; /* jne: not equal / not zero */

loc_001D8C13: ;
    ebx = MEM32(esp + 0x10);

loc_001D8C17: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D8C2D; /* jge: greater or equal (signed >=) */

loc_001D8C1B: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + ebp * 4;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001D8C22: ;
    ecx = MEM32(ebx + eax);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D8C22; /* jne: not equal / not zero */

loc_001D8C2D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D8C40
 * Original: 0x001D8C40 - 0x001D8DE5 (421 bytes, 161 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8C40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    esi = ecx;
    ecx = MEM32(edi + 8);
    edx = MEM32(esi + 0x14);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D8C90; /* jge: greater or equal (signed >=) */

loc_001D8C5C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D8C74; /* js: sign (negative) */

loc_001D8C60: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D8C74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8C71u); } /* indirect call */
    }

loc_001D8C74: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D8C88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8C85u); } /* indirect call */
    }

loc_001D8C88: ;
    MEM32(edi) = eax;
    eax = MEM32(esi + 0x14);
    MEM32(edi + 8) = eax;

loc_001D8C90: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(edi);
    MEM32(edi + 4) = ecx;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(esi + 0x10);
    if (CMP_LE(_fas, _fbs)) goto loc_001D8CB1; /* jle: less or equal (signed <=) */

loc_001D8CA2: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001D8CA4: ;
    xmm0 = XMM_MEM(ecx + eax); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D8CA4; /* jne: not equal / not zero */

loc_001D8CB1: ;
    ecx = MEM32(edi + 0x14);
    edx = MEM32(esi + 0x20);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D8CF8; /* jge: greater or equal (signed >=) */

loc_001D8CC2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D8CDB; /* js: sign (negative) */

loc_001D8CC6: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D8CDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8CD8u); } /* indirect call */
    }

loc_001D8CDB: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D8CEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8CECu); } /* indirect call */
    }

loc_001D8CEF: ;
    MEM32(edi + 0xC) = eax;
    eax = MEM32(esi + 0x20);
    MEM32(edi + 0x14) = eax;

loc_001D8CF8: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(edi + 0xC);
    MEM32(edi + 0x10) = ecx;
    edx = MEM32(esi + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(esi + 0x1C);
    if (CMP_LE(_fas, _fbs)) goto loc_001D8D1D; /* jle: less or equal (signed <=) */

loc_001D8D0B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001D8D10: ;
    xmm0 = XMM_MEM(ecx + eax); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D8D10; /* jne: not equal / not zero */

loc_001D8D1D: ;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(esi + 0x2C);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D8D64; /* jge: greater or equal (signed >=) */

loc_001D8D2E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D8D47; /* js: sign (negative) */

loc_001D8D32: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x18);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D8D47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8D44u); } /* indirect call */
    }

loc_001D8D47: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D8D5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8D58u); } /* indirect call */
    }

loc_001D8D5B: ;
    MEM32(edi + 0x18) = eax;
    ecx = MEM32(esi + 0x2C);
    MEM32(edi + 0x20) = ecx;

loc_001D8D64: ;
    edx = MEM32(esi + 0x2C);
    MEM32(edi + 0x1C) = edx;
    ebx = MEM32(esi + 0x2C);
    esi = MEM32(esi + 0x28);
    edi = MEM32(edi + 0x18);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_001D8DC7; /* jl: less (signed <) */

loc_001D8D7E: ;
    ecx = ebx + -4;
    edx = esi + 0xC;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi + 4;
    MEM32(esp + 0x18) = esi;
    ebp = ecx * 4;
    goto loc_001D8DA0;

    /* nop */

loc_001D8DA0: ;
    esi = MEM32(edx + -12);
    MEM32(eax + -4) = esi;
    esi = MEM32(esp + 0x18);
    esi = MEM32(esi + eax);
    MEM32(eax) = esi;
    esi = MEM32(edx + -4);
    MEM32(eax + 4) = esi;
    esi = MEM32(edx);
    MEM32(eax + 8) = esi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D8DA0; /* jne: not equal / not zero */

loc_001D8DC3: ;
    esi = MEM32(esp + 0x10);

loc_001D8DC7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D8DDD; /* jge: greater or equal (signed >=) */

loc_001D8DCB: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi + ebp * 4;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001D8DD2: ;
    ecx = MEM32(eax + esi);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D8DD2; /* jne: not equal / not zero */

loc_001D8DDD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D8DF0
 * Original: 0x001D8DF0 - 0x001D8DF5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8DF0: ;
    g_seh_ebp = ebp; sub_001D8A00(); return; /* tail jmp 0x001D8A00 */

}

/**
 * sub_001D8E00
 * Original: 0x001D8E00 - 0x001D8E7D (125 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8E00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8E00: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246AE4);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM16(esi + 6) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2FAD14;
    ecx = 0x80000000u;
    MEM32(esp + 0x10) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = ecx;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0x14) = 4;
    PUSH32(esp, 0x001D8E69u); RECOMP_ABI_CALL(0x001D8A00u, sub_001D8A00); /* call 0x001D8A00 */

loc_001D8E69: ;
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
 * sub_001D8E80
 * Original: 0x001D8E80 - 0x001D8EA8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8E80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D8E88u); RECOMP_ABI_CALL(0x001D6330u, sub_001D6330); /* call 0x001D6330 */

loc_001D8E88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D8EA2; /* je: equal / zero */

loc_001D8E8F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D8EA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8E9Fu); } /* indirect call */
    }

loc_001D8EA2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D8EB0
 * Original: 0x001D8EB0 - 0x001D8F79 (201 bytes, 84 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8EB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(eax);
    ebx = ecx;
    esi = ebx + 0x10;
    MEM32(ebx + 0xC) = edi;
    ebp = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D8F2E; /* jle: less or equal (signed <=) */

loc_001D8ECA: ;
    eax = MEM32(esi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D8EEA; /* jge: greater or equal (signed >=) */

loc_001D8ED6: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D8EDE; /* jl: less (signed <) */

loc_001D8EDC: ;
    eax = edi;

loc_001D8EDE: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D8EE7u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001D8EE7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D8EEA: ;
    ecx = edi;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    eax = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_001D8F19; /* jl: less (signed <) */

loc_001D8EF5: ;
    ecx = edi + -3;

loc_001D8EF8: ;
    ebp = MEM32(esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + eax * 4) = edx;
    ebp = MEM32(esi);
    MEM32(ebp + eax * 4 + 4) = edx;
    ebp = MEM32(esi);
    MEM32(ebp + eax * 4 + 8) = edx;
    ebp = MEM32(esi);
    MEM32(ebp + eax * 4 + 0xC) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D8EF8; /* jl: less (signed <) */

loc_001D8F19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D8F2E; /* jge: greater or equal (signed >=) */

loc_001D8F1D: ;
    /* nop */

loc_001D8F20: ;
    edx = MEM32(esi);
    MEM32(edx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D8F20; /* jl: less (signed <) */

loc_001D8F2E: ;
    MEM32(esi + 4) = edi;
    esi = MEM32(ebx + 0xC);
    ebp = MEM32(ebx + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    edi = ebx + 0x1C;
    if (CMP_LE(_fas, _fbs)) goto loc_001D8F6F; /* jle: less or equal (signed <=) */

loc_001D8F3E: ;
    eax = MEM32(edi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D8F5E; /* jge: greater or equal (signed >=) */

loc_001D8F4A: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D8F52; /* jl: less (signed <) */

loc_001D8F50: ;
    eax = esi;

loc_001D8F52: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D8F5Bu); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001D8F5B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D8F5E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    eax = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_001D8F6F; /* jge: greater or equal (signed >=) */

loc_001D8F64: ;
    ecx = MEM32(edi);
    MEM8(eax + ecx) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D8F64; /* jl: less (signed <) */

loc_001D8F6F: ;
    MEM32(edi + 4) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D8F80
 * Original: 0x001D8F80 - 0x001D8F85 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8F80: ;
    g_seh_ebp = ebp; sub_001D8EB0(); return; /* tail jmp 0x001D8EB0 */

}

/**
 * sub_001D8F90
 * Original: 0x001D8F90 - 0x001D8FFB (107 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8F90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8F90: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246B0E);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM16(esi + 6) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2FAD2C;
    ecx = 0x80000000u;
    MEM32(esp + 0x10) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = ecx;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0x14) = 2;
    PUSH32(esp, 0x001D8FE7u); RECOMP_ABI_CALL(0x001D8EB0u, sub_001D8EB0); /* call 0x001D8EB0 */

loc_001D8FE7: ;
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
 * sub_001D9000
 * Original: 0x001D9000 - 0x001D9028 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9000: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D9008u); RECOMP_ABI_CALL(0x001D6B40u, sub_001D6B40); /* call 0x001D6B40 */

loc_001D9008: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D9022; /* je: equal / zero */

loc_001D900F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D9022u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D901Fu); } /* indirect call */
    }

loc_001D9022: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D9030
 * Original: 0x001D9030 - 0x001D90B3 (131 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9030: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(eax);
    esi = ecx + 0x20;
    MEM32(ecx + 0xC) = edi;
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D90AA; /* jle: less or equal (signed <=) */

loc_001D9047: ;
    eax = MEM32(esi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D9067; /* jge: greater or equal (signed >=) */

loc_001D9053: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D905B; /* jl: less (signed <) */

loc_001D9059: ;
    eax = edi;

loc_001D905B: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D9064u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001D9064: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D9067: ;
    ecx = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    eax = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_001D9095; /* jl: less (signed <) */

loc_001D9074: ;
    ecx = edi + -3;

loc_001D9077: ;
    ebx = MEM32(esi);
    MEM32(ebx + eax * 4) = edx;
    ebx = MEM32(esi);
    MEM32(ebx + eax * 4 + 4) = edx;
    ebx = MEM32(esi);
    MEM32(ebx + eax * 4 + 8) = edx;
    ebx = MEM32(esi);
    MEM32(ebx + eax * 4 + 0xC) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D9077; /* jl: less (signed <) */

loc_001D9095: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D90AA; /* jge: greater or equal (signed >=) */

loc_001D9099: ;
    /* nop */

loc_001D90A0: ;
    ecx = MEM32(esi);
    MEM32(ecx + eax * 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D90A0; /* jl: less (signed <) */

loc_001D90AA: ;
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D90C0
 * Original: 0x001D90C0 - 0x001D90C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D90C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D90C0: ;
    g_seh_ebp = ebp; sub_001D9030(); return; /* tail jmp 0x001D9030 */

}

/**
 * sub_001D90D0
 * Original: 0x001D90D0 - 0x001D913F (111 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D90D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D90D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246B33);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 1;
    MEM32(esp + 8) = esi;
    MEM16(esi + 6) = LO16(eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2FAD44;
    MEM32(esp + 0x14) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = 0x80000000u;
    MEM8(esp + 0x14) = LO8(eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D911Eu); RECOMP_ABI_CALL(0x001D9030u, sub_001D9030); /* call 0x001D9030 */

loc_001D911E: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x10) = ebx;
    MEM8(esi + 0x14) = LO8(ebx);
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
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
 * sub_001D9140
 * Original: 0x001D9140 - 0x001D9168 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9140: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D9148u); RECOMP_ABI_CALL(0x001D72D0u, sub_001D72D0); /* call 0x001D72D0 */

loc_001D9148: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D9162; /* je: equal / zero */

loc_001D914F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D9162u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D915Fu); } /* indirect call */
    }

loc_001D9162: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D9170
 * Original: 0x001D9170 - 0x001D917C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9170(void)
{

loc_001D9170: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D9178u); RECOMP_ABI_CALL(0x000B5E50u, sub_000B5E50); /* call 0x000B5E50 */

loc_001D9178: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D9180
 * Original: 0x001D9180 - 0x001D9186 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9180(void)
{

loc_001D9180: ;
    eax = 0x44139C;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9190
 * Original: 0x001D9190 - 0x001D91CD (61 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9190: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246B51);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(esp) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001D91BE; /* je: equal / zero */

loc_001D91B9: ;
    PUSH32(esp, 0x001D91BEu); RECOMP_ABI_CALL(0x000B5E50u, sub_000B5E50); /* call 0x000B5E50 */

loc_001D91BE: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D91D0
 * Original: 0x001D91D0 - 0x001D91FA (42 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D91D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D91D0: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x14);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D91DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D91DCu); } /* indirect call */
    }

loc_001D91DF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(eax + 4) = 0x14;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2FA134;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9200
 * Original: 0x001D9200 - 0x001D920C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9200(void)
{

loc_001D9200: ;
    SET_LO8(eax, MEM8(ecx + 0xC));
    ecx = MEM32(esp + 4);
    MEM8(ecx) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D9210
 * Original: 0x001D9210 - 0x001D9293 (131 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9210: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(eax);
    esi = ecx + 0x14;
    MEM32(ecx + 0xC) = edi;
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D928A; /* jle: less or equal (signed <=) */

loc_001D9227: ;
    eax = MEM32(esi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D9247; /* jge: greater or equal (signed >=) */

loc_001D9233: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D923B; /* jl: less (signed <) */

loc_001D9239: ;
    eax = edi;

loc_001D923B: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D9244u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001D9244: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D9247: ;
    ecx = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    eax = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_001D9275; /* jl: less (signed <) */

loc_001D9254: ;
    ecx = edi + -3;

loc_001D9257: ;
    ebx = MEM32(esi);
    MEM32(ebx + eax * 4) = edx;
    ebx = MEM32(esi);
    MEM32(ebx + eax * 4 + 4) = edx;
    ebx = MEM32(esi);
    MEM32(ebx + eax * 4 + 8) = edx;
    ebx = MEM32(esi);
    MEM32(ebx + eax * 4 + 0xC) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D9257; /* jl: less (signed <) */

loc_001D9275: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D928A; /* jge: greater or equal (signed >=) */

loc_001D9279: ;
    /* nop */

loc_001D9280: ;
    ecx = MEM32(esi);
    MEM32(ecx + eax * 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D9280; /* jl: less (signed <) */

loc_001D928A: ;
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D92A0
 * Original: 0x001D92A0 - 0x001D92B8 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D92A0(void)
{

loc_001D92A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001D92ADu); RECOMP_ABI_CALL(0x001D9210u, sub_001D9210); /* call 0x001D9210 */

loc_001D92AD: ;
    MEM32(esi + 0x10) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D92C0
 * Original: 0x001D92C0 - 0x001D9323 (99 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D92C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D92C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246B73);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 1;
    MEM32(esp + 4) = esi;
    MEM16(esi + 6) = LO16(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2FAD88;
    MEM32(esp + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = 0x80000000u;
    eax = MEM32(esp + 0x18);
    MEM8(esp + 0x10) = LO8(ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001D930Fu); RECOMP_ABI_CALL(0x001D9210u, sub_001D9210); /* call 0x001D9210 */

loc_001D930F: ;
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
 * sub_001D9330
 * Original: 0x001D9330 - 0x001D9358 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9330: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D9338u); RECOMP_ABI_CALL(0x001D79A0u, sub_001D79A0); /* call 0x001D79A0 */

loc_001D9338: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D9352; /* je: equal / zero */

loc_001D933F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D9352u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D934Fu); } /* indirect call */
    }

loc_001D9352: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D9360
 * Original: 0x001D9360 - 0x001D9372 (18 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9360(void)
{

loc_001D9360: ;
    SET_LO8(edx, MEM8(ecx + 8));
    eax = MEM32(esp + 4);
    MEM8(eax) = LO8(edx);
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D9380
 * Original: 0x001D9380 - 0x001D97C9 (1097 bytes, 172 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D9380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9380: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(edx));
    MEM8(ecx + 8) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM8(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001D97BD; /* ja: above (unsigned >) */

loc_001D939D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1D97CC); /* switch: 12 entries, 12 targets */
    if (_jt == 0x001D93A4u) goto loc_001D93A4;
    if (_jt == 0x001D9402u) goto loc_001D9402;
    if (_jt == 0x001D9468u) goto loc_001D9468;
    if (_jt == 0x001D94C6u) goto loc_001D94C6;
    if (_jt == 0x001D94FDu) goto loc_001D94FD;
    if (_jt == 0x001D9535u) goto loc_001D9535;
    if (_jt == 0x001D9593u) goto loc_001D9593;
    if (_jt == 0x001D95CBu) goto loc_001D95CB;
    if (_jt == 0x001D9629u) goto loc_001D9629;
    if (_jt == 0x001D968Fu) goto loc_001D968F;
    if (_jt == 0x001D96E5u) goto loc_001D96E5;
    if (_jt == 0x001D9748u) goto loc_001D9748;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001D93A4: ;
    MEM32(esp) = 0x3F800000;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_MEM(esp); /* movaps */
    MEM32(esp) = 0;
    MEM32(esp + 8) = 0;
    XMM_STORE(ecx + 0x20, xmm0); /* movaps */
    MEM32(esp + 4) = 0x3F800000;
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_MEM(esp); /* movaps */
    MEM32(esp) = 0;
    MEM32(esp + 8) = 0x3F800000;
    goto loc_001D97A1;

loc_001D9402: ;
    MEM32(esp) = 0x3F800000;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_MEM(esp); /* movaps */
    MEM32(esp) = 0;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xBF800000u;
    XMM_STORE(ecx + 0x20, xmm0); /* movaps */
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_MEM(esp); /* movaps */
    MEM32(esp + 4) = 0x3F800000;
    MEM32(esp) = 0;
    MEM32(esp + 8) = 0;
    goto loc_001D97A9;

loc_001D9468: ;
    MEM32(esp) = 0x3F800000;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_MEM(esp); /* movaps */
    MEM32(esp) = 0;
    MEM32(esp + 8) = 0;
    XMM_STORE(ecx + 0x20, xmm0); /* movaps */
    MEM32(esp + 4) = 0xBF800000u;
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_MEM(esp); /* movaps */
    MEM32(esp) = 0;
    MEM32(esp + 8) = 0xBF800000u;
    goto loc_001D97A1;

loc_001D94C6: ;
    MEM32(esp) = 0x3F800000;
    MEM32(esp + 8) = 0;
    MEM32(esp + 4) = 0;
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_MEM(esp); /* movaps */
    MEM32(esp) = 0;
    MEM32(esp + 8) = 0x3F800000;
    goto loc_001D9717;

loc_001D94FD: ;
    MEM32(esp + 4) = 0x3F800000;
    MEM32(esp + 8) = 0;
    MEM32(esp) = 0;
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_MEM(esp); /* movaps */
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x3F800000;
    goto loc_001D96C2;

loc_001D9535: ;
    MEM32(esp) = 0;
    MEM32(esp + 4) = 0x3F800000;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_MEM(esp); /* movaps */
    MEM32(esp) = 0xBF800000u;
    MEM32(esp + 8) = 0;
    XMM_STORE(ecx + 0x20, xmm0); /* movaps */
    MEM32(esp + 4) = 0;
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_MEM(esp); /* movaps */
    MEM32(esp) = 0;
    MEM32(esp + 8) = 0x3F800000;
    goto loc_001D97A1;

loc_001D9593: ;
    MEM32(esp + 4) = 0x3F800000;
    MEM32(esp + 8) = 0;
    MEM32(esp) = 0;
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_MEM(esp); /* movaps */
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xBF800000u;
    goto loc_001D977B;

loc_001D95CB: ;
    MEM32(esp) = 0;
    MEM32(esp + 4) = 0x3F800000;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_MEM(esp); /* movaps */
    MEM32(esp) = 0x3F800000;
    MEM32(esp + 8) = 0;
    XMM_STORE(ecx + 0x20, xmm0); /* movaps */
    MEM32(esp + 4) = 0;
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_MEM(esp); /* movaps */
    MEM32(esp) = 0;
    MEM32(esp + 8) = 0xBF800000u;
    goto loc_001D97A1;

loc_001D9629: ;
    MEM32(esp) = 0;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x3F800000;
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_MEM(esp); /* movaps */
    MEM32(esp) = 0x3F800000;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    XMM_STORE(ecx + 0x20, xmm0); /* movaps */
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_MEM(esp); /* movaps */
    MEM32(esp) = 0;
    MEM32(esp + 4) = 0x3F800000;
    MEM32(esp + 8) = 0;
    goto loc_001D97A9;

loc_001D968F: ;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x3F800000;
    MEM32(esp) = 0;
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_MEM(esp); /* movaps */
    MEM32(esp + 4) = 0xBF800000u;
    MEM32(esp + 8) = 0;

loc_001D96C2: ;
    MEM32(esp) = 0;
    XMM_STORE(ecx + 0x20, xmm0); /* movaps */
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_MEM(esp); /* movaps */
    MEM32(esp) = 0x3F800000;
    goto loc_001D9799;

loc_001D96E5: ;
    MEM32(esp) = 0;
    MEM32(esp + 8) = 0x3F800000;
    MEM32(esp + 4) = 0;
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_MEM(esp); /* movaps */
    MEM32(esp) = 0xBF800000u;
    MEM32(esp + 8) = 0;

loc_001D9717: ;
    MEM32(esp + 4) = 0;
    XMM_STORE(ecx + 0x20, xmm0); /* movaps */
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_MEM(esp); /* movaps */
    MEM32(esp + 4) = 0xBF800000u;
    MEM32(esp) = 0;
    MEM32(esp + 8) = 0;
    goto loc_001D97A9;

loc_001D9748: ;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x3F800000;
    MEM32(esp) = 0;
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_MEM(esp); /* movaps */
    MEM32(esp + 4) = 0x3F800000;
    MEM32(esp + 8) = 0;

loc_001D977B: ;
    MEM32(esp) = 0;
    MEM32(esp + 0xC) = 0;
    XMM_STORE(ecx + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp); /* movaps */
    MEM32(esp) = 0xBF800000u;

loc_001D9799: ;
    MEM32(esp + 8) = 0;

loc_001D97A1: ;
    MEM32(esp + 4) = 0;

loc_001D97A9: ;
    MEM32(esp + 0xC) = 0;
    XMM_STORE(ecx + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp); /* movaps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */

loc_001D97BD: ;
    edx = MEM32(edx + 4);
    MEM32(ecx + 0xC) = edx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D9800
 * Original: 0x001D9800 - 0x001D9805 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9800: ;
    g_seh_ebp = ebp; sub_001D9380(); return; /* tail jmp 0x001D9380 */

}

/**
 * sub_001D9810
 * Original: 0x001D9810 - 0x001D982B (27 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9810(void)
{

loc_001D9810: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    MEM16(ecx + 6) = 1;
    MEM32(ecx) = 0x2FADA0;
    PUSH32(esp, 0x001D9826u); RECOMP_ABI_CALL(0x001D9380u, sub_001D9380); /* call 0x001D9380 */

loc_001D9826: ;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D9830
 * Original: 0x001D9830 - 0x001D983F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9830(void)
{

loc_001D9830: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D983Eu); RECOMP_ABI_CALL(0x00087D20u, sub_00087D20); /* call 0x00087D20 */

loc_001D983E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9840
 * Original: 0x001D9840 - 0x001D984F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9840(void)
{

loc_001D9840: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D984Eu); RECOMP_ABI_CALL(0x001D89D0u, sub_001D89D0); /* call 0x001D89D0 */

loc_001D984E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9850
 * Original: 0x001D9850 - 0x001D9856 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9850(void)
{

loc_001D9850: ;
    eax = 0x4413C4;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9860
 * Original: 0x001D9860 - 0x001D98B1 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9860: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246B8B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x30);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D9885u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9882u); } /* indirect call */
    }

loc_001D9885: ;
    MEM16(eax + 4) = 0x30;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001D98A2u); RECOMP_ABI_CALL(0x001D89E0u, sub_001D89E0); /* call 0x001D89E0 */

loc_001D98A2: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D98C0
 * Original: 0x001D98C0 - 0x001D98FD (61 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D98C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D98C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246BB1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(esp) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001D98EE; /* je: equal / zero */

loc_001D98E9: ;
    PUSH32(esp, 0x001D98EEu); RECOMP_ABI_CALL(0x000B5E50u, sub_000B5E50); /* call 0x000B5E50 */

loc_001D98EE: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D9900
 * Original: 0x001D9900 - 0x001D990F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9900(void)
{

loc_001D9900: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D990Eu); RECOMP_ABI_CALL(0x001D8C40u, sub_001D8C40); /* call 0x001D8C40 */

loc_001D990E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9910
 * Original: 0x001D9910 - 0x001D991F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9910(void)
{

loc_001D9910: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D991Eu); RECOMP_ABI_CALL(0x001D8DF0u, sub_001D8DF0); /* call 0x001D8DF0 */

loc_001D991E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9920
 * Original: 0x001D9920 - 0x001D9926 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9920(void)
{

loc_001D9920: ;
    eax = 0x4413EC;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9930
 * Original: 0x001D9930 - 0x001D9981 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9930: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246BCB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x40);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D9955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9952u); } /* indirect call */
    }

loc_001D9955: ;
    MEM16(eax + 4) = 0x40;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001D9972u); RECOMP_ABI_CALL(0x001D8E00u, sub_001D8E00); /* call 0x001D8E00 */

loc_001D9972: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D9990
 * Original: 0x001D9990 - 0x001D99BD (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9990: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D9998u); RECOMP_ABI_CALL(0x000B5E50u, sub_000B5E50); /* call 0x000B5E50 */

loc_001D9998: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    ecx = 0x80000000u;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D99C0
 * Original: 0x001D99C0 - 0x001D9A21 (97 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D99C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D99C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246BF1);
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
    if (CMP_EQ(_fa, _fb)) goto loc_001D9A10; /* je: equal / zero */

loc_001D99EA: ;
    ecx = esi;
    PUSH32(esp, 0x001D99F1u); RECOMP_ABI_CALL(0x000B5E50u, sub_000B5E50); /* call 0x000B5E50 */

loc_001D99F1: ;
    MEM32(esi) = edi;
    MEM32(esi + 4) = edi;
    eax = 0x80000000u;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = eax;

loc_001D9A10: ;
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
 * sub_001D9A30
 * Original: 0x001D9A30 - 0x001D9A39 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9A30: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_000479B0(); return; /* tail jmp 0x000479B0 */

}

/**
 * sub_001D9A40
 * Original: 0x001D9A40 - 0x001D9A4F (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9A40(void)
{

loc_001D9A40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D9A48u); RECOMP_ABI_CALL(0x000B5E50u, sub_000B5E50); /* call 0x000B5E50 */

loc_001D9A48: ;
    MEM8(esi) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D9A50
 * Original: 0x001D9A50 - 0x001D9A5F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9A50(void)
{

loc_001D9A50: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D9A5Eu); RECOMP_ABI_CALL(0x001D9200u, sub_001D9200); /* call 0x001D9200 */

loc_001D9A5E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9A60
 * Original: 0x001D9A60 - 0x001D9A6F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9A60(void)
{

loc_001D9A60: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D9A6Eu); RECOMP_ABI_CALL(0x001D8F80u, sub_001D8F80); /* call 0x001D8F80 */

loc_001D9A6E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9A70
 * Original: 0x001D9A70 - 0x001D9A76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9A70(void)
{

loc_001D9A70: ;
    eax = 0x441414;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9A80
 * Original: 0x001D9A80 - 0x001D9AD1 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9A80: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246C0B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x28);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D9AA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9AA2u); } /* indirect call */
    }

loc_001D9AA5: ;
    MEM16(eax + 4) = 0x28;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001D9AC2u); RECOMP_ABI_CALL(0x001D8F90u, sub_001D8F90); /* call 0x001D8F90 */

loc_001D9AC2: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D9AE0
 * Original: 0x001D9AE0 - 0x001D9B25 (69 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9AE0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246C31);
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
    if (CMP_EQ(_fa, _fb)) goto loc_001D9B15; /* je: equal / zero */

loc_001D9B0B: ;
    ecx = esi;
    PUSH32(esp, 0x001D9B12u); RECOMP_ABI_CALL(0x000B5E50u, sub_000B5E50); /* call 0x000B5E50 */

loc_001D9B12: ;
    MEM8(esi) = 0;

loc_001D9B15: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D9B30
 * Original: 0x001D9B30 - 0x001D9B3F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9B30(void)
{

loc_001D9B30: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D9B3Eu); RECOMP_ABI_CALL(0x001D90C0u, sub_001D90C0); /* call 0x001D90C0 */

loc_001D9B3E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9B40
 * Original: 0x001D9B40 - 0x001D9B46 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9B40(void)
{

loc_001D9B40: ;
    eax = 0x44143C;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9B50
 * Original: 0x001D9B50 - 0x001D9BA1 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9B50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9B50: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246C4B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x2C);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D9B75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9B72u); } /* indirect call */
    }

loc_001D9B75: ;
    MEM16(eax + 4) = 0x2C;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001D9B92u); RECOMP_ABI_CALL(0x001D90D0u, sub_001D90D0); /* call 0x001D90D0 */

loc_001D9B92: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D9BB0
 * Original: 0x001D9BB0 - 0x001D9BF5 (69 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9BB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246C71);
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
    if (CMP_EQ(_fa, _fb)) goto loc_001D9BE5; /* je: equal / zero */

loc_001D9BDB: ;
    ecx = esi;
    PUSH32(esp, 0x001D9BE2u); RECOMP_ABI_CALL(0x000B5E50u, sub_000B5E50); /* call 0x000B5E50 */

loc_001D9BE2: ;
    MEM8(esi) = 0;

loc_001D9BE5: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D9C00
 * Original: 0x001D9C00 - 0x001D9C0F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9C00(void)
{

loc_001D9C00: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D9C0Eu); RECOMP_ABI_CALL(0x001D92A0u, sub_001D92A0); /* call 0x001D92A0 */

loc_001D9C0E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9C10
 * Original: 0x001D9C10 - 0x001D9C16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9C10(void)
{

loc_001D9C10: ;
    eax = 0x441464;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9C20
 * Original: 0x001D9C20 - 0x001D9C71 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9C20: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246C8B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x20);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D9C45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9C42u); } /* indirect call */
    }

loc_001D9C45: ;
    MEM16(eax + 4) = 0x20;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001D9C62u); RECOMP_ABI_CALL(0x001D92C0u, sub_001D92C0); /* call 0x001D92C0 */

loc_001D9C62: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D9C80
 * Original: 0x001D9C80 - 0x001D9CC5 (69 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9C80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246CB1);
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
    if (CMP_EQ(_fa, _fb)) goto loc_001D9CB5; /* je: equal / zero */

loc_001D9CAB: ;
    ecx = esi;
    PUSH32(esp, 0x001D9CB2u); RECOMP_ABI_CALL(0x000B5E50u, sub_000B5E50); /* call 0x000B5E50 */

loc_001D9CB2: ;
    MEM8(esi) = 0;

loc_001D9CB5: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D9CD0
 * Original: 0x001D9CD0 - 0x001D9CDF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9CD0(void)
{

loc_001D9CD0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D9CDEu); RECOMP_ABI_CALL(0x001D9360u, sub_001D9360); /* call 0x001D9360 */

loc_001D9CDE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9CE0
 * Original: 0x001D9CE0 - 0x001D9CEF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9CE0(void)
{

loc_001D9CE0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D9CEEu); RECOMP_ABI_CALL(0x001D9800u, sub_001D9800); /* call 0x001D9800 */

loc_001D9CEE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9CF0
 * Original: 0x001D9CF0 - 0x001D9CF6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9CF0(void)
{

loc_001D9CF0: ;
    eax = 0x44148C;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9D00
 * Original: 0x001D9D00 - 0x001D9D0D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9D00(void)
{

loc_001D9D00: ;
    eax = ecx;
    MEM8(eax) = 0;
    MEM32(eax + 4) = 0x447A0000;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9D10
 * Original: 0x001D9D10 - 0x001D9D61 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9D10: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246CCB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x40);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D9D35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D9D32u); } /* indirect call */
    }

loc_001D9D35: ;
    MEM16(eax + 4) = 0x40;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001D9D52u); RECOMP_ABI_CALL(0x001D9810u, sub_001D9810); /* call 0x001D9810 */

loc_001D9D52: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D9D70
 * Original: 0x001D9D70 - 0x001D9D83 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9D70: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9D82; /* je: equal / zero */

loc_001D9D78: ;
    MEM8(eax) = 0;
    MEM32(eax + 4) = 0x447A0000;

loc_001D9D82: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D9D90
 * Original: 0x001D9D90 - 0x001D9E30 (160 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D9D90(void)
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

loc_001D9D90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D9DA7u); RECOMP_ABI_CALL(0x001DC620u, sub_001DC620); /* call 0x001DC620 */

loc_001D9DA7: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D9DAFu); RECOMP_ABI_CALL(0x001DBD70u, sub_001DBD70); /* call 0x001DBD70 */

loc_001D9DAF: ;
    PUSH32(esp, 6);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D9DBBu); RECOMP_ABI_CALL(0x001DC620u, sub_001DC620); /* call 0x001DC620 */

loc_001D9DBB: ;
    edi = 1;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esp + 0xC) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001D9E1B; /* jl: less (signed <) */

loc_001D9DCB: ;
    goto loc_001D9DD0;

    /* nop */

loc_001D9DD0: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D9DD8u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001D9DD8: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D9DE5u); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_001D9DE5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D9DEEu); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001D9DEE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D9DF8u); RECOMP_ABI_CALL(0x001DD560u, sub_001DD560); /* call 0x001DD560 */

loc_001D9DF8: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D9E00u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001D9E00: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D9E24; /* jne: not equal / not zero */

loc_001D9E07: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D9E0Fu); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001D9E0F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0xC) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_001D9DD0; /* jle: less or equal (signed <=) */

loc_001D9E1B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001D9E24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
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
 * sub_001D9E30
 * Original: 0x001D9E30 - 0x001D9EB3 (131 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9E30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D9E3Fu); RECOMP_ABI_CALL(0x001DC620u, sub_001DC620); /* call 0x001DC620 */

loc_001D9E3F: ;
    PUSH32(esp, 6);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D9E49u); RECOMP_ABI_CALL(0x001DC620u, sub_001DC620); /* call 0x001DC620 */

loc_001D9E49: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D9E4Fu); RECOMP_ABI_CALL(0x001DCF70u, sub_001DCF70); /* call 0x001DCF70 */

loc_001D9E4F: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D9E57u); RECOMP_ABI_CALL(0x001DD6D0u, sub_001DD6D0); /* call 0x001DD6D0 */

loc_001D9E57: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D9EA8; /* je: equal / zero */

loc_001D9E5E: ;
    edi = edi;

loc_001D9E60: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D9E68u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001D9E68: ;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D9E70u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001D9E70: ;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D9E78u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001D9E78: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D9E82u); RECOMP_ABI_CALL(0x001DD560u, sub_001DD560); /* call 0x001DD560 */

loc_001D9E82: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D9E8Au); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001D9E8A: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D9EAC; /* jne: not equal / not zero */

loc_001D9E91: ;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D9E99u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001D9E99: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D9EA1u); RECOMP_ABI_CALL(0x001DD6D0u, sub_001DD6D0); /* call 0x001DD6D0 */

loc_001D9EA1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D9E60; /* jne: not equal / not zero */

loc_001D9EA8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D9EAC: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D9EC0
 * Original: 0x001D9EC0 - 0x001D9EF7 (55 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9EC0(void)
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

loc_001D9EC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D9ED0u); RECOMP_ABI_CALL(0x001DC620u, sub_001DC620); /* call 0x001DC620 */

loc_001D9ED0: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D9ED8u); RECOMP_ABI_CALL(0x001DBD70u, sub_001DBD70); /* call 0x001DBD70 */

loc_001D9ED8: ;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D9EECu); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_001D9EEC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D9F00
 * Original: 0x001D9F00 - 0x001D9F2C (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D9F00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D9F0Fu); RECOMP_ABI_CALL(0x001DC620u, sub_001DC620); /* call 0x001DC620 */

loc_001D9F0F: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D9F17u); RECOMP_ABI_CALL(0x001DC770u, sub_001DC770); /* call 0x001DC770 */

loc_001D9F17: ;
    PUSH32(esp, 0x001D9F1Cu); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001D9F1C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D9F25u); RECOMP_ABI_CALL(0x001DBCA0u, sub_001DBCA0); /* call 0x001DBCA0 */

loc_001D9F25: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D9F30
 * Original: 0x001D9F30 - 0x001D9FC7 (151 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D9F30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D9F3Eu); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_001D9F3E: ;
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ebp = eax;
    PUSH32(esp, 0x001D9F4Au); RECOMP_ABI_CALL(0x001DC620u, sub_001DC620); /* call 0x001DC620 */

loc_001D9F4A: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D9F52u); RECOMP_ABI_CALL(0x001DBD70u, sub_001DBD70); /* call 0x001DBD70 */

loc_001D9F52: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D9F61; /* jne: not equal / not zero */

loc_001D9F5D: ;
    ebx = esi;
    goto loc_001D9F7D;

loc_001D9F61: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D9F69u); RECOMP_ABI_CALL(0x001DC770u, sub_001DC770); /* call 0x001DC770 */

loc_001D9F69: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D9F71u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001D9F71: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) esi = ebx; /* cmovg */
    ebp = 3;

loc_001D9F7D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D9F86u); RECOMP_ABI_CALL(0x001DBCA0u, sub_001DBCA0); /* call 0x001DBCA0 */

loc_001D9F86: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D9FAD; /* jl: less (signed <) */

loc_001D9F8E: ;
    edi = edi;

loc_001D9F90: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D9F99u); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001D9F99: ;
    eax = esi + 1;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D9FA5u); RECOMP_ABI_CALL(0x001DD420u, sub_001DD420); /* call 0x001DD420 */

loc_001D9FA5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D9F90; /* jge: greater or equal (signed >=) */

loc_001D9FAD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D9FB4u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001D9FB4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D9FBDu); RECOMP_ABI_CALL(0x001DD420u, sub_001DD420); /* call 0x001DD420 */

loc_001D9FBD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D9FD0
 * Original: 0x001D9FD0 - 0x001DA06F (159 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9FD0(void)
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

loc_001D9FD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D9FE2u); RECOMP_ABI_CALL(0x001DC620u, sub_001DC620); /* call 0x001DC620 */

loc_001D9FE2: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D9FEAu); RECOMP_ABI_CALL(0x001DBD70u, sub_001DBD70); /* call 0x001DBD70 */

loc_001D9FEA: ;
    ebp = eax;
    MEM32(esp + 0x20) = ebp;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DA002u); RECOMP_ABI_CALL(0x001DC7F0u, sub_001DC7F0); /* call 0x001DC7F0 */

loc_001DA002: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001DA00Au); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001DA00A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    esi = eax;
    if (CMP_G(_fas, _fbs)) goto loc_001DA017; /* jg: greater (signed >) */

loc_001DA010: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001DA017: ;
    eax = ebp + -1;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DA023u); RECOMP_ABI_CALL(0x001DBCA0u, sub_001DBCA0); /* call 0x001DBCA0 */

loc_001DA023: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DA02Cu); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001DA02C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DA053; /* jge: greater or equal (signed >=) */

loc_001DA033: ;
    PUSH32(esp, ebx);

loc_001DA034: ;
    ebx = esi + 1;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DA040u); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001DA040: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DA049u); RECOMP_ABI_CALL(0x001DD420u, sub_001DD420); /* call 0x001DD420 */

loc_001DA049: ;
    esi = ebx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DA034; /* jl: less (signed <) */

loc_001DA052: ;
    POP32(esp, ebx);

loc_001DA053: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DA059u); RECOMP_ABI_CALL(0x001DCF70u, sub_001DCF70); /* call 0x001DCF70 */

loc_001DA059: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DA062u); RECOMP_ABI_CALL(0x001DD420u, sub_001DD420); /* call 0x001DD420 */

loc_001DA062: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001DA070
 * Original: 0x001DA070 - 0x001DA16E (254 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA070(void)
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

loc_001DA070: ;
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x210;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x220);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2E0465);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA093u); RECOMP_ABI_CALL(0x001DC710u, sub_001DC710); /* call 0x001DC710 */

loc_001DA093: ;
    fp_push(MEMD(0x2ED218)); /* fld double */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, 0x001DA0A9u); RECOMP_ABI_CALL(0x001DC7F0u, sub_001DC7F0); /* call 0x001DC7F0 */

loc_001DA0A9: ;
    PUSH32(esp, 0x001DA0AEu); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001DA0AE: ;
    fp_push(MEMD(0x2DF118)); /* fld double */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001DA0C4u); RECOMP_ABI_CALL(0x001DC7F0u, sub_001DC7F0); /* call 0x001DC7F0 */

loc_001DA0C4: ;
    PUSH32(esp, 0x001DA0C9u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001DA0C9: ;
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x001DA0D5u); RECOMP_ABI_CALL(0x001DC620u, sub_001DC620); /* call 0x001DC620 */

loc_001DA0D5: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA0E9; /* jne: not equal / not zero */

loc_001DA0DC: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA0E4u); RECOMP_ABI_CALL(0x001DBD70u, sub_001DBD70); /* call 0x001DBD70 */

loc_001DA0E4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;

loc_001DA0E9: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA0F4u); RECOMP_ABI_CALL(0x001DC0A0u, sub_001DC0A0); /* call 0x001DC0A0 */

loc_001DA0F4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001DA151; /* jg: greater (signed >) */

loc_001DA0FB: ;
    goto loc_001DA100;

    /* nop */

loc_001DA100: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA109u); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001DA109: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA111u); RECOMP_ABI_CALL(0x001DCC10u, sub_001DCC10); /* call 0x001DCC10 */

loc_001DA111: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA128; /* jne: not equal / not zero */

loc_001DA118: ;
    PUSH32(esp, 0x2FB26C);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA125u); RECOMP_ABI_CALL(0x001DC580u, sub_001DC580); /* call 0x001DC580 */

loc_001DA125: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA128: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001DA132u); RECOMP_ABI_CALL(0x001DC000u, sub_001DC000); /* call 0x001DC000 */

loc_001DA132: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA14C; /* je: equal / zero */

loc_001DA139: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DA149u); RECOMP_ABI_CALL(0x001DBF50u, sub_001DBF50); /* call 0x001DBF50 */

loc_001DA149: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA14C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DA100; /* jle: less or equal (signed <=) */

loc_001DA151: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001DA15Bu); RECOMP_ABI_CALL(0x001DBFB0u, sub_001DBFB0); /* call 0x001DBFB0 */

loc_001DA15B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x210;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001DA170
 * Original: 0x001DA170 - 0x001DA553 (995 bytes, 391 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA170: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DA54F; /* jge: greater or equal (signed >=) */

loc_001DA183: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    goto loc_001DA193;

loc_001DA18B: ;
    ebx = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x1C);

loc_001DA193: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA19Cu); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001DA19C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA1A5u); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001DA1A5: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA1ADu); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DA1AD: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA1EF; /* je: equal / zero */

loc_001DA1B4: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA1BCu); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DA1BC: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA1C4u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DA1C4: ;
    PUSH32(esp, 0xFFFFFFFCu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA1CCu); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DA1CC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA1D6u); RECOMP_ABI_CALL(0x001DD560u, sub_001DD560); /* call 0x001DD560 */

loc_001DA1D6: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA1DEu); RECOMP_ABI_CALL(0x001DCD80u, sub_001DCD80); /* call 0x001DCD80 */

loc_001DA1DE: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001DA1E8u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DA1E8: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    goto loc_001DA1FC;

loc_001DA1EF: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA1F9u); RECOMP_ABI_CALL(0x001DCCC0u, sub_001DCCC0); /* call 0x001DCCC0 */

loc_001DA1F9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA1FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA217; /* je: equal / zero */

loc_001DA200: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA209u); RECOMP_ABI_CALL(0x001DD420u, sub_001DD420); /* call 0x001DD420 */

loc_001DA209: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA212u); RECOMP_ABI_CALL(0x001DD420u, sub_001DD420); /* call 0x001DD420 */

loc_001DA212: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001DA222;

loc_001DA217: ;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA21Fu); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DA21F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA222: ;
    eax = MEM32(esp + 0x1C);
    ebp = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA54D; /* je: equal / zero */

loc_001DA233: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA245u); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001DA245: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA252u); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001DA252: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA25Au); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DA25A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA2A0; /* je: equal / zero */

loc_001DA261: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA269u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DA269: ;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA271u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DA271: ;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA279u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DA279: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA283u); RECOMP_ABI_CALL(0x001DD560u, sub_001DD560); /* call 0x001DD560 */

loc_001DA283: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA28Bu); RECOMP_ABI_CALL(0x001DCD80u, sub_001DCD80); /* call 0x001DCD80 */

loc_001DA28B: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x001DA295u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DA295: ;
    eax = ebx;
    ebx = MEM32(esp + 0x54);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001DA2AD;

loc_001DA2A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA2AAu); RECOMP_ABI_CALL(0x001DCCC0u, sub_001DCCC0); /* call 0x001DCCC0 */

loc_001DA2AA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA2AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA2CF; /* je: equal / zero */

loc_001DA2B1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA2BAu); RECOMP_ABI_CALL(0x001DD420u, sub_001DD420); /* call 0x001DD420 */

loc_001DA2BA: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA2C7u); RECOMP_ABI_CALL(0x001DD420u, sub_001DD420); /* call 0x001DD420 */

loc_001DA2C7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001DA361;

loc_001DA2CF: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA2D7u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DA2D7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA2E0u); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001DA2E0: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA2E8u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DA2E8: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA32E; /* je: equal / zero */

loc_001DA2EF: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA2F7u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DA2F7: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA2FFu); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DA2FF: ;
    PUSH32(esp, 0xFFFFFFFCu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA307u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DA307: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA311u); RECOMP_ABI_CALL(0x001DD560u, sub_001DD560); /* call 0x001DD560 */

loc_001DA311: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA319u); RECOMP_ABI_CALL(0x001DCD80u, sub_001DCD80); /* call 0x001DCD80 */

loc_001DA319: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x001DA323u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DA323: ;
    eax = ebx;
    ebx = MEM32(esp + 0x54);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001DA33B;

loc_001DA32E: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA338u); RECOMP_ABI_CALL(0x001DCCC0u, sub_001DCCC0); /* call 0x001DCCC0 */

loc_001DA338: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA33B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA356; /* je: equal / zero */

loc_001DA33F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA348u); RECOMP_ABI_CALL(0x001DD420u, sub_001DD420); /* call 0x001DD420 */

loc_001DA348: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA351u); RECOMP_ABI_CALL(0x001DD420u, sub_001DD420); /* call 0x001DD420 */

loc_001DA351: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001DA361;

loc_001DA356: ;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA35Eu); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DA35E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA361: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA54D; /* je: equal / zero */

loc_001DA36A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA373u); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001DA373: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA37Bu); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DA37B: ;
    ebp = ebx + -1;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(esp + 0x30) = ebp;
    PUSH32(esp, 0x001DA38Bu); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001DA38B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA394u); RECOMP_ABI_CALL(0x001DD420u, sub_001DD420); /* call 0x001DD420 */

loc_001DA394: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA39Du); RECOMP_ABI_CALL(0x001DD420u, sub_001DD420); /* call 0x001DD420 */

loc_001DA39D: ;
    ebx = MEM32(esp + 0x54);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA3A4: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA3AEu); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001DA3AE: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA3B6u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DA3B6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA3F8; /* je: equal / zero */

loc_001DA3BD: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA3C5u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DA3C5: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA3CDu); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DA3CD: ;
    PUSH32(esp, 0xFFFFFFFCu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA3D5u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DA3D5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA3DFu); RECOMP_ABI_CALL(0x001DD560u, sub_001DD560); /* call 0x001DD560 */

loc_001DA3DF: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA3E7u); RECOMP_ABI_CALL(0x001DCD80u, sub_001DCD80); /* call 0x001DCD80 */

loc_001DA3E7: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001DA3F1u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DA3F1: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    goto loc_001DA405;

loc_001DA3F8: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA402u); RECOMP_ABI_CALL(0x001DCCC0u, sub_001DCCC0); /* call 0x001DCCC0 */

loc_001DA402: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA405: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA430; /* je: equal / zero */

loc_001DA409: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x20) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DA41D; /* jle: less or equal (signed <=) */

loc_001DA40F: ;
    PUSH32(esp, 0x2FB288);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA41Au); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001DA41A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA41D: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA425u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DA425: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001DA3A4;

    /* nop */

loc_001DA430: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA43Au); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001DA43A: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA442u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DA442: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA484; /* je: equal / zero */

loc_001DA449: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA451u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DA451: ;
    PUSH32(esp, 0xFFFFFFFCu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA459u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DA459: ;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA461u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DA461: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA46Bu); RECOMP_ABI_CALL(0x001DD560u, sub_001DD560); /* call 0x001DD560 */

loc_001DA46B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA473u); RECOMP_ABI_CALL(0x001DCD80u, sub_001DCD80); /* call 0x001DCD80 */

loc_001DA473: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001DA47Du); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DA47D: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    goto loc_001DA491;

loc_001DA484: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA48Eu); RECOMP_ABI_CALL(0x001DCCC0u, sub_001DCCC0); /* call 0x001DCCC0 */

loc_001DA48E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA491: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA4B9; /* je: equal / zero */

loc_001DA495: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DA4A9; /* jge: greater or equal (signed >=) */

loc_001DA49B: ;
    PUSH32(esp, 0x2FB288);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA4A6u); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001DA4A6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA4A9: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA4B1u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DA4B1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001DA430;

loc_001DA4B9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DA4D7; /* jl: less (signed <) */

loc_001DA4BD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA4C6u); RECOMP_ABI_CALL(0x001DD420u, sub_001DD420); /* call 0x001DD420 */

loc_001DA4C6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA4CFu); RECOMP_ABI_CALL(0x001DD420u, sub_001DD420); /* call 0x001DD420 */

loc_001DA4CF: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001DA3A4;

loc_001DA4D7: ;
    PUSH32(esp, 0xFFFFFFFCu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA4DFu); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DA4DF: ;
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA4ECu); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001DA4EC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA4F5u); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001DA4F5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA4FEu); RECOMP_ABI_CALL(0x001DD420u, sub_001DD420); /* call 0x001DD420 */

loc_001DA4FE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA507u); RECOMP_ABI_CALL(0x001DD420u, sub_001DD420); /* call 0x001DD420 */

loc_001DA507: ;
    edi = MEM32(esp + 0x58);
    ebp = MEM32(esp + 0x54);
    edx = edi;
    eax = ebx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DA52C; /* jge: greater or equal (signed >=) */

loc_001DA51E: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ebx + 2;
    eax = ebp;
    MEM32(esp + 0x1C) = ecx;
    ebp = ecx;
    goto loc_001DA53A;

loc_001DA52C: ;
    eax = ebx + 1;
    edx = eax + -2;
    ebx = edi;
    MEM32(esp + 0x20) = edx;
    edi = edx;

loc_001DA53A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA542u); RECOMP_ABI_CALL(0x001DA170u, sub_001DA170); /* call 0x001DA170 */

loc_001DA542: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DA18B; /* jl: less (signed <) */

loc_001DA54D: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001DA54F: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DA560
 * Original: 0x001DA560 - 0x001DA5BC (92 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA560: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA570u); RECOMP_ABI_CALL(0x001DC620u, sub_001DC620); /* call 0x001DC620 */

loc_001DA570: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA578u); RECOMP_ABI_CALL(0x001DBD70u, sub_001DBD70); /* call 0x001DBD70 */

loc_001DA578: ;
    PUSH32(esp, 0x2E0465);
    PUSH32(esp, 0x28);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001DA587u); RECOMP_ABI_CALL(0x001DBA40u, sub_001DBA40); /* call 0x001DBA40 */

loc_001DA587: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA58Fu); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DA58F: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DA5A3; /* jle: less or equal (signed <=) */

loc_001DA596: ;
    PUSH32(esp, 6);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA5A0u); RECOMP_ABI_CALL(0x001DC620u, sub_001DC620); /* call 0x001DC620 */

loc_001DA5A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA5A3: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA5ABu); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DA5AB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA5B4u); RECOMP_ABI_CALL(0x001DA170u, sub_001DA170); /* call 0x001DA170 */

loc_001DA5B4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DA5C0
 * Original: 0x001DA5C0 - 0x001DA5DF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA5C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA5C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2FB1E0);
    PUSH32(esp, 0x2FB2AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DA5D6u); RECOMP_ABI_CALL(0x001DBB30u, sub_001DBB30); /* call 0x001DBB30 */

loc_001DA5D6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001DA5E0
 * Original: 0x001DA5E0 - 0x001DA69A (186 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DA5E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA5EEu); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_001DA5EE: ;
    PUSH32(esp, 0x2FB45C);
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, 0x001DA5FBu); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DA5FB: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA606u); RECOMP_ABI_CALL(0x001DD190u, sub_001DD190); /* call 0x001DD190 */

loc_001DA606: ;
    edi = 1;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DA66E; /* jl: less (signed <) */

loc_001DA612: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA61Au); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DA61A: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA621u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DA621: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA62Bu); RECOMP_ABI_CALL(0x001DD560u, sub_001DD560); /* call 0x001DD560 */

loc_001DA62B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA633u); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001DA633: ;
    ebx = eax;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA687; /* je: equal / zero */

loc_001DA63C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DA653; /* jle: less or equal (signed <=) */

loc_001DA641: ;
    PUSH32(esp, 0x3136A8);
    PUSH32(esp, 0x2FB4F8);
    PUSH32(esp, 0x001DA650u); RECOMP_ABI_CALL(0x0023900Bu, sub_0023900B); /* call 0x0023900B */

loc_001DA650: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA653: ;
    PUSH32(esp, 0x3136A8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DA65Eu); RECOMP_ABI_CALL(0x0023900Bu, sub_0023900B); /* call 0x0023900B */

loc_001DA65E: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA666u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DA666: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DA612; /* jle: less or equal (signed <=) */

loc_001DA66E: ;
    PUSH32(esp, 0x3136A8);
    PUSH32(esp, 0x2F2B6C);
    PUSH32(esp, 0x001DA67Du); RECOMP_ABI_CALL(0x0023900Bu, sub_0023900B); /* call 0x0023900B */

loc_001DA67D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001DA687: ;
    PUSH32(esp, 0x2FB4CC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA692u); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001DA692: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DA6A0
 * Original: 0x001DA6A0 - 0x001DA7CC (300 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA6A0(void)
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

loc_001DA6A0: ;
    fp_push(MEMD(0x2FB510)); /* fld double */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DA6BDu); RECOMP_ABI_CALL(0x001DC7F0u, sub_001DC7F0); /* call 0x001DC7F0 */

loc_001DA6BD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001DA6C5u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001DA6C5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA706; /* jne: not equal / not zero */

loc_001DA6CC: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DA6D4u); RECOMP_ABI_CALL(0x001DC670u, sub_001DC670); /* call 0x001DC670 */

loc_001DA6D4: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DA6DCu); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_001DA6DC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA7B8; /* je: equal / zero */

loc_001DA6E7: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DA6EFu); RECOMP_ABI_CALL(0x001DCD30u, sub_001DCD30); /* call 0x001DCD30 */

loc_001DA6EF: ;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DA6F8u); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_001DA6F8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DA706: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DA711u); RECOMP_ABI_CALL(0x001DC6A0u, sub_001DC6A0); /* call 0x001DC6A0 */

loc_001DA711: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    edi = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001DA720; /* jl: less (signed <) */

loc_001DA71B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x24 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DA730; /* jle: less or equal (signed <=) */

loc_001DA720: ;
    PUSH32(esp, 0x2FB4FC);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DA72Du); RECOMP_ABI_CALL(0x001DC580u, sub_001DC580); /* call 0x001DC580 */

loc_001DA72D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA730: ;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DA73Cu); RECOMP_ABI_CALL(0x00237B9Du, sub_00237B9D); /* call 0x00237B9D */

loc_001DA73C: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    esi = eax;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001DA7B8; /* je: equal / zero */

loc_001DA74A: ;
    /* nop */

loc_001DA750: ;
    _fa = (uint32_t)(MEM32(0x313910)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x313910), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DA76D; /* jle: less or equal (signed <=) */

loc_001DA759: ;
    ecx = ZX8(MEM8(ecx));
    PUSH32(esp, 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DA764u); RECOMP_ABI_CALL(0x0023910Fu, sub_0023910F); /* call 0x0023910F */

loc_001DA764: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001DA77C;

loc_001DA76D: ;
    edx = ZX8(MEM8(ecx));
    eax = MEM32(0x313908);
    eax = ZX8(MEM8(eax + edx * 2));
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001DA77C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA787; /* je: equal / zero */

loc_001DA780: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 8) = ecx;
    goto loc_001DA750;

loc_001DA787: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA7B8; /* jne: not equal / not zero */

loc_001DA78C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0xC) = esi;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001DA79E; /* jge: greater or equal (signed >=) */

loc_001DA798: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x2ED1E0)); /* fadd qword ptr [0x2ed1e0] */

loc_001DA79E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DA7AAu); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_001DA7AA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DA7B8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DA7BEu); RECOMP_ABI_CALL(0x001DCF70u, sub_001DCF70); /* call 0x001DCF70 */

loc_001DA7BE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 1;
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
 * sub_001DA7D0
 * Original: 0x001DA7D0 - 0x001DA849 (121 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA7D0(void)
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

loc_001DA7D0: ;
    fp_push(MEMD(0x2ED218)); /* fld double */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA7EAu); RECOMP_ABI_CALL(0x001DC7F0u, sub_001DC7F0); /* call 0x001DC7F0 */

loc_001DA7EA: ;
    PUSH32(esp, 0x001DA7EFu); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001DA7EF: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001DA7F9u); RECOMP_ABI_CALL(0x001DC670u, sub_001DC670); /* call 0x001DC670 */

loc_001DA7F9: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA801u); RECOMP_ABI_CALL(0x001DCC10u, sub_001DCC10); /* call 0x001DCC10 */

loc_001DA801: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA832; /* je: equal / zero */

loc_001DA808: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA832; /* je: equal / zero */

loc_001DA80C: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA813u); RECOMP_ABI_CALL(0x001DB870u, sub_001DB870); /* call 0x001DB870 */

loc_001DA813: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA81Bu); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DA81B: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA823u); RECOMP_ABI_CALL(0x001DD720u, sub_001DD720); /* call 0x001DD720 */

loc_001DA823: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA82Cu); RECOMP_ABI_CALL(0x001DD6C0u, sub_001DD6C0); /* call 0x001DD6C0 */

loc_001DA82C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DA832: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA83Au); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DA83A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA843u); RECOMP_ABI_CALL(0x001DD6C0u, sub_001DD6C0); /* call 0x001DD6C0 */

loc_001DA843: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001DA850
 * Original: 0x001DA850 - 0x001DA893 (67 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA850: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA85Du); RECOMP_ABI_CALL(0x001DC670u, sub_001DC670); /* call 0x001DC670 */

loc_001DA85D: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA865u); RECOMP_ABI_CALL(0x001DD2C0u, sub_001DD2C0); /* call 0x001DD2C0 */

loc_001DA865: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA87C; /* jne: not equal / not zero */

loc_001DA86C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA872u); RECOMP_ABI_CALL(0x001DCF70u, sub_001DCF70); /* call 0x001DCF70 */

loc_001DA872: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DA87C: ;
    PUSH32(esp, 0x2F0AA0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA889u); RECOMP_ABI_CALL(0x001DBA70u, sub_001DBA70); /* call 0x001DBA70 */

loc_001DA889: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DA8A0
 * Original: 0x001DA8A0 - 0x001DA913 (115 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA8A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA8AEu); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DA8AE: ;
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001DA8BAu); RECOMP_ABI_CALL(0x001DC620u, sub_001DC620); /* call 0x001DC620 */

loc_001DA8BA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA8D6; /* je: equal / zero */

loc_001DA8C1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA8D6; /* je: equal / zero */

loc_001DA8C6: ;
    PUSH32(esp, 0x2FB53C);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA8D3u); RECOMP_ABI_CALL(0x001DC580u, sub_001DC580); /* call 0x001DC580 */

loc_001DA8D3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA8D6: ;
    PUSH32(esp, 0x2F0AA0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA8E3u); RECOMP_ABI_CALL(0x001DBA70u, sub_001DBA70); /* call 0x001DBA70 */

loc_001DA8E3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DA8F8; /* je: equal / zero */

loc_001DA8EA: ;
    PUSH32(esp, 0x2FB518);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA8F5u); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001DA8F5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA8F8: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA900u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DA900: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA908u); RECOMP_ABI_CALL(0x001DD480u, sub_001DD480); /* call 0x001DD480 */

loc_001DA908: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DA920
 * Original: 0x001DA920 - 0x001DA9CB (171 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA920(void)
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

loc_001DA920: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA92Bu); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DA92B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA942; /* jne: not equal / not zero */

loc_001DA933: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA93Bu); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DA93B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DA942: ;
    fp_push(MEMD(0x2ED218)); /* fld double */
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA957u); RECOMP_ABI_CALL(0x001DC7F0u, sub_001DC7F0); /* call 0x001DC7F0 */

loc_001DA957: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001DA95Fu); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001DA95F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DA975; /* jge: greater or equal (signed >=) */

loc_001DA965: ;
    PUSH32(esp, 0x2FB59C);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA972u); RECOMP_ABI_CALL(0x001DC580u, sub_001DC580); /* call 0x001DC580 */

loc_001DA972: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA975: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA981u); RECOMP_ABI_CALL(0x001DDC70u, sub_001DDC70); /* call 0x001DDC70 */

loc_001DA981: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA998; /* jne: not equal / not zero */

loc_001DA988: ;
    PUSH32(esp, 0x2FB58C);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA995u); RECOMP_ABI_CALL(0x001DC580u, sub_001DC580); /* call 0x001DC580 */

loc_001DA995: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA998: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2FB588);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA9A8u); RECOMP_ABI_CALL(0x001DE6A0u, sub_001DE6A0); /* call 0x001DE6A0 */

loc_001DA9A8: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA9B0u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DA9B0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DA9C6; /* jne: not equal / not zero */

loc_001DA9B7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2FB554);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA9C3u); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001DA9C3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DA9C6: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001DA9D0
 * Original: 0x001DA9D0 - 0x001DAA18 (72 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DA9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DA9D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x001DA9DAu); RECOMP_ABI_CALL(0x001DA920u, sub_001DA920); /* call 0x001DA920 */

loc_001DA9DA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA9E2u); RECOMP_ABI_CALL(0x001DD330u, sub_001DD330); /* call 0x001DD330 */

loc_001DA9E2: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x2FB5B8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA9EFu); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DA9EF: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA9F7u); RECOMP_ABI_CALL(0x001DD1E0u, sub_001DD1E0); /* call 0x001DD1E0 */

loc_001DA9F7: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DA9FFu); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DA9FF: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DAA11; /* jne: not equal / not zero */

loc_001DAA06: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAA0Eu); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DAA0E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DAA11: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DAA20
 * Original: 0x001DAA20 - 0x001DAADD (189 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAA20(void)
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

loc_001DAA20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAA2Fu); RECOMP_ABI_CALL(0x001DC620u, sub_001DC620); /* call 0x001DC620 */

loc_001DAA2F: ;
    PUSH32(esp, 0x001DAA34u); RECOMP_ABI_CALL(0x001DA920u, sub_001DA920); /* call 0x001DA920 */

loc_001DAA34: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAA3Cu); RECOMP_ABI_CALL(0x001DD330u, sub_001DD330); /* call 0x001DD330 */

loc_001DAA3C: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x2FB5B8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAA49u); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DAA49: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAA51u); RECOMP_ABI_CALL(0x001DD1E0u, sub_001DD1E0); /* call 0x001DD1E0 */

loc_001DAA51: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAA59u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DAA59: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001DAA6D; /* je: equal / zero */

loc_001DAA60: ;
    PUSH32(esp, 0x2FB5F8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAA6Bu); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001DAA6B: ;
    goto loc_001DAA75;

loc_001DAA6D: ;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAA75u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DAA75: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAA80u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DAA80: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAA88u); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_001DAA88: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001DAABC; /* je: equal / zero */

loc_001DAA8F: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAA97u); RECOMP_ABI_CALL(0x001DCD30u, sub_001DCD30); /* call 0x001DCD30 */

loc_001DAA97: ;
    fp_push(MEMD(0x2DF118)); /* fld double */
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
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001DAABC; /* jp: parity */

loc_001DAAAA: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAAB5u); RECOMP_ABI_CALL(0x001DCAA0u, sub_001DCAA0); /* call 0x001DCAA0 */

loc_001DAAB5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DAABC: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAAC4u); RECOMP_ABI_CALL(0x001DD4F0u, sub_001DD4F0); /* call 0x001DD4F0 */

loc_001DAAC4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001DAAD9; /* jne: not equal / not zero */

loc_001DAACB: ;
    PUSH32(esp, 0x2FB5C0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAAD6u); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001DAAD6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DAAD9: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001DAAE0
 * Original: 0x001DAAE0 - 0x001DAB10 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAAE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAAE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAAEDu); RECOMP_ABI_CALL(0x001DC670u, sub_001DC670); /* call 0x001DC670 */

loc_001DAAED: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAAF5u); RECOMP_ABI_CALL(0x001DC670u, sub_001DC670); /* call 0x001DC670 */

loc_001DAAF5: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAAFFu); RECOMP_ABI_CALL(0x001DCC50u, sub_001DCC50); /* call 0x001DCC50 */

loc_001DAAFF: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAB06u); RECOMP_ABI_CALL(0x001DD160u, sub_001DD160); /* call 0x001DD160 */

loc_001DAB06: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DAB10
 * Original: 0x001DAB10 - 0x001DAB39 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAB10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAB10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAB1Fu); RECOMP_ABI_CALL(0x001DC620u, sub_001DC620); /* call 0x001DC620 */

loc_001DAB1F: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAB27u); RECOMP_ABI_CALL(0x001DC670u, sub_001DC670); /* call 0x001DC670 */

loc_001DAB27: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAB2Fu); RECOMP_ABI_CALL(0x001DD1E0u, sub_001DD1E0); /* call 0x001DD1E0 */

loc_001DAB2F: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DAB40
 * Original: 0x001DAB40 - 0x001DAB71 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAB40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAB40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAB4Fu); RECOMP_ABI_CALL(0x001DC620u, sub_001DC620); /* call 0x001DC620 */

loc_001DAB4F: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAB57u); RECOMP_ABI_CALL(0x001DC670u, sub_001DC670); /* call 0x001DC670 */

loc_001DAB57: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAB5Fu); RECOMP_ABI_CALL(0x001DC670u, sub_001DC670); /* call 0x001DC670 */

loc_001DAB5F: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAB67u); RECOMP_ABI_CALL(0x001DD3C0u, sub_001DD3C0); /* call 0x001DD3C0 */

loc_001DAB67: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DAB80
 * Original: 0x001DAB80 - 0x001DABC3 (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAB80(void)
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

loc_001DAB80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAB8Cu); RECOMP_ABI_CALL(0x001DD670u, sub_001DD670); /* call 0x001DD670 */

loc_001DAB8C: ;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAB9Eu); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_001DAB9E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DABA4u); RECOMP_ABI_CALL(0x001DD660u, sub_001DD660); /* call 0x001DD660 */

loc_001DABA4: ;
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DABB8u); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_001DABB8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 2;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001DABD0
 * Original: 0x001DABD0 - 0x001DABFC (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DABD0(void)
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

loc_001DABD0: ;
    fp_push(MEMD(0x2DF118)); /* fld double */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DABE9u); RECOMP_ABI_CALL(0x001DC7F0u, sub_001DC7F0); /* call 0x001DC7F0 */

loc_001DABE9: ;
    PUSH32(esp, 0x001DABEEu); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001DABEE: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DABF5u); RECOMP_ABI_CALL(0x001DD680u, sub_001DD680); /* call 0x001DD680 */

loc_001DABF5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001DAC00
 * Original: 0x001DAC00 - 0x001DAC2D (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAC00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAC00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAC0Du); RECOMP_ABI_CALL(0x001DC670u, sub_001DC670); /* call 0x001DC670 */

loc_001DAC0D: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAC15u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DAC15: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAC1Cu); RECOMP_ABI_CALL(0x001DCB60u, sub_001DCB60); /* call 0x001DCB60 */

loc_001DAC1C: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAC23u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DAC23: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DAC30
 * Original: 0x001DAC30 - 0x001DAC6D (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAC30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAC3Fu); RECOMP_ABI_CALL(0x001DC620u, sub_001DC620); /* call 0x001DC620 */

loc_001DAC3F: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAC47u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DAC47: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAC4Fu); RECOMP_ABI_CALL(0x001DD6D0u, sub_001DD6D0); /* call 0x001DD6D0 */

loc_001DAC4F: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DAC5D; /* je: equal / zero */

loc_001DAC56: ;
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DAC5D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAC63u); RECOMP_ABI_CALL(0x001DCF70u, sub_001DCF70); /* call 0x001DCF70 */

loc_001DAC63: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DAC70
 * Original: 0x001DAC70 - 0x001DACAF (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAC70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAC70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAC7Fu); RECOMP_ABI_CALL(0x001DC620u, sub_001DC620); /* call 0x001DC620 */

loc_001DAC7F: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x2FB48C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAC8Cu); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DAC8C: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAC97u); RECOMP_ABI_CALL(0x001DD1E0u, sub_001DD1E0); /* call 0x001DD1E0 */

loc_001DAC97: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAC9Fu); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DAC9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DACA5u); RECOMP_ABI_CALL(0x001DCF70u, sub_001DCF70); /* call 0x001DCF70 */

loc_001DACA5: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DACB0
 * Original: 0x001DACB0 - 0x001DAD77 (199 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DACB0(void)
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

loc_001DACB0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DACC0u); RECOMP_ABI_CALL(0x001DCD30u, sub_001DCD30); /* call 0x001DCD30 */

loc_001DACC0: ;
    MEMD(esp + 0xC) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DACCEu); RECOMP_ABI_CALL(0x001DC620u, sub_001DC620); /* call 0x001DC620 */

loc_001DACCE: ;
    fp_push(MEMD(0x2DF118)); /* fld double */
    fp_push(MEMD(esp + 0x18)); /* fld double */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001DAD34; /* jp: parity */

loc_001DACE5: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DACEDu); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DACED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001DAD34; /* jne: not equal / not zero */

loc_001DACF5: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x2FB484);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAD02u); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DAD02: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAD0Du); RECOMP_ABI_CALL(0x001DD1E0u, sub_001DD1E0); /* call 0x001DD1E0 */

loc_001DAD0D: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAD15u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DAD15: ;
    fp_push(MEMD(0x2DF118)); /* fld double */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAD27u); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_001DAD27: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 3;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DAD34: ;
    fp_push(MEMD(esp + 4)); /* fld double */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x2ED218)); /* fadd qword ptr [0x2ed218] */
    MEMD(esp + 0xC) = fp_top(); /* fst */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAD4Eu); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_001DAD4E: ;
    fp_push(MEMD(esp + 0x10)); /* fld double */
    PUSH32(esp, 0x001DAD57u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001DAD57: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAD60u); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001DAD60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAD68u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DAD68: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
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
 * sub_001DAD80
 * Original: 0x001DAD80 - 0x001DADD8 (88 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAD80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAD94u); RECOMP_ABI_CALL(0x001DC6A0u, sub_001DC6A0); /* call 0x001DC6A0 */

loc_001DAD94: ;
    PUSH32(esp, 0);
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DADA1u); RECOMP_ABI_CALL(0x001DC710u, sub_001DC710); /* call 0x001DC710 */

loc_001DADA1: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DADAEu); RECOMP_ABI_CALL(0x001DC480u, sub_001DC480); /* call 0x001DC480 */

loc_001DADAE: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DADBE; /* jne: not equal / not zero */

loc_001DADB5: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001DADBE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DADC4u); RECOMP_ABI_CALL(0x001DCF70u, sub_001DCF70); /* call 0x001DCF70 */

loc_001DADC4: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DADCCu); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_001DADCC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 2;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DADE0
 * Original: 0x001DADE0 - 0x001DAE1E (62 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DADE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DADE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DADF1u); RECOMP_ABI_CALL(0x001DC710u, sub_001DC710); /* call 0x001DC710 */

loc_001DADF1: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DADF8u); RECOMP_ABI_CALL(0x001DC270u, sub_001DC270); /* call 0x001DC270 */

loc_001DADF8: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DAE06; /* jne: not equal / not zero */

loc_001DADFF: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DAE06: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAE0Cu); RECOMP_ABI_CALL(0x001DCF70u, sub_001DCF70); /* call 0x001DCF70 */

loc_001DAE0C: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAE14u); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_001DAE14: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DAE20
 * Original: 0x001DAE20 - 0x001DAE5E (62 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAE20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAE20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAE31u); RECOMP_ABI_CALL(0x001DC710u, sub_001DC710); /* call 0x001DC710 */

loc_001DAE31: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAE38u); RECOMP_ABI_CALL(0x001DC270u, sub_001DC270); /* call 0x001DC270 */

loc_001DAE38: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DAE48; /* je: equal / zero */

loc_001DAE3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAE45u); RECOMP_ABI_CALL(0x001DD6C0u, sub_001DD6C0); /* call 0x001DD6C0 */

loc_001DAE45: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DAE48: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAE52u); RECOMP_ABI_CALL(0x001DD560u, sub_001DD560); /* call 0x001DD560 */

loc_001DAE52: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAE58u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_001DAE58: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DAE60
 * Original: 0x001DAE60 - 0x001DAEAD (77 bytes, 30 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAE60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAE6Du); RECOMP_ABI_CALL(0x001DC670u, sub_001DC670); /* call 0x001DC670 */

loc_001DAE6D: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAE75u); RECOMP_ABI_CALL(0x001DCD80u, sub_001DCD80); /* call 0x001DCD80 */

loc_001DAE75: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DAE9B; /* jne: not equal / not zero */

loc_001DAE7C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FB628);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAE8Au); RECOMP_ABI_CALL(0x001DC710u, sub_001DC710); /* call 0x001DC710 */

loc_001DAE8A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2DDE44);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAE96u); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001DAE96: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DAE9B: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAEA3u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DAEA3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DAEB0
 * Original: 0x001DAEB0 - 0x001DAEFA (74 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAEB0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DAEC1u); RECOMP_ABI_CALL(0x001DC620u, sub_001DC620); /* call 0x001DC620 */

loc_001DAEC1: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DAEC9u); RECOMP_ABI_CALL(0x001DBD70u, sub_001DBD70); /* call 0x001DBD70 */

loc_001DAEC9: ;
    edi = eax;
    PUSH32(esp, 0x2FB63C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DAED7u); RECOMP_ABI_CALL(0x001DBA40u, sub_001DBA40); /* call 0x001DBA40 */

loc_001DAED7: ;
    esi = 1;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DAEF4; /* jl: less (signed <) */

loc_001DAEE3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DAEECu); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001DAEEC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DAEE3; /* jle: less or equal (signed <=) */

loc_001DAEF4: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DAF00
 * Original: 0x001DAF00 - 0x001DAF46 (70 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAF00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAF0Du); RECOMP_ABI_CALL(0x001DC670u, sub_001DC670); /* call 0x001DC670 */

loc_001DAF0D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAF1Au); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_001DAF1A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAF25u); RECOMP_ABI_CALL(0x001DD5A0u, sub_001DD5A0); /* call 0x001DD5A0 */

loc_001DAF25: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAF33u); RECOMP_ABI_CALL(0x001DD160u, sub_001DD160); /* call 0x001DD160 */

loc_001DAF33: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAF3Bu); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_001DAF3B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAF41u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_001DAF41: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DAF50
 * Original: 0x001DAF50 - 0x001DAF9A (74 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DAF50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAF5Du); RECOMP_ABI_CALL(0x001DC670u, sub_001DC670); /* call 0x001DC670 */

loc_001DAF5D: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAF65u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DAF65: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAF6Du); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_001DAF6D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAF79u); RECOMP_ABI_CALL(0x001DD5A0u, sub_001DD5A0); /* call 0x001DD5A0 */

loc_001DAF79: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAF87u); RECOMP_ABI_CALL(0x001DD160u, sub_001DD160); /* call 0x001DD160 */

loc_001DAF87: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAF8Fu); RECOMP_ABI_CALL(0x001DCAA0u, sub_001DCAA0); /* call 0x001DCAA0 */

loc_001DAF8F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAF95u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_001DAF95: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DAFA0
 * Original: 0x001DAFA0 - 0x001DB0C5 (293 bytes, 98 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DAFA0: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x88);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAFB6u); RECOMP_ABI_CALL(0x001DC670u, sub_001DC670); /* call 0x001DC670 */

loc_001DAFB6: ;
    PUSH32(esp, 0x2F0A8C);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAFC3u); RECOMP_ABI_CALL(0x001DBAD0u, sub_001DBAD0); /* call 0x001DBAD0 */

loc_001DAFC3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB061; /* jne: not equal / not zero */

loc_001DAFCE: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAFD6u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DAFD6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DB053; /* ja: above (unsigned >) */

loc_001DAFDE: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1DB0C8); /* switch: 9 entries, 8 targets */
    if (_jt == 0x001DAFE5u) goto loc_001DAFE5;
    if (_jt == 0x001DB004u) goto loc_001DB004;
    if (_jt == 0x001DB01Cu) goto loc_001DB01C;
    if (_jt == 0x001DB038u) goto loc_001DB038;
    if (_jt == 0x001DB06Eu) goto loc_001DB06E;
    if (_jt == 0x001DB083u) goto loc_001DB083;
    if (_jt == 0x001DB098u) goto loc_001DB098;
    if (_jt == 0x001DB0A8u) goto loc_001DB0A8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001DAFE5: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAFEDu); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001DAFED: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DAFF4u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DAFF4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DB004: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB00Cu); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DB00C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DB01C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB024u); RECOMP_ABI_CALL(0x001DCD80u, sub_001DCD80); /* call 0x001DCD80 */

loc_001DB024: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = 0x2DC8F4;
    if (CMP_NE(_fa, _fb)) goto loc_001DB035; /* jne: not equal / not zero */

loc_001DB030: ;
    eax = 0x2DE2A4;

loc_001DB035: ;
    PUSH32(esp, eax);
    goto loc_001DB058;

loc_001DB038: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB040u); RECOMP_ABI_CALL(0x001DCF00u, sub_001DCF00); /* call 0x001DCF00 */

loc_001DB040: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FB684);

loc_001DB046: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);

loc_001DB04B: ;
    PUSH32(esp, 0x001DB050u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_001DB050: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DB053: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);

loc_001DB058: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB05Eu); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DB05E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DB061: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DB06E: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB076u); RECOMP_ABI_CALL(0x001DCF00u, sub_001DCF00); /* call 0x001DCF00 */

loc_001DB076: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FB674);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    goto loc_001DB04B;

loc_001DB083: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB08Bu); RECOMP_ABI_CALL(0x001DCE90u, sub_001DCE90); /* call 0x001DCE90 */

loc_001DB08B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FB664);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    goto loc_001DB04B;

loc_001DB098: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB0A0u); RECOMP_ABI_CALL(0x001DCED0u, sub_001DCED0); /* call 0x001DCED0 */

loc_001DB0A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FB658);
    goto loc_001DB046;

loc_001DB0A8: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x2FB654);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB0B5u); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DB0B5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DB0F0
 * Original: 0x001DB0F0 - 0x001DB1C0 (208 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB0F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB0FDu); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DB0FD: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB105u); RECOMP_ABI_CALL(0x001DD7A0u, sub_001DD7A0); /* call 0x001DD7A0 */

loc_001DB105: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB10Du); RECOMP_ABI_CALL(0x001DCD80u, sub_001DCD80); /* call 0x001DCD80 */

loc_001DB10D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DB1B9; /* je: equal / zero */

loc_001DB118: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB120u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DB120: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB15E; /* jne: not equal / not zero */

loc_001DB128: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB12Eu); RECOMP_ABI_CALL(0x001DD280u, sub_001DD280); /* call 0x001DD280 */

loc_001DB12E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB136u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DB136: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB13Eu); RECOMP_ABI_CALL(0x001DD160u, sub_001DD160); /* call 0x001DD160 */

loc_001DB13E: ;
    PUSH32(esp, 0xFFFFD8EEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB149u); RECOMP_ABI_CALL(0x001DD3C0u, sub_001DD3C0); /* call 0x001DD3C0 */

loc_001DB149: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB154u); RECOMP_ABI_CALL(0x001DD480u, sub_001DD480); /* call 0x001DD480 */

loc_001DB154: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DB15E: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB166u); RECOMP_ABI_CALL(0x001DD2C0u, sub_001DD2C0); /* call 0x001DD2C0 */

loc_001DB166: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DB193; /* je: equal / zero */

loc_001DB16D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFD8EEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB179u); RECOMP_ABI_CALL(0x001DD1E0u, sub_001DD1E0); /* call 0x001DD1E0 */

loc_001DB179: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB181u); RECOMP_ABI_CALL(0x001DCD80u, sub_001DCD80); /* call 0x001DCD80 */

loc_001DB181: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001DB18Bu); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DB18B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001DB1A3; /* jne: not equal / not zero */

loc_001DB193: ;
    PUSH32(esp, 0x2FB690);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB1A0u); RECOMP_ABI_CALL(0x001DC580u, sub_001DC580); /* call 0x001DC580 */

loc_001DB1A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DB1A3: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB1ABu); RECOMP_ABI_CALL(0x001DD2C0u, sub_001DD2C0); /* call 0x001DD2C0 */

loc_001DB1AB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB1B6u); RECOMP_ABI_CALL(0x001DD480u, sub_001DD480); /* call 0x001DD480 */

loc_001DB1B6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DB1B9: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB1C0
 * Original: 0x001DB1C0 - 0x001DB1F9 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB1C0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2FB6B4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB1CCu); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DB1CC: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB1D7u); RECOMP_ABI_CALL(0x001DD190u, sub_001DD190); /* call 0x001DD190 */

loc_001DB1D7: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB1DFu); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001DB1DF: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001DB1E9u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DB1E9: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_001DB1F7; /* jne: not equal / not zero */

loc_001DB1F2: ;
    eax = 0x2FB6AC;

loc_001DB1F7: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB200
 * Original: 0x001DB200 - 0x001DB270 (112 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DB200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB200: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DB20Bu); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001DB20B: ;
    esi = eax;
    PUSH32(esp, 0x3F);
    PUSH32(esp, esi);
    ebp = 1;
    PUSH32(esp, 0x001DB21Au); RECOMP_ABI_CALL(0x00238170u, sub_00238170); /* call 0x00238170 */

loc_001DB21A: ;
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DB25B; /* je: equal / zero */

loc_001DB223: ;
    PUSH32(esp, 0x2FB6C0);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DB230u); RECOMP_ABI_CALL(0x001DBA40u, sub_001DBA40); /* call 0x001DBA40 */

loc_001DB230: ;
    eax = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DB23Cu); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DB23C: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DB244u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DB244: ;
    esi = edi + 1;
    PUSH32(esp, 0x3F);
    PUSH32(esp, esi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001DB252u); RECOMP_ABI_CALL(0x00238170u, sub_00238170); /* call 0x00238170 */

loc_001DB252: ;
    edi = eax;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB223; /* jne: not equal / not zero */

loc_001DB25B: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DB262u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DB262: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DB269u); RECOMP_ABI_CALL(0x001DD720u, sub_001DD720); /* call 0x001DD720 */

loc_001DB269: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB270
 * Original: 0x001DB270 - 0x001DB4B0 (576 bytes, 223 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB270: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ebp = 2;
    PUSH32(esp, 0x001DB285u); RECOMP_ABI_CALL(0x001DC6A0u, sub_001DC6A0); /* call 0x001DC6A0 */

loc_001DB285: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB28Du); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DB28D: ;
    PUSH32(esp, 0x2FB75C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB298u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DB298: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB2A3u); RECOMP_ABI_CALL(0x001DD190u, sub_001DD190); /* call 0x001DD190 */

loc_001DB2A3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB2AAu); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DB2AA: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DB2C3; /* je: equal / zero */

loc_001DB2B2: ;
    PUSH32(esp, 0x2FB740);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB2BDu); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001DB2BD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001DB2C3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2FB6B4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB2CFu); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DB2CF: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB2DAu); RECOMP_ABI_CALL(0x001DD190u, sub_001DD190); /* call 0x001DD190 */

loc_001DB2DA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB2E2u); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001DB2E2: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001DB2ECu); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DB2EC: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB2F8; /* jne: not equal / not zero */

loc_001DB2F3: ;
    edi = 0x2FB6AC;

loc_001DB2F8: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB300u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DB300: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB308u); RECOMP_ABI_CALL(0x001DD1E0u, sub_001DD1E0); /* call 0x001DD1E0 */

loc_001DB308: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB310u); RECOMP_ABI_CALL(0x001DCD80u, sub_001DCD80); /* call 0x001DCD80 */

loc_001DB310: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB49E; /* jne: not equal / not zero */

loc_001DB31B: ;
    PUSH32(esp, ebx);
    /* nop */

loc_001DB320: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB328u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DB328: ;
    SET_LO8(eax, MEM8(edi));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001DB38F; /* je: equal / zero */

loc_001DB333: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3B (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB33A; /* jne: not equal / not zero */

loc_001DB337: ;
    ebx = edi + 1;

loc_001DB33A: ;
    PUSH32(esp, 0x3B);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DB342u); RECOMP_ABI_CALL(0x00238170u, sub_00238170); /* call 0x00238170 */

loc_001DB342: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB35C; /* jne: not equal / not zero */

loc_001DB34B: ;
    eax = ebx;
    edx = eax + 1;

loc_001DB350: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB350; /* jne: not equal / not zero */

loc_001DB357: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax + ebx;

loc_001DB35C: ;
    eax = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB368u); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DB368: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DB38F; /* je: equal / zero */

loc_001DB36F: ;
    ebx = esi;
    PUSH32(esp, 0x001DB376u); RECOMP_ABI_CALL(0x001DB200u, sub_001DB200); /* call 0x001DB200 */

loc_001DB376: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB37Eu); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001DB37E: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB385u); RECOMP_ABI_CALL(0x001DC270u, sub_001DC270); /* call 0x001DC270 */

loc_001DB385: ;
    ebp = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DB320; /* je: equal / zero */

loc_001DB38F: ;
    eax = ebp;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebx);
    if ((_fa == 0)) goto loc_001DB3EA; /* je: equal / zero */

loc_001DB397: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001DB3C6; /* je: equal / zero */

loc_001DB39C: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB3A4u); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001DB3A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB3B0u); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001DB3B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FB720);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB3BFu); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001DB3BF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001DB3C6: ;
    PUSH32(esp, 0x001DB3CBu); RECOMP_ABI_CALL(0x001DB1C0u, sub_001DB1C0); /* call 0x001DB1C0 */

loc_001DB3CB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB3D4u); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001DB3D4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FB6F4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB3E3u); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001DB3E3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001DB3EA: ;
    PUSH32(esp, 0x2FB6E4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB3F5u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DB3F5: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB400u); RECOMP_ABI_CALL(0x001DD190u, sub_001DD190); /* call 0x001DD190 */

loc_001DB400: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB408u); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_001DB408: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB410u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DB410: ;
    PUSH32(esp, 0x2FB6E4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB41Bu); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DB41B: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB423u); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_001DB423: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB42Eu); RECOMP_ABI_CALL(0x001DD380u, sub_001DD380); /* call 0x001DD380 */

loc_001DB42E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB438u); RECOMP_ABI_CALL(0x001DD560u, sub_001DD560); /* call 0x001DD560 */

loc_001DB438: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB443u); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_001DB443: ;
    PUSH32(esp, 0x2FB6E4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB44Eu); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DB44E: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB456u); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_001DB456: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB461u); RECOMP_ABI_CALL(0x001DD380u, sub_001DD380); /* call 0x001DD380 */

loc_001DB461: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB469u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DB469: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB483; /* jne: not equal / not zero */

loc_001DB470: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB478u); RECOMP_ABI_CALL(0x001DD160u, sub_001DD160); /* call 0x001DD160 */

loc_001DB478: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB480u); RECOMP_ABI_CALL(0x001DCAA0u, sub_001DCAA0); /* call 0x001DCAA0 */

loc_001DB480: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DB483: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB48Bu); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DB48B: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB493u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DB493: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB49Bu); RECOMP_ABI_CALL(0x001DD3C0u, sub_001DD3C0); /* call 0x001DD3C0 */

loc_001DB49B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DB49E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB2C3
 * Original: 0x001DB2C3 - 0x001DB4A7 (484 bytes, 184 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB2C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DB2C3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2FB6B4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB2CFu); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DB2CF: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB2DAu); RECOMP_ABI_CALL(0x001DD190u, sub_001DD190); /* call 0x001DD190 */

loc_001DB2DA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB2E2u); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001DB2E2: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001DB2ECu); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DB2EC: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB2F8; /* jne: not equal / not zero */

loc_001DB2F3: ;
    edi = 0x2FB6AC;

loc_001DB2F8: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB300u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DB300: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB308u); RECOMP_ABI_CALL(0x001DD1E0u, sub_001DD1E0); /* call 0x001DD1E0 */

loc_001DB308: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB310u); RECOMP_ABI_CALL(0x001DCD80u, sub_001DCD80); /* call 0x001DCD80 */

loc_001DB310: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB49E; /* jne: not equal / not zero */

loc_001DB31B: ;
    PUSH32(esp, ebx);
    /* nop */

loc_001DB320: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB328u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DB328: ;
    SET_LO8(eax, MEM8(edi));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001DB38F; /* je: equal / zero */

loc_001DB333: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3B (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB33A; /* jne: not equal / not zero */

loc_001DB337: ;
    ebx = edi + 1;

loc_001DB33A: ;
    PUSH32(esp, 0x3B);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DB342u); RECOMP_ABI_CALL(0x00238170u, sub_00238170); /* call 0x00238170 */

loc_001DB342: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB35C; /* jne: not equal / not zero */

loc_001DB34B: ;
    eax = ebx;
    edx = eax + 1;

loc_001DB350: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB350; /* jne: not equal / not zero */

loc_001DB357: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax + ebx;

loc_001DB35C: ;
    eax = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB368u); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DB368: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DB38F; /* je: equal / zero */

loc_001DB36F: ;
    ebx = esi;
    PUSH32(esp, 0x001DB376u); RECOMP_ABI_CALL(0x001DB200u, sub_001DB200); /* call 0x001DB200 */

loc_001DB376: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB37Eu); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001DB37E: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB385u); RECOMP_ABI_CALL(0x001DC270u, sub_001DC270); /* call 0x001DC270 */

loc_001DB385: ;
    ebp = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DB320; /* je: equal / zero */

loc_001DB38F: ;
    eax = ebp;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebx);
    if ((_fa == 0)) goto loc_001DB3EA; /* je: equal / zero */

loc_001DB397: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001DB3C6; /* je: equal / zero */

loc_001DB39C: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB3A4u); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001DB3A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB3B0u); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001DB3B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FB720);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB3BFu); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001DB3BF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001DB3C6: ;
    PUSH32(esp, 0x001DB3CBu); RECOMP_ABI_CALL(0x001DB1C0u, sub_001DB1C0); /* call 0x001DB1C0 */

loc_001DB3CB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB3D4u); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001DB3D4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FB6F4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB3E3u); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001DB3E3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001DB3EA: ;
    PUSH32(esp, 0x2FB6E4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB3F5u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DB3F5: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB400u); RECOMP_ABI_CALL(0x001DD190u, sub_001DD190); /* call 0x001DD190 */

loc_001DB400: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB408u); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_001DB408: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB410u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DB410: ;
    PUSH32(esp, 0x2FB6E4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB41Bu); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DB41B: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB423u); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_001DB423: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB42Eu); RECOMP_ABI_CALL(0x001DD380u, sub_001DD380); /* call 0x001DD380 */

loc_001DB42E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB438u); RECOMP_ABI_CALL(0x001DD560u, sub_001DD560); /* call 0x001DD560 */

loc_001DB438: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB443u); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_001DB443: ;
    PUSH32(esp, 0x2FB6E4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB44Eu); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DB44E: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB456u); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_001DB456: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB461u); RECOMP_ABI_CALL(0x001DD380u, sub_001DD380); /* call 0x001DD380 */

loc_001DB461: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB469u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DB469: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB483; /* jne: not equal / not zero */

loc_001DB470: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB478u); RECOMP_ABI_CALL(0x001DD160u, sub_001DD160); /* call 0x001DD160 */

loc_001DB478: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB480u); RECOMP_ABI_CALL(0x001DCAA0u, sub_001DCAA0); /* call 0x001DCAA0 */

loc_001DB480: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DB483: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB48Bu); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DB48B: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB493u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DB493: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB49Bu); RECOMP_ABI_CALL(0x001DD3C0u, sub_001DD3C0); /* call 0x001DD3C0 */

loc_001DB49B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DB49E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB4B0
 * Original: 0x001DB4B0 - 0x001DB529 (121 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB4B0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB4BAu); RECOMP_ABI_CALL(0x001DC870u, sub_001DC870); /* call 0x001DC870 */

loc_001DB4BA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB4CF; /* jne: not equal / not zero */

loc_001DB4C1: ;
    PUSH32(esp, 0x2FB780);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB4CCu); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001DB4CC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DB4CF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB4D7u); RECOMP_ABI_CALL(0x001DC8D0u, sub_001DC8D0); /* call 0x001DC8D0 */

loc_001DB4D7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB4DEu); RECOMP_ABI_CALL(0x001DF450u, sub_001DF450); /* call 0x001DF450 */

loc_001DB4DE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB518; /* jne: not equal / not zero */

loc_001DB4E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB4EBu); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_001DB4EB: ;
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB4F4u); RECOMP_ABI_CALL(0x001DC870u, sub_001DC870); /* call 0x001DC870 */

loc_001DB4F4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB509; /* jne: not equal / not zero */

loc_001DB4FB: ;
    PUSH32(esp, 0x2FB764);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB506u); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001DB506: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DB509: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB511u); RECOMP_ABI_CALL(0x001DC8D0u, sub_001DC8D0); /* call 0x001DC8D0 */

loc_001DB511: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001DB518: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB521u); RECOMP_ABI_CALL(0x001DC8D0u, sub_001DC8D0); /* call 0x001DC8D0 */

loc_001DB521: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB530
 * Original: 0x001DB530 - 0x001DB5A4 (116 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB530: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB53Eu); RECOMP_ABI_CALL(0x001DCED0u, sub_001DCED0); /* call 0x001DCED0 */

loc_001DB53E: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB557; /* jne: not equal / not zero */

loc_001DB547: ;
    PUSH32(esp, 0x2FB7A0);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB554u); RECOMP_ABI_CALL(0x001DC580u, sub_001DC580); /* call 0x001DC580 */

loc_001DB554: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DB557: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB55Du); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_001DB55D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x001DB566u); RECOMP_ABI_CALL(0x001DB4B0u, sub_001DB4B0); /* call 0x001DB4B0 */

loc_001DB566: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DB587; /* jge: greater or equal (signed >=) */

loc_001DB56C: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB574u); RECOMP_ABI_CALL(0x001DD160u, sub_001DD160); /* call 0x001DD160 */

loc_001DB574: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB57Cu); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_001DB57C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DB587: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB58Fu); RECOMP_ABI_CALL(0x001DD160u, sub_001DD160); /* call 0x001DD160 */

loc_001DB58F: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB59Bu); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_001DB59B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi + 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB5B0
 * Original: 0x001DB5B0 - 0x001DB60F (95 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB5B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0xFFFFD8EEu);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB5C1u); RECOMP_ABI_CALL(0x001DCED0u, sub_001DCED0); /* call 0x001DCED0 */

loc_001DB5C1: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x001DB5C9u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_001DB5C9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001DB5D1u); RECOMP_ABI_CALL(0x001DB4B0u, sub_001DB4B0); /* call 0x001DB4B0 */

loc_001DB5D1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DB60A; /* jge: greater or equal (signed >=) */

loc_001DB5D7: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB5DFu); RECOMP_ABI_CALL(0x001DCC10u, sub_001DCC10); /* call 0x001DCC10 */

loc_001DB5DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DB601; /* je: equal / zero */

loc_001DB5E6: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB5EEu); RECOMP_ABI_CALL(0x001DB870u, sub_001DB870); /* call 0x001DB870 */

loc_001DB5EE: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB5F6u); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_001DB5F6: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB5FEu); RECOMP_ABI_CALL(0x001DD720u, sub_001DD720); /* call 0x001DD720 */

loc_001DB5FE: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DB601: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB607u); RECOMP_ABI_CALL(0x001DD6C0u, sub_001DD6C0); /* call 0x001DD6C0 */

loc_001DB607: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DB60A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB610
 * Original: 0x001DB610 - 0x001DB669 (89 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB610: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB61Cu); RECOMP_ABI_CALL(0x001DC930u, sub_001DC930); /* call 0x001DC930 */

loc_001DB61C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001DB626u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DB626: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB63D; /* jne: not equal / not zero */

loc_001DB62E: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB636u); RECOMP_ABI_CALL(0x001DCB80u, sub_001DCB80); /* call 0x001DCB80 */

loc_001DB636: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DB64D; /* je: equal / zero */

loc_001DB63D: ;
    PUSH32(esp, 0x2FB7B4);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB64Au); RECOMP_ABI_CALL(0x001DC580u, sub_001DC580); /* call 0x001DC580 */

loc_001DB64A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DB64D: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB655u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DB655: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB65Eu); RECOMP_ABI_CALL(0x001DC8D0u, sub_001DC8D0); /* call 0x001DC8D0 */

loc_001DB65E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB670
 * Original: 0x001DB670 - 0x001DB692 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB670: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB67Bu); RECOMP_ABI_CALL(0x001DB610u, sub_001DB610); /* call 0x001DB610 */

loc_001DB67B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1DB5B0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB688u); RECOMP_ABI_CALL(0x001DD0D0u, sub_001DD0D0); /* call 0x001DD0D0 */

loc_001DB688: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB6A0
 * Original: 0x001DB6A0 - 0x001DB6B7 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB6A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB6A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB6ABu); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_001DB6AB: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB6B2u); RECOMP_ABI_CALL(0x001DF220u, sub_001DF220); /* call 0x001DF220 */

loc_001DB6B2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB6C0
 * Original: 0x001DB6C0 - 0x001DB760 (160 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB6C0: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x68);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB6D1u); RECOMP_ABI_CALL(0x001DCED0u, sub_001DCED0); /* call 0x001DCED0 */

loc_001DB6D1: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB6EA; /* jne: not equal / not zero */

loc_001DB6DA: ;
    PUSH32(esp, 0x2FB7A0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB6E7u); RECOMP_ABI_CALL(0x001DC580u, sub_001DC580); /* call 0x001DC580 */

loc_001DB6E7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DB6EA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB709; /* jne: not equal / not zero */

loc_001DB6EE: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x2FB7E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB6FBu); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DB6FB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DB709: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB716u); RECOMP_ABI_CALL(0x001DDC70u, sub_001DDC70); /* call 0x001DDC70 */

loc_001DB716: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB745; /* jne: not equal / not zero */

loc_001DB71D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB723u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_001DB723: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DB745; /* jne: not equal / not zero */

loc_001DB72A: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x2FB7D8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB737u); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DB737: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DB745: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x2FB7CC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB752u); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DB752: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DB760
 * Original: 0x001DB760 - 0x001DB815 (181 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB760: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x2FB818);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB76Du); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DB76D: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB778u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DB778: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2FB2B8);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB787u); RECOMP_ABI_CALL(0x001DBB30u, sub_001DBB30); /* call 0x001DBB30 */

loc_001DB787: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x2FB80C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB794u); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DB794: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x2FB800);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB7A1u); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DB7A1: ;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB7A9u); RECOMP_ABI_CALL(0x001DD3C0u, sub_001DD3C0); /* call 0x001DD3C0 */

loc_001DB7A9: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    PUSH32(esp, 0x2FB7F4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB7B9u); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DB7B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB7BFu); RECOMP_ABI_CALL(0x001DD280u, sub_001DD280); /* call 0x001DD280 */

loc_001DB7BF: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB7C7u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DB7C7: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB7CFu); RECOMP_ABI_CALL(0x001DD480u, sub_001DD480); /* call 0x001DD480 */

loc_001DB7CF: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x2FB7EC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB7DCu); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DB7DC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x2FB7E8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB7E9u); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DB7E9: ;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB7F1u); RECOMP_ABI_CALL(0x001DD3C0u, sub_001DD3C0); /* call 0x001DD3C0 */

loc_001DB7F1: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0x1DB0F0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB801u); RECOMP_ABI_CALL(0x001DD0D0u, sub_001DD0D0); /* call 0x001DD0D0 */

loc_001DB801: ;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB809u); RECOMP_ABI_CALL(0x001DD3C0u, sub_001DD3C0); /* call 0x001DD3C0 */

loc_001DB809: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB811u); RECOMP_ABI_CALL(0x001DD3C0u, sub_001DD3C0); /* call 0x001DD3C0 */

loc_001DB811: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DB820
 * Original: 0x001DB820 - 0x001DB867 (71 bytes, 23 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB820: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x001DB82Au); RECOMP_ABI_CALL(0x001DB760u, sub_001DB760); /* call 0x001DB760 */

loc_001DB82A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2FB388);
    PUSH32(esp, 0x2FB81C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB83Cu); RECOMP_ABI_CALL(0x001DBB30u, sub_001DBB30); /* call 0x001DBB30 */

loc_001DB83C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB842u); RECOMP_ABI_CALL(0x001DD280u, sub_001DD280); /* call 0x001DD280 */

loc_001DB842: ;
    PUSH32(esp, 0x2FB75C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB84Du); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DB84D: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB855u); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_001DB855: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB860u); RECOMP_ABI_CALL(0x001DD380u, sub_001DD380); /* call 0x001DD380 */

loc_001DB860: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB870
 * Original: 0x001DB870 - 0x001DB8D8 (104 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB870: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x68);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB888u); RECOMP_ABI_CALL(0x001DDC70u, sub_001DDC70); /* call 0x001DDC70 */

loc_001DB888: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DB8C3; /* je: equal / zero */

loc_001DB88F: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x2FB830);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB89Fu); RECOMP_ABI_CALL(0x001DE6A0u, sub_001DE6A0); /* call 0x001DE6A0 */

loc_001DB89F: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DB8C3; /* jle: less or equal (signed <=) */

loc_001DB8AA: ;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FB828);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB8BBu); RECOMP_ABI_CALL(0x001DD0A0u, sub_001DD0A0); /* call 0x001DD0A0 */

loc_001DB8BB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DB8C3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2E0465);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB8D0u); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DB8D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DB8E0
 * Original: 0x001DB8E0 - 0x001DB910 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB8E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB8E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB8EDu); RECOMP_ABI_CALL(0x001DB870u, sub_001DB870); /* call 0x001DB870 */

loc_001DB8ED: ;
    ecx = MEM32(esp + 0x14);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB8FDu); RECOMP_ABI_CALL(0x001DD070u, sub_001DD070); /* call 0x001DD070 */

loc_001DB8FD: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB905u); RECOMP_ABI_CALL(0x001DD720u, sub_001DD720); /* call 0x001DD720 */

loc_001DB905: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB90Bu); RECOMP_ABI_CALL(0x001DD6C0u, sub_001DD6C0); /* call 0x001DD6C0 */

loc_001DB90B: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB910
 * Original: 0x001DB910 - 0x001DB98D (125 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB910: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB921u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DB921: ;
    PUSH32(esp, 0xFFFFD8F0u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB92Cu); RECOMP_ABI_CALL(0x001DD1E0u, sub_001DD1E0); /* call 0x001DD1E0 */

loc_001DB92C: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB934u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DB934: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DB940; /* je: equal / zero */

loc_001DB93B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DB940: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB948u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DB948: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB94Eu); RECOMP_ABI_CALL(0x001DD280u, sub_001DD280); /* call 0x001DD280 */

loc_001DB94E: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB955u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DB955: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB95Du); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DB95D: ;
    PUSH32(esp, 0xFFFFD8F0u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB968u); RECOMP_ABI_CALL(0x001DD3C0u, sub_001DD3C0); /* call 0x001DD3C0 */

loc_001DB968: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB970u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DB970: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB977u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DB977: ;
    PUSH32(esp, 0xFFFFD8F0u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB982u); RECOMP_ABI_CALL(0x001DD3C0u, sub_001DD3C0); /* call 0x001DD3C0 */

loc_001DB982: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB990
 * Original: 0x001DB990 - 0x001DB9B0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DB990: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB9A0u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DB9A0: ;
    PUSH32(esp, 0xFFFFD8F0u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DB9ABu); RECOMP_ABI_CALL(0x001DD1E0u, sub_001DD1E0); /* call 0x001DD1E0 */

loc_001DB9AB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DB9B0
 * Original: 0x001DB9B0 - 0x001DBA40 (144 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DB9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001DB9B0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB9C1u); RECOMP_ABI_CALL(0x001DD2C0u, sub_001DD2C0); /* call 0x001DD2C0 */

loc_001DB9C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001DBA3B; /* je: equal / zero */

loc_001DB9C8: ;
    PUSH32(esp, 0xFFFFD8F0u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB9D3u); RECOMP_ABI_CALL(0x001DD1E0u, sub_001DD1E0); /* call 0x001DD1E0 */

loc_001DB9D3: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DB9DBu); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001DB9DB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001DBA30; /* je: equal / zero */

loc_001DB9E2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);

loc_001DB9E8: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001DBA10; /* jne: not equal / not zero */

loc_001DB9F2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001DBA0C; /* je: equal / zero */

loc_001DB9F6: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001DBA10; /* jne: not equal / not zero */

loc_001DBA02: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001DB9E8; /* jne: not equal / not zero */

loc_001DBA0C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001DBA15;

loc_001DBA10: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001DBA15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_001DBA30; /* jne: not equal / not zero */

loc_001DBA1B: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DBA23u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DBA23: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DBA2Au); RECOMP_ABI_CALL(0x001DCE90u, sub_001DCE90); /* call 0x001DCE90 */

loc_001DBA2A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001DBA30: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DBA38u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DBA38: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DBA3B: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DBA40
 * Original: 0x001DBA40 - 0x001DBA6C (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBA40: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBA50u); RECOMP_ABI_CALL(0x001DC870u, sub_001DC870); /* call 0x001DC870 */

loc_001DBA50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DBA6A; /* jne: not equal / not zero */

loc_001DBA57: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2FB834);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBA67u); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001DBA67: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DBA6A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DBA70
 * Original: 0x001DBA70 - 0x001DBACA (90 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBA70: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBA80u); RECOMP_ABI_CALL(0x001DD2C0u, sub_001DD2C0); /* call 0x001DD2C0 */

loc_001DBA80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DBAB4; /* je: equal / zero */

loc_001DBA87: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBA92u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DBA92: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBA9Au); RECOMP_ABI_CALL(0x001DD1E0u, sub_001DD1E0); /* call 0x001DD1E0 */

loc_001DBA9A: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBAA2u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DBAA2: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DBAB8; /* jne: not equal / not zero */

loc_001DBAA9: ;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBAB1u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DBAB1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DBAB4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DBAB8: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBAC0u); RECOMP_ABI_CALL(0x001DC9E0u, sub_001DC9E0); /* call 0x001DC9E0 */

loc_001DBAC0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DBAD0
 * Original: 0x001DBAD0 - 0x001DBB25 (85 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBAD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_G(_fas, _fbs)) goto loc_001DBAF3; /* jg: greater (signed >) */

loc_001DBADE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFD8F0u (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DBAF3; /* jle: less or equal (signed <=) */

loc_001DBAE6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DBAECu); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_001DBAEC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi + eax + 1;

loc_001DBAF3: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DBAFFu); RECOMP_ABI_CALL(0x001DBA70u, sub_001DBA70); /* call 0x001DBA70 */

loc_001DBAFF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DBB09; /* jne: not equal / not zero */

loc_001DBB06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DBB09: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DBB10u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DBB10: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DBB1Au); RECOMP_ABI_CALL(0x001DD560u, sub_001DD560); /* call 0x001DD560 */

loc_001DBB1A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DBB30
 * Original: 0x001DBB30 - 0x001DBC1C (236 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBB30: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    if (CMP_EQ(_fa, _fb)) goto loc_001DBB9E; /* je: equal / zero */

loc_001DBB43: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBB4Au); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DBB4A: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBB55u); RECOMP_ABI_CALL(0x001DD190u, sub_001DD190); /* call 0x001DD190 */

loc_001DBB55: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBB5Du); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DBB5D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DBB8F; /* jne: not equal / not zero */

loc_001DBB64: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBB6Cu); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DBB6C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBB72u); RECOMP_ABI_CALL(0x001DD280u, sub_001DD280); /* call 0x001DD280 */

loc_001DBB72: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBB79u); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DBB79: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBB81u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DBB81: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBB8Cu); RECOMP_ABI_CALL(0x001DD380u, sub_001DD380); /* call 0x001DD380 */

loc_001DBB8C: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DBB8F: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBB9Bu); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_001DBB9B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DBB9E: ;
    ebx = MEM32(esp + 0x18);
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DBC09; /* je: equal / zero */

loc_001DBBA8: ;
    PUSH32(esp, ebp);
    ebp = 0xFFFFFFFDu;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = ebp;

loc_001DBBB4: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBBBBu); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DBBBB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DBBE9; /* jle: less or equal (signed <=) */

loc_001DBBC2: ;
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = edi;
    goto loc_001DBBD0;

    /* nop */

loc_001DBBD0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBBD7u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DBBD7: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_001DBBD0; /* jne: not equal / not zero */

loc_001DBBE5: ;
    ebp = MEM32(esp + 0x20);

loc_001DBBE9: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBBF4u); RECOMP_ABI_CALL(0x001DD0D0u, sub_001DD0D0); /* call 0x001DD0D0 */

loc_001DBBF4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBBFBu); RECOMP_ABI_CALL(0x001DD380u, sub_001DD380); /* call 0x001DD380 */

loc_001DBBFB: ;
    eax = MEM32(ebx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DBBB4; /* jne: not equal / not zero */

loc_001DBC08: ;
    POP32(esp, ebp);

loc_001DBC09: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBC15u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DBC15: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DBC20
 * Original: 0x001DBC20 - 0x001DBC98 (120 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBC20: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFD8F0u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBC2Du); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001DBC2D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBC35u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DBC35: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DBC97; /* jne: not equal / not zero */

loc_001DBC3C: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBC44u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DBC44: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBC4Au); RECOMP_ABI_CALL(0x001DD280u, sub_001DD280); /* call 0x001DD280 */

loc_001DBC4A: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBC52u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DBC52: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBC5Au); RECOMP_ABI_CALL(0x001DD480u, sub_001DD480); /* call 0x001DD480 */

loc_001DBC5A: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x2FB7EC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBC67u); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DBC67: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x2FB7E8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBC74u); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DBC74: ;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBC7Cu); RECOMP_ABI_CALL(0x001DD3C0u, sub_001DD3C0); /* call 0x001DD3C0 */

loc_001DBC7C: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBC84u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DBC84: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFD8F0u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBC94u); RECOMP_ABI_CALL(0x001DD420u, sub_001DD420); /* call 0x001DD420 */

loc_001DBC94: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DBC97: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DBCA0
 * Original: 0x001DBCA0 - 0x001DBD69 (201 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBCA0(void)
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

loc_001DBCA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_G(_fas, _fbs)) goto loc_001DBCC3; /* jg: greater (signed >) */

loc_001DBCAE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFD8F0u (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DBCC3; /* jle: less or equal (signed <=) */

loc_001DBCB6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBCBCu); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_001DBCBC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + eax + 1;

loc_001DBCC3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2FB848);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBCD1u); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DBCD1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBCD8u); RECOMP_ABI_CALL(0x001DD1E0u, sub_001DD1E0); /* call 0x001DD1E0 */

loc_001DBCD8: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBCE0u); RECOMP_ABI_CALL(0x001DCD30u, sub_001DCD30); /* call 0x001DCD30 */

loc_001DBCE0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001DBCE8u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001DBCE8: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DBD00; /* jne: not equal / not zero */

loc_001DBCEE: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBCF6u); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_001DBCF6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DBD00; /* jne: not equal / not zero */

loc_001DBCFD: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001DBD00: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBD08u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DBD08: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_001DBD3A; /* jl: less (signed <) */

loc_001DBD10: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x2FB848);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBD1Du); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DBD1D: ;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBD2Du); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_001DBD2D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBD34u); RECOMP_ABI_CALL(0x001DD3C0u, sub_001DD3C0); /* call 0x001DD3C0 */

loc_001DBD34: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001DBD3A: ;
    PUSH32(esp, 0x001DBD3Fu); RECOMP_ABI_CALL(0x001DBC20u, sub_001DBC20); /* call 0x001DBC20 */

loc_001DBD3F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBD46u); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DBD46: ;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBD53u); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_001DBD53: ;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBD5Bu); RECOMP_ABI_CALL(0x001DD3C0u, sub_001DD3C0); /* call 0x001DD3C0 */

loc_001DBD5B: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBD63u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DBD63: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001DBD70
 * Original: 0x001DBD70 - 0x001DBE82 (274 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBD70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_001DBD94; /* jg: greater (signed >) */

loc_001DBD7F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFD8F0u (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DBD94; /* jle: less or equal (signed <=) */

loc_001DBD87: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBD8Du); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_001DBD8D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + eax + 1;

loc_001DBD94: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x2FB848);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBDA1u); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DBDA1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBDA8u); RECOMP_ABI_CALL(0x001DD1E0u, sub_001DD1E0); /* call 0x001DD1E0 */

loc_001DBDA8: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBDB0u); RECOMP_ABI_CALL(0x001DCD30u, sub_001DCD30); /* call 0x001DCD30 */

loc_001DBDB0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001DBDB8u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001DBDB8: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DBDD0; /* jne: not equal / not zero */

loc_001DBDBE: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBDC6u); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_001DBDC6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DBDD0; /* jne: not equal / not zero */

loc_001DBDCD: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001DBDD0: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBDD8u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DBDD8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DBE2A; /* jge: greater or equal (signed >=) */

loc_001DBDDF: ;
    PUSH32(esp, 0x001DBDE4u); RECOMP_ABI_CALL(0x001DBC20u, sub_001DBC20); /* call 0x001DBC20 */

loc_001DBDE4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBDEBu); RECOMP_ABI_CALL(0x001DCAF0u, sub_001DCAF0); /* call 0x001DCAF0 */

loc_001DBDEB: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBDF3u); RECOMP_ABI_CALL(0x001DD1E0u, sub_001DD1E0); /* call 0x001DD1E0 */

loc_001DBDF3: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBDFBu); RECOMP_ABI_CALL(0x001DCD30u, sub_001DCD30); /* call 0x001DCD30 */

loc_001DBDFB: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001DBE03u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001DBE03: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DBE1B; /* jne: not equal / not zero */

loc_001DBE09: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBE11u); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_001DBE11: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DBE1B; /* jne: not equal / not zero */

loc_001DBE18: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001DBE1B: ;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBE23u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DBE23: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DBE30; /* jl: less (signed <) */

loc_001DBE2A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001DBE30: ;
    edi = 1;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBE3Du); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001DBE3D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBE45u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DBE45: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DBE70; /* je: equal / zero */

loc_001DBE4C: ;
    /* nop */

loc_001DBE50: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBE58u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DBE58: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBE61u); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001DBE61: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBE69u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DBE69: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DBE50; /* jne: not equal / not zero */

loc_001DBE70: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DBE78u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DBE78: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + -1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DBE90
 * Original: 0x001DBE90 - 0x001DBF0B (123 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DBE90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBE90: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 4);
    PUSH32(esp, esi);
    esi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DBF08; /* jle: less or equal (signed <=) */

loc_001DBEA2: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DBEAFu); RECOMP_ABI_CALL(0x001DCE30u, sub_001DCE30); /* call 0x001DCE30 */

loc_001DBEAF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;
    edi = 0xFFFFFFFEu;
    goto loc_001DBEC0;

    /* nop */

loc_001DBEC0: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DBEC7u); RECOMP_ABI_CALL(0x001DCE30u, sub_001DCE30); /* call 0x001DCE30 */

loc_001DBEC7: ;
    ecx = MEM32(ebp + 4);
    edx = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DBEDD; /* jge: greater or equal (signed >=) */

loc_001DBED7: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DBEED; /* jbe: below or equal (unsigned <=) */

loc_001DBEDD: ;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001DBEC0; /* jl: less (signed <) */

loc_001DBEED: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DBEF4u); RECOMP_ABI_CALL(0x001DD720u, sub_001DD720); /* call 0x001DD720 */

loc_001DBEF4: ;
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ebp + 4) = ecx;
    POP32(esp, ebx);

loc_001DBF08: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DBF10
 * Original: 0x001DBF10 - 0x001DBF45 (53 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBF10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001DBF40; /* je: equal / zero */

loc_001DBF1E: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    edi = esi + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DBF2Du); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DBF2D: ;
    edx = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(esi) = edi;
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x001DBF3Cu); RECOMP_ABI_CALL(0x001DBE90u, sub_001DBE90); /* call 0x001DBE90 */

loc_001DBF3C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_001DBF40: ;
    eax = esi + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DBF50
 * Original: 0x001DBF50 - 0x001DBFAD (93 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DBF50: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DBFAC; /* je: equal / zero */

loc_001DBF58: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ebp = eax;

loc_001DBF66: ;
    eax = MEM32(esi);
    ecx = esi + 0x20C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DBF99; /* jb: below (unsigned <) */

loc_001DBF72: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001DBF99; /* je: equal / zero */

loc_001DBF79: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    edi = esi + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DBF87u); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DBF87: ;
    edx = MEM32(esi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(esi) = edi;
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x001DBF96u); RECOMP_ABI_CALL(0x001DBE90u, sub_001DBE90); /* call 0x001DBE90 */

loc_001DBF96: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DBF99: ;
    SET_LO8(edx, MEM8(ebx));
    ecx = MEM32(esi);
    MEM8(ecx) = LO8(edx);
    edx = MEM32(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = edx;
    if ((_fa != 0)) goto loc_001DBF66; /* jne: not equal / not zero */

loc_001DBFA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001DBFAC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DBFB0
 * Original: 0x001DBFB0 - 0x001DBFF3 (67 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DBFB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001DBFDA; /* je: equal / zero */

loc_001DBFBE: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    edi = esi + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DBFCDu); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DBFCD: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = edi;
    MEM32(esi + 4) = eax;
    POP32(esp, edi);

loc_001DBFDA: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001DBFE7u); RECOMP_ABI_CALL(0x001DD720u, sub_001DD720); /* call 0x001DD720 */

loc_001DBFE7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DC000
 * Original: 0x001DC000 - 0x001DC09F (159 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC000: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001DC012u); RECOMP_ABI_CALL(0x001DCE30u, sub_001DCE30); /* call 0x001DCE30 */

loc_001DC012: ;
    ecx = eax;
    eax = MEM32(ebx);
    edx = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_001DC062; /* ja: above (unsigned >) */

loc_001DC02B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001DC034u); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001DC034: ;
    edi = MEM32(ebx);
    esi = eax;
    eax = MEM32(esp + 0x1C);
    ecx = eax;
    edx = ecx;
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
    ecx = edx;
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
    esi = MEM32(ebx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, ebp);
    MEM32(ebx) = esi;
    PUSH32(esp, 0x001DC05Au); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DC05A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001DC062: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001DC08B; /* je: equal / zero */

loc_001DC069: ;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 8);
    esi = ebx + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DC077u); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DC077: ;
    MEM32(ebx) = esi;
    esi = MEM32(ebx + 4);
    PUSH32(esp, 0xFFFFFFFEu);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    MEM32(ebx + 4) = esi;
    PUSH32(esp, 0x001DC088u); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_001DC088: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DC08B: ;
    edx = MEM32(ebx + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    MEM32(ebx + 4) = edx;
    PUSH32(esp, 0x001DC098u); RECOMP_ABI_CALL(0x001DBE90u, sub_001DBE90); /* call 0x001DBE90 */

loc_001DC098: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DC0A0
 * Original: 0x001DC0A0 - 0x001DC0B8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC0A0(void)
{

loc_001DC0A0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = eax + 0xC;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = edx;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001DC0C0
 * Original: 0x001DC0C0 - 0x001DC183 (195 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC0C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_G(_fas, _fbs)) goto loc_001DC0E3; /* jg: greater (signed >) */

loc_001DC0CE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFD8F0u (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DC0E3; /* jle: less or equal (signed <=) */

loc_001DC0D6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC0DCu); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_001DC0DC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + eax + 1;

loc_001DC0E3: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC0EBu); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DC0EB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC103; /* jne: not equal / not zero */

loc_001DC0F2: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC0FAu); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DC0FA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001DC103: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC10Du); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001DC10D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC115u); RECOMP_ABI_CALL(0x001DCD30u, sub_001DCD30); /* call 0x001DCD30 */

loc_001DC115: ;
    PUSH32(esp, 0x001DC11Au); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_001DC11A: ;
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001DC124u); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DC124: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC150; /* je: equal / zero */

loc_001DC12B: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC133u); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001DC133: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC13Cu); RECOMP_ABI_CALL(0x001DD420u, sub_001DD420); /* call 0x001DD420 */

loc_001DC13C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC147u); RECOMP_ABI_CALL(0x001DD420u, sub_001DD420); /* call 0x001DD420 */

loc_001DC147: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001DC150: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC157u); RECOMP_ABI_CALL(0x001DBD70u, sub_001DBD70); /* call 0x001DBD70 */

loc_001DC157: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DC166; /* jge: greater or equal (signed >=) */

loc_001DC161: ;
    edi = 2;

loc_001DC166: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC16Fu); RECOMP_ABI_CALL(0x001DBCA0u, sub_001DBCA0); /* call 0x001DBCA0 */

loc_001DC16F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC17Au); RECOMP_ABI_CALL(0x001DD420u, sub_001DD420); /* call 0x001DD420 */

loc_001DC17A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DC190
 * Original: 0x001DC190 - 0x001DC1ED (93 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC190(void)
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

loc_001DC190: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DC1EB; /* jl: less (signed <) */

loc_001DC199: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_G(_fas, _fbs)) goto loc_001DC1BC; /* jg: greater (signed >) */

loc_001DC1A7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFD8F0u (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DC1BC; /* jle: less or equal (signed <=) */

loc_001DC1AF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC1B5u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_001DC1B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi + eax + 1;

loc_001DC1BC: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC1C5u); RECOMP_ABI_CALL(0x001DD230u, sub_001DD230); /* call 0x001DD230 */

loc_001DC1C5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC1CDu); RECOMP_ABI_CALL(0x001DD420u, sub_001DD420); /* call 0x001DD420 */

loc_001DC1CD: ;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC1DDu); RECOMP_ABI_CALL(0x001DCF90u, sub_001DCF90); /* call 0x001DCF90 */

loc_001DC1DD: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC1E6u); RECOMP_ABI_CALL(0x001DD420u, sub_001DD420); /* call 0x001DD420 */

loc_001DC1E6: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);

loc_001DC1EB: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001DC1F0
 * Original: 0x001DC1F0 - 0x001DC224 (52 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001DC1F0: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xC), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001DC1FF; /* je: equal / zero */

loc_001DC1FC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001DC1FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x200);
    esi = ecx + 4;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC211u); RECOMP_ABI_CALL(0x00238582u, sub_00238582); /* call 0x00238582 */

loc_001DC211: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ecx) = eax;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DC230
 * Original: 0x001DC230 - 0x001DC264 (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC230: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC238u); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001DC238: ;
    esi = eax;
    eax = MEM32(0x869374);
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x001DC246u); RECOMP_ABI_CALL(0x00239130u, sub_00239130); /* call 0x00239130 */

loc_001DC246: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2FB84C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC253u); RECOMP_ABI_CALL(0x001DD0A0u, sub_001DD0A0); /* call 0x001DD0A0 */

loc_001DC253: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC25Au); RECOMP_ABI_CALL(0x001DC9E0u, sub_001DC9E0); /* call 0x001DC9E0 */

loc_001DC25A: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DC270
 * Original: 0x001DC270 - 0x001DC460 (496 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC270: ;
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x218);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC287u); RECOMP_ABI_CALL(0x001DC970u, sub_001DC970); /* call 0x001DC970 */

loc_001DC287: ;
    ebp = MEM32(esp + 0x220);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC2C9; /* jne: not equal / not zero */

loc_001DC298: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x2FB868);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC2A5u); RECOMP_ABI_CALL(0x001DCFB0u, sub_001DCFB0); /* call 0x001DCFB0 */

loc_001DC2A5: ;
    eax = 0x313688;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;

loc_001DC2B1: ;
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DC327; /* jl: less (signed <) */

loc_001DC2BF: ;
    edx = MEM32(ecx);
    eax = ZX8(MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = edx;
    goto loc_001DC330;

loc_001DC2C9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x2FB864);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC2D5u); RECOMP_ABI_CALL(0x001DD0A0u, sub_001DD0A0); /* call 0x001DD0A0 */

loc_001DC2D5: ;
    PUSH32(esp, 0x2FB860);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001DC2E0u); RECOMP_ABI_CALL(0x0023856Fu, sub_0023856F); /* call 0x0023856F */

loc_001DC2E0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001DC2B1; /* jne: not equal / not zero */

loc_001DC2EB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC2F2u); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001DC2F2: ;
    esi = eax;
    eax = MEM32(0x869374);
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x001DC300u); RECOMP_ABI_CALL(0x00239130u, sub_00239130); /* call 0x00239130 */

loc_001DC300: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2FB84C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC30Du); RECOMP_ABI_CALL(0x001DD0A0u, sub_001DD0A0); /* call 0x001DD0A0 */

loc_001DC30D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC314u); RECOMP_ABI_CALL(0x001DC9E0u, sub_001DC9E0); /* call 0x001DC9E0 */

loc_001DC314: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 2;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DC327: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DC32Du); RECOMP_ABI_CALL(0x0023927Eu, sub_0023927E); /* call 0x0023927E */

loc_001DC32D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DC330: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DC33Bu); RECOMP_ABI_CALL(0x00239212u, sub_00239212); /* call 0x00239212 */

loc_001DC33B: ;
    esi = eax;
    eax = MEM32(0x313910);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DC357; /* jle: less or equal (signed <=) */

loc_001DC34A: ;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC352u); RECOMP_ABI_CALL(0x0023910Fu, sub_0023910F); /* call 0x0023910F */

loc_001DC352: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001DC365;

loc_001DC357: ;
    edx = MEM32(0x313908);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edx + esi * 2));
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001DC365: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC3CB; /* jne: not equal / not zero */

loc_001DC369: ;
    _fa = (uint32_t)(MEM32(0x313910)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x313910), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DC382; /* jle: less or equal (signed <=) */

loc_001DC372: ;
    PUSH32(esp, 0x157);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC37Du); RECOMP_ABI_CALL(0x0023910Fu, sub_0023910F); /* call 0x0023910F */

loc_001DC37D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001DC390;

loc_001DC382: ;
    eax = MEM32(0x313908);
    eax = ZX16(MEM16(eax + esi * 2));
    eax = eax & 0x157;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001DC390: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC3CB; /* jne: not equal / not zero */

loc_001DC394: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x313688) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x313688 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC3CB; /* je: equal / zero */

loc_001DC39F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DC3A5u); RECOMP_ABI_CALL(0x00238861u, sub_00238861); /* call 0x00238861 */

loc_001DC3A5: ;
    PUSH32(esp, 0x2F644C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001DC3B0u); RECOMP_ABI_CALL(0x0023856Fu, sub_0023856F); /* call 0x0023856F */

loc_001DC3B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001DC3CB; /* jne: not equal / not zero */

loc_001DC3BB: ;
    PUSH32(esp, 0x001DC3C0u); RECOMP_ABI_CALL(0x001DC230u, sub_001DC230); /* call 0x001DC230 */

loc_001DC3C0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DC3CB: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC3D3u); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001DC3D3: ;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1DC1F0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC3E4u); RECOMP_ABI_CALL(0x001DD610u, sub_001DD610); /* call 0x001DD610 */

loc_001DC3E4: ;
    ebp = eax;
    eax = MEM32(esp + 0x28);
    esi = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x313688) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x313688 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC403; /* je: equal / zero */

loc_001DC3FA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DC400u); RECOMP_ABI_CALL(0x00238861u, sub_00238861); /* call 0x00238861 */

loc_001DC400: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DC403: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001DC44B; /* je: equal / zero */

loc_001DC409: ;
    PUSH32(esp, 0x001DC40Eu); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DC40E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC415u); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001DC415: ;
    edx = MEM32(0x869374);
    esi = eax;
    PUSH32(esp, edx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x001DC424u); RECOMP_ABI_CALL(0x00239130u, sub_00239130); /* call 0x00239130 */

loc_001DC424: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2FB84C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC431u); RECOMP_ABI_CALL(0x001DD0A0u, sub_001DD0A0); /* call 0x001DD0A0 */

loc_001DC431: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC438u); RECOMP_ABI_CALL(0x001DC9E0u, sub_001DC9E0); /* call 0x001DC9E0 */

loc_001DC438: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 2;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DC44B: ;
    PUSH32(esp, 0x001DC450u); RECOMP_ABI_CALL(0x001DC9E0u, sub_001DC9E0); /* call 0x001DC9E0 */

loc_001DC450: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DC460
 * Original: 0x001DC460 - 0x001DC47E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC460: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC46E; /* jne: not equal / not zero */

loc_001DC46B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001DC46E: ;
    edx = MEM32(esp + 0xC);
    MEM32(edx) = ecx;
    MEM32(eax + 4) = 0;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001DC480
 * Original: 0x001DC480 - 0x001DC4B0 (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC480: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x1DC460);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DC4ACu); RECOMP_ABI_CALL(0x001DD610u, sub_001DD610); /* call 0x001DD610 */

loc_001DC4AC: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DC4B0
 * Original: 0x001DC4B0 - 0x001DC511 (97 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC4B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC510; /* je: equal / zero */

loc_001DC4B4: ;
    PUSH32(esp, 0x2FB874);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC4BFu); RECOMP_ABI_CALL(0x001DD000u, sub_001DD000); /* call 0x001DD000 */

loc_001DC4BF: ;
    PUSH32(esp, 0xFFFFD8EFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC4CAu); RECOMP_ABI_CALL(0x001DD190u, sub_001DD190); /* call 0x001DD190 */

loc_001DC4CA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC4D2u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DC4D2: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001DC4F0; /* jne: not equal / not zero */

loc_001DC4DD: ;
    PUSH32(esp, 0x001DC4E2u); RECOMP_ABI_CALL(0x001DCA40u, sub_001DCA40); /* call 0x001DCA40 */

loc_001DC4E2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC4ECu); RECOMP_ABI_CALL(0x001DD560u, sub_001DD560); /* call 0x001DD560 */

loc_001DC4EC: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DC4F0: ;
    PUSH32(esp, 0x001DC4F5u); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001DC4F5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FB870);
    PUSH32(esp, 0x3136C8);
    PUSH32(esp, 0x001DC505u); RECOMP_ABI_CALL(0x0023935Cu, sub_0023935C); /* call 0x0023935C */

loc_001DC505: ;
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC50Du); RECOMP_ABI_CALL(0x001DC980u, sub_001DC980); /* call 0x001DC980 */

loc_001DC50D: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DC510: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DC520
 * Original: 0x001DC520 - 0x001DC575 (85 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC520: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1DC460);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0x001DC54Eu); RECOMP_ABI_CALL(0x001DD610u, sub_001DD610); /* call 0x001DD610 */

loc_001DC54E: ;
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC566; /* jne: not equal / not zero */

loc_001DC557: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC561u); RECOMP_ABI_CALL(0x001DD5A0u, sub_001DD5A0); /* call 0x001DD5A0 */

loc_001DC561: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_001DC566: ;
    eax = edi;
    PUSH32(esp, 0x001DC56Du); RECOMP_ABI_CALL(0x001DC4B0u, sub_001DC4B0); /* call 0x001DC4B0 */

loc_001DC56D: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DC580
 * Original: 0x001DC580 - 0x001DC614 (148 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC580: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x68);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DC597u); RECOMP_ABI_CALL(0x001DDC70u, sub_001DDC70); /* call 0x001DDC70 */

loc_001DC597: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2FB848);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DC5A7u); RECOMP_ABI_CALL(0x001DE6A0u, sub_001DE6A0); /* call 0x001DE6A0 */

loc_001DC5A7: ;
    esi = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x2FB8C0;
    ecx = 7;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_001DC5E3; /* jne: not equal / not zero */

loc_001DC5BE: ;
    MEM32(esp + 0x74) = MEM32(esp + 0x74) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001DC5E3; /* jne: not equal / not zero */

loc_001DC5C4: ;
    eax = MEM32(esp + 0x78);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2FB8A0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DC5D9u); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001DC5D9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DC5E3: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC5F4; /* jne: not equal / not zero */

loc_001DC5EB: ;
    eax = 0x2FB89C;
    MEM32(esp + 0x10) = eax;

loc_001DC5F4: ;
    edx = MEM32(esp + 0x78);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x7C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FB87C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DC60Au); RECOMP_ABI_CALL(0x001DB8E0u, sub_001DB8E0); /* call 0x001DB8E0 */

loc_001DC60A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DC620
 * Original: 0x001DC620 - 0x001DC670 (80 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC620: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC631u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DC631: ;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC66D; /* je: equal / zero */

loc_001DC63C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC644u); RECOMP_ABI_CALL(0x001DCB60u, sub_001DCB60); /* call 0x001DCB60 */

loc_001DC644: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x001DC64Du); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DC64D: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC654u); RECOMP_ABI_CALL(0x001DCB60u, sub_001DCB60); /* call 0x001DCB60 */

loc_001DC654: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2FB8C8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC661u); RECOMP_ABI_CALL(0x001DD0A0u, sub_001DD0A0); /* call 0x001DD0A0 */

loc_001DC661: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC669u); RECOMP_ABI_CALL(0x001DC580u, sub_001DC580); /* call 0x001DC580 */

loc_001DC669: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);

loc_001DC66D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DC670
 * Original: 0x001DC670 - 0x001DC69B (43 bytes, 18 insns)
 * Category: crt
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC670: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC681u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DC681: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC698; /* jne: not equal / not zero */

loc_001DC689: ;
    PUSH32(esp, 0x2FB8DC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC695u); RECOMP_ABI_CALL(0x001DC580u, sub_001DC580); /* call 0x001DC580 */

loc_001DC695: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DC698: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DC6A0
 * Original: 0x001DC6A0 - 0x001DC708 (104 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC6A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC6B3u); RECOMP_ABI_CALL(0x001DCDC0u, sub_001DCDC0); /* call 0x001DCDC0 */

loc_001DC6B3: ;
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC6EC; /* jne: not equal / not zero */

loc_001DC6BC: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC6C4u); RECOMP_ABI_CALL(0x001DCB60u, sub_001DCB60); /* call 0x001DCB60 */

loc_001DC6C4: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, 0x001DC6CDu); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DC6CD: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC6D4u); RECOMP_ABI_CALL(0x001DCB60u, sub_001DCB60); /* call 0x001DCB60 */

loc_001DC6D4: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x2FB8C8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC6E1u); RECOMP_ABI_CALL(0x001DD0A0u, sub_001DD0A0); /* call 0x001DD0A0 */

loc_001DC6E1: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC6E9u); RECOMP_ABI_CALL(0x001DC580u, sub_001DC580); /* call 0x001DC580 */

loc_001DC6E9: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DC6EC: ;
    ebp = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC701; /* je: equal / zero */

loc_001DC6F4: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC6FBu); RECOMP_ABI_CALL(0x001DCE30u, sub_001DCE30); /* call 0x001DCE30 */

loc_001DC6FB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;

loc_001DC701: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DC710
 * Original: 0x001DC710 - 0x001DC767 (87 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC710: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC721u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DC721: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001DC755; /* jg: greater (signed >) */

loc_001DC728: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_001DC764; /* je: equal / zero */

loc_001DC734: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC74E; /* je: equal / zero */

loc_001DC738: ;
    ecx = eax;
    esi = ecx + 1;
    /* nop */

loc_001DC740: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DC740; /* jne: not equal / not zero */

loc_001DC747: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DC74E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DC755: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC761u); RECOMP_ABI_CALL(0x001DC6A0u, sub_001DC6A0); /* call 0x001DC6A0 */

loc_001DC761: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DC764: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DC770
 * Original: 0x001DC770 - 0x001DC7E9 (121 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC770(void)
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

loc_001DC770: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC784u); RECOMP_ABI_CALL(0x001DCD30u, sub_001DCD30); /* call 0x001DCD30 */

loc_001DC784: ;
    MEMD(esp + 0x10) = fp_top(); /* fst */
    fp_push(MEMD(0x2DF118)); /* fld double */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001DC7E3; /* jp: parity */

loc_001DC79D: ;
    PUSH32(esp, edi);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC7A6u); RECOMP_ABI_CALL(0x001DCBC0u, sub_001DCBC0); /* call 0x001DCBC0 */

loc_001DC7A6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001DC7DF; /* jne: not equal / not zero */

loc_001DC7AD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC7B6u); RECOMP_ABI_CALL(0x001DCB60u, sub_001DCB60); /* call 0x001DCB60 */

loc_001DC7B6: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x001DC7BFu); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DC7BF: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC7C6u); RECOMP_ABI_CALL(0x001DCB60u, sub_001DCB60); /* call 0x001DCB60 */

loc_001DC7C6: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2FB8C8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC7D3u); RECOMP_ABI_CALL(0x001DD0A0u, sub_001DD0A0); /* call 0x001DD0A0 */

loc_001DC7D3: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC7DBu); RECOMP_ABI_CALL(0x001DC580u, sub_001DC580); /* call 0x001DC580 */

loc_001DC7DB: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);

loc_001DC7DF: ;
    fp_push(MEMD(esp + 8)); /* fld double */

loc_001DC7E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
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
 * sub_001DC7F0
 * Original: 0x001DC7F0 - 0x001DC81C (44 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC7F0(void)
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

loc_001DC7F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC801u); RECOMP_ABI_CALL(0x001DCB30u, sub_001DCB30); /* call 0x001DCB30 */

loc_001DC801: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001DC80F; /* jg: greater (signed >) */

loc_001DC808: ;
    fp_push(MEMD(esp + 0x14)); /* fld double */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DC80F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DC816u); RECOMP_ABI_CALL(0x001DC770u, sub_001DC770); /* call 0x001DC770 */

loc_001DC816: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001DC820
 * Original: 0x001DC820 - 0x001DC86C (76 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC820: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFD8F0u (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DC830; /* jle: less or equal (signed <=) */

loc_001DC827: ;
    edx = MEM32(ecx + 8);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DC830: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8EFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFD8EFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC868; /* je: equal / zero */

loc_001DC837: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFD8F0u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DC861; /* je: equal / zero */

loc_001DC83E: ;
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(edx + 8);
    ecx = 0xFFFFD8EFu;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX8(MEM8(edx + 7));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001DC85E; /* jg: greater (signed >) */

loc_001DC856: ;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    esp += 4; return; /* ret */

loc_001DC85E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001DC861: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DC868: ;
    eax = ecx + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_001DC870
 * Original: 0x001DC870 - 0x001DC8C8 (88 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC870: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    edx = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x800 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DC896; /* jle: less or equal (signed <=) */

loc_001DC891: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DC896: ;
    edx = MEM32(esi + 0x18);
    edi = ecx;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001DC8AE; /* jg: greater (signed >) */

loc_001DC8A4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC8ABu); RECOMP_ABI_CALL(0x001DEB10u, sub_001DEB10); /* call 0x001DEB10 */

loc_001DC8AB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DC8AE: ;
    eax = MEM32(esi + 8);
    esi = MEM32(esi + 0x14);
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DC8C0; /* jae: above or equal (unsigned >=) */

loc_001DC8BD: ;
    MEM32(esi + 4) = eax;

loc_001DC8C0: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DC8D0
 * Original: 0x001DC8D0 - 0x001DC922 (82 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DC8D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    ecx = MEM32(ebx + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = edi;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebx + 8) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001DC91F; /* jle: less or equal (signed <=) */

loc_001DC8ED: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001DC8F5: ;
    eax = MEM32(ebx + 8);
    ebp = MEM32(eax + esi);
    ecx = MEM32(edx + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx + 8) = ebp;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    ebp = MEM32(edx + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edx + 8) = ebp;
    if ((_fa != 0)) goto loc_001DC8F5; /* jne: not equal / not zero */

loc_001DC91D: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_001DC91F: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DC930
 * Original: 0x001DC930 - 0x001DC969 (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC930: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DC949; /* jb: below (unsigned <) */

loc_001DC940: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC946u); RECOMP_ABI_CALL(0x001DFFD0u, sub_001DFFD0); /* call 0x001DFFD0 */

loc_001DC946: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DC949: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DC94Fu); RECOMP_ABI_CALL(0x001DDA30u, sub_001DDA30); /* call 0x001DDA30 */

loc_001DC94F: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx) = 8;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DC970
 * Original: 0x001DC970 - 0x001DC97E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC970: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DC980
 * Original: 0x001DC980 - 0x001DC9D4 (84 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC980: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_L(_fas, _fbs)) goto loc_001DC9C5; /* jl: less (signed <) */

loc_001DC98C: ;
    edx = MEM32(eax + 0xC);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DC9BB; /* jae: above or equal (unsigned >=) */

loc_001DC99C: ;
    edx = 0x10;
    PUSH32(esp, edi);

loc_001DC9A2: ;
    esi = MEM32(eax + 8);
    MEM32(esi) = 0;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 8) = MEM32(eax + 8) + edx;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + 0xC);
    edi = MEM32(eax + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DC9A2; /* jb: below (unsigned <) */

loc_001DC9BA: ;
    POP32(esp, edi);

loc_001DC9BB: ;
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(eax + 8) = edx;
    esp += 4; return; /* ret */

loc_001DC9C5: ;
    edx = MEM32(eax + 8);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001DC9E0
 * Original: 0x001DC9E0 - 0x001DCA31 (81 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DC9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DC9E0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_001DC9F9; /* jle: less or equal (signed <=) */

loc_001DC9ED: ;
    ecx = MEM32(esi + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + -16;
    goto loc_001DCA00;

loc_001DC9F9: ;
    ecx = esi;
    PUSH32(esp, 0x001DCA00u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DCA00: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DCA2B; /* jae: above or equal (unsigned >=) */

loc_001DCA0A: ;
    /* nop */

loc_001DCA10: ;
    edx = MEM32(eax);
    MEM32(eax + -16) = edx;
    ecx = MEM32(eax + 8);
    MEM32(eax + -8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(eax + -4) = edx;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DCA10; /* jb: below (unsigned <) */

loc_001DCA2B: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 8) = MEM32(esi + 8) + 0xFFFFFFF0u;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DCA40
 * Original: 0x001DCA40 - 0x001DCA94 (84 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DCA40: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_001DCA59; /* jle: less or equal (signed <=) */

loc_001DCA4D: ;
    ecx = MEM32(esi + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + -16;
    goto loc_001DCA60;

loc_001DCA59: ;
    ecx = esi;
    PUSH32(esp, 0x001DCA60u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DCA60: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DCA7F; /* jbe: below or equal (unsigned <=) */

loc_001DCA67: ;
    edx = MEM32(ecx + -16);
    MEM32(ecx) = edx;
    edx = MEM32(ecx + -8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(ecx + -4);
    MEM32(ecx + 0xC) = edx;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DCA67; /* ja: above (unsigned >) */

loc_001DCA7F: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DCAA0
 * Original: 0x001DCAA0 - 0x001DCAE3 (67 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DCAA0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DCAC0; /* jle: less or equal (signed <=) */

loc_001DCAB4: ;
    ecx = MEM32(esi + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + -16;
    goto loc_001DCAC7;

loc_001DCAC0: ;
    ecx = esi;
    PUSH32(esp, 0x001DCAC7u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DCAC7: ;
    edx = MEM32(edi);
    MEM32(eax) = edx;
    ecx = MEM32(edi + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edi + 0xC);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DCAF0
 * Original: 0x001DCAF0 - 0x001DCB29 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DCAF0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_001DCB09; /* jle: less or equal (signed <=) */

loc_001DCAFD: ;
    ecx = MEM32(esi + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + -16;
    goto loc_001DCB10;

loc_001DCB09: ;
    ecx = esi;
    PUSH32(esp, 0x001DCB10u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DCB10: ;
    edx = MEM32(eax);
    ecx = MEM32(esi + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 8) = MEM32(esi + 8) + 0x10;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DCB30
 * Original: 0x001DCB30 - 0x001DCB5D (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DCB30: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 4);
    if (CMP_LE(_fas, _fbs)) goto loc_001DCB4D; /* jle: less or equal (signed <=) */

loc_001DCB3C: ;
    edx = MEM32(ecx + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx + eax + -16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DCB56; /* jae: above or equal (unsigned >=) */

loc_001DCB4B: ;
    goto loc_001DCB52;

loc_001DCB4D: ;
    PUSH32(esp, 0x001DCB52u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DCB52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCB5A; /* jne: not equal / not zero */

loc_001DCB56: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_001DCB5A: ;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001DCB60
 * Original: 0x001DCB60 - 0x001DCB77 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DCB60: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCB6F; /* jne: not equal / not zero */

loc_001DCB69: ;
    eax = 0x2FB980;
    esp += 4; return; /* ret */

loc_001DCB6F: ;
    eax = MEM32(eax * 4 + 0x2FBBA0);
    esp += 4; return; /* ret */

}

/**
 * sub_001DCB80
 * Original: 0x001DCB80 - 0x001DCBBC (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DCB80: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 4);
    if (CMP_LE(_fas, _fbs)) goto loc_001DCB9E; /* jle: less or equal (signed <=) */

loc_001DCB8C: ;
    edx = MEM32(ecx + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx + eax + -16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DCBA3; /* jb: below (unsigned <) */

loc_001DCB9B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001DCB9E: ;
    PUSH32(esp, 0x001DCBA3u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DCBA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCB9B; /* je: equal / zero */

loc_001DCBA7: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCB9B; /* jne: not equal / not zero */

loc_001DCBAC: ;
    eax = MEM32(eax + 8);
    SET_LO8(ecx, MEM8(eax + 6));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCB9B; /* je: equal / zero */

loc_001DCBB6: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001DCBC0
 * Original: 0x001DCBC0 - 0x001DCC0C (76 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DCBC0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DCBE4; /* jle: less or equal (signed <=) */

loc_001DCBCF: ;
    edx = MEM32(ecx + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx + eax + -16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DCBE9; /* jb: below (unsigned <) */

loc_001DCBDE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DCBE4: ;
    PUSH32(esp, 0x001DCBE9u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DCBE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCBDE; /* je: equal / zero */

loc_001DCBED: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCC03; /* je: equal / zero */

loc_001DCBF2: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DCBFCu); RECOMP_ABI_CALL(0x001E0130u, sub_001E0130); /* call 0x001E0130 */

loc_001DCBFC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCBDE; /* je: equal / zero */

loc_001DCC03: ;
    eax = 1;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DCC10
 * Original: 0x001DCC10 - 0x001DCC4B (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DCC10: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 4);
    if (CMP_LE(_fas, _fbs)) goto loc_001DCC2D; /* jle: less or equal (signed <=) */

loc_001DCC1C: ;
    edx = MEM32(ecx + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx + eax + -16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DCC42; /* jae: above or equal (unsigned >=) */

loc_001DCC2B: ;
    goto loc_001DCC32;

loc_001DCC2D: ;
    PUSH32(esp, 0x001DCC32u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DCC32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCC42; /* je: equal / zero */

loc_001DCC36: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCC45; /* je: equal / zero */

loc_001DCC3D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCC45; /* je: equal / zero */

loc_001DCC42: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001DCC45: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001DCC50
 * Original: 0x001DCC50 - 0x001DCCB8 (104 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001DCC50: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001DCC73; /* jle: less or equal (signed <=) */

loc_001DCC5E: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 8);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + -16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_001DCC7C;

loc_001DCC73: ;
    ecx = esi;
    PUSH32(esp, 0x001DCC7Au); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DCC7A: ;
    edi = eax;

loc_001DCC7C: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_001DCC97; /* jle: less or equal (signed <=) */

loc_001DCC84: ;
    edx = MEM32(esi + 0xC);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx + eax + -16;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_001DCC9E;

loc_001DCC97: ;
    ecx = esi;
    PUSH32(esp, 0x001DCC9Eu); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DCC9E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCCB3; /* je: equal / zero */

loc_001DCCA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCCB3; /* je: equal / zero */

loc_001DCCA6: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DCCADu); RECOMP_ABI_CALL(0x001E2020u, sub_001E2020); /* call 0x001E2020 */

loc_001DCCAD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DCCB3: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DCCC0
 * Original: 0x001DCCC0 - 0x001DCD29 (105 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCCC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001DCCC0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001DCCE3; /* jle: less or equal (signed <=) */

loc_001DCCCE: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 8);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + -16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_001DCCEC;

loc_001DCCE3: ;
    ecx = esi;
    PUSH32(esp, 0x001DCCEAu); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DCCEA: ;
    edi = eax;

loc_001DCCEC: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_001DCD07; /* jle: less or equal (signed <=) */

loc_001DCCF4: ;
    edx = MEM32(esi + 0xC);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx + eax + -16;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_001DCD0E;

loc_001DCD07: ;
    ecx = esi;
    PUSH32(esp, 0x001DCD0Eu); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DCD0E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCD24; /* je: equal / zero */

loc_001DCD12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCD24; /* je: equal / zero */

loc_001DCD16: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DCD1Eu); RECOMP_ABI_CALL(0x001E0750u, sub_001E0750); /* call 0x001E0750 */

loc_001DCD1E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DCD24: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DCD30
 * Original: 0x001DCD30 - 0x001DCD7E (78 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCD30(void)
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

loc_001DCD30: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DCD58; /* jle: less or equal (signed <=) */

loc_001DCD3F: ;
    edx = MEM32(ecx + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx + eax + -16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DCD5D; /* jb: below (unsigned <) */

loc_001DCD4E: ;
    fp_push(MEMD(0x2DF118)); /* fld double */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DCD58: ;
    PUSH32(esp, 0x001DCD5Du); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DCD5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCD4E; /* je: equal / zero */

loc_001DCD61: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCD77; /* je: equal / zero */

loc_001DCD66: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DCD70u); RECOMP_ABI_CALL(0x001E0130u, sub_001E0130); /* call 0x001E0130 */

loc_001DCD70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCD4E; /* je: equal / zero */

loc_001DCD77: ;
    fp_push(MEMD(eax + 8)); /* fld double */
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
 * sub_001DCD80
 * Original: 0x001DCD80 - 0x001DCDBF (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DCD80: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 4);
    if (CMP_LE(_fas, _fbs)) goto loc_001DCD9E; /* jle: less or equal (signed <=) */

loc_001DCD8C: ;
    edx = MEM32(ecx + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx + eax + -16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DCDA3; /* jb: below (unsigned <) */

loc_001DCD9B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001DCD9E: ;
    PUSH32(esp, 0x001DCDA3u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DCDA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCD9B; /* je: equal / zero */

loc_001DCDA7: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCD9B; /* je: equal / zero */

loc_001DCDAD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCDB9; /* jne: not equal / not zero */

loc_001DCDB2: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCD9B; /* je: equal / zero */

loc_001DCDB9: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001DCDC0
 * Original: 0x001DCDC0 - 0x001DCE30 (112 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DCDC0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_LE(_fas, _fbs)) goto loc_001DCDDF; /* jle: less or equal (signed <=) */

loc_001DCDCE: ;
    ecx = MEM32(edi + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ecx + eax + -16;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DCDEC; /* jae: above or equal (unsigned >=) */

loc_001DCDDD: ;
    goto loc_001DCDE8;

loc_001DCDDF: ;
    ecx = edi;
    PUSH32(esp, 0x001DCDE6u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DCDE6: ;
    esi = eax;

loc_001DCDE8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCDF1; /* jne: not equal / not zero */

loc_001DCDEC: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DCDF1: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCDFF; /* jne: not equal / not zero */

loc_001DCDF6: ;
    eax = MEM32(esi + 8);
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DCDFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DCE06u); RECOMP_ABI_CALL(0x001E0180u, sub_001E0180); /* call 0x001E0180 */

loc_001DCE06: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCE15; /* je: equal / zero */

loc_001DCE0D: ;
    esi = MEM32(esi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001DCE17;

loc_001DCE15: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001DCE17: ;
    eax = MEM32(edi + 0x10);
    edx = MEM32(eax + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DCE2B; /* jb: below (unsigned <) */

loc_001DCE22: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DCE28u); RECOMP_ABI_CALL(0x001DFFD0u, sub_001DFFD0); /* call 0x001DFFD0 */

loc_001DCE28: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DCE2B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DCE30
 * Original: 0x001DCE30 - 0x001DCE84 (84 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DCE30: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_LE(_fas, _fbs)) goto loc_001DCE52; /* jle: less or equal (signed <=) */

loc_001DCE3E: ;
    ecx = MEM32(edi + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ecx + eax + -16;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DCE5B; /* jb: below (unsigned <) */

loc_001DCE4D: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DCE52: ;
    ecx = edi;
    PUSH32(esp, 0x001DCE59u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DCE59: ;
    esi = eax;

loc_001DCE5B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCE4D; /* je: equal / zero */

loc_001DCE5F: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCE6D; /* jne: not equal / not zero */

loc_001DCE64: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DCE6D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DCE74u); RECOMP_ABI_CALL(0x001E0180u, sub_001E0180); /* call 0x001E0180 */

loc_001DCE74: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCE4D; /* je: equal / zero */

loc_001DCE7B: ;
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DCE90
 * Original: 0x001DCE90 - 0x001DCED0 (64 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DCE90: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 4);
    if (CMP_LE(_fas, _fbs)) goto loc_001DCEAD; /* jle: less or equal (signed <=) */

loc_001DCE9C: ;
    edx = MEM32(ecx + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx + eax + -16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DCEB6; /* jae: above or equal (unsigned >=) */

loc_001DCEAB: ;
    goto loc_001DCEB2;

loc_001DCEAD: ;
    PUSH32(esp, 0x001DCEB2u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DCEB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCEB9; /* jne: not equal / not zero */

loc_001DCEB6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001DCEB9: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001DCECC; /* je: equal / zero */

loc_001DCEC0: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001DCEB6; /* jne: not equal / not zero */

loc_001DCEC5: ;
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DCECC: ;
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001DCED0
 * Original: 0x001DCED0 - 0x001DCF00 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DCED0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 4);
    if (CMP_LE(_fas, _fbs)) goto loc_001DCEEE; /* jle: less or equal (signed <=) */

loc_001DCEDC: ;
    edx = MEM32(ecx + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx + eax + -16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DCEF3; /* jb: below (unsigned <) */

loc_001DCEEB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001DCEEE: ;
    PUSH32(esp, 0x001DCEF3u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DCEF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCEEB; /* je: equal / zero */

loc_001DCEF7: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DCEEB; /* jne: not equal / not zero */

loc_001DCEFC: ;
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001DCF00
 * Original: 0x001DCF00 - 0x001DCF53 (83 bytes, 36 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCF00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DCF00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_001DCF24; /* jle: less or equal (signed <=) */

loc_001DCF10: ;
    ecx = MEM32(esi + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + -16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DCF2B; /* jb: below (unsigned <) */

loc_001DCF1F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DCF24: ;
    ecx = esi;
    PUSH32(esp, 0x001DCF2Bu); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DCF2B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DCF1F; /* je: equal / zero */

loc_001DCF2F: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DCF1F; /* ja: above (unsigned >) */

loc_001DCF39: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x1DCF54); /* switch: 7 entries, 3 targets */
    if (_jt == 0x001DCF1Fu) goto loc_001DCF1F;
    if (_jt == 0x001DCF40u) goto loc_001DCF40;
    if (_jt == 0x001DCF46u) goto loc_001DCF46;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001DCF40: ;
    eax = MEM32(eax + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DCF46: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DCF4Du); RECOMP_ABI_CALL(0x001DCE90u, sub_001DCE90); /* call 0x001DCE90 */

loc_001DCF4D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DCF70
 * Original: 0x001DCF70 - 0x001DCF82 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCF70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DCF70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    MEM32(ecx) = 0;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 8) = MEM32(eax + 8) + 0x10;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DCF90
 * Original: 0x001DCF90 - 0x001DCFA9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001DCF90(void)
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

loc_001DCF90: ;
    eax = MEM32(esp + 4);
    fp_push(MEMD(esp + 8)); /* fld double */
    ecx = MEM32(eax + 8);
    MEMD(ecx + 8) = fp_top(); fp_pop(); /* fstp */
    MEM32(ecx) = 3;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 8) = MEM32(eax + 8) + 0x10;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001DCFB0
 * Original: 0x001DCFB0 - 0x001DCFF5 (69 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DCFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DCFB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x20) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_001DCFCA; /* jb: below (unsigned <) */

loc_001DCFC1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DCFC7u); RECOMP_ABI_CALL(0x001DFFD0u, sub_001DFFD0); /* call 0x001DFFD0 */

loc_001DCFC7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DCFCA: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    edi = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(edi) = 4;
    PUSH32(esp, 0x001DCFE3u); RECOMP_ABI_CALL(0x001E26E0u, sub_001E26E0); /* call 0x001E26E0 */

loc_001DCFE3: ;
    MEM32(edi + 8) = eax;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD000
 * Original: 0x001DD000 - 0x001DD06B (107 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DD000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD000: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DD018; /* jne: not equal / not zero */

loc_001DD009: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 8);
    MEM32(ecx) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 8) = MEM32(eax + 8) + 0x10;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001DD018: ;
    eax = ebp;
    edx = eax + 1;
    /* nop */

loc_001DD020: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DD020; /* jne: not equal / not zero */

loc_001DD027: ;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = eax;
    eax = MEM32(esi + 0x10);
    edx = MEM32(eax + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x20) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_001DD046; /* jb: below (unsigned <) */

loc_001DD03D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD043u); RECOMP_ABI_CALL(0x001DFFD0u, sub_001DFFD0); /* call 0x001DFFD0 */

loc_001DD043: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DD046: ;
    edi = MEM32(esi + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(edi) = 4;
    PUSH32(esp, 0x001DD057u); RECOMP_ABI_CALL(0x001E26E0u, sub_001E26E0); /* call 0x001E26E0 */

loc_001DD057: ;
    MEM32(edi + 8) = eax;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD070
 * Original: 0x001DD070 - 0x001DD09E (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD070: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DD089; /* jb: below (unsigned <) */

loc_001DD080: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD086u); RECOMP_ABI_CALL(0x001DFFD0u, sub_001DFFD0); /* call 0x001DFFD0 */

loc_001DD086: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DD089: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD099u); RECOMP_ABI_CALL(0x001E2140u, sub_001E2140); /* call 0x001E2140 */

loc_001DD099: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD0A0
 * Original: 0x001DD0A0 - 0x001DD0CE (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD0A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DD0B9; /* jb: below (unsigned <) */

loc_001DD0B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD0B6u); RECOMP_ABI_CALL(0x001DFFD0u, sub_001DFFD0); /* call 0x001DFFD0 */

loc_001DD0B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DD0B9: ;
    eax = MEM32(esp + 0xC);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD0C9u); RECOMP_ABI_CALL(0x001E2140u, sub_001E2140); /* call 0x001E2140 */

loc_001DD0C9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD0D0
 * Original: 0x001DD0D0 - 0x001DD158 (136 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD0D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD0D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x20) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_001DD0EB; /* jb: below (unsigned <) */

loc_001DD0E2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD0E8u); RECOMP_ABI_CALL(0x001DFFD0u, sub_001DFFD0); /* call 0x001DFFD0 */

loc_001DD0E8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DD0EB: ;
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD0F6u); RECOMP_ABI_CALL(0x001E27B0u, sub_001E27B0); /* call 0x001E27B0 */

loc_001DD0F6: ;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0xC) = edx;
    edi = MEM32(esi + 8);
    ecx = ebx;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + 8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001DD13F; /* je: equal / zero */

loc_001DD111: ;
    edi = 0xFFFFFFF0u;
    edx = ecx + eax + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    /* nop */

loc_001DD120: ;
    ebp = MEM32(esi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi + edx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = MEM32(ecx);
    MEM32(edx) = ebp;
    ebp = MEM32(ecx + 8);
    MEM32(edx + 8) = ebp;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    if ((_fa != 0)) goto loc_001DD120; /* jne: not equal / not zero */

loc_001DD13E: ;
    POP32(esp, ebp);

loc_001DD13F: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + 8) = eax;
    MEM32(ecx) = 6;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD160
 * Original: 0x001DD160 - 0x001DD182 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD160: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ecx) = 1;
    POP32(esp, esi);
    MEM32(ecx + 8) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 8) = MEM32(eax + 8) + 0x10;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DD190
 * Original: 0x001DD190 - 0x001DD1DB (75 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD190: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_001DD1A9; /* jle: less or equal (signed <=) */

loc_001DD19D: ;
    ecx = MEM32(esi + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + -16;
    goto loc_001DD1B0;

loc_001DD1A9: ;
    ecx = esi;
    PUSH32(esp, 0x001DD1B0u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DD1B0: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD1C0u); RECOMP_ABI_CALL(0x001E0430u, sub_001E0430); /* call 0x001E0430 */

loc_001DD1C0: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0xC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD1E0
 * Original: 0x001DD1E0 - 0x001DD22B (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD1E0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_001DD1F9; /* jle: less or equal (signed <=) */

loc_001DD1ED: ;
    ecx = MEM32(esi + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + -16;
    goto loc_001DD200;

loc_001DD1F9: ;
    ecx = esi;
    PUSH32(esp, 0x001DD200u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DD200: ;
    edx = MEM32(esi + 8);
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DD210u); RECOMP_ABI_CALL(0x001E3030u, sub_001E3030); /* call 0x001E3030 */

loc_001DD210: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0xC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD230
 * Original: 0x001DD230 - 0x001DD27F (79 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD230: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_001DD249; /* jle: less or equal (signed <=) */

loc_001DD23D: ;
    ecx = MEM32(esi + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + -16;
    goto loc_001DD250;

loc_001DD249: ;
    ecx = esi;
    PUSH32(esp, 0x001DD250u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DD250: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(eax + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DD25Eu); RECOMP_ABI_CALL(0x001E2F50u, sub_001E2F50); /* call 0x001E2F50 */

loc_001DD25E: ;
    edx = MEM32(eax);
    ecx = MEM32(esi + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD280
 * Original: 0x001DD280 - 0x001DD2BF (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD280: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x20) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_001DD29A; /* jb: below (unsigned <) */

loc_001DD291: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD297u); RECOMP_ABI_CALL(0x001DFFD0u, sub_001DFFD0); /* call 0x001DFFD0 */

loc_001DD297: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DD29A: ;
    edi = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(edi) = 5;
    PUSH32(esp, 0x001DD2ADu); RECOMP_ABI_CALL(0x001E2E40u, sub_001E2E40); /* call 0x001E2E40 */

loc_001DD2AD: ;
    MEM32(edi + 8) = eax;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD2C0
 * Original: 0x001DD2C0 - 0x001DD328 (104 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD2C0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_001DD2E0; /* jle: less or equal (signed <=) */

loc_001DD2CD: ;
    ecx = MEM32(esi + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + -16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DD2E7; /* jb: below (unsigned <) */

loc_001DD2DC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DD2E0: ;
    ecx = esi;
    PUSH32(esp, 0x001DD2E7u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DD2E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DD2DC; /* je: equal / zero */

loc_001DD2EB: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001DD2FF; /* je: equal / zero */

loc_001DD2F2: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001DD2DC; /* jne: not equal / not zero */

loc_001DD2F7: ;
    edx = MEM32(eax + 8);
    ecx = MEM32(edx + 8);
    goto loc_001DD305;

loc_001DD2FF: ;
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 8);

loc_001DD305: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DD2DC; /* je: equal / zero */

loc_001DD309: ;
    edx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x48) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DD2DC; /* je: equal / zero */

loc_001DD311: ;
    eax = MEM32(esi + 8);
    MEM32(eax) = 5;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 8) = MEM32(esi + 8) + 0x10;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD330
 * Original: 0x001DD330 - 0x001DD380 (80 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD330: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_001DD349; /* jle: less or equal (signed <=) */

loc_001DD33D: ;
    ecx = MEM32(esi + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + -16;
    goto loc_001DD350;

loc_001DD349: ;
    ecx = esi;
    PUSH32(esp, 0x001DD350u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DD350: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DD364; /* jne: not equal / not zero */

loc_001DD355: ;
    eax = MEM32(eax + 8);
    SET_LO8(ecx, MEM8(eax + 6));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DD364; /* jne: not equal / not zero */

loc_001DD35F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001DD367;

loc_001DD364: ;
    eax = esi + 0x40;

loc_001DD367: ;
    edx = MEM32(eax);
    ecx = MEM32(esi + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 8) = MEM32(esi + 8) + 0x10;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD380
 * Original: 0x001DD380 - 0x001DD3C0 (64 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD380: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_001DD399; /* jle: less or equal (signed <=) */

loc_001DD38D: ;
    ecx = MEM32(esi + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + -16;
    goto loc_001DD3A0;

loc_001DD399: ;
    ecx = esi;
    PUSH32(esp, 0x001DD3A0u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DD3A0: ;
    ecx = MEM32(esi + 8);
    edx = ecx + -16;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD3B2u); RECOMP_ABI_CALL(0x001E04A0u, sub_001E04A0); /* call 0x001E04A0 */

loc_001DD3B2: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD3C0
 * Original: 0x001DD3C0 - 0x001DD412 (82 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD3C0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001DD3DA; /* jle: less or equal (signed <=) */

loc_001DD3CE: ;
    ecx = MEM32(esi + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + -16;
    goto loc_001DD3E1;

loc_001DD3DA: ;
    ecx = esi;
    PUSH32(esp, 0x001DD3E1u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DD3E1: ;
    edi = MEM32(esi + 8);
    eax = MEM32(eax + 8);
    edx = edi + -32;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD3F2u); RECOMP_ABI_CALL(0x001E3090u, sub_001E3090); /* call 0x001E3090 */

loc_001DD3F2: ;
    ecx = MEM32(edi + -16);
    MEM32(eax) = ecx;
    edx = MEM32(edi + -8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(edi + -4);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD420
 * Original: 0x001DD420 - 0x001DD475 (85 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD420: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_LE(_fas, _fbs)) goto loc_001DD43A; /* jle: less or equal (signed <=) */

loc_001DD42E: ;
    ecx = MEM32(edi + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + -16;
    goto loc_001DD441;

loc_001DD43A: ;
    ecx = edi;
    PUSH32(esp, 0x001DD441u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DD441: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(eax + 8);
    esi = MEM32(edi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x001DD456u); RECOMP_ABI_CALL(0x001E3610u, sub_001E3610); /* call 0x001E3610 */

loc_001DD456: ;
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(esi + 0xC);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD480
 * Original: 0x001DD480 - 0x001DD4E5 (101 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD480: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_001DD49F; /* jle: less or equal (signed <=) */

loc_001DD493: ;
    ecx = MEM32(esi + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + -16;
    goto loc_001DD4A6;

loc_001DD49F: ;
    ecx = esi;
    PUSH32(esp, 0x001DD4A6u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DD4A6: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + -16);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DD4B9; /* jne: not equal / not zero */

loc_001DD4B3: ;
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DD4B9: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001DD4D3; /* je: equal / zero */

loc_001DD4C0: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001DD4D3; /* je: equal / zero */

loc_001DD4C5: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DD4D3: ;
    edx = MEM32(eax + 8);
    eax = MEM32(ecx + 8);
    MEM32(edx + 8) = eax;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 8) = MEM32(esi + 8) + 0xFFFFFFF0u;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD4F0
 * Original: 0x001DD4F0 - 0x001DD555 (101 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD4F0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DD50C; /* jle: less or equal (signed <=) */

loc_001DD500: ;
    ecx = MEM32(esi + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + -16;
    goto loc_001DD513;

loc_001DD50C: ;
    ecx = esi;
    PUSH32(esp, 0x001DD513u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DD513: ;
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 6 (32-bit) */
    esi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_001DD550; /* jne: not equal / not zero */

loc_001DD523: ;
    eax = MEM32(eax + 8);
    SET_LO8(ecx, MEM8(eax + 6));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DD550; /* jne: not equal / not zero */

loc_001DD52D: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esi + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(esi + 0xC);
    ecx = 1;
    POP32(esp, edi);
    MEM32(eax + 0xC) = edx;
    eax = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DD550: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD560
 * Original: 0x001DD560 - 0x001DD57E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD560: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_001DF0B0(); return; /* tail jmp 0x001DF0B0 */

}

/**
 * sub_001DD580
 * Original: 0x001DD580 - 0x001DD599 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD580: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    eax = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DD595u); RECOMP_ABI_CALL(0x001DF0B0u, sub_001DF0B0); /* call 0x001DF0B0 */

loc_001DD595: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DD5A0
 * Original: 0x001DD5A0 - 0x001DD606 (102 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD5A0: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_001DD5B4; /* jne: not equal / not zero */

loc_001DD5B0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001DD5CE;

loc_001DD5B4: ;
    if (CMP_LE(_fas, _fbs)) goto loc_001DD5C2; /* jle: less or equal (signed <=) */

loc_001DD5B6: ;
    ecx = MEM32(esi + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + -16;
    goto loc_001DD5C9;

loc_001DD5C2: ;
    ecx = esi;
    PUSH32(esp, 0x001DD5C9u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DD5C9: ;
    _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;

loc_001DD5CE: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esi + 8);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 8) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1DD580);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x001DD5FEu); RECOMP_ABI_CALL(0x001DF4F0u, sub_001DF4F0); /* call 0x001DF4F0 */

loc_001DD5FE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DD610
 * Original: 0x001DD610 - 0x001DD65B (75 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD610: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DD620; /* jne: not equal / not zero */

loc_001DD61B: ;
    eax = 0x2FB89C;

loc_001DD620: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001DD635u); RECOMP_ABI_CALL(0x001E36F0u, sub_001E36F0); /* call 0x001E36F0 */

loc_001DD635: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DD63Fu); RECOMP_ABI_CALL(0x001E36A0u, sub_001E36A0); /* call 0x001E36A0 */

loc_001DD63F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    eax = MEM32(esp + 0x2C);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DD657u); RECOMP_ABI_CALL(0x001DF380u, sub_001DF380); /* call 0x001DF380 */

loc_001DD657: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DD660
 * Original: 0x001DD660 - 0x001DD66E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD660(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD660: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + 0x20);
    eax = eax >> 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DD670
 * Original: 0x001DD670 - 0x001DD67E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD670: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + 0x24);
    eax = eax >> 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DD680
 * Original: 0x001DD680 - 0x001DD6B7 (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD680: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFF (32-bit) */
    ecx = MEM32(esp + 4);
    if (CMP_BE(_fa, _fb)) goto loc_001DD69B; /* jbe: below or equal (unsigned <=) */

loc_001DD68F: ;
    eax = MEM32(ecx + 0x10);
    MEM32(eax + 0x20) = 0xFFFFFFFFu;
    goto loc_001DD6A4;

loc_001DD69B: ;
    edx = MEM32(ecx + 0x10);
    eax = eax << 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + 0x20) = eax;

loc_001DD6A4: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DD6B6; /* jb: below (unsigned <) */

loc_001DD6AF: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DD6B5u); RECOMP_ABI_CALL(0x001DFFD0u, sub_001DFFD0); /* call 0x001DFFD0 */

loc_001DD6B5: ;
    POP32(esp, ecx);

loc_001DD6B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DD6C0
 * Original: 0x001DD6C0 - 0x001DD6D0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001DD6C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD6C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DD6CAu); RECOMP_ABI_CALL(0x001DE4B0u, sub_001DE4B0); /* call 0x001DE4B0 */

loc_001DD6CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DD6D0
 * Original: 0x001DD6D0 - 0x001DD71B (75 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD6D0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_001DD6E9; /* jle: less or equal (signed <=) */

loc_001DD6DD: ;
    ecx = MEM32(esi + 0xC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + -16;
    goto loc_001DD6F0;

loc_001DD6E9: ;
    ecx = esi;
    PUSH32(esp, 0x001DD6F0u); RECOMP_ABI_CALL(0x001DC820u, sub_001DC820); /* call 0x001DC820 */

loc_001DD6F0: ;
    edx = MEM32(esi + 8);
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD701u); RECOMP_ABI_CALL(0x001E3190u, sub_001E3190); /* call 0x001E3190 */

loc_001DD701: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DD713; /* je: equal / zero */

loc_001DD70B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DD713: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD720
 * Original: 0x001DD720 - 0x001DD796 (118 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD720: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x20) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_001DD73A; /* jb: below (unsigned <) */

loc_001DD731: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD737u); RECOMP_ABI_CALL(0x001DFFD0u, sub_001DFFD0); /* call 0x001DFFD0 */

loc_001DD737: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DD73A: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DD76D; /* jl: less (signed <) */

loc_001DD743: ;
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(esi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD755u); RECOMP_ABI_CALL(0x001E0960u, sub_001E0960); /* call 0x001E0960 */

loc_001DD755: ;
    ecx = MEM32(esi + 8);
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0x10;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DD76D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DD793; /* jne: not equal / not zero */

loc_001DD771: ;
    edi = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(edi) = 4;
    PUSH32(esp, 0x001DD784u); RECOMP_ABI_CALL(0x001E26E0u, sub_001E26E0); /* call 0x001E26E0 */

loc_001DD784: ;
    MEM32(edi + 8) = eax;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;

loc_001DD793: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD7A0
 * Original: 0x001DD7A0 - 0x001DD7E1 (65 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD7A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DD7B9; /* jb: below (unsigned <) */

loc_001DD7B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD7B6u); RECOMP_ABI_CALL(0x001DFFD0u, sub_001DFFD0); /* call 0x001DFFD0 */

loc_001DD7B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DD7B9: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD7C4u); RECOMP_ABI_CALL(0x001E2770u, sub_001E2770); /* call 0x001E2770 */

loc_001DD7C4: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + 8) = eax;
    MEM32(ecx) = 7;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD7F0
 * Original: 0x001DD7F0 - 0x001DD877 (135 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD7F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD7F0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2D0);
    PUSH32(esp, 0);
    edi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DD802u); RECOMP_ABI_CALL(0x001E3800u, sub_001E3800); /* call 0x001E3800 */

loc_001DD802: ;
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0);
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(0x270) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x270;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(esi + 0x20) = 0x2D;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x001DD826u); RECOMP_ABI_CALL(0x001E3800u, sub_001E3800); /* call 0x001E3800 */

loc_001DD826: ;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(eax + 8) = 1;
    eax = MEM32(esi + 8);
    MEM32(eax) = 0;
    edi = MEM32(esi + 8);
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = edi;
    eax = edi;
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0x14);
    edx = MEM32(eax);
    ecx = MEM32(esi + 8);
    MEM32(esi + 0xC) = edx;
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x140;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    edx = MEM32(esi + 0x28);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 0x2C) = 8;
    MEM32(esi + 0x24) = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD880
 * Original: 0x001DD880 - 0x001DD98C (268 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD880: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DD893u); RECOMP_ABI_CALL(0x001E3800u, sub_001E3800); /* call 0x001E3800 */

loc_001DD893: ;
    esi = MEM32(esp + 0x24);
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DD8AB; /* jne: not equal / not zero */

loc_001DD8A0: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD8A8u); RECOMP_ABI_CALL(0x001DE930u, sub_001DE930); /* call 0x001DE930 */

loc_001DD8A8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DD8AB: ;
    MEM32(esi + 0x10) = edi;
    MEM32(edi + 0x50) = esi;
    MEM32(edi + 0x20) = ebx;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 4) = ebx;
    MEM32(edi) = ebx;
    eax = MEM32(esi + 0x10);
    MEM32(eax + 0x40) = ebx;
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + 0x30) = ebx;
    eax = esi;
    MEM32(edi + 0x18) = ebx;
    MEM32(edi + 0x1C) = ebx;
    MEM32(edi + 0x28) = 0x31160;
    MEM32(edi + 0xC) = ebx;
    MEM32(edi + 0x10) = ebx;
    MEM32(edi + 0x14) = ebx;
    MEM32(edi + 0x58) = ebx;
    MEM32(edi + 0x68) = ebx;
    MEM32(edi + 0x78) = ebx;
    MEM32(edi + 0x24) = 0x120;
    PUSH32(esp, 0x001DD8F5u); RECOMP_ABI_CALL(0x001DD7F0u, sub_001DD7F0); /* call 0x001DD7F0 */

loc_001DD8F5: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + 0x40) = 5;
    ebp = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x40;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(ebp) = 5;
    PUSH32(esp, 0x001DD914u); RECOMP_ABI_CALL(0x001E2E40u, sub_001E2E40); /* call 0x001E2E40 */

loc_001DD914: ;
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0x48);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    MEM32(eax + 8) = eax;
    PUSH32(esp, esi);
    MEM32(esi + 0x40) = 5;
    PUSH32(esp, 0x001DD930u); RECOMP_ABI_CALL(0x001E2E40u, sub_001E2E40); /* call 0x001E2E40 */

loc_001DD930: ;
    MEM32(esi + 0x48) = eax;
    ebx = MEM32(esi + 0x10);
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(ebx) = 5;
    PUSH32(esp, 0x001DD949u); RECOMP_ABI_CALL(0x001E2E40u, sub_001E2E40); /* call 0x001E2E40 */

loc_001DD949: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, esi);
    MEM32(ebx + 8) = eax;
    PUSH32(esp, 0x001DD954u); RECOMP_ABI_CALL(0x001E25A0u, sub_001E25A0); /* call 0x001E25A0 */

loc_001DD954: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD95Au); RECOMP_ABI_CALL(0x001E0050u, sub_001E0050); /* call 0x001E0050 */

loc_001DD95A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD960u); RECOMP_ABI_CALL(0x001E3900u, sub_001E3900); /* call 0x001E3900 */

loc_001DD960: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x2FB98C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD96Du); RECOMP_ABI_CALL(0x001E26E0u, sub_001E26E0); /* call 0x001E26E0 */

loc_001DD96D: ;
    SET_LO8(ecx, MEM8(eax + 5));
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, LO8(ecx) | 0x10);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + 0x20) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DD990
 * Original: 0x001DD990 - 0x001DDA2E (158 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DD990: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD99Au); RECOMP_ABI_CALL(0x001E28A0u, sub_001E28A0); /* call 0x001E28A0 */

loc_001DD99A: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DD9D8; /* je: equal / zero */

loc_001DD9A4: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD9ACu); RECOMP_ABI_CALL(0x001DFE50u, sub_001DFE50); /* call 0x001DFE50 */

loc_001DD9AC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD9B2u); RECOMP_ABI_CALL(0x001E2580u, sub_001E2580); /* call 0x001E2580 */

loc_001DD9B2: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD9C5u); RECOMP_ABI_CALL(0x001E3800u, sub_001E3800); /* call 0x001E3800 */

loc_001DD9C5: ;
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + 0x18) = eax;
    edx = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x1C) = 0;

loc_001DD9D8: ;
    eax = ZX16(MEM16(esi + 0x2C));
    ecx = MEM32(esi + 0x28);
    eax = eax + eax * 2;
    PUSH32(esp, 0);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DD9EFu); RECOMP_ABI_CALL(0x001E3800u, sub_001E3800); /* call 0x001E3800 */

loc_001DD9EF: ;
    edx = MEM32(esi + 0x20);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DDA02u); RECOMP_ABI_CALL(0x001E3800u, sub_001E3800); /* call 0x001E3800 */

loc_001DDA02: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DDA1E; /* je: equal / zero */

loc_001DDA0C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001DDA1Bu); RECOMP_ABI_CALL(0x001E3800u, sub_001E3800); /* call 0x001E3800 */

loc_001DDA1B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DDA1E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x60);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001DDA2Au); RECOMP_ABI_CALL(0x001E3800u, sub_001E3800); /* call 0x001E3800 */

loc_001DDA2A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DDA30
 * Original: 0x001DDA30 - 0x001DDAA9 (121 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDA30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DDA30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x60);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DDA43u); RECOMP_ABI_CALL(0x001E3800u, sub_001E3800); /* call 0x001E3800 */

loc_001DDA43: ;
    esi = eax;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DDA4Eu); RECOMP_ABI_CALL(0x001E0020u, sub_001E0020); /* call 0x001E0020 */

loc_001DDA4E: ;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM8(esi + 0x32) = LO8(ebx);
    MEM8(esi + 0x30) = LO8(ebx);
    MEM32(esi + 0x34) = ebx;
    MEM8(esi + 0x31) = 1;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x50) = ebx;
    MEM16(esi + 0x2C) = LO16(ebx);
    MEM16(esi + 0x2E) = LO16(ebx);
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x40) = ebx;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x10) = eax;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    PUSH32(esp, 0x001DDA91u); RECOMP_ABI_CALL(0x001DD7F0u, sub_001DD7F0); /* call 0x001DD7F0 */

loc_001DDA91: ;
    ecx = MEM32(edi + 0x40);
    MEM32(esi + 0x40) = ecx;
    edx = MEM32(edi + 0x48);
    MEM32(esi + 0x48) = edx;
    eax = MEM32(edi + 0x4C);
    MEM32(esi + 0x4C) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DDAB0
 * Original: 0x001DDAB0 - 0x001DDAFF (79 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDAB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DDAB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DDAC0u); RECOMP_ABI_CALL(0x001E28A0u, sub_001E28A0); /* call 0x001E28A0 */

loc_001DDAC0: ;
    eax = ZX16(MEM16(esi + 0x2C));
    edx = MEM32(esi + 0x28);
    edi = MEM32(esp + 0x14);
    ecx = eax + eax * 2;
    PUSH32(esp, 0);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DDADBu); RECOMP_ABI_CALL(0x001E3800u, sub_001E3800); /* call 0x001E3800 */

loc_001DDADB: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DDAEEu); RECOMP_ABI_CALL(0x001E3800u, sub_001E3800); /* call 0x001E3800 */

loc_001DDAEE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x60);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DDAF9u); RECOMP_ABI_CALL(0x001E3800u, sub_001E3800); /* call 0x001E3800 */

loc_001DDAF9: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DDB00
 * Original: 0x001DDB00 - 0x001DDB7B (123 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DDB00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x60);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DDB0Eu); RECOMP_ABI_CALL(0x001E3800u, sub_001E3800); /* call 0x001E3800 */

loc_001DDB0E: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DDB71; /* je: equal / zero */

loc_001DDB17: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1DD880);
    PUSH32(esp, esi);
    MEM8(esi + 4) = 8;
    MEM8(esi + 5) = LO8(ebx);
    MEM32(esi + 0x54) = ebx;
    MEM32(esi) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM8(esi + 0x32) = LO8(ebx);
    MEM8(esi + 0x30) = LO8(ebx);
    MEM32(esi + 0x34) = ebx;
    MEM8(esi + 0x31) = 1;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x50) = ebx;
    MEM16(esi + 0x2C) = LO16(ebx);
    MEM16(esi + 0x2E) = LO16(ebx);
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x10) = ebx;
    PUSH32(esp, 0x001DDB65u); RECOMP_ABI_CALL(0x001DE970u, sub_001DE970); /* call 0x001DE970 */

loc_001DDB65: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DDB76; /* je: equal / zero */

loc_001DDB6C: ;
    PUSH32(esp, 0x001DDB71u); RECOMP_ABI_CALL(0x001DD990u, sub_001DD990); /* call 0x001DD990 */

loc_001DDB71: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001DDB76: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DDB80
 * Original: 0x001DDB80 - 0x001DDB8C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDB80(void)
{

loc_001DDB80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DDB8Au); RECOMP_ABI_CALL(0x001DFD60u, sub_001DFD60); /* call 0x001DFD60 */

loc_001DDB8A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DDB90
 * Original: 0x001DDB90 - 0x001DDBE4 (84 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DDB90: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x50);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DDBA5u); RECOMP_ABI_CALL(0x001E28A0u, sub_001E28A0); /* call 0x001E28A0 */

loc_001DDBA5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DDBABu); RECOMP_ABI_CALL(0x001DF610u, sub_001DF610); /* call 0x001DF610 */

loc_001DDBAB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x5C) = 0;

loc_001DDBB5: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, 0);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(eax);
    PUSH32(esp, 0x1DDB80);
    PUSH32(esp, esi);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM16(esi + 0x2E) = 0;
    PUSH32(esp, 0x001DDBD6u); RECOMP_ABI_CALL(0x001DE970u, sub_001DE970); /* call 0x001DE970 */

loc_001DDBD6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DDBB5; /* jne: not equal / not zero */

loc_001DDBDD: ;
    PUSH32(esp, 0x001DDBE2u); RECOMP_ABI_CALL(0x001DD990u, sub_001DD990); /* call 0x001DD990 */

loc_001DDBE2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DDBF0
 * Original: 0x001DDBF0 - 0x001DDC2B (59 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001DDBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DDBF0: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DDC19; /* jne: not equal / not zero */

loc_001DDBF8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DDC05; /* je: equal / zero */

loc_001DDBFD: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    MEM32(eax + 0xC) = edx;

loc_001DDC05: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx + -8);
    ecx = MEM32(edx + 0xC);
    eax = MEM32(eax + 0xC);
    _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001DDC1D; /* jns: not sign (positive) */

loc_001DDC19: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_001DDC1D: ;
    ecx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DDC28; /* je: equal / zero */

loc_001DDC24: ;
    eax = MEM32(ecx + eax * 4);
    esp += 4; return; /* ret */

loc_001DDC28: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DDC30
 * Original: 0x001DDC30 - 0x001DDC64 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DDC30: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x28) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DDC5F; /* je: equal / zero */

loc_001DDC3C: ;
    /* nop */

loc_001DDC40: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DDC55; /* jne: not equal / not zero */

loc_001DDC48: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DDC55; /* je: equal / zero */

loc_001DDC4D: ;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx);
    MEM32(eax + 0xC) = ecx;

loc_001DDC55: ;
    ecx = MEM32(edx + 0x28);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DDC40; /* jne: not equal / not zero */

loc_001DDC5F: ;
    MEM8(edx + 0x32) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001DDC70
 * Original: 0x001DDC70 - 0x001DDCE4 (116 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DDC70: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x14);
    PUSH32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_001DDC9E; /* jle: less or equal (signed <=) */

loc_001DDC80: ;
    esi = MEM32(edx + 0x28);

loc_001DDC83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DDC9A; /* jbe: below or equal (unsigned <=) */

loc_001DDC87: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DDC91; /* jne: not equal / not zero */

loc_001DDC8E: ;
    _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001DDC91: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001DDC83; /* jg: greater (signed >) */

loc_001DDC98: ;
    goto loc_001DDC9E;

loc_001DDC9A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001DDCE0; /* jg: greater (signed >) */

loc_001DDC9E: ;
    edx = MEM32(edx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DDCE0; /* je: equal / zero */

loc_001DDCA5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DDCBB; /* jge: greater or equal (signed >=) */

loc_001DDCA9: ;
    ecx = MEM32(esp + 0x10);
    eax = 1;
    MEM32(ecx + 0x5C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DDCBB: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x10);
    ecx = 1;
    MEM32(edx + 0x5C) = eax;
    eax = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DDCE0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DDCF0
 * Original: 0x001DDCF0 - 0x001DDD5B (107 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDCF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DDCF0: ;
    eax = MEM32(eax + 8);
    SET_LO8(edx, MEM8(eax + 6));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DDD22; /* je: equal / zero */

loc_001DDCFA: ;
    MEM32(ecx + 0x10) = 0x2FB9AC;
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, 0x3C);
    MEM32(ecx + 0x1C) = 0xFFFFFFFFu;
    MEM32(ecx + 0xC) = 0x2FB9A8;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DDD1Eu); RECOMP_ABI_CALL(0x001E2430u, sub_001E2430); /* call 0x001E2430 */

loc_001DDD1E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DDD22: ;
    edx = MEM32(eax + 0xC);
    edx = MEM32(edx + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x10) = edx;
    eax = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x3C);
    MEM32(ecx + 0x1C) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = 0x2FB9A0;
    if (CMP_EQ(_fa, _fb)) goto loc_001DDD45; /* je: equal / zero */

loc_001DDD40: ;
    eax = 0x2ED228;

loc_001DDD45: ;
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, 0x3C);
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DDD57u); RECOMP_ABI_CALL(0x001E2430u, sub_001E2430); /* call 0x001E2430 */

loc_001DDD57: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DDD60
 * Original: 0x001DDD60 - 0x001DDDB9 (89 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDD60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDD60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x48);
    SET_LO8(ecx, MEM8(ebp + 7));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DDDA7; /* je: equal / zero */

loc_001DDD75: ;
    ebx = edi + edi * 4;
    ebx = ebx << 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_001DDD80;

    /* nop */

loc_001DDD80: ;
    esi = MEM32(ebp + 0x10);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x28;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x001DDD97u); RECOMP_ABI_CALL(0x001E2020u, sub_001E2020); /* call 0x001E2020 */

loc_001DDD97: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DDDA3; /* je: equal / zero */

loc_001DDD9E: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DDDAE; /* je: equal / zero */

loc_001DDDA3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DDD80; /* jne: not equal / not zero */

loc_001DDDA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001DDDAE: ;
    eax = MEM32(esi + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DDDC0
 * Original: 0x001DDDC0 - 0x001DDE0A (74 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDDC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DDDC0: ;
    eax = 0x2E0465;
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x3C);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x1C) = eax;
    eax = esi + 0x20;
    PUSH32(esp, 0x2FB9BC);
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = 0x2FB9B4;
    MEM32(esi + 0x10) = 0x2FB9BC;
    PUSH32(esp, 0x001DDDF2u); RECOMP_ABI_CALL(0x001E2430u, sub_001E2430); /* call 0x001E2430 */

loc_001DDDF2: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x18) = 0;
    edx = MEM32(ecx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001DDE10
 * Original: 0x001DDE10 - 0x001DDE3F (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001DDE10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001DDE10: ;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx + edx * 4 + 4);
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x19 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001DDE3C; /* jl: less (signed <) */

loc_001DDE21: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001DDE31; /* jle: less or equal (signed <=) */

loc_001DDE26: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001DDE3C; /* jne: not equal / not zero */

loc_001DDE2B: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_001DDE31: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFF8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_001DDE3C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DDE40
 * Original: 0x001DDE40 - 0x001DDE64 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DDE40: ;
    edx = ZX8(MEM8(ecx + 0x47));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DDE5E; /* jl: less (signed <) */

loc_001DDE48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DDE5B; /* jl: less (signed <) */

loc_001DDE4F: ;
    edx = MEM32(ecx + 0x28);
    _fb = (uint32_t)(0xFFFFFF06u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFF06u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DDE5E; /* jl: less (signed <) */

loc_001DDE5B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001DDE5E: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001DDE70
 * Original: 0x001DDE70 - 0x001DE1D2 (866 bytes, 264 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DDE70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DDE70: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x47));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xFA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xFA (8-bit) */
    edx = ecx + -1;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = edx;
    if (CMP_A(_fa, _fb)) goto loc_001DDEAC; /* ja: above (unsigned >) */

loc_001DDE8E: ;
    edx = MEM32(eax + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DDE99; /* je: equal / zero */

loc_001DDE95: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DDEAC; /* jne: not equal / not zero */

loc_001DDE99: ;
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax + ecx * 4 + -4);
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x1B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x1B (8-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001DDEB3; /* je: equal / zero */

loc_001DDEAC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DDEB3: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001DE1C3; /* jle: less or equal (signed <=) */

loc_001DDEC8: ;
    edx = ZX8(LO8(ebx));
    MEM32(esp + 0x14) = edx;
    /* nop */

loc_001DDED0: ;
    eax = MEM32(eax + ecx * 4);
    edx = MEM32(esp + 0x14);
    edi = eax;
    ecx = eax;
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi >> 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001DDF56; /* jge: greater or equal (signed >=) */

loc_001DDEED: ;
    SET_LO8(ebx, MEM8(ecx + 0x2FC144));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(ebx));
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001DDF34; /* je: equal / zero */

loc_001DDEFE: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001DDF1C; /* je: equal / zero */

loc_001DDF01: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001DDFA0; /* jne: not equal / not zero */

loc_001DDF08: ;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x3FFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1FFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x1FFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    goto loc_001DDFA0;

loc_001DDF1C: ;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x3FFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001DDFA0; /* je: equal / zero */

loc_001DDF2B: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x28) (32-bit) */
    goto loc_001DDF9E;

loc_001DDF34: ;
    esi = eax;
    esi = esi >> 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x1FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi & 0x1FF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    ebp = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001DDF60; /* je: equal / zero */

loc_001DDF4E: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DDF7C; /* jl: less (signed <) */

loc_001DDF56: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DDF60: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DDF78; /* je: equal / zero */

loc_001DDF65: ;
    ecx = MEM32(esp + 0x2C);
    eax = esi;
    PUSH32(esp, 0x001DDF70u); RECOMP_ABI_CALL(0x001DDE40u, sub_001DDE40); /* call 0x001DDE40 */

loc_001DDF70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DDF56; /* je: equal / zero */

loc_001DDF74: ;
    ecx = MEM32(esp + 0x24);

loc_001DDF78: ;
    eax = MEM32(esp + 0x14);

loc_001DDF7C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    edx = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_001DDFA8; /* je: equal / zero */

loc_001DDF85: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DDFA8; /* jl: less (signed <) */

loc_001DDF89: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DDF56; /* jl: less (signed <) */

loc_001DDF91: ;
    eax = MEM32(esp + 0x2C);
    edx = ebp + -250;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x28) (32-bit) */

loc_001DDF9E: ;
    if (CMP_GE(_fas, _fbs)) goto loc_001DDF56; /* jge: greater or equal (signed >=) */

loc_001DDFA0: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);

loc_001DDFA8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DDFB7; /* je: equal / zero */

loc_001DDFAD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x34) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DDFB7; /* jne: not equal / not zero */

loc_001DDFB3: ;
    MEM32(esp + 0x18) = edx;

loc_001DDFB7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_001DDFDE; /* jns: not sign (positive) */

loc_001DDFBB: ;
    ebx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DDF56; /* jge: greater or equal (signed >=) */

loc_001DDFC6: ;
    ebx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x10);
    ebx = MEM32(ebx + edx * 4 + 4);
    ebx = ebx & 0x3F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x14 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DDF56; /* jne: not equal / not zero */

loc_001DDFDE: ;
    ebx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DE1AA; /* ja: above (unsigned >) */

loc_001DDFEE: ;
    ecx = ZX8(MEM8(ecx + 0x1DE20C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x1DE1D4); /* switch: 14 entries, 14 targets */
    if (_jt == 0x001DDFFCu) goto loc_001DDFFC;
    if (_jt == 0x001DE018u) goto loc_001DE018;
    if (_jt == 0x001DE035u) goto loc_001DE035;
    if (_jt == 0x001DE046u) goto loc_001DE046;
    if (_jt == 0x001DE05Bu) goto loc_001DE05B;
    if (_jt == 0x001DE077u) goto loc_001DE077;
    if (_jt == 0x001DE090u) goto loc_001DE090;
    if (_jt == 0x001DE0A6u) goto loc_001DE0A6;
    if (_jt == 0x001DE0B1u) goto loc_001DE0B1;
    if (_jt == 0x001DE0F2u) goto loc_001DE0F2;
    if (_jt == 0x001DE13Bu) goto loc_001DE13B;
    if (_jt == 0x001DE14Eu) goto loc_001DE14E;
    if (_jt == 0x001DE15Fu) goto loc_001DE15F;
    if (_jt == 0x001DE1AAu) goto loc_001DE1AA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001DDFFC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DE1AA; /* je: equal / zero */

loc_001DE004: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DDF56; /* jge: greater or equal (signed >=) */

loc_001DE013: ;
    goto loc_001DE1AA;

loc_001DE018: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001DE1AA; /* jg: greater (signed >) */

loc_001DE024: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001DE1AA; /* jg: greater (signed >) */

loc_001DE02C: ;
    MEM32(esp + 0x18) = edx;
    goto loc_001DE1AA;

loc_001DE035: ;
    edx = ZX8(MEM8(ebx + 0x44));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DDF56; /* jge: greater or equal (signed >=) */

loc_001DE041: ;
    goto loc_001DE1AA;

loc_001DE046: ;
    eax = MEM32(ebx + 8);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(esi + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DDF56; /* jne: not equal / not zero */

loc_001DE056: ;
    goto loc_001DE1AA;

loc_001DE05B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DDF56; /* jge: greater or equal (signed >=) */

loc_001DE064: ;
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x34), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE1AA; /* jne: not equal / not zero */

loc_001DE06E: ;
    MEM32(esp + 0x18) = edx;
    goto loc_001DE1AA;

loc_001DE077: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DDF56; /* jge: greater or equal (signed >=) */

loc_001DE083: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DDF56; /* jge: greater or equal (signed >=) */

loc_001DE08B: ;
    goto loc_001DE1AA;

loc_001DE090: ;
    ecx = edi + ebp + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DDF56; /* jge: greater or equal (signed >=) */

loc_001DE09C: ;
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x34), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DE0A6; /* jl: less (signed <) */

loc_001DE0A2: ;
    MEM32(esp + 0x18) = edx;

loc_001DE0A6: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DDF56; /* jge: greater or equal (signed >=) */

loc_001DE0B1: ;
    eax = esi + edx + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DDF56; /* jl: less (signed <) */

loc_001DE0BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DDF56; /* jge: greater or equal (signed >=) */

loc_001DE0C7: ;
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x34), 0xFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DE1AA; /* je: equal / zero */

loc_001DE0D5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DE1AA; /* jge: greater or equal (signed >=) */

loc_001DE0DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x30) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001DE1AA; /* jg: greater (signed >) */

loc_001DE0E7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = esi;
    goto loc_001DE1AA;

loc_001DE0F2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DE102; /* je: equal / zero */

loc_001DE0F6: ;
    ecx = esi + edi + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DDF56; /* jge: greater or equal (signed >=) */

loc_001DE102: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE11F; /* jne: not equal / not zero */

loc_001DE108: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0x001DE115u); RECOMP_ABI_CALL(0x001DDE10u, sub_001DDE10); /* call 0x001DDE10 */

loc_001DE115: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DDF56; /* je: equal / zero */

loc_001DE11D: ;
    goto loc_001DE12F;

loc_001DE11F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DE12F; /* je: equal / zero */

loc_001DE123: ;
    ecx = edi + ebp + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DDF56; /* jge: greater or equal (signed >=) */

loc_001DE12F: ;
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x34), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DE1AA; /* jl: less (signed <) */

loc_001DE135: ;
    MEM32(esp + 0x18) = edx;
    goto loc_001DE1AA;

loc_001DE13B: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DE1AA; /* jle: less or equal (signed <=) */

loc_001DE140: ;
    edx = esi + edi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DDF56; /* jge: greater or equal (signed >=) */

loc_001DE14C: ;
    goto loc_001DE1AA;

loc_001DE14E: ;
    esi = esi & 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + edi + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DDF56; /* jge: greater or equal (signed >=) */

loc_001DE15D: ;
    goto loc_001DE1AA;

loc_001DE15F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 0x34) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DDF56; /* jge: greater or equal (signed >=) */

loc_001DE168: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + esi * 4);
    ecx = ZX8(MEM8(ecx + 0x44));
    eax = ecx + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DDF56; /* jge: greater or equal (signed >=) */

loc_001DE17F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DE1AA; /* jle: less or equal (signed <=) */

loc_001DE183: ;
    edx = MEM32(esp + 0x20);
    edx = edx + eax * 4;
    /* nop */

loc_001DE190: ;
    eax = MEM32(edx);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DE1A2; /* je: equal / zero */

loc_001DE19A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DDF56; /* jne: not equal / not zero */

loc_001DE1A2: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001DE190; /* jg: greater (signed >) */

loc_001DE1AA: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x30);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001DDED0; /* jl: less (signed <) */

loc_001DE1C3: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(eax + ecx * 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DE230
 * Original: 0x001DE230 - 0x001DE247 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DE230: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DE243u); RECOMP_ABI_CALL(0x001DDE70u, sub_001DDE70); /* call 0x001DDE70 */

loc_001DE243: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DE250
 * Original: 0x001DE250 - 0x001DE274 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DE250: ;
    _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xFA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_001DE26E; /* js: sign (negative) */

loc_001DE257: ;
    edx = MEM32(ecx + 8);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + edx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE26E; /* jne: not equal / not zero */

loc_001DE267: ;
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DE26E: ;
    eax = 0x2FB89C;
    esp += 4; return; /* ret */

}

/**
 * sub_001DE280
 * Original: 0x001DE280 - 0x001DE389 (265 bytes, 100 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE280: ;
    _fa = (uint32_t)(MEM8(ebx + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 8), 1 (8-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001DE31A; /* jne: not equal / not zero */

loc_001DE291: ;
    ecx = MEM32(ebx);
    eax = MEM32(ecx + -8);
    edi = MEM32(eax + 0xC);
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DE2A5; /* je: equal / zero */

loc_001DE2A0: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001DE2C1;

loc_001DE2A5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DE2B1; /* je: equal / zero */

loc_001DE2A9: ;
    edx = MEM32(ebx + 0x10);
    eax = MEM32(edx);
    MEM32(ebx + 0xC) = eax;

loc_001DE2B1: ;
    ecx = MEM32(ecx + -8);
    edx = MEM32(ecx + 0xC);
    esi = MEM32(ebx + 0xC);
    _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((2) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001DE2C1: ;
    PUSH32(esp, esi);
    eax = ebp + 1;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DE2CCu); RECOMP_ABI_CALL(0x001E2A30u, sub_001E2A30); /* call 0x001E2A30 */

loc_001DE2CC: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001DE320; /* jne: not equal / not zero */

loc_001DE2D9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DE2E1u); RECOMP_ABI_CALL(0x001DDE70u, sub_001DDE70); /* call 0x001DDE70 */

loc_001DE2E1: ;
    ecx = eax;
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DE31A; /* ja: above (unsigned >) */

loc_001DE2EE: ;
    edx = ZX8(MEM8(ecx + 0x1DE3A0));
    { uint32_t _jt = MEM32(edx * 4 + 0x1DE38C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x001DE2FCu) goto loc_001DE2FC;
    if (_jt == 0x001DE31Au) goto loc_001DE31A;
    if (_jt == 0x001DE329u) goto loc_001DE329;
    if (_jt == 0x001DE34Du) goto loc_001DE34D;
    if (_jt == 0x001DE36Bu) goto loc_001DE36B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001DE2FC: ;
    ecx = eax;
    ecx = ecx >> 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x1FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DE31A; /* jge: greater or equal (signed >=) */

loc_001DE30E: ;
    _fa = (uint32_t)(MEM8(ebx + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 8), 1 (8-bit) */
    ebp = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001DE291; /* je: equal / zero */

loc_001DE31A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001DE320: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x2FB9DC;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001DE329: ;
    ecx = MEM32(edi + 8);
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x3FFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + ecx + 8);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(eax) = edx;
    eax = 0x2FB9D4;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001DE34D: ;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x1FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edi;
    PUSH32(esp, 0x001DE35Cu); RECOMP_ABI_CALL(0x001DE250u, sub_001DE250); /* call 0x001DE250 */

loc_001DE35C: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = eax;
    eax = 0x2FB9CC;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001DE36B: ;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x1FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edi;
    PUSH32(esp, 0x001DE37Au); RECOMP_ABI_CALL(0x001DE250u, sub_001DE250); /* call 0x001DE250 */

loc_001DE37A: ;
    edx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = eax;
    eax = 0x2FB8C0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DE3B0
 * Original: 0x001DE3B0 - 0x001DE429 (121 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DE3B0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO8(eax, MEM8(ebx + 8));
    SET_LO8(ecx, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DE3C3; /* jne: not equal / not zero */

loc_001DE3BC: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001DE3C8; /* jg: greater (signed >) */

loc_001DE3C3: ;
    _fa = (uint32_t)(MEM8(ebx + -16)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + -16), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DE3CC; /* je: equal / zero */

loc_001DE3C8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001DE3CC: ;
    eax = MEM32(ebx + -16);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DE3DB; /* je: equal / zero */

loc_001DE3D6: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001DE3F9;

loc_001DE3DB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DE3E7; /* je: equal / zero */

loc_001DE3DF: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax);
    MEM32(ebx + 0xC) = ecx;

loc_001DE3E7: ;
    edx = MEM32(ebx);
    eax = MEM32(edx + -8);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ebx + 0xC);
    _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001DE3F9: ;
    edx = MEM32(ebx);
    ecx = MEM32(edx + -8);
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(edx + 0xC);
    eax = MEM32(ecx + eax * 4);
    ecx = eax;
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x19 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DE416; /* je: equal / zero */

loc_001DE411: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE3C8; /* jne: not equal / not zero */

loc_001DE416: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DE424u); RECOMP_ABI_CALL(0x001DE280u, sub_001DE280); /* call 0x001DE280 */

loc_001DE424: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DE430
 * Original: 0x001DE430 - 0x001DE4A4 (116 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DE430: ;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DE4A0; /* jne: not equal / not zero */

loc_001DE43E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DE44B; /* je: equal / zero */

loc_001DE443: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    MEM32(eax + 0xC) = edx;

loc_001DE44B: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx + -8);
    ecx = MEM32(edx + 0xC);
    eax = MEM32(eax + 0xC);
    _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    if ((_fas >= 0)) goto loc_001DE465; /* jns: not sign (positive) */

loc_001DE460: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001DE473;

loc_001DE465: ;
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DE471; /* je: equal / zero */

loc_001DE46C: ;
    esi = MEM32(edx + eax * 4);
    goto loc_001DE473;

loc_001DE471: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001DE473: ;
    eax = MEM32(ecx + 0x20);
    PUSH32(esp, 0x3C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DE486u); RECOMP_ABI_CALL(0x001E2430u, sub_001E2430); /* call 0x001E2430 */

loc_001DE486: ;
    edx = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FB9E4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DE49Cu); RECOMP_ABI_CALL(0x001E2410u, sub_001E2410); /* call 0x001E2410 */

loc_001DE49C: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_001DE4A0: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DE4B0
 * Original: 0x001DE4B0 - 0x001DE538 (136 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DE4B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DE52B; /* je: equal / zero */

loc_001DE4BC: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DE4D2; /* je: equal / zero */

loc_001DE4C7: ;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DE4CFu); RECOMP_ABI_CALL(0x001DE930u, sub_001DE930); /* call 0x001DE930 */

loc_001DE4CF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DE4D2: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + -16);
    MEM32(eax) = ecx;
    edx = MEM32(eax + -8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(eax + -4);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(esi + 8);
    edx = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = edx;
    ecx = MEM32(edi + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edi + 0xC);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    POP32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_001DE513; /* jg: greater (signed >) */

loc_001DE508: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DE510u); RECOMP_ABI_CALL(0x001DEB10u, sub_001DEB10); /* call 0x001DEB10 */

loc_001DE510: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DE513: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    PUSH32(esp, 1);
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DE528u); RECOMP_ABI_CALL(0x001DF0B0u, sub_001DF0B0); /* call 0x001DF0B0 */

loc_001DE528: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DE52B: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DE533u); RECOMP_ABI_CALL(0x001DE930u, sub_001DE930); /* call 0x001DE930 */

loc_001DE533: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DE540
 * Original: 0x001DE540 - 0x001DE566 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DE540: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DE555u); RECOMP_ABI_CALL(0x001E2140u, sub_001E2140); /* call 0x001E2140 */

loc_001DE555: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DE55Bu); RECOMP_ABI_CALL(0x001DE430u, sub_001DE430); /* call 0x001DE430 */

loc_001DE55B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DE561u); RECOMP_ABI_CALL(0x001DE4B0u, sub_001DE4B0); /* call 0x001DE4B0 */

loc_001DE561: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DE570
 * Original: 0x001DE570 - 0x001DE65C (236 bytes, 79 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE570: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = 1;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001DE657; /* je: equal / zero */

loc_001DE58D: ;
    /* nop */

loc_001DE590: ;
    eax = SX8(LO8(eax));
    _fb = (uint32_t)(0xFFFFFFADu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFADu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x22) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x22 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DE635; /* ja: above (unsigned >) */

loc_001DE59F: ;
    ecx = ZX8(MEM8(eax + 0x1DE674));
    { uint32_t _jt = MEM32(ecx * 4 + 0x1DE65C); /* switch: 6 entries, 6 targets */
    if (_jt == 0x001DE5ADu) goto loc_001DE5AD;
    if (_jt == 0x001DE5BBu) goto loc_001DE5BB;
    if (_jt == 0x001DE5D3u) goto loc_001DE5D3;
    if (_jt == 0x001DE5DFu) goto loc_001DE5DF;
    if (_jt == 0x001DE620u) goto loc_001DE620;
    if (_jt == 0x001DE635u) goto loc_001DE635;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001DE5AD: ;
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0x001DE5B6u); RECOMP_ABI_CALL(0x001DDCF0u, sub_001DDCF0); /* call 0x001DDCF0 */

loc_001DE5B6: ;
    goto loc_001DE63D;

loc_001DE5BB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DE5CB; /* je: equal / zero */

loc_001DE5BF: ;
    eax = ebx;
    PUSH32(esp, 0x001DE5C6u); RECOMP_ABI_CALL(0x001DDBF0u, sub_001DDBF0); /* call 0x001DDBF0 */

loc_001DE5C6: ;
    MEM32(esi + 0x14) = eax;
    goto loc_001DE63D;

loc_001DE5CB: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x14) = eax;
    goto loc_001DE63D;

loc_001DE5D3: ;
    edx = MEM32(edi + 8);
    eax = ZX8(MEM8(edx + 7));
    MEM32(esi + 0x18) = eax;
    goto loc_001DE63D;

loc_001DE5DF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DE5F3; /* je: equal / zero */

loc_001DE5E3: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    eax = ebx;
    PUSH32(esp, 0x001DE5EEu); RECOMP_ABI_CALL(0x001DE3B0u, sub_001DE3B0); /* call 0x001DE3B0 */

loc_001DE5EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001DE5F5;

loc_001DE5F3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001DE5F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001DE63D; /* jne: not equal / not zero */

loc_001DE5FC: ;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0x001DE604u); RECOMP_ABI_CALL(0x001DDD60u, sub_001DDD60); /* call 0x001DDD60 */

loc_001DE604: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001DE617; /* je: equal / zero */

loc_001DE60E: ;
    MEM32(esi + 8) = 0x2FB9D4;
    goto loc_001DE63D;

loc_001DE617: ;
    MEM32(esi + 8) = 0x2E0465;
    goto loc_001DE63D;

loc_001DE620: ;
    edx = MEM32(edi);
    eax = MEM32(ebp + 8);
    MEM32(eax) = edx;
    ecx = MEM32(edi + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edi + 0xC);
    MEM32(eax + 0xC) = edx;
    goto loc_001DE63D;

loc_001DE635: ;
    MEM32(esp + 4) = 0;

loc_001DE63D: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE590; /* jne: not equal / not zero */

loc_001DE650: ;
    eax = MEM32(esp + 4);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001DE657: ;
    eax = ecx;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DE6A0
 * Original: 0x001DE6A0 - 0x001DE75B (187 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE6A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0x3E (8-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 1;
    if (CMP_NE(_fa, _fb)) goto loc_001DE6F4; /* jne: not equal / not zero */

loc_001DE6B6: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DE6D2; /* je: equal / zero */

loc_001DE6C4: ;
    PUSH32(esp, 0x2FB9F0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001DE6CFu); RECOMP_ABI_CALL(0x001DE540u, sub_001DE540); /* call 0x001DE540 */

loc_001DE6CF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DE6D2: ;
    esi = MEM32(esp + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001DE6E0u); RECOMP_ABI_CALL(0x001DE570u, sub_001DE570); /* call 0x001DE570 */

loc_001DE6E0: ;
    ebx = MEM32(esp + 0x20);
    edi = eax;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;
    goto loc_001DE72B;

loc_001DE6F4: ;
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DE722; /* je: equal / zero */

loc_001DE6FF: ;
    ecx = MEM32(ebp + 0x28);
    eax = eax + eax * 2;
    edi = MEM32(ecx + eax * 8);
    eax = ecx + eax * 8;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebx = eax;
    PUSH32(esp, 0x001DE717u); RECOMP_ABI_CALL(0x001DE570u, sub_001DE570); /* call 0x001DE570 */

loc_001DE717: ;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    goto loc_001DE72B;

loc_001DE722: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001DE728u); RECOMP_ABI_CALL(0x001DDDC0u, sub_001DDDC0); /* call 0x001DDDC0 */

loc_001DE728: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DE72B: ;
    PUSH32(esp, 0x66);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001DE733u); RECOMP_ABI_CALL(0x00238170u, sub_00238170); /* call 0x00238170 */

loc_001DE733: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DE754; /* je: equal / zero */

loc_001DE73A: ;
    edx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001DE750; /* jg: greater (signed >) */

loc_001DE745: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001DE74Du); RECOMP_ABI_CALL(0x001DEB10u, sub_001DEB10); /* call 0x001DEB10 */

loc_001DE74D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DE750: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x10;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DE754: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DE760
 * Original: 0x001DE760 - 0x001DE7ED (141 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DE760: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(eax * 4 + 0x2FBBA0);
    MEM32(esp + 0xC) = 0;
    eax = MEM32(ebx);
    edx = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DE79B; /* jae: above or equal (unsigned >=) */

loc_001DE789: ;
    /* nop */

loc_001DE790: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DE7B4; /* je: equal / zero */

loc_001DE794: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DE790; /* jb: below (unsigned <) */

loc_001DE79B: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FBA40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DE7ACu); RECOMP_ABI_CALL(0x001DE540u, sub_001DE540); /* call 0x001DE540 */

loc_001DE7AC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001DE7B4: ;
    eax = MEM32(esi + 0xC);
    edx = esp + 0xC;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DE7C7u); RECOMP_ABI_CALL(0x001DE280u, sub_001DE280); /* call 0x001DE280 */

loc_001DE7C7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DE79B; /* je: equal / zero */

loc_001DE7CE: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x2FBA1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DE7E5u); RECOMP_ABI_CALL(0x001DE540u, sub_001DE540); /* call 0x001DE540 */

loc_001DE7E5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DE7F0
 * Original: 0x001DE7F0 - 0x001DE80D (29 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE7F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE7F0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = MEM32(esp + 0xC); /* cmove */
    MEM32(esp + 0xC) = 0x2FBA5C;
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; sub_001DE760(); return; /* tail jmp 0x001DE760 */

}

/**
 * sub_001DE810
 * Original: 0x001DE810 - 0x001DE847 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DE810: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DE823u); RECOMP_ABI_CALL(0x001E0130u, sub_001E0130); /* call 0x001E0130 */

loc_001DE823: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0x2FBA68);
    eax = esi;
    if (CMP_NE(_fa, _fb)) eax = MEM32(esp + 0x24); /* cmovne */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DE83Fu); RECOMP_ABI_CALL(0x001DE760u, sub_001DE760); /* call 0x001DE760 */

loc_001DE83F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DE850
 * Original: 0x001DE850 - 0x001DE89F (79 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001DE850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DE850: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    eax = MEM32(ecx * 4 + 0x2FBBA0);
    edx = MEM32(esp + 0xC);
    ecx = MEM32(edx);
    ecx = MEM32(ecx * 4 + 0x2FBBA0);
    SET_LO8(edx, MEM8(eax + 2));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ecx + 2) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE888; /* jne: not equal / not zero */

loc_001DE872: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x2FBAA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DE882u); RECOMP_ABI_CALL(0x001DE540u, sub_001DE540); /* call 0x001DE540 */

loc_001DE882: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001DE888: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FBA80);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DE899u); RECOMP_ABI_CALL(0x001DE540u, sub_001DE540); /* call 0x001DE540 */

loc_001DE899: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DE8A0
 * Original: 0x001DE8A0 - 0x001DE911 (113 bytes, 40 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE8A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DE8A0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_001DE909; /* ja: above (unsigned >) */

loc_001DE8A9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1DE914); /* switch: 5 entries, 4 targets */
    if (_jt == 0x001DE8B0u) goto loc_001DE8B0;
    if (_jt == 0x001DE8D1u) goto loc_001DE8D1;
    if (_jt == 0x001DE8F2u) goto loc_001DE8F2;
    if (_jt == 0x001DE909u) goto loc_001DE909;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001DE8B0: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x2FB98C);
    PUSH32(esp, edi);
    MEM32(esi) = 4;
    PUSH32(esp, 0x001DE8C3u); RECOMP_ABI_CALL(0x001E26E0u, sub_001E26E0); /* call 0x001E26E0 */

loc_001DE8C3: ;
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DE8D1: ;
    PUSH32(esp, 0x17);
    PUSH32(esp, 0x2FBAC4);
    PUSH32(esp, edi);
    MEM32(esi) = 4;
    PUSH32(esp, 0x001DE8E4u); RECOMP_ABI_CALL(0x001E26E0u, sub_001E26E0); /* call 0x001E26E0 */

loc_001DE8E4: ;
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DE8F2: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(esi + 0xC) = eax;

loc_001DE909: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DE930
 * Original: 0x001DE930 - 0x001DE970 (64 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DE930: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DE950; /* je: equal / zero */

loc_001DE93B: ;
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x44) = edx;
    eax = MEM32(eax + 0x58);
    PUSH32(esp, 1);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    if (!recomp_guest_longjmp(MEM32(esp), MEM32(esp + 4))) { PUSH32(esp, 0x001DE950u); sub_00239390(); } /* longjmp 0x00239390 */

loc_001DE950: ;
    ecx = MEM32(eax + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x28); PUSH32(esp, 0x001DE957u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001DE954u); } /* indirect call */
    }

loc_001DE957: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0x001DE961u); RECOMP_ABI_CALL(0x002391F8u, sub_002391F8); /* call 0x002391F8 */

loc_001DE961: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_001DE970
 * Original: 0x001DE970 - 0x001DE9CC (92 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DE970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DE970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x58);
    edx = ebp + -72;
    PUSH32(esp, esi);
    MEM32(eax + 0x58) = edx;
    eax = ebp + -68;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -72) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    { int _sjv = setjmp(*recomp_setjmp_slot(MEM32(esp))); if (_sjv) { ebp = g_seh_ebp; eax = (uint32_t)_sjv; } else { PUSH32(esp, 0x001DE998u); sub_0023940C(); } } /* setjmp 0x0023940C */

loc_001DE998: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE9BB; /* jne: not equal / not zero */

loc_001DE99F: ;
    ecx = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ebp + 0xC); PUSH32(esp, 0x001DE9AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DE9A7u); } /* indirect call */
    }

loc_001DE9AA: ;
    edx = MEM32(ebp + -72);
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x58) = edx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001DE9BB: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -72);
    MEM32(eax + 0x58) = ecx;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DE9D0
 * Original: 0x001DE9D0 - 0x001DEA4A (122 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DE9D0: ;
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1C);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = ecx;
    ecx = MEM32(eax + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001DEA09; /* je: equal / zero */

loc_001DE9EC: ;
    /* nop */

loc_001DE9F0: ;
    esi = MEM32(ecx + 8);
    edi = MEM32(eax + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = esi;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DE9F0; /* jne: not equal / not zero */

loc_001DEA09: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x14) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DEA3F; /* ja: above (unsigned >) */

loc_001DEA11: ;
    esi = MEM32(ecx + 4);
    edi = MEM32(eax + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = esi;
    esi = MEM32(ecx);
    edi = MEM32(eax + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((4) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = esi;
    esi = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DEA11; /* jbe: below or equal (unsigned <=) */

loc_001DEA3F: ;
    edx = MEM32(eax + 0x14);
    ecx = MEM32(edx);
    POP32(esp, edi);
    MEM32(eax + 0xC) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DEA50
 * Original: 0x001DEA50 - 0x001DEA92 (66 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEA50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEA50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1C);
    eax = ebx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DEA72u); RECOMP_ABI_CALL(0x001E3800u, sub_001E3800); /* call 0x001E3800 */

loc_001DEA72: ;
    MEM32(esi + 0x20) = ebx;
    _fb = (uint32_t)(0xFFFFFFFAu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFFFFFAu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = eax;
    edx = edi;
    POP32(esp, edi);
    MEM32(esi + 0x18) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001DE9D0(); return; /* tail jmp 0x001DE9D0 */

}

/**
 * sub_001DEAA0
 * Original: 0x001DEAA0 - 0x001DEB02 (98 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEAA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DEAA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = edi + edi * 2;
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi + 0x2C));
    ecx = eax + eax * 2;
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DEAC7u); RECOMP_ABI_CALL(0x001E3800u, sub_001E3800); /* call 0x001E3800 */

loc_001DEAC7: ;
    edx = MEM32(esi + 0x14);
    ecx = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = ecx + edx * 8;
    MEM32(esi + 0x14) = eax;
    eax = ZX16(LO16(edi));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    MEM16(esi + 0x2C) = LO16(edi);
    eax = ecx + edx * 8;
    POP32(esp, edi);
    MEM32(esi + 0x28) = ecx;
    MEM32(esi + 0x24) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DEB10
 * Original: 0x001DEB10 - 0x001DEB8E (126 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEB10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEB10: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    ebx = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_001DEB59; /* jg: greater (signed >) */

loc_001DEB25: ;
    edi = eax + eax;
    ecx = edi;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DEB39u); RECOMP_ABI_CALL(0x001E3800u, sub_001E3800); /* call 0x001E3800 */

loc_001DEB39: ;
    MEM32(esi + 0x20) = edi;
    _fb = (uint32_t)(0xFFFFFFFAu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFFAu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    edx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001DE9D0(); return; /* tail jmp 0x001DE9D0 */

loc_001DEB59: ;
    edi = eax + ecx + 5;
    edx = edi;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DEB6Eu); RECOMP_ABI_CALL(0x001E3800u, sub_001E3800); /* call 0x001E3800 */

loc_001DEB6E: ;
    MEM32(esi + 0x20) = edi;
    _fb = (uint32_t)(0xFFFFFFFAu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFFAu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    edx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_001DE9D0(); return; /* tail jmp 0x001DE9D0 */

}

/**
 * sub_001DEB90
 * Original: 0x001DEB90 - 0x001DEC57 (199 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEB90: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x68);
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x68) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001DEC52; /* je: equal / zero */

loc_001DEBA7: ;
    SET_LO8(eax, MEM8(esi + 0x31));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DEC52; /* je: equal / zero */

loc_001DEBB2: ;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x14);
    edx = MEM32(esp + 0x70);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = ebx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x24) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_001DEBE6; /* jne: not equal / not zero */

loc_001DEBDC: ;
    MEM32(esp + 0x6C) = 0;
    goto loc_001DEC00;

loc_001DEBE6: ;
    _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x6C) = eax;

loc_001DEC00: ;
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x140) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x140 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001DEC18; /* jg: greater (signed >) */

loc_001DEC0D: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DEC15u); RECOMP_ABI_CALL(0x001DEB10u, sub_001DEB10); /* call 0x001DEB10 */

loc_001DEC15: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DEC18: ;
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 0x14);
    ecx = esp + 0x10;
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x140;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(eax + 4) = edx;
    PUSH32(esp, esi);
    MEM8(esi + 0x31) = 0;
    { uint32_t _icall_target = MEM32(esp + 0x7C); PUSH32(esp, 0x001DEC35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001DEC31u); } /* indirect call */
    }

loc_001DEC35: ;
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x31) = 1;
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 8) = ecx;
    POP32(esp, ebx);

loc_001DEC52: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DEC60
 * Original: 0x001DEC60 - 0x001DED96 (310 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEC60(void)
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

loc_001DEC60: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((4) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_001DECB5; /* jge: greater or equal (signed >=) */

loc_001DEC76: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 0x18);
    edi = ebp;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001DEC95; /* jg: greater (signed >) */

loc_001DEC8B: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DEC92u); RECOMP_ABI_CALL(0x001DEB10u, sub_001DEB10); /* call 0x001DEB10 */

loc_001DEC92: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DEC95: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001DECA0;

    /* nop */

loc_001DECA0: ;
    edx = MEM32(esi + 8);
    MEM32(edx) = 0;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 8) = ecx;
    if ((_fa != 0)) goto loc_001DECA0; /* jne: not equal / not zero */

loc_001DECB5: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x001DECC4u); RECOMP_ABI_CALL(0x001E2E40u, sub_001E2E40); /* call 0x001E2E40 */

loc_001DECC4: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0xC) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_001DED20; /* jle: less or equal (signed <=) */

loc_001DECD3: ;
    ecx = ebx;
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x28) = ecx;
    goto loc_001DECE4;

loc_001DECE0: ;
    ecx = MEM32(esp + 0x28);

loc_001DECE4: ;
    edi = MEM32(esi + 8);
    ebp = eax + 1;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001DECF8u); RECOMP_ABI_CALL(0x001E3610u, sub_001E3610); /* call 0x001E3610 */

loc_001DECF8: ;
    ecx = MEM32(edi);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(esp + 0x34);
    MEM32(eax + 0xC) = ecx;
    eax = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x28) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001DECE0; /* jl: less (signed <) */

loc_001DED1C: ;
    edi = MEM32(esp + 0xC);

loc_001DED20: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x2FB848);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = 4;
    PUSH32(esp, 0x001DED35u); RECOMP_ABI_CALL(0x001E26E0u, sub_001E26E0); /* call 0x001E26E0 */

loc_001DED35: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x001DED45u); RECOMP_ABI_CALL(0x001E3090u, sub_001E3090); /* call 0x001E3090 */

loc_001DED45: ;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    MEM32(eax) = 3;
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEMD(eax + 8) = fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(esi + 8);
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp;
    MEM32(esi + 8) = ebp;
    MEM32(eax + 8) = edi;
    MEM32(eax) = 5;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0x10;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001DED87; /* jg: greater (signed >) */

loc_001DED7C: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DED84u); RECOMP_ABI_CALL(0x001DEB10u, sub_001DEB10); /* call 0x001DEB10 */

loc_001DED84: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DED87: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 8) = eax;
    POP32(esp, ebx);
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
 * sub_001DEDA0
 * Original: 0x001DEDA0 - 0x001DEE23 (131 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEDA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DEDA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xE);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DEDABu); RECOMP_ABI_CALL(0x001E00E0u, sub_001E00E0); /* call 0x001E00E0 */

loc_001DEDAB: ;
    ecx = MEM32(esi + 0x1C);
    ebx = eax;
    eax = MEM32(ebx);
    ebp = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DEDCD; /* je: equal / zero */

loc_001DEDBE: ;
    PUSH32(esp, 0x2FBAEC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DEDCAu); RECOMP_ABI_CALL(0x001DE760u, sub_001DE760); /* call 0x001DE760 */

loc_001DEDCA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DEDCD: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DEDEC; /* jbe: below or equal (unsigned <=) */

loc_001DEDD4: ;
    ecx = MEM32(eax + -16);
    MEM32(eax) = ecx;
    edx = MEM32(eax + -8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(eax + -4);
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DEDD4; /* ja: above (unsigned >) */

loc_001DEDEC: ;
    edx = MEM32(esi + 0x18);
    _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(esi + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001DEE02; /* jg: greater (signed >) */

loc_001DEDF7: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DEDFFu); RECOMP_ABI_CALL(0x001DEB10u, sub_001DEB10); /* call 0x001DEB10 */

loc_001DEDFF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DEE02: ;
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = edx;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    edx = MEM32(ebx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ebx + 0xC);
    POP32(esp, ebp);
    MEM32(eax + 0xC) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DEE30
 * Original: 0x001DEE30 - 0x001DEFCD (413 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001DEE30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DEE30: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi);
    ebp = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DEE50; /* je: equal / zero */

loc_001DEE49: ;
    PUSH32(esp, 0x001DEE4Eu); RECOMP_ABI_CALL(0x001DEDA0u, sub_001DEDA0); /* call 0x001DEDA0 */

loc_001DEE4E: ;
    edi = eax;

loc_001DEE50: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x24);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DEE94; /* jne: not equal / not zero */

loc_001DEE5D: ;
    SET_LO16(eax, MEM16(esi + 0x2C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x1000 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DEE6F; /* jbe: below or equal (unsigned <=) */

loc_001DEE67: ;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DEE6Fu); RECOMP_ABI_CALL(0x001DE930u, sub_001DE930); /* call 0x001DE930 */

loc_001DEE6F: ;
    ecx = ZX16(LO16(eax));
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DEE7Bu); RECOMP_ABI_CALL(0x001DEAA0u, sub_001DEAA0); /* call 0x001DEAA0 */

loc_001DEE7B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi + 0x2C)) & 0xFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x2C), 0x1000 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DEE94; /* jbe: below or equal (unsigned <=) */

loc_001DEE86: ;
    PUSH32(esp, 0x2FBADC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DEE91u); RECOMP_ABI_CALL(0x001DE540u, sub_001DE540); /* call 0x001DE540 */

loc_001DEE91: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DEE94: ;
    eax = MEM32(edi + 8);
    SET_LO8(ecx, MEM8(eax + 6));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DEF57; /* jne: not equal / not zero */

loc_001DEEA2: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xC);
    SET_LO8(eax, MEM8(ebx + 0x46));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DEEBD; /* je: equal / zero */

loc_001DEEAD: ;
    eax = ZX8(MEM8(ebx + 0x45));
    edx = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001DEEBAu); RECOMP_ABI_CALL(0x001DEC60u, sub_001DEC60); /* call 0x001DEC60 */

loc_001DEEBA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DEEBD: ;
    eax = ZX8(MEM8(ebx + 0x47));
    edx = MEM32(esi + 8);
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001DEEDC; /* jg: greater (signed >) */

loc_001DEED2: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DEED9u); RECOMP_ABI_CALL(0x001DEB10u, sub_001DEB10); /* call 0x001DEB10 */

loc_001DEED9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DEEDC: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = eax;
    edx = ecx + ebp + 0x10;
    MEM32(eax) = edx;
    ecx = MEM32(esi + 0x14);
    ecx = MEM32(ecx);
    MEM32(esi + 0xC) = ecx;
    edx = ZX8(MEM8(ebx + 0x47));
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    ecx = MEM32(ebx + 0xC);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 8) = 8;
    edx = MEM32(esi + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DEF4A; /* jae: above or equal (unsigned >=) */

loc_001DEF20: ;
    ecx = 0x10;
    goto loc_001DEF30;

    /* nop */
    edi = edi;

loc_001DEF30: ;
    edx = MEM32(esi + 8);
    MEM32(edx) = 0;
    ebx = MEM32(esi + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = ebx;
    edi = MEM32(eax + 4);
    edx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DEF30; /* jb: below (unsigned <) */

loc_001DEF4A: ;
    eax = MEM32(eax + 4);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001DEF57: ;
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x140) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x140 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001DEF70; /* jg: greater (signed >) */

loc_001DEF65: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DEF6Du); RECOMP_ABI_CALL(0x001DEB10u, sub_001DEB10); /* call 0x001DEB10 */

loc_001DEF6D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DEF70: ;
    edx = MEM32(esi + 0x14);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = edx;
    eax = edx;
    edx = MEM32(esi + 0x1C);
    ecx = edx + ebp + 0x10;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(esi + 8);
    MEM32(esi + 0xC) = ecx;
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x140;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 1;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x30), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DEFB2; /* je: equal / zero */

loc_001DEFA5: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DEFAFu); RECOMP_ABI_CALL(0x001DEB90u, sub_001DEB90); /* call 0x001DEB90 */

loc_001DEFAF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DEFB2: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + -8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x001DEFBCu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001DEFB9u); } /* indirect call */
    }

loc_001DEFBC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax;
    eax = MEM32(esi + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001DEFD0
 * Original: 0x001DEFD0 - 0x001DF02E (94 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DEFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DEFD0: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1C);
    PUSH32(esp, 0xFFFFFFFFu);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001DEFE2u); RECOMP_ABI_CALL(0x001DEB90u, sub_001DEB90); /* call 0x001DEB90 */

loc_001DEFE2: ;
    eax = MEM32(esi + 0x14);
    SET_LO8(ecx, MEM8(eax + 8));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DF027; /* jne: not equal / not zero */

loc_001DEFF0: ;
    ecx = eax;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DF021; /* je: equal / zero */

loc_001DEFF9: ;
    /* nop */

loc_001DF000: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, 0xFFFFFFFFu);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    MEM32(eax + 0x14) = edx;
    PUSH32(esp, 0x001DF014u); RECOMP_ABI_CALL(0x001DEB90u, sub_001DEB90); /* call 0x001DEB90 */

loc_001DF014: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DF000; /* jne: not equal / not zero */

loc_001DF021: ;
    eax = MEM32(esi + 0x14);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001DF027: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DF030
 * Original: 0x001DF030 - 0x001DF0A3 (115 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF030: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x30), 2 (8-bit) */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001DF046; /* je: equal / zero */

loc_001DF041: ;
    PUSH32(esp, 0x001DF046u); RECOMP_ABI_CALL(0x001DEFD0u, sub_001DEFD0); /* call 0x001DEFD0 */

loc_001DF046: ;
    edi = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0xC);
    ebx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFE8u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi;
    MEM32(esi + 0x14) = edi;
    edx = MEM32(edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + 0xC) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001DF09C; /* je: equal / zero */

loc_001DF064: ;
    PUSH32(esp, ebp);

loc_001DF065: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001DF087; /* jae: above or equal (unsigned >=) */

loc_001DF06A: ;
    edx = eax;
    ebp = MEM32(edx);
    edi = ecx;
    MEM32(edi) = ebp;
    ebp = MEM32(edx + 8);
    MEM32(edi + 8) = ebp;
    edx = MEM32(edx + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0xC) = edx;
    if ((_fa != 0)) goto loc_001DF065; /* jne: not equal / not zero */

loc_001DF087: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_LE(_fas, _fbs)) goto loc_001DF09C; /* jle: less or equal (signed <=) */

loc_001DF08C: ;
    /* nop */

loc_001DF090: ;
    MEM32(ecx) = 0;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001DF090; /* jne: not equal / not zero */

loc_001DF09C: ;
    POP32(esp, edi);
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DF0B0
 * Original: 0x001DF0B0 - 0x001DF1B5 (261 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DF0B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM16(esi + 0x2E) = MEM16(esi + 0x2E) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x2E)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(esi + 0x2E));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xC8 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DF0D3; /* jb: below (unsigned <) */

loc_001DF0C3: ;
    if (CMP_NE(_fa, _fb)) goto loc_001DF117; /* jne: not equal / not zero */

loc_001DF0C5: ;
    PUSH32(esp, 0x2FBAF4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DF0D0u); RECOMP_ABI_CALL(0x001DE540u, sub_001DE540); /* call 0x001DE540 */

loc_001DF0D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DF0D3: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DF0DEu); RECOMP_ABI_CALL(0x001DEE30u, sub_001DEE30); /* call 0x001DEE30 */

loc_001DF0DE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DF0EE; /* jne: not equal / not zero */

loc_001DF0E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DF0EBu); RECOMP_ABI_CALL(0x001E0E10u, sub_001E0E10); /* call 0x001E0E10 */

loc_001DF0EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DF0EE: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DF0FAu); RECOMP_ABI_CALL(0x001DF030u, sub_001DF030); /* call 0x001DF030 */

loc_001DF0FA: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 0x2E) = MEM16(esi + 0x2E) - 1;
    _fa = (uint32_t)(MEM16(esi + 0x2E)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(eax + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DF115; /* jb: below (unsigned <) */

loc_001DF10C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DF112u); RECOMP_ABI_CALL(0x001DFFD0u, sub_001DFFD0); /* call 0x001DFFD0 */

loc_001DF112: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DF115: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DF117: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xE1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xE1 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001DF0D3; /* jb: below (unsigned <) */

loc_001DF11D: ;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DF125u); RECOMP_ABI_CALL(0x001DE930u, sub_001DE930); /* call 0x001DE930 */

loc_001DF125: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    eax = MEM32(esp + 8);
    eax = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x28) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DF158; /* jne: not equal / not zero */

loc_001DF143: ;
    ecx = MEM32(edi + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DF153u); RECOMP_ABI_CALL(0x001DEE30u, sub_001DEE30); /* call 0x001DEE30 */

loc_001DF153: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001DF19A;

loc_001DF158: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DF194; /* je: equal / zero */

loc_001DF160: ;
    edx = MEM32(ecx + -12);
    ecx = MEM32(edi + 8);
    PUSH32(esp, esi);
    esi = MEM32(edx + -4);
    esi = esi >> 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi & 0x1FF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DF181u); RECOMP_ABI_CALL(0x001DF030u, sub_001DF030); /* call 0x001DF030 */

loc_001DF181: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_001DF19A; /* jl: less (signed <) */

loc_001DF189: ;
    edx = MEM32(edi + 0x14);
    eax = MEM32(edx + 4);
    MEM32(edi + 8) = eax;
    goto loc_001DF19A;

loc_001DF194: ;
    edx = edx & 0xFFFFFFEFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 8) = edx;

loc_001DF19A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DF1A0u); RECOMP_ABI_CALL(0x001E0E10u, sub_001E0E10); /* call 0x001E0E10 */

loc_001DF1A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DF1B3; /* je: equal / zero */

loc_001DF1A7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DF1B0u); RECOMP_ABI_CALL(0x001DF030u, sub_001DF030); /* call 0x001DF030 */

loc_001DF1B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DF1B3: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DF1C0
 * Original: 0x001DF1C0 - 0x001DF216 (86 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DF1C0: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = edx;
    MEM32(esi + 8) = edi;
    MEM32(edi) = 4;
    ebx = eax + 1;

loc_001DF1D5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001DF1D5; /* jne: not equal / not zero */

loc_001DF1DC: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DF1E6u); RECOMP_ABI_CALL(0x001E26E0u, sub_001E26E0); /* call 0x001E26E0 */

loc_001DF1E6: ;
    MEM32(edi + 8) = eax;
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0x10;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001DF206; /* jg: greater (signed >) */

loc_001DF1FB: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DF203u); RECOMP_ABI_CALL(0x001DEB10u, sub_001DEB10); /* call 0x001DEB10 */

loc_001DF203: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DF206: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DF220
 * Original: 0x001DF220 - 0x001DF2E1 (193 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF220: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM16(esi + 0x2E)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x2E), 0 (16-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x14);
    MEM32(esp + 8) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_001DF243; /* jbe: below or equal (unsigned <=) */

loc_001DF235: ;
    PUSH32(esp, 0x2FBB24);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DF240u); RECOMP_ABI_CALL(0x001DE540u, sub_001DE540); /* call 0x001DE540 */

loc_001DF240: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DF243: ;
    SET_LO8(ecx, MEM8(edi + 8));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DF2D6; /* je: equal / zero */

loc_001DF250: ;
    _fa = (uint32_t)(MEM8(edi + -16)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + -16), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001DF263; /* je: equal / zero */

loc_001DF255: ;
    PUSH32(esp, 0x2FBB08);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DF260u); RECOMP_ABI_CALL(0x001DE540u, sub_001DE540); /* call 0x001DE540 */

loc_001DF260: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DF263: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    eax = ebx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001DF2C5; /* jbe: below or equal (unsigned <=) */

loc_001DF27D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001DF2BD; /* jle: less or equal (signed <=) */

loc_001DF281: ;
    edx = ebx;
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebp);
    goto loc_001DF290;

    /* nop */

loc_001DF290: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    ebp = MEM32(eax + edx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx + 8) = ebp;
    eax = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = eax;
    if ((_fa != 0)) goto loc_001DF290; /* jne: not equal / not zero */

loc_001DF2B4: ;
    eax = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x10);
    POP32(esp, ebp);

loc_001DF2BD: ;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = ecx;

loc_001DF2C5: ;
    eax = MEM32(edi + 8);
    eax = eax | 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    MEM32(edi + 8) = eax;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001DF2D6: ;
    MEM32(edi + 8) = MEM32(edi + 8) | 0x10;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001DF2F0
 * Original: 0x001DF2F0 - 0x001DF379 (137 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DF2F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x20) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_001DF30A; /* jb: below (unsigned <) */

loc_001DF301: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DF307u); RECOMP_ABI_CALL(0x001DFFD0u, sub_001DFFD0); /* call 0x001DFFD0 */

loc_001DF307: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DF30A: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DF324; /* je: equal / zero */

loc_001DF315: ;
    edx = eax + 4;
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DF322u); RECOMP_ABI_CALL(0x001E88A0u, sub_001E88A0); /* call 0x001E88A0 */

loc_001DF322: ;
    goto loc_001DF331;

loc_001DF324: ;
    edx = MEM32(eax);
    ecx = eax + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DF331u); RECOMP_ABI_CALL(0x001E7D70u, sub_001E7D70); /* call 0x001E7D70 */

loc_001DF331: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    eax = esi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DF342u); RECOMP_ABI_CALL(0x001E27F0u, sub_001E27F0); /* call 0x001E27F0 */

loc_001DF342: ;
    MEM32(eax + 0xC) = edi;
    ecx = MEM32(esi + 8);
    MEM32(ecx) = 6;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0x10;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001DF36E; /* jg: greater (signed >) */

loc_001DF363: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DF36Bu); RECOMP_ABI_CALL(0x001DEB10u, sub_001DEB10); /* call 0x001DEB10 */

loc_001DF36B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DF36E: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DF380
 * Original: 0x001DF380 - 0x001DF3FE (126 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DF380: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = MEM32(edi + 0x1C);
    esi = MEM32(edi + 8);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x28);
    PUSH32(esp, 0x1DF2F0);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x001DF3C2u); RECOMP_ABI_CALL(0x001DE970u, sub_001DE970); /* call 0x001DE970 */

loc_001DF3C2: ;
    ecx = MEM32(esp + 0x1C);
    ebx = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DF3D6u); RECOMP_ABI_CALL(0x001E3800u, sub_001E3800); /* call 0x001E3800 */

loc_001DF3D6: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 0;
    eax = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001DF3F7; /* je: equal / zero */

loc_001DF3EB: ;
    ecx = MEM32(edi + 0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001DF3F5u); RECOMP_ABI_CALL(0x001DE8A0u, sub_001DE8A0); /* call 0x001DE8A0 */

loc_001DF3F5: ;
    eax = ebx;

loc_001DF3F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DF400
 * Original: 0x001DF400 - 0x001DF44A (74 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001DF400: ;
    eax = MEM32(ecx + 0x20);
    edx = MEM32(ecx + 0x1C);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM16(ecx + 0x2C)) & 0xFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x2C), 0x1000 (16-bit) */
    eax = eax + edx + -16;
    MEM32(ecx + 0x18) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001DF449; /* jbe: below or equal (unsigned <=) */

loc_001DF418: ;
    eax = MEM32(ecx + 0x28);
    edx = MEM32(ecx + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx + eax + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001DF449; /* jge: greater or equal (signed >=) */

loc_001DF43B: ;
    PUSH32(esp, 0x1000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001DF446u); RECOMP_ABI_CALL(0x001DEAA0u, sub_001DEAA0); /* call 0x001DEAA0 */

loc_001DF446: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001DF449: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001DF450
 * Original: 0x001DF450 - 0x001DF4E9 (153 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF450: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x28) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001DF47E; /* jne: not equal / not zero */

loc_001DF45E: ;
    eax = MEM32(esi + 8);
    edi = MEM32(esi + 0xC);
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001DF491; /* jl: less (signed <) */

loc_001DF471: ;
    edx = 0x2FBB80;
    PUSH32(esp, 0x001DF47Bu); RECOMP_ABI_CALL(0x001DF1C0u, sub_001DF1C0); /* call 0x001DF1C0 */

loc_001DF47B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DF47E: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DF491; /* jne: not equal / not zero */

loc_001DF484: ;
    edx = 0x2FBB58;
    PUSH32(esp, 0x001DF48Eu); RECOMP_ABI_CALL(0x001DF1C0u, sub_001DF1C0); /* call 0x001DF1C0 */

loc_001DF48E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DF491: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esi + 0x31));
    PUSH32(esp, ebp);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1DF130);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001DF4A6u); RECOMP_ABI_CALL(0x001DE970u, sub_001DE970); /* call 0x001DE970 */

loc_001DF4A6: ;
    ebp = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DF4E2; /* je: equal / zero */

loc_001DF4AF: ;
    eax = MEM32(esi + 0x28);
    MEM32(esi + 0x14) = eax;
    edx = MEM32(eax);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esi + 0xC) = edx;
    MEM16(esi + 0x2E) = 0;
    PUSH32(esp, 0x001DF4C9u); RECOMP_ABI_CALL(0x001E28A0u, sub_001E28A0); /* call 0x001E28A0 */

loc_001DF4C9: ;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp;
    edi = esi;
    PUSH32(esp, 0x001DF4D8u); RECOMP_ABI_CALL(0x001DE8A0u, sub_001DE8A0); /* call 0x001DE8A0 */

loc_001DF4D8: ;
    ecx = esi;
    MEM8(esi + 0x31) = LO8(ebx);
    PUSH32(esp, 0x001DF4E2u); RECOMP_ABI_CALL(0x001DF400u, sub_001DF400); /* call 0x001DF400 */

loc_001DF4E2: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001DF4F0
 * Original: 0x001DF4F0 - 0x001DF596 (166 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF4F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF4F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    SET_LO16(eax, MEM16(edi + 0x2E));
    SET_LO8(ecx, MEM8(edi + 0x31));
    edx = MEM32(edi + 0x28);
    ebx = MEM32(edi + 0x14);
    esi = MEM32(edi + 0x5C);
    MEM16(esp + 0x10) = LO16(eax);
    eax = MEM32(esp + 0x24);
    MEM8(esp + 0x1C) = LO8(ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = esi;
    MEM32(edi + 0x5C) = edx;
    PUSH32(esp, 0x001DF531u); RECOMP_ABI_CALL(0x001DE970u, sub_001DE970); /* call 0x001DE970 */

loc_001DF531: ;
    ebp = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001DF589; /* je: equal / zero */

loc_001DF53A: ;
    esi = MEM32(edi + 0x1C);
    _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001DF548u); RECOMP_ABI_CALL(0x001E28A0u, sub_001E28A0); /* call 0x001E28A0 */

loc_001DF548: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    eax = ebp;
    PUSH32(esp, 0x001DF554u); RECOMP_ABI_CALL(0x001DE8A0u, sub_001DE8A0); /* call 0x001DE8A0 */

loc_001DF554: ;
    eax = MEM32(edi + 0x28);
    SET_LO16(edx, MEM16(esp + 0x10));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi + 0x2E) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0x1C));
    MEM32(edi + 0x14) = eax;
    ecx = MEM32(eax);
    MEM32(edi + 0xC) = ecx;
    ecx = edi;
    MEM8(edi + 0x31) = LO8(edx);
    PUSH32(esp, 0x001DF578u); RECOMP_ABI_CALL(0x001DF400u, sub_001DF400); /* call 0x001DF400 */

loc_001DF578: ;
    eax = MEM32(esp + 0x14);
    MEM32(edi + 0x5C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001DF589: ;
    MEM32(edi + 0x5C) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001DF5A0
 * Original: 0x001DF5A0 - 0x001DF5F1 (81 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DF5A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DF5A0: ;
    MEM8(eax + 5) = MEM8(eax + 5) | 1;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = ZX8(MEM8(eax + 4));
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001DF5F0; /* ja: above (unsigned >) */

loc_001DF5B0: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x1DF5F4); /* switch: 5 entries, 5 targets */
    if (_jt == 0x001DF5B7u) goto loc_001DF5B7;
    if (_jt == 0x001DF5D1u) goto loc_001DF5D1;
    if (_jt == 0x001DF5D9u) goto loc_001DF5D9;
    if (_jt == 0x001DF5E1u) goto loc_001DF5E1;
    if (_jt == 0x001DF5E9u) goto loc_001DF5E9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001DF5B7: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(0x11) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 5), 0x11 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001DF5F0; /* jne: not equal / not zero */

loc_001DF5C0: ;
    MEM8(eax + 5) = MEM8(eax + 5) | 1;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = ZX8(MEM8(eax + 4));
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001DF5B0; /* jbe: below or equal (unsigned <=) */

loc_001DF5D0: ;
    esp += 4; return; /* ret */

loc_001DF5D1: ;
    ecx = MEM32(edx);
    MEM32(eax + 8) = ecx;
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

loc_001DF5D9: ;
    ecx = MEM32(edx);
    MEM32(eax + 0x18) = ecx;
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

loc_001DF5E1: ;
    ecx = MEM32(edx);
    MEM32(eax + 0x54) = ecx;
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

loc_001DF5E9: ;
    ecx = MEM32(edx);
    MEM32(eax + 0x40) = ecx;
    MEM32(edx) = eax;

loc_001DF5F0: ;
    esp += 4; return; /* ret */

}
