/**
 * Mercenaries - Recompiled code chunk 13
 * Functions: 250 (0x0009CB70 - 0x000A71B0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0009CB70
 * Original: 0x0009CB70 - 0x0009CCFD (397 bytes, 115 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0009CB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0009CB70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x98));
    esp = esp - 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x60);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CB87u); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_0009CB87: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CBB2; /* je: equal / zero */

loc_0009CB90: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009CB97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CB94u); } /* indirect call */
    }

loc_0009CB97: ;
    ecx = MEM32(0x30D358);
    esi = eax;
    eax = MEM32(0x30D354);
    _cf = 0; /* logical op clears CF */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
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
    goto loc_0009CBB4;

loc_0009CBB2: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009CBB4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CCDC; /* je: equal / zero */

loc_0009CBD1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0009CBD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CBD5u); } /* indirect call */
    }

loc_0009CBD8: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0009CCDC; /* jne: not equal / not zero */

loc_0009CBEE: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x284); PUSH32(esp, 0x0009CBF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CBF2u); } /* indirect call */
    }

loc_0009CBF8: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CC56; /* je: equal / zero */

loc_0009CBFE: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4313EBF2);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CC0Fu); RECOMP_ABI_CALL(0x00061FF0u, sub_00061FF0); /* call 0x00061FF0 */

loc_0009CC0F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CC56; /* je: equal / zero */

loc_0009CC13: ;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1F9229B7);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CC24u); RECOMP_ABI_CALL(0x00061FF0u, sub_00061FF0); /* call 0x00061FF0 */

loc_0009CC24: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CC56; /* je: equal / zero */

loc_0009CC28: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x94); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2E6860); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    goto loc_0009CC59;

loc_0009CC56: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */

loc_0009CC59: ;
    SET_LO8(eax, MEM8(esi + 0x325));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CC8F; /* je: equal / zero */

loc_0009CC63: ;
    SET_LO8(eax, MEM8(esi + 0x2E2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CC8F; /* je: equal / zero */

loc_0009CC6D: ;
    xmm0 = XMM_SCALAR(MEMF(0x30DB80)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    goto loc_0009CCDC;

loc_0009CC8F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x284); PUSH32(esp, 0x0009CC99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CC93u); } /* indirect call */
    }

loc_0009CC99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CCDC; /* je: equal / zero */

loc_0009CC9D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x284); PUSH32(esp, 0x0009CCABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CCA5u); } /* indirect call */
    }

loc_0009CCAB: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CCB2u); RECOMP_ABI_CALL(0x00060B90u, sub_00060B90); /* call 0x00060B90 */

loc_0009CCB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAA9AE52Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAA9AE52Cu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0009CCDC; /* jne: not equal / not zero */

loc_0009CCB9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x3235E0)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_0009CCDC: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(esp + 0x14);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    MEM32(ecx + 8) = edx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009CD00
 * Original: 0x0009CD00 - 0x0009CF49 (585 bytes, 129 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009CD00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009CD00: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x60);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009CD11u); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_0009CD11: ;
    ebp = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CD3D; /* je: equal / zero */

loc_0009CD1A: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009CD22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CD1Fu); } /* indirect call */
    }

loc_0009CD22: ;
    ecx = MEM32(0x30D358);
    edi = eax;
    eax = MEM32(0x30D354);
    _cf = 0; /* logical op clears CF */
    edi = edi & ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi = ~edi;
    _cf = 0; /* logical op clears CF */
    edi = edi & ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0009CD3F;

loc_0009CD3D: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009CD3F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CD8E; /* je: equal / zero */

loc_0009CD43: ;
    eax = edi + 0xB0;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, 0x0009CD52u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009CD52: ;
    ecx = MEM32(esi + 0x40);
    MEM32(esi + 0x11C) = ecx;
    edx = MEM32(esi + 0x44);
    MEM32(esi + 0x120) = edx;
    eax = MEM32(esi + 0x48);
    MEM32(esi + 0x124) = eax;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x22C); PUSH32(esp, 0x0009CD77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CD71u); } /* indirect call */
    }

loc_0009CD77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x158)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x158) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009CD87; /* je: equal / zero */

loc_0009CD7F: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0009CD87u); RECOMP_ABI_CALL(0x0009B640u, sub_0009B640); /* call 0x0009B640 */

loc_0009CD87: ;
    ecx = esi;
    PUSH32(esp, 0x0009CD8Eu); RECOMP_ABI_CALL(0x0009CA60u, sub_0009CA60); /* call 0x0009CA60 */

loc_0009CD8E: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    ecx = esi + 0x70;
    PUSH32(esp, 0x0009CD9Au); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009CD9A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    MEMF(esi + 0x140) = xmm1.f[0]; /* movss */
    MEM8(esi + 0x15C) = 0;
    MEMF(esi + 0x118) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x15D) = 1;
    MEMF(esi + 0x160) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x134) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x138) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x13C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x128) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x12C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x130) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x50);
    MEMF(esi + 0xF8) = xmm1.f[0]; /* movss */
    MEM8(esi + 0x17C) = 0;
    PUSH32(esp, 0x0009CE12u); RECOMP_ABI_CALL(0x00097EB0u, sub_00097EB0); /* call 0x00097EB0 */

loc_0009CE12: ;
    MEMF(esi + 0x178) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi + 0x50);
    MEMF(esi + 0x174) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x190) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x194) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    ecx = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0009CE6Bu); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_0009CE6B: ;
    fp_top() = -fp_top(); /* fchs */
    eax = MEM32(esi + 0x158);
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x714DAA7A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x714DAA7A (32-bit) */
    _cf = (int)(_fa < _fb);
    MEMF(esi + 0x10C) = (float)fp_top(); /* fst */
    MEMF(esi + 0x110) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CE9A; /* je: equal / zero */

loc_0009CE8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21C08419) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x21C08419 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009CE9A; /* je: equal / zero */

loc_0009CE91: ;
    MEM8(esi + 0x15C) = 1;
    goto loc_0009CEA1;

loc_0009CE9A: ;
    MEM8(esi + 0x15C) = 0;

loc_0009CEA1: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC8A0)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esi + 0x198) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x19C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1A0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM8(esi + 0x154) = 1;
    MEMF(esi + 0x150) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x14C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x184) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x1A4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1A8) = xmm2.f[0]; /* movss */
    edx = MEM32(esi + 0x40);
    MEM32(esi + 0x1B0) = edx;
    eax = MEM32(esi + 0x44);
    MEM32(esi + 0x1B4) = eax;
    ecx = MEM32(esi + 0x48);
    MEM32(esi + 0x1B8) = ecx;
    MEM32(esi + 0x1BC) = edx;
    eax = MEM32(esi + 0x1B4);
    MEM32(esi + 0x1C0) = eax;
    ecx = MEM32(esi + 0x1B8);
    MEM32(esi + 0x1C4) = ecx;
    POP32(esp, edi);
    MEMF(esi + 0x1AC) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
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
 * sub_0009CF50
 * Original: 0x0009CF50 - 0x0009D33F (1007 bytes, 277 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0009CF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0009CF50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x124));
    esp = esp - 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x60);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CF6Cu); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_0009CF6C: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009CF96; /* je: equal / zero */

loc_0009CF75: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009CF7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009CF79u); } /* indirect call */
    }

loc_0009CF7C: ;
    ebx = MEM32(0x30D354);
    esi = eax;
    _cf = 0; /* logical op clears CF */
    esi = esi & MEM32(0x30D358);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ebx));
    esi = esi - ebx;
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
    goto loc_0009CF98;

loc_0009CF96: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009CF98: ;
    PUSH32(esp, 0x6438E0);
    ecx = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CFA6u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009CFA6: ;
    edi = MEM32(ebp + 8);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CFB0u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_0009CFB0: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0xF4;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CFC6u); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_0009CFC6: ;
    PUSH32(esp, eax);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CFD4u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_0009CFD4: ;
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    ecx = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CFE5u); RECOMP_ABI_CALL(0x00044FF0u, sub_00044FF0); /* call 0x00044FF0 */

loc_0009CFE5: ;
    edx = esp + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009CFF5u); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_0009CFF5: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    ebx = MEM32(ebp + 0xC);
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x3C) = ecx;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    MEM32(esp + 0x44) = edx;
    PUSH32(esp, ebx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x50) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D020u); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_0009D020: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x34) = ecx;
    ecx = esp + 0x24;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x38) = edx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0009D044u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009D041u); } /* indirect call */
    }

loc_0009D044: ;
    edx = MEM32(eax + 8);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D055u); RECOMP_ABI_CALL(0x001F16C0u, sub_001F16C0); /* call 0x001F16C0 */

loc_0009D055: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x54;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0009D064u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009D061u); } /* indirect call */
    }

loc_0009D064: ;
    ecx = MEM32(esp + 0x5C);
    edx = MEM32(esp + 0x54);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D073u); RECOMP_ABI_CALL(0x001F1530u, sub_001F1530); /* call 0x001F1530 */

loc_0009D073: ;
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D08Eu); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_0009D08E: ;
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x10) = eax;
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    ecx = esp + 0xA4;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0009D0E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009D0E6u); } /* indirect call */
    }

loc_0009D0E9: ;
    edx = esp + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D0F9u); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_0009D0F9: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x10) = ecx;
    ecx = esp + 0x10;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D11Au); RECOMP_ABI_CALL(0x001F88A0u, sub_001F88A0); /* call 0x001F88A0 */

loc_0009D11A: ;
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0009D142; /* jbe: below or equal (unsigned <=) */

loc_0009D136: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_0009D142: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC090); /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009D15F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009D157: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    goto loc_0009D178;

loc_0009D15F: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0009D178; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_0009D172: ;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */

loc_0009D178: ;
    esi = MEM32(esp + 0x20);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x190)); /* fsub dword ptr [esi + 0x190] */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x3C); /* subss */
    edx = esp + 0xC;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x190)); /* fadd dword ptr [esi + 0x190] */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x40); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x44); /* subss */
    eax = esp + 0x20;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D1D2u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_0009D1D2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    ecx = MEM32(esp + 0x28);
    xmm5 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    PUSH32(esp, ecx);
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x1C;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x20); /* subss */
    xmm4 = xmm1; /* movaps */
    PUSH32(esp, edx);
    eax = esp + 0x34;
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, eax);
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D245u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_0009D245: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    xmm1 = xmm0; /* movaps */
    edx = esp + 0x40;
    xmm5 = xmm2; /* movaps */
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    PUSH32(esp, eax);
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D2A1u); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_0009D2A1: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x10) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(esp + 0x14) = edx;
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(esp + 0x18) = eax;
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    PUSH32(esp, eax);
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D2F0u); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_0009D2F0: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x30) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(ebx) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x34) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x38) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(ebx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x190) = xmm0.f[0]; /* movss */
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
 * sub_0009D340
 * Original: 0x0009D340 - 0x0009D62C (748 bytes, 200 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0009D340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0009D340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x144));
    esp = esp - 0x144;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x60);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D35Au); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_0009D35A: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D385; /* je: equal / zero */

loc_0009D363: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009D36Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009D367u); } /* indirect call */
    }

loc_0009D36A: ;
    ecx = MEM32(0x30D358);
    esi = eax;
    eax = MEM32(0x30D354);
    _cf = 0; /* logical op clears CF */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
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
    goto loc_0009D387;

loc_0009D385: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009D387: ;
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D397u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009D397: ;
    ecx = esp + 0x110;
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D3A8u); RECOMP_ABI_CALL(0x00044FF0u, sub_00044FF0); /* call 0x00044FF0 */

loc_0009D3A8: ;
    ecx = MEM32(esp + 0x58);
    edx = MEM32(esp + 0x50);
    eax = MEM32(esp + 0x54);
    edi = MEM32(ebp + 0xC);
    MEM32(esp + 0x40) = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x94;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D3D0u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009D3D0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0009D3D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009D3D4u); } /* indirect call */
    }

loc_0009D3D7: ;
    fp_push(MEMF(0x2DC340)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0009D3FA; /* jbe: below or equal (unsigned <=) */

loc_0009D3E5: ;
    eax = MEM32(esi);
    ecx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0009D3F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009D3EEu); } /* indirect call */
    }

loc_0009D3F1: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0009D3F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009D3F5u); } /* indirect call */
    }

loc_0009D3F8: ;
    fp_pop(); /* fstp st(0) */

loc_0009D3FA: ;
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D403u); RECOMP_ABI_CALL(0x001F88A0u, sub_001F88A0); /* call 0x001F88A0 */

loc_0009D403: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebx + 0x190)); /* fld float */
    ecx = esp + 0x10;
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC3C4)); /* fmul dword ptr [0x2dc3c4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 0x190)); /* fadd dword ptr [ebx + 0x190] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x80)); /* fsub dword ptr [esp + 0x80] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x84)); /* fsub dword ptr [esp + 0x84] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x88)); /* fsub dword ptr [esp + 0x88] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D450u); RECOMP_ABI_CALL(0x001F88A0u, sub_001F88A0); /* call 0x001F88A0 */

loc_0009D450: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    ecx = esp + 0x10;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D461u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_0009D461: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    eax = esp + 0x20;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    ecx = esp + 0x28;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D4A2u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_0009D4A2: ;
    edx = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    PUSH32(esp, edx);
    eax = esp + 0x30;
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm5 = xmm4; /* movaps */
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D4F5u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_0009D4F5: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    PUSH32(esp, 0x6438E0);
    ecx = esp + 0xD4;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D548u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009D548: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    eax = esp + 0x114;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D55Au); RECOMP_ABI_CALL(0x0022F74Cu, sub_0022F74C); /* call 0x0022F74C */

loc_0009D55A: ;
    PUSH32(esp, eax);
    ecx = esp + 0xD4;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D56Bu); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_0009D56B: ;
    eax = esp + 0x90;
    PUSH32(esp, eax);
    ecx = esp + 0xD4;
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D585u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_0009D585: ;
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0xD4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D596u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009D596: ;
    ecx = esp + 0xD0;
    PUSH32(esp, ecx);
    ecx = esp + 0x94;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D5AAu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009D5AA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC0)); /* movss */
    esi = MEM32(ebp + 8);
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC8); /* addss */
    edx = esp + 0x90;
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0xC4) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D621u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009D621: ;
    POP32(esp, edi);
    eax = esi;
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
 * sub_0009D630
 * Original: 0x0009D630 - 0x0009D838 (520 bytes, 133 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0009D630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0009D630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xB4));
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x60);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D64Au); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_0009D64A: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D675; /* je: equal / zero */

loc_0009D653: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009D65Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009D657u); } /* indirect call */
    }

loc_0009D65A: ;
    ecx = MEM32(0x30D358);
    esi = eax;
    eax = MEM32(0x30D354);
    _cf = 0; /* logical op clears CF */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
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
    goto loc_0009D677;

loc_0009D675: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009D677: ;
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D687u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009D687: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D81E; /* je: equal / zero */

loc_0009D692: ;
    ecx = ebx + 0xBC;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xE0)) >> 32) & 1);
    ebx = ebx + 0xE0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebx);
    eax = MEM32(ebx + 4);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(ebx + 8);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEM32(esp + 0x28) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(esp + 0x2C) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    eax = esp + 0x74;
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esi);
    xmm2.f[0] = xmm2.f[0] / xmm3.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0009D704u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009D701u); } /* indirect call */
    }

loc_0009D704: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fb = (uint32_t)(0x8C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x8C0)) >> 32) & 1);
    edi = edi + 0x8C0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esp + 0x84;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D73Du); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009D73D: ;
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D74Eu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009D74E: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC084)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x2DDA34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm6.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x68); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x60) = xmm3.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x24); /* subss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x28); /* subss */
    MEMF(esp + 0x68) = xmm2.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x2C); /* subss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D81Eu); RECOMP_ABI_CALL(0x001F64B0u, sub_001F64B0); /* call 0x001F64B0 */

loc_0009D81E: ;
    esi = MEM32(ebp + 8);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D82Du); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009D82D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0009D840
 * Original: 0x0009D840 - 0x0009E3BE (2942 bytes, 691 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0009D840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0009D840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x164));
    esp = esp - 0x164;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x60);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D85Au); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_0009D85A: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009D885; /* je: equal / zero */

loc_0009D863: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009D86Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009D867u); } /* indirect call */
    }

loc_0009D86A: ;
    ecx = MEM32(0x30D358);
    edi = eax;
    eax = MEM32(0x30D354);
    _cf = 0; /* logical op clears CF */
    edi = edi & ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi = ~edi;
    _cf = 0; /* logical op clears CF */
    edi = edi & ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0009D887;

loc_0009D885: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009D887: ;
    eax = edi + 0xB0;
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009D897u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009D897: ;
    ecx = MEM32(esp + 0xA0);
    edx = MEM32(esp + 0xA4);
    eax = MEM32(esp + 0xA8);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(edi);
    ecx = edi;
    MEM32(esp + 0x24) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0009D8BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009D8BCu); } /* indirect call */
    }

loc_0009D8BF: ;
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2DD414)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0009D8D3; /* jbe: below or equal (unsigned <=) */

loc_0009D8CF: ;
    SET_LO8(ecx, 1);
    goto loc_0009D8D5;

loc_0009D8D3: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0009D8D5: ;
    eax = MEM32(esi + 0x158);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7DBFE007) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7DBFE007 (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0009DAF9; /* je: equal / zero */

loc_0009D8E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A54D90F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A54D90F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009DAF9; /* je: equal / zero */

loc_0009D8F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D4DC7FE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D4DC7FE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009DAF9; /* je: equal / zero */

loc_0009D8FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20E0A19F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20E0A19F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009DAF9; /* je: equal / zero */

loc_0009D90A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC285A89) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC285A89 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009D918; /* je: equal / zero */

loc_0009D911: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE063CBAAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE063CBAAu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0009D91F; /* jne: not equal / not zero */

loc_0009D918: ;
    MEM8(esi + 0x15D) = 0;

loc_0009D91F: ;
    SET_LO8(eax, MEM8(esi + 0x15D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm7 = XMM_SCALAR(MEMF(0x2DD3D8)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0009DA26; /* je: equal / zero */

loc_0009D935: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009DA26; /* je: equal / zero */

loc_0009D93D: ;
    fp_push(MEMF(esi + 0x114)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2E51A0)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_0009DA26; /* jb: below (unsigned <) */

loc_0009D955: ;
    fp_push(MEMF(esp + 0x90)); /* fld float */
    xmm6 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    fp_push(MEMF(esp + 0x98)); /* fld float */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    xmm5 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x30DB88)); /* movss */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x160); /* subss */
    xmm2 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x160); /* addss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = MEMF(esi + 0x10C); /* comiss */
    MEMF(esi + 0x160) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009D9BF; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(esi + 0x10C)) */

loc_0009D9B6: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009D9BF; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0009D9BB: ;
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */

loc_0009D9BF: ;
    xmm7 = XMM_SCALAR(MEMF(esi + 0x10C)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009D9DF; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs xmm3.f[0]) */

loc_0009D9CC: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009D9DF; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0009D9D1: ;
    xmm7 = XMM_SCALAR(MEMF(0x2DD3D8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    goto loc_0009D9E7;

loc_0009D9DF: ;
    xmm7 = XMM_SCALAR(MEMF(0x2DD3D8)); /* movss */

loc_0009D9E7: ;
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2DBED0); /* mulss */
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009D9FC; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm2.f[0]) */

loc_0009D9F7: ;
    xmm2 = xmm4; /* movaps */
    goto loc_0009DA04;

loc_0009D9FC: ;
    _fca = xmm2.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009DA04; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm6.f[0]) */

loc_0009DA01: ;
    xmm2 = xmm6; /* movaps */

loc_0009DA04: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x10C); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x10C); /* addss */
    MEMF(esi + 0x10C) = xmm1.f[0]; /* movss */
    goto loc_0009DA31;

loc_0009DA26: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x160) = xmm0.f[0]; /* movss */

loc_0009DA31: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E0A1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x10C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009DA67; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x10C)) */

loc_0009DA42: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x10C)); /* movss */
    /* nop */

loc_0009DA50: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0009DA50; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_0009DA5F: ;
    MEMF(esi + 0x10C) = xmm2.f[0]; /* movss */

loc_0009DA67: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E6FD0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009DA97; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009DA7C: ;
    xmm2 = xmm1; /* movaps */
    /* nop */

loc_0009DA80: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm7.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_0009DA80; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009DA8F: ;
    MEMF(esi + 0x10C) = xmm2.f[0]; /* movss */

loc_0009DA97: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x114); /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC09C)); /* movss */
    MEMF(esi + 0x10C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x100)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x108); /* addss */
    MEMF(esi + 0x100) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x108)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0009DB3A; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_0009DAE3: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x114)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009DB48; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0009DAF7: ;
    goto loc_0009DB3A;

loc_0009DAF9: ;
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DB06u); RECOMP_ABI_CALL(0x0009B4C0u, sub_0009B4C0); /* call 0x0009B4C0 */

loc_0009DB06: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x100)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x108); /* addss */
    MEMF(esi + 0x100) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x108)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esi + 0x15C) = 0;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0009DB48; /* jnp: not parity */

loc_0009DB3A: ;
    MEM8(esi + 0x15C) = 0;
    MEM8(esi + 0x148) = 1;

loc_0009DB48: ;
    eax = MEM32(esi + 0x158);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x714DAA7A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x714DAA7A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009DB5C; /* je: equal / zero */

loc_0009DB55: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21C08419) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x21C08419 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0009DB91; /* jne: not equal / not zero */

loc_0009DB5C: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0009DB63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009DB60u); } /* indirect call */
    }

loc_0009DB63: ;
    edx = MEM32(0x30D4B8);
    ecx = MEM32(0x30D4B4);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0009DB91; /* jne: not equal / not zero */

loc_0009DB75: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x2B0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0009DB91; /* jnp: not parity */

loc_0009DB8A: ;
    MEM8(esi + 0x15C) = 0;

loc_0009DB91: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DB99u); RECOMP_ABI_CALL(0x0009BE30u, sub_0009BE30); /* call 0x0009BE30 */

loc_0009DB99: ;
    SET_LO8(eax, MEM8(esi + 0x15C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009DBBD; /* je: equal / zero */

loc_0009DBA3: ;
    PUSH32(esp, 0x40F00000);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DBB0u); RECOMP_ABI_CALL(0x0009B4C0u, sub_0009B4C0); /* call 0x0009B4C0 */

loc_0009DBB0: ;
    MEM8(esi + 0x15C) = LO8(eax);
    MEM8(esi + 0x148) = 0;

loc_0009DBBD: ;
    PUSH32(esp, 0x6438E0);
    ecx = esp + 0x134;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DBCEu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009DBCE: ;
    ecx = MEM32(esi + 0x10C);
    PUSH32(esp, ecx);
    edx = esp + 0x134;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DBE2u); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_0009DBE2: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0009DBE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009DBE6u); } /* indirect call */
    }

loc_0009DBE9: ;
    edx = MEM32(0x30D3B4);
    ecx = MEM32(0x30D3B0);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0009DC1B; /* jne: not equal / not zero */

loc_0009DBFB: ;
    _fa = (uint32_t)(MEM32(edi + 0xB80)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xB80), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0009DC1B; /* jne: not equal / not zero */

loc_0009DC04: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x180); /* addss */
    goto loc_0009DC34;

loc_0009DC1B: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC340); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x180)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_0009DC34: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0009DC49; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009DC3C: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009DC4C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009DC49: ;
    xmm0 = xmm1; /* movaps */

loc_0009DC4C: ;
    MEMF(esi + 0x180) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E6FD0); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DC67u); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_0009DC67: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    ecx = esp + 0x74;
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC340) - fp_top()); /* fsubr dword ptr [0x2dc340] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7064)); /* fmul dword ptr [0x2e7064] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DC8Au); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_0009DC8A: ;
    PUSH32(esp, eax);
    edx = esp + 0x134;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DC9Bu); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_0009DC9B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esi;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DCABu); RECOMP_ABI_CALL(0x0009B0D0u, sub_0009B0D0); /* call 0x0009B0D0 */

loc_0009DCAB: ;
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DCB6u); RECOMP_ABI_CALL(0x0009B090u, sub_0009B090); /* call 0x0009B090 */

loc_0009DCB6: ;
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x130;
    PUSH32(esp, ecx);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DCD1u); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_0009DCD1: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x28) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x2C) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x30) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    ecx = esp + 0x34;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC34C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC098); /* mulss */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DD50u); RECOMP_ABI_CALL(0x0009B110u, sub_0009B110); /* call 0x0009B110 */

loc_0009DD50: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x30); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    SET_LO8(eax, MEM8(esi + 0x170));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_0009DE01; /* jne: not equal / not zero */

loc_0009DDE8: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x174)); /* movss */
    _fca = xmm3.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009DF18; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(0x2DC098)) */

loc_0009DDFD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009DE61; /* je: equal / zero */

loc_0009DE01: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC884)); /* movss */
    edx = esp + 0x34;
    MEMF(esi + 0x174) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x164); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x168); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x16C); /* subss */
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DE4Au); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_0009DE4A: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esi + 0x10C) = (float)fp_top(); /* fst */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */

loc_0009DE61: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x164); /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x168); /* subss */
    ecx = esp + 0x34;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x16C); /* subss */
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DEACu); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_0009DEAC: ;
    fp_push(MEMF(esi + 0x174)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC3D8)); /* fmul dword ptr [0x2dc3d8] */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x174)); /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0xC); /* subss */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0xC) - fp_top()); /* fsubr dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if ((_fca > _fcb)) goto loc_0009DF0D; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009DF00: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC8A0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009DF10; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009DF0D: ;
    xmm0 = xmm1; /* movaps */

loc_0009DF10: ;
    MEMF(esi + 0x174) = xmm0.f[0]; /* movss */

loc_0009DF18: ;
    PUSH32(esp, 0x6438E0);
    ecx = esp + 0xF4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DF29u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009DF29: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DF38u); RECOMP_ABI_CALL(0x0022F74Cu, sub_0022F74C); /* call 0x0022F74C */

loc_0009DF38: ;
    PUSH32(esp, eax);
    edx = esp + 0xF4;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DF49u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_0009DF49: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DF58u); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_0009DF58: ;
    PUSH32(esp, eax);
    eax = esp + 0xF4;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DF69u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_0009DF69: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0xF0;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DF9Du); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_0009DF9D: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x64) = eax;
    SET_LO8(eax, MEM8(esi + 0x17C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x6C) = edx;
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0009DFDA; /* je: equal / zero */

loc_0009DFCD: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DFD8u); RECOMP_ABI_CALL(0x0009BF60u, sub_0009BF60); /* call 0x0009BF60 */

loc_0009DFD8: ;
    goto loc_0009DFE5;

loc_0009DFDA: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009DFE5u); RECOMP_ABI_CALL(0x0009C2C0u, sub_0009C2C0); /* call 0x0009C2C0 */

loc_0009DFE5: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DDC40); /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009E002; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009DFFA: ;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    goto loc_0009E01B;

loc_0009E002: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0009E01B; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009E015: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_0009E01B: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E027u); RECOMP_ABI_CALL(0x0009CB70u, sub_0009CB70); /* call 0x0009CB70 */

loc_0009E027: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x134); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x138); /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x13C); /* subss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x138); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x134)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x13C); /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = esp + 0x28;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    PUSH32(esp, edx);
    ecx = esp + 0x50;
    MEMF(esi + 0x134) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x138) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x13C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E0CFu); RECOMP_ABI_CALL(0x001F8790u, sub_001F8790); /* call 0x001F8790 */

loc_0009E0CF: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    eax = esp + 0x1C;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E0FEu); RECOMP_ABI_CALL(0x001F8790u, sub_001F8790); /* call 0x001F8790 */

loc_0009E0FE: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] * fp_top()); fp_pop(); /* fmulp st(3) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] / fp_top()); fp_pop(); /* fdivp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    fp_pop(); /* fstp st(0) */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    edx = MEM32(edi);
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    ecx = edi;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x0009E183u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009E17Du); } /* indirect call */
    }

loc_0009E183: ;
    ecx = MEM32(esi + 0xFC);
    PUSH32(esp, 0);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 1);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x34);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(ecx + 4) = eax;
    eax = esp + 0x5C;
    MEM32(ecx + 8) = edx;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E1D5u); RECOMP_ABI_CALL(0x00098740u, sub_00098740); /* call 0x00098740 */

loc_0009E1D5: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC084); /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009E258; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009E253: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0009E268;

loc_0009E258: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009E268; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0009E265: ;
    xmm0 = xmm2; /* movaps */

loc_0009E268: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0xF8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009E281; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esi + 0xF8)) */

loc_0009E271: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esi + 0xF8) = xmm0.f[0]; /* movss */
    goto loc_0009E2A3;

loc_0009E281: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0xF8); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0xF8); /* addss */
    MEMF(esi + 0xF8) = xmm1.f[0]; /* movss */

loc_0009E2A3: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0xF8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    ecx = esp + 0x40;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    ecx = esp + 0xB4;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E2F8u); RECOMP_ABI_CALL(0x001F64B0u, sub_001F64B0); /* call 0x001F64B0 */

loc_0009E2F8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0xE0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0xE4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    edx = esp + 0x64;
    MEMF(esp + 0xE8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    edi = esi + 0x70;
    PUSH32(esp, edx);
    ecx = edi;
    MEMF(esp + 0xF0) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E345u); RECOMP_ABI_CALL(0x001F64B0u, sub_001F64B0); /* call 0x001F64B0 */

loc_0009E345: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(edi + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(edi + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(edi + 0x3C) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(esi + 0x158)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47458E1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x158), 0x47458E1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0009E3A1; /* jne: not equal / not zero */

loc_0009E37F: ;
    PUSH32(esp, ebx);
    eax = esp + 0xB4;
    PUSH32(esp, eax);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E394u); RECOMP_ABI_CALL(0x0009D340u, sub_0009D340); /* call 0x0009D340 */

loc_0009E394: ;
    PUSH32(esp, eax);
    ecx = esp + 0xB4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E3A1u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009E3A1: ;
    esi = MEM32(ebp + 8);
    edx = esp + 0xB0;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E3B3u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009E3B3: ;
    POP32(esp, edi);
    eax = esi;
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
 * sub_0009E3C0
 * Original: 0x0009E3C0 - 0x0009EE36 (2678 bytes, 636 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0009E3C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0009E3C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x134));
    esp = esp - 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x60);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E3DAu); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_0009E3DA: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009E405; /* je: equal / zero */

loc_0009E3E3: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009E3EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009E3E7u); } /* indirect call */
    }

loc_0009E3EA: ;
    ecx = MEM32(0x30D358);
    esi = eax;
    eax = MEM32(0x30D354);
    _cf = 0; /* logical op clears CF */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    esi = ~esi;
    _cf = 0; /* logical op clears CF */
    esi = esi & ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0009E407;

loc_0009E405: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009E407: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E40Cu); RECOMP_ABI_CALL(0x00029B10u, sub_00029B10); /* call 0x00029B10 */

loc_0009E40C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009E4AB; /* je: equal / zero */

loc_0009E414: ;
    PUSH32(esp, eax);
    eax = esp + 0x104;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E424u); RECOMP_ABI_CALL(0x0009D630u, sub_0009D630); /* call 0x0009D630 */

loc_0009E424: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x19C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0xC); /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi + 0x19C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E219C); /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(edi + 0x198) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009E459; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009E451: ;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    goto loc_0009E472;

loc_0009E459: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0009E472; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009E46C: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_0009E472: ;
    edi = MEM32(edi + 0x50);
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0009E483; /* jne: not equal / not zero */

loc_0009E47C: ;
    eax = 0x6438E0;
    goto loc_0009E486;

loc_0009E483: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009E486: ;
    ecx = MEM32(esp + 0xC);
    esi = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    edx = esp + 0x104;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E49Du); RECOMP_ABI_CALL(0x000990D0u, sub_000990D0); /* call 0x000990D0 */

loc_0009E49D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0009E4AB: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x198); /* addss */
    eax = edi + 0xBC;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    ecx = edi + 0xE0;
    edx = MEM32(ecx);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(edi + 0x198) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi + 0x19C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x28) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(esp + 0x2C) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    eax = esp + 0x3C;
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esi);
    xmm2.f[0] = xmm2.f[0] / xmm3.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0009E53Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009E53Au); } /* indirect call */
    }

loc_0009E53D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009E544u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009E541u); } /* indirect call */
    }

loc_0009E544: ;
    edx = MEM32(0x30D394);
    ecx = MEM32(0x30D390);
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0009E5C8; /* jne: not equal / not zero */

loc_0009E556: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x0009E560u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009E55Au); } /* indirect call */
    }

loc_0009E560: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x2C)) >> 32) & 1);
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0xB0) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0xB4) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0xB8) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0xC0) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x40); /* addss */
    MEM32(esp + 0xBC) = edx;
    edx = MEM32(eax + 0x14);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0xC4) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x290); PUSH32(esp, 0x0009E5BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009E5B7u); } /* indirect call */
    }

loc_0009E5BD: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E5C4u); RECOMP_ABI_CALL(0x00134480u, sub_00134480); /* call 0x00134480 */

loc_0009E5C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009E5D2; /* je: equal / zero */

loc_0009E5C8: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    goto loc_0009E5EE;

loc_0009E5D2: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x1B4)); /* fsub dword ptr [edi + 0x1b4] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DDA48)); /* fmul dword ptr [0x2dda48] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_0009E5EE: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x1AC); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC904); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x1AC); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 0x1B4); /* subss */
    MEMF(edi + 0x1AC) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + 0x1B4); /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(edi + 0x1B0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(edi + 0x1B4) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x1B8) = xmm0.f[0]; /* movss */
    ecx = edi + 0x11C;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0xDC) = edx;
    edx = esp + 0x48;
    MEM32(esp + 0xE4) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x40;
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEM32(esp + 0xE4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E683u); RECOMP_ABI_CALL(0x001F8790u, sub_001F8790); /* call 0x001F8790 */

loc_0009E683: ;
    ebx = eax;
    eax = esp + 0x54;
    PUSH32(esp, eax);
    ecx = esp + 0xE0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E696u); RECOMP_ABI_CALL(0x001F8790u, sub_001F8790); /* call 0x001F8790 */

loc_0009E696: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 4); /* subss */
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x48) = ecx;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x4C) = edx;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x4C)); /* fmul dword ptr [esp + 0x4c] */
    edx = MEM32(esi);
    eax = esp + 0xF8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0009E6F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009E6EDu); } /* indirect call */
    }

loc_0009E6F0: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E6F7u); RECOMP_ABI_CALL(0x001F8790u, sub_001F8790); /* call 0x001F8790 */

loc_0009E6F7: ;
    edx = MEM32(esi);
    ecx = esp + 0xD4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0009E70Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009E708u); } /* indirect call */
    }

loc_0009E70B: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E712u); RECOMP_ABI_CALL(0x001F8790u, sub_001F8790); /* call 0x001F8790 */

loc_0009E712: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0009E719u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009E716u); } /* indirect call */
    }

loc_0009E719: ;
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2DD414)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0009E765; /* jbe: below or equal (unsigned <=) */

loc_0009E729: ;
    edx = MEM32(esi);
    eax = esp + 0x54;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0xB4;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0009E73Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009E73Au); } /* indirect call */
    }

loc_0009E73D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E744u); RECOMP_ABI_CALL(0x001F8790u, sub_001F8790); /* call 0x001F8790 */

loc_0009E744: ;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E74Fu); RECOMP_ABI_CALL(0x000574E0u, sub_000574E0); /* call 0x000574E0 */

loc_0009E74F: ;
    edx = MEM32(eax);
    MEM32(esp + 0xDC) = edx;
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xD8) = eax;

loc_0009E765: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0009E76Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009E769u); } /* indirect call */
    }

loc_0009E76C: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0009E787; /* jbe: below or equal (unsigned <=) */

loc_0009E778: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x184)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0xC); /* addss */
    goto loc_0009E78A;

loc_0009E787: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0009E78A: ;
    MEMF(edi + 0x184) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DD414); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009E7D5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DD414)) */

loc_0009E7A1: ;
    eax = esp + 0xB0;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E7B8u); RECOMP_ABI_CALL(0x000574E0u, sub_000574E0); /* call 0x000574E0 */

loc_0009E7B8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E7C2u); RECOMP_ABI_CALL(0x001F8750u, sub_001F8750); /* call 0x001F8750 */

loc_0009E7C2: ;
    xmm5 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    goto loc_0009E7FE;

loc_0009E7D5: ;
    eax = MEM32(esi);
    ecx = esp + 0xB0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0009E7E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009E7E1u); } /* indirect call */
    }

loc_0009E7E4: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] - MEMF(eax); /* subss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */

loc_0009E7FE: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x28);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x44); /* addss */
    edx = esp;
    MEM32(edx) = eax;
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEM32(edx + 4) = ecx;
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    ecx = esp + 0xC0;
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp + 0xB8) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC0) = xmm3.f[0]; /* movss */
    MEM32(edx + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E878u); RECOMP_ABI_CALL(0x0009ADA0u, sub_0009ADA0); /* call 0x0009ADA0 */

loc_0009E878: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    MEM32(edx + 4) = ecx;
    ecx = esp + 0x40;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(edx + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E8BEu); RECOMP_ABI_CALL(0x0009C7C0u, sub_0009C7C0); /* call 0x0009C7C0 */

loc_0009E8BE: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = esp + 0xA8;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E8F3u); RECOMP_ABI_CALL(0x0009CF50u, sub_0009CF50); /* call 0x0009CF50 */

loc_0009E8F3: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(ecx + 4) = eax;
    eax = esp + 0x34;
    MEM32(ecx + 8) = edx;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E919u); RECOMP_ABI_CALL(0x0009C610u, sub_0009C610); /* call 0x0009C610 */

loc_0009E919: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xAC)); /* movss */
    ecx = esp + 0xC8;
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    PUSH32(esp, edx);
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm5.f[0]; /* movss */
    MEMF(esp + 0xD0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xD4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xD8) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009E9DBu); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_0009E9DB: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x0009E9E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009E9E2u); } /* indirect call */
    }

loc_0009E9E8: ;
    MEM32(esp + 0xE8) = eax;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0xC) = 1;
    MEM32(esp + 0x10) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x0009EA09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009EA03u); } /* indirect call */
    }

loc_0009EA09: ;
    SET_LO8(ecx, MEM8(eax + 0x8C9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0009EA7C; /* jle: less or equal (signed <=) */

loc_0009EA13: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0009EA7C; /* jge: greater or equal (signed >=) */

loc_0009EA1A: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x0009EA29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009EA23u); } /* indirect call */
    }

loc_0009EA29: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009EA30u); RECOMP_ABI_CALL(0x00163590u, sub_00163590); /* call 0x00163590 */

loc_0009EA30: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009EA5E; /* je: equal / zero */

loc_0009EA36: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x0009EA40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009EA3Au); } /* indirect call */
    }

loc_0009EA40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009EA5E; /* je: equal / zero */

loc_0009EA44: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x0009EA4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009EA48u); } /* indirect call */
    }

loc_0009EA4E: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esp + ecx * 4 + 0xE8) = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = ecx;

loc_0009EA5E: ;
    ebx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(esp + 0x10) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x208); PUSH32(esp, 0x0009EA71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009EA6Bu); } /* indirect call */
    }

loc_0009EA71: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x8C9);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0009EA13; /* jl: less (signed <) */

loc_0009EA7C: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(edi + 0xFC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esp + 0xF0;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x44);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x54);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    edx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x44);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x54);
    MEM32(ecx + 4) = eax;
    eax = esp + 0xD8;
    MEM32(ecx + 8) = edx;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009EAD3u); RECOMP_ABI_CALL(0x00098740u, sub_00098740); /* call 0x00098740 */

loc_0009EAD3: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD6FC); /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    xmm7 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x58)); /* fmul dword ptr [esp + 0x58] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca > _fcb)) goto loc_0009EB64; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009EB59: ;
    _fca = xmm0.f[0]; _fcb = xmm7.f[0]; /* comiss */
    xmm1 = xmm7; /* movaps */
    if ((_fca > _fcb)) goto loc_0009EB64; /* ja: above (unsigned >) (xmm0.f[0] vs xmm7.f[0]) */

loc_0009EB61: ;
    xmm1 = xmm0; /* movaps */

loc_0009EB64: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0xF8); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0xF8); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    ecx = esp + 0xC8;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    ecx = esp + 0x64;
    MEMF(edi + 0xF8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xA0) = xmm7.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009EBE5u); RECOMP_ABI_CALL(0x001F64B0u, sub_001F64B0); /* call 0x001F64B0 */

loc_0009EBE5: ;
    ecx = esp + 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009EBF1u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_0009EBF1: ;
    MEMF(edi + 0x10C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x198)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E219C); /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(edi + 0x180) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009EC1F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009EC17: ;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    goto loc_0009EC38;

loc_0009EC1F: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0009EC38; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009EC32: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_0009EC38: ;
    eax = MEM32(edi + 0x50);
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0009EC49; /* jne: not equal / not zero */

loc_0009EC42: ;
    eax = 0x6438E0;
    goto loc_0009EC4C;

loc_0009EC49: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009EC4C: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x10C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009EC64u); RECOMP_ABI_CALL(0x000990D0u, sub_000990D0); /* call 0x000990D0 */

loc_0009EC64: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xB0;
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0009ED49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009ED46u); } /* indirect call */
    }

loc_0009ED49: ;
    edx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEM32(edi + 0x1BC) = edx;
    ecx = MEM32(eax + 4);
    MEM32(edi + 0x1C0) = ecx;
    edx = MEM32(eax + 8);
    eax = MEM32(ebp + 8);
    MEM32(edi + 0x1C4) = edx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x8C)); /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    POP32(esp, edi);
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    POP32(esp, esi);
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
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
 * sub_0009EE40
 * Original: 0x0009EE40 - 0x0009F0DB (667 bytes, 182 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0009EE40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0009EE40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x54));
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x60);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009EE57u); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_0009EE57: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009EE82; /* je: equal / zero */

loc_0009EE60: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009EE67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009EE64u); } /* indirect call */
    }

loc_0009EE67: ;
    ecx = MEM32(0x30D358);
    ebx = eax;
    eax = MEM32(0x30D354);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ebx = ~ebx;
    _cf = 0; /* logical op clears CF */
    ebx = ebx & edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0009EE84;

loc_0009EE82: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009EE84: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F0D2; /* je: equal / zero */

loc_0009EE8C: ;
    eax = MEM32(esi + 0x158);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47458E1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x47458E1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009EEB2; /* je: equal / zero */

loc_0009EE99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x67BA7642) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x67BA7642 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009EEB2; /* je: equal / zero */

loc_0009EEA0: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009EEB0u); RECOMP_ABI_CALL(0x0009D840u, sub_0009D840); /* call 0x0009D840 */

loc_0009EEB0: ;
    goto loc_0009EEC2;

loc_0009EEB2: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009EEC2u); RECOMP_ABI_CALL(0x0009E3C0u, sub_0009E3C0); /* call 0x0009E3C0 */

loc_0009EEC2: ;
    ecx = esi + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009EECBu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009EECB: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0009EFDB; /* jne: not equal / not zero */

loc_0009EED7: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(ebx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xB0)); /* movss */
    ecx = ebx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009EEFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009EEFAu); } /* indirect call */
    }

loc_0009EEFD: ;
    edx = MEM32(0x30D88C);
    ecx = MEM32(0x30D888);
    edi = eax;
    eax = MEM32(esi + 0x158);
    _cf = 0; /* logical op clears CF */
    edi = edi & edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(ecx));
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi = ~edi;
    _cf = 0; /* logical op clears CF */
    edi = edi & ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x714DAA7A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x714DAA7A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0009EF70; /* jne: not equal / not zero */

loc_0009EF24: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009EF70; /* je: equal / zero */

loc_0009EF28: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009EF2Fu); RECOMP_ABI_CALL(0x0009B3B0u, sub_0009B3B0); /* call 0x0009B3B0 */

loc_0009EF2F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0009EF70; /* jne: not equal / not zero */

loc_0009EF33: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3BC); PUSH32(esp, 0x0009EF3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009EF37u); } /* indirect call */
    }

loc_0009EF3D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0009EF70; /* je: equal / zero */

loc_0009EF41: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3BC); PUSH32(esp, 0x0009EF4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009EF45u); } /* indirect call */
    }

loc_0009EF4B: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0009EF62; /* je: equal / zero */

loc_0009EF51: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3BC); PUSH32(esp, 0x0009EF5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009EF55u); } /* indirect call */
    }

loc_0009EF5B: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0009EF70; /* jne: not equal / not zero */

loc_0009EF62: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3F0)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_0009EF70: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    if ((_fca > _fcb)) goto loc_0009EF91; /* ja: above (unsigned >) (xmm0.f[0] vs xmm3.f[0]) */

loc_0009EF89: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */

loc_0009EF91: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC3F4); /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca > _fcb)) goto loc_0009EFC2; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009EFB4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0009EFC2; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009EFBF: ;
    xmm0 = xmm1; /* movaps */

loc_0009EFC2: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x50);
    ecx = MEM32(ecx + 0x1C);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009EFDBu); RECOMP_ABI_CALL(0x001F8C70u, sub_001F8C70); /* call 0x001F8C70 */

loc_0009EFDB: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009EFE4u); RECOMP_ABI_CALL(0x0009B180u, sub_0009B180); /* call 0x0009B180 */

loc_0009EFE4: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009EFEBu); RECOMP_ABI_CALL(0x0009B1A0u, sub_0009B1A0); /* call 0x0009B1A0 */

loc_0009EFEB: ;
    xmm1 = XMM_SCALAR(MEMF(0x2E0A1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x10C); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x2DD3D8)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009F027; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esi + 0x10C)) */

loc_0009F004: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x10C)); /* movss */
    /* nop */

loc_0009F010: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = xmm2; /* movaps */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0009F010; /* ja: above (unsigned >) (xmm1.f[0] vs xmm3.f[0]) */

loc_0009F01F: ;
    MEMF(esi + 0x10C) = xmm3.f[0]; /* movss */

loc_0009F027: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x10C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E6FD0)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009F057; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0009F03C: ;
    xmm3 = xmm2; /* movaps */
    /* nop */

loc_0009F040: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm3 = xmm2; /* movaps */
    if ((_fca > _fcb)) goto loc_0009F040; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_0009F04F: ;
    MEMF(esi + 0x10C) = xmm3.f[0]; /* movss */

loc_0009F057: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x100); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009F06B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x100)) */

loc_0009F063: ;
    MEMF(esi + 0x100) = xmm0.f[0]; /* movss */

loc_0009F06B: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x100)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009F088; /* jb: below (unsigned <) (xmm2.f[0] vs xmm1.f[0]) */

loc_0009F080: ;
    MEMF(esi + 0x100) = xmm1.f[0]; /* movss */

loc_0009F088: ;
    edx = MEM32(esi + 0x100);
    eax = MEM32(esi + 0x10C);
    MEM32(esi + 0x104) = edx;
    MEM32(esi + 0x110) = eax;
    ecx = MEM32(esi + 0x40);
    MEM32(esi + 0x11C) = ecx;
    edx = MEM32(esi + 0x44);
    MEM32(esi + 0x120) = edx;
    eax = MEM32(esi + 0x48);
    MEM32(esi + 0x124) = eax;
    MEMF(esi + 0x108) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x114) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x170) = 0;

loc_0009F0D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_0009F0E0
 * Original: 0x0009F0E0 - 0x0009F11E (62 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F0E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F0E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    MEM8(esi + 0xAC) = 1;
    PUSH32(esp, 0x0009F0F1u); RECOMP_ABI_CALL(0x001592B0u, sub_001592B0); /* call 0x001592B0 */

loc_0009F0F1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009F0F8u); RECOMP_ABI_CALL(0x001F3290u, sub_001F3290); /* call 0x001F3290 */

loc_0009F0F8: ;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0009F10Bu); RECOMP_ABI_CALL(0x001F8C70u, sub_001F8C70); /* call 0x001F8C70 */

loc_0009F10B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0009F112u); RECOMP_ABI_CALL(0x00159260u, sub_00159260); /* call 0x00159260 */

loc_0009F112: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x60) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009F120
 * Original: 0x0009F120 - 0x0009F1C5 (165 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F120(void)
{

loc_0009F120: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0009F12Du); RECOMP_ABI_CALL(0x00097EC0u, sub_00097EC0); /* call 0x00097EC0 */

loc_0009F12D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEM32(esi) = 0x2E706C;
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x84) = xmm1.f[0]; /* movss */
    MEM32(esi + 0x60) = 0;
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x90) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x94) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x98) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA4) = xmm0.f[0]; /* movss */
    MEM8(esi + 0xAC) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009F1D0
 * Original: 0x0009F1D0 - 0x0009F1EF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F1D0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E706C;
    if (TEST_Z(_fa, _fb)) goto loc_0009F1E9; /* je: equal / zero */

loc_0009F1E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009F1E6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0009F1E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009F1E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009F1F0
 * Original: 0x0009F1F0 - 0x0009F39C (428 bytes, 113 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F1F0(void)
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

loc_0009F1F0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0009F207u); RECOMP_ABI_CALL(0x001F8C70u, sub_001F8C70); /* call 0x001F8C70 */

loc_0009F207: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0009F20Eu); RECOMP_ABI_CALL(0x001592B0u, sub_001592B0); /* call 0x001592B0 */

loc_0009F20E: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x0009F218u); RECOMP_ABI_CALL(0x001F3290u, sub_001F3290); /* call 0x001F3290 */

loc_0009F218: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0009F21Fu); RECOMP_ABI_CALL(0x00159260u, sub_00159260); /* call 0x00159260 */

loc_0009F21F: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x0009F229u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_0009F229: ;
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x60) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0009F24E; /* je: equal / zero */

loc_0009F235: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009F23Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009F239u); } /* indirect call */
    }

loc_0009F23C: ;
    edx = MEM32(0x30D88C);
    ecx = MEM32(0x30D888);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F250; /* je: equal / zero */

loc_0009F24E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009F250: ;
    ecx = MEM32(esi + 0x60);
    eax = MEM32(ecx);
    edx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0009F25Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009F25Au); } /* indirect call */
    }

loc_0009F25D: ;
    ecx = MEM32(esi + 0x60);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0009F26Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009F267u); } /* indirect call */
    }

loc_0009F26A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F2C1; /* je: equal / zero */

loc_0009F26E: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0009F277u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_0009F277: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2E0A28)); /* fsub dword ptr [0x2e0a28] */
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009F295u); RECOMP_ABI_CALL(0x001F87C0u, sub_001F87C0); /* call 0x001F87C0 */

loc_0009F295: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x0009F29Fu); RECOMP_ABI_CALL(0x001F8750u, sub_001F8750); /* call 0x001F8750 */

loc_0009F29F: ;
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_0009F2D3;

loc_0009F2C1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_0009F2D3: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esi + 0x70) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esi + 0x74) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esi + 0x78) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(0x2E7024); /* addss */
    MEMF(esi + 0x74) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x70)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x74)); /* movss */
    MEMF(esi + 0x70) = xmm3.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    MEMF(esi + 0x74) = xmm2.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x78) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x64) = eax;
    ecx = MEM32(esi + 0x74);
    MEM32(esi + 0x68) = ecx;
    edx = MEM32(esi + 0x78);
    MEM32(esi + 0x6C) = edx;
    ecx = MEM32(esi + 0x60);
    eax = MEM32(ecx);
    edx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0009F363u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009F360u); } /* indirect call */
    }

loc_0009F363: ;
    ecx = MEM32(eax);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x7C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x80) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x84) = eax;
    POP32(esp, edi);
    MEMF(esi + 0xA4) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xA8) = 0;
    MEM8(esi + 0xAC) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009F3A0
 * Original: 0x0009F3A0 - 0x0009F5B5 (533 bytes, 133 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0009F3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0009F3A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0009F5AD; /* jne: not equal / not zero */

loc_0009F3B9: ;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F3E1; /* je: equal / zero */

loc_0009F3C0: ;
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0009F3CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009F3C7u); } /* indirect call */
    }

loc_0009F3CA: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x7C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x80) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x84) = eax;

loc_0009F3E1: ;
    ecx = esi + 0x7C;
    PUSH32(esp, ecx);
    edi = esi + 0x70;
    PUSH32(esp, edi);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F3F5u); RECOMP_ABI_CALL(0x0009A170u, sub_0009A170); /* call 0x0009A170 */

loc_0009F3F5: ;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F3FEu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009F3FE: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x9C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009F480; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009F40E: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xA0); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x9C); /* comiss */
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009F442; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x9C)) */

loc_0009F42C: ;
    eax = MEM32(esi + 0x98);
    MEMF(esi + 0x9C) = xmm1.f[0]; /* movss */
    MEM32(esi + 0x90) = eax;
    goto loc_0009F46E;

loc_0009F442: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / MEMF(esi + 0x9C); /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x90) = xmm2.f[0]; /* movss */

loc_0009F46E: ;
    ecx = MEM32(esi + 0x90);
    edx = MEM32(esi + 0x50);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F480u); RECOMP_ABI_CALL(0x001F8C70u, sub_001F8C70); /* call 0x001F8C70 */

loc_0009F480: ;
    ecx = MEM32(esi + 0x50);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009F488u); RECOMP_ABI_CALL(0x00097670u, sub_00097670); /* call 0x00097670 */

loc_0009F488: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F5AD; /* je: equal / zero */

loc_0009F490: ;
    eax = MEM32(esi + 0xA8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0009F4AE; /* je: equal / zero */

loc_0009F49B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0009F598; /* jne: not equal / not zero */

loc_0009F4A2: ;
    MEM8(esi + 0xAC) = 1;
    goto loc_0009F598;

loc_0009F4AE: ;
    ecx = MEM32(esi + 0x60);
    eax = MEM32(ecx);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0009F4BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009F4B8u); } /* indirect call */
    }

loc_0009F4BB: ;
    ecx = MEM32(esi + 0x60);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0009F4C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009F4C5u); } /* indirect call */
    }

loc_0009F4C8: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xA4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x2DDA48); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x2DDC40); /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009F539; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm3.f[0]) */

loc_0009F534: ;
    xmm3 = xmm4; /* movaps */
    goto loc_0009F541;

loc_0009F539: ;
    _fca = xmm3.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009F541; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm5.f[0]) */

loc_0009F53E: ;
    xmm3 = xmm5; /* movaps */

loc_0009F541: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x64); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x68); /* subss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x6C); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm3.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x6C)); /* movss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(edi) = xmm4.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    MEMF(edi + 8) = xmm2.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0009F598; /* jp: parity */

loc_0009F58E: ;
    MEM32(esi + 0xA8) = 1;

loc_0009F598: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xA4); /* addss */
    MEMF(esi + 0xA4) = xmm0.f[0]; /* movss */

loc_0009F5AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009F5C0
 * Original: 0x0009F5C0 - 0x0009F5F7 (55 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F5C0(void)
{

loc_0009F5C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0009F5D3u); RECOMP_ABI_CALL(0x001F8C70u, sub_001F8C70); /* call 0x001F8C70 */

loc_0009F5D3: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esi + 0x13C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(esi + 0x138) = 1;
    MEMF(esi + 0x140) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009F600
 * Original: 0x0009F600 - 0x0009F636 (54 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F600(void)
{

loc_0009F600: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = MEM32(ecx + 0x124);
    MEMF(ecx + 0x12C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x130) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 0x128) = eax;
    MEMF(ecx + 0x134) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0009F640
 * Original: 0x0009F640 - 0x0009F647 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F640(void)
{

loc_0009F640: ;
    MEM32(ecx) = 0x2DC67C;
    esp += 4; return; /* ret */

}

/**
 * sub_0009F650
 * Original: 0x0009F650 - 0x0009F687 (55 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F650(void)
{

loc_0009F650: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEM32(ecx + 0xA8) = 0;
    MEMF(ecx + 0xB8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0xBC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0xC0) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0009F690
 * Original: 0x0009F690 - 0x0009F6E6 (86 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F690: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F6D5; /* je: equal / zero */

loc_0009F69E: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(eax + 0x28);
    MEM32(esi + 0xA8) = edx;
    eax = MEM32(ecx);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0009F6B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009F6B1u); } /* indirect call */
    }

loc_0009F6B4: ;
    ecx = MEM32(eax);
    MEM32(esi + 0xB8) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0xBC) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0xC0) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0009F6D5: ;
    MEM32(esi + 0xA8) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009F6F0
 * Original: 0x0009F6F0 - 0x0009F75E (110 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F6F0(void)
{

loc_0009F6F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, 0x0009F700u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009F700: ;
    ecx = MEM32(esi + 0x40);
    MEM32(esi + 0xAC) = ecx;
    edx = MEM32(esi + 0x44);
    MEM32(esi + 0xB0) = edx;
    eax = MEM32(esi + 0x48);
    MEM32(esi + 0xB4) = eax;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xAC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xB0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x30); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x34); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x38); /* subss */
    MEMF(esi + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xBC) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xC0) = xmm2.f[0]; /* movss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009F760
 * Original: 0x0009F760 - 0x0009F7F2 (146 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F760: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F781; /* je: equal / zero */

loc_0009F768: ;
    eax = MEM32(eax + 8);
    edx = MEM32(eax + 0x28);
    eax = MEM32(esp + 8);
    MEM32(ecx + 0xC4) = edx;
    MEM32(ecx + 0xC8) = eax;
    esp += 12; return; /* ret 8 */

loc_0009F781: ;
    edx = MEM32(ecx + 0x40);
    MEM32(ecx + 0xAC) = edx;
    eax = MEM32(ecx + 0x44);
    MEM32(ecx + 0xB0) = eax;
    edx = MEM32(ecx + 0x48);
    eax = MEM32(esp + 8);
    MEM32(ecx + 0xB4) = edx;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xAC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xB0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0xB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x30); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x34); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x38); /* subss */
    MEMF(ecx + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xBC) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xC0) = xmm2.f[0]; /* movss */
    MEM32(ecx + 0xC4) = 0;
    MEM32(ecx + 0xC8) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0009F800
 * Original: 0x0009F800 - 0x0009F874 (116 bytes, 19 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F800(void)
{

loc_0009F800: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(ecx + 0xCC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0xD0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0xD4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0xD8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0xDC) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 0xAC);
    MEM32(ecx + 0xE0) = eax;
    edx = MEM32(ecx + 0xB0);
    MEM32(ecx + 0xE4) = edx;
    eax = MEM32(ecx + 0xB4);
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM32(ecx + 0xE8) = eax;
    MEM8(ecx + 0xEC) = LO8(edx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0009F880
 * Original: 0x0009F880 - 0x0009F8F8 (120 bytes, 19 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F880(void)
{

loc_0009F880: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0xF0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0xF4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0xF8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0xFC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(ecx + 0x100) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(ecx + 0x104) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 0xAC);
    MEM32(ecx + 0x108) = eax;
    edx = MEM32(ecx + 0xB0);
    MEM32(ecx + 0x10C) = edx;
    eax = MEM32(ecx + 0xB4);
    MEM32(ecx + 0x110) = eax;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0009F900
 * Original: 0x0009F900 - 0x0009F944 (68 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F900: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x2E7090);
    SET_LO16(edx, MEM16(0x2E7094));
    eax = MEM32(0x2E708C);
    MEM32(esp + 4) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM16(esp + 8) = LO16(edx);
    MEM32(esp) = eax;
    SET_LO8(eax, MEM8(0x2E7096));
    edx = esp;
    _fb = (uint32_t)(0x61) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 0x61);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEM8(esp + 0xE) = LO8(eax);
    MEM8(esp + 0xD) = LO8(ecx);
    PUSH32(esp, 0x0009F93Eu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0009F93E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009F950
 * Original: 0x0009F950 - 0x0009F988 (56 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F950: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x94;

loc_0009F958: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F969; /* je: equal / zero */

loc_0009F95D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009F958; /* jl: less (signed <) */

loc_0009F966: ;
    esp += 12; return; /* ret 8 */

loc_0009F969: ;
    edx = MEM32(esp + 4);
    edx = MEM32(edx + 8);
    edx = MEM32(edx + 0x28);
    MEM32(ecx + eax * 4 + 0x94) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx + eax * 4 + 0x80) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0009F990
 * Original: 0x0009F990 - 0x0009F9C3 (51 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009F990: ;
    edx = MEM32(esp + 4);
    edx = MEM32(edx + 8);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x28);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x94;

loc_0009F9A3: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009F9B4; /* je: equal / zero */

loc_0009F9A7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0009F9A3; /* jl: less (signed <) */

loc_0009F9B0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009F9B4: ;
    MEM32(ecx + eax * 4 + 0x94) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009F9D0
 * Original: 0x0009F9D0 - 0x0009FBA1 (465 bytes, 88 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009F9D0(void)
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

loc_0009F9D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x413FA0)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E7088); /* mulss */
    PUSH32(esp, esi);
    esi = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x140); /* addss */
    MEMF(esi + 0x140) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E705C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E7058); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009FA17u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_0009FA17: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x140)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC884); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC090); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009FA3Du); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_0009FA3D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x140)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD6D0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E7054); /* addss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7050)); /* fmul dword ptr [0x2e7050] */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009FA6Du); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_0009FA6D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x140)); /* movss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC904); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E5CA8); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009FA93u); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_0009FA93: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x140)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD414); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E2C30); /* addss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E704C)); /* fmul dword ptr [0x2e704c] */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009FAC3u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_0009FAC3: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x140)); /* movss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC884); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DDA4C); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0009FAE9u); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_0009FAE9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    SET_LO8(eax, MEM8(esi + 0x138));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E3D30)); /* fmul dword ptr [0x2e3d30] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0009FB1C; /* je: equal / zero */

loc_0009FB04: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC090); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x13C); /* addss */
    goto loc_0009FB36;

loc_0009FB1C: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC090); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x13C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_0009FB36: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0009FB4B; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0009FB3E: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0009FB4E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0009FB4B: ;
    xmm0 = xmm1; /* movaps */

loc_0009FB4E: ;
    eax = MEM32(esp + 0x18);
    MEMF(esi + 0x13C) = xmm0.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 8); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009FBB0
 * Original: 0x0009FBB0 - 0x0009FBCE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009FBB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0009FBB8u); RECOMP_ABI_CALL(0x0009F640u, sub_0009F640); /* call 0x0009F640 */

loc_0009FBB8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009FBC8; /* je: equal / zero */

loc_0009FBBF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009FBC5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0009FBC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009FBC8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009FBD0
 * Original: 0x0009FBD0 - 0x0009FD21 (337 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FBD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009FBD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0009FBDDu); RECOMP_ABI_CALL(0x00097EC0u, sub_00097EC0); /* call 0x00097EC0 */

loc_0009FBDD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEM32(esi) = 0x2E70A0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x60) = 0x2E7098;
    MEMF(esi + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xAC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC0) = xmm1.f[0]; /* movss */
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0xA8) = eax;
    MEM32(esi + 0x70) = esi;
    MEMF(esi + 0xDC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xD8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE0) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xC4) = eax;
    MEMF(esi + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xD0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xFC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x100) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x104) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x11C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x120) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x124) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x128) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x12C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x130) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x134) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x114) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x118) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0xA4) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009FD30
 * Original: 0x0009FD30 - 0x0009FD4E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009FD30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0009FD38u); RECOMP_ABI_CALL(0x0009FD50u, sub_0009FD50); /* call 0x0009FD50 */

loc_0009FD38: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009FD48; /* je: equal / zero */

loc_0009FD3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009FD45u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0009FD45: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009FD48: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0009FD50
 * Original: 0x0009FD50 - 0x0009FD5E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FD50(void)
{

loc_0009FD50: ;
    MEM32(ecx) = 0x2E70A0;
    MEM32(ecx + 0x60) = 0x2DC67C;
    esp += 4; return; /* ret */

}

/**
 * sub_0009FD60
 * Original: 0x0009FD60 - 0x0009FDA5 (69 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009FD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009FD60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0009FD73u); RECOMP_ABI_CALL(0x001F8C70u, sub_001F8C70); /* call 0x001F8C70 */

loc_0009FD73: ;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009FDA3; /* je: equal / zero */

loc_0009FD7A: ;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009FD94; /* je: equal / zero */

loc_0009FD81: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x0009FD89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009FD83u); } /* indirect call */
    }

loc_0009FD89: ;
    ecx = esi + 0x60;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0009FD94u); RECOMP_ABI_CALL(0x001FDEA0u, sub_001FDEA0); /* call 0x001FDEA0 */

loc_0009FD94: ;
    ecx = MEM32(esi + 0x74);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0009FD9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009FD99u); } /* indirect call */
    }

loc_0009FD9C: ;
    MEM32(esi + 0x74) = 0;

loc_0009FDA3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0009FDB0
 * Original: 0x0009FDB0 - 0x0009FE84 (212 bytes, 81 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0009FDB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009FDB0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009FE10; /* jne: not equal / not zero */

loc_0009FDBF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebp + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1143A6E5);
    ecx = 0x4031B0;
    PUSH32(esp, 0x0009FDDCu); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_0009FDDC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009FDFF; /* je: equal / zero */

loc_0009FDE2: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009FDE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009FDE6u); } /* indirect call */
    }

loc_0009FDE9: ;
    edx = MEM32(0x30C164);
    ecx = MEM32(0x30C160);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009FDFF; /* jne: not equal / not zero */

loc_0009FDFB: ;
    eax = edi;
    goto loc_0009FE01;

loc_0009FDFF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009FE01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x74) = eax;
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0009FE18; /* jne: not equal / not zero */

loc_0009FE09: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0009FE10: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x134); PUSH32(esp, 0x0009FE18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009FE12u); } /* indirect call */
    }

loc_0009FE18: ;
    ecx = MEM32(esi + 0x74);
    eax = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x12C); PUSH32(esp, 0x0009FE2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009FE27u); } /* indirect call */
    }

loc_0009FE2D: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009FE7C; /* je: equal / zero */

loc_0009FE33: ;
    ecx = MEM32(esi + 0x74);
    MEM8(esi + 0x7C) = 0;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x0009FE42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009FE3Cu); } /* indirect call */
    }

loc_0009FE42: ;
    ecx = esi + 0x60;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0009FE4Du); RECOMP_ABI_CALL(0x001FDF40u, sub_001FDF40); /* call 0x001FDF40 */

loc_0009FE4D: ;
    ecx = MEM32(esi + 0x74);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x138); PUSH32(esp, 0x0009FE5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009FE54u); } /* indirect call */
    }

loc_0009FE5A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x7C));
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009FE67u); RECOMP_ABI_CALL(0x0009F900u, sub_0009F900); /* call 0x0009F900 */

loc_0009FE67: ;
    ecx = MEM32(esi + 0x74);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0009FE73u); RECOMP_ABI_CALL(0x0009F760u, sub_0009F760); /* call 0x0009F760 */

loc_0009FE73: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0x28);
    MEM32(esi + 0x78) = eax;

loc_0009FE7C: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0009FE90
 * Original: 0x0009FE90 - 0x000A05E3 (1875 bytes, 424 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0009FE90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0009FE90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0009FED4; /* je: equal / zero */

loc_0009FEA8: ;
    eax = MEM32(esi + 0x78);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009FEB1u); RECOMP_ABI_CALL(0x00170730u, sub_00170730); /* call 0x00170730 */

loc_0009FEB1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009FED4; /* je: equal / zero */

loc_0009FEB8: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009FEC7u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009FEC7: ;
    ecx = MEM32(esi + 0x74);
    edx = MEM32(ecx);
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0009FED4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009FED1u); } /* indirect call */
    }

loc_0009FED4: ;
    eax = MEM32(esi + 0xC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009FEF8; /* je: equal / zero */

loc_0009FEDE: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009FEE4u); RECOMP_ABI_CALL(0x00170730u, sub_00170730); /* call 0x00170730 */

loc_0009FEE4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A00C8; /* jne: not equal / not zero */

loc_0009FEEF: ;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009FEF8u); RECOMP_ABI_CALL(0x0009F760u, sub_0009F760); /* call 0x0009F760 */

loc_0009FEF8: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x114)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A0085; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_0009FF0C: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x114) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xAC); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xBC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xB0); /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC0)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xB4); /* subss */
    PUSH32(esp, 0x6438E0);
    ecx = esp + 0x54;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009FF6Fu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0009FF6F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD414); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E2C30); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009FF90u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_0009FF90: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x114)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC884); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DDA4C); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009FFB6u); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_0009FFB6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x90;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC3B4)); /* fmul dword ptr [0x2dc3b4] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009FFD9u); RECOMP_ABI_CALL(0x0022F74Cu, sub_0022F74C); /* call 0x0022F74C */

loc_0009FFD9: ;
    PUSH32(esp, eax);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009FFE7u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_0009FFE7: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x118)); /* fmul dword ptr [esi + 0x118] */
    eax = esp + 0x90;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0006u); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_000A0006: ;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0014u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_000A0014: ;
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0028u); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_000A0028: ;
    eax = MEM32(esp + 0x28);
    xmm1 = XMM_SCALAR(MEMF(esi + 0xB0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xB4)); /* movss */
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x18) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xAC); /* addss */
    MEM32(esp + 0x1C) = ecx;
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x1C); /* addss */
    MEM32(esp + 0x20) = edx;
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(esi + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xBC) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xC0) = xmm2.f[0]; /* movss */

loc_000A0085: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xCC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xD0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A02D2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0xD0)) */

loc_000A009A: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xD0); /* addss */
    MEMF(esi + 0xD0) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0xCC); /* divss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A01AD; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_000A00C0: ;
    xmm0 = xmm4; /* movaps */
    goto loc_000A01BD;

loc_000A00C8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x000A00D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A00CCu); } /* indirect call */
    }

loc_000A00D2: ;
    ecx = MEM32(0x643844);
    ebx = eax;
    eax = MEM32(ebx + 0x1C);
    MEM32(ecx) = eax;
    edx = MEM32(0x6438B4);
    edi = ecx;
    ecx = MEM32(0x6438A8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A00F6u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_000A00F6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A0104; /* jge: greater or equal (signed >=) */

loc_000A00FD: ;
    eax = 0x6438B8;
    goto loc_000A010D;

loc_000A0104: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_000A010D: ;
    ecx = MEM32(eax);
    MEM32(edi + 4) = ecx;
    edx = MEM32(ebx + 0x18);
    eax = ebx + 0x24;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC8);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x2C) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0132u); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_000A0132: ;
    edi = esi + 0x94;
    MEM32(esp + 0x24) = 5;

loc_000A0140: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A019A; /* je: equal / zero */

loc_000A0146: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A014Cu); RECOMP_ABI_CALL(0x00170730u, sub_00170730); /* call 0x00170730 */

loc_000A014C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x34) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000A015B; /* jne: not equal / not zero */

loc_000A0157: ;
    MEM32(edi) = eax;
    goto loc_000A019A;

loc_000A015B: ;
    eax = MEM32(ebx + 0x18);
    ecx = ebx + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(edi + -20);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0179u); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_000A0179: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A019A; /* jne: not equal / not zero */

loc_000A017E: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000A018Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0189u); } /* indirect call */
    }

loc_000A018C: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A019Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0197u); } /* indirect call */
    }

loc_000A019A: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = eax;
    if ((_fa != 0)) goto loc_000A0140; /* jne: not equal / not zero */

loc_000A01A8: ;
    goto loc_000A0558;

loc_000A01AD: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A01BD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A01BA: ;
    xmm0 = xmm1; /* movaps */

loc_000A01BD: ;
    _fa = (uint32_t)(MEM8(esi + 0xEC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xEC), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A0233; /* jne: not equal / not zero */

loc_000A01C6: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xD4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0xE0); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xD8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0xE4); /* subss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xDC)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esi + 0xE8); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xE4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xE8)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0xAC) = xmm0.f[0]; /* movss */
    goto loc_000A02C2;

loc_000A0233: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E7088); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0246u); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_000A0246: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xD4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xD8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0xE4); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xDC)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0xE8); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xE0); /* subss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC340) - fp_top()); /* fsubr dword ptr [0x2dc340] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0xE4); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0xE8); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xE0)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi + 0xAC) = xmm3.f[0]; /* movss */

loc_000A02C2: ;
    MEMF(esi + 0xB0) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xB4) = xmm2.f[0]; /* movss */

loc_000A02D2: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xF0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xF4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A042A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0xF4)) */

loc_000A02E7: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xF4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 8); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x104)); /* movss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0xF4) = xmm0.f[0]; /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0313u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_000A0313: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x100)); /* fmul dword ptr [esi + 0x100] */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xFC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0xF4); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x10C)); /* fadd dword ptr [esi + 0x10c] */
    eax = esp + 0x18;
    ecx = esp + 0x28;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xB0); /* addss */
    MEMF(esi + 0xB0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xAC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xB8); /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB0)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xBC); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xC0); /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xF8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD3DC); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A03B0u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_000A03B0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xC0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xB8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xBC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x28); /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0xAC) = xmm2.f[0]; /* movss */
    MEMF(esi + 0xB0) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xB4) = xmm3.f[0]; /* movss */

loc_000A042A: ;
    eax = MEM32(esi + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x38) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm4.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000A04C4; /* jne: not equal / not zero */

loc_000A044E: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);

loc_000A0458: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xAC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xB8); /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB0)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xBC); /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xC0); /* subss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A049Fu); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_000A049F: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    goto loc_000A0510;

loc_000A04C4: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A04CAu); RECOMP_ABI_CALL(0x00170730u, sub_00170730); /* call 0x00170730 */

loc_000A04CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0506; /* je: equal / zero */

loc_000A04D1: ;
    edx = MEM32(eax);
    ecx = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A04DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A04DAu); } /* indirect call */
    }

loc_000A04DD: ;
    edx = MEM32(eax);
    MEM32(esi + 0xB8) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0xBC) = ecx;
    edx = MEM32(eax + 8);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    MEM32(esi + 0xC0) = edx;
    PUSH32(esp, ecx);
    goto loc_000A0458;

loc_000A0506: ;
    MEM32(esi + 0xA8) = 0;

loc_000A0510: ;
    eax = MEM32(ebp + 8);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0520u); RECOMP_ABI_CALL(0x0009F9D0u, sub_0009F9D0); /* call 0x0009F9D0 */

loc_000A0520: ;
    ecx = esi + 0xAC;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x9C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A053Eu); RECOMP_ABI_CALL(0x000138A0u, sub_000138A0); /* call 0x000138A0 */

loc_000A053E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A054Bu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000A054B: ;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    ecx = esi + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0558u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000A0558: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x130)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A05DA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A0568: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x134)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 8); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x130); /* comiss */
    MEMF(esi + 0x134) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A059C; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x130)) */

loc_000A0586: ;
    eax = MEM32(esi + 0x12C);
    MEMF(esi + 0x130) = xmm1.f[0]; /* movss */
    MEM32(esi + 0x124) = eax;
    goto loc_000A05C8;

loc_000A059C: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x128)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x12C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / MEMF(esi + 0x130); /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x124) = xmm2.f[0]; /* movss */

loc_000A05C8: ;
    ecx = MEM32(esi + 0x124);
    edx = MEM32(esi + 0x50);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A05DAu); RECOMP_ABI_CALL(0x001F8C70u, sub_001F8C70); /* call 0x001F8C70 */

loc_000A05DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_000A05F0
 * Original: 0x000A05F0 - 0x000A06AB (187 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A05F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A05F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A06A6; /* je: equal / zero */

loc_000A0601: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esi + 0x7C));
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(ebx));
    PUSH32(esp, edi);
    MEM8(esi + 0x7C) = LO8(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0615u); RECOMP_ABI_CALL(0x0009F900u, sub_0009F900); /* call 0x0009F900 */

loc_000A0615: ;
    ecx = MEM32(esi + 0x74);
    ebx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x000A0622u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A061Cu); } /* indirect call */
    }

loc_000A0622: ;
    ecx = MEM32(0x643844);
    eax = MEM32(eax + 0x1C);
    MEM32(ecx) = eax;
    edx = MEM32(0x6438B4);
    edi = ecx;
    ecx = MEM32(0x6438A8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0644u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_000A0644: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A0652; /* jge: greater or equal (signed >=) */

loc_000A064B: ;
    eax = 0x6438B8;
    goto loc_000A065B;

loc_000A0652: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_000A065B: ;
    eax = MEM32(eax);
    MEM32(edi + 4) = eax;
    eax = MEM32(eax + 0x88);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    edi = eax + 0x10;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x000A0674u); RECOMP_ABI_CALL(0x002186C0u, sub_002186C0); /* call 0x002186C0 */

loc_000A0674: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A0689; /* jl: less (signed <) */

loc_000A0678: ;
    edx = MEM32(edi);
    ecx = MEM32(edx + eax * 8);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(edx + eax * 8 + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A0698; /* jge: greater or equal (signed >=) */

loc_000A0689: ;
    PUSH32(esp, 0);
    ecx = esi;
    MEM8(esi + 0x7C) = 0;
    PUSH32(esp, 0x000A0696u); RECOMP_ABI_CALL(0x0009F900u, sub_0009F900); /* call 0x0009F900 */

loc_000A0696: ;
    ebx = eax;

loc_000A0698: ;
    edx = MEM32(esi + 0x74);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000A06A4u); RECOMP_ABI_CALL(0x0009F760u, sub_0009F760); /* call 0x0009F760 */

loc_000A06A4: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000A06A6: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A06B0
 * Original: 0x000A06B0 - 0x000A06C5 (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A06B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A06B0: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6EDD35C4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x6EDD35C4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A06C2; /* jne: not equal / not zero */

loc_000A06BA: ;
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, 0x000A06C2u); RECOMP_ABI_CALL(0x000A05F0u, sub_000A05F0); /* call 0x000A05F0 */

loc_000A06C2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A06D0
 * Original: 0x000A06D0 - 0x000A0708 (56 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A06D0(void)
{

loc_000A06D0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0xC4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(ecx + 0x68) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30DB8C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E70C0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x60); /* addss */
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000A0710
 * Original: 0x000A0710 - 0x000A073F (47 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0710(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000A0710: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x74); /* comiss */
    MEMF(ecx + 0x70) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A072A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x74)) */

loc_000A0721: ;
    eax = MEM32(ecx + 0x74);
    MEM32(ecx + 0x70) = eax;
    esp += 8; return; /* ret 4 */

loc_000A072A: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A073C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000A0737: ;
    MEMF(ecx + 0x70) = xmm1.f[0]; /* movss */

loc_000A073C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A0740
 * Original: 0x000A0740 - 0x000A0759 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0740(void)
{

loc_000A0740: ;
    eax = MEM32(ecx + 0x50);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x000A0750u); RECOMP_ABI_CALL(0x001F8C70u, sub_001F8C70); /* call 0x001F8C70 */

loc_000A0750: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A0757u); RECOMP_ABI_CALL(0x001F3290u, sub_001F3290); /* call 0x001F3290 */

loc_000A0757: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0760
 * Original: 0x000A0760 - 0x000A07E3 (131 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0760: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000A076Du); RECOMP_ABI_CALL(0x00097EC0u, sub_00097EC0); /* call 0x00097EC0 */

loc_000A076D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, 0x6438E0);
    ecx = esi + 0x80;
    MEM32(esi) = 0x2E70C4;
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A07B4u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000A07B4: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0xC0) = LO8(eax);
    MEM8(esi + 0xC8) = LO8(eax);
    MEMF(esi + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xD0) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A07F0
 * Original: 0x000A07F0 - 0x000A0895 (165 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000A07F0(void)
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

loc_000A07F0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x40;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 4) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    ecx = esp + 0x10;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x28); /* subss */
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A0852u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_000A0852: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEM8(esi + 0xC8) = 1;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A08A0
 * Original: 0x000A08A0 - 0x000A09CD (301 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A08A0(void)
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

loc_000A08A0: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DDA30); /* mulss */
    PUSH32(esp, 0);
    ecx = 0x30EFF0;
    MEMF(esi + 0xCC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A08F7u); RECOMP_ABI_CALL(0x001F2EB0u, sub_001F2EB0); /* call 0x001F2EB0 */

loc_000A08F7: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xCC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x60); /* addss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD3DC)); /* fmul dword ptr [0x2dd3dc] */
    xmm1 = XMM_SCALAR(MEMF(0x2DC3CC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi + 0xD0) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A092E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A0921: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x60); /* subss */
    MEMF(esi + 0xD0) = xmm1.f[0]; /* movss */

loc_000A092E: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xD0)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x64); /* addss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    ecx = 0x30EFF0;
    MEMF(esi + 0x64) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A0956u); RECOMP_ABI_CALL(0x001F2EB0u, sub_001F2EB0); /* call 0x001F2EB0 */

loc_000A0956: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E70DC)); /* fmul dword ptr [0x2e70dc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x64)); /* fadd dword ptr [esi + 0x64] */
    MEMF(esi + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
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
    MEM32(esp + 4) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC08C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD3DC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x60); /* addss */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
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
 * sub_000A09D0
 * Original: 0x000A09D0 - 0x000A0E8A (1210 bytes, 279 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A09D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000A09D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xDC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xC0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0A64; /* je: equal / zero */

loc_000A0A59: ;
    eax = esi + 0x80;
    goto loc_000A0E73;

loc_000A0A64: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000A0A82; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A0A77: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = xmm2; /* movaps */
    if ((_fca > _fcb)) goto loc_000A0A82; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_000A0A7F: ;
    xmm0 = xmm1; /* movaps */

loc_000A0A82: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x70)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x68); /* subss */
    eax = MEM32(esi + 0x50);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x6C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), esi (32-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000A0AC5; /* jne: not equal / not zero */

loc_000A0AB1: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0ABEu); RECOMP_ABI_CALL(0x001F8C70u, sub_001F8C70); /* call 0x001F8C70 */

loc_000A0ABE: ;
    xmm3 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    goto loc_000A0ACF;

loc_000A0AC5: ;
    MEMF(esi + 0x70) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x68) = xmm2.f[0]; /* movss */

loc_000A0ACF: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xCC)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xD0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xCC)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0xCC) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xD0)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0xD0) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, 0x660E4490);
    MEMF(esi + 0x60) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0B5Bu); RECOMP_ABI_CALL(0x0008ECE0u, sub_0008ECE0); /* call 0x0008ECE0 */

loc_000A0B5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0BBA; /* je: equal / zero */

loc_000A0B62: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x284); PUSH32(esp, 0x000A0B6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0B68u); } /* indirect call */
    }

loc_000A0B6E: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0B75u); RECOMP_ABI_CALL(0x000611C0u, sub_000611C0); /* call 0x000611C0 */

loc_000A0B75: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0BBA; /* je: equal / zero */

loc_000A0B7E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0B83u); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_000A0B83: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC340)); /* fsub dword ptr [0x2dc340] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E700C)); /* fmul dword ptr [0x2e700c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0B9Bu); RECOMP_ABI_CALL(0x00012000u, sub_00012000); /* call 0x00012000 */

loc_000A0B9B: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC340)); /* fsub dword ptr [0x2dc340] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E700C)); /* fmul dword ptr [0x2e700c] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x60)); /* fadd dword ptr [esi + 0x60] */
    MEMF(esi + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x64)); /* fadd dword ptr [esi + 0x64] */
    MEMF(esi + 0x64) = (float)fp_top(); fp_pop(); /* fstp */

loc_000A0BBA: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A0D10; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A0BD0: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = -fp_top(); /* fchs */
    ecx = esp + 0x60;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, ecx);
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    xmm4 = xmm0; /* movaps */
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = -fp_top(); /* fchs */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(esp + 0x70) = xmm4.f[0]; /* movss */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    MEMF(esp + 0x88) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xC);
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x2C) = eax;
    eax = esp + 0xA8;
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x6C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm2.f[0]; /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0CEFu); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_000A0CEF: ;
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    ecx = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0D00u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000A0D00: ;
    edx = esp + 0x60;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0D0Eu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000A0D0E: ;
    goto loc_000A0D5A;

loc_000A0D10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0D22u); RECOMP_ABI_CALL(0x0022F74Cu, sub_0022F74C); /* call 0x0022F74C */

loc_000A0D22: ;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0D30u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_000A0D30: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    PUSH32(esp, ecx);
    ecx = esp + 0xA4;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0D4Cu); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_000A0D4C: ;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0D5Au); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_000A0D5A: ;
    PUSH32(esp, 0x660E4490);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0D64u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_000A0D64: ;
    ecx = MEM32(0x6459E8);
    edx = MEM32(0x6459EC);
    MEM32(esp + 0x58) = ecx;
    ecx = MEM32(0x6459F0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x5C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000A0DA5; /* je: equal / zero */

loc_000A0D89: ;
    edx = MEM32(eax);
    ecx = esp + 0x54;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A0D95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0D92u); } /* indirect call */
    }

loc_000A0D95: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    goto loc_000A0DB7;

loc_000A0DA5: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */

loc_000A0DB7: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E6860); /* addss */
    ecx = MEM32(esi + 0x50);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0DE7u); RECOMP_ABI_CALL(0x000976A0u, sub_000976A0); /* call 0x000976A0 */

loc_000A0DE7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0E6F; /* je: equal / zero */

loc_000A0DEF: ;
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2DC09C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000A0E2C; /* jbe: below or equal (unsigned <=) */

loc_000A0E03: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A0E1A; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000A0E15: ;
    xmm0 = xmm2; /* movaps */
    goto loc_000A0E34;

loc_000A0E1A: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A0E34; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A0E27: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000A0E34;

loc_000A0E2C: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */

loc_000A0E34: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0xC4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A0E49; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000A0E41: ;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    goto loc_000A0E62;

loc_000A0E49: ;
    xmm1 = XMM_SCALAR(MEMF(0x2E646C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000A0E62; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A0E5C: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_000A0E62: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0E6Cu); RECOMP_ABI_CALL(0x001F3290u, sub_001F3290); /* call 0x001F3290 */

loc_000A0E6C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A0E6F: ;
    eax = esp + 0x10;

loc_000A0E73: ;
    ecx = esi + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0E7Cu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000A0E7C: ;
    MEM8(esi + 0xC8) = 0;
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
 * sub_000A0E90
 * Original: 0x000A0E90 - 0x000A0ECA (58 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0E90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0E90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000A0E9Du); RECOMP_ABI_CALL(0x00097EC0u, sub_00097EC0); /* call 0x00097EC0 */

loc_000A0E9D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xF8) = eax;
    MEM32(esi + 0xFC) = eax;
    MEM32(esi) = 0x2E70E4;
    MEMF(esi + 0xF4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF0) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A0ED0
 * Original: 0x000A0ED0 - 0x000A0EEF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0ED0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E70E4;
    if (TEST_Z(_fa, _fb)) goto loc_000A0EE9; /* je: equal / zero */

loc_000A0EE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A0EE6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000A0EE6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A0EE9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A0EF0
 * Original: 0x000A0EF0 - 0x000A0FF3 (259 bytes, 89 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A0EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0EF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000A0F1C; /* jne: not equal / not zero */

loc_000A0F07: ;
    MEM32(ebx + 0xF8) = edi;
    MEM32(ebx + 0xFC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000A0F1C: ;
    eax = MEM32(ebx + 0xF8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0F28u); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_000A0F28: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0F5D; /* je: equal / zero */

loc_000A0F31: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A0F38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0F35u); } /* indirect call */
    }

loc_000A0F38: ;
    edx = MEM32(0x30D358);
    ecx = MEM32(0x30D354);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A0F5D; /* jne: not equal / not zero */

loc_000A0F4A: ;
    ecx = MEM32(ebx + 0xFC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x254); PUSH32(esp, 0x000A0F5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0F55u); } /* indirect call */
    }

loc_000A0F5B: ;
    edi = eax;

loc_000A0F5D: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0FEA; /* je: equal / zero */

loc_000A0F68: ;
    esi = MEM32(ecx + 0x278);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0FD4; /* je: equal / zero */

loc_000A0F72: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x258); PUSH32(esp, 0x000A0F7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0F78u); } /* indirect call */
    }

loc_000A0F7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A0FB5; /* jbe: below or equal (unsigned <=) */

loc_000A0F82: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x254); PUSH32(esp, 0x000A0F8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0F87u); } /* indirect call */
    }

loc_000A0F8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0FA3; /* je: equal / zero */

loc_000A0F92: ;
    edx = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x258); PUSH32(esp, 0x000A0F9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0F97u); } /* indirect call */
    }

loc_000A0F9D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A0F82; /* jb: below (unsigned <) */

loc_000A0FA1: ;
    goto loc_000A0FB5;

loc_000A0FA3: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x28);
    MEM32(ebx + 0xF8) = ecx;
    MEM32(ebx + 0xFC) = edi;

loc_000A0FB5: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = ebx + 0x70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0FC4u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000A0FC4: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    ecx = MEM32(ebp + 8);
    MEMF(ebx + 0x60) = xmm0.f[0]; /* movss */

loc_000A0FD4: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0FDEu); RECOMP_ABI_CALL(0x0003C500u, sub_0003C500); /* call 0x0003C500 */

loc_000A0FDE: ;
    PUSH32(esp, eax);
    ecx = ebx + 0xB0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A0FEAu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000A0FEA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A1000
 * Original: 0x000A1000 - 0x000A19B3 (2483 bytes, 573 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A1000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000A1000: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x184) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x184));
    esp = esp - 0x184;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A19AA; /* je: equal / zero */

loc_000A101F: ;
    ecx = MEM32(edi + 0x50);
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A19AA; /* jne: not equal / not zero */

loc_000A102B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1031u); RECOMP_ABI_CALL(0x001EC220u, sub_001EC220); /* call 0x001EC220 */

loc_000A1031: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A19AA; /* je: equal / zero */

loc_000A103C: ;
    PUSH32(esp, eax);
    ecx = 0x30D350;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1047u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_000A1047: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A19AA; /* je: equal / zero */

loc_000A104F: ;
    ecx = MEM32(edi + 0xFC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x254); PUSH32(esp, 0x000A1060u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A105Au); } /* indirect call */
    }

loc_000A1060: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A19AA; /* je: equal / zero */

loc_000A106A: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x220)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x224); /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A10AB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000A1088: ;
    edx = MEM32(esi + 0x224);
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x1C) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x000A1099u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A1096u); } /* indirect call */
    }

loc_000A1099: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x20)); /* fdiv dword ptr [esp + 0x20] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */

loc_000A10AB: ;
    xmm4 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    ecx = esi + 0x2C4;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x10) = edx;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(esp + 0x14) = eax;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(esp + 0x18) = ecx;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    edx = esi + 0x2B8;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x18) = edx;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x98) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x9C) = xmm2.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp + 0xA0) = xmm3.f[0]; /* movss */
    eax = esi + 0x2AC;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = ecx;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(esp + 0x14) = edx;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    ecx = esi + 0x2A0;
    edx = MEM32(ecx);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    xmm7 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(esp + 0x10) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x14) = eax;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x18) = ecx;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E70E0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0xF4); /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0xF4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC884); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC090); /* addss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm3.f[0]; /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A121Du); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_000A121D: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E705C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E7058); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1241u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_000A1241: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xF4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD6D0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E7054); /* addss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7050)); /* fmul dword ptr [0x2e7050] */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1271u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_000A1271: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0xF4)); /* movss */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC904); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E5CA8); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1297u); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_000A1297: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xF4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DD414); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E2C30); /* addss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E704C)); /* fmul dword ptr [0x2e704c] */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A12C7u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_000A12C7: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0xF4)); /* movss */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC884); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DDA4C); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A12EDu); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_000A12ED: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    eax = MEM32(esi + 0x278);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E3D30)); /* fmul dword ptr [0x2e3d30] */
    MEMF(esp + 0xAC) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_000A13F0; /* je: equal / zero */

loc_000A130F: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xB0)) >> 32) & 1);
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 0xF4;
    ebx = edi + 0x70;
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1327u); RECOMP_ABI_CALL(0x00044FF0u, sub_00044FF0); /* call 0x00044FF0 */

loc_000A1327: ;
    PUSH32(esp, eax);
    eax = esp + 0xB8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1335u); RECOMP_ABI_CALL(0x00018610u, sub_00018610); /* call 0x00018610 */

loc_000A1335: ;
    ecx = MEM32(esi + 0x278);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xB0)) >> 32) & 1);
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A134Cu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000A134C: ;
    ecx = MEM32(esp + 0xD4);
    eax = MEM32(esp + 0xD0);
    edx = MEM32(esp + 0xC8);
    ebx = MEM32(esp + 0xC0);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0xD8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A137Eu); RECOMP_ABI_CALL(0x001FA000u, sub_001FA000); /* call 0x001FA000 */

loc_000A137E: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(esp + 0xCC);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A138Eu); RECOMP_ABI_CALL(0x001FA000u, sub_001FA000); /* call 0x001FA000 */

loc_000A138E: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x268)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2DC09C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_000A13D6; /* ja: above (unsigned >) */

loc_000A13A9: ;
    fp_push(MEMF(esi + 0x260)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2DC09C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_000A13D6; /* ja: above (unsigned >) */

loc_000A13BF: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x29C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x60); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DDA40); /* mulss */
    goto loc_000A13E6;

loc_000A13D6: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x60); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E7104); /* mulss */

loc_000A13E6: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x60); /* addss */
    MEMF(edi + 0x60) = xmm0.f[0]; /* movss */

loc_000A13F0: ;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A13FCu); RECOMP_ABI_CALL(0x0003C500u, sub_0003C500); /* call 0x0003C500 */

loc_000A13FC: ;
    eax = MEM32(edi + 0x60);
    PUSH32(esp, eax);
    ebx = edi + 0xB0;
    PUSH32(esp, ebx);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    edx = esp + 0xFC;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1419u); RECOMP_ABI_CALL(0x000990D0u, sub_000990D0); /* call 0x000990D0 */

loc_000A1419: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1426u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000A1426: ;
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1432u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000A1432: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x9C;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1449u); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_000A1449: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    eax = MEM32(esp + 0x30);
    MEM32(esp + 0x10) = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    MEM32(esp + 0x14) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = eax;
    edx = esp + 0x48;
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x8C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A14BDu); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_000A14BD: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    MEM32(esp + 0x10) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    PUSH32(esp, 0);
    ecx = esp + 0xF4;
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A150Au); RECOMP_ABI_CALL(0x0003C420u, sub_0003C420); /* call 0x0003C420 */

loc_000A150A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x30); /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x48); /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x4C); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x80); /* subss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x84); /* subss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x88); /* subss */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A157Cu); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_000A157C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esp + 0xF4;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1590u); RECOMP_ABI_CALL(0x0003C420u, sub_0003C420); /* call 0x0003C420 */

loc_000A1590: ;
    edx = esp + 0xB0;
    ebx = eax;
    PUSH32(esp, edx);
    ecx = esi;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x30)) >> 32) & 1);
    ebx = ebx + 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A15A4u); RECOMP_ABI_CALL(0x0003C500u, sub_0003C500); /* call 0x0003C500 */

loc_000A15A4: ;
    fp_push(MEMF(eax + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx)); /* fsub dword ptr [ebx] */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 4)); /* fld float */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx + 4)); /* fsub dword ptr [ebx + 4] */
    xmm0 = xmm2; /* movaps */
    fp_push(MEMF(eax + 8)); /* fld float */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x38); /* subss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx + 8)); /* fsub dword ptr [ebx + 8] */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x3C); /* subss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x40); /* subss */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x34); /* addss */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0xAC); /* addss */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1624u); RECOMP_ABI_CALL(0x001F64B0u, sub_001F64B0); /* call 0x001F64B0 */

loc_000A1624: ;
    ecx = MEM32(esi + 0x278);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x1C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000A16F9; /* je: equal / zero */

loc_000A163A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x000A1642u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A163Cu); } /* indirect call */
    }

loc_000A1642: ;
    MEM32(esp + 0x130) = eax;
    eax = MEM32(esi + 0x278);
    PUSH32(esp, eax);
    ecx = 0x30D8A0;
    MEM32(esp + 0x20) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1662u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_000A1662: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A16F9; /* je: equal / zero */

loc_000A166C: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x208); PUSH32(esp, 0x000A1676u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A1670u); } /* indirect call */
    }

loc_000A1676: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A16F9; /* je: equal / zero */

loc_000A167A: ;
    edx = MEM32(ebx);
    ecx = ebx;
    MEM32(esp + 0x20) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x000A168Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A1686u); } /* indirect call */
    }

loc_000A168C: ;
    SET_LO8(ecx, MEM8(eax + 0x8C9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000A16F9; /* jle: less or equal (signed <=) */

loc_000A1696: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x000A16A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A169Fu); } /* indirect call */
    }

loc_000A16A5: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A16ACu); RECOMP_ABI_CALL(0x00163590u, sub_00163590); /* call 0x00163590 */

loc_000A16AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x34) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000A16DE; /* je: equal / zero */

loc_000A16B4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x000A16BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A16B8u); } /* indirect call */
    }

loc_000A16BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A16DE; /* je: equal / zero */

loc_000A16C2: ;
    ecx = MEM32(esp + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000A16CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A16C8u); } /* indirect call */
    }

loc_000A16CE: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + ecx * 4 + 0x130) = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ecx;

loc_000A16DE: ;
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x000A16ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A16E6u); } /* indirect call */
    }

loc_000A16EC: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x8C9);
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000A1696; /* jl: less (signed <) */

loc_000A16F9: ;
    ecx = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC08C); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x88);
    edx = esp + 0x138;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x90);
    PUSH32(esp, 0);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x48); /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xA4);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    edx = esp;
    MEM32(edx) = eax;
    MEM32(edx + 4) = ecx;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    ecx = esp + 0xCC;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(edx + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A17AFu); RECOMP_ABI_CALL(0x00098740u, sub_00098740); /* call 0x00098740 */

loc_000A17AF: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E7100); /* mulss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    xmm7 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca > _fcb)) goto loc_000A1837; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000A182C: ;
    _fca = xmm0.f[0]; _fcb = xmm7.f[0]; /* comiss */
    xmm1 = xmm7; /* movaps */
    if ((_fca > _fcb)) goto loc_000A1837; /* ja: above (unsigned >) (xmm0.f[0] vs xmm7.f[0]) */

loc_000A1834: ;
    xmm1 = xmm0; /* movaps */

loc_000A1837: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0xF0); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0xF0); /* addss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x38); /* mulss */
    edx = esp + 0xF0;
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(edi + 0xF0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm7.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A18BBu); RECOMP_ABI_CALL(0x0003C500u, sub_0003C500); /* call 0x0003C500 */

loc_000A18BB: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A18C2u); RECOMP_ABI_CALL(0x001F88A0u, sub_001F88A0); /* call 0x001F88A0 */

loc_000A18C2: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    esi = edi + 0x10;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A18D0u); RECOMP_ABI_CALL(0x001F88A0u, sub_001F88A0); /* call 0x001F88A0 */

loc_000A18D0: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x6438E0);
    ecx = esp + 0x154;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A18E5u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000A18E5: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    PUSH32(esp, ecx);
    eax = esp + 0x154;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1906u); RECOMP_ABI_CALL(0x0022F841u, sub_0022F841); /* call 0x0022F841 */

loc_000A1906: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x154;
    PUSH32(esp, edx);
    eax = esp + 0xB8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1920u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_000A1920: ;
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    ecx = esp + 0xF4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1934u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000A1934: ;
    edx = esp + 0xF0;
    PUSH32(esp, edx);
    ecx = esp + 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A1945u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000A1945: ;
    eax = MEM32(esp + 0x88);
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A195Au); RECOMP_ABI_CALL(0x001F1530u, sub_001F1530); /* call 0x001F1530 */

loc_000A195A: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x8C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC3C4)); /* fadd dword ptr [0x2dc3c4] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A199E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A197B: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x80) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */

loc_000A199E: ;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A19AAu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000A19AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_000A19C0
 * Original: 0x000A19C0 - 0x000A1A05 (69 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A19C0(void)
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

loc_000A19C0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A19D3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000A19CE: ;
    fp_push(MEMF(ecx)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_000A19D3: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A19E2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC08C)) */

loc_000A19DC: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_000A19E2: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A1A10
 * Original: 0x000A1A10 - 0x000A1A2B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1A10(void)
{

loc_000A1A10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x3F800000);
    ecx = 0x4140CC;
    PUSH32(esp, 0x000A1A22u); RECOMP_ABI_CALL(0x001FFBB0u, sub_001FFBB0); /* call 0x001FFBB0 */

loc_000A1A22: ;
    MEM8(esi + 0x270) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1A2A
 * Original: 0x000A1A2A - 0x000A1A2B (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1A2A(void)
{

loc_000A1A2A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A1A30
 * Original: 0x000A1A30 - 0x000A1A54 (36 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1A30(void)
{

loc_000A1A30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x3F800000);
    ecx = 0x4140CC;
    PUSH32(esp, 0x000A1A42u); RECOMP_ABI_CALL(0x001FFBB0u, sub_001FFBB0); /* call 0x001FFBB0 */

loc_000A1A42: ;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x000A1A52u); RECOMP_ABI_CALL(0x001F8C70u, sub_001F8C70); /* call 0x001F8C70 */

loc_000A1A52: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1A60
 * Original: 0x000A1A60 - 0x000A1B22 (194 bytes, 50 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1A60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000A1AF8; /* jne: not equal / not zero */

loc_000A1A75: ;
    ecx = ebx;
    MEM32(esi + 0x274) = 0;
    PUSH32(esp, 0x000A1A86u); RECOMP_ABI_CALL(0x000115C0u, sub_000115C0); /* call 0x000115C0 */

loc_000A1A86: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1A94; /* je: equal / zero */

loc_000A1A8A: ;
    MEM32(esi + 0x274) = 0;

loc_000A1A94: ;
    ecx = ebx;
    PUSH32(esp, 0x000A1A9Bu); RECOMP_ABI_CALL(0x00011590u, sub_00011590); /* call 0x00011590 */

loc_000A1A9B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1AE1; /* je: equal / zero */

loc_000A1A9F: ;
    ecx = ebx;
    PUSH32(esp, 0x000A1AA6u); RECOMP_ABI_CALL(0x00011610u, sub_00011610); /* call 0x00011610 */

loc_000A1AA6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A1AD7; /* jne: not equal / not zero */

loc_000A1AAA: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x000A1AB1u); RECOMP_ABI_CALL(0x00011E90u, sub_00011E90); /* call 0x00011E90 */

loc_000A1AB1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000A1AD7; /* je: equal / zero */

loc_000A1AB9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000A1ACB; /* je: equal / zero */

loc_000A1ABC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A1AD7; /* jne: not equal / not zero */

loc_000A1ABF: ;
    MEM32(esi + 0x274) = 3;
    goto loc_000A1AE1;

loc_000A1ACB: ;
    MEM32(esi + 0x274) = 2;
    goto loc_000A1AE1;

loc_000A1AD7: ;
    MEM32(esi + 0x274) = 1;

loc_000A1AE1: ;
    ecx = ebx;
    PUSH32(esp, 0x000A1AE8u); RECOMP_ABI_CALL(0x000115D0u, sub_000115D0); /* call 0x000115D0 */

loc_000A1AE8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1AFE; /* je: equal / zero */

loc_000A1AEC: ;
    MEM32(esi + 0x274) = 4;
    goto loc_000A1AFE;

loc_000A1AF8: ;
    MEM32(esi + 0x274) = eax;

loc_000A1AFE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x278) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(esi + 0x280) = ebx;
    MEMF(esi + 0x27C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000A1B30
 * Original: 0x000A1B30 - 0x000A1C67 (311 bytes, 84 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000A1B30: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    PUSH32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A1B5F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000A1B42: ;
    esi = MEM32(ecx);
    eax = MEM32(esp + 0x14);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000A1B5F: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A1B88; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC08C)) */

loc_000A1B68: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ecx);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000A1B88: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    xmm5 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 4); /* subss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ecx + 8); /* subss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    eax = MEM32(esp + 0x14);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0xC); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x10); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ecx + 0x14); /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm6.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 4);
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edx = eax;
    MEM32(edx) = ecx;
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 8);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm7.f[0]; /* addss */
    MEM32(edx + 4) = ecx;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    MEM32(edx + 8) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A1C70
 * Original: 0x000A1C70 - 0x000A2212 (1442 bytes, 191 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1C70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000A1C7Du); RECOMP_ABI_CALL(0x00097EC0u, sub_00097EC0); /* call 0x00097EC0 */

loc_000A1C7D: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DDE24)); /* movss */
    MEM32(esi) = 0x2E7124;
    MEMF(esi + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x68) = xmm1.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x2DDC40)); /* movss */
    MEMF(esi + 0x64) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x6C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x70) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x74) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x7C) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x80) = xmm1.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DDE20)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x2DDC44)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x2E7120)); /* movss */
    MEMF(esi + 0x1EC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1F0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1F4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x8C) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x84) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x88) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x94) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x2DD3E0)); /* movss */
    MEMF(esi + 0x98) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x2E5CA8)); /* movss */
    MEMF(esi + 0x90) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x9C) = xmm6.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2E711C)); /* movss */
    MEMF(esi + 0xA0) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    MEMF(esi + 0xA4) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x1F8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1FC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x200) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xAC) = xmm2.f[0]; /* movss */
    MEMF(esi + 0xB0) = xmm5.f[0]; /* movss */
    MEMF(esi + 0xB4) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2DD414)); /* movss */
    MEMF(esi + 0xB8) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2DEEBC)); /* movss */
    MEMF(esi + 0xBC) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2DD3E0)); /* movss */
    MEMF(esi + 0xC0) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x2E5CA8)); /* movss */
    MEMF(esi + 0xC4) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x2DC8AC)); /* movss */
    MEMF(esi + 0xC8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x204) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x208) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xCC) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x2E515C)); /* movss */
    MEMF(esi + 0xD0) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x2DC880)); /* movss */
    MEMF(esi + 0xD4) = xmm6.f[0]; /* movss */
    MEMF(esi + 0xD8) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2E7118)); /* movss */
    MEMF(esi + 0xDC) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2E16C4)); /* movss */
    MEMF(esi + 0xE0) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2DDE20)); /* movss */
    MEMF(esi + 0xE4) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2DD700)); /* movss */
    MEMF(esi + 0xE8) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    MEMF(esi + 0xEC) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2E169C)); /* movss */
    MEMF(esi + 0x210) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x214) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x218) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xF0) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2E7120)); /* movss */
    MEMF(esi + 0xF4) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    MEMF(esi + 0xF8) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x104) = xmm2.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2E7114)); /* movss */
    MEMF(esi + 0xFC) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2E7110)); /* movss */
    MEMF(esi + 0x100) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x10C) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x110) = xmm0.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2E710C)); /* movss */
    MEMF(esi + 0x108) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x21C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x220) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x224) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x118) = xmm3.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2E169C)); /* movss */
    MEMF(esi + 0x114) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    MEMF(esi + 0x11C) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x124) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x128) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x120) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x130) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x12C) = xmm2.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2E169C)); /* movss */
    MEMF(esi + 0x134) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    MEMF(esi + 0x228) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x22C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x230) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x13C) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x138) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x140) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x148) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x144) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x14C) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x154) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x150) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x158) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x234) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x238) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x23C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x15C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2E169C)); /* movss */
    MEMF(esi + 0x160) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    MEMF(esi + 0x164) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    MEMF(esi + 0x168) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x16C) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x170) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x174) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2E7108)); /* movss */
    MEMF(esi + 0x178) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x17C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x240) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x244) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x248) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x180) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x184) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x188) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x18C) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x190) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x194) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x1A0) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    MEMF(esi + 0x198) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x19C) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x24C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x250) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x254) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1A8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2DDC44)); /* movss */
    MEMF(esi + 0x1AC) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC8DC)); /* movss */
    MEMF(esi + 0x1A4) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x1B8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2DBED4)); /* movss */
    MEMF(esi + 0x1B0) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x1B4) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x1BC) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2E429C)); /* movss */
    MEMF(esi + 0x1C4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2DDA34)); /* movss */
    MEMF(esi + 0x1C0) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x258) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x25C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x260) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C8) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x1CC) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x1D0) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x1D4) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x1D8) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x1DC) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x1E0) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x1E4) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x1E8) = xmm1.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esi + 0x264) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x268) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x26C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC8A0)); /* movss */
    MEM32(esi + 0x274) = eax;
    MEM32(esi + 0x280) = eax;
    MEMF(esi + 0x278) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x27C) = xmm2.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2220
 * Original: 0x000A2220 - 0x000A223F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2220: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E7124;
    if (TEST_Z(_fa, _fb)) goto loc_000A2239; /* je: equal / zero */

loc_000A2230: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A2236u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000A2236: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A2239: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2240
 * Original: 0x000A2240 - 0x000A25BB (891 bytes, 228 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2240(void)
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

loc_000A2240: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x280);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A25B1; /* je: equal / zero */

loc_000A2257: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A25B1; /* jne: not equal / not zero */

loc_000A2263: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x278)); /* movss */
    eax = MEM32(esi + 0x274);
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x27C); /* divss */
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    MEMF(esp) = xmm0.f[0]; /* movss */
    edx = eax + eax * 8;
    PUSH32(esp, ecx);
    ecx = esi + edx * 4 + 0x60;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xB0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000A2296u); RECOMP_ABI_CALL(0x000A1B30u, sub_000A1B30); /* call 0x000A1B30 */

loc_000A2296: ;
    SET_LO8(eax, MEM8(esi + 0x270));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A22D4; /* je: equal / zero */

loc_000A22A0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */

loc_000A22D4: ;
    PUSH32(esp, edi);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A22E4u); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_000A22E4: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 0x3C) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x3C); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    MEM32(esp + 0x40) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x40); /* addss */
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esi + 0x280);
    edx = MEM32(ecx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x44); /* addss */
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A233Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A233Cu); } /* indirect call */
    }

loc_000A233F: ;
    ecx = MEM32(esi + 0x280);
    PUSH32(esp, 0x000A234Au); RECOMP_ABI_CALL(0x000115D0u, sub_000115D0); /* call 0x000115D0 */

loc_000A234A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A237C; /* je: equal / zero */

loc_000A234E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC08C); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    goto loc_000A2382;

loc_000A237C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */

loc_000A2382: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x24); /* subss */
    ecx = MEM32(esi + 0x280);
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x2C); /* subss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x000A23C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A23BEu); } /* indirect call */
    }

loc_000A23C4: ;
    ecx = MEM32(esi + 0x280);
    edi = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x20);
    edx = esp + 0x48;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x40) = edi;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x48) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000A23F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A23EDu); } /* indirect call */
    }

loc_000A23F0: ;
    ecx = MEM32(esi + 0x280);
    PUSH32(esp, 0x000A23FBu); RECOMP_ABI_CALL(0x000115D0u, sub_000115D0); /* call 0x000115D0 */

loc_000A23FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2413; /* je: equal / zero */

loc_000A23FF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC3F0); /* addss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */

loc_000A2413: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edi;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = ebp;
    ecx = MEM32(esp + 0x68);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x78);
    MEM32(edx + 4) = ecx;
    ecx = esp + 0x88;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x000A2453u); RECOMP_ABI_CALL(0x00098740u, sub_00098740); /* call 0x00098740 */

loc_000A2453: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    SET_LO8(eax, MEM8(esi + 0x270));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000A24B4; /* jne: not equal / not zero */

loc_000A2472: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x3C); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A2497; /* jp: parity */

loc_000A247D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A2497; /* jp: parity */

loc_000A248C: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0x44); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000A24B4; /* jnp: not parity */

loc_000A2497: ;
    eax = MEM32(esp + 0x70);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esi + 0x270) = 1;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A24AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A24A7u); } /* indirect call */
    }

loc_000A24AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000A24B4: ;
    ecx = esp + 0x54;
    edi = esi + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000A24C3u); RECOMP_ABI_CALL(0x001F64B0u, sub_001F64B0); /* call 0x001F64B0 */

loc_000A24C3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(edi + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(edi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x3C) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x274);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A256A; /* je: equal / zero */

loc_000A24FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A256A; /* je: equal / zero */

loc_000A2500: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A256A; /* je: equal / zero */

loc_000A2505: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A256A; /* je: equal / zero */

loc_000A250A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A256A; /* je: equal / zero */

loc_000A250F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A256A; /* je: equal / zero */

loc_000A2514: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A256A; /* je: equal / zero */

loc_000A2519: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A256A; /* je: equal / zero */

loc_000A251E: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x278)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2DC904); /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A254A; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000A2542: ;
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    goto loc_000A255B;

loc_000A254A: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000A255B; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A2555: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_000A255B: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = 0x4140CC;
    PUSH32(esp, 0x000A256Au); RECOMP_ABI_CALL(0x001FFBB0u, sub_001FFBB0); /* call 0x001FFBB0 */

loc_000A256A: ;
    eax = MEM32(esi + 0x274);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x278); /* addss */
    _fb = (uint32_t)(0x29) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x29;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEMF(esi + 0x278) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x27C); /* divss */
    eax = eax + eax * 2;
    ecx = esi + eax * 4;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A25A2u); RECOMP_ABI_CALL(0x000A19C0u, sub_000A19C0); /* call 0x000A19C0 */

loc_000A25A2: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x50);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, 0x000A25B1u); RECOMP_ABI_CALL(0x001F8C70u, sub_001F8C70); /* call 0x001F8C70 */

loc_000A25B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A25C0
 * Original: 0x000A25C0 - 0x000A25D2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A25C0(void)
{

loc_000A25C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A25C8u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_000A25C8: ;
    MEM32(esi) = 0x2E7140;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A25E0
 * Original: 0x000A25E0 - 0x000A25EE (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A25E0(void)
{

loc_000A25E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A25EAu); RECOMP_ABI_CALL(0x0020F5D0u, sub_0020F5D0); /* call 0x0020F5D0 */

loc_000A25EA: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A25F0
 * Original: 0x000A25F0 - 0x000A25F5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A25F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A25F0: ;
    g_seh_ebp = ebp; sub_0020EB00(); return; /* tail jmp 0x0020EB00 */

}

/**
 * sub_000A2600
 * Original: 0x000A2600 - 0x000A2625 (37 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2600: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    MEM32(eax) = 0xF000;
    MEM32(eax + 4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000A2622; /* je: equal / zero */

loc_000A2618: ;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 4) = edx;

loc_000A2622: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2630
 * Original: 0x000A2630 - 0x000A2646 (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2630: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2650
 * Original: 0x000A2650 - 0x000A2655 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2650: ;
    g_seh_ebp = ebp; sub_001FA1D0(); return; /* tail jmp 0x001FA1D0 */

}

/**
 * sub_000A2660
 * Original: 0x000A2660 - 0x000A266B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2660(void)
{

loc_000A2660: ;
    MEM32(0x7ACAC4) = 0x3235E8;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2670
 * Original: 0x000A2670 - 0x000A267C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2670: ;
    eax = MEM32(ecx + 0xC4);
    eax = eax >> 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A2680
 * Original: 0x000A2680 - 0x000A268C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2680: ;
    eax = MEM32(ecx + 0xC4);
    eax = eax >> 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A2690
 * Original: 0x000A2690 - 0x000A269C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2690(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2690: ;
    eax = MEM32(ecx + 0xC4);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A26A0
 * Original: 0x000A26A0 - 0x000A26AC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A26A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A26A0: ;
    eax = MEM32(ecx + 0xC4);
    eax = eax >> 0xE;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A26B0
 * Original: 0x000A26B0 - 0x000A26BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A26B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A26B0: ;
    eax = MEM32(ecx + 0xC0);
    eax = eax >> 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A26C0
 * Original: 0x000A26C0 - 0x000A26CC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A26C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A26C0: ;
    eax = MEM32(ecx + 0xC0);
    eax = eax >> 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A26D0
 * Original: 0x000A26D0 - 0x000A26DC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A26D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A26D0: ;
    eax = MEM32(ecx + 0xC0);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A26E0
 * Original: 0x000A26E0 - 0x000A26EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A26E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A26E0: ;
    eax = MEM32(ecx + 0xC0);
    eax = eax >> 0xE;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A26F0
 * Original: 0x000A26F0 - 0x000A26FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A26F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A26F0: ;
    eax = MEM32(ecx + 0xC0);
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A2700
 * Original: 0x000A2700 - 0x000A270B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2700(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000A2700: ;
    eax = MEM32(ecx + 0x120);
    fp_push(MEMF(ecx + eax * 4 + 0x40)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A2710
 * Original: 0x000A2710 - 0x000A271B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2710(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000A2710: ;
    eax = MEM32(ecx + 0x130);
    fp_push(MEMF(ecx + eax * 4 + 0x40)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A2720
 * Original: 0x000A2720 - 0x000A2724 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2720(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000A2720: ;
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A2730
 * Original: 0x000A2730 - 0x000A2734 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2730(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000A2730: ;
    fp_push(MEMF(ecx + 0x3C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A2740
 * Original: 0x000A2740 - 0x000A274C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2740(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2740: ;
    eax = MEM32(ecx + 0xC0);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A2750
 * Original: 0x000A2750 - 0x000A275A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2750(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2750: ;
    eax = MEM32(ecx + 0xC0);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A2760
 * Original: 0x000A2760 - 0x000A276C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2760: ;
    eax = MEM32(ecx + 0xC0);
    eax = eax >> 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A2770
 * Original: 0x000A2770 - 0x000A277C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2770: ;
    eax = MEM32(ecx + 0xC0);
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A2780
 * Original: 0x000A2780 - 0x000A278C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2780(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2780: ;
    eax = MEM32(ecx + 0xC0);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A2790
 * Original: 0x000A2790 - 0x000A279C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2790: ;
    eax = MEM32(ecx + 0xC0);
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A27A0
 * Original: 0x000A27A0 - 0x000A27AB (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A27A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A27A0: ;
    eax = MEM32(ecx + 0xC0);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A27B0
 * Original: 0x000A27B0 - 0x000A27BB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A27B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000A27B0: ;
    eax = MEM32(ecx + 0x1E0);
    fp_push(MEMF(ecx + eax * 4 + 0x40)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A27C0
 * Original: 0x000A27C0 - 0x000A2985 (453 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A27C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A27C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xE4;
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x000A27D3u); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A27D3: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = edi;
    PUSH32(esp, 0x000A27DCu); RECOMP_ABI_CALL(0x000A2600u, sub_000A2600); /* call 0x000A2600 */

loc_000A27DC: ;
    edi = esi + 0xF4;
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x000A27EBu); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A27EB: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = edi;
    PUSH32(esp, 0x000A27F4u); RECOMP_ABI_CALL(0x000A2600u, sub_000A2600); /* call 0x000A2600 */

loc_000A27F4: ;
    edi = esi + 0x104;
    PUSH32(esp, 7);
    ecx = edi;
    PUSH32(esp, 0x000A2803u); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A2803: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = edi;
    PUSH32(esp, 0x000A280Cu); RECOMP_ABI_CALL(0x000A2600u, sub_000A2600); /* call 0x000A2600 */

loc_000A280C: ;
    PUSH32(esp, 0);
    ecx = esi + 0x114;
    PUSH32(esp, 0x000A2819u); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A2819: ;
    PUSH32(esp, 1);
    ecx = esi + 0x124;
    PUSH32(esp, 0x000A2826u); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A2826: ;
    PUSH32(esp, 1);
    ecx = esi + 0x134;
    PUSH32(esp, 0x000A2833u); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A2833: ;
    PUSH32(esp, 2);
    ecx = esi + 0x144;
    PUSH32(esp, 0x000A2840u); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A2840: ;
    PUSH32(esp, 4);
    ecx = esi + 0x154;
    PUSH32(esp, 0x000A284Du); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A284D: ;
    PUSH32(esp, 0xA);
    ecx = esi + 0x164;
    PUSH32(esp, 0x000A285Au); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A285A: ;
    PUSH32(esp, 0xB);
    ecx = esi + 0x174;
    PUSH32(esp, 0x000A2867u); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A2867: ;
    PUSH32(esp, 3);
    ecx = esi + 0x1A4;
    PUSH32(esp, 0x000A2874u); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A2874: ;
    PUSH32(esp, 0xB);
    ecx = esi + 0x184;
    PUSH32(esp, 0x000A2881u); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A2881: ;
    PUSH32(esp, 0xB);
    ecx = esi + 0x194;
    PUSH32(esp, 0x000A288Eu); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A288E: ;
    edi = esi + 0x1B4;
    PUSH32(esp, 4);
    ecx = edi;
    PUSH32(esp, 0x000A289Du); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A289D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = edi;
    PUSH32(esp, 0x000A28A6u); RECOMP_ABI_CALL(0x000A2600u, sub_000A2600); /* call 0x000A2600 */

loc_000A28A6: ;
    edi = esi + 0x1C4;
    PUSH32(esp, 4);
    ecx = edi;
    PUSH32(esp, 0x000A28B5u); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A28B5: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = edi;
    PUSH32(esp, 0x000A28BEu); RECOMP_ABI_CALL(0x000A2600u, sub_000A2600); /* call 0x000A2600 */

loc_000A28BE: ;
    edi = esi + 0x1D4;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x000A28CDu); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A28CD: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = edi;
    PUSH32(esp, 0x000A28D6u); RECOMP_ABI_CALL(0x000A2600u, sub_000A2600); /* call 0x000A2600 */

loc_000A28D6: ;
    PUSH32(esp, 2);
    ecx = esi + 0x1E4;
    PUSH32(esp, 0x000A28E3u); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A28E3: ;
    edi = esi + 0x204;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A28F2u); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A28F2: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = edi;
    PUSH32(esp, 0x000A28FBu); RECOMP_ABI_CALL(0x000A2600u, sub_000A2600); /* call 0x000A2600 */

loc_000A28FB: ;
    edi = esi + 0x1F4;
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x000A290Au); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A290A: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = edi;
    PUSH32(esp, 0x000A2913u); RECOMP_ABI_CALL(0x000A2600u, sub_000A2600); /* call 0x000A2600 */

loc_000A2913: ;
    edi = esi + 0x214;
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x000A2922u); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A2922: ;
    PUSH32(esp, 0xE);
    ecx = edi;
    PUSH32(esp, 0x000A292Bu); RECOMP_ABI_CALL(0x000A2600u, sub_000A2600); /* call 0x000A2600 */

loc_000A292B: ;
    edi = esi + 0x224;
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x000A293Au); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A293A: ;
    PUSH32(esp, 0xF);
    ecx = edi;
    PUSH32(esp, 0x000A2943u); RECOMP_ABI_CALL(0x000A2600u, sub_000A2600); /* call 0x000A2600 */

loc_000A2943: ;
    PUSH32(esp, 0xA);
    ecx = esi + 0x234;
    PUSH32(esp, 0x000A2950u); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A2950: ;
    PUSH32(esp, 6);
    ecx = esi + 0x244;
    PUSH32(esp, 0x000A295Du); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A295D: ;
    PUSH32(esp, 3);
    ecx = esi + 0x254;
    PUSH32(esp, 0x000A296Au); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A296A: ;
    _fb = (uint32_t)(0x264) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x264;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x000A2979u); RECOMP_ABI_CALL(0x000A2630u, sub_000A2630); /* call 0x000A2630 */

loc_000A2979: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0x000A2982u); RECOMP_ABI_CALL(0x000A2600u, sub_000A2600); /* call 0x000A2600 */

loc_000A2982: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2990
 * Original: 0x000A2990 - 0x000A29B5 (37 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2990: ;
    eax = MEM32(ecx + 0xC0);
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    if ((_fa != 0)) goto loc_000A29B0; /* jne: not equal / not zero */

loc_000A29A7: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 8), eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

loc_000A29B0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A29C0
 * Original: 0x000A29C0 - 0x000A29E7 (39 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A29C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A29C0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0xC0);
    edx = edx & MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fa != 0)) goto loc_000A29E2; /* jne: not equal / not zero */

loc_000A29D1: ;
    edx = MEM32(eax + 8);
    ecx = MEM32(ecx + 0xC4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, ecx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

loc_000A29E2: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A29F0
 * Original: 0x000A29F0 - 0x000A2A17 (39 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A29F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A29F0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0xC0);
    edx = edx & MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fa != 0)) goto loc_000A2A12; /* jne: not equal / not zero */

loc_000A2A01: ;
    edx = MEM32(eax + 8);
    ecx = MEM32(ecx + 0xC8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, ecx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

loc_000A2A12: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2A20
 * Original: 0x000A2A20 - 0x000A2CA9 (649 bytes, 116 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2A20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A2A29u); RECOMP_ABI_CALL(0x0020F800u, sub_0020F800); /* call 0x0020F800 */

loc_000A2A29: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2E7158;
    MEM32(esi + 0xE4) = ebx;
    MEM32(esi + 0xE8) = ebx;
    MEM32(esi + 0xEC) = ebx;
    MEM32(esi + 0xF0) = ebx;
    MEM32(esi + 0xF4) = ebx;
    MEM32(esi + 0xF8) = ebx;
    MEM32(esi + 0xFC) = ebx;
    MEM32(esi + 0x100) = ebx;
    MEM32(esi + 0x104) = ebx;
    MEM32(esi + 0x108) = ebx;
    MEM32(esi + 0x10C) = ebx;
    MEM32(esi + 0x110) = ebx;
    MEM32(esi + 0x114) = ebx;
    MEM32(esi + 0x118) = ebx;
    MEM32(esi + 0x11C) = ebx;
    MEM32(esi + 0x120) = ebx;
    MEM32(esi + 0x124) = ebx;
    MEM32(esi + 0x128) = ebx;
    MEM32(esi + 0x12C) = ebx;
    MEM32(esi + 0x130) = ebx;
    MEM32(esi + 0x134) = ebx;
    MEM32(esi + 0x138) = ebx;
    MEM32(esi + 0x13C) = ebx;
    MEM32(esi + 0x140) = ebx;
    MEM32(esi + 0x144) = ebx;
    MEM32(esi + 0x148) = ebx;
    MEM32(esi + 0x14C) = ebx;
    MEM32(esi + 0x150) = ebx;
    MEM32(esi + 0x154) = ebx;
    MEM32(esi + 0x158) = ebx;
    MEM32(esi + 0x15C) = ebx;
    MEM32(esi + 0x160) = ebx;
    MEM32(esi + 0x164) = ebx;
    MEM32(esi + 0x168) = ebx;
    MEM32(esi + 0x16C) = ebx;
    MEM32(esi + 0x170) = ebx;
    MEM32(esi + 0x174) = ebx;
    MEM32(esi + 0x178) = ebx;
    MEM32(esi + 0x17C) = ebx;
    MEM32(esi + 0x180) = ebx;
    MEM32(esi + 0x184) = ebx;
    MEM32(esi + 0x188) = ebx;
    MEM32(esi + 0x18C) = ebx;
    MEM32(esi + 0x190) = ebx;
    MEM32(esi + 0x194) = ebx;
    MEM32(esi + 0x198) = ebx;
    MEM32(esi + 0x19C) = ebx;
    MEM32(esi + 0x1A0) = ebx;
    MEM32(esi + 0x1A4) = ebx;
    MEM32(esi + 0x1A8) = ebx;
    MEM32(esi + 0x1AC) = ebx;
    MEM32(esi + 0x1B0) = ebx;
    MEM32(esi + 0x1B4) = ebx;
    MEM32(esi + 0x1B8) = ebx;
    MEM32(esi + 0x1BC) = ebx;
    MEM32(esi + 0x1C0) = ebx;
    MEM32(esi + 0x1C4) = ebx;
    MEM32(esi + 0x1C8) = ebx;
    MEM32(esi + 0x1CC) = ebx;
    MEM32(esi + 0x1D0) = ebx;
    MEM32(esi + 0x1D4) = ebx;
    MEM32(esi + 0x1D8) = ebx;
    MEM32(esi + 0x1DC) = ebx;
    MEM32(esi + 0x1E0) = ebx;
    MEM32(esi + 0x1E4) = ebx;
    MEM32(esi + 0x1E8) = ebx;
    MEM32(esi + 0x1EC) = ebx;
    MEM32(esi + 0x1F0) = ebx;
    MEM32(esi + 0x1F4) = ebx;
    MEM32(esi + 0x1F8) = ebx;
    MEM32(esi + 0x1FC) = ebx;
    MEM32(esi + 0x200) = ebx;
    MEM32(esi + 0x204) = ebx;
    MEM32(esi + 0x208) = ebx;
    MEM32(esi + 0x20C) = ebx;
    MEM32(esi + 0x210) = ebx;
    MEM32(esi + 0x214) = ebx;
    MEM32(esi + 0x218) = ebx;
    MEM32(esi + 0x21C) = ebx;
    MEM32(esi + 0x220) = ebx;
    MEM32(esi + 0x224) = ebx;
    MEM32(esi + 0x228) = ebx;
    MEM32(esi + 0x22C) = ebx;
    MEM32(esi + 0x230) = ebx;
    MEM32(esi + 0x234) = ebx;
    MEM32(esi + 0x238) = ebx;
    MEM32(esi + 0x23C) = ebx;
    MEM32(esi + 0x240) = ebx;
    MEM32(esi + 0x244) = ebx;
    MEM32(esi + 0x248) = ebx;
    MEM32(esi + 0x24C) = ebx;
    MEM32(esi + 0x250) = ebx;
    MEM32(esi + 0x254) = ebx;
    MEM32(esi + 0x258) = ebx;
    MEM32(esi + 0x25C) = ebx;
    MEM32(esi + 0x260) = ebx;
    ecx = esi;
    MEM32(esi + 0x264) = ebx;
    MEM32(esi + 0x268) = ebx;
    MEM32(esi + 0x26C) = ebx;
    MEM32(esi + 0x270) = ebx;
    PUSH32(esp, 0x000A2C90u); RECOMP_ABI_CALL(0x000A27C0u, sub_000A27C0); /* call 0x000A27C0 */

loc_000A2C90: ;
    _fa = (uint32_t)(MEM32(0x3235E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3235E4), ebx (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000A2CA0; /* jne: not equal / not zero */

loc_000A2C9A: ;
    MEM32(0x3235E4) = esi;

loc_000A2CA0: ;
    MEM8(esi + 0x274) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2CB0
 * Original: 0x000A2CB0 - 0x000A2CB8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2CB0(void)
{

loc_000A2CB0: ;
    MEM8(ecx + 0xCE) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2CC0
 * Original: 0x000A2CC0 - 0x000A2CC4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2CC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000A2CC0: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A2CD0
 * Original: 0x000A2CD0 - 0x000A2CD4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2CD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000A2CD0: ;
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A2CE0
 * Original: 0x000A2CE0 - 0x000A2CE4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2CE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000A2CE0: ;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A2CF0
 * Original: 0x000A2CF0 - 0x000A2D0E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2CF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A2CF8u); RECOMP_ABI_CALL(0x000A2D10u, sub_000A2D10); /* call 0x000A2D10 */

loc_000A2CF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A2D08; /* je: equal / zero */

loc_000A2CFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A2D05u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000A2D05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A2D08: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2D10
 * Original: 0x000A2D10 - 0x000A2D15 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2D10: ;
    g_seh_ebp = ebp; sub_0020F6A0(); return; /* tail jmp 0x0020F6A0 */

}

/**
 * sub_000A2D20
 * Original: 0x000A2D20 - 0x000A2D2D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2D20(void)
{

loc_000A2D20: ;
    eax = ecx + 0x254;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2D2Cu); RECOMP_ABI_CALL(0x000A2990u, sub_000A2990); /* call 0x000A2990 */

loc_000A2D2C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2D30
 * Original: 0x000A2D30 - 0x000A2D3D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2D30(void)
{

loc_000A2D30: ;
    eax = ecx + 0x254;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2D3Cu); RECOMP_ABI_CALL(0x000A29C0u, sub_000A29C0); /* call 0x000A29C0 */

loc_000A2D3C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2D40
 * Original: 0x000A2D40 - 0x000A2D4D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2D40(void)
{

loc_000A2D40: ;
    eax = ecx + 0xE4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2D4Cu); RECOMP_ABI_CALL(0x000A2990u, sub_000A2990); /* call 0x000A2990 */

loc_000A2D4C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2D50
 * Original: 0x000A2D50 - 0x000A2D5D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2D50(void)
{

loc_000A2D50: ;
    eax = ecx + 0xF4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2D5Cu); RECOMP_ABI_CALL(0x000A2990u, sub_000A2990); /* call 0x000A2990 */

loc_000A2D5C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2D60
 * Original: 0x000A2D60 - 0x000A2D6D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2D60(void)
{

loc_000A2D60: ;
    eax = ecx + 0x104;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2D6Cu); RECOMP_ABI_CALL(0x000A2990u, sub_000A2990); /* call 0x000A2990 */

loc_000A2D6C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2D70
 * Original: 0x000A2D70 - 0x000A2D7D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2D70(void)
{

loc_000A2D70: ;
    eax = ecx + 0x114;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2D7Cu); RECOMP_ABI_CALL(0x000A2990u, sub_000A2990); /* call 0x000A2990 */

loc_000A2D7C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2D80
 * Original: 0x000A2D80 - 0x000A2D8D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2D80(void)
{

loc_000A2D80: ;
    eax = ecx + 0x124;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2D8Cu); RECOMP_ABI_CALL(0x000A2990u, sub_000A2990); /* call 0x000A2990 */

loc_000A2D8C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2D90
 * Original: 0x000A2D90 - 0x000A2D9D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2D90(void)
{

loc_000A2D90: ;
    eax = ecx + 0x134;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2D9Cu); RECOMP_ABI_CALL(0x000A2990u, sub_000A2990); /* call 0x000A2990 */

loc_000A2D9C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2DA0
 * Original: 0x000A2DA0 - 0x000A2DAD (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2DA0(void)
{

loc_000A2DA0: ;
    eax = ecx + 0x144;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2DACu); RECOMP_ABI_CALL(0x000A2990u, sub_000A2990); /* call 0x000A2990 */

loc_000A2DAC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2DB0
 * Original: 0x000A2DB0 - 0x000A2DBD (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2DB0(void)
{

loc_000A2DB0: ;
    eax = ecx + 0x1B4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2DBCu); RECOMP_ABI_CALL(0x000A2990u, sub_000A2990); /* call 0x000A2990 */

loc_000A2DBC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2DC0
 * Original: 0x000A2DC0 - 0x000A2DCD (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2DC0(void)
{

loc_000A2DC0: ;
    eax = ecx + 0x1C4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2DCCu); RECOMP_ABI_CALL(0x000A29C0u, sub_000A29C0); /* call 0x000A29C0 */

loc_000A2DCC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2DD0
 * Original: 0x000A2DD0 - 0x000A2DDD (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2DD0(void)
{

loc_000A2DD0: ;
    eax = ecx + 0x1A4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2DDCu); RECOMP_ABI_CALL(0x000A29C0u, sub_000A29C0); /* call 0x000A29C0 */

loc_000A2DDC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2DE0
 * Original: 0x000A2DE0 - 0x000A2DED (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2DE0(void)
{

loc_000A2DE0: ;
    eax = ecx + 0x1A4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2DECu); RECOMP_ABI_CALL(0x000A29F0u, sub_000A29F0); /* call 0x000A29F0 */

loc_000A2DEC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2DF0
 * Original: 0x000A2DF0 - 0x000A2DFD (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2DF0(void)
{

loc_000A2DF0: ;
    eax = ecx + 0x154;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2DFCu); RECOMP_ABI_CALL(0x000A29C0u, sub_000A29C0); /* call 0x000A29C0 */

loc_000A2DFC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2E00
 * Original: 0x000A2E00 - 0x000A2E0D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2E00(void)
{

loc_000A2E00: ;
    eax = ecx + 0x164;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2E0Cu); RECOMP_ABI_CALL(0x000A29C0u, sub_000A29C0); /* call 0x000A29C0 */

loc_000A2E0C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2E10
 * Original: 0x000A2E10 - 0x000A2E1D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2E10(void)
{

loc_000A2E10: ;
    eax = ecx + 0x174;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2E1Cu); RECOMP_ABI_CALL(0x000A29C0u, sub_000A29C0); /* call 0x000A29C0 */

loc_000A2E1C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2E20
 * Original: 0x000A2E20 - 0x000A2E2D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2E20(void)
{

loc_000A2E20: ;
    eax = ecx + 0x174;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2E2Cu); RECOMP_ABI_CALL(0x000A29F0u, sub_000A29F0); /* call 0x000A29F0 */

loc_000A2E2C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2E30
 * Original: 0x000A2E30 - 0x000A2E3D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2E30(void)
{

loc_000A2E30: ;
    eax = ecx + 0x184;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2E3Cu); RECOMP_ABI_CALL(0x000A29C0u, sub_000A29C0); /* call 0x000A29C0 */

loc_000A2E3C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2E40
 * Original: 0x000A2E40 - 0x000A2E4D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2E40(void)
{

loc_000A2E40: ;
    eax = ecx + 0x184;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2E4Cu); RECOMP_ABI_CALL(0x000A29F0u, sub_000A29F0); /* call 0x000A29F0 */

loc_000A2E4C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2E50
 * Original: 0x000A2E50 - 0x000A2E5D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2E50(void)
{

loc_000A2E50: ;
    eax = ecx + 0x194;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2E5Cu); RECOMP_ABI_CALL(0x000A29C0u, sub_000A29C0); /* call 0x000A29C0 */

loc_000A2E5C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2E60
 * Original: 0x000A2E60 - 0x000A2E6D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2E60(void)
{

loc_000A2E60: ;
    eax = ecx + 0x194;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2E6Cu); RECOMP_ABI_CALL(0x000A29F0u, sub_000A29F0); /* call 0x000A29F0 */

loc_000A2E6C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2E70
 * Original: 0x000A2E70 - 0x000A2E7D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2E70(void)
{

loc_000A2E70: ;
    eax = ecx + 0x264;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2E7Cu); RECOMP_ABI_CALL(0x000A29C0u, sub_000A29C0); /* call 0x000A29C0 */

loc_000A2E7C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2E80
 * Original: 0x000A2E80 - 0x000A2E8D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2E80(void)
{

loc_000A2E80: ;
    eax = ecx + 0x1D4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2E8Cu); RECOMP_ABI_CALL(0x000A2990u, sub_000A2990); /* call 0x000A2990 */

loc_000A2E8C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2E90
 * Original: 0x000A2E90 - 0x000A2E9D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2E90(void)
{

loc_000A2E90: ;
    eax = ecx + 0x1E4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2E9Cu); RECOMP_ABI_CALL(0x000A2990u, sub_000A2990); /* call 0x000A2990 */

loc_000A2E9C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2EA0
 * Original: 0x000A2EA0 - 0x000A2EAD (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2EA0(void)
{

loc_000A2EA0: ;
    eax = ecx + 0x204;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2EACu); RECOMP_ABI_CALL(0x000A2990u, sub_000A2990); /* call 0x000A2990 */

loc_000A2EAC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2EB0
 * Original: 0x000A2EB0 - 0x000A2EBD (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2EB0(void)
{

loc_000A2EB0: ;
    eax = ecx + 0x1F4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2EBCu); RECOMP_ABI_CALL(0x000A29C0u, sub_000A29C0); /* call 0x000A29C0 */

loc_000A2EBC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2EC0
 * Original: 0x000A2EC0 - 0x000A2ECD (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2EC0(void)
{

loc_000A2EC0: ;
    eax = ecx + 0x214;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2ECCu); RECOMP_ABI_CALL(0x000A29C0u, sub_000A29C0); /* call 0x000A29C0 */

loc_000A2ECC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2ED0
 * Original: 0x000A2ED0 - 0x000A2EDD (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2ED0(void)
{

loc_000A2ED0: ;
    eax = ecx + 0x234;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2EDCu); RECOMP_ABI_CALL(0x000A29C0u, sub_000A29C0); /* call 0x000A29C0 */

loc_000A2EDC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2EE0
 * Original: 0x000A2EE0 - 0x000A2EED (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2EE0(void)
{

loc_000A2EE0: ;
    eax = ecx + 0x244;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2EECu); RECOMP_ABI_CALL(0x000A2990u, sub_000A2990); /* call 0x000A2990 */

loc_000A2EEC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2EF0
 * Original: 0x000A2EF0 - 0x000A2EFD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2EF0(void)
{

loc_000A2EF0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1C0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2F00
 * Original: 0x000A2F00 - 0x000A2F48 (72 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2F00: ;
    eax = MEM32(esp + 4);
    SET_LO16(edx, MEM16(ecx + eax * 2 + 0x1C8));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2F2C; /* je: equal / zero */

loc_000A2F13: ;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(ecx + eax * 2 + 0x2A2);
    edx = SX16(LO16(edx));
    edx = edx + edx * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + esi * 4 + 0x1C) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A2F2C: ;
    SET_LO16(edx, MEM16(ecx + eax * 2 + 0x37C));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2F45; /* je: equal / zero */

loc_000A2F3B: ;
    edx = SX16(LO16(edx));
    MEM32(ecx + edx * 4 + 0x15C) = eax;

loc_000A2F45: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2F50
 * Original: 0x000A2F50 - 0x000A2FA7 (87 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2F50: ;
    eax = MEM32(esp + 4);
    SET_LO16(edx, MEM16(ecx + eax * 2 + 0x1C8));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xFF (16-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A2F80; /* je: equal / zero */

loc_000A2F64: ;
    esi = (uint32_t)(int32_t)SMEM16(ecx + eax * 2 + 0x2A2);
    edx = SX16(LO16(edx));
    edx = edx + edx * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ecx + esi * 4 + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + esi * 4 + 0x1C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A2FA1; /* jne: not equal / not zero */

loc_000A2F7A: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A2F80: ;
    SET_LO16(edx, MEM16(ecx + eax * 2 + 0x37C));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2FA1; /* je: equal / zero */

loc_000A2F8F: ;
    edx = SX16(LO16(edx));
    _fa = (uint32_t)(MEM32(ecx + edx * 4 + 0x15C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4 + 0x15C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A2FA1; /* jne: not equal / not zero */

loc_000A2F9B: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A2FA1: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2FB0
 * Original: 0x000A2FB0 - 0x000A3025 (117 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2FB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    SET_LO16(eax, MEM16(esi + edi * 2 + 0x1C8));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2FE3; /* je: equal / zero */

loc_000A2FC6: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + edi * 2 + 0x2A2);
    eax = SX16(LO16(eax));
    edx = eax + eax * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + ecx * 4 + 0x1C) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A2FE3: ;
    SET_LO16(eax, MEM16(esi + edi * 2 + 0x37C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3020; /* je: equal / zero */

loc_000A2FF1: ;
    ecx = MEM32(esi + 0x1C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A300D; /* je: equal / zero */

loc_000A2FFB: ;
    eax = SX16(LO16(eax));
    edx = MEM32(esi + eax * 4 + 0x15C);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A300Du); RECOMP_ABI_CALL(0x00090470u, sub_00090470); /* call 0x00090470 */

loc_000A300D: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + edi * 2 + 0x37C);
    MEM32(esi + eax * 4 + 0x15C) = 0;

loc_000A3020: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A3030
 * Original: 0x000A3030 - 0x000A3047 (23 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3030: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A3036: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000A303Eu); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A303E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6D (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A3036; /* jl: less (signed <) */

loc_000A3044: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3050
 * Original: 0x000A3050 - 0x000A3897 (2119 bytes, 318 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A3050: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000A3483; /* jne: not equal / not zero */

loc_000A3062: ;
    MEM32(ecx + 0x1C4) = edx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 0x2A2;
    ebp = 0xFF;
    eax = 2;
    /* nop */

loc_000A3080: ;
    MEM16(esi + -218) = LO16(ebp);
    MEM16(esi) = LO16(edx);
    MEM16(esi + 0xDA) = LO16(ebp);
    MEM8(ecx + edi + 0x456) = LO8(edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x6D (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A3080; /* jl: less (signed <) */

loc_000A30A0: ;
    ebx = 0xC;
    esi = 0xD;
    edi = 1;
    MEM16(ecx + 0x390) = LO16(ebp);
    MEM16(ecx + 0x1E0) = LO16(esi);
    MEM16(ecx + 0x1E2) = LO16(esi);
    esi = 3;
    MEM16(ecx + 0x208) = LO16(ebp);
    MEM16(ecx + 0x20A) = LO16(ebp);
    ebp = 0xA;
    MEM16(ecx + 0x38C) = LO16(edx);
    MEM16(ecx + 0x38E) = LO16(edi);
    MEM16(ecx + 0x39A) = LO16(eax);
    MEM16(ecx + 0x1DE) = LO16(ebx);
    MEM16(ecx + 0x2B8) = LO16(edx);
    MEM16(ecx + 0x2BA) = LO16(edx);
    MEM16(ecx + 0x1E4) = LO16(ebx);
    MEM16(ecx + 0x1E8) = 0xB;
    MEM16(ecx + 0x2C2) = LO16(eax);
    MEM16(ecx + 0x1EA) = 6;
    MEM16(ecx + 0x2C4) = LO16(eax);
    MEM16(ecx + 0x1EC) = 8;
    MEM16(ecx + 0x2C6) = LO16(eax);
    MEM16(ecx + 0x1CA) = LO16(esi);
    MEM16(ecx + 0x2A4) = 4;
    MEM16(ecx + 0x1D0) = LO16(edi);
    MEM16(ecx + 0x2AA) = LO16(eax);
    MEM16(ecx + 0x1CC) = LO16(eax);
    MEM16(ecx + 0x2A6) = LO16(edx);
    MEM16(ecx + 0x1D2) = LO16(edx);
    MEM16(ecx + 0x2AC) = LO16(eax);
    MEM16(ecx + 0x1D4) = LO16(ebx);
    MEM16(ecx + 0x2AE) = LO16(eax);
    MEM16(ecx + 0x244) = LO16(ebx);
    MEM16(ecx + 0x246) = 0xD;
    MEM16(ecx + 0x3FC) = LO16(edi);
    MEM16(ecx + 0x24A) = LO16(esi);
    MEM16(ecx + 0x24C) = 0xB;
    MEM16(ecx + 0x226) = 0xB;
    MEM16(ecx + 0x300) = LO16(eax);
    MEM16(ecx + 0x22A) = 0xD;
    MEM16(ecx + 0x304) = LO16(eax);
    MEM16(ecx + 0x21E) = LO16(ebp);
    MEM16(ecx + 0x2F8) = LO16(eax);
    MEM16(ecx + 0x284) = 8;
    MEM16(ecx + 0x35E) = LO16(eax);
    MEM16(ecx + 0x27C) = 0xF;
    MEM16(ecx + 0x356) = LO16(eax);
    MEM16(ecx + 0x27E) = 0xE;
    MEM16(ecx + 0x358) = LO16(eax);
    MEM16(ecx + 0x280) = 7;
    MEM16(ecx + 0x35A) = LO16(eax);
    MEM16(ecx + 0x282) = 6;
    MEM16(ecx + 0x35C) = LO16(eax);
    MEM16(ecx + 0x296) = 6;
    MEM16(ecx + 0x298) = 8;
    MEM16(ecx + 0x29A) = 9;
    MEM16(ecx + 0x29C) = 7;
    MEM16(ecx + 0x29E) = LO16(ebx);
    MEM16(ecx + 0x370) = LO16(eax);
    MEM16(ecx + 0x372) = LO16(eax);
    MEM16(ecx + 0x374) = LO16(eax);
    MEM16(ecx + 0x376) = LO16(eax);
    MEM16(ecx + 0x378) = LO16(eax);
    MEM16(ecx + 0x286) = LO16(ebp);
    MEM16(ecx + 0x360) = LO16(eax);
    MEM16(ecx + 0x288) = LO16(ebx);
    MEM16(ecx + 0x362) = LO16(eax);
    MEM16(ecx + 0x28A) = LO16(esi);
    MEM16(ecx + 0x364) = LO16(eax);
    MEM16(ecx + 0x1F4) = LO16(eax);
    MEM16(ecx + 0x2CE) = LO16(eax);
    MEM16(ecx + 0x1F6) = LO16(eax);
    MEM16(ecx + 0x2D0) = LO16(esi);
    MEM16(ecx + 0x22E) = LO16(ebp);
    MEM16(ecx + 0x308) = LO16(eax);
    MEM16(ecx + 0x230) = LO16(eax);
    MEM16(ecx + 0x30A) = LO16(eax);
    MEM16(ecx + 0x232) = LO16(edx);
    MEM16(ecx + 0x25A) = LO16(ebp);
    MEM16(ecx + 0x334) = LO16(eax);
    MEM16(ecx + 0x442) = LO16(esi);
    MEM16(ecx + 0x3B2) = LO16(edi);
    MEM16(ecx + 0x3B0) = LO16(edi);
    MEM16(ecx + 0x3B6) = LO16(esi);
    MEM16(ecx + 0x3BA) = LO16(edi);
    MEM16(ecx + 0x3CA) = LO16(esi);
    MEM16(ecx + 0x3CC) = LO16(esi);
    MEM16(ecx + 0x262) = LO16(edi);
    MEM16(ecx + 0x3A4) = LO16(edx);
    MEM16(ecx + 0x440) = LO16(eax);
    MEM16(ecx + 0x3AC) = LO16(edx);
    MEM16(ecx + 0x3AE) = LO16(edx);
    MEM16(ecx + 0x3B4) = LO16(eax);
    MEM16(ecx + 0x3B8) = LO16(edx);
    MEM16(ecx + 0x3C8) = LO16(eax);
    MEM16(ecx + 0x3CE) = LO16(eax);
    MEM16(ecx + 0x33C) = LO16(eax);
    MEM16(ecx + 0x264) = 4;
    MEM16(ecx + 0x33E) = LO16(eax);
    ebp = 5;
    MEM16(ecx + 0x20C) = LO16(ebp);
    MEM16(ecx + 0x2E6) = LO16(eax);
    MEM16(ecx + 0x20E) = LO16(ebp);
    MEM16(ecx + 0x2E8) = LO16(eax);
    MEM16(ecx + 0x210) = LO16(ebp);
    MEM16(ecx + 0x2EA) = LO16(eax);
    MEM16(ecx + 0x212) = LO16(ebp);
    MEM16(ecx + 0x2EC) = LO16(eax);
    MEM16(ecx + 0x290) = LO16(ebp);
    MEM16(ecx + 0x36A) = LO16(eax);
    MEM16(ecx + 0x292) = LO16(esi);
    MEM16(ecx + 0x36C) = LO16(eax);
    MEM16(ecx + 0x294) = LO16(ebp);
    MEM16(ecx + 0x36E) = LO16(eax);
    MEM16(ecx + 0x3D0) = LO16(edi);
    MEM16(ecx + 0x266) = LO16(ebx);
    MEM16(ecx + 0x268) = 0xA;
    MEM16(ecx + 0x26C) = LO16(eax);
    MEM16(ecx + 0x26A) = LO16(esi);
    MEM16(ecx + 0x26E) = 0xE;
    MEM16(ecx + 0x270) = 6;
    MEM16(ecx + 0x272) = 8;
    MEM16(ecx + 0x274) = 9;
    MEM16(ecx + 0x276) = 7;
    MEM16(ecx + 0x340) = LO16(edx);
    MEM16(ecx + 0x342) = LO16(edx);
    MEM16(ecx + 0x346) = LO16(edx);
    MEM16(ecx + 0x344) = LO16(edx);
    MEM16(ecx + 0x348) = LO16(eax);
    MEM16(ecx + 0x34A) = LO16(edx);
    MEM16(ecx + 0x34C) = LO16(edx);
    MEM16(ecx + 0x34E) = LO16(edx);
    MEM16(ecx + 0x350) = LO16(edx);
    MEM16(ecx + 0x42C) = LO16(edx);
    MEM16(ecx + 0x42E) = LO16(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000A3483: ;
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3890; /* jne: not equal / not zero */

loc_000A3490: ;
    MEM32(ecx + 0x1C4) = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 0x2A2;
    ebp = 0xFF;
    eax = 2;
    goto loc_000A34B0;

    /* nop */

loc_000A34B0: ;
    MEM16(esi + -218) = LO16(ebp);
    MEM16(esi) = LO16(edx);
    MEM16(esi + 0xDA) = LO16(ebp);
    MEM8(ecx + ebx + 0x456) = LO8(edx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x6D (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A34B0; /* jl: less (signed <) */

loc_000A34D0: ;
    ebx = 0xC;
    esi = 0xD;
    MEM16(ecx + 0x390) = LO16(ebp);
    MEM16(ecx + 0x1E0) = LO16(esi);
    MEM16(ecx + 0x1E2) = LO16(esi);
    esi = 3;
    MEM16(ecx + 0x208) = LO16(ebp);
    MEM16(ecx + 0x20A) = LO16(ebp);
    ebp = 0xA;
    MEM16(ecx + 0x38C) = LO16(eax);
    MEM16(ecx + 0x38E) = LO16(edi);
    MEM16(ecx + 0x39A) = LO16(edx);
    MEM16(ecx + 0x1DE) = LO16(ebx);
    MEM16(ecx + 0x2B8) = LO16(edx);
    MEM16(ecx + 0x2BA) = LO16(edx);
    MEM16(ecx + 0x1E4) = LO16(ebx);
    MEM16(ecx + 0x1E8) = 0xB;
    MEM16(ecx + 0x2C2) = LO16(eax);
    MEM16(ecx + 0x1EA) = 6;
    MEM16(ecx + 0x2C4) = LO16(eax);
    MEM16(ecx + 0x1EC) = 8;
    MEM16(ecx + 0x2C6) = LO16(eax);
    MEM16(ecx + 0x1CA) = LO16(esi);
    MEM16(ecx + 0x2A4) = LO16(edx);
    MEM16(ecx + 0x1D0) = LO16(edi);
    MEM16(ecx + 0x2AA) = LO16(eax);
    MEM16(ecx + 0x1CC) = LO16(eax);
    MEM16(ecx + 0x2A6) = LO16(edx);
    MEM16(ecx + 0x1D2) = LO16(edx);
    MEM16(ecx + 0x2AC) = LO16(eax);
    MEM16(ecx + 0x1D4) = LO16(ebx);
    MEM16(ecx + 0x2AE) = LO16(eax);
    MEM16(ecx + 0x244) = LO16(ebx);
    MEM16(ecx + 0x246) = 0xD;
    MEM16(ecx + 0x3FC) = LO16(edi);
    MEM16(ecx + 0x24A) = LO16(eax);
    MEM16(ecx + 0x24C) = 0xB;
    MEM16(ecx + 0x226) = 0xB;
    MEM16(ecx + 0x300) = LO16(eax);
    MEM16(ecx + 0x22A) = 0xD;
    MEM16(ecx + 0x304) = LO16(eax);
    MEM16(ecx + 0x21E) = LO16(ebp);
    MEM16(ecx + 0x2F8) = LO16(eax);
    MEM16(ecx + 0x284) = 8;
    MEM16(ecx + 0x35E) = LO16(eax);
    MEM16(ecx + 0x27C) = 0xF;
    MEM16(ecx + 0x356) = LO16(eax);
    MEM16(ecx + 0x27E) = 0xE;
    MEM16(ecx + 0x358) = LO16(eax);
    MEM16(ecx + 0x280) = 7;
    MEM16(ecx + 0x35A) = LO16(eax);
    MEM16(ecx + 0x282) = 6;
    MEM16(ecx + 0x35C) = LO16(eax);
    MEM16(ecx + 0x296) = 6;
    MEM16(ecx + 0x298) = 8;
    MEM16(ecx + 0x29A) = 9;
    MEM16(ecx + 0x29C) = 7;
    MEM16(ecx + 0x29E) = LO16(ebx);
    MEM16(ecx + 0x370) = LO16(eax);
    MEM16(ecx + 0x372) = LO16(eax);
    MEM16(ecx + 0x374) = LO16(eax);
    MEM16(ecx + 0x376) = LO16(eax);
    MEM16(ecx + 0x378) = LO16(eax);
    MEM16(ecx + 0x286) = LO16(ebp);
    MEM16(ecx + 0x360) = LO16(eax);
    MEM16(ecx + 0x288) = LO16(ebx);
    MEM16(ecx + 0x362) = LO16(eax);
    MEM16(ecx + 0x28A) = LO16(esi);
    MEM16(ecx + 0x364) = LO16(eax);
    MEM16(ecx + 0x1F4) = LO16(eax);
    MEM16(ecx + 0x2CE) = LO16(eax);
    MEM16(ecx + 0x1F6) = LO16(eax);
    MEM16(ecx + 0x2D0) = LO16(esi);
    MEM16(ecx + 0x22E) = LO16(ebp);
    MEM16(ecx + 0x308) = LO16(eax);
    MEM16(ecx + 0x25A) = LO16(ebp);
    MEM16(ecx + 0x334) = LO16(eax);
    MEM16(ecx + 0x3A4) = LO16(edx);
    MEM16(ecx + 0x440) = LO16(eax);
    MEM16(ecx + 0x442) = LO16(esi);
    MEM16(ecx + 0x3AC) = LO16(edx);
    MEM16(ecx + 0x3B2) = LO16(edi);
    MEM16(ecx + 0x3AE) = LO16(edx);
    MEM16(ecx + 0x3B0) = LO16(edi);
    MEM16(ecx + 0x3B4) = LO16(eax);
    MEM16(ecx + 0x3B6) = LO16(esi);
    MEM16(ecx + 0x3B8) = LO16(edx);
    MEM16(ecx + 0x3BA) = LO16(edi);
    MEM16(ecx + 0x3C8) = LO16(eax);
    MEM16(ecx + 0x3CA) = LO16(esi);
    MEM16(ecx + 0x3CE) = LO16(eax);
    MEM16(ecx + 0x3CC) = LO16(esi);
    MEM16(ecx + 0x262) = LO16(edi);
    MEM16(ecx + 0x33C) = LO16(eax);
    MEM16(ecx + 0x264) = 4;
    MEM16(ecx + 0x33E) = LO16(eax);
    ebp = 5;
    MEM16(ecx + 0x20C) = LO16(ebp);
    MEM16(ecx + 0x2E6) = LO16(eax);
    MEM16(ecx + 0x20E) = LO16(ebp);
    MEM16(ecx + 0x2E8) = LO16(eax);
    MEM16(ecx + 0x210) = LO16(ebp);
    MEM16(ecx + 0x2EA) = LO16(eax);
    MEM16(ecx + 0x212) = LO16(ebp);
    MEM16(ecx + 0x2EC) = LO16(eax);
    MEM16(ecx + 0x290) = LO16(ebp);
    MEM16(ecx + 0x36A) = LO16(eax);
    MEM16(ecx + 0x292) = LO16(esi);
    MEM16(ecx + 0x36C) = LO16(eax);
    MEM16(ecx + 0x294) = LO16(ebp);
    MEM16(ecx + 0x36E) = LO16(eax);
    MEM16(ecx + 0x3D0) = LO16(edi);
    MEM16(ecx + 0x266) = LO16(ebx);
    MEM16(ecx + 0x268) = 0xA;
    MEM16(ecx + 0x26C) = LO16(eax);
    MEM16(ecx + 0x26A) = LO16(esi);
    MEM16(ecx + 0x26E) = 0xE;
    MEM16(ecx + 0x270) = 6;
    MEM16(ecx + 0x272) = 8;
    MEM16(ecx + 0x274) = 9;
    MEM16(ecx + 0x276) = 7;
    MEM16(ecx + 0x340) = LO16(edx);
    MEM16(ecx + 0x342) = LO16(edx);
    MEM16(ecx + 0x346) = LO16(edx);
    MEM16(ecx + 0x344) = LO16(edx);
    MEM16(ecx + 0x348) = LO16(eax);
    MEM16(ecx + 0x34A) = LO16(edx);
    MEM16(ecx + 0x34C) = LO16(edx);
    MEM16(ecx + 0x34E) = LO16(edx);
    MEM16(ecx + 0x350) = LO16(edx);
    MEM16(ecx + 0x42C) = LO16(eax);
    MEM16(ecx + 0x42E) = LO16(esi);

loc_000A3890: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A38A0
 * Original: 0x000A38A0 - 0x000A392D (141 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A38A0(void)
{

loc_000A38A0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000A38A7u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A38A7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x000A38AEu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A38AE: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x000A38B5u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A38B5: ;
    PUSH32(esp, 0x4D);
    PUSH32(esp, 0x000A38BCu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A38BC: ;
    PUSH32(esp, 0x33);
    PUSH32(esp, 0x000A38C3u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A38C3: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x000A38CAu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A38CA: ;
    PUSH32(esp, 0x35);
    PUSH32(esp, 0x000A38D1u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A38D1: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x000A38D8u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A38D8: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x000A38DFu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A38DF: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x000A38E6u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A38E6: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x000A38EDu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A38ED: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000A38F4u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A38F4: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x000A38FBu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A38FB: ;
    PUSH32(esp, 0x42);
    PUSH32(esp, 0x000A3902u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3902: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x000A3909u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3909: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x000A3910u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3910: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x000A3917u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3917: ;
    PUSH32(esp, 0x5A);
    PUSH32(esp, 0x000A391Eu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A391E: ;
    PUSH32(esp, 0x5B);
    PUSH32(esp, 0x000A3925u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3925: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x000A392Cu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A392C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A3930
 * Original: 0x000A3930 - 0x000A39A8 (120 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3930(void)
{

loc_000A3930: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000A3937u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3937: ;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x000A393Eu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A393E: ;
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0x000A3945u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3945: ;
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x000A394Cu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A394C: ;
    PUSH32(esp, 0x41);
    PUSH32(esp, 0x000A3953u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3953: ;
    PUSH32(esp, 0x42);
    PUSH32(esp, 0x000A395Au); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A395A: ;
    PUSH32(esp, 0x4B);
    PUSH32(esp, 0x000A3961u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3961: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x000A3968u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3968: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x000A396Fu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A396F: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x000A3976u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3976: ;
    PUSH32(esp, 0x4D);
    PUSH32(esp, 0x000A397Du); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A397D: ;
    PUSH32(esp, 0x33);
    PUSH32(esp, 0x000A3984u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3984: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x000A398Bu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A398B: ;
    PUSH32(esp, 0x35);
    PUSH32(esp, 0x000A3992u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3992: ;
    PUSH32(esp, 0x5A);
    PUSH32(esp, 0x000A3999u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3999: ;
    PUSH32(esp, 0x5B);
    PUSH32(esp, 0x000A39A0u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A39A0: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x000A39A7u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A39A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A39B0
 * Original: 0x000A39B0 - 0x000A3A13 (99 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A39B0(void)
{

loc_000A39B0: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x000A39B7u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A39B7: ;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x000A39BEu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A39BE: ;
    PUSH32(esp, 0x42);
    PUSH32(esp, 0x000A39C5u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A39C5: ;
    PUSH32(esp, 0x4B);
    PUSH32(esp, 0x000A39CCu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A39CC: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x000A39D3u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A39D3: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0x000A39DAu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A39DA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000A39E1u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A39E1: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x000A39E8u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A39E8: ;
    PUSH32(esp, 0x33);
    PUSH32(esp, 0x000A39EFu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A39EF: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x000A39F6u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A39F6: ;
    PUSH32(esp, 0x35);
    PUSH32(esp, 0x000A39FDu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A39FD: ;
    PUSH32(esp, 0x5A);
    PUSH32(esp, 0x000A3A04u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3A04: ;
    PUSH32(esp, 0x5B);
    PUSH32(esp, 0x000A3A0Bu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3A0B: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x000A3A12u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3A12: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A3A20
 * Original: 0x000A3A20 - 0x000A3AAD (141 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3A20(void)
{

loc_000A3A20: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x000A3A27u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3A27: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x000A3A2Eu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3A2E: ;
    PUSH32(esp, 0x4B);
    PUSH32(esp, 0x000A3A35u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3A35: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x000A3A3Cu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3A3C: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x000A3A43u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3A43: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0x000A3A4Au); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3A4A: ;
    PUSH32(esp, 0x31);
    PUSH32(esp, 0x000A3A51u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3A51: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000A3A58u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3A58: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x000A3A5Fu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3A5F: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x000A3A66u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3A66: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x000A3A6Du); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3A6D: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x000A3A74u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3A74: ;
    PUSH32(esp, 0x5A);
    PUSH32(esp, 0x000A3A7Bu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3A7B: ;
    PUSH32(esp, 0x5B);
    PUSH32(esp, 0x000A3A82u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3A82: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x000A3A89u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3A89: ;
    PUSH32(esp, 0x2B);
    PUSH32(esp, 0x000A3A90u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3A90: ;
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x000A3A97u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3A97: ;
    PUSH32(esp, 0x4E);
    PUSH32(esp, 0x000A3A9Eu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3A9E: ;
    PUSH32(esp, 0x5D);
    PUSH32(esp, 0x000A3AA5u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3AA5: ;
    PUSH32(esp, 0x5E);
    PUSH32(esp, 0x000A3AACu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A3AAC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A3AB0
 * Original: 0x000A3AB0 - 0x000A3AB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3AB0(void)
{

loc_000A3AB0: ;
    eax = MEM32(ecx + 0x4C4);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3AC0
 * Original: 0x000A3AC0 - 0x000A3AC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3AC0(void)
{

loc_000A3AC0: ;
    eax = MEM32(ecx + 0x4C8);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3AD0
 * Original: 0x000A3AD0 - 0x000A3F09 (1081 bytes, 295 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3AD0(void)
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

loc_000A3AD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    edx = MEM32(ebp + 0x1C0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A3EFB; /* je: equal / zero */

loc_000A3AE5: ;
    eax = MEM32(esp + 0x18);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x652B04DF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x652B04DF (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_A(_fa, _fb)) goto loc_000A3BCE; /* ja: above (unsigned >) */

loc_000A3AFE: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000A3BC4; /* je: equal / zero */

loc_000A3B04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x124AEC70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x124AEC70 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3B76; /* ja: above (unsigned >) */

loc_000A3B0B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000A3B6C; /* je: equal / zero */

loc_000A3B0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE5400D2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE5400D2 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3B46; /* ja: above (unsigned >) */

loc_000A3B14: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000A3B3C; /* je: equal / zero */

loc_000A3B16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5025085) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5025085 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3B32; /* je: equal / zero */

loc_000A3B1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60EC258) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x60EC258 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3F01; /* jne: not equal / not zero */

loc_000A3B28: ;
    esi = 1;
    goto loc_000A3C6A;

loc_000A3B32: ;
    esi = 0xA;
    goto loc_000A3C6A;

loc_000A3B3C: ;
    esi = 5;
    goto loc_000A3C6A;

loc_000A3B46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F38BAD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10F38BAD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3B62; /* je: equal / zero */

loc_000A3B4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11C2662D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11C2662D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3F01; /* jne: not equal / not zero */

loc_000A3B58: ;
    esi = 0xE;
    goto loc_000A3C6A;

loc_000A3B62: ;
    esi = 2;
    goto loc_000A3C6A;

loc_000A3B6C: ;
    esi = 9;
    goto loc_000A3C6A;

loc_000A3B76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3DB9B915) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3DB9B915 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3BAF; /* ja: above (unsigned >) */

loc_000A3B7D: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000A3BA5; /* je: equal / zero */

loc_000A3B7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16317B28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16317B28 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3B9B; /* je: equal / zero */

loc_000A3B86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28217089) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28217089 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3F01; /* jne: not equal / not zero */

loc_000A3B91: ;
    esi = 0xB;
    goto loc_000A3C6A;

loc_000A3B9B: ;
    esi = 4;
    goto loc_000A3C6A;

loc_000A3BA5: ;
    esi = 8;
    goto loc_000A3C6A;

loc_000A3BAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x43430B20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x43430B20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3F01; /* jne: not equal / not zero */

loc_000A3BBA: ;
    esi = 6;
    goto loc_000A3C6A;

loc_000A3BC4: ;
    esi = 0xF;
    goto loc_000A3C6A;

loc_000A3BCE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD4F1922Bu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD4F1922Bu (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3C25; /* ja: above (unsigned >) */

loc_000A3BD5: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000A3C1A; /* je: equal / zero */

loc_000A3BD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB4B61246u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB4B61246u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3C07; /* ja: above (unsigned >) */

loc_000A3BDE: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000A3C00; /* je: equal / zero */

loc_000A3BE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78E32DE5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x78E32DE5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3BF9; /* je: equal / zero */

loc_000A3BE7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAFB784E6u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAFB784E6u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3F01; /* jne: not equal / not zero */

loc_000A3BF2: ;
    esi = 3;
    goto loc_000A3C6A;

loc_000A3BF9: ;
    esi = 7;
    goto loc_000A3C6A;

loc_000A3C00: ;
    esi = 0xD;
    goto loc_000A3C6A;

loc_000A3C07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD3F19098u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD3F19098u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3F01; /* jne: not equal / not zero */

loc_000A3C12: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edi;
    goto loc_000A3C6A;

loc_000A3C1A: ;
    edi = 1;
    MEM32(esp + 0x10) = edi;
    goto loc_000A3C6A;

loc_000A3C25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFAF0EFA7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFAF0EFA7u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3C5A; /* ja: above (unsigned >) */

loc_000A3C2C: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000A3C56; /* je: equal / zero */

loc_000A3C2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE9A0CC94u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE9A0CC94u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3C4B; /* je: equal / zero */

loc_000A3C35: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEAA0CE27u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEAA0CE27u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3F01; /* jne: not equal / not zero */

loc_000A3C40: ;
    edi = 2;
    MEM32(esp + 0x10) = edi;
    goto loc_000A3C6A;

loc_000A3C4B: ;
    edi = 3;
    MEM32(esp + 0x10) = edi;
    goto loc_000A3C6A;

loc_000A3C56: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000A3C6A;

loc_000A3C5A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFD0C5087u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFD0C5087u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3F01; /* jne: not equal / not zero */

loc_000A3C65: ;
    esi = 0xC;

loc_000A3C6A: ;
    ecx = 0x323608;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000A3C76u); RECOMP_ABI_CALL(0x000A3AB0u, sub_000A3AB0); /* call 0x000A3AB0 */

loc_000A3C76: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = eax;
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000A3DF6; /* jl: less (signed <) */

loc_000A3C84: ;
    _fa = (uint32_t)(MEM8(0x30EBA5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30EBA5), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3DE5; /* jne: not equal / not zero */

loc_000A3C91: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + esi * 4 + 0x170)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    edi = MEM32(esp + 0x1C);
    if ((_fca > _fcb)) goto loc_000A3CB1; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000A3CA6: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A3CD6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000A3CB1: ;
    eax = esi + esi * 4;
    eax = MEM32(ebp + eax * 4 + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3CD6; /* je: equal / zero */

loc_000A3CBC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_000A3CCF; /* jne: not equal / not zero */

loc_000A3CC3: ;
    ecx = 0x343468;
    PUSH32(esp, 0x000A3CCDu); RECOMP_ABI_CALL(0x000C98A0u, sub_000C98A0); /* call 0x000C98A0 */

loc_000A3CCD: ;
    goto loc_000A3CD6;

loc_000A3CCF: ;
    ecx = edx;
    PUSH32(esp, 0x000A3CD6u); RECOMP_ABI_CALL(0x00090470u, sub_00090470); /* call 0x00090470 */

loc_000A3CD6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A3D14; /* jp: parity */

loc_000A3CE9: ;
    ecx = esi + esi * 4;
    eax = MEM32(ebp + ecx * 4 + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3D14; /* je: equal / zero */

loc_000A3CF4: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 0xC (32-bit) */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_000A3D09; /* jne: not equal / not zero */

loc_000A3CFD: ;
    ecx = 0x343468;
    PUSH32(esp, 0x000A3D07u); RECOMP_ABI_CALL(0x000C98A0u, sub_000C98A0); /* call 0x000C98A0 */

loc_000A3D07: ;
    goto loc_000A3D14;

loc_000A3D09: ;
    ecx = MEM32(ebp + 0x1C0);
    PUSH32(esp, 0x000A3D14u); RECOMP_ABI_CALL(0x00090470u, sub_00090470); /* call 0x00090470 */

loc_000A3D14: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A3D5F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000A3D22: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + esi * 4 + 0x170)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A3D5F; /* jp: parity */

loc_000A3D34: ;
    edx = esi + esi * 4;
    eax = MEM32(ebp + edx * 4 + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3D5F; /* je: equal / zero */

loc_000A3D3F: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 0xC (32-bit) */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_000A3D54; /* jne: not equal / not zero */

loc_000A3D48: ;
    ecx = 0x343468;
    PUSH32(esp, 0x000A3D52u); RECOMP_ABI_CALL(0x000C98A0u, sub_000C98A0); /* call 0x000C98A0 */

loc_000A3D52: ;
    goto loc_000A3D5F;

loc_000A3D54: ;
    ecx = MEM32(ebp + 0x1C0);
    PUSH32(esp, 0x000A3D5Fu); RECOMP_ABI_CALL(0x00090470u, sub_00090470); /* call 0x00090470 */

loc_000A3D5F: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A3DAB; /* jp: parity */

loc_000A3D71: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + esi * 4 + 0x170)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A3DAB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000A3D7F: ;
    eax = esi + esi * 4 + 0xA;
    eax = MEM32(ebp + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3DAB; /* je: equal / zero */

loc_000A3D8B: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 0xC (32-bit) */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_000A3DA0; /* jne: not equal / not zero */

loc_000A3D94: ;
    ecx = 0x343468;
    PUSH32(esp, 0x000A3D9Eu); RECOMP_ABI_CALL(0x000C98A0u, sub_000C98A0); /* call 0x000C98A0 */

loc_000A3D9E: ;
    goto loc_000A3DAB;

loc_000A3DA0: ;
    ecx = MEM32(ebp + 0x1C0);
    PUSH32(esp, 0x000A3DABu); RECOMP_ABI_CALL(0x00090470u, sub_00090470); /* call 0x00090470 */

loc_000A3DAB: ;
    ecx = esi + esi * 4;
    eax = MEM32(ebp + ecx * 4 + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3DE5; /* je: equal / zero */

loc_000A3DB6: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 0xC (32-bit) */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_000A3DDA; /* jne: not equal / not zero */

loc_000A3DBF: ;
    ecx = 0x343468;
    PUSH32(esp, 0x000A3DC9u); RECOMP_ABI_CALL(0x000C98A0u, sub_000C98A0); /* call 0x000C98A0 */

loc_000A3DC9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(ebp + esi * 4 + 0x170) = xmm0.f[0]; /* movss */
    goto loc_000A3E48;

loc_000A3DDA: ;
    ecx = MEM32(ebp + 0x1C0);
    PUSH32(esp, 0x000A3DE5u); RECOMP_ABI_CALL(0x00090470u, sub_00090470); /* call 0x00090470 */

loc_000A3DE5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(ebp + esi * 4 + 0x170) = xmm0.f[0]; /* movss */
    goto loc_000A3E48;

loc_000A3DF6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A3E64; /* jl: less (signed <) */

loc_000A3DFA: ;
    eax = MEM32(ebp + edi * 4 + 0x15C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3E48; /* je: equal / zero */

loc_000A3E05: ;
    _fa = (uint32_t)(MEM8(0x30EBA5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30EBA5), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3E48; /* jne: not equal / not zero */

loc_000A3E0E: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM8(ecx + ebp + 0x16C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + ebp + 0x16C), 0 (8-bit) */
    ecx = MEM32(esp + 0x18);
    if (CMP_NE(_fa, _fb)) goto loc_000A3EBE; /* jne: not equal / not zero */

loc_000A3E24: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3E3B; /* jne: not equal / not zero */

loc_000A3E29: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x343468;
    PUSH32(esp, 0x000A3E39u); RECOMP_ABI_CALL(0x000C98A0u, sub_000C98A0); /* call 0x000C98A0 */

loc_000A3E39: ;
    goto loc_000A3E48;

loc_000A3E3B: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);

loc_000A3E40: ;
    ecx = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3E48u); RECOMP_ABI_CALL(0x00090470u, sub_00090470); /* call 0x00090470 */

loc_000A3E48: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A3E64; /* jl: less (signed <) */

loc_000A3E50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A3E64; /* jge: greater or equal (signed >=) */

loc_000A3E55: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(ebp + eax * 4 + 0x1B0) = xmm0.f[0]; /* movss */

loc_000A3E64: ;
    _fa = (uint32_t)(MEM8(0x30EBA5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x30EBA5), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3EFF; /* jne: not equal / not zero */

loc_000A3E71: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x1B0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x1B4)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = MEMF(0x2E0B9C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A3EFF; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(0x2E0B9C)) */

loc_000A3E9C: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 0xC (32-bit) */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x13);
    if (CMP_NE(_fa, _fb)) goto loc_000A3EE6; /* jne: not equal / not zero */

loc_000A3EAA: ;
    ecx = 0x343468;
    PUSH32(esp, 0x000A3EB4u); RECOMP_ABI_CALL(0x000C98A0u, sub_000C98A0); /* call 0x000C98A0 */

loc_000A3EB4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000A3EBE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000A3E40; /* jne: not equal / not zero */

loc_000A3ED6: ;
    PUSH32(esp, eax);
    ecx = 0x343468;
    PUSH32(esp, 0x000A3EE1u); RECOMP_ABI_CALL(0x000C98A0u, sub_000C98A0); /* call 0x000C98A0 */

loc_000A3EE1: ;
    goto loc_000A3E48;

loc_000A3EE6: ;
    ecx = MEM32(ebp + 0x1C0);
    PUSH32(esp, 0x000A3EF1u); RECOMP_ABI_CALL(0x00090470u, sub_00090470); /* call 0x00090470 */

loc_000A3EF1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000A3EFB: ;
    ebx = MEM32(esp + 0x18);

loc_000A3EFF: ;
    eax = ebx;

loc_000A3F01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A3F10
 * Original: 0x000A3F10 - 0x000A3F4B (59 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3F10(void)
{

loc_000A3F10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3F1Fu); RECOMP_ABI_CALL(0x000A3050u, sub_000A3050); /* call 0x000A3050 */

loc_000A3F1F: ;
    PUSH32(esp, 0x000A3F24u); RECOMP_ABI_CALL(0x000A3030u, sub_000A3030); /* call 0x000A3030 */

loc_000A3F24: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    ecx = eax + 0xD0;
    MEM32(esi + 0x1C0) = 0;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x000A3F43u); RECOMP_ABI_CALL(0x0020F750u, sub_0020F750); /* call 0x0020F750 */

loc_000A3F43: ;
    MEM8(esi + 4) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A3F50
 * Original: 0x000A3F50 - 0x000A3F73 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3F50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3F6D; /* je: equal / zero */

loc_000A3F5A: ;
    PUSH32(esp, esi);
    ecx = eax + 0xD0;
    PUSH32(esp, 0x000A3F66u); RECOMP_ABI_CALL(0x0020AB20u, sub_0020AB20); /* call 0x0020AB20 */

loc_000A3F66: ;
    MEM32(esi + 8) = 0;

loc_000A3F6D: ;
    MEM8(esi + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3F80
 * Original: 0x000A3F80 - 0x000A4247 (711 bytes, 216 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A3F80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    MEM32(esi + 0x4C4) = edi;
    PUSH32(esp, 0x000A3F93u); RECOMP_ABI_CALL(0x000A3030u, sub_000A3030); /* call 0x000A3030 */

loc_000A3F93: ;
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A4218; /* ja: above (unsigned >) */

loc_000A3F9F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xA4248); /* switch: 14 entries, 14 targets */
    if (_jt == 0x000A3FA6u) goto loc_000A3FA6;
    if (_jt == 0x000A3FB2u) goto loc_000A3FB2;
    if (_jt == 0x000A3FBEu) goto loc_000A3FBE;
    if (_jt == 0x000A3FCAu) goto loc_000A3FCA;
    if (_jt == 0x000A3FD8u) goto loc_000A3FD8;
    if (_jt == 0x000A4065u) goto loc_000A4065;
    if (_jt == 0x000A4073u) goto loc_000A4073;
    if (_jt == 0x000A4088u) goto loc_000A4088;
    if (_jt == 0x000A40A9u) goto loc_000A40A9;
    if (_jt == 0x000A40C7u) goto loc_000A40C7;
    if (_jt == 0x000A4150u) goto loc_000A4150;
    if (_jt == 0x000A4195u) goto loc_000A4195;
    if (_jt == 0x000A41E1u) goto loc_000A41E1;
    if (_jt == 0x000A4206u) goto loc_000A4206;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000A3FA6: ;
    ecx = esi;
    PUSH32(esp, 0x000A3FADu); RECOMP_ABI_CALL(0x000A38A0u, sub_000A38A0); /* call 0x000A38A0 */

loc_000A3FAD: ;
    goto loc_000A4218;

loc_000A3FB2: ;
    ecx = esi;
    PUSH32(esp, 0x000A3FB9u); RECOMP_ABI_CALL(0x000A3930u, sub_000A3930); /* call 0x000A3930 */

loc_000A3FB9: ;
    goto loc_000A4218;

loc_000A3FBE: ;
    ecx = esi;
    PUSH32(esp, 0x000A3FC5u); RECOMP_ABI_CALL(0x000A39B0u, sub_000A39B0); /* call 0x000A39B0 */

loc_000A3FC5: ;
    goto loc_000A4218;

loc_000A3FCA: ;
    ecx = esi;
    PUSH32(esp, 0x000A3FD1u); RECOMP_ABI_CALL(0x000A3A20u, sub_000A3A20); /* call 0x000A3A20 */

loc_000A3FD1: ;
    PUSH32(esp, 0x24);
    goto loc_000A4211;

loc_000A3FD8: ;
    ecx = esi;
    PUSH32(esp, 0x000A3FDFu); RECOMP_ABI_CALL(0x000A3A20u, sub_000A3A20); /* call 0x000A3A20 */

loc_000A3FDF: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x000A3FE6u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A3FE6: ;
    PUSH32(esp, 0x28);
    ecx = esi;
    PUSH32(esp, 0x000A3FEFu); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A3FEF: ;
    PUSH32(esp, 0x1E);
    ecx = esi;
    PUSH32(esp, 0x000A3FF8u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A3FF8: ;
    PUSH32(esp, 0x1F);
    ecx = esi;
    PUSH32(esp, 0x000A4001u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4001: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x000A400Au); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A400A: ;
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x000A4013u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4013: ;
    PUSH32(esp, 0x2F);
    ecx = esi;
    PUSH32(esp, 0x000A401Cu); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A401C: ;
    PUSH32(esp, 0x31);
    ecx = esi;
    PUSH32(esp, 0x000A4025u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4025: ;
    PUSH32(esp, 0x26);
    ecx = esi;
    PUSH32(esp, 0x000A402Eu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A402E: ;
    PUSH32(esp, 0x27);
    PUSH32(esp, 0x000A4035u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A4035: ;
    PUSH32(esp, 0x2A);
    PUSH32(esp, 0x000A403Cu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A403C: ;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x000A4043u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4043: ;
    PUSH32(esp, 0x5D);
    ecx = esi;
    PUSH32(esp, 0x000A404Cu); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A404C: ;
    PUSH32(esp, 0x5E);
    ecx = esi;
    PUSH32(esp, 0x000A4055u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4055: ;
    PUSH32(esp, 0x2B);
    ecx = esi;
    PUSH32(esp, 0x000A405Eu); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A405E: ;
    PUSH32(esp, 0x25);
    goto loc_000A4211;

loc_000A4065: ;
    ecx = esi;
    PUSH32(esp, 0x000A406Cu); RECOMP_ABI_CALL(0x000A3A20u, sub_000A3A20); /* call 0x000A3A20 */

loc_000A406C: ;
    PUSH32(esp, 7);
    goto loc_000A4211;

loc_000A4073: ;
    ecx = esi;
    PUSH32(esp, 0x000A407Au); RECOMP_ABI_CALL(0x000A3A20u, sub_000A3A20); /* call 0x000A3A20 */

loc_000A407A: ;
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x000A4081u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4081: ;
    PUSH32(esp, 0x22);
    goto loc_000A4211;

loc_000A4088: ;
    ecx = esi;
    PUSH32(esp, 0x000A408Fu); RECOMP_ABI_CALL(0x000A3A20u, sub_000A3A20); /* call 0x000A3A20 */

loc_000A408F: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x000A4096u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A4096: ;
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x000A409Du); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A409D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000A40A4u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A40A4: ;
    goto loc_000A4218;

loc_000A40A9: ;
    PUSH32(esp, 0x5A);
    ecx = esi;
    PUSH32(esp, 0x000A40B2u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A40B2: ;
    PUSH32(esp, 0x66);
    PUSH32(esp, 0x000A40B9u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A40B9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000A40C0u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A40C0: ;
    PUSH32(esp, 4);
    goto loc_000A4211;

loc_000A40C7: ;
    ecx = esi;
    PUSH32(esp, 0x000A40CEu); RECOMP_ABI_CALL(0x000A3A20u, sub_000A3A20); /* call 0x000A3A20 */

loc_000A40CE: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x000A40D5u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A40D5: ;
    PUSH32(esp, 0x28);
    ecx = esi;
    PUSH32(esp, 0x000A40DEu); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A40DE: ;
    PUSH32(esp, 0x1E);
    ecx = esi;
    PUSH32(esp, 0x000A40E7u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A40E7: ;
    PUSH32(esp, 0x1F);
    ecx = esi;
    PUSH32(esp, 0x000A40F0u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A40F0: ;
    PUSH32(esp, 0x2F);
    ecx = esi;
    PUSH32(esp, 0x000A40F9u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A40F9: ;
    PUSH32(esp, 0x31);
    ecx = esi;
    PUSH32(esp, 0x000A4102u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4102: ;
    PUSH32(esp, 0x26);
    ecx = esi;
    PUSH32(esp, 0x000A410Bu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A410B: ;
    PUSH32(esp, 0x27);
    PUSH32(esp, 0x000A4112u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A4112: ;
    PUSH32(esp, 0x2A);
    PUSH32(esp, 0x000A4119u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A4119: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x000A4120u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4120: ;
    PUSH32(esp, 0x22);
    ecx = esi;
    PUSH32(esp, 0x000A4129u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4129: ;
    PUSH32(esp, 0x23);
    ecx = esi;
    PUSH32(esp, 0x000A4132u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A4132: ;
    PUSH32(esp, 0x2B);
    PUSH32(esp, 0x000A4139u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4139: ;
    PUSH32(esp, 0x5D);
    ecx = esi;
    PUSH32(esp, 0x000A4142u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4142: ;
    PUSH32(esp, 0x5E);
    ecx = esi;
    PUSH32(esp, 0x000A414Bu); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A414B: ;
    goto loc_000A4218;

loc_000A4150: ;
    PUSH32(esp, 0x4B);
    ecx = esi;
    PUSH32(esp, 0x000A4159u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A4159: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x000A4160u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A4160: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x000A4167u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A4167: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000A416Eu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A416E: ;
    PUSH32(esp, 0x33);
    PUSH32(esp, 0x000A4175u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A4175: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x000A417Cu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A417C: ;
    PUSH32(esp, 0x35);
    PUSH32(esp, 0x000A4183u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A4183: ;
    PUSH32(esp, 0x5A);
    PUSH32(esp, 0x000A418Au); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A418A: ;
    PUSH32(esp, 0x5B);
    PUSH32(esp, 0x000A4191u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A4191: ;
    PUSH32(esp, 0x5C);
    goto loc_000A4211;

loc_000A4195: ;
    PUSH32(esp, 0x4F);
    ecx = esi;
    PUSH32(esp, 0x000A419Eu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A419E: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x000A41A5u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A41A5: ;
    PUSH32(esp, 0x52);
    PUSH32(esp, 0x000A41ACu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A41AC: ;
    PUSH32(esp, 0x51);
    PUSH32(esp, 0x000A41B3u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A41B3: ;
    PUSH32(esp, 0x53);
    PUSH32(esp, 0x000A41BAu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A41BA: ;
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x000A41C1u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A41C1: ;
    PUSH32(esp, 0x55);
    PUSH32(esp, 0x000A41C8u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A41C8: ;
    PUSH32(esp, 0x56);
    PUSH32(esp, 0x000A41CFu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A41CF: ;
    PUSH32(esp, 0x57);
    PUSH32(esp, 0x000A41D6u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A41D6: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x000A41DDu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A41DD: ;
    PUSH32(esp, 0x59);
    goto loc_000A4211;

loc_000A41E1: ;
    PUSH32(esp, 0x1E);
    ecx = esi;
    PUSH32(esp, 0x000A41EAu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A41EA: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x000A41F1u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A41F1: ;
    PUSH32(esp, 0x4B);
    PUSH32(esp, 0x000A41F8u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A41F8: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x000A41FFu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A41FF: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x000A4206u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A4206: ;
    ecx = esi;
    PUSH32(esp, 0x2B);
    PUSH32(esp, 0x000A420Fu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A420F: ;
    PUSH32(esp, 0x5A);

loc_000A4211: ;
    ecx = esi;
    PUSH32(esp, 0x000A4218u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A4218: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(0x413FB4) = LO8(eax);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4238; /* je: equal / zero */

loc_000A422B: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A4233u); RECOMP_ABI_CALL(0x000A4280u, sub_000A4280); /* call 0x000A4280 */

loc_000A4233: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000A4238: ;
    POP32(esp, edi);
    MEM32(esi + 0x4C8) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A4280
 * Original: 0x000A4280 - 0x000A4488 (520 bytes, 171 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4280: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x000A428Bu); RECOMP_ABI_CALL(0x000A3AB0u, sub_000A3AB0); /* call 0x000A3AB0 */

loc_000A428B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4291u); RECOMP_ABI_CALL(0x000A3F80u, sub_000A3F80); /* call 0x000A3F80 */

loc_000A4291: ;
    edi = MEM32(esp + 0xC);
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A447D; /* ja: above (unsigned >) */

loc_000A42A1: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xA4488); /* switch: 6 entries, 6 targets */
    if (_jt == 0x000A42A8u) goto loc_000A42A8;
    if (_jt == 0x000A433Au) goto loc_000A433A;
    if (_jt == 0x000A43DAu) goto loc_000A43DA;
    if (_jt == 0x000A43F5u) goto loc_000A43F5;
    if (_jt == 0x000A442Cu) goto loc_000A442C;
    if (_jt == 0x000A446Du) goto loc_000A446D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000A42A8: ;
    PUSH32(esp, 0x5D);
    ecx = esi;
    PUSH32(esp, 0x000A42B1u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A42B1: ;
    PUSH32(esp, 0x5E);
    ecx = esi;
    PUSH32(esp, 0x000A42BAu); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A42BA: ;
    PUSH32(esp, 0x5B);
    ecx = esi;
    PUSH32(esp, 0x000A42C3u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A42C3: ;
    PUSH32(esp, 0x5C);
    ecx = esi;
    PUSH32(esp, 0x000A42CCu); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A42CC: ;
    PUSH32(esp, 0x24);
    ecx = esi;
    PUSH32(esp, 0x000A42D5u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A42D5: ;
    PUSH32(esp, 0x25);
    ecx = esi;
    PUSH32(esp, 0x000A42DEu); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A42DE: ;
    PUSH32(esp, 0x22);
    ecx = esi;
    PUSH32(esp, 0x000A42E7u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A42E7: ;
    PUSH32(esp, 0x23);
    ecx = esi;
    PUSH32(esp, 0x000A42F0u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A42F0: ;
    PUSH32(esp, 0x64);
    ecx = esi;
    PUSH32(esp, 0x000A42F9u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A42F9: ;
    PUSH32(esp, 0x65);
    ecx = esi;
    PUSH32(esp, 0x000A4302u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4302: ;
    PUSH32(esp, 0x66);
    ecx = esi;
    PUSH32(esp, 0x000A430Bu); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A430B: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000A4314u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4314: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x000A431Du); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A431D: ;
    PUSH32(esp, 0x2B);
    ecx = esi;
    PUSH32(esp, 0x000A4326u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4326: ;
    PUSH32(esp, 0x2F);
    ecx = esi;
    PUSH32(esp, 0x000A432Fu); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A432F: ;
    MEM32(esi + 0x4C8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A433A: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x000A4343u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4343: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000A434Cu); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A434C: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x000A4355u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4355: ;
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x000A435Eu); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A435E: ;
    PUSH32(esp, 0x5B);
    ecx = esi;
    PUSH32(esp, 0x000A4367u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4367: ;
    PUSH32(esp, 0x5C);
    ecx = esi;
    PUSH32(esp, 0x000A4370u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4370: ;
    PUSH32(esp, 0x24);
    ecx = esi;
    PUSH32(esp, 0x000A4379u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4379: ;
    PUSH32(esp, 0x25);
    ecx = esi;
    PUSH32(esp, 0x000A4382u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4382: ;
    PUSH32(esp, 0x22);
    ecx = esi;
    PUSH32(esp, 0x000A438Bu); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A438B: ;
    PUSH32(esp, 0x23);
    ecx = esi;
    PUSH32(esp, 0x000A4394u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4394: ;
    PUSH32(esp, 0x64);
    ecx = esi;
    PUSH32(esp, 0x000A439Du); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A439D: ;
    PUSH32(esp, 0x66);
    ecx = esi;
    PUSH32(esp, 0x000A43A6u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A43A6: ;
    PUSH32(esp, 0x2B);
    ecx = esi;
    PUSH32(esp, 0x000A43AFu); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A43AF: ;
    PUSH32(esp, 0x2F);
    ecx = esi;
    PUSH32(esp, 0x000A43B8u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A43B8: ;
    PUSH32(esp, 0x60);
    ecx = esi;
    PUSH32(esp, 0x000A43C1u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A43C1: ;
    PUSH32(esp, 0x61);
    PUSH32(esp, 0x000A43C8u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A43C8: ;
    PUSH32(esp, 0x5F);
    PUSH32(esp, 0x000A43CFu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A43CF: ;
    MEM32(esi + 0x4C8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A43DA: ;
    PUSH32(esp, 0x62);
    ecx = esi;
    PUSH32(esp, 0x000A43E3u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A43E3: ;
    PUSH32(esp, 0x63);
    PUSH32(esp, 0x000A43EAu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A43EA: ;
    MEM32(esi + 0x4C8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A43F5: ;
    PUSH32(esp, 0x67);
    ecx = esi;
    PUSH32(esp, 0x000A43FEu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A43FE: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x000A4405u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A4405: ;
    PUSH32(esp, 0x69);
    PUSH32(esp, 0x000A440Cu); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A440C: ;
    PUSH32(esp, 0x6A);
    PUSH32(esp, 0x000A4413u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A4413: ;
    PUSH32(esp, 0x6B);
    PUSH32(esp, 0x000A441Au); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A441A: ;
    PUSH32(esp, 0x6C);
    PUSH32(esp, 0x000A4421u); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A4421: ;
    MEM32(esi + 0x4C8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A442C: ;
    PUSH32(esp, 0x5B);
    ecx = esi;
    PUSH32(esp, 0x000A4435u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4435: ;
    PUSH32(esp, 0x5C);
    ecx = esi;
    PUSH32(esp, 0x000A443Eu); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A443E: ;
    PUSH32(esp, 0x5D);
    ecx = esi;
    PUSH32(esp, 0x000A4447u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4447: ;
    PUSH32(esp, 0x5E);
    ecx = esi;
    PUSH32(esp, 0x000A4450u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4450: ;
    PUSH32(esp, 0x24);
    ecx = esi;
    PUSH32(esp, 0x000A4459u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4459: ;
    PUSH32(esp, 0x22);
    ecx = esi;
    PUSH32(esp, 0x000A4462u); RECOMP_ABI_CALL(0x000A2FB0u, sub_000A2FB0); /* call 0x000A2FB0 */

loc_000A4462: ;
    MEM32(esi + 0x4C8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A446D: ;
    ecx = esi;
    PUSH32(esp, 0x000A4474u); RECOMP_ABI_CALL(0x000A3030u, sub_000A3030); /* call 0x000A3030 */

loc_000A4474: ;
    PUSH32(esp, 0x5A);
    ecx = esi;
    PUSH32(esp, 0x000A447Du); RECOMP_ABI_CALL(0x000A2F00u, sub_000A2F00); /* call 0x000A2F00 */

loc_000A447D: ;
    MEM32(esi + 0x4C8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A44A0
 * Original: 0x000A44A0 - 0x000A44C9 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A44A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A44A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x2E7278;
    if (CMP_EQ(_fa, _fb)) goto loc_000A44C3; /* je: equal / zero */

loc_000A44B0: ;
    PUSH32(esp, esi);
    ecx = eax + 0xD0;
    PUSH32(esp, 0x000A44BCu); RECOMP_ABI_CALL(0x0020AB20u, sub_0020AB20); /* call 0x0020AB20 */

loc_000A44BC: ;
    MEM32(esi + 8) = 0;

loc_000A44C3: ;
    MEM8(esi + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A44D0
 * Original: 0x000A44D0 - 0x000A450D (61 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A44D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A44D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x2E7278;
    if (CMP_EQ(_fa, _fb)) goto loc_000A44F3; /* je: equal / zero */

loc_000A44E0: ;
    PUSH32(esp, esi);
    ecx = eax + 0xD0;
    PUSH32(esp, 0x000A44ECu); RECOMP_ABI_CALL(0x0020AB20u, sub_0020AB20); /* call 0x0020AB20 */

loc_000A44EC: ;
    MEM32(esi + 8) = 0;

loc_000A44F3: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM8(esi + 4) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000A4507; /* je: equal / zero */

loc_000A44FE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A4504u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000A4504: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A4507: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4510
 * Original: 0x000A4510 - 0x000A457C (108 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4510: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2420A8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 4) = LO8(ecx);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x1C0) = ecx;
    MEM32(eax) = 0x2E7288;
    edx = eax + 0x170;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    edx = eax + 0x1B0;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4580
 * Original: 0x000A4580 - 0x000A4596 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4580(void)
{

loc_000A4580: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A4588u); RECOMP_ABI_CALL(0x000A4510u, sub_000A4510); /* call 0x000A4510 */

loc_000A4588: ;
    MEM32(esi + 0x1C4) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A45A0
 * Original: 0x000A45A0 - 0x000A45AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A45A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A45A0: ;
    _fb = (uint32_t)(0x308) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x308;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001FA0A0(); return; /* tail jmp 0x001FA0A0 */

}

/**
 * sub_000A45B0
 * Original: 0x000A45B0 - 0x000A4600 (80 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A45B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A45B0: ;
    SET_LO8(eax, MEM8(ecx + 0x304));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A45BF; /* jne: not equal / not zero */

loc_000A45BA: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000A45BF: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, esi);

loc_000A45C2: ;
    eax = ZX8(LO8(edx));
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = MEM32(eax + ecx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A45E0; /* jle: less or equal (signed <=) */

loc_000A45D3: ;
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x10 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A45C2; /* jb: below (unsigned <) */

loc_000A45DA: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A45E0: ;
    esi = MEM32(esp + 8);
    eax = ZX8(LO8(edx));
    edx = eax + eax * 2;
    PUSH32(esp, edi);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx + ecx + 4;
    ecx = 0xC;
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
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4600
 * Original: 0x000A4600 - 0x000A463F (63 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4600: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x20) = ecx;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x28) = LO8(ecx);
    MEM32(eax + 0x2C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000A4640
 * Original: 0x000A4640 - 0x000A469C (92 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4640: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000A4686; /* je: equal / zero */

loc_000A4647: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000A4670; /* je: equal / zero */

loc_000A464A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000A465D; /* je: equal / zero */

loc_000A464D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000A465D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000A4670: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000A4686: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A46A0
 * Original: 0x000A46A0 - 0x000A46F3 (83 bytes, 18 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A46A0(void)
{

loc_000A46A0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0x1C);
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx) = edx;
    MEM8(ecx + 0x28) = 0;
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_000A4700
 * Original: 0x000A4700 - 0x000A4749 (73 bytes, 16 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4700(void)
{

loc_000A4700: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 0x20) = eax;
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm1.f[0]; /* movss */
    MEM32(ecx) = edx;
    MEM8(ecx + 0x28) = 0;
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A4750
 * Original: 0x000A4750 - 0x000A4781 (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4750(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4750: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x000A475Fu); RECOMP_ABI_CALL(0x000A4600u, sub_000A4600); /* call 0x000A4600 */

loc_000A475F: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000A4770u); RECOMP_ABI_CALL(0x000A4700u, sub_000A4700); /* call 0x000A4700 */

loc_000A4770: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A477Cu); RECOMP_ABI_CALL(0x000A45B0u, sub_000A45B0); /* call 0x000A45B0 */

loc_000A477C: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4790
 * Original: 0x000A4790 - 0x000A47D0 (64 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4790: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x000A479Fu); RECOMP_ABI_CALL(0x000A4600u, sub_000A4600); /* call 0x000A4600 */

loc_000A479F: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 2);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000A47BFu); RECOMP_ABI_CALL(0x000A46A0u, sub_000A46A0); /* call 0x000A46A0 */

loc_000A47BF: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A47CBu); RECOMP_ABI_CALL(0x000A45B0u, sub_000A45B0); /* call 0x000A45B0 */

loc_000A47CB: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A47D0
 * Original: 0x000A47D0 - 0x000A47F1 (33 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A47D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A47D0: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A47EE; /* ja: above (unsigned >) */

loc_000A47DA: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xA47F4); /* switch: 4 entries, 2 targets */
    if (_jt == 0x000A47E1u) goto loc_000A47E1;
    if (_jt == 0x000A47E9u) goto loc_000A47E9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000A47E1: ;
    PUSH32(esp, 0x000A47E6u); RECOMP_ABI_CALL(0x000A4790u, sub_000A4790); /* call 0x000A4790 */

loc_000A47E6: ;
    esp += 12; return; /* ret 8 */

loc_000A47E9: ;
    PUSH32(esp, 0x000A47EEu); RECOMP_ABI_CALL(0x000A4750u, sub_000A4750); /* call 0x000A4750 */

loc_000A47EE: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A4810
 * Original: 0x000A4810 - 0x000A4844 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4810: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x000A481Fu); RECOMP_ABI_CALL(0x000A4600u, sub_000A4600); /* call 0x000A4600 */

loc_000A481F: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000A4833u); RECOMP_ABI_CALL(0x000A4700u, sub_000A4700); /* call 0x000A4700 */

loc_000A4833: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A483Fu); RECOMP_ABI_CALL(0x000A45B0u, sub_000A45B0); /* call 0x000A45B0 */

loc_000A483F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4850
 * Original: 0x000A4850 - 0x000A4890 (64 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4850(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4850: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x000A485Fu); RECOMP_ABI_CALL(0x000A4600u, sub_000A4600); /* call 0x000A4600 */

loc_000A485F: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x40200000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 2);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000A487Fu); RECOMP_ABI_CALL(0x000A46A0u, sub_000A46A0); /* call 0x000A46A0 */

loc_000A487F: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A488Bu); RECOMP_ABI_CALL(0x000A45B0u, sub_000A45B0); /* call 0x000A45B0 */

loc_000A488B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4890
 * Original: 0x000A4890 - 0x000A48CC (60 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4890: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    edx = edi + 4;
    esi = 0x10;
    /* nop */

loc_000A48A0: ;
    ecx = edx;
    PUSH32(esp, 0x000A48A7u); RECOMP_ABI_CALL(0x000A4600u, sub_000A4600); /* call 0x000A4600 */

loc_000A48A7: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A48A0; /* jne: not equal / not zero */

loc_000A48AD: ;
    esi = edi + 0x308;
    ecx = esi;
    MEM8(edi + 0x304) = 0;
    PUSH32(esp, 0x000A48C1u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_000A48C1: ;
    eax = edi;
    POP32(esp, edi);
    MEM32(esi) = 0x2E7298;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A48D0
 * Original: 0x000A48D0 - 0x000A49E3 (275 bytes, 81 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A48D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000A48D0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x24); /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0xC); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    edx = 1;
    if ((_fca > _fcb)) goto loc_000A4930; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000A48F2: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A493B; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000A48FC: ;
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000A4915; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000A4905: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000A4915; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A4912: ;
    xmm1 = xmm0; /* movaps */

loc_000A4915: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    xmm0 = xmm1; /* movaps */
    if (CMP_LE(_fas, _fbs)) goto loc_000A4927; /* jle: less or equal (signed <=) */

loc_000A491F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000A4920: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    if ((_fa != 0)) goto loc_000A4920; /* jne: not equal / not zero */

loc_000A4927: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */

loc_000A4930: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    goto loc_000A49C6;

loc_000A493B: ;
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 0x10); /* addss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000A49BB; /* ja: above (unsigned >) (xmm3.f[0] vs xmm0.f[0]) */

loc_000A494A: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + 0x10); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ecx + 0x18); /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A49A8; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000A495E: ;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 0x18); /* divss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A4979; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000A4974: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000A4981;

loc_000A4979: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A4981; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000A497E: ;
    xmm0 = xmm3; /* movaps */

loc_000A4981: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    xmm2 = xmm0; /* movaps */
    if (CMP_LE(_fas, _fbs)) goto loc_000A4997; /* jle: less or equal (signed <=) */

loc_000A498B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_000A4990: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    if ((_fa != 0)) goto loc_000A4990; /* jne: not equal / not zero */

loc_000A4997: ;
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ecx + 0x1C); /* mulss */
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    goto loc_000A49C6;

loc_000A49A8: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A49DA; /* jp: parity */

loc_000A49B1: ;
    SET_LO8(eax, MEM8(ecx + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A49DA; /* jne: not equal / not zero */

loc_000A49B8: ;
    MEM8(ecx + 0x28) = LO8(edx);

loc_000A49BB: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_000A49C6: ;
    eax = MEM32(esp + 4);
    MEM8(ecx + 0x28) = LO8(edx);
    edx = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A49D7u); RECOMP_ABI_CALL(0x000A4640u, sub_000A4640); /* call 0x000A4640 */

loc_000A49D7: ;
    esp += 8; return; /* ret 4 */

loc_000A49DA: ;
    MEM32(ecx) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A49F0
 * Original: 0x000A49F0 - 0x000A4A55 (101 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A49F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000A49F0: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC3C4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    PUSH32(esp, esi);
    esi = ecx;
    if ((_fca > _fcb)) goto loc_000A4A16; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000A4A09: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A4A1C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A4A16: ;
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */

loc_000A4A1C: ;
    ecx = esp + 4;
    PUSH32(esp, 0x000A4A25u); RECOMP_ABI_CALL(0x000A4600u, sub_000A4600); /* call 0x000A4600 */

loc_000A4A25: ;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 2);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000A4A42u); RECOMP_ABI_CALL(0x000A46A0u, sub_000A46A0); /* call 0x000A46A0 */

loc_000A4A42: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A4A4Eu); RECOMP_ABI_CALL(0x000A45B0u, sub_000A45B0); /* call 0x000A45B0 */

loc_000A4A4E: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4A60
 * Original: 0x000A4A60 - 0x000A4AD6 (118 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000A4A60: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC34C); /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    PUSH32(esp, esi);
    esi = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A4A84; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000A4A7C: ;
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    goto loc_000A4A9D;

loc_000A4A84: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000A4A9D; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A4A97: ;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */

loc_000A4A9D: ;
    ecx = esp + 4;
    PUSH32(esp, 0x000A4AA6u); RECOMP_ABI_CALL(0x000A4600u, sub_000A4600); /* call 0x000A4600 */

loc_000A4AA6: ;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 2);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000A4AC3u); RECOMP_ABI_CALL(0x000A46A0u, sub_000A46A0); /* call 0x000A46A0 */

loc_000A4AC3: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A4ACFu); RECOMP_ABI_CALL(0x000A45B0u, sub_000A45B0); /* call 0x000A45B0 */

loc_000A4ACF: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4AE0
 * Original: 0x000A4AE0 - 0x000A4B64 (132 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000A4AE0: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    PUSH32(esp, esi);
    esi = ecx;
    if ((_fca > _fcb)) goto loc_000A4B5D; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000A4AF9: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E219C); /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000A4B1D; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000A4B0D: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000A4B1D; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A4B1A: ;
    xmm1 = xmm0; /* movaps */

loc_000A4B1D: ;
    SET_LO8(eax, MEM8(esp + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4B5D; /* jne: not equal / not zero */

loc_000A4B25: ;
    ecx = esp + 4;
    PUSH32(esp, 0x000A4B2Eu); RECOMP_ABI_CALL(0x000A4600u, sub_000A4600); /* call 0x000A4600 */

loc_000A4B2E: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DD418); /* mulss */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 2);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000A4B51u); RECOMP_ABI_CALL(0x000A46A0u, sub_000A46A0); /* call 0x000A46A0 */

loc_000A4B51: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A4B5Du); RECOMP_ABI_CALL(0x000A45B0u, sub_000A45B0); /* call 0x000A45B0 */

loc_000A4B5D: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A4B70
 * Original: 0x000A4B70 - 0x000A4BEF (127 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000A4B70: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC3C4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    PUSH32(esp, esi);
    esi = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A4B9D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000A4B95: ;
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    goto loc_000A4BB6;

loc_000A4B9D: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000A4BB6; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A4BB0: ;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */

loc_000A4BB6: ;
    ecx = esp + 4;
    PUSH32(esp, 0x000A4BBFu); RECOMP_ABI_CALL(0x000A4600u, sub_000A4600); /* call 0x000A4600 */

loc_000A4BBF: ;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000A4BDCu); RECOMP_ABI_CALL(0x000A46A0u, sub_000A46A0); /* call 0x000A46A0 */

loc_000A4BDC: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A4BE8u); RECOMP_ABI_CALL(0x000A45B0u, sub_000A45B0); /* call 0x000A45B0 */

loc_000A4BE8: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4BF0
 * Original: 0x000A4BF0 - 0x000A4CBC (204 bytes, 65 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4BF0(void)
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

loc_000A4BF0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    PUSH32(esp, ebx);
    ebx = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A4CA3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_000A4C08: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4CB5; /* je: equal / zero */

loc_000A4C11: ;
    SET_LO8(eax, MEM8(ebx + 0x304));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4C84; /* je: equal / zero */

loc_000A4C27: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx + 8;
    MEM32(esp + 0x10) = 0x10;
    /* nop */

loc_000A4C40: ;
    esi = MEM32(edi + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = edi + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_000A4C73; /* je: equal / zero */

loc_000A4C4A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000A4C50u); RECOMP_ABI_CALL(0x000A48D0u, sub_000A48D0); /* call 0x000A48D0 */

loc_000A4C50: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A4C73; /* jle: less or equal (signed <=) */

loc_000A4C54: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A4C64; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_000A4C5E: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_000A4C64: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A4C73; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_000A4C6D: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_000A4C73: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_000A4C40; /* jne: not equal / not zero */

loc_000A4C81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_000A4C84: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4C90u); RECOMP_ABI_CALL(0x0020F180u, sub_0020F180); /* call 0x0020F180 */

loc_000A4C90: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    PUSH32(esp, 0x000A4C9Cu); RECOMP_ABI_CALL(0x0020F120u, sub_0020F120); /* call 0x0020F120 */

loc_000A4C9C: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000A4CA3: ;
    ecx = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A4CACu); RECOMP_ABI_CALL(0x0020F180u, sub_0020F180); /* call 0x0020F180 */

loc_000A4CAC: ;
    ecx = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A4CB5u); RECOMP_ABI_CALL(0x0020F120u, sub_0020F120); /* call 0x0020F120 */

loc_000A4CB5: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4CC0
 * Original: 0x000A4CC0 - 0x000A4CCA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4CC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4CC0: ;
    ecx = 0x323AD8;
    g_seh_ebp = ebp; sub_000A4BF0(); return; /* tail jmp 0x000A4BF0 */

}

/**
 * sub_000A4CD0
 * Original: 0x000A4CD0 - 0x000A4CDA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4CD0(void)
{

loc_000A4CD0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x54) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4CE0
 * Original: 0x000A4CE0 - 0x000A4CE8 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4CE0: ;
    ecx = MEM32(ecx + 0x1C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_000A4CF0
 * Original: 0x000A4CF0 - 0x000A4CF8 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4CF0: ;
    ecx = MEM32(ecx + 0x1C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_000A4D00
 * Original: 0x000A4D00 - 0x000A4D1C (28 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4D00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4D00: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x8BC);
    MEM32(ecx + 0x8B4) = eax;
    MEM32(eax + 0xC) = edx;
    MEM32(ecx + 0x8BC) = MEM32(ecx + 0x8BC) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x8BC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4D20
 * Original: 0x000A4D20 - 0x000A4D27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4D20(void)
{

loc_000A4D20: ;
    MEM32(ecx) = 0x2E72AC;
    esp += 4; return; /* ret */

}

/**
 * sub_000A4D30
 * Original: 0x000A4D30 - 0x000A4D97 (103 bytes, 20 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4D30: ;
    eax = MEM32(ecx + 0x8B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A4D94; /* jge: greater or equal (signed >=) */

loc_000A4D3D: ;
    edx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + ecx + 0xB4) = edx;
    eax = MEM32(ecx + 0x8B8);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(eax + ecx + 0xB8) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0x8B8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(edx + ecx + 0xBC) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 0x8B8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + ecx) = 0;
    MEM32(ecx + 0x8B8) = MEM32(ecx + 0x8B8) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x8B8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000A4D94: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000A4DA0
 * Original: 0x000A4DA0 - 0x000A4E41 (161 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4DA0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    edi = ecx;
    PUSH32(esp, 0x000A4DBAu); RECOMP_ABI_CALL(0x0020CF20u, sub_0020CF20); /* call 0x0020CF20 */

loc_000A4DBA: ;
    ebx = MEM32(edi + 0x28);
    _fa = (uint32_t)(MEM32(ebx + 0x8B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x8B8), esi (32-bit) */
    MEM32(esp + 0xC) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_000A4E3A; /* jle: less or equal (signed <=) */

loc_000A4DC9: ;
    PUSH32(esp, ebp);
    /* nop */

loc_000A4DD0: ;
    eax = MEM32(edi + 0x28);
    xmm0 = XMM_SCALAR(MEMF(esi + eax + 0xB8)); /* movss */
    ecx = MEM32(esi + eax + 0xB4);
    edx = esi + eax + 0xB4;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + eax + 0xBC)); /* movss */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x8B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x8B4) (32-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000A4E0F; /* jne: not equal / not zero */

loc_000A4E09: ;
    ebp = MEM32(ebx + 0x8C4);

loc_000A4E0F: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A4E20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A4E1Du); } /* indirect call */
    }

loc_000A4E20: ;
    eax = MEM32(esp + 0x10);
    ebx = MEM32(edi + 0x28);
    ecx = MEM32(ebx + 0x8B8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000A4DD0; /* jl: less (signed <) */

loc_000A4E39: ;
    POP32(esp, ebp);

loc_000A4E3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4E50
 * Original: 0x000A4E50 - 0x000A4E6E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4E50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A4E58u); RECOMP_ABI_CALL(0x000A4D20u, sub_000A4D20); /* call 0x000A4D20 */

loc_000A4E58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4E68; /* je: equal / zero */

loc_000A4E5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A4E65u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000A4E65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A4E68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4E70
 * Original: 0x000A4E70 - 0x000A4ED2 (98 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4E70: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x8C0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4ED0; /* jne: not equal / not zero */

loc_000A4E7D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    eax = esi + 0x88;
    edi = esi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(esi + 0x8C0) = 1;
    MEM32(esi + 0xB0) = esi;
    PUSH32(esp, 0x000A4E9Eu); RECOMP_ABI_CALL(0x0020B770u, sub_0020B770); /* call 0x0020B770 */

loc_000A4E9E: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A4EA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A4EA4u); } /* indirect call */
    }

loc_000A4EA7: ;
    eax = MEM32(esi + 0x54);
    edi = esi + 0x58;
    PUSH32(esp, 0);
    MEM32(esi + 0x74) = esi;
    PUSH32(esp, edi);
    ecx = eax + 0xD0;
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0x000A4EC1u); RECOMP_ABI_CALL(0x0020F750u, sub_0020F750); /* call 0x0020F750 */

loc_000A4EC1: ;
    MEM8(edi + 4) = 1;
    MEM32(esi + 0x8C4) = 1;
    POP32(esp, edi);

loc_000A4ED0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4EE0
 * Original: 0x000A4EE0 - 0x000A4F32 (82 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4EE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x8C0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4F30; /* je: equal / zero */

loc_000A4EED: ;
    PUSH32(esp, edi);
    edi = esi + 0x58;
    MEM8(esi + 0x8C0) = 0;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4F12; /* je: equal / zero */

loc_000A4EFF: ;
    PUSH32(esp, edi);
    ecx = eax + 0xD0;
    PUSH32(esp, 0x000A4F0Bu); RECOMP_ABI_CALL(0x0020AB20u, sub_0020AB20); /* call 0x0020AB20 */

loc_000A4F0B: ;
    MEM32(edi + 8) = 0;

loc_000A4F12: ;
    MEM8(edi + 4) = 0;
    eax = MEM32(esi + 4);
    edi = esi + 4;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000A4F21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A4F1Eu); } /* indirect call */
    }

loc_000A4F21: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x88;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000A4F2Fu); RECOMP_ABI_CALL(0x0020B800u, sub_0020B800); /* call 0x0020B800 */

loc_000A4F2F: ;
    POP32(esp, edi);

loc_000A4F30: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4F40
 * Original: 0x000A4F40 - 0x000A4F66 (38 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4F40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4F40: ;
    edx = MEM32(ecx + 0xC);
    eax = MEM32(esp + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    MEM32(eax + 0x10) = 0;
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    MEM32(ecx) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4F70
 * Original: 0x000A4F70 - 0x000A4FBB (75 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4F70: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x8B8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A4FA1; /* jle: less or equal (signed <=) */

loc_000A4F7D: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    edx = ecx + 0xB4;
    /* nop */

loc_000A4F90: ;
    ebx = MEM32(edx);
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4FA5; /* je: equal / zero */

loc_000A4F97: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A4F90; /* jl: less (signed <) */

loc_000A4F9F: ;
    POP32(esp, ebx);
    POP32(esp, edi);

loc_000A4FA1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A4FA5: ;
    POP32(esp, ebx);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0xB4;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000A4D00(); return; /* tail jmp 0x000A4D00 */

}

/**
 * sub_000A4FC0
 * Original: 0x000A4FC0 - 0x000A51B0 (496 bytes, 151 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000A4FC0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4FD1; /* jne: not equal / not zero */

loc_000A4FCB: ;
    eax = MEM32(ecx + 0x8B4);

loc_000A4FD1: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4FDF; /* jne: not equal / not zero */

loc_000A4FD9: ;
    edx = MEM32(ecx + 0x8B4);

loc_000A4FDF: ;
    ecx = MEM32(ecx + 0x8B4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 8); /* addss */
    ecx = MEM32(eax);
    xmm4 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(eax + 8); /* addss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ecx = MEM32(edx);
    xmm6 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + 8); /* addss */
    MEMF(esp + 0xC) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    MEMF(esp + 8) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm5.f[0] = xmm5.f[0] + MEMF(edx + 4); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    esi = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0xC);
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    if ((_fa == 0)) goto loc_000A5144; /* je: equal / zero */

loc_000A5071: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000A510C; /* je: equal / zero */

loc_000A5078: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000A50C3; /* je: equal / zero */

loc_000A507D: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A508F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esp + 0x1C)) */

loc_000A5084: ;
    _fca = xmm4.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A508F; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs MEMF(esp + 0x18)) */

loc_000A508B: ;
    SET_LO8(ebx, 1);
    goto loc_000A5091;

loc_000A508F: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000A5091: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A50B1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esp + 0xC)) */

loc_000A5098: ;
    _fca = xmm6.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A50B1; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs MEMF(esp + 0x18)) */

loc_000A509F: ;
    xmm2 = xmm7; /* movaps */
    SET_LO8(ecx, 1);
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] - xmm5.f[0]; /* subss */
    goto loc_000A517A;

loc_000A50B1: ;
    xmm2 = xmm7; /* movaps */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] - xmm5.f[0]; /* subss */
    goto loc_000A517A;

loc_000A50C3: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A50D5; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esp + 0x1C)) */

loc_000A50CA: ;
    _fca = xmm4.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A50D5; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs MEMF(esp + 0x18)) */

loc_000A50D1: ;
    SET_LO8(ebx, 1);
    goto loc_000A50D7;

loc_000A50D5: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000A50D7: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A50FA; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esp + 0xC)) */

loc_000A50DE: ;
    _fca = xmm6.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A50FA; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs MEMF(esp + 0x18)) */

loc_000A50E5: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    SET_LO8(ecx, 1);
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] - xmm0.f[0]; /* subss */
    goto loc_000A517A;

loc_000A50FA: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] - xmm0.f[0]; /* subss */
    goto loc_000A517A;

loc_000A510C: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A511A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000A5111: ;
    _fca = xmm3.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A511A; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm7.f[0]) */

loc_000A5116: ;
    SET_LO8(ebx, 1);
    goto loc_000A511C;

loc_000A511A: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000A511C: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A512C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_000A5123: ;
    _fca = xmm5.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A512C; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm7.f[0]) */

loc_000A5128: ;
    SET_LO8(ecx, 1);
    goto loc_000A512E;

loc_000A512C: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000A512E: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] - xmm1.f[0]; /* subss */
    goto loc_000A517A;

loc_000A5144: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A5152; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000A5149: ;
    _fca = xmm3.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A5152; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm7.f[0]) */

loc_000A514E: ;
    SET_LO8(ebx, 1);
    goto loc_000A5154;

loc_000A5152: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000A5154: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A5164; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_000A515B: ;
    _fca = xmm5.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A5164; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm7.f[0]) */

loc_000A5160: ;
    SET_LO8(ecx, 1);
    goto loc_000A5166;

loc_000A5164: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000A5166: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */

loc_000A517A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000A5186; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_000A5182: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A5188; /* jne: not equal / not zero */

loc_000A5186: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A5188: ;
    _fca = xmm0.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000A51A7; /* ja: above (unsigned >) (xmm0.f[0] vs xmm7.f[0]) */

loc_000A518D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A51A7; /* je: equal / zero */

loc_000A5191: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A51A5; /* je: equal / zero */

loc_000A5195: ;
    _fca = xmm7.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000A51A7; /* ja: above (unsigned >) (xmm7.f[0] vs xmm2.f[0]) */

loc_000A519A: ;
    _fca = xmm2.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000A51A5; /* ja: above (unsigned >) (xmm2.f[0] vs xmm7.f[0]) */

loc_000A519F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A51A7; /* jb: below (unsigned <) */

loc_000A51A3: ;
    if (CMP_BE(_fa, _fb)) goto loc_000A51A7; /* jbe: below or equal (unsigned <=) */

loc_000A51A5: ;
    eax = edx;

loc_000A51A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000A51B0
 * Original: 0x000A51B0 - 0x000A539E (494 bytes, 151 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A51B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000A51B0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A51C1; /* jne: not equal / not zero */

loc_000A51BB: ;
    eax = MEM32(ecx + 0x8B4);

loc_000A51C1: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A51CF; /* jne: not equal / not zero */

loc_000A51C9: ;
    edx = MEM32(ecx + 0x8B4);

loc_000A51CF: ;
    ecx = MEM32(ecx + 0x8B4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 8); /* addss */
    ecx = MEM32(eax);
    xmm4 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(eax + 8); /* addss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ecx = MEM32(edx);
    xmm6 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + 8); /* addss */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    MEMF(esp + 0xC) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm5.f[0] = xmm5.f[0] + MEMF(edx + 4); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    esi = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0xC);
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    if ((_fa == 0)) goto loc_000A5332; /* je: equal / zero */

loc_000A5261: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000A52FA; /* je: equal / zero */

loc_000A5268: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000A52B1; /* je: equal / zero */

loc_000A526B: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A527D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esp + 0xC)) */

loc_000A5272: ;
    _fca = xmm4.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A527D; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs MEMF(esp + 0x18)) */

loc_000A5279: ;
    SET_LO8(ebx, 1);
    goto loc_000A527F;

loc_000A527D: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000A527F: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A529F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esp + 0x10)) */

loc_000A5286: ;
    _fca = xmm6.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A529F; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs MEMF(esp + 0x18)) */

loc_000A528D: ;
    xmm2 = xmm7; /* movaps */
    SET_LO8(ecx, 1);
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] - xmm5.f[0]; /* subss */
    goto loc_000A5368;

loc_000A529F: ;
    xmm2 = xmm7; /* movaps */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] - xmm5.f[0]; /* subss */
    goto loc_000A5368;

loc_000A52B1: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A52C3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esp + 0xC)) */

loc_000A52B8: ;
    _fca = xmm4.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A52C3; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs MEMF(esp + 0x18)) */

loc_000A52BF: ;
    SET_LO8(ebx, 1);
    goto loc_000A52C5;

loc_000A52C3: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000A52C5: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A52E8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esp + 0x10)) */

loc_000A52CC: ;
    _fca = xmm6.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A52E8; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs MEMF(esp + 0x18)) */

loc_000A52D3: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    SET_LO8(ecx, 1);
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] - xmm0.f[0]; /* subss */
    goto loc_000A5368;

loc_000A52E8: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] - xmm0.f[0]; /* subss */
    goto loc_000A5368;

loc_000A52FA: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A5308; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000A52FF: ;
    _fca = xmm3.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A5308; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm7.f[0]) */

loc_000A5304: ;
    SET_LO8(ebx, 1);
    goto loc_000A530A;

loc_000A5308: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000A530A: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A531A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x1C)) */

loc_000A5311: ;
    _fca = xmm5.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A531A; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm7.f[0]) */

loc_000A5316: ;
    SET_LO8(ecx, 1);
    goto loc_000A531C;

loc_000A531A: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000A531C: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */
    goto loc_000A5368;

loc_000A5332: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A5340; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000A5337: ;
    _fca = xmm3.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A5340; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm7.f[0]) */

loc_000A533C: ;
    SET_LO8(ebx, 1);
    goto loc_000A5342;

loc_000A5340: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000A5342: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A5352; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x1C)) */

loc_000A5349: ;
    _fca = xmm5.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A5352; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm7.f[0]) */

loc_000A534E: ;
    SET_LO8(ecx, 1);
    goto loc_000A5354;

loc_000A5352: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000A5354: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] - xmm1.f[0]; /* subss */

loc_000A5368: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000A5374; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_000A5370: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A5376; /* jne: not equal / not zero */

loc_000A5374: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A5376: ;
    _fca = xmm0.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000A5395; /* ja: above (unsigned >) (xmm0.f[0] vs xmm7.f[0]) */

loc_000A537B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5395; /* je: equal / zero */

loc_000A537F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5393; /* je: equal / zero */

loc_000A5383: ;
    _fca = xmm2.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000A5395; /* ja: above (unsigned >) (xmm2.f[0] vs xmm7.f[0]) */

loc_000A5388: ;
    _fca = xmm7.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000A5393; /* ja: above (unsigned >) (xmm7.f[0] vs xmm2.f[0]) */

loc_000A538D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A5395; /* jb: below (unsigned <) */

loc_000A5391: ;
    if (CMP_BE(_fa, _fb)) goto loc_000A5395; /* jbe: below or equal (unsigned <=) */

loc_000A5393: ;
    eax = edx;

loc_000A5395: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000A53A0
 * Original: 0x000A53A0 - 0x000A53B3 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A53A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A53A0: ;
    eax = MEM32(ecx + 0x8B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A53B0; /* je: equal / zero */

loc_000A53AA: ;
    eax = MEM32(eax);
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

loc_000A53B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A53C0
 * Original: 0x000A53C0 - 0x000A55D6 (534 bytes, 156 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A53C0(void)
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

loc_000A53C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fa = (uint32_t)(MEM8(esp + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x1C), 1 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    PUSH32(esp, 0);
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = esi;
    PUSH32(esp, 0);
    if (TEST_Z(_fa, _fb)) goto loc_000A54DD; /* je: equal / zero */

loc_000A53F6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x60806040);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A5404u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000A5404: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC090)); /* fsub dword ptr [0x2dc090] */
    ecx = esi;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    edi = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC090)); /* fsub dword ptr [0x2dc090] */
    PUSH32(esp, edi);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A5431u); RECOMP_ABI_CALL(0x0020C160u, sub_0020C160); /* call 0x0020C160 */

loc_000A5431: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC090); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000A545Eu); RECOMP_ABI_CALL(0x0020C160u, sub_0020C160); /* call 0x0020C160 */

loc_000A545E: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    PUSH32(esp, edi);
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC090)); /* fadd dword ptr [0x2dc090] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A547Du); RECOMP_ABI_CALL(0x0020C160u, sub_0020C160); /* call 0x0020C160 */

loc_000A547D: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A548Au); RECOMP_ABI_CALL(0x0020C160u, sub_0020C160); /* call 0x0020C160 */

loc_000A548A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A549Eu); RECOMP_ABI_CALL(0x0020A100u, sub_0020A100); /* call 0x0020A100 */

loc_000A549E: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000A54A7u); RECOMP_ABI_CALL(0x0020C160u, sub_0020C160); /* call 0x0020C160 */

loc_000A54A7: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000A54B4u); RECOMP_ABI_CALL(0x0020C160u, sub_0020C160); /* call 0x0020C160 */

loc_000A54B4: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A54C1u); RECOMP_ABI_CALL(0x0020C160u, sub_0020C160); /* call 0x0020C160 */

loc_000A54C1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000A54CAu); RECOMP_ABI_CALL(0x0020C160u, sub_0020C160); /* call 0x0020C160 */

loc_000A54CA: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000A54D3u); RECOMP_ABI_CALL(0x0020C160u, sub_0020C160); /* call 0x0020C160 */

loc_000A54D3: ;
    eax = 0x80808080u;
    goto loc_000A5572;

loc_000A54DD: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x50406080);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A54EBu); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000A54EB: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC090)); /* fsub dword ptr [0x2dc090] */
    ecx = esi;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    edi = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC090)); /* fsub dword ptr [0x2dc090] */
    PUSH32(esp, edi);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A5518u); RECOMP_ABI_CALL(0x0020C160u, sub_0020C160); /* call 0x0020C160 */

loc_000A5518: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC090); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000A5545u); RECOMP_ABI_CALL(0x0020C160u, sub_0020C160); /* call 0x0020C160 */

loc_000A5545: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    PUSH32(esp, edi);
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC090)); /* fadd dword ptr [0x2dc090] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A5564u); RECOMP_ABI_CALL(0x0020C160u, sub_0020C160); /* call 0x0020C160 */

loc_000A5564: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000A556Du); RECOMP_ABI_CALL(0x0020C160u, sub_0020C160); /* call 0x0020C160 */

loc_000A556D: ;
    eax = 0x80603030u;

loc_000A5572: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A5588u); RECOMP_ABI_CALL(0x0020E5E0u, sub_0020E5E0); /* call 0x0020E5E0 */

loc_000A5588: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DBED0); /* subss */
    PUSH32(esp, 1);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC08C); /* addss */
    ecx = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A55BBu); RECOMP_ABI_CALL(0x0020A260u, sub_0020A260); /* call 0x0020A260 */

loc_000A55BB: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A55C9u); RECOMP_ABI_CALL(0x0020A130u, sub_0020A130); /* call 0x0020A130 */

loc_000A55C9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A55E0
 * Original: 0x000A55E0 - 0x000A5796 (438 bytes, 123 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A55E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A55E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, ebp);
    ebp = ecx;
    xmm0 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_000A560C; /* je: equal / zero */

loc_000A5607: ;
    eax = MEM32(ebp + 0x1C);
    goto loc_000A560F;

loc_000A560C: ;
    eax = MEM32(ebp + 0x18);

loc_000A560F: ;
    edi = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A5626u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000A5626: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    ecx = edi;
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x000A566Fu); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000A566F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A572D; /* je: equal / zero */

loc_000A5678: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x48A8234);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A5692u); RECOMP_ABI_CALL(0x0020E5E0u, sub_0020E5E0); /* call 0x0020E5E0 */

loc_000A5692: ;
    ebx = 0xFFFFFFFDu;
    PUSH32(esp, esi);
    goto loc_000A56A0;

    /* nop */

loc_000A56A0: ;
    esi = 0xFFFFFFFDu;

loc_000A56A5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A56AD; /* jne: not equal / not zero */

loc_000A56A9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A571C; /* je: equal / zero */

loc_000A56AD: ;
    eax = esi;
    ecx = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A571C; /* jg: greater (signed >) */

loc_000A56BE: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    PUSH32(esp, 1);
    xmm1.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x28); /* addss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x2C); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x2DC8DC); /* addss */
    ecx = edi;
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x000A570Fu); RECOMP_ABI_CALL(0x0020A260u, sub_0020A260); /* call 0x0020A260 */

loc_000A570F: ;
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A5719u); RECOMP_ABI_CALL(0x0020A130u, sub_0020A130); /* call 0x0020A130 */

loc_000A5719: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A571C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A56A5; /* jle: less or equal (signed <=) */

loc_000A5722: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A56A0; /* jle: less or equal (signed <=) */

loc_000A572C: ;
    POP32(esp, esi);

loc_000A572D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x60606060);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A5747u); RECOMP_ABI_CALL(0x0020E5E0u, sub_0020E5E0); /* call 0x0020E5E0 */

loc_000A5747: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    PUSH32(esp, 1);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC8DC); /* addss */
    ecx = edi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A5780u); RECOMP_ABI_CALL(0x0020A260u, sub_0020A260); /* call 0x0020A260 */

loc_000A5780: ;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A578Au); RECOMP_ABI_CALL(0x0020A130u, sub_0020A130); /* call 0x0020A130 */

loc_000A578A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A57A0
 * Original: 0x000A57A0 - 0x000A57CA (42 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A57A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A57A0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A57C6; /* je: equal / zero */

loc_000A57AA: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);

loc_000A57B4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A57BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A57B8u); } /* indirect call */
    }

loc_000A57BB: ;
    esi = MEM32(esi);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A57B4; /* jne: not equal / not zero */

loc_000A57C4: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000A57C6: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A57D0
 * Original: 0x000A57D0 - 0x000A57F6 (38 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A57D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A57D0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    eax = edx + 8;
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
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A5800
 * Original: 0x000A5800 - 0x000A5822 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5800: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x2E72B4;
    if (CMP_EQ(_fa, _fb)) goto loc_000A5820; /* je: equal / zero */

loc_000A5810: ;
    PUSH32(esp, esi);
    ecx = eax + 0x78;
    PUSH32(esp, 0x000A5819u); RECOMP_ABI_CALL(0x000A4F40u, sub_000A4F40); /* call 0x000A4F40 */

loc_000A5819: ;
    MEM32(esi + 4) = 0;

loc_000A5820: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A5830
 * Original: 0x000A5830 - 0x000A58AB (123 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A5830: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = MEM32(esi + 0x8B8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_000A586C; /* jle: less or equal (signed <=) */

loc_000A5846: ;
    edi = esi + 0xB4;
    /* nop */

loc_000A5850: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A585Au); RECOMP_ABI_CALL(0x000A4FC0u, sub_000A4FC0); /* call 0x000A4FC0 */

loc_000A585A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A5850; /* jne: not equal / not zero */

loc_000A5860: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A586C; /* je: equal / zero */

loc_000A5864: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x8B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x8B4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A5890; /* jne: not equal / not zero */

loc_000A586C: ;
    ebp = MEM32(esi + 0x8B8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A5890; /* jle: less or equal (signed <=) */

loc_000A5876: ;
    edi = esi + 0xB4;
    /* nop */

loc_000A5880: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A588Au); RECOMP_ABI_CALL(0x000A51B0u, sub_000A51B0); /* call 0x000A51B0 */

loc_000A588A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A5880; /* jne: not equal / not zero */

loc_000A5890: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A58A4; /* je: equal / zero */

loc_000A5894: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x8B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x8B4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A58A4; /* je: equal / zero */

loc_000A589C: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A58A4u); RECOMP_ABI_CALL(0x000A4D00u, sub_000A4D00); /* call 0x000A4D00 */

loc_000A58A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A58B0
 * Original: 0x000A58B0 - 0x000A58CE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A58B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A58B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A58B8u); RECOMP_ABI_CALL(0x000A44A0u, sub_000A44A0); /* call 0x000A44A0 */

loc_000A58B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A58C8; /* je: equal / zero */

loc_000A58BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A58C5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000A58C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A58C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A58D0
 * Original: 0x000A58D0 - 0x000A594E (126 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A58D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A58D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2420CB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 8) = edi;
    MEM32(edi) = 0x2E72F4;
    esi = edi + 0x58;
    MEM32(edi + 0x88) = 0x2E6470;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x2E7278;
    if (CMP_EQ(_fa, _fb)) goto loc_000A5929; /* je: equal / zero */

loc_000A5916: ;
    PUSH32(esp, esi);
    ecx = eax + 0xD0;
    PUSH32(esp, 0x000A5922u); RECOMP_ABI_CALL(0x0020AB20u, sub_0020AB20); /* call 0x0020AB20 */

loc_000A5922: ;
    MEM32(esi + 8) = 0;

loc_000A5929: ;
    ecx = edi + 4;
    MEM8(esi + 4) = 0;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A593Du); RECOMP_ABI_CALL(0x00209670u, sub_00209670); /* call 0x00209670 */

loc_000A593D: ;
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
 * sub_000A5950
 * Original: 0x000A5950 - 0x000A596E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5950: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A5958u); RECOMP_ABI_CALL(0x000A5800u, sub_000A5800); /* call 0x000A5800 */

loc_000A5958: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A5968; /* je: equal / zero */

loc_000A595F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A5965u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000A5965: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A5968: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A5970
 * Original: 0x000A5970 - 0x000A59F6 (134 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A5970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5970: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x43430B20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x43430B20 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A59C9; /* ja: above (unsigned >) */

loc_000A597B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000A59BD; /* je: equal / zero */

loc_000A597D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x124AEC70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x124AEC70 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A59B1; /* je: equal / zero */

loc_000A5984: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28217089) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28217089 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A599E; /* je: equal / zero */

loc_000A598B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3DB9B915) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3DB9B915 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A59F1; /* jne: not equal / not zero */

loc_000A5992: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000A5999u); RECOMP_ABI_CALL(0x000A5830u, sub_000A5830); /* call 0x000A5830 */

loc_000A5999: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000A599E: ;
    PUSH32(esp, 0xB09DA7E8u);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000A59ACu); RECOMP_ABI_CALL(0x000A57A0u, sub_000A57A0); /* call 0x000A57A0 */

loc_000A59AC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000A59B1: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x000A59B8u); RECOMP_ABI_CALL(0x000A5830u, sub_000A5830); /* call 0x000A5830 */

loc_000A59B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000A59BD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A59C4u); RECOMP_ABI_CALL(0x000A5830u, sub_000A5830); /* call 0x000A5830 */

loc_000A59C4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000A59C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78E32DE5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x78E32DE5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A59EA; /* je: equal / zero */

loc_000A59D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFD0C5087u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFD0C5087u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A59F1; /* jne: not equal / not zero */

loc_000A59D7: ;
    PUSH32(esp, 0x4E1D8C96);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000A59E5u); RECOMP_ABI_CALL(0x000A57A0u, sub_000A57A0); /* call 0x000A57A0 */

loc_000A59E5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000A59EA: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x000A59F1u); RECOMP_ABI_CALL(0x000A5830u, sub_000A5830); /* call 0x000A5830 */

loc_000A59F1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A5A00
 * Original: 0x000A5A00 - 0x000A5A1E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5A00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A5A08u); RECOMP_ABI_CALL(0x000A58D0u, sub_000A58D0); /* call 0x000A58D0 */

loc_000A5A08: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A5A18; /* je: equal / zero */

loc_000A5A0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A5A15u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000A5A15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A5A18: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A5A20
 * Original: 0x000A5A20 - 0x000A5AE3 (195 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5A20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5A20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = edi;
    MEM32(esi) = 0x2E72F4;
    PUSH32(esp, 0x000A5A34u); RECOMP_ABI_CALL(0x00209680u, sub_00209680); /* call 0x00209680 */

loc_000A5A34: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEM32(edi) = 0x2E683C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x1C) = eax;
    MEM32(edi + 0x24) = eax;
    ecx = edi + 0x14;
    MEM32(ecx + 4) = ecx;
    MEM32(ecx) = ecx;
    MEM32(edi + 0x30) = eax;
    MEM32(edi + 0x38) = eax;
    ecx = edi + 0x28;
    MEM32(ecx + 4) = ecx;
    MEM32(ecx) = ecx;
    MEMF(edi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(edi + 0x44) = eax;
    MEMF(edi + 0x48) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x4C) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x5C) = LO8(eax);
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x58) = 0x2E72BC;
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x84) = eax;
    ecx = esi + 0x78;
    MEM32(ecx + 4) = ecx;
    MEM32(ecx) = ecx;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0x88) = 0x2E72CC;
    MEM32(esi + 0x8B4) = eax;
    MEM32(esi + 0x8B8) = eax;
    MEM32(esi + 0x8BC) = eax;
    MEM8(esi + 0x8C0) = LO8(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A5AF0
 * Original: 0x000A5AF0 - 0x000A5CA5 (437 bytes, 114 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5AF0(void)
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

loc_000A5AF0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x447A0000);
    edi = ecx;
    PUSH32(esp, 0x000A5B00u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_000A5B00: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x68)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x64); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A5CA0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x64)) */

loc_000A5B12: ;
    xmm2 = XMM_SCALAR(MEMF(edi + 0x64)); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E2440)); /* fmul dword ptr [0x2e2440] */
    PUSH32(esp, ebx);
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    PUSH32(esp, ebp);
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0x60); /* mulss */
    PUSH32(esp, esi);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000A5B5Au); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_000A5B5A: ;
    ebx = eax;
    ebx = ebx << 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | 0x4488CC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000A5B65: ;
    ebp = esi + 1;
    MEM32(esp + 0x1C) = ebp;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x30DC50); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x30DC50)); /* fmul dword ptr [0x30dc50] */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC3D0); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = esp + 0x24;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC3D0)); /* fmul dword ptr [0x2dc3d0] */
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000A5BA9u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_000A5BA9: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A5BBDu); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_000A5BBD: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A5BD0u); RECOMP_ABI_CALL(0x0020A2B0u, sub_0020A2B0); /* call 0x0020A2B0 */

loc_000A5BD0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A5BD2: ;
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E7328); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A5BF3u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_000A5BF3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    ecx = edi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A5C3Fu); RECOMP_ABI_CALL(0x0020D450u, sub_0020D450); /* call 0x0020D450 */

loc_000A5C3F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x2C); /* mulss */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    ecx = edi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A5C88u); RECOMP_ABI_CALL(0x0020D450u, sub_0020D450); /* call 0x0020D450 */

loc_000A5C88: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A5BD2; /* jle: less or equal (signed <=) */

loc_000A5C92: ;
    esi = ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A5B65; /* jl: less (signed <) */

loc_000A5C9D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000A5CA0: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A5CB0
 * Original: 0x000A5CB0 - 0x000A5FD5 (805 bytes, 183 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5CB0(void)
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

loc_000A5CB0: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x447A0000);
    esi = ecx;
    PUSH32(esp, 0x000A5CC0u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_000A5CC0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x64); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A5FD0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x64)) */

loc_000A5CD2: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x68); /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x60); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC3E0); /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, ebx);
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ebp);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    goto loc_000A5D10;

    /* nop */

loc_000A5D10: ;
    xmm2 = XMM_SCALAR(MEMF(0x30DC50)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E27F8)); /* movss */
    ecx = eax + 1;
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x5C) = ecx;
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A5D66u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_000A5D66: ;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A5D7Au); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_000A5D7A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x9A7C0FA3u);
    ecx = esi;
    PUSH32(esp, 0x000A5D90u); RECOMP_ABI_CALL(0x0020A2B0u, sub_0020A2B0); /* call 0x0020A2B0 */

loc_000A5D90: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E27F8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC090); /* mulss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x30DC50); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E3F7C); /* mulss */
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A5DD0u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_000A5DD0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC884)); /* fmul dword ptr [0x2dc884] */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E27F8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC090); /* mulss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x30DC50); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E3F7C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A5E19u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_000A5E19: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC884)); /* fmul dword ptr [0x2dc884] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    xmm3 = XMM_SCALAR(MEMF(0x2E7034)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(esp + 0x44);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    ebx = MEM32(esp + 0x40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000A5E80;

    /* nop */

loc_000A5E80: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x2DD414); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E3F84); /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    PUSH32(esp, ecx);
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    ecx = esp + 0x24;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DBED0); /* mulss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x2DC3F0); /* subss */
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x000A5EE3u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_000A5EE3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x80336688u);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x4C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x50); /* mulss */
    PUSH32(esp, ebx);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2DC340); /* mulss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    ecx = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A5F4Eu); RECOMP_ABI_CALL(0x0020D5F0u, sub_0020D5F0); /* call 0x0020D5F0 */

loc_000A5F4E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    PUSH32(esp, 0x80336688u);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x58); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x5C); /* mulss */
    PUSH32(esp, ebp);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2DC340); /* mulss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    ecx = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A5FB6u); RECOMP_ABI_CALL(0x0020D5F0u, sub_0020D5F0); /* call 0x0020D5F0 */

loc_000A5FB6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xA (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A5E80; /* jle: less or equal (signed <=) */

loc_000A5FC0: ;
    eax = MEM32(esp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A5D10; /* jl: less (signed <) */

loc_000A5FCD: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000A5FD0: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A5FE0
 * Original: 0x000A5FE0 - 0x000A63FE (1054 bytes, 229 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5FE0(void)
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

loc_000A5FE0: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x447A0000);
    edi = ecx;
    PUSH32(esp, 0x000A5FF3u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_000A5FF3: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x68)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x64); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A63F6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x64)) */

loc_000A6005: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC3E4)); /* movss */
    PUSH32(esp, ebp);
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC3B8)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x7C) = 0xFFFF00;
    MEM32(esp + 0x80) = 0x66CCFF;
    MEM32(esp + 0x8C) = 0xFFFFFFFFu;
    MEM32(esp + 0x90) = 1;
    MEM32(esp + 0x10) = ecx;
    goto loc_000A6080;

loc_000A6077: ;
    ecx = MEM32(esp + 0x10);
    goto loc_000A6080;

    /* nop */

loc_000A6080: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(edi + 0x68); /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + ecx + 0x74); /* addss */
    edx = MEM32(esp + ecx + 0x7C);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + ecx + 0x84)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0x64); /* mulss */
    ecx = MEM32(esp + ecx + 0x8C);
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x6C) = ecx;

loc_000A60D0: ;
    xmm2 = XMM_SCALAR(MEMF(0x30DC50)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E27F8)); /* movss */
    ecx = eax + 1;
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    MEM32(esp + 0x6C) = ecx;
    PUSH32(esp, 0x000A6126u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_000A6126: ;
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, ecx);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A613Au); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_000A613A: ;
    ecx = MEM32(esp + 0x84);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x9A7C0FA3u);
    ecx = edi;
    PUSH32(esp, 0x000A6156u); RECOMP_ABI_CALL(0x0020A2B0u, sub_0020A2B0); /* call 0x0020A2B0 */

loc_000A6156: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E27F8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x64)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC3F4); /* mulss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x30DC50); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC8AC); /* mulss */
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A6196u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_000A6196: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC884)); /* fmul dword ptr [0x2dc884] */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E27F8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x64)); /* movss */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC3F4); /* mulss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x30DC50); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC8AC); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A61DFu); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_000A61DF: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC884)); /* fmul dword ptr [0x2dc884] */
    xmm3 = XMM_SCALAR(MEMF(0x2E732C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    edx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    ebp = MEM32(esp + 0x74);
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */

loc_000A6250: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x2DD414); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E3F84); /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    PUSH32(esp, ecx);
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = esp + 0x18;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DDC40); /* mulss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x2DBED0); /* subss */
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x000A62B3u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_000A62B3: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A62D8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A62D2: ;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */

loc_000A62D8: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E2440)); /* fmul dword ptr [0x2e2440] */
    PUSH32(esp, 0x000A62EFu); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_000A62EF: ;
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(esp + 0x54);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    esi = eax;
    esi = esi << 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x40); /* mulss */
    PUSH32(esp, ebp);
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DD440); /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    ecx = edi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A6360u); RECOMP_ABI_CALL(0x0020D5F0u, sub_0020D5F0); /* call 0x0020D5F0 */

loc_000A6360: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    edx = MEM32(esp + 0x48);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x58); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x60); /* mulss */
    PUSH32(esp, edx);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2DD440); /* mulss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    ecx = edi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A63C8u); RECOMP_ABI_CALL(0x0020D5F0u, sub_0020D5F0); /* call 0x0020D5F0 */

loc_000A63C8: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A6250; /* jle: less or equal (signed <=) */

loc_000A63D2: ;
    eax = MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A60D0; /* jl: less (signed <) */

loc_000A63DF: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000A6077; /* jl: less (signed <) */

loc_000A63F3: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000A63F6: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A6400
 * Original: 0x000A6400 - 0x000A643C (60 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6400(void)
{

loc_000A6400: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC350)); /* movss */
    MEMF(0x32EDD0) = xmm1.f[0]; /* movss */
    MEMF(0x32EDD4) = xmm0.f[0]; /* movss */
    MEMF(0x32EDD8) = xmm0.f[0]; /* movss */
    MEMF(0x32EE40) = xmm1.f[0]; /* movss */
    MEMF(0x32EE44) = xmm0.f[0]; /* movss */
    MEMF(0x32EE48) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000A6440
 * Original: 0x000A6440 - 0x000A644F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6440(void)
{

loc_000A6440: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(0x323F98) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000A6450
 * Original: 0x000A6450 - 0x000A645F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6450(void)
{

loc_000A6450: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(0x323F94) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000A6460
 * Original: 0x000A6460 - 0x000A646F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6460(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6460: ;
    eax = MEM32(esp + 4);
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x323F90) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6470
 * Original: 0x000A6470 - 0x000A64CF (95 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000A6470: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x2DC098); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000A64CE; /* jnp: not parity */

loc_000A6483: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC08C); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E4514); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x323F8C); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(0x323F8C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A64CE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A64C2: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(0x323F8C) = xmm0.f[0]; /* movss */

loc_000A64CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A64D0
 * Original: 0x000A64D0 - 0x000A6561 (145 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A64D0(void)
{

loc_000A64D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x32FA40;
    PUSH32(esp, 0x000A64ECu); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A64EC: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x330940;
    PUSH32(esp, 0x000A6503u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6503: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x330730;
    PUSH32(esp, 0x000A651Au); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A651A: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x330858;
    PUSH32(esp, 0x000A6531u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6531: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x32F958;
    PUSH32(esp, 0x000A6548u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6548: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6459E8);
    PUSH32(esp, esi);
    ecx = 0x330A98;
    PUSH32(esp, 0x000A655Fu); RECOMP_ABI_CALL(0x001FB290u, sub_001FB290); /* call 0x001FB290 */

loc_000A655F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6570
 * Original: 0x000A6570 - 0x000A65A5 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6570(void)
{

loc_000A6570: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x32FA40;
    PUSH32(esp, 0x000A658Cu); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A658C: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6459E8);
    PUSH32(esp, esi);
    ecx = 0x330BE8;
    PUSH32(esp, 0x000A65A3u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A65A3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A65B0
 * Original: 0x000A65B0 - 0x000A65FC (76 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A65B0(void)
{

loc_000A65B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x32F870;
    PUSH32(esp, 0x000A65CCu); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A65CC: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x32F788;
    PUSH32(esp, 0x000A65E3u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A65E3: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6459E8);
    PUSH32(esp, esi);
    ecx = 0x330A98;
    PUSH32(esp, 0x000A65FAu); RECOMP_ABI_CALL(0x001FB290u, sub_001FB290); /* call 0x001FB290 */

loc_000A65FA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6600
 * Original: 0x000A6600 - 0x000A661C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6600(void)
{

loc_000A6600: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, eax);
    ecx = 0x32F788;
    PUSH32(esp, 0x000A661Bu); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A661B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6620
 * Original: 0x000A6620 - 0x000A6655 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6620(void)
{

loc_000A6620: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6459E8);
    PUSH32(esp, esi);
    ecx = 0x330A98;
    PUSH32(esp, 0x000A663Cu); RECOMP_ABI_CALL(0x001FB290u, sub_001FB290); /* call 0x001FB290 */

loc_000A663C: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x32F788;
    PUSH32(esp, 0x000A6653u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6653: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6660
 * Original: 0x000A6660 - 0x000A671F (191 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6660(void)
{

loc_000A6660: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x32FA40;
    PUSH32(esp, 0x000A667Cu); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A667C: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x330608;
    PUSH32(esp, 0x000A6693u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6693: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x3306F0;
    PUSH32(esp, 0x000A66AAu); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A66AA: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x330818;
    PUSH32(esp, 0x000A66C1u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A66C1: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x330940;
    PUSH32(esp, 0x000A66D8u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A66D8: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x32F958;
    PUSH32(esp, 0x000A66EFu); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A66EF: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6459E8);
    PUSH32(esp, esi);
    ecx = 0x330A98;
    PUSH32(esp, 0x000A6706u); RECOMP_ABI_CALL(0x001FB290u, sub_001FB290); /* call 0x001FB290 */

loc_000A6706: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x330A58;
    PUSH32(esp, 0x000A671Du); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A671D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6720
 * Original: 0x000A6720 - 0x000A676C (76 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6720(void)
{

loc_000A6720: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x32FB28;
    PUSH32(esp, 0x000A673Cu); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A673C: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x330180;
    PUSH32(esp, 0x000A6753u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6753: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x330268;
    PUSH32(esp, 0x000A676Au); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A676A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6770
 * Original: 0x000A6770 - 0x000A678C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6770(void)
{

loc_000A6770: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, eax);
    ecx = 0x330350;
    PUSH32(esp, 0x000A678Bu); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A678B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6790
 * Original: 0x000A6790 - 0x000A67DC (76 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6790(void)
{

loc_000A6790: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x32FC10;
    PUSH32(esp, 0x000A67ACu); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A67AC: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x330098;
    PUSH32(esp, 0x000A67C3u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A67C3: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x330438;
    PUSH32(esp, 0x000A67DAu); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A67DA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A67E0
 * Original: 0x000A67E0 - 0x000A6826 (70 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A67E0(void)
{

loc_000A67E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x32FDE0;
    PUSH32(esp, 0x000A67FDu); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A67FD: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x32FEC8;
    PUSH32(esp, 0x000A6810u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6810: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x32FFB0;
    PUSH32(esp, 0x000A6823u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6823: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6830
 * Original: 0x000A6830 - 0x000A6888 (88 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6830(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6830: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x30F064);
    ecx = MEM32(0x30F068);
    edx = MEM32(0x30F06C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0x3F800000);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, esi);
    ecx = 0x32FCF8;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x000A686Cu); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A686C: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = 0x330520;
    PUSH32(esp, 0x000A6883u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6883: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A6890
 * Original: 0x000A6890 - 0x000A68AC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6890(void)
{

loc_000A6890: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6459E8);
    PUSH32(esp, eax);
    ecx = 0x3311F8;
    PUSH32(esp, 0x000A68ABu); RECOMP_ABI_CALL(0x001FB290u, sub_001FB290); /* call 0x001FB290 */

loc_000A68AB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A68B0
 * Original: 0x000A68B0 - 0x000A68CC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A68B0(void)
{

loc_000A68B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6459E8);
    PUSH32(esp, eax);
    ecx = 0x3312A0;
    PUSH32(esp, 0x000A68CBu); RECOMP_ABI_CALL(0x001FB290u, sub_001FB290); /* call 0x001FB290 */

loc_000A68CB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A68D0
 * Original: 0x000A68D0 - 0x000A6919 (73 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A68D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A68D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6459E8);
    PUSH32(esp, esi);
    ecx = 0x330A98;
    PUSH32(esp, 0x000A68EFu); RECOMP_ABI_CALL(0x001FB290u, sub_001FB290); /* call 0x001FB290 */

loc_000A68EF: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A6905u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_000A6905: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = 0x3313F0;
    PUSH32(esp, 0x000A6914u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6914: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A6920
 * Original: 0x000A6920 - 0x000A693D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6920: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A693C; /* je: equal / zero */

loc_000A6928: ;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + 0x33141C);
    eax = eax + 0x33141C;
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;

loc_000A693C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6940
 * Original: 0x000A6940 - 0x000A6953 (19 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6940(void)
{

loc_000A6940: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x74); /* addss */
    MEMF(ecx + 0x74) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A6960
 * Original: 0x000A6960 - 0x000A6965 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A6960: ;
    g_seh_ebp = ebp; sub_000A6920(); return; /* tail jmp 0x000A6920 */

}

/**
 * sub_000A6970
 * Original: 0x000A6970 - 0x000A69F4 (132 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6970(void)
{

loc_000A6970: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x331594) = xmm0.f[0]; /* movss */
    MEMF(0x331590) = xmm0.f[0]; /* movss */
    MEMF(0x331604) = xmm0.f[0]; /* movss */
    MEMF(0x331600) = xmm0.f[0]; /* movss */
    MEMF(0x331674) = xmm0.f[0]; /* movss */
    MEMF(0x331670) = xmm0.f[0]; /* movss */
    MEMF(0x3316E4) = xmm0.f[0]; /* movss */
    MEMF(0x3316E0) = xmm0.f[0]; /* movss */
    MEMF(0x331754) = xmm0.f[0]; /* movss */
    MEMF(0x331750) = xmm0.f[0]; /* movss */
    MEMF(0x3317C4) = xmm0.f[0]; /* movss */
    MEMF(0x3317C0) = xmm0.f[0]; /* movss */
    MEMF(0x331834) = xmm0.f[0]; /* movss */
    MEMF(0x331830) = xmm0.f[0]; /* movss */
    MEMF(0x3318A4) = xmm0.f[0]; /* movss */
    MEMF(0x3318A0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000A6A00
 * Original: 0x000A6A00 - 0x000A6A69 (105 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000A6A00: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000A6A10;

    /* nop */
    /* nop */

loc_000A6A10: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x331594)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x331590); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A6A5C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x331590)) */

loc_000A6A21: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x331590)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x331594); /* comiss */
    MEMF(esi + 0x331590) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A6A5C; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x331594)) */

loc_000A6A40: ;
    eax = esi + 0x331530;
    PUSH32(esp, eax);
    ecx = 0x3324F0;
    PUSH32(esp, 0x000A6A51u); RECOMP_ABI_CALL(0x0020AF90u, sub_0020AF90); /* call 0x0020AF90 */

loc_000A6A51: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x331594) = xmm0.f[0]; /* movss */

loc_000A6A5C: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x380) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x380 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A6A10; /* jb: below (unsigned <) */

loc_000A6A67: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6A70
 * Original: 0x000A6A70 - 0x000A6A93 (35 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6A70: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC904)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000A6A80: ;
    MEMF(eax + 0x331910) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x700) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x700 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A6A80; /* jb: below (unsigned <) */

loc_000A6A92: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6AA0
 * Original: 0x000A6AA0 - 0x000A6AFA (90 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000A6AA0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000A6AB0;

    /* nop */
    /* nop */

loc_000A6AB0: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC904)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x331910); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A6AED; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esi + 0x331910)) */

loc_000A6AC1: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x331910)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi + 0x331910) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A6AED; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A6ADC: ;
    eax = esi + 0x3318B0;
    PUSH32(esp, eax);
    ecx = 0x3324F0;
    PUSH32(esp, 0x000A6AEDu); RECOMP_ABI_CALL(0x0020AF90u, sub_0020AF90); /* call 0x0020AF90 */

loc_000A6AED: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x700) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x700 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A6AB0; /* jb: below (unsigned <) */

loc_000A6AF8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6B00
 * Original: 0x000A6B00 - 0x000A6B24 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6B00: ;
    eax = ecx + 0x7C;
    edx = 0x20;
    goto loc_000A6B10;

    /* nop */

loc_000A6B10: ;
    MEM32(eax) = 0;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A6B10; /* jne: not equal / not zero */

loc_000A6B1C: ;
    MEM32(ecx + 0x60) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6B30
 * Original: 0x000A6B30 - 0x000A6B42 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6B30(void)
{

loc_000A6B30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A6B38u); RECOMP_ABI_CALL(0x00209680u, sub_00209680); /* call 0x00209680 */

loc_000A6B38: ;
    MEM32(esi) = 0x2E7330;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6B50
 * Original: 0x000A6B50 - 0x000A6B6E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6B50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A6B58u); RECOMP_ABI_CALL(0x000EFAF0u, sub_000EFAF0); /* call 0x000EFAF0 */

loc_000A6B58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A6B68; /* je: equal / zero */

loc_000A6B5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A6B65u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000A6B65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A6B68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A6B70
 * Original: 0x000A6B70 - 0x000A6B82 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6B70(void)
{

loc_000A6B70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A6B78u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_000A6B78: ;
    MEM32(esi) = 0x2E7344;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6B90
 * Original: 0x000A6B90 - 0x000A6C1E (142 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6B90: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(0x323E01));
    if (CMP_EQ(_fa, _fb)) goto loc_000A6C00; /* je: equal / zero */

loc_000A6BA0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A6BBC; /* jne: not equal / not zero */

loc_000A6BA4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x32EF00);
    ecx = 0x3324F0;
    MEM8(0x323E01) = 1;
    PUSH32(esp, 0x000A6BBCu); RECOMP_ABI_CALL(0x0020AF60u, sub_0020AF60); /* call 0x0020AF60 */

loc_000A6BBC: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(0x32EF78) = xmm0.f[0]; /* movss */
    MEM32(esp + 4) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEM32(esp + 8) = eax;
    MEMF(0x32EF7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(0x32EF80) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A6C00: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6C1A; /* je: equal / zero */

loc_000A6C04: ;
    PUSH32(esp, 0x32EF00);
    ecx = 0x3324F0;
    MEM8(0x323E01) = 0;
    PUSH32(esp, 0x000A6C1Au); RECOMP_ABI_CALL(0x0020AF90u, sub_0020AF90); /* call 0x0020AF90 */

loc_000A6C1A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A6C20
 * Original: 0x000A6C20 - 0x000A6CAE (142 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6C20: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(0x323E00));
    if (CMP_EQ(_fa, _fb)) goto loc_000A6C90; /* je: equal / zero */

loc_000A6C30: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A6C4C; /* jne: not equal / not zero */

loc_000A6C34: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x32F040);
    ecx = 0x3324F0;
    MEM8(0x323E00) = 1;
    PUSH32(esp, 0x000A6C4Cu); RECOMP_ABI_CALL(0x0020AF60u, sub_0020AF60); /* call 0x0020AF60 */

loc_000A6C4C: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(0x32F0BC) = xmm0.f[0]; /* movss */
    MEM32(esp + 4) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEM32(esp + 8) = eax;
    MEMF(0x32F0C0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(0x32F0C4) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A6C90: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6CAA; /* je: equal / zero */

loc_000A6C94: ;
    PUSH32(esp, 0x32F040);
    ecx = 0x3324F0;
    MEM8(0x323E00) = 0;
    PUSH32(esp, 0x000A6CAAu); RECOMP_ABI_CALL(0x0020AF90u, sub_0020AF90); /* call 0x0020AF90 */

loc_000A6CAA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A6CB0
 * Original: 0x000A6CB0 - 0x000A6CCF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6CB0(void)
{

loc_000A6CB0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x332548;
    PUSH32(esp, 0x000A6CCEu); RECOMP_ABI_CALL(0x001FB290u, sub_001FB290); /* call 0x001FB290 */

loc_000A6CCE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6CD0
 * Original: 0x000A6CD0 - 0x000A6CEF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6CD0(void)
{

loc_000A6CD0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x3325F0;
    PUSH32(esp, 0x000A6CEEu); RECOMP_ABI_CALL(0x001FB290u, sub_001FB290); /* call 0x001FB290 */

loc_000A6CEE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6CF0
 * Original: 0x000A6CF0 - 0x000A6D4C (92 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6CF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6CF0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(0x2DD418)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(esp + 0x10);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    PUSH32(esp, 0x3E4CCCCD);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = 0x332740;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x000A6D48u); RECOMP_ABI_CALL(0x001FB290u, sub_001FB290); /* call 0x001FB290 */

loc_000A6D48: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A6D50
 * Original: 0x000A6D50 - 0x000A6D6C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6D50(void)
{

loc_000A6D50: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x3327E8;
    PUSH32(esp, 0x000A6D6Bu); RECOMP_ABI_CALL(0x001FB290u, sub_001FB290); /* call 0x001FB290 */

loc_000A6D6B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6D70
 * Original: 0x000A6D70 - 0x000A6D8C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6D70(void)
{

loc_000A6D70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, eax);
    ecx = 0x333188;
    PUSH32(esp, 0x000A6D8Bu); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6D8B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6D90
 * Original: 0x000A6D90 - 0x000A6DAC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6D90(void)
{

loc_000A6D90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, eax);
    ecx = 0x333270;
    PUSH32(esp, 0x000A6DABu); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6DAB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6DB0
 * Original: 0x000A6DB0 - 0x000A6DCF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6DB0(void)
{

loc_000A6DB0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x3332B0;
    PUSH32(esp, 0x000A6DCEu); RECOMP_ABI_CALL(0x001FB290u, sub_001FB290); /* call 0x001FB290 */

loc_000A6DCE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6DD0
 * Original: 0x000A6DD0 - 0x000A6DEC (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6DD0(void)
{

loc_000A6DD0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x333358;
    PUSH32(esp, 0x000A6DEBu); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6DEB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6DF0
 * Original: 0x000A6DF0 - 0x000A6E2C (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6DF0: ;
    SET_LO8(eax, MEM8(0x323E02));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6E2B; /* je: equal / zero */

loc_000A6DF9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x333788;
    PUSH32(esp, 0x000A6E16u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6E16: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x3337C8;
    PUSH32(esp, 0x000A6E29u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6E29: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000A6E2B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6E30
 * Original: 0x000A6E30 - 0x000A6E64 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6E30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6E30: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A6E42u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_000A6E42: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x33B3D0;
    PUSH32(esp, 0x000A6E60u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6E60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A6E70
 * Original: 0x000A6E70 - 0x000A6F56 (230 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6E70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6E70: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm3 = XMM_SCALAR(MEMF(0x2DC3F4)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    PUSH32(esp, 0x3F800000);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, 0);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    PUSH32(esp, edi);
    eax = esp + 0x20;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    PUSH32(esp, eax);
    ecx = 0x33B4F8;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A6EF4u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6EF4: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    PUSH32(esp, 0);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    PUSH32(esp, edi);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = 0x33B5E0;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A6F3Du); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6F3D: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = 0x33B6C8;
    PUSH32(esp, 0x000A6F50u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6F50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A6F60
 * Original: 0x000A6F60 - 0x000A6F77 (23 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6F60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6F60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 3);
    esi = ecx;
    PUSH32(esp, 0x000A6F6Cu); RECOMP_ABI_CALL(0x0020FA20u, sub_0020FA20); /* call 0x0020FA20 */

loc_000A6F6C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x8C) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6F80
 * Original: 0x000A6F80 - 0x000A6F9C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6F80(void)
{

loc_000A6F80: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x33BC60;
    PUSH32(esp, 0x000A6F9Bu); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6F9B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6FA0
 * Original: 0x000A6FA0 - 0x000A6FEC (76 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6FA0(void)
{

loc_000A6FA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x33B858;
    PUSH32(esp, 0x000A6FBCu); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6FBC: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x33B940;
    PUSH32(esp, 0x000A6FD3u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6FD3: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30F064);
    PUSH32(esp, esi);
    ecx = 0x33BA28;
    PUSH32(esp, 0x000A6FEAu); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A6FEA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6FF0
 * Original: 0x000A6FF0 - 0x000A706E (126 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6FF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6FF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ZX8(LO8(eax));
    ecx = esi;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    ecx = ZX8(LO8(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(esp + 0x10);
    edx = esi;
    edi = ecx;
    edi = edi >> 0x17;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 0x1FE;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = edx;
    ebx = ebx & 0xFF0000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    eax = eax & 0xFFFFFF80u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & 0xFF0000FFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ecx;
    edi = edi >> 7;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 0x1FE;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    eax = eax & 0xFFFFFF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx >> 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, esi);
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A7070
 * Original: 0x000A7070 - 0x000A70D4 (100 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7070: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A7083u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_000A7083: ;
    esi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = 0x33BF30;
    PUSH32(esp, 0x000A70A1u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A70A1: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = 0x33C018;
    PUSH32(esp, 0x000A70B8u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A70B8: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = 0x33BE48;
    PUSH32(esp, 0x000A70CFu); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A70CF: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A7091
 * Original: 0x000A7091 - 0x000A70D4 (67 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7091(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7091: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = 0x33BF30;
    PUSH32(esp, 0x000A70A1u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A70A1: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = 0x33C018;
    PUSH32(esp, 0x000A70B8u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A70B8: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = 0x33BE48;
    PUSH32(esp, 0x000A70CFu); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A70CF: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A70E0
 * Original: 0x000A70E0 - 0x000A7113 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A70E0(void)
{

loc_000A70E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x33C340;
    PUSH32(esp, 0x000A70FDu); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A70FD: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x33C428;
    PUSH32(esp, 0x000A7110u); RECOMP_ABI_CALL(0x001FB520u, sub_001FB520); /* call 0x001FB520 */

loc_000A7110: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7120
 * Original: 0x000A7120 - 0x000A713F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7120: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E7368;
    if (TEST_Z(_fa, _fb)) goto loc_000A7139; /* je: equal / zero */

loc_000A7130: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A7136u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000A7136: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A7139: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A7140
 * Original: 0x000A7140 - 0x000A7147 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7140(void)
{

loc_000A7140: ;
    MEM32(ecx) = 0x2E7368;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7150
 * Original: 0x000A7150 - 0x000A7157 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7150(void)
{

loc_000A7150: ;
    MEM32(ecx) = 0x2E7374;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7160
 * Original: 0x000A7160 - 0x000A7167 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7160(void)
{

loc_000A7160: ;
    MEM32(ecx) = 0x2E7358;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7170
 * Original: 0x000A7170 - 0x000A718F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7170: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E7374;
    if (TEST_Z(_fa, _fb)) goto loc_000A7189; /* je: equal / zero */

loc_000A7180: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A7186u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000A7186: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A7189: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A7190
 * Original: 0x000A7190 - 0x000A71AF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7190: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E7358;
    if (TEST_Z(_fa, _fb)) goto loc_000A71A9; /* je: equal / zero */

loc_000A71A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A71A6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000A71A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A71A9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A71B0
 * Original: 0x000A71B0 - 0x000A71BE (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A71B0(void)
{

loc_000A71B0: ;
    MEM32(ecx + 0x6C) = 0x2E15D8;
    MEM32(ecx) = 0x2E6470;
    esp += 4; return; /* ret */

}
