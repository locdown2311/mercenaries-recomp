/**
 * Mercenaries - Recompiled code chunk 7
 * Functions: 250 (0x00058870 - 0x00062E00)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00058870
 * Original: 0x00058870 - 0x000588CC (92 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00058870: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0005887Du); RECOMP_ABI_CALL(0x0004FCE0u, sub_0004FCE0); /* call 0x0004FCE0 */

loc_0005887D: ;
    ecx = 0x323608;
    PUSH32(esp, 0x00058887u); RECOMP_ABI_CALL(0x000A3AB0u, sub_000A3AB0); /* call 0x000A3AB0 */

loc_00058887: ;
    ecx = 0x323608;
    MEM32(esi + 0x868) = eax;
    PUSH32(esp, 0x00058897u); RECOMP_ABI_CALL(0x000A3AC0u, sub_000A3AC0); /* call 0x000A3AC0 */

loc_00058897: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esi + 0x86C) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x000588A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000588A1u); } /* indirect call */
    }

loc_000588A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000588C8; /* je: equal / zero */

loc_000588AB: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x000588B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000588AFu); } /* indirect call */
    }

loc_000588B5: ;
    edx = MEM32(eax);
    POP32(esp, esi);
    MEM32(esp + 4) = 0xCACB8B5Fu;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x154)); return; /* indirect tail jmp */

loc_000588C8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000588D0
 * Original: 0x000588D0 - 0x00058907 (55 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000588D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000588D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000588D8u); RECOMP_ABI_CALL(0x00052A20u, sub_00052A20); /* call 0x00052A20 */

loc_000588D8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x000588E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000588DCu); } /* indirect call */
    }

loc_000588E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000588FF; /* je: equal / zero */

loc_000588E6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x000588F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000588EAu); } /* indirect call */
    }

loc_000588F0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2C155E27);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x000588FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000588F9u); } /* indirect call */
    }

loc_000588FF: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00057A30(); return; /* tail jmp 0x00057A30 */

}

/**
 * sub_00058910
 * Original: 0x00058910 - 0x000589F5 (229 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058910: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D6628FB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D6628FB (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00058992; /* je: equal / zero */

loc_00058921: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90F6B599u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x90F6B599u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058967; /* je: equal / zero */

loc_00058928: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE999458Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE999458Du (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005893C; /* je: equal / zero */

loc_0005892F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00058935u); RECOMP_ABI_CALL(0x000403B0u, sub_000403B0); /* call 0x000403B0 */

loc_00058935: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0005893C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38C); PUSH32(esp, 0x00058944u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005893Eu); } /* indirect call */
    }

loc_00058944: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005895D; /* je: equal / zero */

loc_00058948: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38C); PUSH32(esp, 0x00058952u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005894Cu); } /* indirect call */
    }

loc_00058952: ;
    eax = MEM32(eax + 0x184);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0005895D: ;
    POP32(esp, edi);
    eax = 0x6607DD43;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00058967: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x390); PUSH32(esp, 0x0005896Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058969u); } /* indirect call */
    }

loc_0005896F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058988; /* je: equal / zero */

loc_00058973: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x390); PUSH32(esp, 0x0005897Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058977u); } /* indirect call */
    }

loc_0005897D: ;
    eax = MEM32(eax + 0x184);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00058988: ;
    POP32(esp, edi);
    eax = 0xF63B642Au;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00058992: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38C); PUSH32(esp, 0x0005899Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058994u); } /* indirect call */
    }

loc_0005899A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058935; /* je: equal / zero */

loc_0005899E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38C); PUSH32(esp, 0x000589A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000589A2u); } /* indirect call */
    }

loc_000589A8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1AC); PUSH32(esp, 0x000589B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000589ACu); } /* indirect call */
    }

loc_000589B2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058935; /* je: equal / zero */

loc_000589BA: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38C); PUSH32(esp, 0x000589C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000589BEu); } /* indirect call */
    }

loc_000589C4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x000589CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000589C8u); } /* indirect call */
    }

loc_000589CE: ;
    ecx = eax;
    edx = MEM32(ecx + 0x1E0);
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ecx + 0x234)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x234), eax (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, edi);
    eax = ZX8(LO8(ecx));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00058A00
 * Original: 0x00058A00 - 0x00058C12 (530 bytes, 154 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058A00(void)
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

loc_00058A00: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x44658C4F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x44658C4F (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if (CMP_A(_fa, _fb)) goto loc_00058B21; /* ja: above (unsigned >) */

loc_00058A1C: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00058AC8; /* je: equal / zero */

loc_00058A22: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2CCF3D5F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2CCF3D5F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058A8B; /* je: equal / zero */

loc_00058A29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x35F72F3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x35F72F3B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00058B2F; /* jne: not equal / not zero */

loc_00058A34: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38C); PUSH32(esp, 0x00058A3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058A36u); } /* indirect call */
    }

loc_00058A3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058C09; /* je: equal / zero */

loc_00058A44: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38C); PUSH32(esp, 0x00058A4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058A48u); } /* indirect call */
    }

loc_00058A4E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1AC); PUSH32(esp, 0x00058A58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058A52u); } /* indirect call */
    }

loc_00058A58: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058C09; /* je: equal / zero */

loc_00058A60: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38C); PUSH32(esp, 0x00058A6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058A64u); } /* indirect call */
    }

loc_00058A6A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x00058A74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058A6Eu); } /* indirect call */
    }

loc_00058A74: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x230); /* cvtsi2ss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00058A8B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x390); PUSH32(esp, 0x00058A95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058A8Fu); } /* indirect call */
    }

loc_00058A95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058C09; /* je: equal / zero */

loc_00058A9D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x390); PUSH32(esp, 0x00058AA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058AA1u); } /* indirect call */
    }

loc_00058AA7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1AC); PUSH32(esp, 0x00058AB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058AABu); } /* indirect call */
    }

loc_00058AB1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058C09; /* je: equal / zero */

loc_00058AB9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x390); PUSH32(esp, 0x00058AC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058ABDu); } /* indirect call */
    }

loc_00058AC3: ;
    goto loc_00058B7C;

loc_00058AC8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38C); PUSH32(esp, 0x00058AD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058ACCu); } /* indirect call */
    }

loc_00058AD2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058C09; /* je: equal / zero */

loc_00058ADA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38C); PUSH32(esp, 0x00058AE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058ADEu); } /* indirect call */
    }

loc_00058AE4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1AC); PUSH32(esp, 0x00058AEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058AE8u); } /* indirect call */
    }

loc_00058AEE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058C09; /* je: equal / zero */

loc_00058AF6: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38C); PUSH32(esp, 0x00058B00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058AFAu); } /* indirect call */
    }

loc_00058B00: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x00058B0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058B04u); } /* indirect call */
    }

loc_00058B0A: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x234); /* cvtsi2ss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00058B21: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6EF643AB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6EF643AB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058B9D; /* je: equal / zero */

loc_00058B28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC2A3E4BBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC2A3E4BBu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058B44; /* je: equal / zero */

loc_00058B2F: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00058B37u); RECOMP_ABI_CALL(0x00040270u, sub_00040270); /* call 0x00040270 */

loc_00058B37: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00058B44: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38C); PUSH32(esp, 0x00058B4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058B48u); } /* indirect call */
    }

loc_00058B4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058C09; /* je: equal / zero */

loc_00058B56: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38C); PUSH32(esp, 0x00058B60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058B5Au); } /* indirect call */
    }

loc_00058B60: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1AC); PUSH32(esp, 0x00058B6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058B64u); } /* indirect call */
    }

loc_00058B6A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058C09; /* je: equal / zero */

loc_00058B72: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38C); PUSH32(esp, 0x00058B7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058B76u); } /* indirect call */
    }

loc_00058B7C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x00058B86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058B80u); } /* indirect call */
    }

loc_00058B86: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x1B8); /* cvtsi2ss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00058B9D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x390); PUSH32(esp, 0x00058BA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058BA1u); } /* indirect call */
    }

loc_00058BA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058C09; /* je: equal / zero */

loc_00058BAB: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x390); PUSH32(esp, 0x00058BB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058BAFu); } /* indirect call */
    }

loc_00058BB5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1AC); PUSH32(esp, 0x00058BBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058BB9u); } /* indirect call */
    }

loc_00058BBF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058C09; /* je: equal / zero */

loc_00058BC3: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x390); PUSH32(esp, 0x00058BCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058BC8u); } /* indirect call */
    }

loc_00058BCE: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x390); PUSH32(esp, 0x00058BDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058BD4u); } /* indirect call */
    }

loc_00058BDA: ;
    esi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B8); PUSH32(esp, 0x00058BE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058BE0u); } /* indirect call */
    }

loc_00058BE6: ;
    edx = MEM32(esi);
    edi = MEM32(eax + 0x230);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x00058BF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058BF0u); } /* indirect call */
    }

loc_00058BF6: ;
    eax = MEM32(eax + 0x234);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    POP32(esp, edi);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_00058C09: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00058C20
 * Original: 0x00058C20 - 0x00058C82 (98 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00058C20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00058C2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058C25u); } /* indirect call */
    }

loc_00058C2B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00058C32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058C2Fu); } /* indirect call */
    }

loc_00058C32: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x390); PUSH32(esp, 0x00058C3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058C36u); } /* indirect call */
    }

loc_00058C3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058C73; /* je: equal / zero */

loc_00058C40: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x390); PUSH32(esp, 0x00058C4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058C44u); } /* indirect call */
    }

loc_00058C4A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00058C54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058C4Eu); } /* indirect call */
    }

loc_00058C54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058C73; /* je: equal / zero */

loc_00058C58: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x390); PUSH32(esp, 0x00058C62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058C5Cu); } /* indirect call */
    }

loc_00058C62: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00058C6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058C66u); } /* indirect call */
    }

loc_00058C6C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00058C73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058C70u); } /* indirect call */
    }

loc_00058C73: ;
    ecx = esi;
    PUSH32(esp, 0x00058C7Au); RECOMP_ABI_CALL(0x00057B30u, sub_00057B30); /* call 0x00057B30 */

loc_00058C7A: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00057AB0(); return; /* tail jmp 0x00057AB0 */

}

/**
 * sub_00058C90
 * Original: 0x00058C90 - 0x00058CF2 (98 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00058C90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00058C9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058C95u); } /* indirect call */
    }

loc_00058C9B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00058CA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058C9Fu); } /* indirect call */
    }

loc_00058CA2: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x390); PUSH32(esp, 0x00058CACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058CA6u); } /* indirect call */
    }

loc_00058CAC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058CE3; /* je: equal / zero */

loc_00058CB0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x390); PUSH32(esp, 0x00058CBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058CB4u); } /* indirect call */
    }

loc_00058CBA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00058CC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058CBEu); } /* indirect call */
    }

loc_00058CC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058CE3; /* je: equal / zero */

loc_00058CC8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x390); PUSH32(esp, 0x00058CD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058CCCu); } /* indirect call */
    }

loc_00058CD2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00058CDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058CD6u); } /* indirect call */
    }

loc_00058CDC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00058CE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058CE0u); } /* indirect call */
    }

loc_00058CE3: ;
    ecx = esi;
    PUSH32(esp, 0x00058CEAu); RECOMP_ABI_CALL(0x00057B70u, sub_00057B70); /* call 0x00057B70 */

loc_00058CEA: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00057AF0(); return; /* tail jmp 0x00057AF0 */

}

/**
 * sub_00058D00
 * Original: 0x00058D00 - 0x00058EC6 (454 bytes, 114 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00058D00: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xAD0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00058EA7; /* je: equal / zero */

loc_00058D15: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xACC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    MEM8(esi + 0xAD0) = 0;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058D43; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00058D2D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xACC); /* addss */
    MEMF(esi + 0xACC) = xmm0.f[0]; /* movss */

loc_00058D43: ;
    ecx = esi;
    PUSH32(esp, 0x00058D4Au); RECOMP_ABI_CALL(0x000115D0u, sub_000115D0); /* call 0x000115D0 */

loc_00058D4A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058D63; /* je: equal / zero */

loc_00058D4E: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xACC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x321884); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058EB2; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x321884)) */

loc_00058D63: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    eax = MEM32(esi);
    ecx = esi;
    MEMF(esi + 0xACC) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3BC); PUSH32(esp, 0x00058D7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058D77u); } /* indirect call */
    }

loc_00058D7D: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00058D93; /* jne: not equal / not zero */

loc_00058D83: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00058D8Cu); RECOMP_ABI_CALL(0x0004E970u, sub_0004E970); /* call 0x0004E970 */

loc_00058D8C: ;
    eax = 1;
    goto loc_00058D98;

loc_00058D93: ;
    eax = 2;

loc_00058D98: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2FC); PUSH32(esp, 0x00058DA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058D9Fu); } /* indirect call */
    }

loc_00058DA5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B8); PUSH32(esp, 0x00058DAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058DA9u); } /* indirect call */
    }

loc_00058DAF: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058DCD; /* je: equal / zero */

loc_00058DB5: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00058DBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058DB9u); } /* indirect call */
    }

loc_00058DBB: ;
    edx = MEM32(0x30DA48);
    ecx = MEM32(0x30DA44);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058DCF; /* je: equal / zero */

loc_00058DCD: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00058DCF: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0xD74)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058E40; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00058DE0: ;
    eax = edi + 0xD68;
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 8) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x10) = ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */

loc_00058E1C: ;
    ecx = MEM32(esp + 0x24);
    xmm0 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(edi + 0xD74) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00058E38u); RECOMP_ABI_CALL(0x000512F0u, sub_000512F0); /* call 0x000512F0 */

loc_00058E38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00058E40: ;
    PUSH32(esp, 0x43C80000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3EAAAAAB);
    PUSH32(esp, 0x3F000000);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = 0x4140E8;
    PUSH32(esp, 0x00058E64u); RECOMP_ABI_CALL(0x00097F00u, sub_00097F00); /* call 0x00097F00 */

loc_00058E64: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 8) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(edi + 0xD68) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x10) = eax;
    MEMF(edi + 0xD6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(edi + 0xD70) = xmm0.f[0]; /* movss */
    goto loc_00058E1C;

loc_00058EA7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xACC) = xmm0.f[0]; /* movss */

loc_00058EB2: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00058EBEu); RECOMP_ABI_CALL(0x000512F0u, sub_000512F0); /* call 0x000512F0 */

loc_00058EBE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00058ED0
 * Original: 0x00058ED0 - 0x00058FA4 (212 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058ED0(void)
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

loc_00058ED0: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xED4); /* comiss */
    PUSH32(esp, edi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00058EEF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0xED4)) */

loc_00058EE6: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_00058EEF: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B8); PUSH32(esp, 0x00058EF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058EF3u); } /* indirect call */
    }

loc_00058EF9: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058F8B; /* je: equal / zero */

loc_00058F03: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00058F09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058F07u); } /* indirect call */
    }

loc_00058F09: ;
    edx = MEM32(0x30DA48);
    ecx = MEM32(0x30DA44);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00058F8B; /* jne: not equal / not zero */

loc_00058F1B: ;
    SET_LO8(eax, MEM8(esi + 0xE74));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00058F8B; /* jne: not equal / not zero */

loc_00058F25: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x17C); PUSH32(esp, 0x00058F2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058F29u); } /* indirect call */
    }

loc_00058F2F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058F41; /* je: equal / zero */

loc_00058F33: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2A8); PUSH32(esp, 0x00058F3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058F37u); } /* indirect call */
    }

loc_00058F3D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00058F8B; /* je: equal / zero */

loc_00058F41: ;
    eax = MEM32(esi + 0x98);
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x00058F55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058F4Fu); } /* indirect call */
    }

loc_00058F55: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC09C)); /* fmul dword ptr [0x2dc09c] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 8) - fp_top()); /* fsubr dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00058F8B; /* jbe: below or equal (unsigned <=) */

loc_00058F69: ;
    eax = MEM32(esi + 0x98);
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x00058F7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058F77u); } /* indirect call */
    }

loc_00058F7D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC09C)); /* fmul dword ptr [0x2dc09c] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x10) - fp_top()); /* fsubr dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_00058F8B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00058F97u); RECOMP_ABI_CALL(0x0004CC10u, sub_0004CC10); /* call 0x0004CC10 */

loc_00058F97: ;
    POP32(esp, edi);
    MEM8(esi + 0xE74) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00058FB0
 * Original: 0x00058FB0 - 0x00058FC2 (18 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058FB0(void)
{

loc_00058FB0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3BC); PUSH32(esp, 0x00058FB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058FB2u); } /* indirect call */
    }

loc_00058FB8: ;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 0x64) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00058FD0
 * Original: 0x00058FD0 - 0x00059018 (72 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00058FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00058FD0: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(esi + 0x50));
    if (CMP_EQ(_fa, _fb)) goto loc_00058FFB; /* je: equal / zero */

loc_00058FDE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00059014; /* je: equal / zero */

loc_00058FE2: ;
    eax = MEM32(esi + 0x3C);
    ecx = esi + 0x3C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00058FEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058FE8u); } /* indirect call */
    }

loc_00058FEB: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x428); PUSH32(esp, 0x00058FF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00058FF1u); } /* indirect call */
    }

loc_00058FF7: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00058FFB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00059014; /* jne: not equal / not zero */

loc_00058FFF: ;
    eax = MEM32(esi + 0x3C);
    ecx = esi + 0x3C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00059008u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059005u); } /* indirect call */
    }

loc_00059008: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x428); PUSH32(esp, 0x00059014u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005900Eu); } /* indirect call */
    }

loc_00059014: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00059020
 * Original: 0x00059020 - 0x00059041 (33 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059020: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    edx = ecx;
    PUSH32(esp, 0x0005902Cu); RECOMP_ABI_CALL(0x00057890u, sub_00057890); /* call 0x00057890 */

loc_0005902C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005903E; /* jl: less (signed <) */

loc_00059030: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    MEM32(eax + edx + 0xAE0) = ecx;

loc_0005903E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00059050
 * Original: 0x00059050 - 0x000591A9 (345 bytes, 101 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00059050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059050: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1EB7FB3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x1EB7FB3A (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0005918A; /* je: equal / zero */

loc_0005906D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FC276E7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FC276E7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059183; /* je: equal / zero */

loc_00059079: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x85EF0770u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x85EF0770u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00059198; /* jne: not equal / not zero */

loc_00059085: ;
    ecx = MEM32(edi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059198; /* je: equal / zero */

loc_00059093: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF29BCB57u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000590A2u); RECOMP_ABI_CALL(0x00061FF0u, sub_00061FF0); /* call 0x00061FF0 */

loc_000590A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059198; /* je: equal / zero */

loc_000590AA: ;
    eax = MEM32(edi + 0x768);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059198; /* je: equal / zero */

loc_000590B8: ;
    ecx = MEM32(eax);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059198; /* je: equal / zero */

loc_000590C4: ;
    edx = MEM32(esi);
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000590D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000590CDu); } /* indirect call */
    }

loc_000590D0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(esp + 0x70);
    edx = MEM32(esp + 0x74);
    eax = MEM32(esp + 0x78);
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC094); /* addss */
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0);
    ecx = esp + 0x20;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00059121u); RECOMP_ABI_CALL(0x000A67E0u, sub_000A67E0); /* call 0x000A67E0 */

loc_00059121: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x181E3FC5);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005914Cu); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0005914C: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C0); PUSH32(esp, 0x0005915Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059155u); } /* indirect call */
    }

loc_0005915B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1E0); PUSH32(esp, 0x00059165u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005915Fu); } /* indirect call */
    }

loc_00059165: ;
    ecx = MEM32(edi + 0x768);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00059172u); RECOMP_ABI_CALL(0x001676E0u, sub_001676E0); /* call 0x001676E0 */

loc_00059172: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005917Au); RECOMP_ABI_CALL(0x0004DBA0u, sub_0004DBA0); /* call 0x0004DBA0 */

loc_0005917A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00059183: ;
    PUSH32(esp, 0xF29BCB57u);
    goto loc_0005918C;

loc_0005918A: ;
    PUSH32(esp, 0);

loc_0005918C: ;
    ecx = edi;
    PUSH32(esp, 0x6E560B5B);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00059198u); RECOMP_ABI_CALL(0x00059020u, sub_00059020); /* call 0x00059020 */

loc_00059198: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000591A0u); RECOMP_ABI_CALL(0x0004DBA0u, sub_0004DBA0); /* call 0x0004DBA0 */

loc_000591A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000591B0
 * Original: 0x000591B0 - 0x0005939B (491 bytes, 153 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000591B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000591B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x7A0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000591DB; /* je: equal / zero */

loc_000591C1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x000591C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000591C3u); } /* indirect call */
    }

loc_000591C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000591DB; /* je: equal / zero */

loc_000591CD: ;
    ecx = MEM32(esi + 0x7A0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x000591DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000591D5u); } /* indirect call */
    }

loc_000591DB: ;
    _fa = (uint32_t)(MEM8(esi + 0xAD1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xAD1), LO8(ebx) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00059207; /* jle: less or equal (signed <=) */

loc_000591E3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x308); PUSH32(esp, 0x000591EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000591E7u); } /* indirect call */
    }

loc_000591ED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059207; /* je: equal / zero */

loc_000591F1: ;
    _fa = (uint32_t)(MEM8(esi + 0x6BC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x6BC), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059201; /* je: equal / zero */

loc_000591F9: ;
    MEM8(esi + 0x6BC) = LO8(ebx);
    goto loc_00059207;

loc_00059201: ;
    MEM8(esi + 0xAD1) = MEM8(esi + 0xAD1) - 1;
    _fa = (uint32_t)(MEM8(esi + 0xAD1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */

loc_00059207: ;
    SET_LO8(ecx, MEM8(esi + 0x6BC));
    edx = MEM32(esp + 0x10);
    MEM8(esp + 0xB) = LO8(ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0005921Du); RECOMP_ABI_CALL(0x0004DDB0u, sub_0004DDB0); /* call 0x0004DDB0 */

loc_0005921D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x360); PUSH32(esp, 0x00059227u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059221u); } /* indirect call */
    }

loc_00059227: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00059269; /* jne: not equal / not zero */

loc_0005922C: ;
    _fa = (uint32_t)(MEM8(esi + 0x7CC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x7CC), LO8(ebx) (8-bit) */
    SET_LO8(eax, MEM8(esp + 0xB));
    if (CMP_NE(_fa, _fb)) goto loc_0005923E; /* jne: not equal / not zero */

loc_00059238: ;
    SET_LO8(eax, MEM8(esi + 0x6BD));

loc_0005923E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00059352; /* jne: not equal / not zero */

loc_00059246: ;
    _fa = (uint32_t)(MEM8(esi + 0x325)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x325), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005925A; /* je: equal / zero */

loc_0005924E: ;
    _fa = (uint32_t)(MEM8(esi + 0x2E2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2E2), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00059352; /* jne: not equal / not zero */

loc_0005925A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x358); PUSH32(esp, 0x00059264u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005925Eu); } /* indirect call */
    }

loc_00059264: ;
    goto loc_00059352;

loc_00059269: ;
    _fa = (uint32_t)(MEM8(esi + 0x6BD)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x6BD), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005927B; /* jne: not equal / not zero */

loc_00059271: ;
    _fa = (uint32_t)(MEM8(esp + 0xB)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xB), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059352; /* je: equal / zero */

loc_0005927B: ;
    _fa = (uint32_t)(MEM8(esi + 0xA88)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xA88), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00059352; /* jne: not equal / not zero */

loc_00059287: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00059290;

    /* nop */

loc_00059290: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000592A3; /* je: equal / zero */

loc_00059296: ;
    PUSH32(esp, 0x0005929Bu); RECOMP_ABI_CALL(0x0004CEE0u, sub_0004CEE0); /* call 0x0004CEE0 */

loc_0005929B: ;
    edi = eax;
    SET_LO8(eax, MEM8(esp + 0x13));
    goto loc_000592B0;

loc_000592A3: ;
    PUSH32(esp, 0x000592A8u); RECOMP_ABI_CALL(0x0004CF20u, sub_0004CF20); /* call 0x0004CF20 */

loc_000592A8: ;
    edi = eax;
    SET_LO8(eax, MEM8(esi + 0x6BD));

loc_000592B0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059346; /* je: equal / zero */

loc_000592B8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059346; /* je: equal / zero */

loc_000592C0: ;
    eax = MEM32(edi + 0x1A0);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00059302; /* je: equal / zero */

loc_000592CB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00059346; /* jne: not equal / not zero */

loc_000592CE: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C4); PUSH32(esp, 0x000592D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000592D3u); } /* indirect call */
    }

loc_000592D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059346; /* je: equal / zero */

loc_000592DD: ;
    PUSH32(esp, 0x000592E2u); RECOMP_ABI_CALL(0x00017860u, sub_00017860); /* call 0x00017860 */

loc_000592E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00059346; /* jge: greater or equal (signed >=) */

loc_000592E7: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2A4); PUSH32(esp, 0x000592F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000592EBu); } /* indirect call */
    }

loc_000592F1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059346; /* je: equal / zero */

loc_000592F5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x438); PUSH32(esp, 0x00059300u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000592FAu); } /* indirect call */
    }

loc_00059300: ;
    goto loc_00059346;

loc_00059302: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1C4); PUSH32(esp, 0x0005930Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059307u); } /* indirect call */
    }

loc_0005930D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005931D; /* jne: not equal / not zero */

loc_00059311: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x204); PUSH32(esp, 0x0005931Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059315u); } /* indirect call */
    }

loc_0005931B: ;
    goto loc_00059346;

loc_0005931D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x360); PUSH32(esp, 0x00059327u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059321u); } /* indirect call */
    }

loc_00059327: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00059346; /* jne: not equal / not zero */

loc_0005932B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x354); PUSH32(esp, 0x00059336u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059330u); } /* indirect call */
    }

loc_00059336: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x7CC) = LO8(ecx);
    ebp = 2;

loc_00059346: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00059290; /* jl: less (signed <) */

loc_00059350: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00059352: ;
    _fa = (uint32_t)(MEM8(esp + 0xB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xB), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005938F; /* jne: not equal / not zero */

loc_00059359: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38C); PUSH32(esp, 0x00059363u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005935Du); } /* indirect call */
    }

loc_00059363: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005938F; /* je: equal / zero */

loc_00059367: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x00059371u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005936Bu); } /* indirect call */
    }

loc_00059371: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005938F; /* je: equal / zero */

loc_00059375: ;
    _fa = (uint32_t)(MEM32(eax + 0x234)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x234), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005938F; /* jne: not equal / not zero */

loc_0005937D: ;
    _fa = (uint32_t)(MEM32(eax + 0x230)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x230), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0005938F; /* jle: less or equal (signed <=) */

loc_00059385: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x368); PUSH32(esp, 0x0005938Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059389u); } /* indirect call */
    }

loc_0005938F: ;
    MEM8(esi + 0x6BD) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000593A0
 * Original: 0x000593A0 - 0x000593DE (62 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000593A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000593A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x7A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_000593D1; /* je: equal / zero */

loc_000593B2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000593D1; /* je: equal / zero */

loc_000593B6: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B8); PUSH32(esp, 0x000593C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000593BAu); } /* indirect call */
    }

loc_000593C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000593D1; /* je: equal / zero */

loc_000593C4: ;
    PUSH32(esp, 1);
    ecx = eax + 0x24C;
    PUSH32(esp, 0x000593D1u); RECOMP_ABI_CALL(0x00150D90u, sub_00150D90); /* call 0x00150D90 */

loc_000593D1: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000593D9u); RECOMP_ABI_CALL(0x0004FC90u, sub_0004FC90); /* call 0x0004FC90 */

loc_000593D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000593E0
 * Original: 0x000593E0 - 0x00059456 (118 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000593E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000593E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000593F5u); RECOMP_ABI_CALL(0x00030B60u, sub_00030B60); /* call 0x00030B60 */

loc_000593F5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1DC); PUSH32(esp, 0x000593FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000593F9u); } /* indirect call */
    }

loc_000593FF: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1D0); PUSH32(esp, 0x00059409u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059403u); } /* indirect call */
    }

loc_00059409: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00059413u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005940Du); } /* indirect call */
    }

loc_00059413: ;
    MEM32(eax + 0x14) = MEM32(eax + 0x14) | 2;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(edi + 0x7B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0005942F; /* jge: greater or equal (signed >=) */

loc_00059422: ;
    MEM32(edi + eax * 4 + 0x7A4) = esi;
    MEM32(edi + 0x7B8) = MEM32(edi + 0x7B8) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x7B8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0005942F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF29BCB57u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xF29BCB57u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00059450; /* jne: not equal / not zero */

loc_00059437: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0005943Fu); RECOMP_ABI_CALL(0x000577E0u, sub_000577E0); /* call 0x000577E0 */

loc_0005943F: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(edi + 0xA8C) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3D8); PUSH32(esp, 0x00059450u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005944Au); } /* indirect call */
    }

loc_00059450: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00059460
 * Original: 0x00059460 - 0x0005958A (298 bytes, 76 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059460(void)
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

loc_00059460: ;
    eax = MEM32(0x41410C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00059473; /* jne: not equal / not zero */

loc_0005946C: ;
    eax = 0x6438E0;
    goto loc_00059476;

loc_00059473: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00059476: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x28); /* subss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x24); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x20); /* subss */
    ecx = esp + 0x14;
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000594A9u); RECOMP_ABI_CALL(0x001F88A0u, sub_001F88A0); /* call 0x001F88A0 */

loc_000594A9: ;
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x321910)); /* fsub dword ptr [0x321910] */
    ecx = esp;
    edx = esp + 4;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000594C6u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_000594C6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC3A0); /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x2DC08C); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00059513u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_00059513: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0005952Bu); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_0005952B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    eax = MEM32(esp + 0x30);
    xmm5 = xmm0; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEM32(ecx + 4) = edx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 8) = edx;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0005951B
 * Original: 0x0005951B - 0x0005958A (111 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005951B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005951B: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0005952Bu); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_0005952B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    eax = MEM32(esp + 0x30);
    xmm5 = xmm0; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEM32(ecx + 4) = edx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 8) = edx;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00059590
 * Original: 0x00059590 - 0x000595E9 (89 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00059590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059590: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    edx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000595A5u); RECOMP_ABI_CALL(0x00057890u, sub_00057890); /* call 0x00057890 */

loc_000595A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000595D6; /* jl: less (signed <) */

loc_000595A9: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    SET_LO8(ecx, MEM8(edx + 0x811));
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax + edx + 0xAD4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000595C6u); RECOMP_ABI_CALL(0x00147C20u, sub_00147C20); /* call 0x00147C20 */

loc_000595C6: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000595CFu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000595CF: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000595D6: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000595E2u); RECOMP_ABI_CALL(0x00052460u, sub_00052460); /* call 0x00052460 */

loc_000595E2: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000595F0
 * Original: 0x000595F0 - 0x0005960B (27 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000595F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000595F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059606; /* je: equal / zero */

loc_000595F8: ;
    SET_LO8(eax, MEM8(eax + 0x190));
    SET_LO8(eax, LO8(eax) >> 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

loc_00059606: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00059610
 * Original: 0x00059610 - 0x00059717 (263 bytes, 90 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00059610: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0005961Cu); RECOMP_ABI_CALL(0x00057860u, sub_00057860); /* call 0x00057860 */

loc_0005961C: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 0x7B8);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_00059697; /* jle: less or equal (signed <=) */

loc_00059631: ;
    edi = esi + 0x7A4;

loc_00059637: ;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00059641u); RECOMP_ABI_CALL(0x000595F0u, sub_000595F0); /* call 0x000595F0 */

loc_00059641: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059689; /* je: equal / zero */

loc_00059645: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059689; /* je: equal / zero */

loc_0005964B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059689; /* je: equal / zero */

loc_00059651: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059689; /* je: equal / zero */

loc_00059657: ;
    PUSH32(esp, 0);
    ecx = edx;
    PUSH32(esp, 0x00059660u); RECOMP_ABI_CALL(0x00030B60u, sub_00030B60); /* call 0x00030B60 */

loc_00059660: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1CC); PUSH32(esp, 0x0005966Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059664u); } /* indirect call */
    }

loc_0005966A: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1F4); PUSH32(esp, 0x00059674u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005966Eu); } /* indirect call */
    }

loc_00059674: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(MEM8(ecx + 0x191)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x191), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00059683; /* jne: not equal / not zero */

loc_0005967E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00059683u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059680u); } /* indirect call */
    }

loc_00059683: ;
    MEM32(edi) = 0;

loc_00059689: ;
    eax = MEM32(esi + 0x7B8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00059637; /* jl: less (signed <) */

loc_00059697: ;
    eax = MEM32(esi + 0x7B8);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0005970F; /* jle: less or equal (signed <=) */

loc_000596A3: ;
    edi = esi + 0x7A4;
    edx = ebx;
    ebx = edi;
    MEM32(esp + 0x18) = ebx;

loc_000596B1: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000596F9; /* jne: not equal / not zero */

loc_000596B6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x7B8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x7B8) (32-bit) */
    ecx = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_000596D9; /* jge: greater or equal (signed >=) */

loc_000596C0: ;
    eax = ebx;

loc_000596C2: ;
    ebx = MEM32(eax + 4);
    MEM32(eax) = ebx;
    ebx = MEM32(esi + 0x7B8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000596C2; /* jl: less (signed <) */

loc_000596D5: ;
    ebx = MEM32(esp + 0x18);

loc_000596D9: ;
    eax = MEM32(esi + 0x7B8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x7B8) = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + eax * 4 + 0x7A4) = 0;

loc_000596F9: ;
    eax = MEM32(esi + 0x7B8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_000596B1; /* jl: less (signed <) */

loc_0005970F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00059720
 * Original: 0x00059720 - 0x00059808 (232 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059720: ;
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = ecx;
    PUSH32(esp, 0x00059733u); RECOMP_ABI_CALL(0x00059610u, sub_00059610); /* call 0x00059610 */

loc_00059733: ;
    eax = MEM32(edi + 0x7A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00059744; /* jne: not equal / not zero */

loc_0005973D: ;
    ebx = 0xF29BCB57u;
    goto loc_00059774;

loc_00059744: ;
    PUSH32(esp, 0xDD626827u);
    ecx = edi;
    PUSH32(esp, 0x00059750u); RECOMP_ABI_CALL(0x00057830u, sub_00057830); /* call 0x00057830 */

loc_00059750: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005975B; /* jne: not equal / not zero */

loc_00059754: ;
    ebx = 0xDD626827u;
    goto loc_00059774;

loc_0005975B: ;
    PUSH32(esp, 0xFEAF73D8u);
    ecx = edi;
    PUSH32(esp, 0x00059767u); RECOMP_ABI_CALL(0x00057830u, sub_00057830); /* call 0x00057830 */

loc_00059767: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000597FD; /* jne: not equal / not zero */

loc_0005976F: ;
    ebx = 0xFEAF73D8u;

loc_00059774: ;
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0005977Eu); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_0005977E: ;
    PUSH32(esp, 0x2DC8F4);
    PUSH32(esp, 0x2DD3E8);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00059791u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_00059791: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0005979Fu); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0005979F: ;
    edx = MEM32(esp + 0x81C);
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6438E0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = 0x4031B0;
    PUSH32(esp, 0x000597BFu); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_000597BF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000597E2; /* je: equal / zero */

loc_000597C5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000597CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000597C9u); } /* indirect call */
    }

loc_000597CC: ;
    edx = MEM32(0x30C24C);
    ecx = MEM32(0x30C248);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000597E2; /* jne: not equal / not zero */

loc_000597DE: ;
    eax = esi;
    goto loc_000597E4;

loc_000597E2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000597E4: ;
    SET_LO8(ecx, MEM8(eax + 0x190));
    SET_LO8(ecx, LO8(ecx) | 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    MEM8(eax + 0x190) = LO8(ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000597FCu); RECOMP_ABI_CALL(0x000593E0u, sub_000593E0); /* call 0x000593E0 */

loc_000597FC: ;
    POP32(esp, esi);

loc_000597FD: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00059810
 * Original: 0x00059810 - 0x000598C7 (183 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059810: ;
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00059823u); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_00059823: ;
    PUSH32(esp, 0x2DC8F4);
    PUSH32(esp, 0x2DD3E8);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00059836u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_00059836: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00059844u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_00059844: ;
    edx = MEM32(esp + 0x818);
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6438E0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = 0x4031B0;
    PUSH32(esp, 0x00059864u); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_00059864: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059883; /* je: equal / zero */

loc_0005986A: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00059871u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005986Eu); } /* indirect call */
    }

loc_00059871: ;
    edx = MEM32(0x30C24C);
    ecx = MEM32(0x30C248);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059885; /* je: equal / zero */

loc_00059883: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00059885: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1DC); PUSH32(esp, 0x0005988Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059889u); } /* indirect call */
    }

loc_0005988F: ;
    eax = MEM32(esi + 0x7C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000598A7; /* jge: greater or equal (signed >=) */

loc_0005989A: ;
    MEM32(esi + eax * 4 + 0x7C0) = edi;
    MEM32(esi + 0x7C8) = MEM32(esi + 0x7C8) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x7C8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000598A7: ;
    eax = MEM32(esi + 0x7BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000598BC; /* jne: not equal / not zero */

loc_000598B1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3DC); PUSH32(esp, 0x000598BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000598B6u); } /* indirect call */
    }

loc_000598BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000598D0
 * Original: 0x000598D0 - 0x00059C48 (888 bytes, 280 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000598D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000598D0: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    eax = MEM32(ebp + 0x7B8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_00059A5B; /* jle: less or equal (signed <=) */

loc_000598F1: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x000598F9u); RECOMP_ABI_CALL(0x0004CF60u, sub_0004CF60); /* call 0x0004CF60 */

loc_000598F9: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005991C; /* je: equal / zero */

loc_000598FF: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00059906u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059903u); } /* indirect call */
    }

loc_00059906: ;
    edx = MEM32(0x30C25C);
    ecx = MEM32(0x30C258);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005991C; /* jne: not equal / not zero */

loc_00059918: ;
    ebx = edi;
    goto loc_0005991E;

loc_0005991C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0005991E: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x00059926u); RECOMP_ABI_CALL(0x000595F0u, sub_000595F0); /* call 0x000595F0 */

loc_00059926: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00059A4E; /* jne: not equal / not zero */

loc_0005992E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059A4E; /* je: equal / zero */

loc_00059936: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(ecx + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00059942u); RECOMP_ABI_CALL(0x001EC1D0u, sub_001EC1D0); /* call 0x001EC1D0 */

loc_00059942: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00059A4E; /* je: equal / zero */

loc_00059951: ;
    MEM8(esp + 0x1C) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xF;
    edi = esp + 0x1D;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, esi);
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    edx = esp + 0x20;
    PUSH32(esp, 0x2E3244);
    PUSH32(esp, edx);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    PUSH32(esp, 0x00059976u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00059976: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00059980u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00059980: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    edi = eax;
    PUSH32(esp, 0x0005998Cu); RECOMP_ABI_CALL(0x001ED370u, sub_001ED370); /* call 0x001ED370 */

loc_0005998C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x414150;
    PUSH32(esp, 0x0005999Bu); RECOMP_ABI_CALL(0x00121E50u, sub_00121E50); /* call 0x00121E50 */

loc_0005999B: ;
    PUSH32(esp, esi);
    edx = esp + 0x20;
    PUSH32(esp, 0x2E3228);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000599ABu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000599AB: ;
    edi = MEM32(ebx + 0x230);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000599BBu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000599BB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x000599CAu); RECOMP_ABI_CALL(0x00121E00u, sub_00121E00); /* call 0x00121E00 */

loc_000599CA: ;
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    PUSH32(esp, 0x2E320C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000599DAu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000599DA: ;
    edi = MEM32(ebx + 0x234);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000599EAu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000599EA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x000599F9u); RECOMP_ABI_CALL(0x00121E00u, sub_00121E00); /* call 0x00121E00 */

loc_000599F9: ;
    PUSH32(esp, esi);
    eax = esp + 0x20;
    PUSH32(esp, 0x2E31F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00059A09u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00059A09: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00059A13u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00059A13: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    edi = eax;
    PUSH32(esp, 0x00059A1Fu); RECOMP_ABI_CALL(0x00030B50u, sub_00030B50); /* call 0x00030B50 */

loc_00059A1F: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x414150;
    PUSH32(esp, 0x00059A2Bu); RECOMP_ABI_CALL(0x00121E50u, sub_00121E50); /* call 0x00121E50 */

loc_00059A2B: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38C); PUSH32(esp, 0x00059A36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059A30u); } /* indirect call */
    }

loc_00059A36: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00059A4A; /* jne: not equal / not zero */

loc_00059A3A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFCCBD9C3u);
    ecx = 0x414150;
    PUSH32(esp, 0x00059A4Au); RECOMP_ABI_CALL(0x00121E00u, sub_00121E00); /* call 0x00121E00 */

loc_00059A4A: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00059A4E: ;
    eax = MEM32(esp + 0x18);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000598F1; /* jl: less (signed <) */

loc_00059A5B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x372C1990);
    ecx = 0x414150;
    PUSH32(esp, 0x00059A6Fu); RECOMP_ABI_CALL(0x00121E00u, sub_00121E00); /* call 0x00121E00 */

loc_00059A6F: ;
    eax = MEM32(ebp + 0x7C8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_00059BBF; /* jle: less or equal (signed <=) */

loc_00059A87: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00059A8Fu); RECOMP_ABI_CALL(0x0004CF80u, sub_0004CF80); /* call 0x0004CF80 */

loc_00059A8F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059AB2; /* je: equal / zero */

loc_00059A95: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00059A9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059A99u); } /* indirect call */
    }

loc_00059A9C: ;
    edx = MEM32(0x30C25C);
    ecx = MEM32(0x30C258);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00059AB2; /* jne: not equal / not zero */

loc_00059AAE: ;
    ebx = edi;
    goto loc_00059AB4;

loc_00059AB2: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00059AB4: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x00059ABCu); RECOMP_ABI_CALL(0x000595F0u, sub_000595F0); /* call 0x000595F0 */

loc_00059ABC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00059BB2; /* jne: not equal / not zero */

loc_00059AC4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059BB2; /* je: equal / zero */

loc_00059ACC: ;
    eax = MEM32(edi + 8);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00059AD8u); RECOMP_ABI_CALL(0x001EC1D0u, sub_001EC1D0); /* call 0x001EC1D0 */

loc_00059AD8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00059BB2; /* je: equal / zero */

loc_00059AE7: ;
    MEM8(esp + 0x1C) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xF;
    edi = esp + 0x1D;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, esi);
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    ecx = esp + 0x20;
    PUSH32(esp, 0x2E31CC);
    PUSH32(esp, ecx);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    PUSH32(esp, 0x00059B0Cu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00059B0C: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00059B16u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00059B16: ;
    edi = eax;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00059B22u); RECOMP_ABI_CALL(0x001ED370u, sub_001ED370); /* call 0x001ED370 */

loc_00059B22: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = 0x414150;
    PUSH32(esp, 0x00059B31u); RECOMP_ABI_CALL(0x00121E50u, sub_00121E50); /* call 0x00121E50 */

loc_00059B31: ;
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    PUSH32(esp, 0x2E31B0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00059B41u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00059B41: ;
    edi = MEM32(ebx + 0x230);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00059B51u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00059B51: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x00059B60u); RECOMP_ABI_CALL(0x00121E00u, sub_00121E00); /* call 0x00121E00 */

loc_00059B60: ;
    PUSH32(esp, esi);
    eax = esp + 0x20;
    PUSH32(esp, 0x2E3194);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00059B70u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_00059B70: ;
    edi = MEM32(ebx + 0x234);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00059B80u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00059B80: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x00059B8Fu); RECOMP_ABI_CALL(0x00121E00u, sub_00121E00); /* call 0x00121E00 */

loc_00059B8F: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x390); PUSH32(esp, 0x00059B9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059B94u); } /* indirect call */
    }

loc_00059B9A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00059BAE; /* jne: not equal / not zero */

loc_00059B9E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xB89507CBu);
    ecx = 0x414150;
    PUSH32(esp, 0x00059BAEu); RECOMP_ABI_CALL(0x00121E00u, sub_00121E00); /* call 0x00121E00 */

loc_00059BAE: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00059BB2: ;
    eax = MEM32(esp + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00059A87; /* jl: less (signed <) */

loc_00059BBF: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0xBB9B8BCCu);
    ecx = 0x414150;
    PUSH32(esp, 0x00059BD3u); RECOMP_ABI_CALL(0x00121E00u, sub_00121E00); /* call 0x00121E00 */

loc_00059BD3: ;
    eax = MEM32(ebp + 0x970);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00059C40; /* jle: less or equal (signed <=) */

loc_00059BDF: ;
    edi = ebp + 0x8F0;

loc_00059BE5: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x00059BEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059BE9u); } /* indirect call */
    }

loc_00059BEF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059BFE; /* je: equal / zero */

loc_00059BF5: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A0), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059C14; /* je: equal / zero */

loc_00059BFE: ;
    eax = MEM32(ebp + 0x970);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00059BE5; /* jl: less (signed <) */

loc_00059C0C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00059C14: ;
    eax = MEM32(esi + 0x230);
    PUSH32(esp, eax);
    PUSH32(esp, 0xE01EEBA1u);
    ecx = 0x414150;
    PUSH32(esp, 0x00059C2Au); RECOMP_ABI_CALL(0x00121E00u, sub_00121E00); /* call 0x00121E00 */

loc_00059C2A: ;
    ecx = MEM32(esi + 0x234);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA62186EFu);
    ecx = 0x414150;
    PUSH32(esp, 0x00059C40u); RECOMP_ABI_CALL(0x00121E00u, sub_00121E00); /* call 0x00121E00 */

loc_00059C40: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00059C50
 * Original: 0x00059C50 - 0x00059C5C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059C50: ;
    eax = MEM32(ecx + 0x79C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00059C60
 * Original: 0x00059C60 - 0x00059C68 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00059C60: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x330)); return; /* indirect tail jmp */

}

/**
 * sub_00059C70
 * Original: 0x00059C70 - 0x00059C8B (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059C70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x328); PUSH32(esp, 0x00059C7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059C75u); } /* indirect call */
    }

loc_00059C7B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059C87; /* je: equal / zero */

loc_00059C7F: ;
    eax = MEM32(esi + 0x844);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00059C87: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00059C90
 * Original: 0x00059C90 - 0x00059CC6 (54 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059C90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059CA2; /* je: equal / zero */

loc_00059C9D: ;
    PUSH32(esp, 0x00059CA2u); RECOMP_ABI_CALL(0x00057A30u, sub_00057A30); /* call 0x00057A30 */

loc_00059CA2: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 2);
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00059CB9u); RECOMP_ABI_CALL(0x0012F280u, sub_0012F280); /* call 0x0012F280 */

loc_00059CB9: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA80) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00059CD0
 * Original: 0x00059CD0 - 0x00059CE9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00059CD0: ;
    PUSH32(esp, 0x6E560B5B);
    PUSH32(esp, 0x00059CDAu); RECOMP_ABI_CALL(0x00057A60u, sub_00057A60); /* call 0x00057A60 */

loc_00059CDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059CE8; /* je: equal / zero */

loc_00059CDE: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x1D0)); return; /* indirect tail jmp */

loc_00059CE8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00059CF0
 * Original: 0x00059CF0 - 0x00059D09 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00059CF0: ;
    PUSH32(esp, 0x6E560B5B);
    PUSH32(esp, 0x00059CFAu); RECOMP_ABI_CALL(0x00057A60u, sub_00057A60); /* call 0x00057A60 */

loc_00059CFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059D08; /* je: equal / zero */

loc_00059CFE: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x1CC)); return; /* indirect tail jmp */

loc_00059D08: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00059D10
 * Original: 0x00059D10 - 0x00059E72 (354 bytes, 98 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059D10: ;
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x814);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00059DD7; /* je: equal / zero */

loc_00059D2C: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00059D35u); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_00059D35: ;
    PUSH32(esp, 0x2DC8F4);
    PUSH32(esp, 0x2DD3E8);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00059D48u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_00059D48: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00059D56u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_00059D56: ;
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6438E0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = 0x4031B0;
    PUSH32(esp, 0x00059D6Du); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_00059D6D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059D8C; /* je: equal / zero */

loc_00059D73: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00059D7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059D77u); } /* indirect call */
    }

loc_00059D7A: ;
    edx = MEM32(0x30C280);
    ecx = MEM32(0x30C27C);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059D8E; /* je: equal / zero */

loc_00059D8C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00059D8E: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1DC); PUSH32(esp, 0x00059D98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059D92u); } /* indirect call */
    }

loc_00059D98: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1D0); PUSH32(esp, 0x00059DA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059D9Cu); } /* indirect call */
    }

loc_00059DA2: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00059DACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059DA6u); } /* indirect call */
    }

loc_00059DAC: ;
    ebx = MEM32(eax + 0x14);
    ecx = MEM32(esp + 0x820);
    PUSH32(esp, ecx);
    ebx = ebx | 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = edi;
    MEM32(eax + 0x14) = ebx;
    PUSH32(esp, 0x00059DC4u); RECOMP_ABI_CALL(0x00030B60u, sub_00030B60); /* call 0x00030B60 */

loc_00059DC4: ;
    edx = MEM32(esi + 0xAB4);
    MEM32(esi + edx * 4 + 0xA9C) = edi;
    MEM32(esi + 0xAB4) = MEM32(esi + 0xAB4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xAB4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00059DD7: ;
    ecx = MEM32(esi + 0xE34);
    eax = MEM32(esp + 0x824);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ecx + esi + 0xAD4;
    PUSH32(esp, 0x00059DF6u); RECOMP_ABI_CALL(0x001476A0u, sub_001476A0); /* call 0x001476A0 */

loc_00059DF6: ;
    eax = MEM32(esp + 0x828);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059E17; /* je: equal / zero */

loc_00059E01: ;
    edx = MEM32(esi + 0xE34);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6C);
    PUSH32(esp, eax);
    ecx = edx + esi + 0xAD4;
    PUSH32(esp, 0x00059E17u); RECOMP_ABI_CALL(0x00147670u, sub_00147670); /* call 0x00147670 */

loc_00059E17: ;
    eax = MEM32(esp + 0x82C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059E38; /* je: equal / zero */

loc_00059E22: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xE34);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    ecx = eax + esi + 0xAD4;
    PUSH32(esp, 0x00059E38u); RECOMP_ABI_CALL(0x00147670u, sub_00147670); /* call 0x00147670 */

loc_00059E38: ;
    eax = MEM32(esp + 0x830);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059E59; /* je: equal / zero */

loc_00059E43: ;
    ecx = MEM32(esi + 0xE34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    PUSH32(esp, eax);
    ecx = ecx + esi + 0xAD4;
    PUSH32(esp, 0x00059E59u); RECOMP_ABI_CALL(0x00147670u, sub_00147670); /* call 0x00147670 */

loc_00059E59: ;
    eax = MEM32(esi + 0xE34);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xE34) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00059E80
 * Original: 0x00059E80 - 0x00059F99 (281 bytes, 85 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059E80: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x00059E91u); RECOMP_ABI_CALL(0x0004D050u, sub_0004D050); /* call 0x0004D050 */

loc_00059E91: ;
    SET_LO8(eax, MEM8(esi + 0x794));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00059F11; /* jne: not equal / not zero */

loc_00059E9B: ;
    _fa = (uint32_t)(MEM32(esi + 0x78C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x78C), 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059EEE; /* je: equal / zero */

loc_00059EA4: ;
    eax = MEM32(esi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00059EB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059EADu); } /* indirect call */
    }

loc_00059EB0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DE270); /* addss */
    PUSH32(esp, 0);
    edx = esi + 0xC0;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00059EEBu); RECOMP_ABI_CALL(0x000A6DF0u, sub_000A6DF0); /* call 0x000A6DF0 */

loc_00059EEB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00059EEE: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00059EF7u); RECOMP_ABI_CALL(0x0004CB90u, sub_0004CB90); /* call 0x0004CB90 */

loc_00059EF7: ;
    ecx = MEM32(esi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059F11; /* je: equal / zero */

loc_00059F01: ;
    edx = MEM32(esi + 0x788);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00059F11u); RECOMP_ABI_CALL(0x00061E50u, sub_00061E50); /* call 0x00061E50 */

loc_00059F11: ;
    eax = MEM32(esi + 0x76C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059F30; /* je: equal / zero */

loc_00059F1B: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00059F23u); RECOMP_ABI_CALL(0x0012BAA0u, sub_0012BAA0); /* call 0x0012BAA0 */

loc_00059F23: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x76C) = 0;

loc_00059F30: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3BC); PUSH32(esp, 0x00059F42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059F3Cu); } /* indirect call */
    }

loc_00059F42: ;
    ecx = eax;
    PUSH32(esp, 0x00059F49u); RECOMP_ABI_CALL(0x0013C520u, sub_0013C520); /* call 0x0013C520 */

loc_00059F49: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00059F53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059F4Du); } /* indirect call */
    }

loc_00059F53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059F6C; /* je: equal / zero */

loc_00059F57: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x00059F61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059F5Bu); } /* indirect call */
    }

loc_00059F61: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00059F68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059F65u); } /* indirect call */
    }

loc_00059F68: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00059F91; /* jne: not equal / not zero */

loc_00059F6C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3BC); PUSH32(esp, 0x00059F76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059F70u); } /* indirect call */
    }

loc_00059F76: ;
    SET_LO8(ecx, MEM8(eax + 0xA5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059F91; /* je: equal / zero */

loc_00059F80: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3BC); PUSH32(esp, 0x00059F8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059F84u); } /* indirect call */
    }

loc_00059F8A: ;
    ecx = eax;
    PUSH32(esp, 0x00059F91u); RECOMP_ABI_CALL(0x0013CBB0u, sub_0013CBB0); /* call 0x0013CBB0 */

loc_00059F91: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00059FA0
 * Original: 0x00059FA0 - 0x0005A044 (164 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00059FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00059FA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x00059FAEu); RECOMP_ABI_CALL(0x0004D090u, sub_0004D090); /* call 0x0004D090 */

loc_00059FAE: ;
    ecx = MEM32(esi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059FC8; /* je: equal / zero */

loc_00059FB8: ;
    eax = MEM32(esi + 0x788);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00059FC8u); RECOMP_ABI_CALL(0x00061E50u, sub_00061E50); /* call 0x00061E50 */

loc_00059FC8: ;
    ecx = MEM32(esi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00059FEA; /* je: equal / zero */

loc_00059FD2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00059FDBu); RECOMP_ABI_CALL(0x00061200u, sub_00061200); /* call 0x00061200 */

loc_00059FDB: ;
    ecx = MEM32(esi + 0x6B0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00059FEAu); RECOMP_ABI_CALL(0x00060F70u, sub_00060F70); /* call 0x00060F70 */

loc_00059FEA: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DFE78)); /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0005A001u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00059FFBu); } /* indirect call */
    }

loc_0005A001: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A01A; /* je: equal / zero */

loc_0005A005: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0005A00Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A009u); } /* indirect call */
    }

loc_0005A00F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0005A016u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A013u); } /* indirect call */
    }

loc_0005A016: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005A03F; /* jne: not equal / not zero */

loc_0005A01A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3BC); PUSH32(esp, 0x0005A024u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A01Eu); } /* indirect call */
    }

loc_0005A024: ;
    SET_LO8(ecx, MEM8(eax + 0xA5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A03F; /* je: equal / zero */

loc_0005A02E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3BC); PUSH32(esp, 0x0005A038u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A032u); } /* indirect call */
    }

loc_0005A038: ;
    ecx = eax;
    PUSH32(esp, 0x0005A03Fu); RECOMP_ABI_CALL(0x0013CBB0u, sub_0013CBB0); /* call 0x0013CBB0 */

loc_0005A03F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005A050
 * Original: 0x0005A050 - 0x0005A099 (73 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005A050: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2AC); PUSH32(esp, 0x0005A064u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A05Eu); } /* indirect call */
    }

loc_0005A064: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0005A06Du); RECOMP_ABI_CALL(0x0004CB90u, sub_0004CB90); /* call 0x0004CB90 */

loc_0005A06D: ;
    ecx = MEM32(esi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A085; /* je: equal / zero */

loc_0005A077: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7B9C2896);
    PUSH32(esp, 0x0005A085u); RECOMP_ABI_CALL(0x00061E50u, sub_00061E50); /* call 0x00061E50 */

loc_0005A085: ;
    MEM32(edi + 4) = 1;
    MEM8(edi + 8) = 1;
    MEM8(edi + 9) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005A0A0
 * Original: 0x0005A0A0 - 0x0005A208 (360 bytes, 101 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A0A0(void)
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

loc_0005A0A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0005A202; /* ja: above (unsigned >) */

loc_0005A0AF: ;
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(eax * 4 + 0x5A208); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0005A0B7u) goto loc_0005A0B7;
    if (_jt == 0x0005A0F8u) goto loc_0005A0F8;
    if (_jt == 0x0005A150u) goto loc_0005A150;
    if (_jt == 0x0005A1E0u) goto loc_0005A1E0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0005A0B7: ;
    edi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(edi + 0xA88));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005A201; /* jne: not equal / not zero */

loc_0005A0C9: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0005A0D2u); RECOMP_ABI_CALL(0x0004CB90u, sub_0004CB90); /* call 0x0004CB90 */

loc_0005A0D2: ;
    ecx = MEM32(edi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A0EA; /* je: equal / zero */

loc_0005A0DC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7B9C2896);
    PUSH32(esp, 0x0005A0EAu); RECOMP_ABI_CALL(0x00061E50u, sub_00061E50); /* call 0x00061E50 */

loc_0005A0EA: ;
    POP32(esp, edi);
    MEM32(esi + 4) = 1;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0005A0F8: ;
    edi = MEM32(esp + 0xC);
    ecx = MEM32(edi + 0x6B0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0005A109u); RECOMP_ABI_CALL(0x000612C0u, sub_000612C0); /* call 0x000612C0 */

loc_0005A109: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A201; /* je: equal / zero */

loc_0005A111: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0005A119u); RECOMP_ABI_CALL(0x00057E10u, sub_00057E10); /* call 0x00057E10 */

loc_0005A119: ;
    MEM8(esi + 9) = 1;
    ecx = MEM32(edi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A135; /* je: equal / zero */

loc_0005A127: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7AE75A27);
    PUSH32(esp, 0x0005A135u); RECOMP_ABI_CALL(0x00061E50u, sub_00061E50); /* call 0x00061E50 */

loc_0005A135: ;
    xmm0 = XMM_SCALAR(MEMF(0x30D878)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esi + 4) = 2;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0005A150: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005A201; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0005A16C: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0005A179u); RECOMP_ABI_CALL(0x0004CB90u, sub_0004CB90); /* call 0x0004CB90 */

loc_0005A179: ;
    ecx = MEM32(edi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A191; /* je: equal / zero */

loc_0005A183: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF37B975Au);
    PUSH32(esp, 0x0005A191u); RECOMP_ABI_CALL(0x00061E50u, sub_00061E50); /* call 0x00061E50 */

loc_0005A191: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    MEM32(esi + 4) = 3;
    eax = MEM32(0x2E6D34);
    xmm1 = XMM_SCALAR(MEMF(edi + 0x108)); /* movss */
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x104)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0005A1D6u); RECOMP_ABI_CALL(0x00097270u, sub_00097270); /* call 0x00097270 */

loc_0005A1D6: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0005A1E0: ;
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x6B0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0005A1F1u); RECOMP_ABI_CALL(0x000612C0u, sub_000612C0); /* call 0x000612C0 */

loc_0005A1F1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A201; /* je: equal / zero */

loc_0005A1F5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x334); PUSH32(esp, 0x0005A201u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A1FBu); } /* indirect call */
    }

loc_0005A201: ;
    POP32(esp, edi);

loc_0005A202: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0005A220
 * Original: 0x0005A220 - 0x0005A4A2 (642 bytes, 175 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005A220: ;
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x970)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x970), 0x20 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0005A492; /* jge: greater or equal (signed >=) */

loc_0005A239: ;
    PUSH32(esp, 0x0005A23Eu); RECOMP_ABI_CALL(0x00178960u, sub_00178960); /* call 0x00178960 */

loc_0005A23E: ;
    SET_LO8(edx, MEM8(esp + 0x824));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4249D707) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4249D707 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) & LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esp + 0x824) = LO8(edx);
    PUSH32(esp, 0x0005A25Bu); RECOMP_ABI_CALL(0x00178950u, sub_00178950); /* call 0x00178950 */

loc_0005A25B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC2CBD863u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC2CBD863u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A27E; /* je: equal / zero */

loc_0005A262: ;
    PUSH32(esp, 0x0005A267u); RECOMP_ABI_CALL(0x00178950u, sub_00178950); /* call 0x00178950 */

loc_0005A267: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8DA3891Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8DA3891Fu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A27E; /* je: equal / zero */

loc_0005A26E: ;
    PUSH32(esp, 0x0005A273u); RECOMP_ABI_CALL(0x00178950u, sub_00178950); /* call 0x00178950 */

loc_0005A273: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC92C594Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC92C594Cu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A27E; /* je: equal / zero */

loc_0005A27A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0005A283;

loc_0005A27E: ;
    eax = 1;

loc_0005A283: ;
    SET_LO8(ecx, MEM8(esp + 0x824));
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(esi + 0x970);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x824) = LO8(ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0005A2EA; /* jle: less or equal (signed <=) */

loc_0005A2A1: ;
    edi = esi + 0x8F0;

loc_0005A2A7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005A2EA; /* jne: not equal / not zero */

loc_0005A2AB: ;
    ecx = MEM32(esp + 0x820);
    _fa = (uint32_t)(MEM32(edi + -128)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + -128), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005A2DC; /* jne: not equal / not zero */

loc_0005A2B7: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    SET_LO8(ebx, 1);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x0005A2C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A2BDu); } /* indirect call */
    }

loc_0005A2C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A2DC; /* je: equal / zero */

loc_0005A2C7: ;
    edx = MEM32(eax + 0x1EC);
    ecx = MEM32(esp + 0x828);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x1EC) = edx;

loc_0005A2DC: ;
    eax = MEM32(esi + 0x970);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005A2A7; /* jl: less (signed <) */

loc_0005A2EA: ;
    eax = MEM32(esi + 0xA7C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0005A347; /* jle: less or equal (signed <=) */

loc_0005A2F6: ;
    edi = esi + 0x9FC;
    /* nop */

loc_0005A300: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005A492; /* jne: not equal / not zero */

loc_0005A308: ;
    edx = MEM32(esp + 0x820);
    _fa = (uint32_t)(MEM32(edi + -128)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + -128), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005A339; /* jne: not equal / not zero */

loc_0005A314: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    SET_LO8(ebx, 1);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B8); PUSH32(esp, 0x0005A320u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A31Au); } /* indirect call */
    }

loc_0005A320: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A339; /* je: equal / zero */

loc_0005A324: ;
    edx = MEM32(eax + 0x1EC);
    ecx = MEM32(esp + 0x828);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x1EC) = edx;

loc_0005A339: ;
    eax = MEM32(esi + 0xA7C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005A300; /* jl: less (signed <) */

loc_0005A347: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005A492; /* jne: not equal / not zero */

loc_0005A34F: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0005A358u); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_0005A358: ;
    PUSH32(esp, 0x2DC8F4);
    PUSH32(esp, 0x2DD3E8);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0005A36Bu); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_0005A36B: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0005A379u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0005A379: ;
    ebx = MEM32(esp + 0x820);
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6438E0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = 0x4031B0;
    PUSH32(esp, 0x0005A399u); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_0005A399: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A492; /* je: equal / zero */

loc_0005A3A3: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0005A3AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A3A7u); } /* indirect call */
    }

loc_0005A3AA: ;
    edx = MEM32(0x30C24C);
    ecx = MEM32(0x30C248);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005A492; /* jne: not equal / not zero */

loc_0005A3C0: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0005A3C9u); RECOMP_ABI_CALL(0x00030B60u, sub_00030B60); /* call 0x00030B60 */

loc_0005A3C9: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1DC); PUSH32(esp, 0x0005A3D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A3CDu); } /* indirect call */
    }

loc_0005A3D3: ;
    SET_LO8(ecx, MEM8(edi + 0x190));
    edx = MEM32(edi);
    SET_LO8(ecx, LO8(ecx) | 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edi + 0x190) = LO8(ecx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1CC); PUSH32(esp, 0x0005A3ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A3E6u); } /* indirect call */
    }

loc_0005A3EC: ;
    SET_LO8(eax, MEM8(esp + 0x824));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005A427; /* jne: not equal / not zero */

loc_0005A3F7: ;
    eax = MEM32(esi + 0x970);
    MEM32(esi + eax * 4 + 0x870) = ebx;
    ecx = MEM32(esi + 0x970);
    MEM32(esi + ecx * 4 + 0x8F0) = edi;
    eax = MEM32(esi + 0x970);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x970) = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x974) = eax;
    goto loc_0005A45B;

loc_0005A427: ;
    edx = MEM32(esi + 0xA7C);
    MEM32(esi + edx * 4 + 0x97C) = ebx;
    eax = MEM32(esi + 0xA7C);
    MEM32(esi + eax * 4 + 0x9FC) = edi;
    MEM32(esi + 0xA7C) = MEM32(esi + 0xA7C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xA7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x0005A451u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A44Bu); } /* indirect call */
    }

loc_0005A451: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A45B; /* je: equal / zero */

loc_0005A455: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0005A45Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A459u); } /* indirect call */
    }

loc_0005A45B: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B8); PUSH32(esp, 0x0005A465u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A45Fu); } /* indirect call */
    }

loc_0005A465: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A47E; /* je: equal / zero */

loc_0005A469: ;
    edx = MEM32(eax + 0x1EC);
    ecx = MEM32(esp + 0x828);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x1EC) = edx;

loc_0005A47E: ;
    eax = MEM32(esi + 0x970);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0005A492: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0005A4B0
 * Original: 0x0005A4B0 - 0x0005A575 (197 bytes, 62 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005A4B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0005A4B9u); RECOMP_ABI_CALL(0x00057860u, sub_00057860); /* call 0x00057860 */

loc_0005A4B9: ;
    ecx = MEM32(esi + 0x970);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0005A570; /* jle: less or equal (signed <=) */

loc_0005A4C9: ;
    edx = MEM32(esp + 0xC);
    ecx = esi + 0x870;
    PUSH32(esp, ebx);

loc_0005A4D4: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A4EC; /* je: equal / zero */

loc_0005A4D8: ;
    ebx = MEM32(esi + 0x970);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005A4D4; /* jl: less (signed <) */

loc_0005A4E6: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0005A4EC: ;
    ecx = MEM32(esi + edi * 4 + 0x8F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x7A0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x7A0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A506; /* je: equal / zero */

loc_0005A4FB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A506; /* je: equal / zero */

loc_0005A4FF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0005A504u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A501u); } /* indirect call */
    }

loc_0005A504: ;
    goto loc_0005A51B;

loc_0005A506: ;
    MEM8(ecx + 0x191) = 1;
    ecx = MEM32(esi + edi * 4 + 0x8F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0005A51Bu); RECOMP_ABI_CALL(0x00030B80u, sub_00030B80); /* call 0x00030B80 */

loc_0005A51B: ;
    eax = MEM32(esi + 0x970);
    ecx = edi + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0005A54F; /* jge: greater or equal (signed >=) */

loc_0005A528: ;
    eax = esi + ecx * 4 + 0x86C;
    /* nop */

loc_0005A530: ;
    edx = MEM32(eax + 4);
    MEM32(eax) = edx;
    edx = MEM32(eax + 0x84);
    MEM32(eax + 0x80) = edx;
    edx = MEM32(esi + 0x970);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005A530; /* jl: less (signed <) */

loc_0005A54F: ;
    edx = MEM32(esi + 0x970);
    ecx = MEM32(esi + 0x974);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esi + 0x970) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0005A56F; /* jl: less (signed <) */

loc_0005A568: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x974) = eax;

loc_0005A56F: ;
    POP32(esp, ebx);

loc_0005A570: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005A580
 * Original: 0x0005A580 - 0x0005A609 (137 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005A580: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0005A58Au); RECOMP_ABI_CALL(0x00057860u, sub_00057860); /* call 0x00057860 */

loc_0005A58A: ;
    ebp = MEM32(esi + 0x978);
    MEM32(esp + 8) = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x970)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x970) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0005A5E0; /* jge: greater or equal (signed >=) */

loc_0005A59C: ;
    PUSH32(esp, edi);
    edi = esi + ebp * 4 + 0x8F0;

loc_0005A5A4: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x7A0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x7A0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A5BB; /* je: equal / zero */

loc_0005A5AE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A5BB; /* je: equal / zero */

loc_0005A5B4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0005A5B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A5B6u); } /* indirect call */
    }

loc_0005A5B9: ;
    goto loc_0005A5CB;

loc_0005A5BB: ;
    MEM8(ecx + 0x191) = 1;
    ecx = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0005A5CBu); RECOMP_ABI_CALL(0x00030B80u, sub_00030B80); /* call 0x00030B80 */

loc_0005A5CB: ;
    MEM32(edi) = 0;
    eax = MEM32(esi + 0x970);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005A5A4; /* jl: less (signed <) */

loc_0005A5DF: ;
    POP32(esp, edi);

loc_0005A5E0: ;
    eax = MEM32(esi + 0x978);
    _fa = (uint32_t)(MEM32(esi + 0x974)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x974), eax (32-bit) */
    MEM32(esi + 0x970) = eax;
    MEM8(esi + 0xA84) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_0005A605; /* jl: less (signed <) */

loc_0005A5FB: ;
    MEM32(esi + 0x974) = 0;

loc_0005A605: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0005A610
 * Original: 0x0005A610 - 0x0005A748 (312 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A610(void)
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

loc_0005A610: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005A61Eu); RECOMP_ABI_CALL(0x000976A0u, sub_000976A0); /* call 0x000976A0 */

loc_0005A61E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005A634; /* jne: not equal / not zero */

loc_0005A622: ;
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005A62Cu); RECOMP_ABI_CALL(0x000976C0u, sub_000976C0); /* call 0x000976C0 */

loc_0005A62C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A745; /* je: equal / zero */

loc_0005A634: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0005A63Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A638u); } /* indirect call */
    }

loc_0005A63E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A6BD; /* je: equal / zero */

loc_0005A642: ;
    PUSH32(esp, 0x25);
    ecx = 0x323608;
    PUSH32(esp, 0x0005A64Eu); RECOMP_ABI_CALL(0x000A2F50u, sub_000A2F50); /* call 0x000A2F50 */

loc_0005A64E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A66B; /* je: equal / zero */

loc_0005A652: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0005A65Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A656u); } /* indirect call */
    }

loc_0005A65C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAE430AD6u);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x0005A66Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A665u); } /* indirect call */
    }

loc_0005A66B: ;
    PUSH32(esp, 0x23);
    ecx = 0x323608;
    PUSH32(esp, 0x0005A677u); RECOMP_ABI_CALL(0x000A2F50u, sub_000A2F50); /* call 0x000A2F50 */

loc_0005A677: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A694; /* je: equal / zero */

loc_0005A67B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0005A685u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A67Fu); } /* indirect call */
    }

loc_0005A685: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC4D3EEFDu);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x0005A694u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A68Eu); } /* indirect call */
    }

loc_0005A694: ;
    PUSH32(esp, 0x66);
    ecx = 0x323608;
    PUSH32(esp, 0x0005A6A0u); RECOMP_ABI_CALL(0x000A2F50u, sub_000A2F50); /* call 0x000A2F50 */

loc_0005A6A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A6BD; /* je: equal / zero */

loc_0005A6A4: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0005A6AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A6A8u); } /* indirect call */
    }

loc_0005A6AE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4A3D4D89);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x0005A6BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A6B7u); } /* indirect call */
    }

loc_0005A6BD: ;
    PUSH32(esp, ebx);
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005A6C8u); RECOMP_ABI_CALL(0x000976C0u, sub_000976C0); /* call 0x000976C0 */

loc_0005A6C8: ;
    SET_LO8(ebx, LO8(eax));
    SET_LO8(eax, MEM8(esi + 0xE65));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005A6D8; /* jne: not equal / not zero */

loc_0005A6D4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A72F; /* je: equal / zero */

loc_0005A6D8: ;
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005A6E2u); RECOMP_ABI_CALL(0x00097650u, sub_00097650); /* call 0x00097650 */

loc_0005A6E2: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x414104);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0005A6F6u); RECOMP_ABI_CALL(0x001F8C70u, sub_001F8C70); /* call 0x001F8C70 */

loc_0005A6F6: ;
    PUSH32(esp, esi);
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005A701u); RECOMP_ABI_CALL(0x00097E00u, sub_00097E00); /* call 0x00097E00 */

loc_0005A701: ;
    PUSH32(esp, 0);
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005A70Du); RECOMP_ABI_CALL(0x000976E0u, sub_000976E0); /* call 0x000976E0 */

loc_0005A70D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005A72F; /* jne: not equal / not zero */

loc_0005A711: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2E3268); /* subss */
    PUSH32(esp, ecx);
    ecx = 0x4140E8;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0005A72Fu); RECOMP_ABI_CALL(0x00097830u, sub_00097830); /* call 0x00097830 */

loc_0005A72F: ;
    ecx = esi;
    PUSH32(esp, 0x0005A736u); RECOMP_ABI_CALL(0x00058C90u, sub_00058C90); /* call 0x00058C90 */

loc_0005A736: ;
    POP32(esp, ebx);
    ecx = 0x35CDC8;
    POP32(esp, esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000FC010(); return; /* tail jmp 0x000FC010 */

loc_0005A745: ;
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
 * sub_0005A750
 * Original: 0x0005A750 - 0x0005A893 (323 bytes, 109 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A750(void)
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

loc_0005A750: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x288);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0005A77A; /* je: equal / zero */

loc_0005A762: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A77A; /* je: equal / zero */

loc_0005A766: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0005A76Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A768u); } /* indirect call */
    }

loc_0005A76E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x160); PUSH32(esp, 0x0005A778u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A772u); } /* indirect call */
    }

loc_0005A778: ;
    goto loc_0005A78E;

loc_0005A77A: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0005A784u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A77Eu); } /* indirect call */
    }

loc_0005A784: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x0005A78Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A788u); } /* indirect call */
    }

loc_0005A78E: ;
    eax = MEM32(ebx);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B8); PUSH32(esp, 0x0005A79Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A797u); } /* indirect call */
    }

loc_0005A79D: ;
    esi = MEM32(esp + 0x18);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A7E9; /* je: equal / zero */

loc_0005A7A7: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0005A7ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A7ABu); } /* indirect call */
    }

loc_0005A7AD: ;
    edx = MEM32(0x30DA48);
    ecx = MEM32(0x30DA44);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005A7E9; /* jne: not equal / not zero */

loc_0005A7BF: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x17C); PUSH32(esp, 0x0005A7C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A7C3u); } /* indirect call */
    }

loc_0005A7C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A7E9; /* je: equal / zero */

loc_0005A7CD: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A7D9; /* je: equal / zero */

loc_0005A7D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005A7E9; /* jne: not equal / not zero */

loc_0005A7D9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    goto loc_0005A7EF;

loc_0005A7E9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_0005A7EF: ;
    eax = MEM32(esi);
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 4); /* mulss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    MEM8(esp + 0x18) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEM8(esp + 0xC) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    MEM8(esp + 0xD) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    MEM8(esp + 0xE) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    MEM8(esp + 0xF) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0005A83E; /* je: equal / zero */

loc_0005A835: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005A83E; /* je: equal / zero */

loc_0005A83A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0005A840;

loc_0005A83E: ;
    SET_LO8(eax, 1);

loc_0005A840: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005A878; /* jne: not equal / not zero */

loc_0005A844: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005A878; /* jne: not equal / not zero */

loc_0005A84C: ;
    SET_LO8(ecx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005A878; /* jne: not equal / not zero */

loc_0005A854: ;
    SET_LO8(ecx, MEM8(esp + 9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005A878; /* jne: not equal / not zero */

loc_0005A85C: ;
    SET_LO8(ecx, MEM8(esp + 0xA));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005A878; /* jne: not equal / not zero */

loc_0005A864: ;
    SET_LO8(ecx, MEM8(esp + 0xB));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005A878; /* jne: not equal / not zero */

loc_0005A86C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005A878; /* jne: not equal / not zero */

loc_0005A870: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005A878; /* jne: not equal / not zero */

loc_0005A874: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0005A87D;

loc_0005A878: ;
    eax = 1;

loc_0005A87D: ;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM8(ebx + 0xE74) = LO8(eax);
    PUSH32(esp, 0x0005A88Bu); RECOMP_ABI_CALL(0x00053F40u, sub_00053F40); /* call 0x00053F40 */

loc_0005A88B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_0005A8A0
 * Original: 0x0005A8A0 - 0x0005A8A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A8A0(void)
{

loc_0005A8A0: ;
    eax = 0x2E3280;
    esp += 4; return; /* ret */

}

/**
 * sub_0005A8B0
 * Original: 0x0005A8B0 - 0x0005A8B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A8B0(void)
{

loc_0005A8B0: ;
    eax = 0x2E32A8;
    esp += 4; return; /* ret */

}

/**
 * sub_0005A8C0
 * Original: 0x0005A8C0 - 0x0005A8CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A8C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005A8C0: ;
    MEM32(ecx) = 0x2E32B8;
    g_seh_ebp = ebp; sub_00054BE0(); return; /* tail jmp 0x00054BE0 */

}

/**
 * sub_0005A8D0
 * Original: 0x0005A8D0 - 0x0005A8D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A8D0(void)
{

loc_0005A8D0: ;
    eax = 0xEE0;
    esp += 4; return; /* ret */

}

/**
 * sub_0005A8E0
 * Original: 0x0005A8E0 - 0x0005A8E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A8E0(void)
{

loc_0005A8E0: ;
    eax = MEM32(0x321880);
    esp += 4; return; /* ret */

}

/**
 * sub_0005A8F0
 * Original: 0x0005A8F0 - 0x0005A8F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A8F0(void)
{

loc_0005A8F0: ;
    eax = 0x1D;
    esp += 4; return; /* ret */

}

/**
 * sub_0005A900
 * Original: 0x0005A900 - 0x0005A907 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A900(void)
{

loc_0005A900: ;
    SET_LO8(eax, MEM8(ecx + 0xABC));
    esp += 4; return; /* ret */

}

/**
 * sub_0005A910
 * Original: 0x0005A910 - 0x0005A928 (24 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005A910: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x760);
    eax = ecx + 0x83C;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(edx));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005A930
 * Original: 0x0005A930 - 0x0005A948 (24 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005A930: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x760);
    eax = ecx + 0x84C;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(edx));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005A950
 * Original: 0x0005A950 - 0x0005A968 (24 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005A950: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x760);
    eax = ecx + 0x858;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(edx));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005A970
 * Original: 0x0005A970 - 0x0005A984 (20 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A970(void)
{

loc_0005A970: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    edx = ecx + 0x858;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0005A981u); RECOMP_ABI_CALL(0x0004C7F0u, sub_0004C7F0); /* call 0x0004C7F0 */

loc_0005A981: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005A990
 * Original: 0x0005A990 - 0x0005A9B1 (33 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005A990: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xEAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xEAC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005A9C0
 * Original: 0x0005A9C0 - 0x0005A9C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A9C0(void)
{

loc_0005A9C0: ;
    eax = MEM32(0x30D888);
    esp += 4; return; /* ret */

}

/**
 * sub_0005A9D0
 * Original: 0x0005A9D0 - 0x0005AA59 (137 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0005A9D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005A9D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xE38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005AA53; /* je: equal / zero */

loc_0005A9E7: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005A9EDu); RECOMP_ABI_CALL(0x00170730u, sub_00170730); /* call 0x00170730 */

loc_0005A9ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005AA53; /* je: equal / zero */

loc_0005A9F4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0005A9FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005A9F8u); } /* indirect call */
    }

loc_0005A9FE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005AA53; /* je: equal / zero */

loc_0005AA04: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(0x643844);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AA13u); RECOMP_ABI_CALL(0x00013A20u, sub_00013A20); /* call 0x00013A20 */

loc_0005AA13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005AA53; /* je: equal / zero */

loc_0005AA17: ;
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0xE3C);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AA36u); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_0005AA36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005AA53; /* jne: not equal / not zero */

loc_0005AA3B: ;
    eax = MEM32(edi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x0005AA47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005AA44u); } /* indirect call */
    }

loc_0005AA47: ;
    edx = MEM32(edi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0005AA53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005AA50u); } /* indirect call */
    }

loc_0005AA53: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0005AA60
 * Original: 0x0005AA60 - 0x0005AC7C (540 bytes, 157 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0005AA60(void)
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

loc_0005AA60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x768);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0005AA80; /* je: equal / zero */

loc_0005AA7B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AA80u); RECOMP_ABI_CALL(0x001662D0u, sub_001662D0); /* call 0x001662D0 */

loc_0005AA80: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AA87u); RECOMP_ABI_CALL(0x0004C9E0u, sub_0004C9E0); /* call 0x0004C9E0 */

loc_0005AA87: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x99A85800u);
    ecx = 0x414150;
    MEMF(esi + 0xED4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AAA1u); RECOMP_ABI_CALL(0x00121BD0u, sub_00121BD0); /* call 0x00121BD0 */

loc_0005AAA1: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AAA7u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0005AAA7: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AAADu); RECOMP_ABI_CALL(0x001EC270u, sub_001EC270); /* call 0x001EC270 */

loc_0005AAAD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005AAC1; /* jne: not equal / not zero */

loc_0005AAB4: ;
    PUSH32(esp, 0x2059FDA5);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AABEu); RECOMP_ABI_CALL(0x001EC270u, sub_001EC270); /* call 0x001EC270 */

loc_0005AABE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005AAC1: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AAC7u); RECOMP_ABI_CALL(0x001EC1D0u, sub_001EC1D0); /* call 0x001EC1D0 */

loc_0005AAC7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x6438E0);
    ecx = esp + 0x24;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AADAu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0005AADA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005AAF4; /* je: equal / zero */

loc_0005AADE: ;
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AAEAu); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_0005AAEA: ;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AAF4u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0005AAF4: ;
    ecx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x50);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AB13u); RECOMP_ABI_CALL(0x001F1530u, sub_001F1530); /* call 0x001F1530 */

loc_0005AB13: ;
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    edx = MEM32(esi);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x20;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0005AB4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005AB49u); } /* indirect call */
    }

loc_0005AB4C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3BC); PUSH32(esp, 0x0005AB56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005AB50u); } /* indirect call */
    }

loc_0005AB56: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AB5Du); RECOMP_ABI_CALL(0x0013C4E0u, sub_0013C4E0); /* call 0x0013C4E0 */

loc_0005AB5D: ;
    ecx = 0x4140E8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AB67u); RECOMP_ABI_CALL(0x00097A30u, sub_00097A30); /* call 0x00097A30 */

loc_0005AB67: ;
    eax = MEM32(0x4140E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    ecx = 0x4140E8;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0005AB79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005AB76u); } /* indirect call */
    }

loc_0005AB79: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AB82u); RECOMP_ABI_CALL(0x0004CB90u, sub_0004CB90); /* call 0x0004CB90 */

loc_0005AB82: ;
    eax = MEM32(esi + 0x7B8);
    ecx = MEM32(esi + 0x170);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x98) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0005ABC3; /* jle: less or equal (signed <=) */

loc_0005AB9A: ;
    ebx = esi + 0x7A4;

loc_0005ABA0: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1D4); PUSH32(esp, 0x0005ABAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005ABA4u); } /* indirect call */
    }

loc_0005ABAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005ABB5; /* jne: not equal / not zero */

loc_0005ABAE: ;
    ecx = MEM32(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005ABB5u); RECOMP_ABI_CALL(0x00032770u, sub_00032770); /* call 0x00032770 */

loc_0005ABB5: ;
    eax = MEM32(esi + 0x7B8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005ABA0; /* jl: less (signed <) */

loc_0005ABC3: ;
    eax = MEM32(esi + 0x7C8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0005ABF8; /* jle: less or equal (signed <=) */

loc_0005ABCF: ;
    edi = esi + 0x7C0;

loc_0005ABD5: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1D4); PUSH32(esp, 0x0005ABDFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005ABD9u); } /* indirect call */
    }

loc_0005ABDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005ABEA; /* jne: not equal / not zero */

loc_0005ABE3: ;
    ecx = MEM32(edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005ABEAu); RECOMP_ABI_CALL(0x00032770u, sub_00032770); /* call 0x00032770 */

loc_0005ABEA: ;
    eax = MEM32(esi + 0x7C8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005ABD5; /* jl: less (signed <) */

loc_0005ABF8: ;
    PUSH32(esp, 0);
    ecx = 0x323338;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AC04u); RECOMP_ABI_CALL(0x00095C00u, sub_00095C00); /* call 0x00095C00 */

loc_0005AC04: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC09C)); /* fadd dword ptr [0x2dc09c] */
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    ecx = 0x323338;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AC1Cu); RECOMP_ABI_CALL(0x00095B70u, sub_00095B70); /* call 0x00095B70 */

loc_0005AC1C: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0005AC39; /* jbe: below or equal (unsigned <=) */

loc_0005AC26: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    ecx = 0x323338;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AC39u); RECOMP_ABI_CALL(0x00095DD0u, sub_00095DD0); /* call 0x00095DD0 */

loc_0005AC39: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0005AC43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005AC3Du); } /* indirect call */
    }

loc_0005AC43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005AC60; /* je: equal / zero */

loc_0005AC47: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0005AC51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005AC4Bu); } /* indirect call */
    }

loc_0005AC51: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE4F74089u);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x0005AC60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005AC5Au); } /* indirect call */
    }

loc_0005AC60: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, edi);
    MEM32(esi + 0x818) = 0;
    MEMF(esi + 0x81C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
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
 * sub_0005AC80
 * Original: 0x0005AC80 - 0x0005AE6E (494 bytes, 120 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005AC80(void)
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

loc_0005AC80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2414A8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ebp = ecx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    PUSH32(esp, 0x6459E8);
    ecx = esp + 0x2C;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0005ACE1u); RECOMP_ABI_CALL(0x00050820u, sub_00050820); /* call 0x00050820 */

loc_0005ACE1: ;
    esi = MEM32(esp + 0xA4);
    xmm0 = XMM_SCALAR(MEMF(0x30D87C)); /* movss */
    MEM32(esp + 0x9C) = 0;
    goto loc_0005AD00;

    /* nop */

loc_0005AD00: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005ADED; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0005AD12: ;
    goto loc_0005AD20;

loc_0005AD14: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    goto loc_0005AD20;

    /* nop */

loc_0005AD20: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0005AD4C; /* jp: parity */

loc_0005AD2F: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    goto loc_0005AD8F;

loc_0005AD4C: ;
    fp_push(MEMF(esp + 0xA8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x10)); /* fdiv dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0005AD69u); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_0005AD69: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    PUSH32(esp, edi);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0005AD77u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_0005AD77: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_0005AD8F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    PUSH32(esp, 1);
    ecx = esp + 0x28;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEMF(esp + 0x88) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0005ADCFu); RECOMP_ABI_CALL(0x0012E440u, sub_0012E440); /* call 0x0012E440 */

loc_0005ADCF: ;
    xmm0 = XMM_SCALAR(MEMF(0x30D87C)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005ADEB; /* je: equal / zero */

loc_0005ADDE: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca > _fcb)) goto loc_0005AD14; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_0005ADE9: ;
    goto loc_0005ADED;

loc_0005ADEB: ;
    SET_LO8(ebx, 1);

loc_0005ADED: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0xA8); /* addss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0005AD00; /* je: equal / zero */

loc_0005AE0A: ;
    edx = MEM32(ebp);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0005AE17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005AE14u); } /* indirect call */
    }

loc_0005AE17: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3BC); PUSH32(esp, 0x0005AE22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005AE1Cu); } /* indirect call */
    }

loc_0005AE22: ;
    ecx = eax;
    PUSH32(esp, 0x0005AE29u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_0005AE29: ;
    MEM32(esp + 0x9C) = 0xFFFFFFFFu;
    MEM32(esp + 0x24) = 0x2DC928;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_0005AE40: ;
    ecx = MEM32(esp + esi * 4 + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005AE4D; /* je: equal / zero */

loc_0005AE48: ;
    PUSH32(esp, 0x0005AE4Du); RECOMP_ABI_CALL(0x0012BE40u, sub_0012BE40); /* call 0x0012BE40 */

loc_0005AE4D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005AE40; /* jl: less (signed <) */

loc_0005AE53: ;
    ecx = MEM32(esp + 0x94);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0005AE70
 * Original: 0x0005AE70 - 0x0005AE8B (27 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005AE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005AE70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0005AE79u); RECOMP_ABI_CALL(0x0004DA70u, sub_0004DA70); /* call 0x0004DA70 */

loc_0005AE79: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005AE86; /* je: equal / zero */

loc_0005AE7F: ;
    ecx = esi;
    PUSH32(esp, 0x0005AE86u); RECOMP_ABI_CALL(0x0005A610u, sub_0005A610); /* call 0x0005A610 */

loc_0005AE86: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0005AE90
 * Original: 0x0005AE90 - 0x0005B11B (651 bytes, 165 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0005AE90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005AE90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x154) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x154;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AEA6u); RECOMP_ABI_CALL(0x00052300u, sub_00052300); /* call 0x00052300 */

loc_0005AEA6: ;
    eax = MEM32(edi + 0x970);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0005AEF5; /* jle: less or equal (signed <=) */

loc_0005AEB2: ;
    eax = edi + 0x8F0;
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_0005AEC0: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AECDu); RECOMP_ABI_CALL(0x00030B50u, sub_00030B50); /* call 0x00030B50 */

loc_0005AECD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005AEDF; /* jne: not equal / not zero */

loc_0005AED1: ;
    edx = MEM32(esi);
    eax = edi + 0xB0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0005AEDFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005AEDCu); } /* indirect call */
    }

loc_0005AEDF: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x970);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0005AEC0; /* jl: less (signed <) */

loc_0005AEF5: ;
    eax = MEM32(edi + 0xAB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0005B114; /* jle: less or equal (signed <=) */

loc_0005AF0B: ;
    ecx = edi + 0xA9C;
    MEM32(esp + 0x10) = ecx;

loc_0005AF15: ;
    edx = MEM32(esp + 0x10);
    esi = MEM32(edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AF22u); RECOMP_ABI_CALL(0x00030B50u, sub_00030B50); /* call 0x00030B50 */

loc_0005AF22: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0005B0F2; /* je: equal / zero */

loc_0005AF2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xADA7AFDBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xADA7AFDBu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005B0F2; /* je: equal / zero */

loc_0005AF39: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0005AF43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005AF3Du); } /* indirect call */
    }

loc_0005AF43: ;
    ecx = MEM32(0x643844);
    eax = MEM32(eax + 0x1C);
    MEM32(ecx) = eax;
    edx = MEM32(0x6438B4);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(0x6438A8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AF67u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0005AF67: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0005AF75; /* jge: greater or equal (signed >=) */

loc_0005AF6E: ;
    eax = 0x6438B8;
    goto loc_0005AF7E;

loc_0005AF75: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_0005AF7E: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    edx = MEM32(esp + 0x18);
    MEM32(edx + 4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0005B0F2; /* je: equal / zero */

loc_0005AF8F: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edi);
    ecx = esp + 0xA0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x3FC); PUSH32(esp, 0x0005AFA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005AFA0u); } /* indirect call */
    }

loc_0005AFA6: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0005AFB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005AFAAu); } /* indirect call */
    }

loc_0005AFB0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xAD178436u);
    ecx = esp + 0xF4;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AFCEu); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_0005AFCE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0005B0E3; /* jle: less or equal (signed <=) */

loc_0005AFD6: ;
    edx = esp + 0x120;
    PUSH32(esp, edx);
    ecx = esp + 0xE4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AFEAu); RECOMP_ABI_CALL(0x00044FF0u, sub_00044FF0); /* call 0x00044FF0 */

loc_0005AFEA: ;
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005AFFDu); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_0005AFFD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    eax = MEM32(esi);
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    ecx = esp + 0x60;
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0005B0E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B0DEu); } /* indirect call */
    }

loc_0005B0E1: ;
    goto loc_0005B0F2;

loc_0005B0E3: ;
    edx = MEM32(esi);
    eax = esp + 0xA0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0005B0F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B0EFu); } /* indirect call */
    }

loc_0005B0F2: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(edi + 0xAB4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0005AF15; /* jl: less (signed <) */

loc_0005B114: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0005B120
 * Original: 0x0005B120 - 0x0005B12F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005B120(void)
{

loc_0005B120: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xDBB6CB06u);
    PUSH32(esp, 0x0005B12Eu); RECOMP_ABI_CALL(0x0005A220u, sub_0005A220); /* call 0x0005A220 */

loc_0005B12E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0005B130
 * Original: 0x0005B130 - 0x0005B1E4 (180 bytes, 59 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005B130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005B130: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x7A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0005B147; /* je: equal / zero */

loc_0005B13E: ;
    _fa = (uint32_t)(MEM8(eax + 0x190)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x190), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005B159; /* jne: not equal / not zero */

loc_0005B147: ;
    PUSH32(esp, 0xF29BCB57u);
    ecx = esi;
    PUSH32(esp, 0x0005B153u); RECOMP_ABI_CALL(0x000577E0u, sub_000577E0); /* call 0x000577E0 */

loc_0005B153: ;
    MEM32(esi + 0xA8C) = eax;

loc_0005B159: ;
    eax = MEM32(esp + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005B191; /* je: equal / zero */

loc_0005B163: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0005B16Bu); RECOMP_ABI_CALL(0x00057830u, sub_00057830); /* call 0x00057830 */

loc_0005B16B: ;
    edi = eax;
    PUSH32(esp, 0xF29BCB57u);
    ecx = edi;
    PUSH32(esp, 0x0005B179u); RECOMP_ABI_CALL(0x00030B60u, sub_00030B60); /* call 0x00030B60 */

loc_0005B179: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x294); PUSH32(esp, 0x0005B183u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B17Du); } /* indirect call */
    }

loc_0005B183: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005B191; /* je: equal / zero */

loc_0005B187: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1D0); PUSH32(esp, 0x0005B191u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B18Bu); } /* indirect call */
    }

loc_0005B191: ;
    ecx = MEM32(esi + 0x7A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005B1C7; /* je: equal / zero */

loc_0005B19B: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005B1B2; /* je: equal / zero */

loc_0005B1A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA61ECB02u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA61ECB02u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005B1B2; /* je: equal / zero */

loc_0005B1AA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005B1B0u); RECOMP_ABI_CALL(0x00030B60u, sub_00030B60); /* call 0x00030B60 */

loc_0005B1B0: ;
    goto loc_0005B1C7;

loc_0005B1B2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0005B1B9u); RECOMP_ABI_CALL(0x00030B60u, sub_00030B60); /* call 0x00030B60 */

loc_0005B1B9: ;
    ecx = MEM32(esi + 0x7A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1CC); PUSH32(esp, 0x0005B1C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B1C1u); } /* indirect call */
    }

loc_0005B1C7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3D8); PUSH32(esp, 0x0005B1D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B1CCu); } /* indirect call */
    }

loc_0005B1D2: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0005B1DFu); RECOMP_ABI_CALL(0x00059610u, sub_00059610); /* call 0x00059610 */

loc_0005B1DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0005B1F0
 * Original: 0x0005B1F0 - 0x0005B36C (380 bytes, 117 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0005B1F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005B1F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x7C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0005B332; /* jne: not equal / not zero */

loc_0005B210: ;
    ebx = MEM32(esi + 0x7BC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x7C0;
    edi = edi;

loc_0005B220: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005B234; /* je: equal / zero */

loc_0005B224: ;
    edx = MEM32(esi + 0x7C8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005B220; /* jl: less (signed <) */

loc_0005B232: ;
    goto loc_0005B263;

loc_0005B234: ;
    edi = MEM32(ebp + 8);
    MEM32(esi + 0x7BC) = edi;
    MEM32(esi + eax * 4 + 0x7C0) = edi;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1DC); PUSH32(esp, 0x0005B24Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B248u); } /* indirect call */
    }

loc_0005B24E: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1CC); PUSH32(esp, 0x0005B258u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B252u); } /* indirect call */
    }

loc_0005B258: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3DC); PUSH32(esp, 0x0005B263u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B25Du); } /* indirect call */
    }

loc_0005B263: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x0005B26Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B267u); } /* indirect call */
    }

loc_0005B26D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005B295; /* je: equal / zero */

loc_0005B271: ;
    ecx = MEM32(eax + 0x230);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0005B295; /* jg: greater (signed >) */

loc_0005B27B: ;
    SET_LO8(ecx, MEM8(eax + 0x238));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005B295; /* jne: not equal / not zero */

loc_0005B285: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0005B28Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B289u); } /* indirect call */
    }

loc_0005B28C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0005B295: ;
    esi = MEM32(esi + 0x6B0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005B309; /* je: equal / zero */

loc_0005B29F: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xF29BCB57u);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005B2B0u); RECOMP_ABI_CALL(0x00061FF0u, sub_00061FF0); /* call 0x00061FF0 */

loc_0005B2B0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005B309; /* je: equal / zero */

loc_0005B2B4: ;
    PUSH32(esp, 0x6438E0);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005B2C2u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0005B2C2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    edx = MEM32(ebx);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0005B309u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B306u); } /* indirect call */
    }

loc_0005B309: ;
    PUSH32(esp, 0xE9176764u);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005B315u); RECOMP_ABI_CALL(0x00030B60u, sub_00030B60); /* call 0x00030B60 */

loc_0005B315: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1D8); PUSH32(esp, 0x0005B31Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B319u); } /* indirect call */
    }

loc_0005B31F: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1D0); PUSH32(esp, 0x0005B329u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B323u); } /* indirect call */
    }

loc_0005B329: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0005B332: ;
    edi = MEM32(ebp + 8);
    if (CMP_GE(_fas, _fbs)) goto loc_0005B344; /* jge: greater or equal (signed >=) */

loc_0005B337: ;
    MEM32(esi + eax * 4 + 0x7C0) = edi;
    MEM32(esi + 0x7C8) = MEM32(esi + 0x7C8) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x7C8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0005B344: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1DC); PUSH32(esp, 0x0005B34Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B348u); } /* indirect call */
    }

loc_0005B34E: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1CC); PUSH32(esp, 0x0005B358u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B352u); } /* indirect call */
    }

loc_0005B358: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3DC); PUSH32(esp, 0x0005B363u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B35Du); } /* indirect call */
    }

loc_0005B363: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005B370
 * Original: 0x0005B370 - 0x0005B416 (166 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0005B370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005B370: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2DDA40)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC3CC)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005B3AEu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0005B3AE: ;
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x58);
    MEM32(esp + 8) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEM32(esp + 0xC) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC3CC); /* addss */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    MEM32(esp + 0x14) = eax;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005B411u); RECOMP_ABI_CALL(0x00059C90u, sub_00059C90); /* call 0x00059C90 */

loc_0005B411: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0005B420
 * Original: 0x0005B420 - 0x0005B6B8 (664 bytes, 186 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005B420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005B420: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0005B5FF; /* je: equal / zero */

loc_0005B430: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005B5FF; /* je: equal / zero */

loc_0005B439: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005B4F3; /* je: equal / zero */

loc_0005B442: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005B4F3; /* je: equal / zero */

loc_0005B44B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005B459; /* je: equal / zero */

loc_0005B450: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005B6AD; /* jne: not equal / not zero */

loc_0005B459: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30D788);
    PUSH32(esp, 0xDD626827u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0005B472u); RECOMP_ABI_CALL(0x00059D10u, sub_00059D10); /* call 0x00059D10 */

loc_0005B472: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30D7B8);
    PUSH32(esp, 0xFEAF73D8u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0005B48Bu); RECOMP_ABI_CALL(0x00059D10u, sub_00059D10); /* call 0x00059D10 */

loc_0005B48B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30D7E8);
    PUSH32(esp, 0x4FF6A1ED);
    PUSH32(esp, 0x10D7E864);
    PUSH32(esp, 0x4275D083);
    ecx = esi;
    PUSH32(esp, 0x0005B4AAu); RECOMP_ABI_CALL(0x00059D10u, sub_00059D10); /* call 0x00059D10 */

loc_0005B4AA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30D818);
    PUSH32(esp, 0x4FF6A1ED);
    PUSH32(esp, 0x1E902BB6);
    PUSH32(esp, 0x60358AF9);
    ecx = esi;
    PUSH32(esp, 0x0005B4C9u); RECOMP_ABI_CALL(0x00059D10u, sub_00059D10); /* call 0x00059D10 */

loc_0005B4C9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30D848);
    PUSH32(esp, 0xB813DAE5u);
    PUSH32(esp, 0x6E560B5B);
    PUSH32(esp, 0xD177F3F2u);
    ecx = esi;
    PUSH32(esp, 0x0005B4E8u); RECOMP_ABI_CALL(0x00059D10u, sub_00059D10); /* call 0x00059D10 */

loc_0005B4E8: ;
    MEM32(esi + 0xEA0) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0005B4F3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30D608);
    PUSH32(esp, 0xDD626827u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0005B50Cu); RECOMP_ABI_CALL(0x00059D10u, sub_00059D10); /* call 0x00059D10 */

loc_0005B50C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30D638);
    PUSH32(esp, 0xFEAF73D8u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0005B525u); RECOMP_ABI_CALL(0x00059D10u, sub_00059D10); /* call 0x00059D10 */

loc_0005B525: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30D668);
    PUSH32(esp, 0x4FF6A1ED);
    PUSH32(esp, 0x10D7E864);
    PUSH32(esp, 0xC373DFB1u);
    ecx = esi;
    PUSH32(esp, 0x0005B544u); RECOMP_ABI_CALL(0x00059D10u, sub_00059D10); /* call 0x00059D10 */

loc_0005B544: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30D698);
    PUSH32(esp, 0x4FF6A1ED);
    PUSH32(esp, 0x1E902BB6);
    PUSH32(esp, 0x6D277F2B);
    ecx = esi;
    PUSH32(esp, 0x0005B563u); RECOMP_ABI_CALL(0x00059D10u, sub_00059D10); /* call 0x00059D10 */

loc_0005B563: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30D6C8);
    PUSH32(esp, 0xB813DAE5u);
    PUSH32(esp, 0x6E560B5B);
    PUSH32(esp, 0x281D6C88);
    ecx = esi;
    PUSH32(esp, 0x0005B582u); RECOMP_ABI_CALL(0x00059D10u, sub_00059D10); /* call 0x00059D10 */

loc_0005B582: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30D6F8);
    PUSH32(esp, 0x4FF6A1ED);
    PUSH32(esp, 0x39215233);
    PUSH32(esp, 0x7D0AA9CA);
    ecx = esi;
    PUSH32(esp, 0x0005B5A1u); RECOMP_ABI_CALL(0x00059D10u, sub_00059D10); /* call 0x00059D10 */

loc_0005B5A1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30D728);
    PUSH32(esp, 0x740B6E0E);
    PUSH32(esp, 0x6F68B7E5);
    PUSH32(esp, 0x44FF945C);
    ecx = esi;
    PUSH32(esp, 0x0005B5C0u); RECOMP_ABI_CALL(0x00059D10u, sub_00059D10); /* call 0x00059D10 */

loc_0005B5C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30D758);
    PUSH32(esp, 0x4313EBF2);
    PUSH32(esp, 0x7EF52453);
    PUSH32(esp, 0xA459C47Au);
    ecx = esi;
    PUSH32(esp, 0x0005B5DFu); RECOMP_ABI_CALL(0x00059D10u, sub_00059D10); /* call 0x00059D10 */

loc_0005B5DF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005B6AD; /* jne: not equal / not zero */

loc_0005B5E8: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x298); PUSH32(esp, 0x0005B5F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B5EEu); } /* indirect call */
    }

loc_0005B5F4: ;
    MEM32(esi + 0xEA0) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0005B5FF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30D4E8);
    PUSH32(esp, 0xDD626827u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0005B618u); RECOMP_ABI_CALL(0x00059D10u, sub_00059D10); /* call 0x00059D10 */

loc_0005B618: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30D518);
    PUSH32(esp, 0xFEAF73D8u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0005B631u); RECOMP_ABI_CALL(0x00059D10u, sub_00059D10); /* call 0x00059D10 */

loc_0005B631: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30D548);
    PUSH32(esp, 0x4FF6A1ED);
    PUSH32(esp, 0x10D7E864);
    PUSH32(esp, 0x6AB9C746);
    ecx = esi;
    PUSH32(esp, 0x0005B650u); RECOMP_ABI_CALL(0x00059D10u, sub_00059D10); /* call 0x00059D10 */

loc_0005B650: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30D578);
    PUSH32(esp, 0x4FF6A1ED);
    PUSH32(esp, 0x1E902BB6);
    PUSH32(esp, 0xE283BB14u);
    ecx = esi;
    PUSH32(esp, 0x0005B66Fu); RECOMP_ABI_CALL(0x00059D10u, sub_00059D10); /* call 0x00059D10 */

loc_0005B66F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30D5A8);
    PUSH32(esp, 0xB813DAE5u);
    PUSH32(esp, 0x6E560B5B);
    PUSH32(esp, 0x88383B3Du);
    ecx = esi;
    PUSH32(esp, 0x0005B68Eu); RECOMP_ABI_CALL(0x00059D10u, sub_00059D10); /* call 0x00059D10 */

loc_0005B68E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30D578);
    PUSH32(esp, 0x4FF6A1ED);
    PUSH32(esp, 0x251516A3);
    PUSH32(esp, 0x5493F029);
    ecx = esi;
    PUSH32(esp, 0x0005B6ADu); RECOMP_ABI_CALL(0x00059D10u, sub_00059D10); /* call 0x00059D10 */

loc_0005B6AD: ;
    MEM32(esi + 0xEA0) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005B6C0
 * Original: 0x0005B6C0 - 0x0005B9A8 (744 bytes, 221 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005B6C0(void)
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

loc_0005B6C0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x40));
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x50);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0xC));
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0005B8E0; /* je: equal / zero */

loc_0005B6DA: ;
    _fa = (uint32_t)(MEM8(esi + 0xA88)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xA88), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0005B99C; /* jne: not equal / not zero */

loc_0005B6E6: ;
    ebp = MEM32(edi + 8);
    MEM8(edi + 0xC) = LO8(ebx);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0005B6F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B6F0u); } /* indirect call */
    }

loc_0005B6F3: ;
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0005B6FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B6FCu); } /* indirect call */
    }

loc_0005B6FF: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x54) - fp_top()); /* fsubr dword ptr [esp + 0x54] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0005B70Cu); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_0005B70C: ;
    MEMF(esp + 0x58) = (float)fp_top(); /* fst */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x2DC098)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0005B72A; /* jbe: below or equal (unsigned <=) */

loc_0005B71F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x54); /* subss */
    goto loc_0005B730;

loc_0005B72A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */

loc_0005B730: ;
    xmm1 = XMM_SCALAR(MEMF(0x30D880)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM8(esp + 0x54) = 1;
    if ((_fca > _fcb)) goto loc_0005B746; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0005B742: ;
    MEM8(esp + 0x54) = LO8(ebx);

loc_0005B746: ;
    eax = MEM32(esi);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0005B752u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B74Fu); } /* indirect call */
    }

loc_0005B752: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx);
    ebp = eax;
    eax = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0005B761u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B75Eu); } /* indirect call */
    }

loc_0005B761: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 4); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebp); /* subss */
    ebp = MEM32(esi);
    ecx = esp + 0x10;
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0005B79Bu); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_0005B79B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebp + 0x68); PUSH32(esp, 0x0005B7A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B7A1u); } /* indirect call */
    }

loc_0005B7A4: ;
    ecx = esi;
    PUSH32(esp, 0x0005B7ABu); RECOMP_ABI_CALL(0x0005B370u, sub_0005B370); /* call 0x0005B370 */

loc_0005B7AB: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x33C); PUSH32(esp, 0x0005B7B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B7B1u); } /* indirect call */
    }

loc_0005B7B7: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(ecx);
    edx = esi + 0xB0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0005B7C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B7C3u); } /* indirect call */
    }

loc_0005B7C6: ;
    _fa = (uint32_t)(MEM8(esp + 0x54)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x54), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = 0xFFFFFFFFu;
    MEM8(esp + 0x44) = LO8(ebx);
    MEM8(esp + 0x45) = LO8(ebx);
    MEM8(esp + 0x47) = LO8(ebx);
    MEM8(esp + 0x48) = LO8(ebx);
    MEM8(esp + 0x49) = LO8(ebx);
    MEM8(esp + 0x4A) = LO8(ebx);
    MEM8(esp + 0x4B) = LO8(ebx);
    MEM8(esp + 0x4C) = LO8(ebx);
    MEM8(esp + 0x4D) = LO8(ebx);
    MEM8(esp + 0x4E) = LO8(ebx);
    MEM8(esp + 0x4F) = LO8(ebx);
    MEM8(esp + 0x46) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0005B820; /* je: equal / zero */

loc_0005B811: ;
    ebp = 0x453C0720;
    MEM32(esp + 0x54) = 0x9E062940u;
    goto loc_0005B82D;

loc_0005B820: ;
    ebp = 0x1AF063AD;
    MEM32(esp + 0x54) = 0xC123B74Du;

loc_0005B82D: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0005B835u); RECOMP_ABI_CALL(0x0004CB90u, sub_0004CB90); /* call 0x0004CB90 */

loc_0005B835: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x190); PUSH32(esp, 0x0005B83Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B839u); } /* indirect call */
    }

loc_0005B83F: ;
    ecx = MEM32(esi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0005B855; /* je: equal / zero */

loc_0005B849: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0005B855u); RECOMP_ABI_CALL(0x00061E50u, sub_00061E50); /* call 0x00061E50 */

loc_0005B855: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x284); PUSH32(esp, 0x0005B85Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B859u); } /* indirect call */
    }

loc_0005B85F: ;
    ecx = MEM32(eax + 0x28D0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(esi + 0x6E0);
    ecx = MEM32(edi + 8);
    PUSH32(esp, ebx);
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x0005B87Fu); RECOMP_ABI_CALL(0x0004CB90u, sub_0004CB90); /* call 0x0004CB90 */

loc_0005B87F: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x190); PUSH32(esp, 0x0005B88Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B884u); } /* indirect call */
    }

loc_0005B88A: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0005B8A7; /* je: equal / zero */

loc_0005B897: ;
    edx = MEM32(esp + 0x54);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0005B8A7u); RECOMP_ABI_CALL(0x00061E50u, sub_00061E50); /* call 0x00061E50 */

loc_0005B8A7: ;
    ecx = MEM32(edi + 8);
    PUSH32(esp, 0x0005B8AFu); RECOMP_ABI_CALL(0x00052B30u, sub_00052B30); /* call 0x00052B30 */

loc_0005B8AF: ;
    ecx = MEM32(esi + 0x6B0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0005B8BEu); RECOMP_ABI_CALL(0x00061180u, sub_00061180); /* call 0x00061180 */

loc_0005B8BE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, 4);
    ecx = 0x4140E8;
    MEM32(edi + 4) = eax;
    PUSH32(esp, 0x0005B8D4u); RECOMP_ABI_CALL(0x00097700u, sub_00097700); /* call 0x00097700 */

loc_0005B8D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x40)) >> 32) & 1);
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0005B8E0: ;
    ecx = MEM32(esi + 0x6B0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0005B8EDu); RECOMP_ABI_CALL(0x000612C0u, sub_000612C0); /* call 0x000612C0 */

loc_0005B8ED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0005B909; /* jne: not equal / not zero */

loc_0005B8F1: ;
    ecx = MEM32(esi + 0x6B0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0005B900u); RECOMP_ABI_CALL(0x00061180u, sub_00061180); /* call 0x00061180 */

loc_0005B900: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0005B99C; /* je: equal / zero */

loc_0005B909: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B8); PUSH32(esp, 0x0005B914u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B90Eu); } /* indirect call */
    }

loc_0005B914: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0005B98D; /* je: equal / zero */

loc_0005B918: ;
    eax = MEM32(eax + 0x4A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x54) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0005B98D; /* je: equal / zero */

loc_0005B926: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx);
    ebp = MEM32(esi + 0xF4);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x100); PUSH32(esp, 0x0005B937u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B931u); } /* indirect call */
    }

loc_0005B937: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD6C0)); /* fmul dword ptr [0x2dd6c0] */
    eax = MEM32(esp + 0x54);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = 0x323338;
    PUSH32(esp, 0x0005B951u); RECOMP_ABI_CALL(0x00095E70u, sub_00095E70); /* call 0x00095E70 */

loc_0005B951: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(edi + 8);
    edx = MEM32(0x2E6D34);
    ebp = MEM32(ecx + 0x28);
    ecx = MEM32(eax + 0x100);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xFC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC090); /* mulss */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 7);
    PUSH32(esp, 0x0005B987u); RECOMP_ABI_CALL(0x00097270u, sub_00097270); /* call 0x00097270 */

loc_0005B987: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x3C) = ebp;

loc_0005B98D: ;
    MEM8(edi + 0xD) = 1;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x334); PUSH32(esp, 0x0005B99Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005B996u); } /* indirect call */
    }

loc_0005B99C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x40)) >> 32) & 1);
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0005B9B0
 * Original: 0x0005B9B0 - 0x0005BA66 (182 bytes, 67 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005B9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005B9B0: ;
    eax = MEM32(0x643844);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(eax) = edi;
    ebx = eax;
    eax = MEM32(0x6438A8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = ecx;
    ecx = MEM32(0x6438B4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0005B9D6u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0005B9D6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0005B9E4; /* jge: greater or equal (signed >=) */

loc_0005B9DD: ;
    eax = 0x6438B8;
    goto loc_0005B9ED;

loc_0005B9E4: ;
    edx = MEM32(0x6438B0);
    eax = edx + eax * 4;

loc_0005B9ED: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0005BA5E; /* je: equal / zero */

loc_0005B9F6: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005BA5E; /* je: equal / zero */

loc_0005B9FD: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x643860;
    PUSH32(esp, 0x0005BA0Au); RECOMP_ABI_CALL(0x001F7AF0u, sub_001F7AF0); /* call 0x001F7AF0 */

loc_0005BA0A: ;
    eax = MEM32(esi + 0x3C);
    ecx = esi + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0005BA14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005BA11u); } /* indirect call */
    }

loc_0005BA14: ;
    PUSH32(esp, edi);
    ecx = esi + 0x1D8;
    PUSH32(esp, 0x0005BA20u); RECOMP_ABI_CALL(0x001F5200u, sub_001F5200); /* call 0x001F5200 */

loc_0005BA20: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = 0x643860;
    PUSH32(esp, 0x0005BA2Du); RECOMP_ABI_CALL(0x001F7A70u, sub_001F7A70); /* call 0x001F7A70 */

loc_0005BA2D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C8); PUSH32(esp, 0x0005BA37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005BA31u); } /* indirect call */
    }

loc_0005BA37: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C4); PUSH32(esp, 0x0005BA41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005BA3Bu); } /* indirect call */
    }

loc_0005BA41: ;
    ecx = esi;
    PUSH32(esp, 0x0005BA48u); RECOMP_ABI_CALL(0x00057BB0u, sub_00057BB0); /* call 0x00057BB0 */

loc_0005BA48: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0005BA50u); RECOMP_ABI_CALL(0x00057C30u, sub_00057C30); /* call 0x00057C30 */

loc_0005BA50: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005BA56u); RECOMP_ABI_CALL(0x0005B420u, sub_0005B420); /* call 0x0005B420 */

loc_0005BA56: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0005BA5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005BA70
 * Original: 0x0005BA70 - 0x0005BADC (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005BA70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005BA70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0005BA78u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_0005BA78: ;
    MEM32(esi) = 0x2E3700;
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
    PUSH32(esp, 0x0005BAD5u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0005BAD5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005BAE0
 * Original: 0x0005BAE0 - 0x0005BAEC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005BAE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005BAE0: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0005BAF0(); return; /* tail jmp 0x0005BAF0 */

}

/**
 * sub_0005BAF0
 * Original: 0x0005BAF0 - 0x0005BB5C (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005BAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005BAF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005BB57; /* je: equal / zero */

loc_0005BB02: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0xE4C);
    edx = MEM32(ecx + 0xE50);
    MEM32(ecx + 0xE54) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0xE50);
    edx = MEM32(ecx + 0xE4C);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0005BB3A; /* je: equal / zero */

loc_0005BB34: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0005BB3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005BB38u); } /* indirect call */
    }

loc_0005BB3A: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFF120u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFF120u;
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
    if (CMP_NE(_fa, _fb)) goto loc_0005BB02; /* jne: not equal / not zero */

loc_0005BB57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005BB60
 * Original: 0x0005BB60 - 0x0005BC77 (279 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005BB60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005BB60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2414C8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x0005BB85u); RECOMP_ABI_CALL(0x00054540u, sub_00054540); /* call 0x00054540 */

loc_0005BB85: ;
    MEM32(esi) = 0x2E32B8;
    MEM32(esi + 0x830) = 0x2E326C;
    MEM32(esi + 0x834) = 0x2E3294;
    MEM32(esi + 0x83C) = 0x2E311C;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x84C) = 0x2E3144;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esi + 0x858) = 0x2E3168;
    edi = esi + 0xAD4;
    ebp = 8;
    edi = edi;

loc_0005BBD0: ;
    ecx = edi;
    PUSH32(esp, 0x0005BBD7u); RECOMP_ABI_CALL(0x00147690u, sub_00147690); /* call 0x00147690 */

loc_0005BBD7: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x6C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0005BBD0; /* jne: not equal / not zero */

loc_0005BBDD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 0x14);
    MEMF(esi + 0xE48) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE44) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xE4C) = ebx;
    MEM32(esi + 0xE50) = ebx;
    MEM32(esi + 0xE54) = ebx;
    MEM8(esi + 0xABC) = LO8(ebx);
    MEM32(esi + 0xAC0) = ebx;
    MEM32(esi + 0xEA8) = ebx;
    MEM32(esi + 0xAC8) = ebx;
    MEM32(esi + 0xE84) = ebx;
    MEM32(esi + 0xE88) = ebx;
    MEMF(esi + 0xAC4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xECC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xEC8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xEC4) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    MEM32(esi + 0xAB8) = ebx;
    MEM8(esi + 0xE40) = LO8(ebx);
    MEMF(esi + 0xED0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xED4) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0005BC80
 * Original: 0x0005BC80 - 0x0005BC9E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005BC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005BC80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0005BC88u); RECOMP_ABI_CALL(0x0005A8C0u, sub_0005A8C0); /* call 0x0005A8C0 */

loc_0005BC88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005BC98; /* je: equal / zero */

loc_0005BC8F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0005BC95u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0005BC95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005BC98: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005BCA0
 * Original: 0x0005BCA0 - 0x0005BF28 (648 bytes, 149 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005BCA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005BCA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0005BCAFu); RECOMP_ABI_CALL(0x00050A50u, sub_00050A50); /* call 0x00050A50 */

loc_0005BCAF: ;
    MEM32(esi + 0x204) = 0x1D;
    eax = MEM32(0x3C04A0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC3C67997u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC3C67997u (32-bit) */
    edi = 2;
    if (CMP_A(_fa, _fb)) goto loc_0005BCF8; /* ja: above (unsigned >) */

loc_0005BCCC: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0005BCF0; /* je: equal / zero */

loc_0005BCCE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x707E723D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x707E723D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005BCE4; /* je: equal / zero */

loc_0005BCD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB5D9D774u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB5D9D774u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005BD1C; /* jne: not equal / not zero */

loc_0005BCDC: ;
    MEM32(esi + 0xAB8) = ebx;
    goto loc_0005BD1C;

loc_0005BCE4: ;
    MEM32(esi + 0xAB8) = 1;
    goto loc_0005BD1C;

loc_0005BCF0: ;
    MEM32(esi + 0xAB8) = edi;
    goto loc_0005BD1C;

loc_0005BCF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD46EB4C7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD46EB4C7u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005BD12; /* je: equal / zero */

loc_0005BCFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE8E4793Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE8E4793Eu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005BD1C; /* jne: not equal / not zero */

loc_0005BD06: ;
    MEM32(esi + 0xAB8) = 4;
    goto loc_0005BD1C;

loc_0005BD12: ;
    MEM32(esi + 0xAB8) = 3;

loc_0005BD1C: ;
    ecx = MEM32(esi + 0x9C);
    edx = esi + 0x3E4;
    MEM32(esi + 0x3F8) = ecx;
    PUSH32(esp, edx);
    ecx = 0x37E158;
    MEM32(esi + 0x440) = esi;
    PUSH32(esp, 0x0005BD3Fu); RECOMP_ABI_CALL(0x001543C0u, sub_001543C0); /* call 0x001543C0 */

loc_0005BD3F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi + 0x7B8) = ebx;
    MEM32(esi + 0x7A0) = ebx;
    MEM32(esi + 0x7F4) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x3D8); PUSH32(esp, 0x0005BD5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005BD56u); } /* indirect call */
    }

loc_0005BD5C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2F27C138);
    ecx = esi;
    MEM8(esi + 0xA88) = LO8(ebx);
    MEM32(esi + 0xA8C) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(edx + 0x3AC); PUSH32(esp, 0x0005BD7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005BD75u); } /* indirect call */
    }

loc_0005BD7B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi + 0x7C8) = ebx;
    MEM32(esi + 0x7BC) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x3DC); PUSH32(esp, 0x0005BD92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005BD8Cu); } /* indirect call */
    }

loc_0005BD92: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB75F39D1u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3B4); PUSH32(esp, 0x0005BDA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005BD9Bu); } /* indirect call */
    }

loc_0005BDA1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2631F805);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3B4); PUSH32(esp, 0x0005BDB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005BDAAu); } /* indirect call */
    }

loc_0005BDB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3336D20E);
    ecx = esi;
    MEM32(esi + 0xA7C) = ebx;
    MEM32(esi + 0x970) = ebx;
    PUSH32(esp, 0x0005BDCAu); RECOMP_ABI_CALL(0x0005A220u, sub_0005A220); /* call 0x0005A220 */

loc_0005BDCA: ;
    ecx = MEM32(esi + 0x970);
    edx = MEM32(esi + 0x58);
    MEM32(esi + 0x978) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esi + 0xA84) = LO8(ebx);
    MEM32(esi + 0x974) = ebx;
    MEM32(esi + 0xAB4) = ebx;
    MEM32(esi + 0xE34) = ebx;
    PUSH32(esp, 0x0005BDF9u); RECOMP_ABI_CALL(0x00057C30u, sub_00057C30); /* call 0x00057C30 */

loc_0005BDF9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005BDFFu); RECOMP_ABI_CALL(0x0005B420u, sub_0005B420); /* call 0x0005B420 */

loc_0005BDFF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esi + 0xAB8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(esi + 0x6A4) = LO8(ebx);
    MEM32(esi + 0xA80) = ebx;
    MEM8(esi + 0xE40) = LO8(ebx);
    MEM8(esi + 0xE58) = LO8(ebx);
    MEMF(esi + 0xE78) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE7C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xEB8) = ebx;
    MEM32(esi + 0xEBC) = ebx;
    MEM8(esi + 0xEC0) = LO8(ebx);
    MEMF(esi + 0xE5C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE60) = xmm0.f[0]; /* movss */
    MEM8(esi + 0xE64) = LO8(ebx);
    MEM32(esi + 0xE68) = ebx;
    MEM8(esi + 0xE59) = LO8(ebx);
    MEM32(esi + 0xEA4) = ebx;
    MEM8(esi + 0xE74) = LO8(ebx);
    MEM8(esi + 0xABC) = LO8(ebx);
    if ((_fa == 0)) goto loc_0005BE98; /* je: equal / zero */

loc_0005BE7A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0005BE8C; /* je: equal / zero */

loc_0005BE7D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0005BEA2; /* jne: not equal / not zero */

loc_0005BE80: ;
    MEM32(esi + 0x7F4) = 0x126A1C9E;
    goto loc_0005BEA2;

loc_0005BE8C: ;
    MEM32(esi + 0x7F4) = 0x628048A0;
    goto loc_0005BEA2;

loc_0005BE98: ;
    MEM32(esi + 0x7F4) = 0xD091583Fu;

loc_0005BEA2: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esi + 0xAC0) = 0x1F4;
    MEM32(esi + 0xEA8) = ebx;
    MEM8(esi + 0xE73) = LO8(ebx);
    MEMF(esi + 0xACC) = xmm0.f[0]; /* movss */
    MEM8(esi + 0xAD0) = LO8(ebx);
    MEM8(esi + 0xAD1) = LO8(ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0005BED6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005BED0u); } /* indirect call */
    }

loc_0005BED6: ;
    MEM32(eax + 0x14) = MEM32(eax + 0x14) | edi;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esi + 0x58);
    edi = esi + 0x1D8;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0005BEEAu); RECOMP_ABI_CALL(0x001F5200u, sub_001F5200); /* call 0x001F5200 */

loc_0005BEEA: ;
    edx = esi + 0xB0;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0005BEF8u); RECOMP_ABI_CALL(0x001F3CE0u, sub_001F3CE0); /* call 0x001F3CE0 */

loc_0005BEF8: ;
    SET_LO8(ecx, MEM8(edi + 0x24));
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(eax, LO8(ecx));
    MEM8(edi + 0x24) = LO8(ecx);
    SET_LO8(eax, LO8(eax) | 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edi + 0x24) = LO8(eax);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0005BF0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005BF0Cu); } /* indirect call */
    }

loc_0005BF0F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, edi);
    MEMF(esi + 0xE48) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE44) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005BF30
 * Original: 0x0005BF30 - 0x0005C099 (361 bytes, 100 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005BF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005BF30: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xA88));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005C095; /* jne: not equal / not zero */

loc_0005BF41: ;
    eax = MEM32(esi + 0x7A0);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C094; /* je: equal / zero */

loc_0005BF54: ;
    PUSH32(esp, 0x0005BF59u); RECOMP_ABI_CALL(0x0005A610u, sub_0005A610); /* call 0x0005A610 */

loc_0005BF59: ;
    eax = MEM32(esi + 0x7A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005BFA0; /* je: equal / zero */

loc_0005BF63: ;
    _fa = (uint32_t)(MEM8(eax + 0x190)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x190), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005BF78; /* je: equal / zero */

loc_0005BF6C: ;
    MEM32(esi + 0xA90) = 0xA61ECB02u;
    goto loc_0005BFAA;

loc_0005BF78: ;
    PUSH32(esp, 0xDD626827u);
    ecx = esi;
    PUSH32(esp, 0x0005BF84u); RECOMP_ABI_CALL(0x00057830u, sub_00057830); /* call 0x00057830 */

loc_0005BF84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005BF94; /* je: equal / zero */

loc_0005BF88: ;
    MEM32(esi + 0xA90) = 0xFEAF73D8u;
    goto loc_0005BFAA;

loc_0005BF94: ;
    MEM32(esi + 0xA90) = 0xDD626827u;
    goto loc_0005BFAA;

loc_0005BFA0: ;
    MEM32(esi + 0xA90) = 0;

loc_0005BFAA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005BFD4; /* je: equal / zero */

loc_0005BFAE: ;
    ecx = edi;
    PUSH32(esp, 0x0005BFB5u); RECOMP_ABI_CALL(0x00030B50u, sub_00030B50); /* call 0x00030B50 */

loc_0005BFB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005BFC5; /* jne: not equal / not zero */

loc_0005BFB9: ;
    PUSH32(esp, 0xA61ECB02u);
    ecx = edi;
    PUSH32(esp, 0x0005BFC5u); RECOMP_ABI_CALL(0x00030B60u, sub_00030B60); /* call 0x00030B60 */

loc_0005BFC5: ;
    ecx = edi;
    PUSH32(esp, 0x0005BFCCu); RECOMP_ABI_CALL(0x00030B50u, sub_00030B50); /* call 0x00030B50 */

loc_0005BFCC: ;
    MEM32(esi + 0xA94) = eax;
    goto loc_0005BFDE;

loc_0005BFD4: ;
    MEM32(esi + 0xA94) = 0;

loc_0005BFDE: ;
    ecx = MEM32(esi + 0xA90);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005BFFE; /* je: equal / zero */

loc_0005BFEA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFEAF73D8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFEAF73D8u (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0x5B04662B;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x7D396983) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7D396983;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005BFFE: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C01C; /* je: equal / zero */

loc_0005C006: ;
    eax = MEM32(esi + 0xA94);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0005C017u); RECOMP_ABI_CALL(0x0005B130u, sub_0005B130); /* call 0x0005B130 */

loc_0005C017: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0005C01C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C07C; /* je: equal / zero */

loc_0005C020: ;
    ecx = MEM32(esi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C038; /* je: equal / zero */

loc_0005C02A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005C034u); RECOMP_ABI_CALL(0x00061E50u, sub_00061E50); /* call 0x00061E50 */

loc_0005C034: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005C054; /* jne: not equal / not zero */

loc_0005C038: ;
    ecx = MEM32(esi + 0xA94);
    edx = MEM32(esi + 0xA90);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0005C04Fu); RECOMP_ABI_CALL(0x0005B130u, sub_0005B130); /* call 0x0005B130 */

loc_0005C04F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0005C054: ;
    ecx = MEM32(esi + 0x6B0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0005C063u); RECOMP_ABI_CALL(0x00061180u, sub_00061180); /* call 0x00061180 */

loc_0005C063: ;
    POP32(esp, edi);
    MEM32(esi + 0xA98) = eax;
    MEM8(esi + 0xA88) = 1;
    MEM8(esi + 0xA89) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0005C07C: ;
    MEM32(esi + 0xA98) = 0;
    MEM8(esi + 0xA88) = 1;
    MEM8(esi + 0xA89) = 1;

loc_0005C094: ;
    POP32(esp, edi);

loc_0005C095: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0005C0A0
 * Original: 0x0005C0A0 - 0x0005C20C (364 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005C0A0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xA89));
    ecx = MEM32(esi + 0x6B0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_0005C1C7; /* je: equal / zero */

loc_0005C0BF: ;
    PUSH32(esp, 0x0005C0C4u); RECOMP_ABI_CALL(0x000612C0u, sub_000612C0); /* call 0x000612C0 */

loc_0005C0C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005C0E3; /* jne: not equal / not zero */

loc_0005C0C8: ;
    ecx = MEM32(esi + 0x6B0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0005C0D7u); RECOMP_ABI_CALL(0x00061180u, sub_00061180); /* call 0x00061180 */

loc_0005C0D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xA98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xA98) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C206; /* je: equal / zero */

loc_0005C0E3: ;
    eax = MEM32(esi + 0xA94);
    ecx = MEM32(esi + 0xA90);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0005C0F9u); RECOMP_ABI_CALL(0x0005B130u, sub_0005B130); /* call 0x0005B130 */

loc_0005C0F9: ;
    eax = MEM32(esi + 0xA94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005C10F; /* jne: not equal / not zero */

loc_0005C103: ;
    MEM8(esi + 0xA88) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0005C10F: ;
    ecx = MEM32(esi + 0x6B0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFEAF73D8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFEAF73D8u (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esp + 8) = ebx;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM8(esp + 0x18) = LO8(ebx);
    MEM8(esp + 0x19) = LO8(ebx);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0xDCEB5377u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x57AAF79C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x57AAF79C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    eax = edx;
    MEM8(esp + 0x1B) = LO8(ebx);
    MEM8(esp + 0x1C) = LO8(ebx);
    MEM8(esp + 0x1D) = LO8(ebx);
    MEM8(esp + 0x1E) = LO8(ebx);
    MEM8(esp + 0x1F) = LO8(ebx);
    MEM8(esp + 0x20) = LO8(ebx);
    MEM8(esp + 0x21) = LO8(ebx);
    MEM8(esp + 0x22) = LO8(ebx);
    MEM8(esp + 0x23) = LO8(ebx);
    MEM8(esp + 0x1A) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0005C184; /* je: equal / zero */

loc_0005C177: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005C184u); RECOMP_ABI_CALL(0x00061E50u, sub_00061E50); /* call 0x00061E50 */

loc_0005C184: ;
    ecx = MEM32(esi + 0x6B0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0005C193u); RECOMP_ABI_CALL(0x00061180u, sub_00061180); /* call 0x00061180 */

loc_0005C193: ;
    MEM32(esi + 0xA98) = eax;
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esi + 0xA89) = LO8(ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0005C1A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C1A3u); } /* indirect call */
    }

loc_0005C1A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C206; /* je: equal / zero */

loc_0005C1AD: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0005C1B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C1B1u); } /* indirect call */
    }

loc_0005C1B7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x0005C1C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C1BBu); } /* indirect call */
    }

loc_0005C1C1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0005C1C7: ;
    PUSH32(esp, 0x0005C1CCu); RECOMP_ABI_CALL(0x000612C0u, sub_000612C0); /* call 0x000612C0 */

loc_0005C1CC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005C1E7; /* jne: not equal / not zero */

loc_0005C1D0: ;
    ecx = MEM32(esi + 0x6B0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0005C1DFu); RECOMP_ABI_CALL(0x00061180u, sub_00061180); /* call 0x00061180 */

loc_0005C1DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xA98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xA98) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C206; /* je: equal / zero */

loc_0005C1E7: ;
    eax = MEM32(esi + 0x7A0);
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esi + 0xA88) = LO8(ebx);
    PUSH32(esp, 0x0005C1FBu); RECOMP_ABI_CALL(0x000595F0u, sub_000595F0); /* call 0x000595F0 */

loc_0005C1FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005C206; /* jne: not equal / not zero */

loc_0005C1FF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0005C206u); RECOMP_ABI_CALL(0x00059610u, sub_00059610); /* call 0x00059610 */

loc_0005C206: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0005C210
 * Original: 0x0005C210 - 0x0005C34D (317 bytes, 94 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005C210: ;
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0005C223u); RECOMP_ABI_CALL(0x001EB010u, sub_001EB010); /* call 0x001EB010 */

loc_0005C223: ;
    PUSH32(esp, 0x2DC8F4);
    PUSH32(esp, 0x2DD3E8);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0005C236u); RECOMP_ABI_CALL(0x001EAFB0u, sub_001EAFB0); /* call 0x001EAFB0 */

loc_0005C236: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0005C244u); RECOMP_ABI_CALL(0x001EB080u, sub_001EB080); /* call 0x001EB080 */

loc_0005C244: ;
    edx = MEM32(esp + 0x818);
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6438E0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = 0x4031B0;
    PUSH32(esp, 0x0005C264u); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_0005C264: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C340; /* je: equal / zero */

loc_0005C26E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0005C275u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C272u); } /* indirect call */
    }

loc_0005C275: ;
    edx = MEM32(0x30C24C);
    ecx = MEM32(0x30C248);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005C340; /* jne: not equal / not zero */

loc_0005C28B: ;
    SET_LO8(eax, MEM8(edi + 0xA88));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C2BF; /* je: equal / zero */

loc_0005C295: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x0005C29Eu); RECOMP_ABI_CALL(0x0004CB90u, sub_0004CB90); /* call 0x0004CB90 */

loc_0005C29E: ;
    ecx = edi;
    PUSH32(esp, 0x0005C2A5u); RECOMP_ABI_CALL(0x0005C0A0u, sub_0005C0A0); /* call 0x0005C0A0 */

loc_0005C2A5: ;
    SET_LO8(eax, MEM8(edi + 0xA88));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C2BF; /* je: equal / zero */

loc_0005C2AF: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x0005C2B8u); RECOMP_ABI_CALL(0x0004CB90u, sub_0004CB90); /* call 0x0004CB90 */

loc_0005C2B8: ;
    ecx = edi;
    PUSH32(esp, 0x0005C2BFu); RECOMP_ABI_CALL(0x0005C0A0u, sub_0005C0A0); /* call 0x0005C0A0 */

loc_0005C2BF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1778D4D3);
    ecx = esi;
    PUSH32(esp, 0x0005C2CCu); RECOMP_ABI_CALL(0x00030B60u, sub_00030B60); /* call 0x00030B60 */

loc_0005C2CC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1DC); PUSH32(esp, 0x0005C2D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C2D0u); } /* indirect call */
    }

loc_0005C2D6: ;
    SET_LO8(edx, MEM8(esi + 0x190));
    eax = MEM32(esi);
    SET_LO8(edx, LO8(edx) | 4);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = esi;
    MEM8(esi + 0x190) = LO8(edx);
    MEM8(esi + 0x191) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1CC); PUSH32(esp, 0x0005C2F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C2F0u); } /* indirect call */
    }

loc_0005C2F6: ;
    ecx = esi;
    PUSH32(esp, 0x0005C2FDu); RECOMP_ABI_CALL(0x00030B50u, sub_00030B50); /* call 0x00030B50 */

loc_0005C2FD: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0005C306u); RECOMP_ABI_CALL(0x000593E0u, sub_000593E0); /* call 0x000593E0 */

loc_0005C306: ;
    ebx = MEM32(esp + 0x820);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0005C316u); RECOMP_ABI_CALL(0x0005BF30u, sub_0005BF30); /* call 0x0005BF30 */

loc_0005C316: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0005C333; /* jne: not equal / not zero */

loc_0005C31C: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x0005C326u); RECOMP_ABI_CALL(0x0008C7E0u, sub_0008C7E0); /* call 0x0008C7E0 */

loc_0005C326: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x0005C333u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C32Du); } /* indirect call */
    }

loc_0005C333: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0005C340: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x80C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0005C350
 * Original: 0x0005C350 - 0x0005C3AF (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005C350: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xEE0);
    PUSH32(esp, 0x0005C364u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0005C364: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C374; /* je: equal / zero */

loc_0005C36B: ;
    ecx = eax;
    PUSH32(esp, 0x0005C372u); RECOMP_ABI_CALL(0x0005BB60u, sub_0005BB60); /* call 0x0005BB60 */

loc_0005C372: ;
    goto loc_0005C376;

loc_0005C374: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0005C376: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0xE4C;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0xC) = edi;
    MEM32(ecx) = edx;
    MEM32(ecx + 8) = eax;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    MEM32(edx + 4) = ecx;
    edx = MEM32(ecx + 4);
    MEM32(edx) = ecx;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xEE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xEE0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005C3B0
 * Original: 0x0005C3B0 - 0x0005C8EF (1343 bytes, 352 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C3B0(void)
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

loc_0005C3B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2414F0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x14) = 0x2E1580;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x3C) = ebp;
    MEM32(esp + 0x18) = 0x2E3714;
    _fa = (uint32_t)(MEM32(esi + 0xEB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xEB8), ebp (32-bit) */
    MEM8(esp + 0x3C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0005C463; /* je: equal / zero */

loc_0005C3F0: ;
    PUSH32(esp, 0x0005C3F5u); RECOMP_ABI_CALL(0x00178950u, sub_00178950); /* call 0x00178950 */

loc_0005C3F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC2CBD863u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC2CBD863u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005C463; /* jne: not equal / not zero */

loc_0005C3FC: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0005C406u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C400u); } /* indirect call */
    }

loc_0005C406: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0005C40Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C40Au); } /* indirect call */
    }

loc_0005C40D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    eax = MEM32(esi);
    ecx = esi;
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x308); PUSH32(esp, 0x0005C41Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C416u); } /* indirect call */
    }

loc_0005C41C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C432; /* je: equal / zero */

loc_0005C420: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2A8); PUSH32(esp, 0x0005C42Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C424u); } /* indirect call */
    }

loc_0005C42A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C432; /* je: equal / zero */

loc_0005C42E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0005C434;

loc_0005C432: ;
    SET_LO8(eax, 1);

loc_0005C434: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005C45D; /* jne: not equal / not zero */

loc_0005C438: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005C45D; /* jne: not equal / not zero */

loc_0005C43C: ;
    eax = MEM32(esi + 0xEBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0005C44F; /* jle: less or equal (signed <=) */

loc_0005C446: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xEBC) = eax;
    goto loc_0005C463;

loc_0005C44F: ;
    eax = MEM32(esi + 0xEB8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0005C45Du); RECOMP_ABI_CALL(0x0005B9B0u, sub_0005B9B0); /* call 0x0005B9B0 */

loc_0005C45D: ;
    MEM32(esi + 0xEB8) = ebp;

loc_0005C463: ;
    SET_LO8(eax, MEM8(esi + 0xEC0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C4E7; /* je: equal / zero */

loc_0005C46D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x80000000u);
    ecx = 0x35CFF0;
    PUSH32(esp, 0x0005C47Eu); RECOMP_ABI_CALL(0x000F26A0u, sub_000F26A0); /* call 0x000F26A0 */

loc_0005C47E: ;
    _fa = (uint32_t)(MEM32(esi + 0xEB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xEB8), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005C4E7; /* jne: not equal / not zero */

loc_0005C486: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0005C490u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C48Au); } /* indirect call */
    }

loc_0005C490: ;
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(0x643844);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005C49Fu); RECOMP_ABI_CALL(0x00013A20u, sub_00013A20); /* call 0x00013A20 */

loc_0005C49F: ;
    edx = MEM32(esi + 0xEBC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0005C4CE; /* jge: greater or equal (signed >=) */

loc_0005C4A9: ;
    eax = edx + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esi + 0xEBC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0005C4E7; /* jne: not equal / not zero */

loc_0005C4B6: ;
    PUSH32(esp, 0x80000000u);
    ecx = 0x35CFF0;
    PUSH32(esp, 0x0005C4C5u); RECOMP_ABI_CALL(0x000F26D0u, sub_000F26D0); /* call 0x000F26D0 */

loc_0005C4C5: ;
    MEM8(esi + 0xEC0) = 0;
    goto loc_0005C4E7;

loc_0005C4CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C4E7; /* je: equal / zero */

loc_0005C4D2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0005C4D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C4D6u); } /* indirect call */
    }

loc_0005C4D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C4E7; /* je: equal / zero */

loc_0005C4DD: ;
    MEM32(esi + 0xEBC) = 0xFFFFFFF6u;

loc_0005C4E7: ;
    ecx = esi;
    PUSH32(esp, 0x0005C4EEu); RECOMP_ABI_CALL(0x0005A9D0u, sub_0005A9D0); /* call 0x0005A9D0 */

loc_0005C4EE: ;
    SET_LO8(eax, MEM8(esi + 0xA88));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C4FF; /* je: equal / zero */

loc_0005C4F8: ;
    ecx = esi;
    PUSH32(esp, 0x0005C4FFu); RECOMP_ABI_CALL(0x0005C0A0u, sub_0005C0A0); /* call 0x0005C0A0 */

loc_0005C4FF: ;
    ebx = MEM32(esp + 0x44);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0005C50Bu); RECOMP_ABI_CALL(0x000538F0u, sub_000538F0); /* call 0x000538F0 */

loc_0005C50B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005C523; /* jne: not equal / not zero */

loc_0005C50F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x28);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0005C523: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x44); /* comiss */
    if ((_fca >= _fcb)) goto loc_0005C8D9; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esp + 0x44)) */

loc_0005C531: ;
    ecx = esi;
    PUSH32(esp, 0x0005C538u); RECOMP_ABI_CALL(0x0005A9D0u, sub_0005A9D0); /* call 0x0005A9D0 */

loc_0005C538: ;
    _fa = (uint32_t)(MEM32(0x320790)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x320790), ebp (32-bit) */
    SET_LO8(eax, MEM8(esi + 0xA84));
    if (CMP_LE(_fas, _fbs)) goto loc_0005C562; /* jle: less or equal (signed <=) */

loc_0005C546: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005C579; /* jne: not equal / not zero */

loc_0005C54A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0xA314C3A8u);
    ecx = esi;
    PUSH32(esp, 0x0005C559u); RECOMP_ABI_CALL(0x0005A220u, sub_0005A220); /* call 0x0005A220 */

loc_0005C559: ;
    MEM8(esi + 0xA84) = 1;
    goto loc_0005C579;

loc_0005C562: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C579; /* je: equal / zero */

loc_0005C566: ;
    PUSH32(esp, 0xA314C3A8u);
    ecx = esi;
    PUSH32(esp, 0x0005C572u); RECOMP_ABI_CALL(0x0005A4B0u, sub_0005A4B0); /* call 0x0005A4B0 */

loc_0005C572: ;
    MEM8(esi + 0xA84) = 0;

loc_0005C579: ;
    PUSH32(esp, edi);
    edi = esi + 0xB0;
    PUSH32(esp, edi);
    ecx = esi + 0x3C;
    PUSH32(esp, 0x0005C589u); RECOMP_ABI_CALL(0x001F5100u, sub_001F5100); /* call 0x001F5100 */

loc_0005C589: ;
    PUSH32(esp, edi);
    ecx = esi + 0x1D8;
    PUSH32(esp, 0x0005C595u); RECOMP_ABI_CALL(0x001F3CE0u, sub_001F3CE0); /* call 0x001F3CE0 */

loc_0005C595: ;
    edx = MEM32(esi);
    eax = esi + 0x60;
    ecx = esi;
    MEM32(esi + 0x1F4) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0005C5A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C5A2u); } /* indirect call */
    }

loc_0005C5A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C683; /* je: equal / zero */

loc_0005C5B0: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0005C5BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C5B4u); } /* indirect call */
    }

loc_0005C5BA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0005C5C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C5BEu); } /* indirect call */
    }

loc_0005C5C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C683; /* je: equal / zero */

loc_0005C5C9: ;
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005C5D3u); RECOMP_ABI_CALL(0x000976A0u, sub_000976A0); /* call 0x000976A0 */

loc_0005C5D3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005C5E4; /* jne: not equal / not zero */

loc_0005C5D7: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0005C5DFu); RECOMP_ABI_CALL(0x00058650u, sub_00058650); /* call 0x00058650 */

loc_0005C5DF: ;
    goto loc_0005C66C;

loc_0005C5E4: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005C5F3u); RECOMP_ABI_CALL(0x000310A0u, sub_000310A0); /* call 0x000310A0 */

loc_0005C5F3: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    ecx = esp + 0x20;
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0005C625u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_0005C625: ;
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    ecx = esp + 0x2C;
    MEMF(esi + 0xE78) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005C63Eu); RECOMP_ABI_CALL(0x000310A0u, sub_000310A0); /* call 0x000310A0 */

loc_0005C63E: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    PUSH32(esp, 0x0005C646u); RECOMP_ABI_CALL(0x00237BB4u, sub_00237BB4); /* call 0x00237BB4 */

loc_0005C646: ;
    eax = MEM32(esp + 0x14);
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    ecx = 0x4140E8;
    edx = MEM32(esp + 0x10);
    MEMF(esi + 0xE7C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005C666u); RECOMP_ABI_CALL(0x000975A0u, sub_000975A0); /* call 0x000975A0 */

loc_0005C666: ;
    MEM32(esi + 0xE84) = ebp;

loc_0005C66C: ;
    _fa = (uint32_t)(MEM32(esi + 0xE88)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xE88), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C683; /* je: equal / zero */

loc_0005C674: ;
    SET_LO8(eax, MEM8(0x3BE240));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005C683; /* jne: not equal / not zero */

loc_0005C67D: ;
    MEM32(esi + 0xE88) = ebp;

loc_0005C683: ;
    PUSH32(esp, 0x0005C688u); RECOMP_ABI_CALL(0x0010C220u, sub_0010C220); /* call 0x0010C220 */

loc_0005C688: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005C716; /* jne: not equal / not zero */

loc_0005C690: ;
    ecx = MEM32(esi + 0x7A0);
    PUSH32(esp, ecx);
    ecx = 0x30C254;
    PUSH32(esp, 0x0005C6A1u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_0005C6A1: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C716; /* je: equal / zero */

loc_0005C6A7: ;
    _fa = (uint32_t)(MEM32(edi + 0x268)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x268), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C6DA; /* je: equal / zero */

loc_0005C6B0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0005C6BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C6B4u); } /* indirect call */
    }

loc_0005C6BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C6DA; /* je: equal / zero */

loc_0005C6BE: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0005C6C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C6C2u); } /* indirect call */
    }

loc_0005C6C8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x0005C6D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C6CCu); } /* indirect call */
    }

loc_0005C6D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C6DA; /* je: equal / zero */

loc_0005C6D6: ;
    PUSH32(esp, 2);
    goto loc_0005C70B;

loc_0005C6DA: ;
    _fa = (uint32_t)(MEM32(edi + 0x268)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x268), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C716; /* je: equal / zero */

loc_0005C6E3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0005C6EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C6E7u); } /* indirect call */
    }

loc_0005C6ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C716; /* je: equal / zero */

loc_0005C6F1: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0005C6FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C6F5u); } /* indirect call */
    }

loc_0005C6FB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x0005C705u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C6FFu); } /* indirect call */
    }

loc_0005C705: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005C716; /* jne: not equal / not zero */

loc_0005C709: ;
    PUSH32(esp, 1);

loc_0005C70B: ;
    ecx = edi + 0x24C;
    PUSH32(esp, 0x0005C716u); RECOMP_ABI_CALL(0x00150D90u, sub_00150D90); /* call 0x00150D90 */

loc_0005C716: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE8C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x98); /* ucomiss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    POP32(esp, edi);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0005C74B; /* jnp: not parity */

loc_0005C72F: ;
    eax = MEM32(esi + 0x98);
    MEM32(esi + 0xE8C) = eax;
    MEMF(esi + 0xE90) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xE94) = xmm1.f[0]; /* movss */

loc_0005C74B: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE8C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005C7B5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0005C758: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x170)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC3C4); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xE8C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005C7B5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0xE8C)) */

loc_0005C771: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0xE94); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005C79F; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(esi + 0xE94)) */

loc_0005C77A: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0xE8C); /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC3E0); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_0005C7AD;

loc_0005C79F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE94)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x44); /* subss */

loc_0005C7AD: ;
    MEMF(esi + 0xE94) = xmm0.f[0]; /* movss */

loc_0005C7B5: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xE90)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi + 0xE90) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xED4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    PUSH32(esp, ebx);
    ecx = esi;
    MEMF(esi + 0xED4) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0005C7EBu); RECOMP_ABI_CALL(0x00058100u, sub_00058100); /* call 0x00058100 */

loc_0005C7EB: ;
    ecx = MEM32(esi + 0x6B0);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0005C7F9u); RECOMP_ABI_CALL(0x000611E0u, sub_000611E0); /* call 0x000611E0 */

loc_0005C7F9: ;
    eax = eax >> 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005C807; /* je: equal / zero */

loc_0005C800: ;
    ecx = esi;
    PUSH32(esp, 0x0005C807u); RECOMP_ABI_CALL(0x0005A610u, sub_0005A610); /* call 0x0005A610 */

loc_0005C807: ;
    _fa = (uint32_t)(MEM8(esi + 0xE9C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE9C), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005C827; /* jne: not equal / not zero */

loc_0005C810: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE98)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x44); /* addss */
    MEM8(esi + 0xE9C) = 0;
    goto loc_0005C82A;

loc_0005C827: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0005C82A: ;
    edx = MEM32(esi);
    ecx = esi;
    MEMF(esi + 0xE98) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0005C83Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C836u); } /* indirect call */
    }

loc_0005C83C: ;
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(0x643844);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005C84Bu); RECOMP_ABI_CALL(0x00013A20u, sub_00013A20); /* call 0x00013A20 */

loc_0005C84B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C856; /* je: equal / zero */

loc_0005C84F: ;
    ecx = eax;
    PUSH32(esp, 0x0005C856u); RECOMP_ABI_CALL(0x001F4060u, sub_001F4060); /* call 0x001F4060 */

loc_0005C856: ;
    _fa = (uint32_t)(MEM32(esi + 0xA7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xA7C), ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0005C87C; /* jle: less or equal (signed <=) */

loc_0005C85E: ;
    PUSH32(esp, 0x0005C863u); RECOMP_ABI_CALL(0x00178950u, sub_00178950); /* call 0x00178950 */

loc_0005C863: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC739FD0Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC739FD0Fu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C87C; /* je: equal / zero */

loc_0005C86A: ;
    PUSH32(esp, 0xC739FD0Fu);
    PUSH32(esp, 0x4249D707);
    PUSH32(esp, 0x0005C879u); RECOMP_ABI_CALL(0x0017A0A0u, sub_0017A0A0); /* call 0x0017A0A0 */

loc_0005C879: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005C87C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE44)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x44); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0xE44) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005C8D9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0005C89A: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xE48)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005C8C9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0005C8A7: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC08C); /* subss */
    MEMF(esi + 0xE48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC350)); /* movss */
    MEMF(esi + 0xE44) = xmm0.f[0]; /* movss */
    goto loc_0005C8D9;

loc_0005C8C9: ;
    MEMF(esi + 0xE48) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xE44) = xmm1.f[0]; /* movss */

loc_0005C8D9: ;
    ecx = MEM32(esp + 0x34);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0005C8F0
 * Original: 0x0005C8F0 - 0x0005C945 (85 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005C8F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x7B8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C941; /* je: equal / zero */

loc_0005C8FD: ;
    PUSH32(esp, ebx);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0005C925; /* jle: less or equal (signed <=) */

loc_0005C907: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x7A0);
    edx = esi + 0x7A4;

loc_0005C914: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C922; /* je: equal / zero */

loc_0005C918: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005C914; /* jl: less (signed <) */

loc_0005C920: ;
    goto loc_0005C924;

loc_0005C922: ;
    ebx = eax;

loc_0005C924: ;
    POP32(esp, edi);

loc_0005C925: ;
    eax = ebx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0005C938u); RECOMP_ABI_CALL(0x0004CF60u, sub_0004CF60); /* call 0x0004CF60 */

loc_0005C938: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0005C940u); RECOMP_ABI_CALL(0x0005BF30u, sub_0005BF30); /* call 0x0005BF30 */

loc_0005C940: ;
    POP32(esp, ebx);

loc_0005C941: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005C950
 * Original: 0x0005C950 - 0x0005C972 (34 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C950(void)
{

loc_0005C950: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xA8C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0005C966u); RECOMP_ABI_CALL(0x0004CF60u, sub_0004CF60); /* call 0x0004CF60 */

loc_0005C966: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0005C96Eu); RECOMP_ABI_CALL(0x0005BF30u, sub_0005BF30); /* call 0x0005BF30 */

loc_0005C96E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005C980
 * Original: 0x0005C980 - 0x0005CA65 (229 bytes, 67 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005C980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005C980: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x974);
    ebx = MEM32(esi + eax * 4 + 0x8F0);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x7A0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x7A0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005CA60; /* je: equal / zero */

loc_0005C99D: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x1C4); PUSH32(esp, 0x0005C9A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005C9A2u); } /* indirect call */
    }

loc_0005C9A8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005CA60; /* je: equal / zero */

loc_0005C9B0: ;
    SET_LO8(eax, MEM8(esi + 0xA88));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005CA60; /* jne: not equal / not zero */

loc_0005C9BE: ;
    edx = MEM32(esi + 0x7B8);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0005C9F0; /* jle: less or equal (signed <=) */

loc_0005C9CF: ;
    ecx = esi + 0x7A4;

loc_0005C9D5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005C9E9; /* je: equal / zero */

loc_0005C9D9: ;
    ebp = MEM32(esi + 0x7B8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005C9D5; /* jl: less (signed <) */

loc_0005C9E7: ;
    goto loc_0005C9F0;

loc_0005C9E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0005CA35; /* jne: not equal / not zero */

loc_0005C9F0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0005CA35; /* jge: greater or equal (signed >=) */

loc_0005C9F5: ;
    MEM32(esi + edx * 4 + 0x7A4) = ebx;
    eax = MEM32(esi + 0x7B8);
    ecx = MEM32(esi + eax * 4 + 0x7A4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0005CA10u); RECOMP_ABI_CALL(0x00030B60u, sub_00030B60); /* call 0x00030B60 */

loc_0005CA10: ;
    ecx = MEM32(esi + 0x7B8);
    ecx = MEM32(esi + ecx * 4 + 0x7A4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1CC); PUSH32(esp, 0x0005CA25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005CA1Fu); } /* indirect call */
    }

loc_0005CA25: ;
    eax = MEM32(esi + 0x7B8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x7B8) = eax;
    edi = eax + -1;

loc_0005CA35: ;
    eax = MEM32(esi + 0x7A0);
    _fa = (uint32_t)(MEM8(eax + 0x190)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x190), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005CA49; /* je: equal / zero */

loc_0005CA44: ;
    MEM8(esp + 0x14) = 1;

loc_0005CA49: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0005CA56u); RECOMP_ABI_CALL(0x0004CF60u, sub_0004CF60); /* call 0x0004CF60 */

loc_0005CA56: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0005CA5Eu); RECOMP_ABI_CALL(0x0005BF30u, sub_0005BF30); /* call 0x0005BF30 */

loc_0005CA5E: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0005CA60: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005CA70
 * Original: 0x0005CA70 - 0x0005CA7F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005CA70(void)
{

loc_0005CA70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0005CA7Cu); RECOMP_ABI_CALL(0x0005BF30u, sub_0005BF30); /* call 0x0005BF30 */

loc_0005CA7C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005CA80
 * Original: 0x0005CA80 - 0x0005CAEF (111 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005CA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005CA80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0005CA89u); RECOMP_ABI_CALL(0x0005B120u, sub_0005B120); /* call 0x0005B120 */

loc_0005CA89: ;
    eax = MEM32(edi + 0x970);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0005CADE; /* jle: less or equal (signed <=) */

loc_0005CA95: ;
    PUSH32(esp, esi);
    esi = edi + 0x8F0;
    /* nop */

loc_0005CAA0: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B8); PUSH32(esp, 0x0005CAAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005CAA4u); } /* indirect call */
    }

loc_0005CAAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005CAB7; /* je: equal / zero */

loc_0005CAAE: ;
    _fa = (uint32_t)(MEM32(eax + 0x1A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1A0), 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005CAD7; /* je: equal / zero */

loc_0005CAB7: ;
    eax = MEM32(edi + 0x970);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005CAA0; /* jl: less (signed <) */

loc_0005CAC5: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0005CAD2u); RECOMP_ABI_CALL(0x0005C980u, sub_0005C980); /* call 0x0005C980 */

loc_0005CAD2: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0005CAD7: ;
    MEM32(edi + 0x974) = ebx;
    POP32(esp, esi);

loc_0005CADE: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0005CAEAu); RECOMP_ABI_CALL(0x0005C980u, sub_0005C980); /* call 0x0005C980 */

loc_0005CAEA: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005CAF0
 * Original: 0x0005CAF0 - 0x0005CB52 (98 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005CAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005CAF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x7A0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005CB29; /* je: equal / zero */

loc_0005CAFE: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0005CB05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005CB02u); } /* indirect call */
    }

loc_0005CB05: ;
    edx = MEM32(0x30C25C);
    ecx = MEM32(0x30C258);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005CB29; /* jne: not equal / not zero */

loc_0005CB17: ;
    _fa = (uint32_t)(MEM32(edi + 0x1A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1A0), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005CB29; /* jne: not equal / not zero */

loc_0005CB20: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0005CB29u); RECOMP_ABI_CALL(0x0005C950u, sub_0005C950); /* call 0x0005C950 */

loc_0005CB29: ;
    PUSH32(esp, 0xDBB6CB06u);
    ecx = esi;
    PUSH32(esp, 0x0005CB35u); RECOMP_ABI_CALL(0x0005A4B0u, sub_0005A4B0); /* call 0x0005A4B0 */

loc_0005CB35: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x0005CB3Fu); RECOMP_ABI_CALL(0x0008C7E0u, sub_0008C7E0); /* call 0x0008C7E0 */

loc_0005CB3F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0005CB51; /* je: equal / zero */

loc_0005CB48: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x0005CB51u); RECOMP_ABI_CALL(0x0008BB70u, sub_0008BB70); /* call 0x0008BB70 */

loc_0005CB51: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0005CB60
 * Original: 0x0005CB60 - 0x0005CB8E (46 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005CB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005CB60: ;
    PUSH32(esp, esi);
    ecx = 0x321888;
    PUSH32(esp, 0x0005CB6Bu); RECOMP_ABI_CALL(0x0005C350u, sub_0005C350); /* call 0x0005C350 */

loc_0005CB6B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005CB8A; /* je: equal / zero */

loc_0005CB71: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0005CB7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005CB7Bu); } /* indirect call */
    }

loc_0005CB7E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1BC); PUSH32(esp, 0x0005CB89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005CB83u); } /* indirect call */
    }

loc_0005CB89: ;
    POP32(esp, edi);

loc_0005CB8A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005CB90
 * Original: 0x0005CB90 - 0x0005CD03 (371 bytes, 119 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005CB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005CB90: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x7A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005CBBC; /* je: equal / zero */

loc_0005CBA0: ;
    _fa = (uint32_t)(MEM8(eax + 0x190)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x190), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005CBBC; /* je: equal / zero */

loc_0005CBA9: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x0005CBB2u); RECOMP_ABI_CALL(0x0005C950u, sub_0005C950); /* call 0x0005C950 */

loc_0005CBB2: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3E4); PUSH32(esp, 0x0005CBBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005CBB6u); } /* indirect call */
    }

loc_0005CBBC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0005CBC7u); RECOMP_ABI_CALL(0x00059610u, sub_00059610); /* call 0x00059610 */

loc_0005CBC7: ;
    eax = MEM32(edi + 0x7B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005CCC4; /* jne: not equal / not zero */

loc_0005CBD6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x7A0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi + 0x7A4;

loc_0005CBE6: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    ebx = MEM32(esp + 0x28);
    if (CMP_EQ(_fa, _fb)) goto loc_0005CBF9; /* je: equal / zero */

loc_0005CBEE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005CBE6; /* jl: less (signed <) */

loc_0005CBF7: ;
    goto loc_0005CC21;

loc_0005CBF9: ;
    PUSH32(esp, 0xF29BCB57u);
    ecx = ebx;
    MEM32(edi + eax * 4 + 0x7A4) = ebx;
    PUSH32(esp, 0x0005CC0Cu); RECOMP_ABI_CALL(0x00030B60u, sub_00030B60); /* call 0x00030B60 */

loc_0005CC0C: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1DC); PUSH32(esp, 0x0005CC16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005CC10u); } /* indirect call */
    }

loc_0005CC16: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x3D8); PUSH32(esp, 0x0005CC21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005CC1Bu); } /* indirect call */
    }

loc_0005CC21: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x0005CC2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005CC25u); } /* indirect call */
    }

loc_0005CC2B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005CC4C; /* je: equal / zero */

loc_0005CC2F: ;
    ecx = MEM32(eax + 0x230);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0005CC4C; /* jg: greater (signed >) */

loc_0005CC39: ;
    SET_LO8(ecx, MEM8(eax + 0x238));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005CC4C; /* jne: not equal / not zero */

loc_0005CC43: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0005CC4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005CC47u); } /* indirect call */
    }

loc_0005CC4A: ;
    goto loc_0005CC99;

loc_0005CC4C: ;
    PUSH32(esp, 0xE9176764u);
    ecx = esi;
    PUSH32(esp, 0x0005CC58u); RECOMP_ABI_CALL(0x00030B60u, sub_00030B60); /* call 0x00030B60 */

loc_0005CC58: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1D8); PUSH32(esp, 0x0005CC62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005CC5Cu); } /* indirect call */
    }

loc_0005CC62: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0005CC6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005CC66u); } /* indirect call */
    }

loc_0005CC6C: ;
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x554E68AC);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0005CC81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005CC7Eu); } /* indirect call */
    }

loc_0005CC81: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0005CC8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005CC8Bu); } /* indirect call */
    }

loc_0005CC8E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0005CC96u); RECOMP_ABI_CALL(0x001FFB30u, sub_001FFB30); /* call 0x001FFB30 */

loc_0005CC96: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005CC99: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0005CCA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005CC9Du); } /* indirect call */
    }

loc_0005CCA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0005CCFC; /* je: equal / zero */

loc_0005CCA9: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0005CCB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005CCADu); } /* indirect call */
    }

loc_0005CCB3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x0005CCBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005CCB7u); } /* indirect call */
    }

loc_0005CCBD: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0005CCC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005CCEB; /* jne: not equal / not zero */

loc_0005CCC9: ;
    ecx = MEM32(edi + 0x7A0);
    PUSH32(esp, 0x0005CCD4u); RECOMP_ABI_CALL(0x00030B50u, sub_00030B50); /* call 0x00030B50 */

loc_0005CCD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF29BCB57u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF29BCB57u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005CCEB; /* jne: not equal / not zero */

loc_0005CCDB: ;
    ecx = MEM32(edi + 0x7A0);
    PUSH32(esp, 0xDD626827u);
    PUSH32(esp, 0x0005CCEBu); RECOMP_ABI_CALL(0x00030B60u, sub_00030B60); /* call 0x00030B60 */

loc_0005CCEB: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0xF29BCB57u);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0005CCFCu); RECOMP_ABI_CALL(0x000593E0u, sub_000593E0); /* call 0x000593E0 */

loc_0005CCFC: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005CD10
 * Original: 0x0005CD10 - 0x0005D1C2 (1202 bytes, 328 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0005CD10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005CD10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x28;
    edi = ecx;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x372C1990);
    ecx = 0x414150;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x30) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CD3Fu); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_0005CD3F: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3B0); PUSH32(esp, 0x0005CD49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005CD43u); } /* indirect call */
    }

loc_0005CD49: ;
    eax = MEM32(esp + 0x28);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0005CF2F; /* jle: less or equal (signed <=) */

loc_0005CD57: ;
    goto loc_0005CD60;

    /* nop */

loc_0005CD60: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x80) = LO8(ebx);
    ecx = 0xF;
    edi = esp + 0x81;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, esi);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = esp + 0x84;
    PUSH32(esp, 0x2E3244);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CD8Du); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0005CD8D: ;
    ecx = esp + 0x8C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x4C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CD9Eu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0005CD9E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CDB1u); RECOMP_ABI_CALL(0x00122060u, sub_00122060); /* call 0x00122060 */

loc_0005CDB1: ;
    PUSH32(esp, esi);
    eax = esp + 0x84;
    PUSH32(esp, 0x2E3228);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CDC4u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0005CDC4: ;
    ecx = esp + 0x8C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CDD5u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0005CDD5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CDE8u); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_0005CDE8: ;
    PUSH32(esp, esi);
    eax = esp + 0x84;
    PUSH32(esp, 0x2E320C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CDFBu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0005CDFB: ;
    ecx = esp + 0x8C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CE0Cu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0005CE0C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CE1Fu); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_0005CE1F: ;
    PUSH32(esp, esi);
    eax = esp + 0x84;
    PUSH32(esp, 0x2E31F0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CE32u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0005CE32: ;
    ecx = esp + 0x8C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CE43u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0005CE43: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CE56u); RECOMP_ABI_CALL(0x00122060u, sub_00122060); /* call 0x00122060 */

loc_0005CE56: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0005CF1E; /* je: equal / zero */

loc_0005CEC9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = 0x4031B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CEDCu); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_0005CEDC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005CF1E; /* je: equal / zero */

loc_0005CEE2: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0005CEE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005CEE6u); } /* indirect call */
    }

loc_0005CEE9: ;
    edx = MEM32(0x30C25C);
    ecx = MEM32(0x30C258);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005CF1E; /* jne: not equal / not zero */

loc_0005CEFB: ;
    eax = MEM32(esp + 0x20);
    MEM32(edi + 0x230) = eax;
    ecx = MEM32(esp + 0x1C);
    MEM32(edi + 0x234) = ecx;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CF1Eu); RECOMP_ABI_CALL(0x000593E0u, sub_000593E0); /* call 0x000593E0 */

loc_0005CF1E: ;
    eax = MEM32(esp + 0x28);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005CD60; /* jl: less (signed <) */

loc_0005CF2B: ;
    edi = MEM32(esp + 0x24);

loc_0005CF2F: ;
    _fa = (uint32_t)(MEM32(edi + 0x7A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x7A0), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005CF40; /* jne: not equal / not zero */

loc_0005CF37: ;
    PUSH32(esp, 1);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CF40u); RECOMP_ABI_CALL(0x0005C8F0u, sub_0005C8F0); /* call 0x0005C8F0 */

loc_0005CF40: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0xBB9B8BCCu);
    ecx = 0x414150;
    MEM32(esp + 0x34) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CF58u); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_0005CF58: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x43C); PUSH32(esp, 0x0005CF62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005CF5Cu); } /* indirect call */
    }

loc_0005CF62: ;
    eax = MEM32(esp + 0x2C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0005D106; /* jle: less or equal (signed <=) */

loc_0005CF70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x80) = LO8(ebx);
    ecx = 0xF;
    edi = esp + 0x81;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, esi);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = esp + 0x84;
    PUSH32(esp, 0x2E31CC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CF9Du); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0005CF9D: ;
    ecx = esp + 0x8C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CFAEu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0005CFAE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CFC1u); RECOMP_ABI_CALL(0x00122060u, sub_00122060); /* call 0x00122060 */

loc_0005CFC1: ;
    PUSH32(esp, esi);
    eax = esp + 0x84;
    PUSH32(esp, 0x2E31B0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CFD4u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0005CFD4: ;
    ecx = esp + 0x8C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CFE5u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0005CFE5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005CFF8u); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_0005CFF8: ;
    PUSH32(esp, esi);
    eax = esp + 0x84;
    PUSH32(esp, 0x2E3194);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005D00Bu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0005D00B: ;
    ecx = esp + 0x8C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005D01Cu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0005D01C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005D02Fu); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_0005D02F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D0F5; /* je: equal / zero */

loc_0005D0A2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = 0x4031B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005D0B5u); RECOMP_ABI_CALL(0x00174480u, sub_00174480); /* call 0x00174480 */

loc_0005D0B5: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D0F5; /* je: equal / zero */

loc_0005D0BB: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0005D0C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D0BFu); } /* indirect call */
    }

loc_0005D0C2: ;
    edx = MEM32(0x30C25C);
    ecx = MEM32(0x30C258);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005D0F5; /* jne: not equal / not zero */

loc_0005D0D4: ;
    eax = MEM32(esp + 0x1C);
    MEM32(edi + 0x230) = eax;
    ecx = MEM32(esp + 0x20);
    MEM32(edi + 0x234) = ecx;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x3A8); PUSH32(esp, 0x0005D0F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D0EFu); } /* indirect call */
    }

loc_0005D0F5: ;
    eax = MEM32(esp + 0x2C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005CF70; /* jl: less (signed <) */

loc_0005D102: ;
    edi = MEM32(esp + 0x24);

loc_0005D106: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0xB89507CBu);
    ecx = 0x414150;
    MEM32(esp + 0x40) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005D11Eu); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_0005D11E: ;
    eax = MEM32(esp + 0x38);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x398); PUSH32(esp, 0x0005D12Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D127u); } /* indirect call */
    }

loc_0005D12D: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xE01EEBA1u);
    ecx = 0x414150;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005D149u); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_0005D149: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0xA62186EFu);
    ecx = 0x414150;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005D15Du); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_0005D15D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D1BB; /* je: equal / zero */

loc_0005D161: ;
    _fa = (uint32_t)(MEM32(edi + 0x970)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x970), ebx (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0005D1BB; /* jle: less or equal (signed <=) */

loc_0005D16D: ;
    esi = edi + 0x8F0;

loc_0005D173: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B8); PUSH32(esp, 0x0005D17Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D177u); } /* indirect call */
    }

loc_0005D17D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D18A; /* je: equal / zero */

loc_0005D181: ;
    _fa = (uint32_t)(MEM32(eax + 0x1A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1A0), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D1A7; /* je: equal / zero */

loc_0005D18A: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(edi + 0x970);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0005D173; /* jl: less (signed <) */

loc_0005D1A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005D1A7: ;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 0x230) = ecx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 0x234) = edx;

loc_0005D1BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0005D1D0
 * Original: 0x0005D1D0 - 0x0005D272 (162 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005D1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005D1D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    ebx = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x2AC); PUSH32(esp, 0x0005D1E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D1DFu); } /* indirect call */
    }

loc_0005D1E5: ;
    esi = MEM32(esp + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2AC); PUSH32(esp, 0x0005D1F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D1EFu); } /* indirect call */
    }

loc_0005D1F5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B8); PUSH32(esp, 0x0005D1FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D1F9u); } /* indirect call */
    }

loc_0005D1FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D212; /* je: equal / zero */

loc_0005D203: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7FFFFF);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x130); PUSH32(esp, 0x0005D212u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D20Cu); } /* indirect call */
    }

loc_0005D212: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0005D21Bu); RECOMP_ABI_CALL(0x0004CB90u, sub_0004CB90); /* call 0x0004CB90 */

loc_0005D21B: ;
    ecx = MEM32(edi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D233; /* je: equal / zero */

loc_0005D225: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0xC26A444Eu);
    PUSH32(esp, 0x0005D233u); RECOMP_ABI_CALL(0x00061E50u, sub_00061E50); /* call 0x00061E50 */

loc_0005D233: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x0005D23Cu); RECOMP_ABI_CALL(0x0005CA70u, sub_0005CA70); /* call 0x0005CA70 */

loc_0005D23C: ;
    PUSH32(esp, 0x0005D241u); RECOMP_ABI_CALL(0x00178950u, sub_00178950); /* call 0x00178950 */

loc_0005D241: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC2CBD863u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC2CBD863u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005D261; /* jne: not equal / not zero */

loc_0005D248: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0005D24Fu); RECOMP_ABI_CALL(0x001592B0u, sub_001592B0); /* call 0x001592B0 */

loc_0005D24F: ;
    PUSH32(esp, 0x9F19476Eu);
    PUSH32(esp, 0x4249D707);
    PUSH32(esp, 0x0005D25Eu); RECOMP_ABI_CALL(0x0017A0A0u, sub_0017A0A0); /* call 0x0017A0A0 */

loc_0005D25E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005D261: ;
    POP32(esp, edi);
    MEM32(ebx + 8) = esi;
    POP32(esp, esi);
    MEM8(ebx + 0xC) = 1;
    MEM8(ebx + 0xD) = 0;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0005D280
 * Original: 0x0005D280 - 0x0005D305 (133 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005D280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005D280: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0005D2A9; /* je: equal / zero */

loc_0005D28F: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2B0); PUSH32(esp, 0x0005D29Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D294u); } /* indirect call */
    }

loc_0005D29A: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x344); PUSH32(esp, 0x0005D2A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D2A1u); } /* indirect call */
    }

loc_0005D2A7: ;
    goto loc_0005D2B9;

loc_0005D2A9: ;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esi + 8) = 0;
    PUSH32(esp, 0x0005D2B9u); RECOMP_ABI_CALL(0x0004CB90u, sub_0004CB90); /* call 0x0004CB90 */

loc_0005D2B9: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2B0); PUSH32(esp, 0x0005D2C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D2BDu); } /* indirect call */
    }

loc_0005D2C3: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0005D2CCu); RECOMP_ABI_CALL(0x0005C950u, sub_0005C950); /* call 0x0005C950 */

loc_0005D2CC: ;
    PUSH32(esp, 0x40200000);
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005D2DBu); RECOMP_ABI_CALL(0x000976E0u, sub_000976E0); /* call 0x000976E0 */

loc_0005D2DB: ;
    PUSH32(esp, 0x0005D2E0u); RECOMP_ABI_CALL(0x00178950u, sub_00178950); /* call 0x00178950 */

loc_0005D2E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F19476Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9F19476Eu (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0005D302; /* jne: not equal / not zero */

loc_0005D2E9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0005D2F0u); RECOMP_ABI_CALL(0x001592B0u, sub_001592B0); /* call 0x001592B0 */

loc_0005D2F0: ;
    PUSH32(esp, 0xC2CBD863u);
    PUSH32(esp, 0x4249D707);
    PUSH32(esp, 0x0005D2FFu); RECOMP_ABI_CALL(0x0017A0A0u, sub_0017A0A0); /* call 0x0017A0A0 */

loc_0005D2FF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005D302: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005D310
 * Original: 0x0005D310 - 0x0005D4BB (427 bytes, 132 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0005D310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005D310: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 8);
    edx = MEM32(eax + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(ecx + 4) = edx;
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x2AC); PUSH32(esp, 0x0005D348u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D342u); } /* indirect call */
    }

loc_0005D348: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005D34Fu); RECOMP_ABI_CALL(0x001592B0u, sub_001592B0); /* call 0x001592B0 */

loc_0005D34F: ;
    PUSH32(esp, 0x9F19476Eu);
    PUSH32(esp, 0x4249D707);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005D35Eu); RECOMP_ABI_CALL(0x0017A0A0u, sub_0017A0A0); /* call 0x0017A0A0 */

loc_0005D35E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0x9DCCB55Fu);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005D36Fu); RECOMP_ABI_CALL(0x0005C210u, sub_0005C210); /* call 0x0005C210 */

loc_0005D36F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 7);
    ecx = 0x4140E8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005D382u); RECOMP_ABI_CALL(0x00097700u, sub_00097700); /* call 0x00097700 */

loc_0005D382: ;
    PUSH32(esp, 0x40490FDB);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005D391u); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_0005D391: ;
    edx = esi + 0xB0;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005D3A7u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_0005D3A7: ;
    edx = esp + 0x70;
    PUSH32(esp, edx);
    ecx = esp + 0xB4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005D3B8u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0005D3B8: ;
    eax = MEM32(edi);
    ecx = esp + 0xB0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0005D3C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D3C4u); } /* indirect call */
    }

loc_0005D3C7: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    MEM8(esp + 0x24) = LO8(ebx);
    MEM8(esp + 0x25) = LO8(ebx);
    MEM8(esp + 0x27) = LO8(ebx);
    MEM8(esp + 0x28) = LO8(ebx);
    MEM8(esp + 0x29) = LO8(ebx);
    MEM8(esp + 0x2A) = LO8(ebx);
    MEM8(esp + 0x2B) = LO8(ebx);
    MEM8(esp + 0x2C) = LO8(ebx);
    MEM8(esp + 0x2D) = LO8(ebx);
    MEM8(esp + 0x2E) = LO8(ebx);
    MEM8(esp + 0x2F) = LO8(ebx);
    MEM8(esp + 0x26) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2BC); PUSH32(esp, 0x0005D416u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D410u); } /* indirect call */
    }

loc_0005D416: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esp + 0x13) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0005D428; /* je: equal / zero */

loc_0005D41E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2B8); PUSH32(esp, 0x0005D428u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D422u); } /* indirect call */
    }

loc_0005D428: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005D430u); RECOMP_ABI_CALL(0x0004CB90u, sub_0004CB90); /* call 0x0004CB90 */

loc_0005D430: ;
    ecx = MEM32(esi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D44A; /* je: equal / zero */

loc_0005D43A: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4043D2F0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005D44Au); RECOMP_ABI_CALL(0x00061E50u, sub_00061E50); /* call 0x00061E50 */

loc_0005D44A: ;
    ecx = MEM32(esi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D46C; /* je: equal / zero */

loc_0005D454: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005D45Du); RECOMP_ABI_CALL(0x00061200u, sub_00061200); /* call 0x00061200 */

loc_0005D45D: ;
    ecx = MEM32(esi + 0x6B0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005D46Cu); RECOMP_ABI_CALL(0x00060F70u, sub_00060F70); /* call 0x00060F70 */

loc_0005D46C: ;
    _fa = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x13), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D489; /* je: equal / zero */

loc_0005D472: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005D47Du); RECOMP_ABI_CALL(0x0004D820u, sub_0004D820); /* call 0x0004D820 */

loc_0005D47D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2B4); PUSH32(esp, 0x0005D489u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D483u); } /* indirect call */
    }

loc_0005D489: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005D491u); RECOMP_ABI_CALL(0x0004CB90u, sub_0004CB90); /* call 0x0004CB90 */

loc_0005D491: ;
    ecx = MEM32(edi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D4AB; /* je: equal / zero */

loc_0005D49B: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x6EB8784D);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005D4ABu); RECOMP_ABI_CALL(0x00061E50u, sub_00061E50); /* call 0x00061E50 */

loc_0005D4AB: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005D4B2u); RECOMP_ABI_CALL(0x0005B370u, sub_0005B370); /* call 0x0005B370 */

loc_0005D4B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0005D4C0
 * Original: 0x0005D4C0 - 0x0005D587 (199 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005D4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0005D4C0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005D518; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esi + 8)) */

loc_0005D4CC: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x6B0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0005D4DDu); RECOMP_ABI_CALL(0x000612C0u, sub_000612C0); /* call 0x000612C0 */

loc_0005D4DD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D581; /* je: equal / zero */

loc_0005D4E5: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0005D4EEu); RECOMP_ABI_CALL(0x00170730u, sub_00170730); /* call 0x00170730 */

loc_0005D4EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D505; /* je: equal / zero */

loc_0005D4F5: ;
    PUSH32(esp, eax);
    MEM8(0x42AB89) = 1;
    PUSH32(esp, 0x0005D502u); RECOMP_ABI_CALL(0x0010FB40u, sub_0010FB40); /* call 0x0010FB40 */

loc_0005D502: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005D505: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0005D518: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005D581; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0005D52D: ;
    esi = MEM32(esp + 8);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2B0); PUSH32(esp, 0x0005D53Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D535u); } /* indirect call */
    }

loc_0005D53B: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0005D544u); RECOMP_ABI_CALL(0x0005C950u, sub_0005C950); /* call 0x0005C950 */

loc_0005D544: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x334); PUSH32(esp, 0x0005D550u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D54Au); } /* indirect call */
    }

loc_0005D550: ;
    PUSH32(esp, 0x40200000);
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005D55Fu); RECOMP_ABI_CALL(0x000976E0u, sub_000976E0); /* call 0x000976E0 */

loc_0005D55F: ;
    SET_LO8(eax, MEM8(0x32079C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D581; /* je: equal / zero */

loc_0005D568: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0005D56Fu); RECOMP_ABI_CALL(0x001592B0u, sub_001592B0); /* call 0x001592B0 */

loc_0005D56F: ;
    PUSH32(esp, 0xC2CBD863u);
    PUSH32(esp, 0x4249D707);
    PUSH32(esp, 0x0005D57Eu); RECOMP_ABI_CALL(0x0017A0A0u, sub_0017A0A0); /* call 0x0017A0A0 */

loc_0005D57E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005D581: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0005D590
 * Original: 0x0005D590 - 0x0005D5BA (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005D590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005D590: ;
    SET_LO8(eax, MEM8(ecx + 9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0005D5A5; /* je: equal / zero */

loc_0005D59C: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0005D5A5u); RECOMP_ABI_CALL(0x0005CA80u, sub_0005CA80); /* call 0x0005CA80 */

loc_0005D5A5: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esi + 0xAD1) = 2;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2B0); PUSH32(esp, 0x0005D5B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D5B0u); } /* indirect call */
    }

loc_0005D5B6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005D5C0
 * Original: 0x0005D5C0 - 0x0005DC4D (1677 bytes, 487 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005D5C0(void)
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

loc_0005D5C0: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(0x413FA0)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x308); PUSH32(esp, 0x0005D5DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D5D4u); } /* indirect call */
    }

loc_0005D5DA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005D5E5; /* jne: not equal / not zero */

loc_0005D5DE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0005D5E5: ;
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3BC); PUSH32(esp, 0x0005D5F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D5EAu); } /* indirect call */
    }

loc_0005D5F0: ;
    SET_LO8(ecx, MEM8(eax + 0x63));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ebp = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0005D600; /* je: equal / zero */

loc_0005D5FB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x2F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005D640; /* jne: not equal / not zero */

loc_0005D600: ;
    ecx = MEM32(esi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D648; /* je: equal / zero */

loc_0005D60A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0005D613u); RECOMP_ABI_CALL(0x00060B90u, sub_00060B90); /* call 0x00060B90 */

loc_0005D613: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAA9AE52Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAA9AE52Cu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005D648; /* jne: not equal / not zero */

loc_0005D61A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3BC); PUSH32(esp, 0x0005D626u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D620u); } /* indirect call */
    }

loc_0005D626: ;
    ecx = eax;
    PUSH32(esp, 0x0005D62Du); RECOMP_ABI_CALL(0x0013C540u, sub_0013C540); /* call 0x0013C540 */

loc_0005D62D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3BC); PUSH32(esp, 0x0005D639u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D633u); } /* indirect call */
    }

loc_0005D639: ;
    ecx = eax;
    PUSH32(esp, 0x0005D640u); RECOMP_ABI_CALL(0x0013C570u, sub_0013C570); /* call 0x0013C570 */

loc_0005D640: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0005D648: ;
    eax = MEM32(esi + 0x6CC);
    PUSH32(esp, ebx);
    ebx = 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005DB20; /* je: equal / zero */

loc_0005D65C: ;
    eax = ebp + -4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4A (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0005DC39; /* ja: above (unsigned >) */

loc_0005D668: ;
    eax = ZX8(MEM8(eax + 0x5DC80));
    { uint32_t _jt = MEM32(eax * 4 + 0x5DC50); /* switch: 12 entries, 12 targets */
    if (_jt == 0x0005D676u) goto loc_0005D676;
    if (_jt == 0x0005D782u) goto loc_0005D782;
    if (_jt == 0x0005D882u) goto loc_0005D882;
    if (_jt == 0x0005D892u) goto loc_0005D892;
    if (_jt == 0x0005D93Fu) goto loc_0005D93F;
    if (_jt == 0x0005D9FCu) goto loc_0005D9FC;
    if (_jt == 0x0005DA20u) goto loc_0005DA20;
    if (_jt == 0x0005DA9Au) goto loc_0005DA9A;
    if (_jt == 0x0005DAC5u) goto loc_0005DAC5;
    if (_jt == 0x0005DB29u) goto loc_0005DB29;
    if (_jt == 0x0005DC13u) goto loc_0005DC13;
    if (_jt == 0x0005DC39u) goto loc_0005DC39;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0005D676: ;
    ecx = MEM32(esi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D691; /* je: equal / zero */

loc_0005D680: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0005D689u); RECOMP_ABI_CALL(0x000611E0u, sub_000611E0); /* call 0x000611E0 */

loc_0005D689: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005D691; /* je: equal / zero */

loc_0005D68D: ;
    SET_LO8(ebx, 1);
    goto loc_0005D693;

loc_0005D691: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0005D693: ;
    ecx = MEM32(esi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D6B1; /* je: equal / zero */

loc_0005D69D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0005D6A6u); RECOMP_ABI_CALL(0x00060B90u, sub_00060B90); /* call 0x00060B90 */

loc_0005D6A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xECCD6783u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xECCD6783u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005D6B1; /* jne: not equal / not zero */

loc_0005D6AD: ;
    SET_LO8(eax, 1);
    goto loc_0005D6B3;

loc_0005D6B1: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0005D6B3: ;
    _fa = (uint32_t)(MEM8(esi + 0x124)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x124), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005DB20; /* jne: not equal / not zero */

loc_0005D6C0: ;
    SET_LO8(ecx, MEM8(esi + 0xA88));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005DB20; /* jne: not equal / not zero */

loc_0005D6CE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005DB20; /* jne: not equal / not zero */

loc_0005D6D6: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005DB20; /* jne: not equal / not zero */

loc_0005D6DE: ;
    eax = MEM32(esi + 0x28C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005DB20; /* jne: not equal / not zero */

loc_0005D6EC: ;
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005D6F6u); RECOMP_ABI_CALL(0x00097690u, sub_00097690); /* call 0x00097690 */

loc_0005D6F6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D86F; /* je: equal / zero */

loc_0005D6FE: ;
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005D708u); RECOMP_ABI_CALL(0x00097690u, sub_00097690); /* call 0x00097690 */

loc_0005D708: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    MEM8(esi + 0xE65) = LO8(eax);
    { uint32_t _icall_target = MEM32(edx + 0x3BC); PUSH32(esp, 0x0005D71Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D714u); } /* indirect call */
    }

loc_0005D71A: ;
    ecx = eax;
    PUSH32(esp, 0x0005D721u); RECOMP_ABI_CALL(0x0013C570u, sub_0013C570); /* call 0x0013C570 */

loc_0005D721: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3BC); PUSH32(esp, 0x0005D72Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D727u); } /* indirect call */
    }

loc_0005D72D: ;
    ecx = eax;
    PUSH32(esp, 0x0005D734u); RECOMP_ABI_CALL(0x0013C540u, sub_0013C540); /* call 0x0013C540 */

loc_0005D734: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0005D73Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D738u); } /* indirect call */
    }

loc_0005D73E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D75B; /* je: equal / zero */

loc_0005D742: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0005D74Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D746u); } /* indirect call */
    }

loc_0005D74C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x31E05B5C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x0005D75Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D755u); } /* indirect call */
    }

loc_0005D75B: ;
    PUSH32(esp, 0);
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005D767u); RECOMP_ABI_CALL(0x000977D0u, sub_000977D0); /* call 0x000977D0 */

loc_0005D767: ;
    PUSH32(esp, 0x3F99999A);
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005D776u); RECOMP_ABI_CALL(0x000975F0u, sub_000975F0); /* call 0x000975F0 */

loc_0005D776: ;
    MEM8(esi + 0xE59) = 1;
    goto loc_0005D855;

loc_0005D782: ;
    ecx = MEM32(esi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D7A0; /* je: equal / zero */

loc_0005D78C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0005D795u); RECOMP_ABI_CALL(0x00060B90u, sub_00060B90); /* call 0x00060B90 */

loc_0005D795: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xECCD6783u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xECCD6783u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005D7A0; /* jne: not equal / not zero */

loc_0005D79C: ;
    SET_LO8(eax, 1);
    goto loc_0005D7A2;

loc_0005D7A0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0005D7A2: ;
    _fa = (uint32_t)(MEM8(esi + 0x124)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x124), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0005DB20; /* jne: not equal / not zero */

loc_0005D7AF: ;
    SET_LO8(ecx, MEM8(esi + 0xA88));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005DB20; /* jne: not equal / not zero */

loc_0005D7BD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005DB20; /* jne: not equal / not zero */

loc_0005D7C5: ;
    eax = MEM32(esi + 0x28C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005DB20; /* jne: not equal / not zero */

loc_0005D7D3: ;
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005D7DDu); RECOMP_ABI_CALL(0x00097690u, sub_00097690); /* call 0x00097690 */

loc_0005D7DD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D86F; /* je: equal / zero */

loc_0005D7E5: ;
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005D7EFu); RECOMP_ABI_CALL(0x00097690u, sub_00097690); /* call 0x00097690 */

loc_0005D7EF: ;
    MEM8(esi + 0xE65) = LO8(eax);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3BC); PUSH32(esp, 0x0005D801u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D7FBu); } /* indirect call */
    }

loc_0005D801: ;
    ecx = eax;
    PUSH32(esp, 0x0005D808u); RECOMP_ABI_CALL(0x0013C570u, sub_0013C570); /* call 0x0013C570 */

loc_0005D808: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3BC); PUSH32(esp, 0x0005D814u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D80Eu); } /* indirect call */
    }

loc_0005D814: ;
    ecx = eax;
    PUSH32(esp, 0x0005D81Bu); RECOMP_ABI_CALL(0x0013C540u, sub_0013C540); /* call 0x0013C540 */

loc_0005D81B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0005D825u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D81Fu); } /* indirect call */
    }

loc_0005D825: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D842; /* je: equal / zero */

loc_0005D829: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0005D833u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D82Du); } /* indirect call */
    }

loc_0005D833: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82F8F3E1u);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x0005D842u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005D83Cu); } /* indirect call */
    }

loc_0005D842: ;
    PUSH32(esp, 0);
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005D84Eu); RECOMP_ABI_CALL(0x000977D0u, sub_000977D0); /* call 0x000977D0 */

loc_0005D84E: ;
    MEM8(esi + 0xE59) = 0;

loc_0005D855: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esi;
    MEMF(esi + 0xE5C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE60) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0005D86Fu); RECOMP_ABI_CALL(0x00058C20u, sub_00058C20); /* call 0x00058C20 */

loc_0005D86F: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    MEM32(esi + 0xE68) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0005D882: ;
    ecx = esi;
    PUSH32(esp, 0x0005D889u); RECOMP_ABI_CALL(0x0005A610u, sub_0005A610); /* call 0x0005A610 */

loc_0005D889: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0005D892: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ecx = 0x4140E8;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD440)); /* fmul dword ptr [0x2dd440] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0005D8AAu); RECOMP_ABI_CALL(0x00097610u, sub_00097610); /* call 0x00097610 */

loc_0005D8AA: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x18) / fp_top()); /* fdivr dword ptr [esp + 0x18] */
    eax = MEM32(0x35CDF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esi + 0xE5C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    if (CMP_NE(_fa, _fb)) goto loc_0005D8D9; /* jne: not equal / not zero */

loc_0005D8CB: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DD6FC)); /* movss */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    goto loc_0005D8EF;

loc_0005D8D9: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3F0)); /* movss */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (!(_fa & 1u) /* fcompi */) goto loc_0005D8EF; /* jae: above or equal (unsigned >=) */

loc_0005D8E7: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */

loc_0005D8EF: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0005D90A; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0005D8FD: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005D90D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0005D90A: ;
    xmm0 = xmm1; /* movaps */

loc_0005D90D: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0xE5C); /* subss */
    POP32(esp, ebx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0xE5C); /* addss */
    POP32(esp, ebp);
    MEMF(esi + 0xE5C) = xmm1.f[0]; /* movss */
    MEM8(esi + 0xE64) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0005D93F: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ecx = 0x4140E8;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD440)); /* fmul dword ptr [0x2dd440] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0005D957u); RECOMP_ABI_CALL(0x00097610u, sub_00097610); /* call 0x00097610 */

loc_0005D957: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x18) / fp_top()); /* fdivr dword ptr [esp + 0x18] */
    eax = MEM32(0x35CDF4);
    xmm0 = XMM_SCALAR(MEMF(0x2DC3F0)); /* movss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esi + 0xE60)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (!(_fa & 1u) /* fcompi */) goto loc_0005D98A; /* jae: above or equal (unsigned >=) */

loc_0005D982: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */

loc_0005D98A: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005D9A0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0005D998: ;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    goto loc_0005D9B9;

loc_0005D9A0: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0005D9B9; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0005D9B3: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_0005D9B9: ;
    ecx = 0x3C0480;
    PUSH32(esp, 0x0005D9C3u); RECOMP_ABI_CALL(0x0015EC20u, sub_0015EC20); /* call 0x0015EC20 */

loc_0005D9C3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0005D9D5; /* je: equal / zero */

loc_0005D9CD: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC3A0); /* mulss */

loc_0005D9D5: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xE60); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xE60); /* addss */
    POP32(esp, ebx);
    POP32(esp, ebp);
    MEMF(esi + 0xE60) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0005D9FC: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3BC); PUSH32(esp, 0x0005DA06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005DA00u); } /* indirect call */
    }

loc_0005DA06: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005DB20; /* je: equal / zero */

loc_0005DA10: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    MEM8(esi + 0xAD0) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0005DA20: ;
    eax = MEM32(esi + 0x6C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005DB20; /* jne: not equal / not zero */

loc_0005DA2E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x360); PUSH32(esp, 0x0005DA38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005DA32u); } /* indirect call */
    }

loc_0005DA38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005DB20; /* jne: not equal / not zero */

loc_0005DA40: ;
    ecx = MEM32(esi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005DB20; /* je: equal / zero */

loc_0005DA4E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0005DA55u); RECOMP_ABI_CALL(0x000611C0u, sub_000611C0); /* call 0x000611C0 */

loc_0005DA55: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x55) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x55 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005DB20; /* je: equal / zero */

loc_0005DA5D: ;
    ecx = esi;
    PUSH32(esp, 0x0005DA64u); RECOMP_ABI_CALL(0x0005A610u, sub_0005A610); /* call 0x0005A610 */

loc_0005DA64: ;
    eax = MEM32(esi + 0x7A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005DA88; /* je: equal / zero */

loc_0005DA6E: ;
    _fa = (uint32_t)(MEM8(eax + 0x190)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x190), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005DA88; /* je: equal / zero */

loc_0005DA76: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0005DA7Fu); RECOMP_ABI_CALL(0x0005C950u, sub_0005C950); /* call 0x0005C950 */

loc_0005DA7F: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0005DA88: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0005DA91u); RECOMP_ABI_CALL(0x0005C8F0u, sub_0005C8F0); /* call 0x0005C8F0 */

loc_0005DA91: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0005DA9A: ;
    eax = MEM32(esi + 0x6C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005DB20; /* jne: not equal / not zero */

loc_0005DAA4: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x360); PUSH32(esp, 0x0005DAAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005DAA8u); } /* indirect call */
    }

loc_0005DAAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005DB20; /* jne: not equal / not zero */

loc_0005DAB2: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x39C); PUSH32(esp, 0x0005DABCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005DAB6u); } /* indirect call */
    }

loc_0005DABC: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0005DAC5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0005DB20; /* jnp: not parity */

loc_0005DAD8: ;
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005DAE2u); RECOMP_ABI_CALL(0x00097630u, sub_00097630); /* call 0x00097630 */

loc_0005DAE2: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3F800000);
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005DAF5u); RECOMP_ABI_CALL(0x00097610u, sub_00097610); /* call 0x00097610 */

loc_0005DAF5: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC904)); /* fmul dword ptr [0x2dc904] */
    PUSH32(esp, ecx);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0005DB0Au); RECOMP_ABI_CALL(0x00011000u, sub_00011000); /* call 0x00011000 */

loc_0005DB0A: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005DB20u); RECOMP_ABI_CALL(0x000975F0u, sub_000975F0); /* call 0x000975F0 */

loc_0005DB20: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0005DB29: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3BC); PUSH32(esp, 0x0005DB34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005DB2Eu); } /* indirect call */
    }

loc_0005DB34: ;
    edi = MEM32(eax + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3BC); PUSH32(esp, 0x0005DB41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005DB3Bu); } /* indirect call */
    }

loc_0005DB41: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(eax + 0xC);
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0005DBFE; /* jnp: not parity */

loc_0005DB5A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005DB67; /* je: equal / zero */

loc_0005DB5F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005DBFE; /* jne: not equal / not zero */

loc_0005DB67: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x2F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005DBD1; /* je: equal / zero */

loc_0005DB6C: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DDA44)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0005DB8D; /* jbe: below or equal (unsigned <=) */

loc_0005DB86: ;
    MEM8(esi + 0xE9C) = 1;

loc_0005DB8D: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DDA44)); /* movss */
    _fca = xmm2.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca >= _fcb)) goto loc_0005DBB6; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs MEMF(esp + 0x18)) */

loc_0005DB9C: ;
    SET_LO8(eax, MEM8(0x3BE240));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005DBB6; /* jne: not equal / not zero */

loc_0005DBA5: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC904)); /* movss */
    _fca = xmm2.f[0]; _fcb = MEMF(esi + 0xE98); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005DBD1; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(esi + 0xE98)) */

loc_0005DBB6: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC3C4)); /* movss */
    if ((_fca > _fcb)) goto loc_0005DBCB; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0005DBC3: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC3C0)); /* movss */

loc_0005DBCB: ;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */

loc_0005DBD1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005DBEF; /* je: equal / zero */

loc_0005DBD6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x2F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005DBEF; /* je: equal / zero */

loc_0005DBDB: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x2DDA44)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0005DBFE; /* jbe: below or equal (unsigned <=) */

loc_0005DBEF: ;
    MEM8(esi + 0xAD0) = 1;
    MEMF(esi + 0xACC) = xmm0.f[0]; /* movss */

loc_0005DBFE: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0005DC0Bu); RECOMP_ABI_CALL(0x00053D20u, sub_00053D20); /* call 0x00053D20 */

loc_0005DC0B: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0005DC13: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0005DC32u); RECOMP_ABI_CALL(0x00053D20u, sub_00053D20); /* call 0x00053D20 */

loc_0005DC32: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0005DC39: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0005DC46u); RECOMP_ABI_CALL(0x00053D20u, sub_00053D20); /* call 0x00053D20 */

loc_0005DC46: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0005DCD0
 * Original: 0x0005DCD0 - 0x0005DCD5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005DCD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005DCD0: ;
    g_seh_ebp = ebp; sub_0003FC40(); return; /* tail jmp 0x0003FC40 */

}

/**
 * sub_0005DCE0
 * Original: 0x0005DCE0 - 0x0005DCE8 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005DCE0(void)
{

loc_0005DCE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0005DCE7u); RECOMP_ABI_CALL(0x0003FD00u, sub_0003FD00); /* call 0x0003FD00 */

loc_0005DCE7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0005DCF0
 * Original: 0x0005DCF0 - 0x0005DD1A (42 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005DCF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005DCF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0005DCFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005DCF5u); } /* indirect call */
    }

loc_0005DCFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005DD18; /* je: equal / zero */

loc_0005DCFF: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0005DD09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005DD03u); } /* indirect call */
    }

loc_0005DD09: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x9AADFF1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x0005DD18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005DD12u); } /* indirect call */
    }

loc_0005DD18: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005DD20
 * Original: 0x0005DD20 - 0x0005DD2B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005DD20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005DD20: ;
    _fb = (uint32_t)(0x2E4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2E4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001417F0(); return; /* tail jmp 0x001417F0 */

}

/**
 * sub_0005DD30
 * Original: 0x0005DD30 - 0x0005DD6E (62 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005DD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005DD30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x0005DD3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005DD37u); } /* indirect call */
    }

loc_0005DD3D: ;
    ecx = eax;
    PUSH32(esp, 0x0005DD44u); RECOMP_ABI_CALL(0x0003EAB0u, sub_0003EAB0); /* call 0x0003EAB0 */

loc_0005DD44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005DD6A; /* je: equal / zero */

loc_0005DD48: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0005DD54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005DD4Eu); } /* indirect call */
    }

loc_0005DD54: ;
    ecx = eax;
    PUSH32(esp, 0x0005DD5Bu); RECOMP_ABI_CALL(0x0003EAB0u, sub_0003EAB0); /* call 0x0003EAB0 */

loc_0005DD5B: ;
    ecx = eax;
    PUSH32(esp, 0x0005DD62u); RECOMP_ABI_CALL(0x0003D250u, sub_0003D250); /* call 0x0003D250 */

loc_0005DD62: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005DD6A; /* jne: not equal / not zero */

loc_0005DD66: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0005DD6A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005DD70
 * Original: 0x0005DD70 - 0x0005DDAA (58 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005DD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0005DD70: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0005DDA3; /* jp: parity */

loc_0005DD8E: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0005DDA3; /* jp: parity */

loc_0005DD9C: ;
    MEM8(ecx + 0xC) = MEM8(ecx + 0xC) & 0xFB;
    _fa = (uint32_t)(MEM8(ecx + 0xC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

loc_0005DDA3: ;
    MEM8(ecx + 0xC) = MEM8(ecx + 0xC) | 4;
    _fa = (uint32_t)(MEM8(ecx + 0xC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005DDB0
 * Original: 0x0005DDB0 - 0x0005DDCF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005DDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005DDB0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E3734;
    if (TEST_Z(_fa, _fb)) goto loc_0005DDC9; /* je: equal / zero */

loc_0005DDC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0005DDC6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0005DDC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005DDC9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005DDD0
 * Original: 0x0005DDD0 - 0x0005DE96 (198 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005DDD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005DDD0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x241586);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2E3760;
    ecx = esi + 0x13E0;
    MEM32(esp + 0x10) = 9;
    MEM32(esi + 0x16C0) = 0x2E3734;
    PUSH32(esp, 0x0005DE10u); RECOMP_ABI_CALL(0x0016D2D0u, sub_0016D2D0); /* call 0x0016D2D0 */

loc_0005DE10: ;
    ecx = esi + 0xB04;
    MEM8(esp + 0x10) = 8;
    PUSH32(esp, 0x0005DE20u); RECOMP_ABI_CALL(0x00165CC0u, sub_00165CC0); /* call 0x00165CC0 */

loc_0005DE20: ;
    ecx = esi + 0x5F0;
    MEM8(esp + 0x10) = 7;
    PUSH32(esp, 0x0005DE30u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_0005DE30: ;
    eax = 0x2E15D8;
    ecx = esi + 0x2E4;
    MEM32(esi + 0x520) = 0x2DD8F0;
    MEM32(esi + 0x4DC) = eax;
    MEM32(esi + 0x4A8) = eax;
    MEM32(esi + 0x474) = eax;
    MEM32(esi + 0x440) = eax;
    MEM8(esp + 0x10) = 1;
    PUSH32(esp, 0x0005DE67u); RECOMP_ABI_CALL(0x001FA0A0u, sub_001FA0A0); /* call 0x001FA0A0 */

loc_0005DE67: ;
    ecx = esi + 0x280;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x0005DE77u); RECOMP_ABI_CALL(0x001539C0u, sub_001539C0); /* call 0x001539C0 */

loc_0005DE77: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0005DE86u); RECOMP_ABI_CALL(0x0003F0D0u, sub_0003F0D0); /* call 0x0003F0D0 */

loc_0005DE86: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0005DEA0
 * Original: 0x0005DEA0 - 0x0005DEA6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005DEA0(void)
{

loc_0005DEA0: ;
    eax = 0x1700;
    esp += 4; return; /* ret */

}

/**
 * sub_0005DEB0
 * Original: 0x0005DEB0 - 0x0005DEB7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005DEB0(void)
{

loc_0005DEB0: ;
    eax = MEM32(ecx + 0x300);
    esp += 4; return; /* ret */

}

/**
 * sub_0005DEC0
 * Original: 0x0005DEC0 - 0x0005DEC7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005DEC0(void)
{

loc_0005DEC0: ;
    eax = ecx + 0x5F0;
    esp += 4; return; /* ret */

}

/**
 * sub_0005DED0
 * Original: 0x0005DED0 - 0x0005DED7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005DED0(void)
{

loc_0005DED0: ;
    eax = ecx + 0x8C4;
    esp += 4; return; /* ret */

}

/**
 * sub_0005DEE0
 * Original: 0x0005DEE0 - 0x0005DEE7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005DEE0(void)
{

loc_0005DEE0: ;
    eax = ecx + 0xB04;
    esp += 4; return; /* ret */

}

/**
 * sub_0005DEF0
 * Original: 0x0005DEF0 - 0x0005DEF7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005DEF0(void)
{

loc_0005DEF0: ;
    eax = ecx + 0x13E0;
    esp += 4; return; /* ret */

}

/**
 * sub_0005DF00
 * Original: 0x0005DF00 - 0x0005DF1A (26 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0005DF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0005DF00: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x364)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC394); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005DF17; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC394)) */

loc_0005DF11: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0005DF17: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0005DF20
 * Original: 0x0005DF20 - 0x0005DF2D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005DF20(void)
{

loc_0005DF20: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x43C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005DF30
 * Original: 0x0005DF30 - 0x0005DF36 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005DF30(void)
{

loc_0005DF30: ;
    eax = MEM32(0x321914);
    esp += 4; return; /* ret */

}

/**
 * sub_0005DF40
 * Original: 0x0005DF40 - 0x0005DF47 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005DF40(void)
{

loc_0005DF40: ;
    eax = ecx + 0x3FC;
    esp += 4; return; /* ret */

}

/**
 * sub_0005DF50
 * Original: 0x0005DF50 - 0x0005DF57 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005DF50(void)
{

loc_0005DF50: ;
    eax = ecx + 0x2E4;
    esp += 4; return; /* ret */

}

/**
 * sub_0005DF60
 * Original: 0x0005DF60 - 0x0005DF67 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005DF60(void)
{

loc_0005DF60: ;
    eax = ecx + 0x520;
    esp += 4; return; /* ret */

}

/**
 * sub_0005DF70
 * Original: 0x0005DF70 - 0x0005DF76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005DF70(void)
{

loc_0005DF70: ;
    eax = 0xC285A89;
    esp += 4; return; /* ret */

}

/**
 * sub_0005DF80
 * Original: 0x0005DF80 - 0x0005E06F (239 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005DF80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005DF80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0005DF8Bu); RECOMP_ABI_CALL(0x00041A70u, sub_00041A70); /* call 0x00041A70 */

loc_0005DF8B: ;
    edi = esi + 0x520;
    ecx = edi;
    PUSH32(esp, 0x0005DF98u); RECOMP_ABI_CALL(0x002038C0u, sub_002038C0); /* call 0x002038C0 */

loc_0005DF98: ;
    ecx = edi;
    PUSH32(esp, 0x0005DF9Fu); RECOMP_ABI_CALL(0x000B2A10u, sub_000B2A10); /* call 0x000B2A10 */

loc_0005DF9F: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0005DFA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005DFA3u); } /* indirect call */
    }

loc_0005DFA6: ;
    edx = MEM32(esi + 0x3C);
    edi = esi + 0x3C;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0005DFB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005DFAEu); } /* indirect call */
    }

loc_0005DFB1: ;
    eax = MEM32(esi + 0x1D8);
    ebx = esi + 0x1D8;
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0005DFC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005DFBFu); } /* indirect call */
    }

loc_0005DFC2: ;
    ecx = esi + 0x2E4;
    PUSH32(esp, 0x0005DFCDu); RECOMP_ABI_CALL(0x00141980u, sub_00141980); /* call 0x00141980 */

loc_0005DFCD: ;
    ecx = esi + 0x280;
    PUSH32(esp, ecx);
    ecx = 0x37E158;
    PUSH32(esp, 0x0005DFDEu); RECOMP_ABI_CALL(0x00153D10u, sub_00153D10); /* call 0x00153D10 */

loc_0005DFDE: ;
    ecx = esi + 0x5F0;
    PUSH32(esp, 0x0005DFE9u); RECOMP_ABI_CALL(0x00203C10u, sub_00203C10); /* call 0x00203C10 */

loc_0005DFE9: ;
    ecx = esi + 0xB04;
    PUSH32(esp, 0x0005DFF4u); RECOMP_ABI_CALL(0x00161E90u, sub_00161E90); /* call 0x00161E90 */

loc_0005DFF4: ;
    ecx = esi + 0x13E0;
    PUSH32(esp, 0x0005DFFFu); RECOMP_ABI_CALL(0x0016CE80u, sub_0016CE80); /* call 0x0016CE80 */

loc_0005DFFF: ;
    ebp = esi + 0xB0;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0005E00Du); RECOMP_ABI_CALL(0x001F5100u, sub_001F5100); /* call 0x001F5100 */

loc_0005E00D: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0005E015u); RECOMP_ABI_CALL(0x001F3CE0u, sub_001F3CE0); /* call 0x001F3CE0 */

loc_0005E015: ;
    ecx = esi + 0x4A8;
    PUSH32(esp, 0x0005E020u); RECOMP_ABI_CALL(0x000B14D0u, sub_000B14D0); /* call 0x000B14D0 */

loc_0005E020: ;
    ecx = esi + 0x4DC;
    PUSH32(esp, 0x0005E02Bu); RECOMP_ABI_CALL(0x000B14D0u, sub_000B14D0); /* call 0x000B14D0 */

loc_0005E02B: ;
    ecx = esi + 0x440;
    PUSH32(esp, 0x0005E036u); RECOMP_ABI_CALL(0x000B14D0u, sub_000B14D0); /* call 0x000B14D0 */

loc_0005E036: ;
    ecx = esi + 0x474;
    PUSH32(esp, 0x0005E041u); RECOMP_ABI_CALL(0x000B14D0u, sub_000B14D0); /* call 0x000B14D0 */

loc_0005E041: ;
    edx = esi + 0x9CC;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0005E04Fu); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_0005E04F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x8C4) = 0;
    eax = MEM32(esi + 0x16C0);
    ecx = esi + 0x16C0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_0005E070
 * Original: 0x0005E070 - 0x0005E0B1 (65 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005E070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005E070: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0005E078u); RECOMP_ABI_CALL(0x00041990u, sub_00041990); /* call 0x00041990 */

loc_0005E078: ;
    ecx = esi;
    PUSH32(esp, 0x0005E07Fu); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_0005E07F: ;
    SET_LO8(eax, MEM8(eax + 0x30));
    SET_LO8(eax, LO8(eax) >> 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0005E09E; /* jne: not equal / not zero */

loc_0005E08B: ;
    PUSH32(esp, 0x0005E090u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_0005E090: ;
    PUSH32(esp, eax);
    ecx = esi + 0xB04;
    PUSH32(esp, 0x0005E09Cu); RECOMP_ABI_CALL(0x001634B0u, sub_001634B0); /* call 0x001634B0 */

loc_0005E09C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0005E09E: ;
    PUSH32(esp, 0x0005E0A3u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_0005E0A3: ;
    PUSH32(esp, eax);
    ecx = esi + 0xB04;
    PUSH32(esp, 0x0005E0AFu); RECOMP_ABI_CALL(0x00165D20u, sub_00165D20); /* call 0x00165D20 */

loc_0005E0AF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005E0C0
 * Original: 0x0005E0C0 - 0x0005E1DF (287 bytes, 85 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005E0C0(void)
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

loc_0005E0C0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0005E0CDu); RECOMP_ABI_CALL(0x0003E960u, sub_0003E960); /* call 0x0003E960 */

loc_0005E0CD: ;
    ecx = esi + 0x4A8;
    PUSH32(esp, 0x0005E0D8u); RECOMP_ABI_CALL(0x000B14D0u, sub_000B14D0); /* call 0x000B14D0 */

loc_0005E0D8: ;
    ecx = esi + 0x4DC;
    PUSH32(esp, 0x0005E0E3u); RECOMP_ABI_CALL(0x000B14D0u, sub_000B14D0); /* call 0x000B14D0 */

loc_0005E0E3: ;
    ecx = esi + 0x440;
    PUSH32(esp, 0x0005E0EEu); RECOMP_ABI_CALL(0x000B14D0u, sub_000B14D0); /* call 0x000B14D0 */

loc_0005E0EE: ;
    ecx = esi + 0x474;
    PUSH32(esp, 0x0005E0F9u); RECOMP_ABI_CALL(0x000B14D0u, sub_000B14D0); /* call 0x000B14D0 */

loc_0005E0F9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0005E107u); RECOMP_ABI_CALL(0x00038AA0u, sub_00038AA0); /* call 0x00038AA0 */

loc_0005E107: ;
    edi = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    ebx = esi + 0x2E4;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0005E11Eu); RECOMP_ABI_CALL(0x00130090u, sub_00130090); /* call 0x00130090 */

loc_0005E11E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005E19F; /* je: equal / zero */

loc_0005E122: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = 0x30EFF0;
    PUSH32(esp, 0x0005E131u); RECOMP_ABI_CALL(0x00011ED0u, sub_00011ED0); /* call 0x00011ED0 */

loc_0005E131: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005E140u); RECOMP_ABI_CALL(0x000112B0u, sub_000112B0); /* call 0x000112B0 */

loc_0005E140: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DBED0)); /* fmul dword ptr [0x2dbed0] */
    xmm2 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = MEM32(edi);
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x18;
    fp_pop(); /* fstp st(0) */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0005E19Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E19Cu); } /* indirect call */
    }

loc_0005E19F: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0005E1ABu); RECOMP_ABI_CALL(0x00130090u, sub_00130090); /* call 0x00130090 */

loc_0005E1AB: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x0005E1B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E1AFu); } /* indirect call */
    }

loc_0005E1B5: ;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0005E1C2u); RECOMP_ABI_CALL(0x00011BD0u, sub_00011BD0); /* call 0x00011BD0 */

loc_0005E1C2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x28);
    ecx = esi;
    PUSH32(esp, 0x0005E1CDu); RECOMP_ABI_CALL(0x000130A0u, sub_000130A0); /* call 0x000130A0 */

loc_0005E1CD: ;
    ecx = esi + 0xB04;
    PUSH32(esp, 0x0005E1D8u); RECOMP_ABI_CALL(0x00168390u, sub_00168390); /* call 0x00168390 */

loc_0005E1D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0005E1E0
 * Original: 0x0005E1E0 - 0x0005E4B4 (724 bytes, 217 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005E1E0(void)
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

loc_0005E1E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41 (32-bit) */
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_0005E4A2; /* ja: above (unsigned >) */

loc_0005E1F4: ;
    eax = ZX8(MEM8(eax + 0x5E4E0));
    { uint32_t _jt = MEM32(eax * 4 + 0x5E4B4); /* switch: 11 entries, 11 targets */
    if (_jt == 0x0005E202u) goto loc_0005E202;
    if (_jt == 0x0005E219u) goto loc_0005E219;
    if (_jt == 0x0005E24Cu) goto loc_0005E24C;
    if (_jt == 0x0005E27Fu) goto loc_0005E27F;
    if (_jt == 0x0005E2D4u) goto loc_0005E2D4;
    if (_jt == 0x0005E328u) goto loc_0005E328;
    if (_jt == 0x0005E382u) goto loc_0005E382;
    if (_jt == 0x0005E412u) goto loc_0005E412;
    if (_jt == 0x0005E473u) goto loc_0005E473;
    if (_jt == 0x0005E485u) goto loc_0005E485;
    if (_jt == 0x0005E4A2u) goto loc_0005E4A2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0005E202: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esi + 0x2E4;
    PUSH32(esp, 0x0005E212u); RECOMP_ABI_CALL(0x001418E0u, sub_001418E0); /* call 0x001418E0 */

loc_0005E212: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0005E219: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005E22F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0005E227: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */

loc_0005E22F: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = esi + 0x2E4;
    PUSH32(esp, 0x0005E245u); RECOMP_ABI_CALL(0x00141880u, sub_00141880); /* call 0x00141880 */

loc_0005E245: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0005E24C: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005E262; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0005E25A: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */

loc_0005E262: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi + 0x2E4;
    PUSH32(esp, 0x0005E278u); RECOMP_ABI_CALL(0x001418B0u, sub_001418B0); /* call 0x001418B0 */

loc_0005E278: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0005E27F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0005E289u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E283u); } /* indirect call */
    }

loc_0005E289: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005E43B; /* je: equal / zero */

loc_0005E291: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x0005E29Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E297u); } /* indirect call */
    }

loc_0005E29D: ;
    ecx = eax;
    PUSH32(esp, 0x0005E2A4u); RECOMP_ABI_CALL(0x0003EAB0u, sub_0003EAB0); /* call 0x0003EAB0 */

loc_0005E2A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005E43B; /* je: equal / zero */

loc_0005E2AC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0005E2B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E2B2u); } /* indirect call */
    }

loc_0005E2B8: ;
    ecx = eax;
    PUSH32(esp, 0x0005E2BFu); RECOMP_ABI_CALL(0x0003EAB0u, sub_0003EAB0); /* call 0x0003EAB0 */

loc_0005E2BF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    POP32(esp, edi);
    MEMF(eax + 0x248) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0005E2D4: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x0005E2DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E2D8u); } /* indirect call */
    }

loc_0005E2DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005E43B; /* je: equal / zero */

loc_0005E2E6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0005E2F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E2EAu); } /* indirect call */
    }

loc_0005E2F0: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + ecx * 4 + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005E43B; /* je: equal / zero */

loc_0005E2FF: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0005E309u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E303u); } /* indirect call */
    }

loc_0005E309: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + ecx * 4 + 0x14);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    POP32(esp, edi);
    MEMF(edx + 0x22C) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0005E328: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005E43B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0005E33B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x0005E345u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E33Fu); } /* indirect call */
    }

loc_0005E345: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005E43B; /* je: equal / zero */

loc_0005E34D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0005E357u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E351u); } /* indirect call */
    }

loc_0005E357: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + ecx * 4 + 0x14);
    eax = MEM32(esi + 0x43C);
    MEM32(edx + 0x218) = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0005E374u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E36Eu); } /* indirect call */
    }

loc_0005E374: ;
    ecx = eax;
    PUSH32(esp, 0x0005E37Bu); RECOMP_ABI_CALL(0x00041620u, sub_00041620); /* call 0x00041620 */

loc_0005E37B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0005E382: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005E43B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0005E395: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x0005E39Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E399u); } /* indirect call */
    }

loc_0005E39F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005E43B; /* je: equal / zero */

loc_0005E3A7: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0005E3B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E3ABu); } /* indirect call */
    }

loc_0005E3B1: ;
    ecx = MEM32(eax + 4);
    edi = MEM32(eax + ecx * 4 + 0x14);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0005E3C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E3BCu); } /* indirect call */
    }

loc_0005E3C2: ;
    ecx = eax;
    PUSH32(esp, 0x0005E3C9u); RECOMP_ABI_CALL(0x00041570u, sub_00041570); /* call 0x00041570 */

loc_0005E3C9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x0005E3D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E3CDu); } /* indirect call */
    }

loc_0005E3D3: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + ecx * 4 + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + ecx * 4 + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005E43B; /* je: equal / zero */

loc_0005E3DC: ;
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005E3E6u); RECOMP_ABI_CALL(0x000976D0u, sub_000976D0); /* call 0x000976D0 */

loc_0005E3E6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005E43B; /* je: equal / zero */

loc_0005E3EA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0005E3F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E3EEu); } /* indirect call */
    }

loc_0005E3F4: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + ecx * 4 + 0x14);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, edx);
    ecx = 0x4140E8;
    PUSH32(esp, 0x0005E40Bu); RECOMP_ABI_CALL(0x00097760u, sub_00097760); /* call 0x00097760 */

loc_0005E40B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0005E412: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005E442; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0005E420: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);

loc_0005E425: ;
    _fb = (uint32_t)(0x2E4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2E4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0005E432u); RECOMP_ABI_CALL(0x00141880u, sub_00141880); /* call 0x00141880 */

loc_0005E432: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0005E43Bu); RECOMP_ABI_CALL(0x001418B0u, sub_001418B0); /* call 0x001418B0 */

loc_0005E43B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0005E442: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    PUSH32(esp, 0);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005E425; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0005E449: ;
    _fb = (uint32_t)(0x2E4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2E4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0005E456u); RECOMP_ABI_CALL(0x00141880u, sub_00141880); /* call 0x00141880 */

loc_0005E456: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0005E46Cu); RECOMP_ABI_CALL(0x001418B0u, sub_001418B0); /* call 0x001418B0 */

loc_0005E46C: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0005E473: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0005E480u); RECOMP_ABI_CALL(0x00041C50u, sub_00041C50); /* call 0x00041C50 */

loc_0005E480: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0005E485: ;
    ecx = esi + 0x16C0;
    PUSH32(esp, 0x0005E490u); RECOMP_ABI_CALL(0x0014F3F0u, sub_0014F3F0); /* call 0x0014F3F0 */

loc_0005E490: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0005E49Du); RECOMP_ABI_CALL(0x00041C50u, sub_00041C50); /* call 0x00041C50 */

loc_0005E49D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0005E4A2: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0005E4AFu); RECOMP_ABI_CALL(0x00041C50u, sub_00041C50); /* call 0x00041C50 */

loc_0005E4AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0005E530
 * Original: 0x0005E530 - 0x0005E62F (255 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0005E530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005E530: ;
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
    esi = ecx;
    PUSH32(esp, edi);
    eax = esp + 0x30;
    edi = esi + 0x2E4;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005E54Fu); RECOMP_ABI_CALL(0x001300F0u, sub_001300F0); /* call 0x001300F0 */

loc_0005E54F: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005E55Bu); RECOMP_ABI_CALL(0x0012FFC0u, sub_0012FFC0); /* call 0x0012FFC0 */

loc_0005E55B: ;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005E56Au); RECOMP_ABI_CALL(0x001F7F00u, sub_001F7F00); /* call 0x001F7F00 */

loc_0005E56A: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005E576u); RECOMP_ABI_CALL(0x00130090u, sub_00130090); /* call 0x00130090 */

loc_0005E576: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    ecx = esp + 0x30;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005E5B7u); RECOMP_ABI_CALL(0x0022FA9Eu, sub_0022FA9E); /* call 0x0022FA9E */

loc_0005E5B7: ;
    PUSH32(esp, eax);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005E5C2u); RECOMP_ABI_CALL(0x0022F9BCu, sub_0022F9BC); /* call 0x0022F9BC */

loc_0005E5C2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    edx = MEM32(esi);
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    eax = esp + 0x40;
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0005E603u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E600u); } /* indirect call */
    }

loc_0005E603: ;
    ecx = esi + 0x280;
    PUSH32(esp, ecx);
    ecx = 0x37E158;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005E614u); RECOMP_ABI_CALL(0x00154460u, sub_00154460); /* call 0x00154460 */

loc_0005E614: ;
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0005E620u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E61Du); } /* indirect call */
    }

loc_0005E620: ;
    PUSH32(esp, eax);
    ecx = esi + 0x3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005E629u); RECOMP_ABI_CALL(0x002035D0u, sub_002035D0); /* call 0x002035D0 */

loc_0005E629: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0005E630
 * Original: 0x0005E630 - 0x0005E690 (96 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005E630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005E630: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0005E63Fu); RECOMP_ABI_CALL(0x0003FB50u, sub_0003FB50); /* call 0x0003FB50 */

loc_0005E63F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005E64D; /* je: equal / zero */

loc_0005E643: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14C); PUSH32(esp, 0x0005E64Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E647u); } /* indirect call */
    }

loc_0005E64D: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0005E659u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E653u); } /* indirect call */
    }

loc_0005E659: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0005E68A; /* jle: less or equal (signed <=) */

loc_0005E660: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x0005E66Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E666u); } /* indirect call */
    }

loc_0005E66C: ;
    ecx = eax;
    PUSH32(esp, 0x0005E673u); RECOMP_ABI_CALL(0x0003EAB0u, sub_0003EAB0); /* call 0x0003EAB0 */

loc_0005E673: ;
    ecx = eax;
    PUSH32(esp, 0x0005E67Au); RECOMP_ABI_CALL(0x0003AF10u, sub_0003AF10); /* call 0x0003AF10 */

loc_0005E67A: ;
    edx = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0005E685u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E67Fu); } /* indirect call */
    }

loc_0005E685: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005E660; /* jl: less (signed <) */

loc_0005E68A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005E690
 * Original: 0x0005E690 - 0x0005E740 (176 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005E690(void)
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

loc_0005E690: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D425416) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D425416 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0005E734; /* je: equal / zero */

loc_0005E6A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD3916D68u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD3916D68u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005E6B3; /* je: equal / zero */

loc_0005E6A9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005E6AFu); RECOMP_ABI_CALL(0x00040270u, sub_00040270); /* call 0x00040270 */

loc_0005E6AF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0005E6B3: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esi);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x0005E6C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E6BEu); } /* indirect call */
    }

loc_0005E6C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005E72C; /* je: equal / zero */

loc_0005E6C8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0005E6D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E6CCu); } /* indirect call */
    }

loc_0005E6D2: ;
    ecx = MEM32(eax);
    ecx = MEM32(eax + ecx * 4 + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005E72C; /* je: equal / zero */

loc_0005E6DC: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1DC)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0005E72C; /* jnp: not parity */

loc_0005E6F0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x23C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 0x1DC); /* divss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005E713; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0005E705: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0005E713: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0005E72C; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0005E726: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_0005E72C: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0005E734: ;
    fp_push(MEMF(0x2E39E8)); /* fld float */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0005E740
 * Original: 0x0005E740 - 0x0005E8E5 (421 bytes, 104 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005E740(void)
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

loc_0005E740: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x2E4;
    ecx = edi;
    PUSH32(esp, 0x0005E754u); RECOMP_ABI_CALL(0x001302C0u, sub_001302C0); /* call 0x001302C0 */

loc_0005E754: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    ecx = edi;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0005E763u); RECOMP_ABI_CALL(0x00130390u, sub_00130390); /* call 0x00130390 */

loc_0005E763: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E39EC); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = xmm0; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0xAEC); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esi + 0xAEC) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005E7BD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0005E7A3: ;
    xmm4 = xmm1; /* movaps */

loc_0005E7A6: ;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm4 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_0005E7A6; /* ja: above (unsigned >) (xmm1.f[0] vs xmm2.f[0]) */

loc_0005E7B5: ;
    MEMF(esi + 0xAEC) = xmm4.f[0]; /* movss */

loc_0005E7BD: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0xAEC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005E7E8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esi + 0xAEC)) */

loc_0005E7C9: ;
    xmm5 = XMM_SCALAR(MEMF(esi + 0xAEC)); /* movss */

loc_0005E7D1: ;
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm5 = xmm4; /* movaps */
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0005E7D1; /* ja: above (unsigned >) (xmm1.f[0] vs xmm5.f[0]) */

loc_0005E7E0: ;
    MEMF(esi + 0xAEC) = xmm5.f[0]; /* movss */

loc_0005E7E8: ;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xAF0); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esi + 0xAF0) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005E81B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0005E801: ;
    xmm3 = xmm0; /* movaps */

loc_0005E804: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm3 = xmm0; /* movaps */
    if ((_fca > _fcb)) goto loc_0005E804; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_0005E813: ;
    MEMF(esi + 0xAF0) = xmm3.f[0]; /* movss */

loc_0005E81B: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0xAF0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005E847; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esi + 0xAF0)) */

loc_0005E824: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0xAF0)); /* movss */
    /* nop */

loc_0005E830: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0005E830; /* ja: above (unsigned >) (xmm1.f[0] vs xmm3.f[0]) */

loc_0005E83F: ;
    MEMF(esi + 0xAF0) = xmm3.f[0]; /* movss */

loc_0005E847: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xAEC)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    MEM32(esi + 0xACC) = eax;
    SET_LO8(eax, MEM8(esi + 0xAD8));
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM32(esi + 0xAD0) = ecx;
    SET_LO8(ecx, 4);
    SET_LO8(edx, 0xFB);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0005E886; /* jp: parity */

loc_0005E882: ;
    SET_LO8(eax, LO8(eax) & LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_0005E888;

loc_0005E886: ;
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0005E888: ;
    MEM8(esi + 0xAD8) = LO8(eax);
    xmm0 = XMM_SCALAR(MEMF(esi + 0xAF0)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    MEM32(esi + 0xADC) = eax;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0xAE0) = eax;
    SET_LO8(eax, MEM8(esi + 0xAE8));
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0005E8D5; /* jp: parity */

loc_0005E8C5: ;
    SET_LO8(eax, LO8(eax) & LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM8(esi + 0xAE8) = LO8(eax);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0005E8D5: ;
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM8(esi + 0xAE8) = LO8(eax);
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
 * sub_0005E8F0
 * Original: 0x0005E8F0 - 0x0005EA23 (307 bytes, 79 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005E8F0(void)
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

loc_0005E8F0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x0005E8FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E8F8u); } /* indirect call */
    }

loc_0005E8FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005EA1C; /* je: equal / zero */

loc_0005E906: ;
    edx = MEM32(edi);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0005E913u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E90Du); } /* indirect call */
    }

loc_0005E913: ;
    ecx = eax;
    PUSH32(esp, 0x0005E91Au); RECOMP_ABI_CALL(0x0003EAB0u, sub_0003EAB0); /* call 0x0003EAB0 */

loc_0005E91A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005EA1B; /* je: equal / zero */

loc_0005E924: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0xAF4)); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xAF8)); /* movss */
    PUSH32(esp, eax);
    ecx = edi + 0x2E4;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0005E950u); RECOMP_ABI_CALL(0x00130340u, sub_00130340); /* call 0x00130340 */

loc_0005E950: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0005E95Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E959u); } /* indirect call */
    }

loc_0005E95C: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    edx = MEM32(esi);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x2C); /* mulss */
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0005E9A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005E9A6u); } /* indirect call */
    }

loc_0005E9A9: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x2C); /* mulss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x244)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0005EA05u); RECOMP_ABI_CALL(0x0003B240u, sub_0003B240); /* call 0x0003B240 */

loc_0005EA05: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0005EA0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005EA09u); } /* indirect call */
    }

loc_0005EA0C: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0005EA1Bu); RECOMP_ABI_CALL(0x0003B1C0u, sub_0003B1C0); /* call 0x0003B1C0 */

loc_0005EA1B: ;
    POP32(esp, esi);

loc_0005EA1C: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0005EA30
 * Original: 0x0005EA30 - 0x0005EA36 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005EA30(void)
{

loc_0005EA30: ;
    eax = MEM32(0x30D8A4);
    esp += 4; return; /* ret */

}

/**
 * sub_0005EA40
 * Original: 0x0005EA40 - 0x0005EA4B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005EA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005EA40: ;
    _fb = (uint32_t)(0x2E4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2E4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001302C0(); return; /* tail jmp 0x001302C0 */

}

/**
 * sub_0005EA50
 * Original: 0x0005EA50 - 0x0005EA67 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005EA50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005EA50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x2E4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2E4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0005EA61u); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_0005EA61: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005EA70
 * Original: 0x0005EA70 - 0x0005EA7B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005EA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005EA70: ;
    _fb = (uint32_t)(0x2E4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2E4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001303D0(); return; /* tail jmp 0x001303D0 */

}

/**
 * sub_0005EA80
 * Original: 0x0005EA80 - 0x0005ECEF (623 bytes, 117 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005EA80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005EA80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x241586);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x0005EAA4u); RECOMP_ABI_CALL(0x0003ED40u, sub_0003ED40); /* call 0x0003ED40 */

loc_0005EAA4: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x280;
    MEM32(esp + 0x18) = edi;
    MEM32(esi) = 0x2E3760;
    PUSH32(esp, 0x0005EABBu); RECOMP_ABI_CALL(0x00153A10u, sub_00153A10); /* call 0x00153A10 */

loc_0005EABB: ;
    ecx = esi + 0x2E4;
    MEM8(esp + 0x18) = 1;
    PUSH32(esp, 0x0005EACBu); RECOMP_ABI_CALL(0x00141920u, sub_00141920); /* call 0x00141920 */

loc_0005EACB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DD414)); /* movss */
    MEM32(esi + 0x3FC) = edi;
    MEM32(esi + 0x400) = edi;
    MEM32(esi + 0x404) = edi;
    MEM32(esi + 0x408) = edi;
    MEM32(esi + 0x40C) = edi;
    MEM32(esi + 0x438) = esi;
    MEM32(esi + 0x410) = edi;
    MEM32(esi + 0x414) = edi;
    MEM32(esi + 0x418) = edi;
    MEM32(esi + 0x41C) = edi;
    MEM32(esi + 0x420) = edi;
    MEM32(esi + 0x424) = edi;
    MEM32(esi + 0x428) = edi;
    MEM32(esi + 0x42C) = edi;
    MEM32(esi + 0x430) = edi;
    MEM32(esi + 0x434) = edi;
    eax = 0x2E15D8;
    MEM32(esi + 0x440) = eax;
    MEM32(esi + 0x444) = edi;
    MEM32(esi + 0x448) = edi;
    MEM32(esi + 0x44C) = edi;
    MEMF(esi + 0x45C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x468) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x46C) = xmm1.f[0]; /* movss */
    MEM32(esi + 0x474) = eax;
    MEM32(esi + 0x478) = edi;
    MEM32(esi + 0x47C) = edi;
    MEM32(esi + 0x480) = edi;
    MEMF(esi + 0x490) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x49C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x4A0) = xmm1.f[0]; /* movss */
    MEM32(esi + 0x4A8) = eax;
    MEM32(esi + 0x4AC) = edi;
    MEM32(esi + 0x4B0) = edi;
    MEM32(esi + 0x4B4) = edi;
    MEMF(esi + 0x4C4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x4D0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x4D4) = xmm1.f[0]; /* movss */
    MEM32(esi + 0x4DC) = eax;
    MEM32(esi + 0x4E0) = edi;
    MEM32(esi + 0x4E4) = edi;
    MEM32(esi + 0x4E8) = edi;
    MEMF(esi + 0x4F8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x504) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x508) = xmm1.f[0]; /* movss */
    ebx = esi + 0x520;
    ecx = ebx;
    MEM8(esp + 0x18) = 6;
    PUSH32(esp, 0x0005EC0Du); RECOMP_ABI_CALL(0x00203740u, sub_00203740); /* call 0x00203740 */

loc_0005EC0D: ;
    MEM32(ebx) = 0x2DD908;
    ecx = esi + 0x5F0;
    MEM8(esp + 0x18) = 7;
    PUSH32(esp, 0x0005EC23u); RECOMP_ABI_CALL(0x00203D00u, sub_00203D00); /* call 0x00203D00 */

loc_0005EC23: ;
    MEM32(esi + 0x8C4) = edi;
    MEM8(esp + 0x18) = 8;
    MEM32(esi + 0x8C8) = edi;
    eax = esi + 0x9CC;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005EC42u); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_0005EC42: ;
    SET_LO8(ecx, MEM8(esi + 0xAD8));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(ecx, LO8(ecx) & 0xFB);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEMF(esi + 0xACC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xAD0) = xmm0.f[0]; /* movss */
    eax = 0x80808080u;
    MEM32(esi + 0xAD4) = eax;
    SET_LO8(ecx, LO8(ecx) | 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0xAD8) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0xAE8));
    SET_LO8(edx, LO8(edx) & 0xFB);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) | 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xB04;
    MEMF(esi + 0xADC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xAE0) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xAE4) = eax;
    MEM8(esi + 0xAE8) = LO8(edx);
    PUSH32(esp, 0x0005ECA8u); RECOMP_ABI_CALL(0x00166F10u, sub_00166F10); /* call 0x00166F10 */

loc_0005ECA8: ;
    ecx = esi + 0x13E0;
    MEM8(esp + 0x18) = 9;
    PUSH32(esp, 0x0005ECB8u); RECOMP_ABI_CALL(0x0016D490u, sub_0016D490); /* call 0x0016D490 */

loc_0005ECB8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x16C0) = 0x2E3734;
    MEMF(esi + 0xAFC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB00) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x43C) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0005ECF0
 * Original: 0x0005ECF0 - 0x0005ED0E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005ECF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005ECF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0005ECF8u); RECOMP_ABI_CALL(0x0005DDD0u, sub_0005DDD0); /* call 0x0005DDD0 */

loc_0005ECF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005ED08; /* je: equal / zero */

loc_0005ECFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0005ED05u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0005ED05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005ED08: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005ED10
 * Original: 0x0005ED10 - 0x0005ED8B (123 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005ED10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005ED10: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B6EF5D2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4B6EF5D2 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0005ED49; /* je: equal / zero */

loc_0005ED1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBB229EE0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBB229EE0u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005ED2F; /* je: equal / zero */

loc_0005ED25: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005ED2Bu); RECOMP_ABI_CALL(0x000403B0u, sub_000403B0); /* call 0x000403B0 */

loc_0005ED2B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0005ED2F: ;
    eax = MEM32(esi + 0x13C0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x13CD);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 8; return; /* ret 4 */

loc_0005ED49: ;
    ecx = MEM32(esi + 0x13C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005ED75; /* je: equal / zero */

loc_0005ED53: ;
    PUSH32(esp, 0x0005ED58u); RECOMP_ABI_CALL(0x001624B0u, sub_001624B0); /* call 0x001624B0 */

loc_0005ED58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005ED75; /* jne: not equal / not zero */

loc_0005ED5C: ;
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x13CC);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 8; return; /* ret 4 */

loc_0005ED75: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x13CC);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005ED90
 * Original: 0x0005ED90 - 0x0005F148 (952 bytes, 246 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0005ED90(void)
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

loc_0005ED90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC4));
    esp = esp - 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esp + 0x30;
    ecx = esi + 0x2E4;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x30) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005EDB9u); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_0005EDB9: ;
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
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC350)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0005EDFD; /* jbe: below or equal (unsigned <=) */

loc_0005EDED: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC350)); /* movss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    goto loc_0005EE03;

loc_0005EDFD: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_0005EE03: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC3C4)); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E39FC); /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x2E39F8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E39F4); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E39F0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005F13F; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_0005EE5A: ;
    eax = MEM32(esi + 0x58);
    ecx = MEM32(0x643844);
    MEM32(ecx) = eax;
    edx = MEM32(0x6438B4);
    esi = ecx;
    ecx = MEM32(0x6438A8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005EE7Cu); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0005EE7C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0005EE8A; /* jge: greater or equal (signed >=) */

loc_0005EE83: ;
    eax = 0x6438B8;
    goto loc_0005EE93;

loc_0005EE8A: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_0005EE93: ;
    ebx = MEM32(eax);
    MEM32(esi + 4) = ebx;
    edi = 0x2E3724;
    esi = esp + 0xA8;

loc_0005EEA4: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(edi);
    eax = ecx + 0x60;
    PUSH32(esp, eax);
    eax = ecx + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005EEC6u); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_0005EEC6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    MEMF(esi + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xC)) >> 32) & 1);
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E3734) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x2E3734 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0005EEA4; /* jl: less (signed <) */

loc_0005EEFD: ;
    ebx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0xAFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xAFC)) >> 32) & 1);
    ebx = ebx + 0xAFC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 0xA4;
    MEM32(esp + 0xC) = 2;
    goto loc_0005EF20;

    /* nop */
    /* nop */

loc_0005EF20: ;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ebx) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005F12A; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0005EF39: ;
    ecx = MEM32(0x30EFF0);
    eax = ecx;
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(0u - (uint32_t)(LO8(edx))));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    xmm5 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + -4); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esi + 4); /* subss */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi); /* subss */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x8B6724B5u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x98CE4424u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x98CE4424u)) >> 32) & 1);
    edx = edx + 0x98CE4424u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
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
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((8) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((8) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x3F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + -4); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 4); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC3C4); /* mulss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(0x30EFF0) = ecx;
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm3.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005EFF8; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0005EFF3: ;
    xmm3 = xmm4; /* movaps */
    goto loc_0005F003;

loc_0005EFF8: ;
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    xmm3 = xmm5; /* movaps */
    if ((_fca > _fcb)) goto loc_0005F003; /* ja: above (unsigned >) (xmm0.f[0] vs xmm5.f[0]) */

loc_0005F000: ;
    xmm3 = xmm0; /* movaps */

loc_0005F003: ;
    xmm0 = XMM_SCALAR(MEMF(0x30F064)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30F068)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x30F06C)); /* movss */
    edi = MEM32(esp + 0x2C);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(0x2DC880)); /* movss */
    eax = esp + 0x54;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F05Du); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_0005F05D: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x1C); /* addss */
    PUSH32(esp, 0);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F09Du); RECOMP_ABI_CALL(0x00130180u, sub_00130180); /* call 0x00130180 */

loc_0005F09D: ;
    PUSH32(esp, eax);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F0A8u); RECOMP_ABI_CALL(0x000B0710u, sub_000B0710); /* call 0x000B0710 */

loc_0005F0A8: ;
    PUSH32(esp, 0);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F0B9u); RECOMP_ABI_CALL(0x000A6F80u, sub_000A6F80); /* call 0x000A6F80 */

loc_0005F0B9: ;
    ecx = MEM32(0x30EFF0);
    eax = ecx;
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(0u - (uint32_t)(LO8(edx))));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x8B6724B5u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x98CE4424u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x98CE4424u)) >> 32) & 1);
    edx = edx + 0x98CE4424u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
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
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((8) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((8) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x3F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x14) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC08C); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC340); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEM32(0x30EFF0) = ecx;
    MEMF(ebx) = xmm0.f[0]; /* movss */

loc_0005F12A: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xC)) >> 32) & 1);
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = eax;
    if ((_fa != 0)) goto loc_0005EF20; /* jne: not equal / not zero */

loc_0005F13F: ;
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
 * sub_0005F150
 * Original: 0x0005F150 - 0x0005F38D (573 bytes, 160 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0005F150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0005F150: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x643844);
    eax = MEM32(esi + 0x58);
    MEM32(ecx) = eax;
    edx = MEM32(0x6438B4);
    ebx = ecx;
    ecx = MEM32(0x6438A8);
    PUSH32(esp, edi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F180u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0005F180: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0005F18E; /* jge: greater or equal (signed >=) */

loc_0005F187: ;
    eax = 0x6438B8;
    goto loc_0005F197;

loc_0005F18E: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_0005F197: ;
    edi = MEM32(eax);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ebx + 4) = edi;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x378); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005F281; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x378)) */

loc_0005F1AC: ;
    edx = MEM32(esi + 0x518);
    ebx = esi + 0x60;
    PUSH32(esp, ebx);
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F1CEu); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_0005F1CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005F1EE; /* je: equal / zero */

loc_0005F1D2: ;
    ecx = esi + 0x4A8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F1DDu); RECOMP_ABI_CALL(0x00209720u, sub_00209720); /* call 0x00209720 */

loc_0005F1DD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005F1EE; /* jne: not equal / not zero */

loc_0005F1E1: ;
    PUSH32(esp, 0);
    ecx = esi + 0x4A8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F1EEu); RECOMP_ABI_CALL(0x000B14A0u, sub_000B14A0); /* call 0x000B14A0 */

loc_0005F1EE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    PUSH32(esp, ebx);
    MEMF(esi + 0x4B8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    MEMF(esi + 0x4BC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    PUSH32(esp, 1);
    MEMF(esi + 0x4C0) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x51C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F237u); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_0005F237: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005F255; /* je: equal / zero */

loc_0005F23B: ;
    ebx = esi + 0x4DC;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F248u); RECOMP_ABI_CALL(0x00209720u, sub_00209720); /* call 0x00209720 */

loc_0005F248: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005F255; /* jne: not equal / not zero */

loc_0005F24C: ;
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F255u); RECOMP_ABI_CALL(0x000B14A0u, sub_000B14A0); /* call 0x000B14A0 */

loc_0005F255: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esi + 0x4EC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esi + 0x4F0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esi + 0x4F4) = xmm0.f[0]; /* movss */
    goto loc_0005F2B1;

loc_0005F281: ;
    ebx = esi + 0x4A8;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F28Eu); RECOMP_ABI_CALL(0x00209720u, sub_00209720); /* call 0x00209720 */

loc_0005F28E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005F299; /* je: equal / zero */

loc_0005F292: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F299u); RECOMP_ABI_CALL(0x000B14D0u, sub_000B14D0); /* call 0x000B14D0 */

loc_0005F299: ;
    ebx = esi + 0x4DC;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F2A6u); RECOMP_ABI_CALL(0x00209720u, sub_00209720); /* call 0x00209720 */

loc_0005F2A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005F2B1; /* je: equal / zero */

loc_0005F2AA: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F2B1u); RECOMP_ABI_CALL(0x000B14D0u, sub_000B14D0); /* call 0x000B14D0 */

loc_0005F2B1: ;
    ebx = esi + 0x60;
    PUSH32(esp, ebx);
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x510);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F2D3u); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_0005F2D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005F2F3; /* je: equal / zero */

loc_0005F2D7: ;
    ecx = esi + 0x440;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F2E2u); RECOMP_ABI_CALL(0x00209720u, sub_00209720); /* call 0x00209720 */

loc_0005F2E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005F2F3; /* jne: not equal / not zero */

loc_0005F2E6: ;
    PUSH32(esp, 0);
    ecx = esi + 0x440;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F2F3u); RECOMP_ABI_CALL(0x000B14A0u, sub_000B14A0); /* call 0x000B14A0 */

loc_0005F2F3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    PUSH32(esp, ebx);
    MEMF(esi + 0x450) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    MEMF(esi + 0x454) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    PUSH32(esp, 1);
    MEMF(esi + 0x458) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x514);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F33Cu); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_0005F33C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005F35A; /* je: equal / zero */

loc_0005F340: ;
    edi = esi + 0x474;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F34Du); RECOMP_ABI_CALL(0x00209720u, sub_00209720); /* call 0x00209720 */

loc_0005F34D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005F35A; /* jne: not equal / not zero */

loc_0005F351: ;
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F35Au); RECOMP_ABI_CALL(0x000B14A0u, sub_000B14A0); /* call 0x000B14A0 */

loc_0005F35A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esi + 0x484) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esi + 0x488) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0x48C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005F390
 * Original: 0x0005F390 - 0x0005F441 (177 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0005F390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005F390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x643844);
    eax = MEM32(esi + 0x58);
    PUSH32(esp, edi);
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
    PUSH32(esp, 0x0005F3C0u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0005F3C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0005F3CE; /* jge: greater or equal (signed >=) */

loc_0005F3C7: ;
    eax = 0x6438B8;
    goto loc_0005F3D7;

loc_0005F3CE: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_0005F3D7: ;
    ebx = MEM32(eax);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = esi;
    esi = MEM32(ebp + 8);
    MEM32(edi + 4) = ebx;
    edi = 0x2E3724;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_0005F3F0: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F40Au); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_0005F40A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esi + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E3734) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x2E3734 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005F3F0; /* jl: less (signed <) */

loc_0005F438: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005F450
 * Original: 0x0005F450 - 0x0005F86C (1052 bytes, 285 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0005F450(void)
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

loc_0005F450: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F46Au); RECOMP_ABI_CALL(0x0003F130u, sub_0003F130); /* call 0x0003F130 */

loc_0005F46A: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x134603D7);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0005F476u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F473u); } /* indirect call */
    }

loc_0005F476: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0005F4CE; /* je: equal / zero */

loc_0005F47E: ;
    edx = MEM32(esi + 0x3C);
    ebx = esi + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0005F48Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F487u); } /* indirect call */
    }

loc_0005F48A: ;
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F498u); RECOMP_ABI_CALL(0x001F5100u, sub_001F5100); /* call 0x001F5100 */

loc_0005F498: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0005F49Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F49Cu); } /* indirect call */
    }

loc_0005F49F: ;
    ecx = MEM32(esp + 0x10);
    ebx = esi + 0x1D8;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F4B1u); RECOMP_ABI_CALL(0x001F5200u, sub_001F5200); /* call 0x001F5200 */

loc_0005F4B1: ;
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F4BFu); RECOMP_ABI_CALL(0x001F3CE0u, sub_001F3CE0); /* call 0x001F3CE0 */

loc_0005F4BF: ;
    MEM8(ebx + 0x24) = MEM8(ebx + 0x24) | 1;
    _fa = (uint32_t)(MEM8(ebx + 0x24)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0005F4CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F4C7u); } /* indirect call */
    }

loc_0005F4CA: ;
    eax = MEM32(esp + 0x10);

loc_0005F4CE: ;
    ecx = MEM32(0x643844);
    MEM32(ecx) = eax;
    edx = MEM32(0x6438B4);
    ebx = ecx;
    ecx = MEM32(0x6438A8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F4EDu); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0005F4ED: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0005F4FB; /* jge: greater or equal (signed >=) */

loc_0005F4F4: ;
    eax = 0x6438B8;
    goto loc_0005F504;

loc_0005F4FB: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_0005F504: ;
    eax = MEM32(eax);
    MEM32(ebx + 4) = eax;
    MEM32(esp + 0x14) = eax;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x20) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(esp + 0x24) = ecx;
    edx = MEM32(eax + 0x10);
    ecx = esp + 0x30;
    MEM32(esp + 0x28) = edx;
    eax = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x30) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F545u); RECOMP_ABI_CALL(0x0005F390u, sub_0005F390); /* call 0x0005F390 */

loc_0005F545: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ebx = esi + 0x2E4;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F55Eu); RECOMP_ABI_CALL(0x00142810u, sub_00142810); /* call 0x00142810 */

loc_0005F55E: ;
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F567u); RECOMP_ABI_CALL(0x00141880u, sub_00141880); /* call 0x00141880 */

loc_0005F567: ;
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F570u); RECOMP_ABI_CALL(0x001418B0u, sub_001418B0); /* call 0x001418B0 */

loc_0005F570: ;
    eax = MEM32(esi);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F582u); RECOMP_ABI_CALL(0x00130C20u, sub_00130C20); /* call 0x00130C20 */

loc_0005F582: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0005F58Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F589u); } /* indirect call */
    }

loc_0005F58C: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC344)); /* movss */
    MEMF(esi + 0x16F8) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x94A30D22u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0005F5A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F5A5u); } /* indirect call */
    }

loc_0005F5A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005F5BB; /* je: equal / zero */

loc_0005F5AC: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F5B2u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_0005F5B2: ;
    MEMF(esi + 0x16F8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005F5BB: ;
    eax = esi + 0x5F0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x5C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0005F5D1; /* je: equal / zero */

loc_0005F5C8: ;
    ecx = esi + 0x60;
    MEM32(eax + 0x2D0) = ecx;

loc_0005F5D1: ;
    PUSH32(esp, eax);
    edx = esi + 0x60;
    ebx = esi + 0x8C4;
    PUSH32(esp, edi);
    ecx = esi + 0x13E0;
    MEM32(esi + 0x8C0) = edx;
    MEM32(esi + 0x70) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F5F0u); RECOMP_ABI_CALL(0x0016CC20u, sub_0016CC20); /* call 0x0016CC20 */

loc_0005F5F0: ;
    eax = MEM32(esi + 0x9C);
    ecx = esi + 0x280;
    PUSH32(esp, ecx);
    ecx = 0x37E158;
    MEM32(esi + 0x13E4) = esi;
    MEM32(esi + 0x2DC) = esi;
    MEM32(esi + 0x294) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F619u); RECOMP_ABI_CALL(0x001543C0u, sub_001543C0); /* call 0x001543C0 */

loc_0005F619: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x3F);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x108;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0xACC;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x155F401E);
    MEMF(esi + 0x3F4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3F8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F649u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_0005F649: ;
    edx = MEM32(esp + 0x1C);
    ecx = esi + 0x8C4;
    MEM32(ecx + eax * 4 + 8) = edx;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3F);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x108;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0xEE8E9473u);
    ebx = esi + 0xADC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F672u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_0005F672: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2DD444)); /* movss */
    MEM32(esi + eax * 4 + 0x8CC) = ebx;
    edx = MEM32(esi + 0x8C4);
    ecx = esi + 0x8C4;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = edx;
    edx = MEM32(esi);
    eax = 0x20101080;
    MEM32(esi + 0x4C8) = eax;
    MEM32(esi + 0x4FC) = eax;
    eax = 0x40607080;
    MEMF(esi + 0xAEC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xAF0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC904)); /* movss */
    ecx = esi;
    MEM32(esi + 0x518) = 0x41632B8D;
    MEMF(esi + 0x4C4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x4D0) = xmm1.f[0]; /* movss */
    MEM32(esi + 0x51C) = 0x2362FC53;
    MEMF(esi + 0x4F8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x504) = xmm1.f[0]; /* movss */
    MEM32(esi + 0x510) = 0xA86FF310u;
    MEM32(esi + 0x460) = eax;
    MEMF(esi + 0x45C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x468) = xmm1.f[0]; /* movss */
    MEM32(esi + 0x514) = 0xA66FEFEAu;
    MEM32(esi + 0x494) = eax;
    MEMF(esi + 0x490) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x49C) = xmm1.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0005F742u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F73Cu); } /* indirect call */
    }

loc_0005F742: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005F758; /* je: equal / zero */

loc_0005F746: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x0005F751u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F74Bu); } /* indirect call */
    }

loc_0005F751: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F758u); RECOMP_ABI_CALL(0x00041050u, sub_00041050); /* call 0x00041050 */

loc_0005F758: ;
    ecx = esi + 0xB04;
    PUSH32(esp, edi);
    MEM32(ecx) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F766u); RECOMP_ABI_CALL(0x00168030u, sub_00168030); /* call 0x00168030 */

loc_0005F766: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB5C0F7CCu);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0005F772u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F76Fu); } /* indirect call */
    }

loc_0005F772: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005F787; /* je: equal / zero */

loc_0005F776: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F77Cu); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_0005F77C: ;
    MEMF(esi + 0xAF4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0005F792;

loc_0005F787: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xAF4) = xmm0.f[0]; /* movss */

loc_0005F792: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x866D5083u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0005F79Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F79Bu); } /* indirect call */
    }

loc_0005F79E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005F7B3; /* je: equal / zero */

loc_0005F7A2: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F7A8u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_0005F7A8: ;
    MEMF(esi + 0xAF8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0005F7BE;

loc_0005F7B3: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xAF8) = xmm0.f[0]; /* movss */

loc_0005F7BE: ;
    edx = MEM32(esi + 0x16C0);
    ebx = esi + 0x16C0;
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0005F7CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F7CCu); } /* indirect call */
    }

loc_0005F7CE: ;
    eax = MEM32(ebx);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5F260A9C);
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0005F7E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F7DDu); } /* indirect call */
    }

loc_0005F7E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ebx = esi + 0x16C0;
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0005F7F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F7EDu); } /* indirect call */
    }

loc_0005F7F0: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F7F8u); RECOMP_ABI_CALL(0x0014F470u, sub_0014F470); /* call 0x0014F470 */

loc_0005F7F8: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x88);
    eax = MEM32(esi + 0x520);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    edx = esi + 0x5B0;
    PUSH32(esp, edx);
    edx = MEM32(esi);
    MEM32(esp + 0x18) = eax;
    eax = esi + 0x2E4;
    PUSH32(esp, eax);
    eax = esi + 0xB0;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0005F831u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F82Bu); } /* indirect call */
    }

loc_0005F831: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    ebx = esi + 0x520;
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0005F846u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F843u); } /* indirect call */
    }

loc_0005F846: ;
    eax = esi + 0x8C4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F855u); RECOMP_ABI_CALL(0x000B35F0u, sub_000B35F0); /* call 0x000B35F0 */

loc_0005F855: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F85Cu); RECOMP_ABI_CALL(0x00203920u, sub_00203920); /* call 0x00203920 */

loc_0005F85C: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0005F863u); RECOMP_ABI_CALL(0x00041F90u, sub_00041F90); /* call 0x00041F90 */

loc_0005F863: ;
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
 * sub_0005F870
 * Original: 0x0005F870 - 0x0005F9BB (331 bytes, 115 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005F870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005F870: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0005F87Eu); RECOMP_ABI_CALL(0x000420F0u, sub_000420F0); /* call 0x000420F0 */

loc_0005F87E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005F887; /* jne: not equal / not zero */

loc_0005F882: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0005F887: ;
    ecx = esi;
    PUSH32(esp, 0x0005F88Eu); RECOMP_ABI_CALL(0x0005E530u, sub_0005E530); /* call 0x0005E530 */

loc_0005F88E: ;
    ecx = esi + 0x2E4;
    PUSH32(esp, 0x0005F899u); RECOMP_ABI_CALL(0x00141820u, sub_00141820); /* call 0x00141820 */

loc_0005F899: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005F8A5; /* je: equal / zero */

loc_0005F89D: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0005F8A5u); RECOMP_ABI_CALL(0x0005ED90u, sub_0005ED90); /* call 0x0005ED90 */

loc_0005F8A5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0005F8AFu); RECOMP_ABI_CALL(0x0005F150u, sub_0005F150); /* call 0x0005F150 */

loc_0005F8AF: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0005F8B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F8B3u); } /* indirect call */
    }

loc_0005F8B9: ;
    edx = MEM32(esi);
    ecx = esi;
    ebp = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x0005F8C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F8BFu); } /* indirect call */
    }

loc_0005F8C5: ;
    SET_LO8(ecx, MEM8(eax + 0x8D0));
    eax = MEM32(esi + 0x16C0);
    edi = esi + 0x16C0;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    ecx = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0005F90E; /* je: equal / zero */

loc_0005F8DE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0005F8E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F8E0u); } /* indirect call */
    }

loc_0005F8E3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0005F8EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F8E9u); } /* indirect call */
    }

loc_0005F8EF: ;
    ecx = eax;
    PUSH32(esp, 0x0005F8F6u); RECOMP_ABI_CALL(0x00041800u, sub_00041800); /* call 0x00041800 */

loc_0005F8F6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0005F905; /* je: equal / zero */

loc_0005F8FC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0005F903u); RECOMP_ABI_CALL(0x00150410u, sub_00150410); /* call 0x00150410 */

loc_0005F903: ;
    goto loc_0005F92E;

loc_0005F905: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0005F90Cu); RECOMP_ABI_CALL(0x00150410u, sub_00150410); /* call 0x00150410 */

loc_0005F90C: ;
    goto loc_0005F92E;

loc_0005F90E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005F916; /* je: equal / zero */

loc_0005F912: ;
    PUSH32(esp, 1);
    goto loc_0005F918;

loc_0005F916: ;
    PUSH32(esp, 0);

loc_0005F918: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0005F91Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F918u); } /* indirect call */
    }

loc_0005F91B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x0005F927u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F921u); } /* indirect call */
    }

loc_0005F927: ;
    ecx = eax;
    PUSH32(esp, 0x0005F92Eu); RECOMP_ABI_CALL(0x00041800u, sub_00041800); /* call 0x00041800 */

loc_0005F92E: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0005F936u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F933u); } /* indirect call */
    }

loc_0005F936: ;
    PUSH32(esp, ebx);
    ecx = esi + 0xB04;
    PUSH32(esp, 0x0005F942u); RECOMP_ABI_CALL(0x00168A10u, sub_00168A10); /* call 0x00168A10 */

loc_0005F942: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x234); PUSH32(esp, 0x0005F94Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F946u); } /* indirect call */
    }

loc_0005F94C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0005F95D; /* je: equal / zero */

loc_0005F952: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x274); PUSH32(esp, 0x0005F95Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F957u); } /* indirect call */
    }

loc_0005F95D: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0005F965u); RECOMP_ABI_CALL(0x0005E8F0u, sub_0005E8F0); /* call 0x0005E8F0 */

loc_0005F965: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x13E0;
    PUSH32(esp, 0x0005F971u); RECOMP_ABI_CALL(0x0016D2F0u, sub_0016D2F0); /* call 0x0016D2F0 */

loc_0005F971: ;
    eax = MEM32(esi + 0x11C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005F987; /* jne: not equal / not zero */

loc_0005F97B: ;
    ecx = MEM32(esi + 0x5C);
    PUSH32(esp, ecx);
    ecx = esi + 0x60;
    PUSH32(esp, 0x0005F987u); RECOMP_ABI_CALL(0x002049A0u, sub_002049A0); /* call 0x002049A0 */

loc_0005F987: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0005F98Fu); RECOMP_ABI_CALL(0x0005E740u, sub_0005E740); /* call 0x0005E740 */

loc_0005F98F: ;
    ecx = esi + 0x1D8;
    PUSH32(esp, 0x0005F99Au); RECOMP_ABI_CALL(0x001F3D00u, sub_001F3D00); /* call 0x001F3D00 */

loc_0005F99A: ;
    eax = MEM32(esi);
    edx = esi + 0xB0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x0005F9ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005F9A5u); } /* indirect call */
    }

loc_0005F9AB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0005F9B1u); RECOMP_ABI_CALL(0x0012C200u, sub_0012C200); /* call 0x0012C200 */

loc_0005F9B1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005F9C0
 * Original: 0x0005F9C0 - 0x0005F9CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005F9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005F9C0: ;
    MEM32(ecx) = 0x2E3A00;
    g_seh_ebp = ebp; sub_0005DDD0(); return; /* tail jmp 0x0005DDD0 */

}

/**
 * sub_0005F9D0
 * Original: 0x0005F9D0 - 0x0005F9D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005F9D0(void)
{

loc_0005F9D0: ;
    eax = 0x1710;
    esp += 4; return; /* ret */

}

/**
 * sub_0005F9E0
 * Original: 0x0005F9E0 - 0x0005F9F0 (16 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005F9E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005F9E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0005F9E8u); RECOMP_ABI_CALL(0x0005E0C0u, sub_0005E0C0); /* call 0x0005E0C0 */

loc_0005F9E8: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_0005F9F0
 * Original: 0x0005F9F0 - 0x0005FA00 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005F9F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005F9F0: ;
    g_seh_ebp = ebp; sub_0005E630(); return; /* tail jmp 0x0005E630 */

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
 * sub_0005FA00
 * Original: 0x0005FA00 - 0x0005FA05 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FA00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005FA00: ;
    g_seh_ebp = ebp; sub_0005DCE0(); return; /* tail jmp 0x0005DCE0 */

}

/**
 * sub_0005FA10
 * Original: 0x0005FA10 - 0x0005FA15 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005FA10: ;
    g_seh_ebp = ebp; sub_0005DCF0(); return; /* tail jmp 0x0005DCF0 */

}

/**
 * sub_0005FA20
 * Original: 0x0005FA20 - 0x0005FA30 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FA20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005FA20: ;
    g_seh_ebp = ebp; sub_0005E690(); return; /* tail jmp 0x0005E690 */

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
 * sub_0005FA30
 * Original: 0x0005FA30 - 0x0005FA35 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FA30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005FA30: ;
    g_seh_ebp = ebp; sub_0005E1E0(); return; /* tail jmp 0x0005E1E0 */

}

/**
 * sub_0005FA40
 * Original: 0x0005FA40 - 0x0005FA45 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005FA40: ;
    g_seh_ebp = ebp; sub_0005E070(); return; /* tail jmp 0x0005E070 */

}

/**
 * sub_0005FA50
 * Original: 0x0005FA50 - 0x0005FA56 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FA50(void)
{

loc_0005FA50: ;
    eax = MEM32(0x30D8B4);
    esp += 4; return; /* ret */

}

/**
 * sub_0005FA60
 * Original: 0x0005FA60 - 0x0005FA86 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FA60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005FA60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0005FA68u); RECOMP_ABI_CALL(0x0005EA80u, sub_0005EA80); /* call 0x0005EA80 */

loc_0005FA68: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2E3A00;
    MEM32(esi + 0x1700) = eax;
    MEM32(esi + 0x1704) = eax;
    MEM32(esi + 0x1708) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005FA90
 * Original: 0x0005FA90 - 0x0005FAAE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005FA90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0005FA98u); RECOMP_ABI_CALL(0x0005F9C0u, sub_0005F9C0); /* call 0x0005F9C0 */

loc_0005FA98: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0005FAA8; /* je: equal / zero */

loc_0005FA9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0005FAA5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0005FAA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0005FAA8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005FAB0
 * Original: 0x0005FAB0 - 0x0005FAFF (79 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FAB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005FAB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2415A0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = 0x2E1580;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 4) = 0x2E3C8C;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    MEM8(esp + 0x14) = 1;
    PUSH32(esp, 0x0005FAEEu); RECOMP_ABI_CALL(0x0005F870u, sub_0005F870); /* call 0x0005F870 */

loc_0005FAEE: ;
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005FB00
 * Original: 0x0005FB00 - 0x0005FB1B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FB00(void)
{

loc_0005FB00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0005FB0Du); RECOMP_ABI_CALL(0x0005F450u, sub_0005F450); /* call 0x0005F450 */

loc_0005FB0D: ;
    MEM32(esi + 0x204) = 0x1E;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005FB20
 * Original: 0x0005FB20 - 0x0005FB8C (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FB20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005FB20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0005FB28u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_0005FB28: ;
    MEM32(esi) = 0x2E3C94;
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
    PUSH32(esp, 0x0005FB85u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0005FB85: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005FB90
 * Original: 0x0005FB90 - 0x0005FB9C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005FB90: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0005FBA0(); return; /* tail jmp 0x0005FBA0 */

}

/**
 * sub_0005FBA0
 * Original: 0x0005FBA0 - 0x0005FC0C (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005FBA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005FC07; /* je: equal / zero */

loc_0005FBB2: ;
    edx = MEM32(edi + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x1700);
    edx = MEM32(ecx + 0x1704);
    MEM32(ecx + 0x1708) = 0;
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x1704);
    edx = MEM32(ecx + 0x1700);
    MEM32(eax) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0005FBEA; /* je: equal / zero */

loc_0005FBE4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0005FBEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005FBE8u); } /* indirect call */
    }

loc_0005FBEA: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFE8F0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFE8F0u;
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
    if (CMP_NE(_fa, _fb)) goto loc_0005FBB2; /* jne: not equal / not zero */

loc_0005FC07: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005FC10
 * Original: 0x0005FC10 - 0x0005FC6F (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005FC10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1710);
    PUSH32(esp, 0x0005FC24u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0005FC24: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005FC34; /* je: equal / zero */

loc_0005FC2B: ;
    ecx = eax;
    PUSH32(esp, 0x0005FC32u); RECOMP_ABI_CALL(0x0005FA60u, sub_0005FA60); /* call 0x0005FA60 */

loc_0005FC32: ;
    goto loc_0005FC36;

loc_0005FC34: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0005FC36: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x1700;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0xC) = edi;
    MEM32(ecx) = edx;
    MEM32(ecx + 8) = eax;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    MEM32(edx + 4) = ecx;
    edx = MEM32(ecx + 4);
    MEM32(edx) = ecx;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x1710) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1710;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005FC70
 * Original: 0x0005FC70 - 0x0005FCBA (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FC70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005FC70: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x1700;
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
 * sub_0005FCC0
 * Original: 0x0005FCC0 - 0x0005FD1F (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FCC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005FCC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x688);
    PUSH32(esp, 0x0005FCD4u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0005FCD4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005FCE4; /* je: equal / zero */

loc_0005FCDB: ;
    ecx = eax;
    PUSH32(esp, 0x0005FCE2u); RECOMP_ABI_CALL(0x00094C00u, sub_00094C00); /* call 0x00094C00 */

loc_0005FCE2: ;
    goto loc_0005FCE6;

loc_0005FCE4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0005FCE6: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x67C;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0xC) = edi;
    MEM32(ecx) = edx;
    MEM32(ecx + 8) = eax;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    MEM32(edx + 4) = ecx;
    edx = MEM32(ecx + 4);
    MEM32(edx) = ecx;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x688) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x688;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005FD20
 * Original: 0x0005FD20 - 0x0005FD35 (21 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FD20(void)
{

loc_0005FD20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0005FD28u); RECOMP_ABI_CALL(0x0005DF80u, sub_0005DF80); /* call 0x0005DF80 */

loc_0005FD28: ;
    PUSH32(esp, esi);
    ecx = 0x321918;
    PUSH32(esp, 0x0005FD33u); RECOMP_ABI_CALL(0x0005FC70u, sub_0005FC70); /* call 0x0005FC70 */

loc_0005FD33: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005FD40
 * Original: 0x0005FD40 - 0x0005FD80 (64 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005FD40: ;
    PUSH32(esp, esi);
    ecx = 0x321918;
    PUSH32(esp, 0x0005FD4Bu); RECOMP_ABI_CALL(0x0005FC10u, sub_0005FC10); /* call 0x0005FC10 */

loc_0005FD4B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005FD7C; /* je: equal / zero */

loc_0005FD51: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0005FD5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005FD5Bu); } /* indirect call */
    }

loc_0005FD5E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0005FD68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005FD62u); } /* indirect call */
    }

loc_0005FD68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005FD77; /* jne: not equal / not zero */

loc_0005FD6C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1BC); PUSH32(esp, 0x0005FD77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005FD71u); } /* indirect call */
    }

loc_0005FD77: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0005FD7C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005FD80
 * Original: 0x0005FD80 - 0x0005FDE9 (105 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005FD80: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0005FD8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005FD85u); } /* indirect call */
    }

loc_0005FD8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0005FDD6; /* jne: not equal / not zero */

loc_0005FD8F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005FDD5; /* je: equal / zero */

loc_0005FD98: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE5023CE7u);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0005FDA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005FDA1u); } /* indirect call */
    }

loc_0005FDA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005FDDA; /* je: equal / zero */

loc_0005FDA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xADA7AFDBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xADA7AFDBu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005FDDA; /* je: equal / zero */

loc_0005FDAF: ;
    PUSH32(esp, esi);
    ecx = 0x3232B0;
    PUSH32(esp, 0x0005FDBAu); RECOMP_ABI_CALL(0x0005FCC0u, sub_0005FCC0); /* call 0x0005FCC0 */

loc_0005FDBA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005FDD4; /* je: equal / zero */

loc_0005FDC0: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0005FDC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005FDC6u); } /* indirect call */
    }

loc_0005FDC9: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x0005FDD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005FDCEu); } /* indirect call */
    }

loc_0005FDD4: ;
    POP32(esp, esi);

loc_0005FDD5: ;
    POP32(esp, ebx);

loc_0005FDD6: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0005FDDA: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x284); PUSH32(esp, 0x0005FDE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0005FDDEu); } /* indirect call */
    }

loc_0005FDE4: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0005FDF0
 * Original: 0x0005FDF0 - 0x0005FE87 (151 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FDF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0005FDF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xFFFFFDFDu;
    ebp = 0xFFFFFDFCu;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = 0xFFFFFDFEu;
    edi = 0xFFFFFDFBu;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx + 0x205;
    MEM32(esp + 0x10) = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0005FE20: ;
    SET_LO8(ecx, MEM8(edx + -1));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005FE2E; /* je: equal / zero */

loc_0005FE29: ;
    esi = 1;

loc_0005FE2E: ;
    ecx = edi + edx;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edx));
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005FE42; /* je: equal / zero */

loc_0005FE3D: ;
    esi = 1;

loc_0005FE42: ;
    ecx = edx + ebp;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edx + 1));
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005FE57; /* je: equal / zero */

loc_0005FE52: ;
    esi = 1;

loc_0005FE57: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(edx + 2));
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0005FE6F; /* je: equal / zero */

loc_0005FE6A: ;
    esi = 1;

loc_0005FE6F: ;
    ecx = ebx + edx;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi + edx;
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0005FE20; /* jl: less (signed <) */

loc_0005FE81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0005FE90
 * Original: 0x0005FE90 - 0x0005FF89 (249 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0005FE90: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);
    edx = eax + 4;
    edi = 4;
    esi = 0x80808080u;

loc_0005FEA4: ;
    SET_LO8(ecx, MEM8(edx + 0xC));
    SET_LO8(ecx, LO8(ecx) & 0xFB);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edx + 0xC) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x1C));
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEM32(edx + 8) = esi;
    SET_LO8(ecx, LO8(ecx) & 0xFB);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edx + 0x1C) = LO8(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(edx + 0x1C));
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEM32(edx + 8) = esi;
    SET_LO8(ecx, LO8(ecx) & 0xFB);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, LO8(ecx) | 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edx + 0xC) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x1C));
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEM32(edx + 8) = esi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, LO8(ecx) & 0xFB);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edx + 0xC) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x1C));
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEM32(edx + 8) = esi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, LO8(ecx) & 0xFB);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edx + 0xC) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x1C));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx + -16) = xmm0.f[0]; /* movss */
    MEMF(edx + -12) = xmm0.f[0]; /* movss */
    MEM32(edx + -8) = esi;
    SET_LO8(ecx, LO8(ecx) & 0xFB);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edx + 0xC) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x1C));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx + -16) = xmm0.f[0]; /* movss */
    MEMF(edx + -12) = xmm0.f[0]; /* movss */
    MEM32(edx + -8) = esi;
    SET_LO8(ecx, LO8(ecx) & 0xFB);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edx + 0xC) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x1C));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx + -16) = xmm0.f[0]; /* movss */
    MEMF(edx + -12) = xmm0.f[0]; /* movss */
    MEM32(edx + -8) = esi;
    SET_LO8(ecx, LO8(ecx) & 0xFB);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEM32(edx + 8) = esi;
    MEM8(edx + 0xC) = LO8(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0005FEA4; /* jne: not equal / not zero */

loc_0005FF86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0005FF90
 * Original: 0x0005FF90 - 0x00060151 (449 bytes, 125 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005FF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0005FF90: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    edx = 1;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005FFB3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0005FFAC: ;
    eax = 0x10;
    edi = edx;

loc_0005FFB3: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x230)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x224); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x224); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0005FFE6; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0005FFD9: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0005FFE9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0005FFE6: ;
    xmm0 = xmm1; /* movaps */

loc_0005FFE9: ;
    esi = MEM32(esp + 0x1C);
    xmm2 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2E3D2C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00060051; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0005FFFF: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DD6D0)); /* movss */
    esi = eax;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00060032; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00060013: ;
    MEM8(esi + 0xB0) = MEM8(esi + 0xB0) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0xB0)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0xC0) = MEM8(esi + 0xC0) | LO8(edx);
    _fa = (uint32_t)(MEM8(esi + 0xC0)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, edi);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    POP32(esp, esi);
    MEM8(eax + ecx + 0x204) = LO8(edx);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00060032: ;
    MEM8(esi + 0xD0) = MEM8(esi + 0xD0) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0xD0)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0xE0) = MEM8(esi + 0xE0) | LO8(edx);
    _fa = (uint32_t)(MEM8(esi + 0xE0)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    POP32(esp, esi);
    MEM8(eax + ecx + 0x204) = LO8(edx);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00060051: ;
    xmm2 = XMM_SCALAR(MEMF(0x2E3D28)); /* movss */
    _fca = xmm2.f[0]; _fcb = MEMF(esi + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006009C; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(esi + 8)) */

loc_0006005F: ;
    esi = eax;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ebx, MEM8(esi + ecx + 0x10));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, LO8(ebx) & 0xFE);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x10) = LO8(ebx);
    MEM8(esi + 0x20) = MEM8(esi + 0x20) | LO8(edx);
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(eax + ecx + 0x204) = LO8(edx);
    MEM8(ecx + 0xF0) = MEM8(ecx + 0xF0) & 0xFE;
    _fa = (uint32_t)(MEM8(ecx + 0xF0)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ecx + 0x100) = MEM8(ecx + 0x100) | LO8(edx);
    _fa = (uint32_t)(MEM8(ecx + 0x100)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 0x20B) = LO8(edx);
    MEM8(edi + ecx + 0x214) = LO8(edx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0006009C: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    esi = eax;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000600ED; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_000600AD: ;
    MEM8(esi + 0x90) = MEM8(esi + 0x90) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0x90)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0xA0) = MEM8(esi + 0xA0) | LO8(edx);
    _fa = (uint32_t)(MEM8(esi + 0xA0)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(eax + ecx + 0x204) = LO8(edx);
    MEM8(ecx + 0x1F0) = MEM8(ecx + 0x1F0) & 0xFE;
    _fa = (uint32_t)(MEM8(ecx + 0x1F0)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ecx + 0x200) = MEM8(ecx + 0x200) | LO8(edx);
    _fa = (uint32_t)(MEM8(ecx + 0x200)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 0x213) = LO8(edx);
    MEM8(edi + ecx + 0x216) = LO8(edx);
    MEM8(edi + ecx + 0x218) = LO8(edx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_000600ED: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DD440); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00060112; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DD440)) */

loc_000600F6: ;
    MEM8(esi + 0x70) = MEM8(esi + 0x70) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0x70)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x80) = MEM8(esi + 0x80) | LO8(edx);
    _fa = (uint32_t)(MEM8(esi + 0x80)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, edi);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    POP32(esp, esi);
    MEM8(eax + ecx + 0x204) = LO8(edx);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00060112: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC904)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00060138; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006011F: ;
    MEM8(esi + 0x30) = MEM8(esi + 0x30) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x40) = MEM8(esi + 0x40) | LO8(edx);
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, edi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    POP32(esp, esi);
    MEM8(eax + ecx + 0x204) = LO8(edx);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00060138: ;
    MEM8(esi + 0x50) = MEM8(esi + 0x50) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0x50)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x60) = MEM8(esi + 0x60) | LO8(edx);
    _fa = (uint32_t)(MEM8(esi + 0x60)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    POP32(esp, esi);
    MEM8(eax + ecx + 0x204) = LO8(edx);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00060160
 * Original: 0x00060160 - 0x0006024C (236 bytes, 82 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00060160: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    edx = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = edx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00060175;

loc_00060171: ;
    edx = MEM32(esp + 0x14);

loc_00060175: ;
    esi = MEM32(edx);
    ebx = edi;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((1) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ebx;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x3F);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, eax (32-bit) */
    eax = MEM32(edi * 4 + 0x2E3CA8);
    MEM8(esp + 0x17) = (TEST_NZ(_fa, _fb)) ? 1 : 0; /* setne */
    ecx = edi;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = ecx + edx + 4;
    edx = esi + 0x108;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000601AEu); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000601AE: ;
    MEM32(esi + eax * 4 + 8) = ebp;
    edx = MEM32(esi);
    SET_LO8(eax, MEM8(esp + 0x1F));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi) = edx;
    esi = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000601D9; /* je: equal / zero */

loc_000601C4: ;
    SET_LO8(edx, MEM8(ebp + 0xC));
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, ((_fa != 0)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ebp + 0xC) = LO8(edx);
    goto loc_000601EC;

loc_000601D9: ;
    SET_LO8(ecx, MEM8(ebp + 0xC));
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, ((_fa == 0)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ebp + 0xC) = LO8(ecx);

loc_000601EC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00060238; /* jne: not equal / not zero */

loc_000601F0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(esp + 0x14);
    MEM8(ebx + ecx + 0x204) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00060207; /* jne: not equal / not zero */

loc_000601FF: ;
    MEM8(ecx + 0x214) = LO8(eax);
    goto loc_00060238;

loc_00060207: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00060214; /* jne: not equal / not zero */

loc_0006020C: ;
    MEM8(ecx + 0x215) = LO8(eax);
    goto loc_00060238;

loc_00060214: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00060227; /* jne: not equal / not zero */

loc_00060219: ;
    MEM8(ecx + 0x218) = LO8(eax);
    MEM8(ecx + 0x216) = LO8(eax);
    goto loc_00060238;

loc_00060227: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x18 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00060238; /* jne: not equal / not zero */

loc_0006022C: ;
    MEM8(ecx + 0x219) = LO8(eax);
    MEM8(ecx + 0x217) = LO8(eax);

loc_00060238: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00060171; /* jl: less (signed <) */

loc_00060242: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00060250
 * Original: 0x00060250 - 0x00060289 (57 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00060250: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x10;
    /* nop */

loc_00060260: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ecx, ~LO8(ecx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(ebx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax) = LO8(ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00060260; /* jl: less (signed <) */

loc_00060278: ;
    eax = esi + 0x214;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edx;
    POP32(esp, esi);
    MEM16(eax + 4) = LO16(edx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00060290
 * Original: 0x00060290 - 0x000602DC (76 bytes, 19 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060290(void)
{

loc_00060290: ;
    eax = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0xC);
    edx = MEM32(eax);
    MEM32(ecx + 0x21C) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x220) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x224) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x228) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x22C) = edx;
    edx = MEM32(esp + 0x10);
    eax = MEM32(eax + 0x14);
    PUSH32(esp, edx);
    MEM32(ecx + 0x230) = eax;
    PUSH32(esp, 0x000602D9u); RECOMP_ABI_CALL(0x00060160u, sub_00060160); /* call 0x00060160 */

loc_000602D9: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000602E0
 * Original: 0x000602E0 - 0x000602FA (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000602E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000602E0: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 8) = edx;
    eax = MEM32(ecx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    ecx = eax;
    eax = ecx + -1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00060300
 * Original: 0x00060300 - 0x00060342 (66 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00060300: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(esi + ebx * 4 + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00060315u); RECOMP_ABI_CALL(0x00062D30u, sub_00062D30); /* call 0x00062D30 */

loc_00060315: ;
    edi = MEM32(esi + ebx * 4 + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006032D; /* je: equal / zero */

loc_0006031D: ;
    ecx = edi;
    PUSH32(esp, 0x00060324u); RECOMP_ABI_CALL(0x00062EE0u, sub_00062EE0); /* call 0x00062EE0 */

loc_00060324: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006032Au); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0006032A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0006032D: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006033C; /* jle: less or equal (signed <=) */

loc_00060334: ;
    eax = MEM32(esi + eax * 4 + 8);
    MEM32(esi + ebx * 4 + 8) = eax;

loc_0006033C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00060350
 * Original: 0x00060350 - 0x000603D9 (137 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00060350: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3219A0) = esi;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(0x3219A4) = eax;
    PUSH32(esp, 0x00060373u); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_00060373: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edi);
    MEM32(esi + 0x38) = eax;
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00060384u); RECOMP_ABI_CALL(0x00202CB0u, sub_00202CB0); /* call 0x00202CB0 */

loc_00060384: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000603BB; /* je: equal / zero */

loc_0006038B: ;
    ecx = MEM32(esi + 0x28);
    esi = ecx;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = ecx;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000603A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006039Du); } /* indirect call */
    }

loc_000603A0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000603ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000603AAu); } /* indirect call */
    }

loc_000603AD: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000603B6u); RECOMP_ABI_CALL(0x00202ED0u, sub_00202ED0); /* call 0x00202ED0 */

loc_000603B6: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000603C4;

loc_000603BB: ;
    PUSH32(esp, edi);
    ecx = esi + 0x40;
    PUSH32(esp, 0x000603C4u); RECOMP_ABI_CALL(0x001FDF10u, sub_001FDF10); /* call 0x001FDF10 */

loc_000603C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x3219A0) = ebx;
    MEM32(0x3219A4) = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000603E0
 * Original: 0x000603E0 - 0x0006041B (59 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000603E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000603E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00060405; /* jle: less or equal (signed <=) */

loc_000603EC: ;
    edi = MEM32(esp + 0x10);
    edx = ecx + 8;

loc_000603F3: ;
    ebx = MEM32(edx);
    _fa = (uint32_t)(MEM32(ebx + 0xB48)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xB48), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006040D; /* je: equal / zero */

loc_000603FD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000603F3; /* jl: less (signed <) */

loc_00060405: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0006040D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00060413u); RECOMP_ABI_CALL(0x00060300u, sub_00060300); /* call 0x00060300 */

loc_00060413: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00060420
 * Original: 0x00060420 - 0x00060442 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00060420: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00060440; /* jle: less or equal (signed <=) */

loc_0006042A: ;
    /* nop */

loc_00060430: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00060439u); RECOMP_ABI_CALL(0x00060300u, sub_00060300); /* call 0x00060300 */

loc_00060439: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00060430; /* jg: greater (signed >) */

loc_00060440: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00060450
 * Original: 0x00060450 - 0x000604C9 (121 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00060450: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00060475; /* jle: less or equal (signed <=) */

loc_0006045C: ;
    edi = MEM32(esp + 0x10);
    edx = ecx + 8;

loc_00060463: ;
    ebx = MEM32(edx);
    _fa = (uint32_t)(MEM32(ebx + 0xB48)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xB48), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006047D; /* je: equal / zero */

loc_0006046D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00060463; /* jl: less (signed <) */

loc_00060475: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0006047D: ;
    eax = MEM32(ecx + eax * 4 + 8);
    ecx = MEM32(eax + 0xB48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000604BE; /* je: equal / zero */

loc_0006048B: ;
    SET_LO8(ecx, MEM8(eax + 0xB2A));
    SET_LO8(ecx, LO8(ecx) >> 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esp + 0x10) = LO8(ecx);
    if ((_fa == 0)) goto loc_000604BE; /* je: equal / zero */

loc_0006049D: ;
    ecx = MEM32(eax + 0xB48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000604B6; /* je: equal / zero */

loc_000604A7: ;
    SET_LO8(edx, MEM8(eax + 0xB2A));
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esp + 0x10) = LO8(edx);
    if ((_fa != 0)) goto loc_000604BE; /* jne: not equal / not zero */

loc_000604B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000604BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000604D0
 * Original: 0x000604D0 - 0x00060524 (84 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000604D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000604D0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00060512; /* jle: less or equal (signed <=) */

loc_000604DD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ebx + 8;

loc_000604E2: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x000604E9u); RECOMP_ABI_CALL(0x00062D30u, sub_00062D30); /* call 0x00062D30 */

loc_000604E9: ;
    ebp = MEM32(esi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000604FF; /* je: equal / zero */

loc_000604EF: ;
    ecx = ebp;
    PUSH32(esp, 0x000604F6u); RECOMP_ABI_CALL(0x00062EE0u, sub_00062EE0); /* call 0x00062EE0 */

loc_000604F6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000604FCu); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000604FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000604FF: ;
    MEM32(esi) = 0;
    eax = MEM32(ebx + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000604E2; /* jl: less (signed <) */

loc_00060510: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00060512: ;
    ecx = ebx + 0x40;
    PUSH32(esp, 0x0006051Au); RECOMP_ABI_CALL(0x001FDED0u, sub_001FDED0); /* call 0x001FDED0 */

loc_0006051A: ;
    POP32(esp, edi);
    MEM32(ebx + 4) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00060530
 * Original: 0x00060530 - 0x0006054D (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00060530: ;
    ecx = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00060548; /* je: equal / zero */

loc_00060537: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00060543u); RECOMP_ABI_CALL(0x00206ED0u, sub_00206ED0); /* call 0x00206ED0 */

loc_00060543: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_00060548: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00060550
 * Original: 0x00060550 - 0x000605ED (157 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00060550: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = ebx;
    MEM32(esi + 0x28) = ecx;
    MEM32(esi + 0x2C) = ebx;
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x30) = LO8(ebx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00060575u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0006056Fu); } /* indirect call */
    }

loc_00060575: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000605D6; /* je: equal / zero */

loc_00060579: ;
    ecx = MEM32(0x643844);
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, edi);
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
    PUSH32(esp, 0x0006059Cu); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_0006059C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000605AA; /* jge: greater or equal (signed >=) */

loc_000605A3: ;
    eax = 0x6438B8;
    goto loc_000605B3;

loc_000605AA: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_000605B3: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(edi + 4) = eax;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000605D6; /* je: equal / zero */

loc_000605BD: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x5C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000605CF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x5C)) */

loc_000605CB: ;
    MEM8(esi + 0x30) = 1;

loc_000605CF: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000605D6: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    MEM32(esi + 0x34) = ebx;
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000605F0
 * Original: 0x000605F0 - 0x000606E6 (246 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000605F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000605F0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00060602u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000605FCu); } /* indirect call */
    }

loc_00060602: ;
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
    PUSH32(esp, 0x00060624u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00060624: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00060632; /* jge: greater or equal (signed >=) */

loc_0006062B: ;
    eax = 0x6438B8;
    goto loc_0006063B;

loc_00060632: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_0006063B: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0006064D; /* jne: not equal / not zero */

loc_00060644: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0006064D: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    edx = MEM32(eax + 0x5C);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x54)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x58)); /* movss */
    eax = MEM32(esi + 0x28);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006068Du); RECOMP_ABI_CALL(0x0022F49Eu, sub_0022F49E); /* call 0x0022F49E */

loc_0006068D: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0xC) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    eax = MEM32(esp + 8);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(0x6437B4);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000606E0u); RECOMP_ABI_CALL(0x001F8CA0u, sub_001F8CA0); /* call 0x001F8CA0 */

loc_000606E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000606F0
 * Original: 0x000606F0 - 0x00060962 (626 bytes, 178 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000606F0(void)
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

loc_000606F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2415BB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x734) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x734;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x748); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000607DC; /* je: equal / zero */

loc_00060733: ;
    eax = MEM32(0x41410C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00060743; /* jne: not equal / not zero */

loc_0006073C: ;
    eax = 0x6438E0;
    goto loc_00060746;

loc_00060743: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00060746: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esi + 0x28);
    MEM32(esp + 0x14) = eax;
    eax = esp + 0x28;
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0006076Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00060767u); } /* indirect call */
    }

loc_0006076A: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0xC); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC890)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000607C3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0006079B: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E3D30); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC090); /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000607CE; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x2DC090)) */

loc_000607B6: ;
    ecx = esi;
    PUSH32(esp, 0x000607BDu); RECOMP_ABI_CALL(0x000605F0u, sub_000605F0); /* call 0x000605F0 */

loc_000607BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000607DC; /* jle: less or equal (signed <=) */

loc_000607C1: ;
    goto loc_000607CE;

loc_000607C3: ;
    ecx = esi;
    PUSH32(esp, 0x000607CAu); RECOMP_ABI_CALL(0x000605F0u, sub_000605F0); /* call 0x000605F0 */

loc_000607CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000607DC; /* jg: greater (signed >) */

loc_000607CE: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_000607DC: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006094A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 8)) */

loc_000607EB: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x000607F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000607F2u); } /* indirect call */
    }

loc_000607F8: ;
    ebx = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00060948; /* je: equal / zero */

loc_00060804: ;
    eax = MEM32(ebx + 0x1C);
    ecx = MEM32(0x643844);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00060813u); RECOMP_ABI_CALL(0x00013A20u, sub_00013A20); /* call 0x00013A20 */

loc_00060813: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00060948; /* je: equal / zero */

loc_0006081B: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x88);
    ecx = esp + 0x40;
    PUSH32(esp, 0x0006082Bu); RECOMP_ABI_CALL(0x00207A80u, sub_00207A80); /* call 0x00207A80 */

loc_0006082B: ;
    PUSH32(esp, edi);
    ecx = esp + 0x44;
    MEM32(esp + 0x750) = ebp;
    PUSH32(esp, 0x0006083Cu); RECOMP_ABI_CALL(0x0010E940u, sub_0010E940); /* call 0x0010E940 */

loc_0006083C: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x44;
    PUSH32(esp, 0x00060846u); RECOMP_ABI_CALL(0x00207D40u, sub_00207D40); /* call 0x00207D40 */

loc_00060846: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x2C) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_00060884; /* jle: less or equal (signed <=) */

loc_00060850: ;
    edi = esi + 8;

loc_00060853: ;
    eax = MEM32(esi);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006085Du); RECOMP_ABI_CALL(0x00062F70u, sub_00062F70); /* call 0x00062F70 */

loc_0006085D: ;
    eax = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, 0x0006086Bu); RECOMP_ABI_CALL(0x00208200u, sub_00208200); /* call 0x00208200 */

loc_0006086B: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + 0xB44)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xB44), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00060879; /* je: equal / zero */

loc_00060876: ;
    MEM32(esi + 0x2C) = eax;

loc_00060879: ;
    eax = MEM32(esi + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00060853; /* jl: less (signed <) */

loc_00060884: ;
    eax = MEM32(esi + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esi) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_000608F8; /* jle: less or equal (signed <=) */

loc_00060894: ;
    ebp = esi + 8;
    goto loc_000608A0;

    /* nop */

loc_000608A0: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 0xB48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000608ED; /* je: equal / zero */

loc_000608AD: ;
    SET_LO8(ecx, MEM8(eax + 0xB2A));
    SET_LO8(ecx, LO8(ecx) >> 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esp + 0x13) = LO8(ecx);
    if ((_fa == 0)) goto loc_000608ED; /* je: equal / zero */

loc_000608BF: ;
    ecx = MEM32(eax + 0xB48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000608D8; /* je: equal / zero */

loc_000608C9: ;
    SET_LO8(edx, MEM8(eax + 0xB2A));
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esp + 0x13) = LO8(edx);
    if ((_fa != 0)) goto loc_000608ED; /* jne: not equal / not zero */

loc_000608D8: ;
    _fa = (uint32_t)(MEM8(eax + 0xB44)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xB44), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000608ED; /* jne: not equal / not zero */

loc_000608E1: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000608E9u); RECOMP_ABI_CALL(0x00060300u, sub_00060300); /* call 0x00060300 */

loc_000608E9: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000608ED: ;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000608A0; /* jl: less (signed <) */

loc_000608F8: ;
    PUSH32(esp, 0x6438E0);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00060906u); RECOMP_ABI_CALL(0x001F7D90u, sub_001F7D90); /* call 0x001F7D90 */

loc_00060906: ;
    PUSH32(esp, 0x6459E8);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x0006091Bu); RECOMP_ABI_CALL(0x002081A0u, sub_002081A0); /* call 0x002081A0 */

loc_0006091B: ;
    eax = MEM32(ebx + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6438E0);
    ecx = ebx + 0x24;
    PUSH32(esp, 0x00060933u); RECOMP_ABI_CALL(0x00204770u, sub_00204770); /* call 0x00204770 */

loc_00060933: ;
    ecx = esp + 0x40;
    MEM32(esp + 0x74C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00060947u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00060947: ;
    POP32(esp, edi);

loc_00060948: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0006094A: ;
    ecx = MEM32(esp + 0x738);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x740) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x740;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00060970
 * Original: 0x00060970 - 0x000609B5 (69 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00060970: ;
    eax = MEM32(0x793588);
    ecx = MEM32(0x793594);
    edx = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00060988u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00060988: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000609A0; /* jge: greater or equal (signed >=) */

loc_0006098F: ;
    eax = 0x793598;
    ecx = MEM32(eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(edx));
    esp += 4; return; /* ret */

loc_000609A0: ;
    ecx = MEM32(0x793590);
    eax = ecx + eax * 4;
    ecx = MEM32(eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(edx));
    esp += 4; return; /* ret */

}

/**
 * sub_000609C0
 * Original: 0x000609C0 - 0x00060ABF (255 bytes, 95 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000609C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000609C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    edi = ecx;
    PUSH32(esp, 0x000609D3u); RECOMP_ABI_CALL(0x00204C80u, sub_00204C80); /* call 0x00204C80 */

loc_000609D3: ;
    ecx = MEM32(edi + 0x28);
    MEM32(edi + 0x34) = eax;
    eax = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x000609E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000609DEu); } /* indirect call */
    }

loc_000609E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000609F2; /* jne: not equal / not zero */

loc_000609E8: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000609F2: ;
    ecx = MEM32(0x643844);
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, esi);
    MEM32(ecx) = eax;
    edx = MEM32(0x6438B4);
    esi = ecx;
    ecx = MEM32(0x6438A8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00060A15u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00060A15: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00060A23; /* jge: greater or equal (signed >=) */

loc_00060A1C: ;
    eax = 0x6438B8;
    goto loc_00060A2C;

loc_00060A23: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_00060A2C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + 4) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00060A42; /* jne: not equal / not zero */

loc_00060A36: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00060A42: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00060A48u); RECOMP_ABI_CALL(0x00060970u, sub_00060970); /* call 0x00060970 */

loc_00060A48: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00060A36; /* je: equal / zero */

loc_00060A4F: ;
    PUSH32(esp, 0x2E3D34);
    PUSH32(esp, 0);
    PUSH32(esp, 0xB50);
    PUSH32(esp, 0x00060A60u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00060A60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00060A72; /* je: equal / zero */

loc_00060A67: ;
    ecx = eax;
    PUSH32(esp, 0x00060A6Eu); RECOMP_ABI_CALL(0x00062D00u, sub_00062D00); /* call 0x00062D00 */

loc_00060A6E: ;
    esi = eax;
    goto loc_00060A74;

loc_00060A72: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00060A74: ;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 0xB30) = edi;
    PUSH32(esp, 0x00060A82u); RECOMP_ABI_CALL(0x000602E0u, sub_000602E0); /* call 0x000602E0 */

loc_00060A82: ;
    edx = MEM32(ebx + 0x88);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00060A92u); RECOMP_ABI_CALL(0x00062F30u, sub_00062F30); /* call 0x00062F30 */

loc_00060A92: ;
    eax = ZX8(MEM8(esp + 0x28));
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00060AA7u); RECOMP_ABI_CALL(0x000634B0u, sub_000634B0); /* call 0x000634B0 */

loc_00060AA7: ;
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00060AB5u); RECOMP_ABI_CALL(0x00063230u, sub_00063230); /* call 0x00063230 */

loc_00060AB5: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00060AC0
 * Original: 0x00060AC0 - 0x00060AC5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00060AC0: ;
    g_seh_ebp = ebp; sub_00062EE0(); return; /* tail jmp 0x00062EE0 */

}

/**
 * sub_00060AD0
 * Original: 0x00060AD0 - 0x00060AF2 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060AD0(void)
{

loc_00060AD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xE10;
    PUSH32(esp, 0x00060ADEu); RECOMP_ABI_CALL(0x00062D30u, sub_00062D30); /* call 0x00062D30 */

loc_00060ADE: ;
    ecx = esi + 0x1964;
    PUSH32(esp, 0x00060AE9u); RECOMP_ABI_CALL(0x00062D30u, sub_00062D30); /* call 0x00062D30 */

loc_00060AE9: ;
    MEM8(esi + 0x2984) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00060B00
 * Original: 0x00060B00 - 0x00060B07 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00060B00: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0004C840(); return; /* tail jmp 0x0004C840 */

}

/**
 * sub_00060B10
 * Original: 0x00060B10 - 0x00060B43 (51 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00060B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28E8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00060B3E; /* je: equal / zero */

loc_00060B22: ;
    ecx = esi + 0xE10;
    PUSH32(esp, 0x00060B2Du); RECOMP_ABI_CALL(0x00062E00u, sub_00062E00); /* call 0x00062E00 */

loc_00060B2D: ;
    ecx = esi + 0x1964;
    PUSH32(esp, 0x00060B38u); RECOMP_ABI_CALL(0x00062E00u, sub_00062E00); /* call 0x00062E00 */

loc_00060B38: ;
    MEM32(esi + 0x28E8) = edi;

loc_00060B3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00060B50
 * Original: 0x00060B50 - 0x00060B6F (31 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00060B50: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00060B66; /* jne: not equal / not zero */

loc_00060B57: ;
    _fa = (uint32_t)(MEM32(ecx + 0x28E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28E8), 1 (32-bit) */
    eax = ecx + 0x1964;
    if (CMP_EQ(_fa, _fb)) goto loc_00060B6C; /* je: equal / zero */

loc_00060B66: ;
    eax = ecx + 0xE10;

loc_00060B6C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00060B70
 * Original: 0x00060B70 - 0x00060B8F (31 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060B70(void)
{

loc_00060B70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00060B7Au); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_00060B7A: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00060B85u); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_00060B85: ;
    ecx = eax;
    PUSH32(esp, 0x00060B8Cu); RECOMP_ABI_CALL(0x00062F90u, sub_00062F90); /* call 0x00062F90 */

loc_00060B8C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00060B90
 * Original: 0x00060B90 - 0x00060BB2 (34 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00060B90: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00060BA9; /* jne: not equal / not zero */

loc_00060B97: ;
    _fa = (uint32_t)(MEM32(ecx + 0x28E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28E8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00060BA9; /* jne: not equal / not zero */

loc_00060BA0: ;
    eax = MEM32(ecx + 0x24B4);
    esp += 12; return; /* ret 8 */

loc_00060BA9: ;
    eax = MEM32(ecx + 0x1960);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00060BC0
 * Original: 0x00060BC0 - 0x00060BEA (42 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00060BC0: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00060BDD; /* jne: not equal / not zero */

loc_00060BC7: ;
    _fa = (uint32_t)(MEM32(ecx + 0x28E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28E8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00060BDD; /* jne: not equal / not zero */

loc_00060BD0: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0x24B4) = eax;
    esp += 12; return; /* ret 8 */

loc_00060BDD: ;
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x1960) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00060BF0
 * Original: 0x00060BF0 - 0x00060C40 (80 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00060BF0: ;
    SET_LO8(eax, MEM8(ecx + 9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00060BFA; /* ja: above (unsigned >) */

loc_00060BF7: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

loc_00060BFA: ;
    edx = MEM32(0x30EFF0);
    PUSH32(esp, esi);
    esi = ZX8(LO8(eax));
    eax = edx;
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(0u - (uint32_t)(LO8(edx))));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    PUSH32(esp, edi);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x8B6724B5u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x98CE4424u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x98CE4424u)) >> 32) & 1);
    edx = edx + 0x98CE4424u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    edi = eax;
    if (0x13) _cf = (int)(((edx) >> (32 - (0x13))) & 1);
    edx = edx << 0x13;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0xD) _cf = (int)(((edi) >> ((0xD) - 1)) & 1);
    edi = edi >> 0xD;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x30EFF0) = edx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    eax = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = MEM32(eax + edx * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00060C40
 * Original: 0x00060C40 - 0x00060C6D (45 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060C40(void)
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

loc_00060C40: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0xB48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00060C4F; /* jne: not equal / not zero */

loc_00060C4B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00060C59;

loc_00060C4F: ;
    eax = MEM32(ecx + 0xB00);
    eax = ZX16(MEM16(eax + 0x20));

loc_00060C59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00060C69; /* jge: greater or equal (signed >=) */

loc_00060C63: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00060C69: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00060C70
 * Original: 0x00060C70 - 0x00060C9C (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060C70(void)
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

loc_00060C70: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0xB48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00060C83; /* jne: not equal / not zero */

loc_00060C7B: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00060C83: ;
    eax = MEM32(ecx + 0xB00);
    edx = ZX16(MEM16(eax + 0x20));
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp) = edx;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xB20)); /* fmul dword ptr [ecx + 0xb20] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00060CA0
 * Original: 0x00060CA0 - 0x00060D52 (178 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060CA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00060CA0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x241605);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esp + 4) = esi;
    PUSH32(esp, 0x00060CC5u); RECOMP_ABI_CALL(0x00207A80u, sub_00207A80); /* call 0x00207A80 */

loc_00060CC5: ;
    ecx = esi + 0x70C;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00060CD8u); RECOMP_ABI_CALL(0x00207A80u, sub_00207A80); /* call 0x00207A80 */

loc_00060CD8: ;
    ecx = esi + 0xE10;
    MEM8(esp + 0x10) = 1;
    PUSH32(esp, 0x00060CE8u); RECOMP_ABI_CALL(0x00062D00u, sub_00062D00); /* call 0x00062D00 */

loc_00060CE8: ;
    ecx = esi + 0x1964;
    MEM8(esp + 0x10) = 2;
    PUSH32(esp, 0x00060CF8u); RECOMP_ABI_CALL(0x00062D00u, sub_00062D00); /* call 0x00062D00 */

loc_00060CF8: ;
    ecx = esi + 0x24B8;
    MEM8(esp + 0x10) = 3;
    PUSH32(esp, 0x00060D08u); RECOMP_ABI_CALL(0x00203D00u, sub_00203D00); /* call 0x00203D00 */

loc_00060D08: ;
    ecx = MEM32(esp + 8);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x28F0) = eax;
    MEM32(esi + 0x28F4) = eax;
    MEM32(esi + 0x28F8) = eax;
    MEM32(esi + 0x28FC) = eax;
    MEM32(esi + 0x2900) = eax;
    MEM32(esi + 0x2904) = eax;
    MEM32(esi + 0x2918) = 0;
    MEM8(esi + 0x2984) = 0;
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00060D60
 * Original: 0x00060D60 - 0x00060DEA (138 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00060D60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x241653);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esp + 0x10) = 4;
    PUSH32(esp, 0x00060D8Au); RECOMP_ABI_CALL(0x00060AD0u, sub_00060AD0); /* call 0x00060AD0 */

loc_00060D8A: ;
    ecx = esi + 0x24B8;
    MEM8(esp + 0x10) = 3;
    PUSH32(esp, 0x00060D9Au); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00060D9A: ;
    ecx = esi + 0x1964;
    MEM8(esp + 0x10) = 2;
    PUSH32(esp, 0x00060DAAu); RECOMP_ABI_CALL(0x00062EE0u, sub_00062EE0); /* call 0x00062EE0 */

loc_00060DAA: ;
    ecx = esi + 0xE10;
    MEM8(esp + 0x10) = 1;
    PUSH32(esp, 0x00060DBAu); RECOMP_ABI_CALL(0x00062EE0u, sub_00062EE0); /* call 0x00062EE0 */

loc_00060DBA: ;
    ecx = esi + 0x70C;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x00060DCAu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00060DCA: ;
    ecx = esi + 8;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00060DDAu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00060DDA: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00060DF0
 * Original: 0x00060DF0 - 0x00060E3B (75 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00060DF0: ;
    SET_LO8(edx, MEM8(esp + 4));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    MEMF(ecx + 0x2930) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x2983) = 1;
    MEMF(ecx + 0x2944) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00060E38; /* je: equal / zero */

loc_00060E14: ;
    MEMF(ecx + 0x292C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x2948) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x2938) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x2981) = LO8(eax);
    MEM8(ecx + 0x2982) = LO8(eax);

loc_00060E38: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00060E40
 * Original: 0x00060E40 - 0x00060E8B (75 bytes, 23 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00060E40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 0xB4E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB4E), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00060E87; /* je: equal / zero */

loc_00060E4E: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_00060E72; /* je: equal / zero */

loc_00060E58: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00060E67u); RECOMP_ABI_CALL(0x00207C50u, sub_00207C50); /* call 0x00207C50 */

loc_00060E67: ;
    MEM8(esi + 0xB4E) = MEM8(esi + 0xB4E) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0xB4E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00060E72: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x00060E80u); RECOMP_ABI_CALL(0x00207B80u, sub_00207B80); /* call 0x00207B80 */

loc_00060E80: ;
    MEM8(esi + 0xB4E) = MEM8(esi + 0xB4E) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0xB4E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00060E87: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00060E90
 * Original: 0x00060E90 - 0x00060EFD (109 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00060E90: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x28E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28E8), 1 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_00060ED2; /* jne: not equal / not zero */

loc_00060EA1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00060ED2; /* jne: not equal / not zero */

loc_00060EA5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00060EACu); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_00060EAC: ;
    ecx = eax;
    PUSH32(esp, 0x00060EB3u); RECOMP_ABI_CALL(0x00062E00u, sub_00062E00); /* call 0x00062E00 */

loc_00060EB3: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x00060EBCu); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_00060EBC: ;
    ecx = eax;
    PUSH32(esp, 0x00060EC3u); RECOMP_ABI_CALL(0x00062E00u, sub_00062E00); /* call 0x00062E00 */

loc_00060EC3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00060ECDu); RECOMP_ABI_CALL(0x00060BC0u, sub_00060BC0); /* call 0x00060BC0 */

loc_00060ECD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    goto loc_00060EE4;

loc_00060ED2: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00060EDAu); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_00060EDA: ;
    ecx = eax;
    PUSH32(esp, 0x00060EE1u); RECOMP_ABI_CALL(0x00062E00u, sub_00062E00); /* call 0x00062E00 */

loc_00060EE1: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);

loc_00060EE4: ;
    ecx = esi;
    PUSH32(esp, 0x00060EEBu); RECOMP_ABI_CALL(0x00060BC0u, sub_00060BC0); /* call 0x00060BC0 */

loc_00060EEB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, edi);
    MEMF(esi + 0x2920) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00060F00
 * Original: 0x00060F00 - 0x00060F1B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00060F00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00060F0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00060F07u); } /* indirect call */
    }

loc_00060F0D: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 0x00060F19u); RECOMP_ABI_CALL(0x002082A0u, sub_002082A0); /* call 0x002082A0 */

loc_00060F19: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00060F20
 * Original: 0x00060F20 - 0x00060F65 (69 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00060F20: ;
    _fa = (uint32_t)(MEM32(ecx + 0x28E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28E8), 1 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00060F52; /* jne: not equal / not zero */

loc_00060F2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00060F52; /* jne: not equal / not zero */

loc_00060F31: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00060F38u); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_00060F38: ;
    SET_LO8(edx, MEM8(esp + 8));
    PUSH32(esp, 2);
    MEM8(eax + 0xB4D) = LO8(edx);
    PUSH32(esp, 0x00060F49u); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_00060F49: ;
    MEM8(eax + 0xB4D) = LO8(edx);
    esp += 12; return; /* ret 8 */

loc_00060F52: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00060F58u); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_00060F58: ;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(eax + 0xB4D) = LO8(ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00060F70
 * Original: 0x00060F70 - 0x00060FE4 (116 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00060F70: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x28E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28E8), 1 (32-bit) */
    eax = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00060FC2; /* jne: not equal / not zero */

loc_00060F80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00060FC2; /* jne: not equal / not zero */

loc_00060F84: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00060F8Cu); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_00060F8C: ;
    ecx = MEM32(eax + 0xB48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_00060FA2; /* je: equal / zero */

loc_00060F9A: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x00060FA2u); RECOMP_ABI_CALL(0x00206FA0u, sub_00206FA0); /* call 0x00206FA0 */

loc_00060FA2: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x00060FABu); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_00060FAB: ;
    ecx = MEM32(eax + 0xB48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00060FBD; /* je: equal / zero */

loc_00060FB5: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x00060FBDu); RECOMP_ABI_CALL(0x00206FA0u, sub_00206FA0); /* call 0x00206FA0 */

loc_00060FBD: ;
    POP32(esp, edi);

loc_00060FBE: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00060FC2: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00060FCAu); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_00060FCA: ;
    ecx = MEM32(eax + 0xB48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00060FBE; /* je: equal / zero */

loc_00060FD4: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00060FE0u); RECOMP_ABI_CALL(0x00206FA0u, sub_00206FA0); /* call 0x00206FA0 */

loc_00060FE0: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00060FF0
 * Original: 0x00060FF0 - 0x00061064 (116 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00060FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00060FF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x28E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28E8), 1 (32-bit) */
    eax = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00061042; /* jne: not equal / not zero */

loc_00061000: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00061042; /* jne: not equal / not zero */

loc_00061004: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0006100Cu); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_0006100C: ;
    ecx = MEM32(eax + 0xB48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_00061022; /* je: equal / zero */

loc_0006101A: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x00061022u); RECOMP_ABI_CALL(0x00207050u, sub_00207050); /* call 0x00207050 */

loc_00061022: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0006102Bu); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_0006102B: ;
    ecx = MEM32(eax + 0xB48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006103D; /* je: equal / zero */

loc_00061035: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0006103Du); RECOMP_ABI_CALL(0x00207050u, sub_00207050); /* call 0x00207050 */

loc_0006103D: ;
    POP32(esp, edi);

loc_0006103E: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00061042: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0006104Au); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_0006104A: ;
    ecx = MEM32(eax + 0xB48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006103E; /* je: equal / zero */

loc_00061054: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00061060u); RECOMP_ABI_CALL(0x00207050u, sub_00207050); /* call 0x00207050 */

loc_00061060: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00061070
 * Original: 0x00061070 - 0x000610BF (79 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00061070: ;
    _fa = (uint32_t)(MEM32(ecx + 0x28E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28E8), 1 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_000610A8; /* jne: not equal / not zero */

loc_0006107D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000610A8; /* jne: not equal / not zero */

loc_00061081: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00061088u); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_00061088: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, 2);
    MEMF(eax + 0xB3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006109Du); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_0006109D: ;
    MEMF(eax + 0xB3C) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000610A8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000610AEu); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_000610AE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0xB3C) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00061090
 * Original: 0x00061090 - 0x000610BF (47 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061090(void)
{

loc_00061090: ;
    MEMF(eax + 0xB3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0006109Du); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_0006109D: ;
    MEMF(eax + 0xB3C) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0xB3C) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000610C0
 * Original: 0x000610C0 - 0x00061117 (87 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000610C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000610C0: ;
    _fa = (uint32_t)(MEM32(ecx + 0x28E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28E8), 1 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_000610FC; /* jne: not equal / not zero */

loc_000610CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000610FC; /* jne: not equal / not zero */

loc_000610D1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000610D9u); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_000610D9: ;
    esi = MEM32(eax + 0xB44);
    edx = MEM32(esp + 0xC);
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 2);
    MEM32(eax + 0xB44) = esi;
    PUSH32(esp, 0x000610F2u); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_000610F2: ;
    MEM32(eax + 0xB44) = MEM32(eax + 0xB44) | edx;
    _fa = (uint32_t)(MEM32(eax + 0xB44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000610FC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00061102u); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_00061102: ;
    edx = MEM32(eax + 0xB44);
    ecx = MEM32(esp + 8);
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xB44) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00061120
 * Original: 0x00061120 - 0x0006117B (91 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00061120: ;
    _fa = (uint32_t)(MEM32(ecx + 0x28E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28E8), 1 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0006115E; /* jne: not equal / not zero */

loc_0006112D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006115E; /* jne: not equal / not zero */

loc_00061131: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00061139u); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_00061139: ;
    edx = MEM32(esp + 0xC);
    esi = MEM32(eax + 0xB44);
    edx = ~edx;
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 2);
    MEM32(eax + 0xB44) = esi;
    PUSH32(esp, 0x00061154u); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_00061154: ;
    MEM32(eax + 0xB44) = MEM32(eax + 0xB44) & edx;
    _fa = (uint32_t)(MEM32(eax + 0xB44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0006115E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00061164u); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_00061164: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax + 0xB44);
    ecx = ~ecx;
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0xB44) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00061180
 * Original: 0x00061180 - 0x00061193 (19 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061180(void)
{

loc_00061180: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006118Au); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_0006118A: ;
    eax = MEM32(eax + 0xB48);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000611A0
 * Original: 0x000611A0 - 0x000611B3 (19 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000611A0(void)
{

loc_000611A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000611AAu); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_000611AA: ;
    SET_LO8(eax, MEM8(eax + 0xB4C));
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000611C0
 * Original: 0x000611C0 - 0x000611D3 (19 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000611C0(void)
{

loc_000611C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000611CAu); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_000611CA: ;
    SET_LO8(eax, MEM8(eax + 0xB4D));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000611E0
 * Original: 0x000611E0 - 0x000611F3 (19 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000611E0(void)
{

loc_000611E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000611EAu); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_000611EA: ;
    eax = MEM32(eax + 0xB44);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00061200
 * Original: 0x00061200 - 0x00061226 (38 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00061200: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006120Au); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_0006120A: ;
    ecx = MEM32(eax + 0xB48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00061219; /* jne: not equal / not zero */

loc_00061214: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_00061219: ;
    ecx = MEM32(eax + 0xB00);
    eax = ZX16(MEM16(ecx + 0x20));
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00061230
 * Original: 0x00061230 - 0x00061267 (55 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061230(void)
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

loc_00061230: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006123Au); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_0006123A: ;
    ecx = MEM32(eax + 0xB48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00061248; /* jne: not equal / not zero */

loc_00061244: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00061252;

loc_00061248: ;
    ecx = MEM32(eax + 0xB00);
    eax = ZX16(MEM16(ecx + 0x20));

loc_00061252: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00061264; /* jge: greater or equal (signed >=) */

loc_0006125E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00061264: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00061270
 * Original: 0x00061270 - 0x000612B8 (72 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061270(void)
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

loc_00061270: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006127Au); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_0006127A: ;
    ecx = MEM32(eax + 0xB48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00061294; /* jne: not equal / not zero */

loc_00061284: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00061294: ;
    ecx = MEM32(eax + 0xB00);
    edx = ZX16(MEM16(ecx + 0x20));
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xB20); /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000612C0
 * Original: 0x000612C0 - 0x000612E7 (39 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000612C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000612C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000612CAu); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_000612CA: ;
    ecx = MEM32(eax + 0xB48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000612D9; /* jne: not equal / not zero */

loc_000612D4: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000612D9: ;
    SET_LO8(eax, MEM8(eax + 0xB2A));
    SET_LO8(eax, LO8(eax) >> 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000612F0
 * Original: 0x000612F0 - 0x00061314 (36 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000612F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000612F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000612FAu); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_000612FA: ;
    ecx = MEM32(eax + 0xB48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00061309; /* jne: not equal / not zero */

loc_00061304: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00061309: ;
    SET_LO8(eax, MEM8(eax + 0xB2A));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00061320
 * Original: 0x00061320 - 0x00061348 (40 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00061320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00061320: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006132Au); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_0006132A: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xB38); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00061343; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0xB38)) */

loc_0006133B: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_00061343: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00061350
 * Original: 0x00061350 - 0x000613D7 (135 bytes, 60 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00061350: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    ebp = eax;
    eax = MEM32(esi + 0x28E8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000613BB; /* je: equal / zero */

loc_00061375: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006137C; /* jne: not equal / not zero */

loc_00061379: ;
    PUSH32(esp, eax);
    goto loc_00061396;

loc_0006137C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00061383u); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_00061383: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0006138Eu); RECOMP_ABI_CALL(0x00063050u, sub_00063050); /* call 0x00063050 */

loc_0006138E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000613AA; /* je: equal / zero */

loc_00061392: ;
    PUSH32(esp, 1);
    ecx = esi;

loc_00061396: ;
    PUSH32(esp, 0x0006139Bu); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_0006139B: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x000613A6u); RECOMP_ABI_CALL(0x00063050u, sub_00063050); /* call 0x00063050 */

loc_000613A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000613B3; /* jne: not equal / not zero */

loc_000613AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000613B3: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000613BBu); RECOMP_ABI_CALL(0x00060B10u, sub_00060B10); /* call 0x00060B10 */

loc_000613BB: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000613C7u); RECOMP_ABI_CALL(0x00060B50u, sub_00060B50); /* call 0x00060B50 */

loc_000613C7: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x000613D0u); RECOMP_ABI_CALL(0x00063230u, sub_00063230); /* call 0x00063230 */

loc_000613D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000613E0
 * Original: 0x000613E0 - 0x0006141E (62 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000613E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000613E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000613F0; /* jne: not equal / not zero */

loc_000613EA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000613F0: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00061402u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00061402: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00061412; /* jge: greater or equal (signed >=) */

loc_00061409: ;
    eax = esi + 0x10;
    eax = MEM32(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00061412: ;
    ecx = MEM32(esi + 8);
    eax = ecx + eax * 4;
    eax = MEM32(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00061420
 * Original: 0x00061420 - 0x0006145E (62 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00061420: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00061430; /* jne: not equal / not zero */

loc_0006142A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00061430: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00061442u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00061442: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00061452; /* jge: greater or equal (signed >=) */

loc_00061449: ;
    eax = esi + 0x10;
    eax = MEM32(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00061452: ;
    ecx = MEM32(esi + 8);
    eax = ecx + eax * 4;
    eax = MEM32(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00061460
 * Original: 0x00061460 - 0x000615F0 (400 bytes, 103 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061460(void)
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

loc_00061460: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x24166B);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xB60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0);
    ebp = esi + 0x70C;
    PUSH32(esp, ebp);
    ebx = esi + 8;
    PUSH32(esp, ebx);
    edi = esi + 0xE10;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006149Au); RECOMP_ABI_CALL(0x00060E40u, sub_00060E40); /* call 0x00060E40 */

loc_0006149A: ;
    eax = MEM32(edi + 0xB00);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000614DC; /* je: equal / zero */

loc_000614A4: ;
    eax = MEM32(esp + 0xB80);
    SET_LO8(ecx, MEM8(edi + 0xB2A));
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) << 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 1);
    MEM8(edi + 0xB2A) = LO8(ecx);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x000614CDu); RECOMP_ABI_CALL(0x00208200u, sub_00208200); /* call 0x00208200 */

loc_000614CD: ;
    ecx = MEM32(esp + 0xB84);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000614DCu); RECOMP_ABI_CALL(0x00062F70u, sub_00062F70); /* call 0x00062F70 */

loc_000614DC: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1948)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006153E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000614F1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xB84)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(edi + 0xB34); /* divss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0xB38); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(edi + 0xB38) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006151F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00061517: ;
    MEMF(edi + 0xB38) = xmm1.f[0]; /* movss */

loc_0006151F: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0xB38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0006153Eu); RECOMP_ABI_CALL(0x00207F20u, sub_00207F20); /* call 0x00207F20 */

loc_0006153E: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2920)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000615D5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_00061553: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0006155Cu); RECOMP_ABI_CALL(0x00062D00u, sub_00062D00); /* call 0x00062D00 */

loc_0006155C: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEM32(esp + 0xB80) = 0;
    PUSH32(esp, 0x00061575u); RECOMP_ABI_CALL(0x00062F30u, sub_00062F30); /* call 0x00062F30 */

loc_00061575: ;
    ecx = MEM32(esi + 0x291C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5A);
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00061589u); RECOMP_ABI_CALL(0x000634B0u, sub_000634B0); /* call 0x000634B0 */

loc_00061589: ;
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00061599u); RECOMP_ABI_CALL(0x00063230u, sub_00063230); /* call 0x00063230 */

loc_00061599: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000615C1; /* je: equal / zero */

loc_0006159D: ;
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, 0x000615A7u); RECOMP_ABI_CALL(0x00062F90u, sub_00062F90); /* call 0x00062F90 */

loc_000615A7: ;
    eax = MEM32(esi + 0x2920);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x28F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28F0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x000615C1u); RECOMP_ABI_CALL(0x00207DD0u, sub_00207DD0); /* call 0x00207DD0 */

loc_000615C1: ;
    ecx = esp + 0x20;
    MEM32(esp + 0xB78) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000615D5u); RECOMP_ABI_CALL(0x00062EE0u, sub_00062EE0); /* call 0x00062EE0 */

loc_000615D5: ;
    ecx = MEM32(esp + 0xB70);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0xB6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000615F0
 * Original: 0x000615F0 - 0x00061901 (785 bytes, 210 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000615F0(void)
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

loc_000615F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x24166B);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xB68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xB80);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00061727; /* je: equal / zero */

loc_00061621: ;
    ebp = esi + 0x28F8;
    PUSH32(esp, ebp);
    eax = esi + 0x70C;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, ecx);
    edi = esi + 0x1964;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00061641u); RECOMP_ABI_CALL(0x00060E40u, sub_00060E40); /* call 0x00060E40 */

loc_00061641: ;
    eax = MEM32(edi + 0xB00);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00061681; /* je: equal / zero */

loc_0006164B: ;
    SET_LO8(eax, MEM8(edi + 0xB2A));
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ebx, LO8(ebx) << 3);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ebx, LO8(ebx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(eax));
    PUSH32(esp, 1);
    SET_LO8(ebx, LO8(ebx) & 8);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    MEM8(edi + 0xB2A) = LO8(ecx);
    PUSH32(esp, edi);
    ecx = esi + 8;
    PUSH32(esp, 0x00061672u); RECOMP_ABI_CALL(0x00207AC0u, sub_00207AC0); /* call 0x00207AC0 */

loc_00061672: ;
    eax = MEM32(esp + 0xB90);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00061681u); RECOMP_ABI_CALL(0x00062F70u, sub_00062F70); /* call 0x00062F70 */

loc_00061681: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x249C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00061727; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006169A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xB90)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(edi + 0xB34); /* divss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0xB38); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(edi + 0xB38) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000616C8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000616C0: ;
    MEMF(edi + 0xB38) = xmm1.f[0]; /* movss */

loc_000616C8: ;
    ecx = MEM32(esi + 0x24A4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xB38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_000616EC; /* jge: greater or equal (signed >=) */

loc_000616E4: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    goto loc_00061718;

loc_000616EC: ;
    edi = MEM32(ebp);
    ebp = MEM32(ebp + 4);
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000616FEu); RECOMP_ABI_CALL(0x00237C80u, sub_00237C80); /* call 0x00237C80 */

loc_000616FE: ;
    eax = ~eax;
    edx = ~edx;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp & edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, eax);

loc_00061718: ;
    eax = esi + 0x70C;
    ecx = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00061727u); RECOMP_ABI_CALL(0x00208050u, sub_00208050); /* call 0x00208050 */

loc_00061727: ;
    ebx = MEM32(esp + 0xB88);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000618E6; /* je: equal / zero */

loc_00061737: ;
    ebp = esi + 0x28F0;
    PUSH32(esp, ebp);
    eax = esi + 0x70C;
    ecx = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = ecx;
    edi = esi + 0xE10;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0006175Bu); RECOMP_ABI_CALL(0x00060E40u, sub_00060E40); /* call 0x00060E40 */

loc_0006175B: ;
    eax = MEM32(edi + 0xB00);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000617A0; /* je: equal / zero */

loc_00061765: ;
    SET_LO8(edx, MEM8(edi + 0xB2A));
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ebx, LO8(ebx) << 3);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ebx, LO8(ebx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ebx, LO8(ebx) & 8);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(edx));
    PUSH32(esp, 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM8(edi + 0xB2A) = LO8(eax);
    PUSH32(esp, 0x0006178Fu); RECOMP_ABI_CALL(0x00207AC0u, sub_00207AC0); /* call 0x00207AC0 */

loc_0006178F: ;
    ecx = MEM32(esp + 0xB90);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0006179Eu); RECOMP_ABI_CALL(0x00062F70u, sub_00062F70); /* call 0x00062F70 */

loc_0006179E: ;
    goto loc_000617A4;

loc_000617A0: ;
    ebx = MEM32(esp + 0x10);

loc_000617A4: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1948)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00061859; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000617BD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xB90)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(edi + 0xB34); /* divss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0xB38); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(edi + 0xB38) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000617EB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000617E3: ;
    MEMF(edi + 0xB38) = xmm1.f[0]; /* movss */

loc_000617EB: ;
    ecx = MEM32(esi + 0x1950);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xB38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_0006180F; /* jge: greater or equal (signed >=) */

loc_00061807: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    goto loc_0006184B;

loc_0006180F: ;
    eax = MEM32(ebp);
    edx = MEM32(ebp + 4);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = edx;
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00061829u); RECOMP_ABI_CALL(0x00237C80u, sub_00237C80); /* call 0x00237C80 */

loc_00061829: ;
    ecx = MEM32(esp + 0x14);
    eax = ~eax;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esp + 0x18);
    edx = ~edx;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);

loc_0006184B: ;
    eax = esi + 0x70C;
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00061859u); RECOMP_ABI_CALL(0x00208050u, sub_00208050); /* call 0x00208050 */

loc_00061859: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2920)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000618E6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_0006186A: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x00061873u); RECOMP_ABI_CALL(0x00062D00u, sub_00062D00); /* call 0x00062D00 */

loc_00061873: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    MEM32(esp + 0xB88) = 0;
    PUSH32(esp, 0x0006188Cu); RECOMP_ABI_CALL(0x00062F30u, sub_00062F30); /* call 0x00062F30 */

loc_0006188C: ;
    eax = MEM32(esi + 0x291C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5A);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x000618A0u); RECOMP_ABI_CALL(0x000634B0u, sub_000634B0); /* call 0x000634B0 */

loc_000618A0: ;
    PUSH32(esp, 0);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esp + 0x30;
    PUSH32(esp, 0x000618B0u); RECOMP_ABI_CALL(0x00063230u, sub_00063230); /* call 0x00063230 */

loc_000618B0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000618D2; /* je: equal / zero */

loc_000618B4: ;
    PUSH32(esp, edi);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x000618BEu); RECOMP_ABI_CALL(0x00062F90u, sub_00062F90); /* call 0x00062F90 */

loc_000618BE: ;
    edx = MEM32(esi + 0x2920);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000618D2u); RECOMP_ABI_CALL(0x00207DD0u, sub_00207DD0); /* call 0x00207DD0 */

loc_000618D2: ;
    ecx = esp + 0x28;
    MEM32(esp + 0xB80) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000618E6u); RECOMP_ABI_CALL(0x00062EE0u, sub_00062EE0); /* call 0x00062EE0 */

loc_000618E6: ;
    ecx = MEM32(esp + 0xB78);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0xB74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00061910
 * Original: 0x00061910 - 0x000619AF (159 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00061910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00061910: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x2810;
    PUSH32(esp, 0x6438E0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006192Fu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0006192F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2950)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x30D8D0); /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00061952u); RECOMP_ABI_CALL(0x0022F841u, sub_0022F841); /* call 0x0022F841 */

loc_00061952: ;
    fp_push(MEMF(0x30D8D4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x2954)); /* fmul dword ptr [esi + 0x2954] */
    ecx = esp + 0x10;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00061973u); RECOMP_ABI_CALL(0x0022F74Cu, sub_0022F74C); /* call 0x0022F74C */

loc_00061973: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006197Bu); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_0006197B: ;
    eax = MEM32(esi + 0x2974);
    PUSH32(esp, 0x3F);
    edx = esi + 0x2688;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00061990u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_00061990: ;
    MEM32(esi + eax * 4 + 0x2588) = edi;
    eax = MEM32(esi + 0x2580);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x2580) = eax;
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
 * sub_000619B0
 * Original: 0x000619B0 - 0x00061A4F (159 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000619B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000619B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2964);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00061A4C; /* jl: less (signed <) */

loc_000619C2: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x000619CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000619C8u); } /* indirect call */
    }

loc_000619CE: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x295C)); /* movss */
    edi = MEM32(esi + 0x2964);
    xmm1 = XMM_SCALAR(MEMF(esi + 0x2958)); /* movss */
    edx = MEM32(eax + 0x24);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x2960); /* mulss */
    ebx = esi + 0x27D0;
    edi = edi << 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    PUSH32(esp, 0x6438E0);
    ecx = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00061A14u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00061A14: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00061A20u); RECOMP_ABI_CALL(0x0022F8BDu, sub_0022F8BD); /* call 0x0022F8BD */

loc_00061A20: ;
    PUSH32(esp, 0x3F);
    edx = esi + 0x2688;
    PUSH32(esp, edx);
    PUSH32(esp, 0x9C5820BEu);
    PUSH32(esp, 0x00061A33u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_00061A33: ;
    MEM32(esi + eax * 4 + 0x2588) = ebx;
    eax = MEM32(esi + 0x2580);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x2580) = eax;
    POP32(esp, ebx);

loc_00061A4C: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00061A50
 * Original: 0x00061A50 - 0x00061C67 (535 bytes, 127 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00061A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00061A50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x6438E0);
    ecx = esp + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00061A72u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00061A72: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00061A83u); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_00061A83: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    eax = esp + 0xC4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00061A94u); RECOMP_ABI_CALL(0x0022F74Cu, sub_0022F74C); /* call 0x0022F74C */

loc_00061A94: ;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00061AA5u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_00061AA5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ZX8(MEM8(edi + 0x2980));
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    ecx = esp + 0x84;
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00061AEEu); RECOMP_ABI_CALL(0x001F7D90u, sub_001F7D90); /* call 0x001F7D90 */

loc_00061AEE: ;
    PUSH32(esp, eax);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    eax = esp + 0x7C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00061AFEu); RECOMP_ABI_CALL(0x001F7F80u, sub_001F7F80); /* call 0x001F7F80 */

loc_00061AFE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00061B10u); RECOMP_ABI_CALL(0x0022FA9Eu, sub_0022FA9E); /* call 0x0022FA9E */

loc_00061B10: ;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00061B1Bu); RECOMP_ABI_CALL(0x0022F9BCu, sub_0022F9BC); /* call 0x0022F9BC */

loc_00061B1B: ;
    xmm0 = XMM_SCALAR(MEMF(0x6459E8)); /* movss */
    SET_LO8(eax, MEM8(edi + 0x2980));
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459EC)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6459F0)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    if (CMP_BE(_fa, _fb)) goto loc_00061C5E; /* jbe: below or equal (unsigned <=) */

loc_00061B63: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    eax = ZX8(LO8(ebx));
    ecx = eax;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ecx + edi + 0x2810;
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    PUSH32(esp, 0x3F);
    ecx = edi + 0x2688;
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    eax = MEM32(edi + eax * 4 + 0x2974);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00061C37u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_00061C37: ;
    MEM32(edi + eax * 4 + 0x2588) = esi;
    edx = MEM32(edi + 0x2580);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x2580) = edx;
    SET_LO8(eax, MEM8(edi + 0x2980));
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(eax) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00061B63; /* jb: below (unsigned <) */

loc_00061C5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00061C70
 * Original: 0x00061C70 - 0x00061D18 (168 bytes, 69 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00061C70: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00061C97; /* je: equal / zero */

loc_00061C7B: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00061C97; /* je: equal / zero */

loc_00061C81: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00061C90u); RECOMP_ABI_CALL(0x00063C40u, sub_00063C40); /* call 0x00063C40 */

loc_00061C90: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00061C97: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x28D8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_00061CD4; /* je: equal / zero */

loc_00061CA7: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00061CD4; /* je: equal / zero */

loc_00061CAE: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00061CBCu); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00061CBC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00061CC8; /* jge: greater or equal (signed >=) */

loc_00061CC3: ;
    eax = esi + 0x10;
    goto loc_00061CCE;

loc_00061CC8: ;
    ecx = MEM32(esi + 8);
    eax = ecx + eax * 4;

loc_00061CCE: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00061D12; /* jne: not equal / not zero */

loc_00061CD4: ;
    ecx = MEM32(ebx + 0x28E0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00061CE8; /* je: equal / zero */

loc_00061CDE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00061CE4u); RECOMP_ABI_CALL(0x000613E0u, sub_000613E0); /* call 0x000613E0 */

loc_00061CE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00061D12; /* jne: not equal / not zero */

loc_00061CE8: ;
    ecx = MEM32(ebx + 0x28DC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00061CFC; /* je: equal / zero */

loc_00061CF2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00061CF8u); RECOMP_ABI_CALL(0x000613E0u, sub_000613E0); /* call 0x000613E0 */

loc_00061CF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00061D12; /* jne: not equal / not zero */

loc_00061CFC: ;
    ecx = MEM32(ebx + 0x28E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00061D10; /* je: equal / zero */

loc_00061D06: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00061D0Cu); RECOMP_ABI_CALL(0x000613E0u, sub_000613E0); /* call 0x000613E0 */

loc_00061D0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00061D12; /* jne: not equal / not zero */

loc_00061D10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00061D12: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00061D20
 * Original: 0x00061D20 - 0x00061DE9 (201 bytes, 76 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00061D20: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x28D0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00061D76; /* je: equal / zero */

loc_00061D33: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00061D44; /* jne: not equal / not zero */

loc_00061D3A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x28D8) = eax;
    goto loc_00061D80;

loc_00061D44: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00061D52u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00061D52: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00061D66; /* jge: greater or equal (signed >=) */

loc_00061D59: ;
    eax = esi + 0x10;
    eax = MEM32(eax);
    MEM32(edi + 0x28D8) = eax;
    goto loc_00061D80;

loc_00061D66: ;
    edx = MEM32(esi + 8);
    eax = edx + eax * 4;
    eax = MEM32(eax);
    MEM32(edi + 0x28D8) = eax;
    goto loc_00061D80;

loc_00061D76: ;
    MEM32(edi + 0x28D8) = 0;

loc_00061D80: ;
    esi = MEM32(edi + 0x28D4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00061DD9; /* je: equal / zero */

loc_00061D8A: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00061D9F; /* jne: not equal / not zero */

loc_00061D91: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x28E0) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00061D9F: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00061DADu); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00061DAD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00061DC5; /* jge: greater or equal (signed >=) */

loc_00061DB4: ;
    eax = esi + 0x10;
    eax = MEM32(eax);
    MEM32(edi + 0x28E0) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00061DC5: ;
    edx = MEM32(esi + 8);
    eax = edx + eax * 4;
    eax = MEM32(eax);
    MEM32(edi + 0x28E0) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00061DD9: ;
    MEM32(edi + 0x28E0) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00061DF0
 * Original: 0x00061DF0 - 0x00061E4C (92 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00061DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00061DF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00061E09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00061E03u); } /* indirect call */
    }

loc_00061E09: ;
    ecx = MEM32(esi);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x24);
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00061E28u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_00061E28: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00061E36u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00061E36: ;
    ecx = MEM32(ebp + 0xC);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00061E43u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00061E43: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00061E50
 * Original: 0x00061E50 - 0x00061E97 (71 bytes, 36 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00061E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00061E50: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    esi = ecx;
    PUSH32(esp, 0x00061E64u); RECOMP_ABI_CALL(0x00061C70u, sub_00061C70); /* call 0x00061C70 */

loc_00061E64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00061E70; /* jne: not equal / not zero */

loc_00061E68: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00061E70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00061E7Fu); RECOMP_ABI_CALL(0x00061350u, sub_00061350); /* call 0x00061350 */

loc_00061E7F: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00061E8E; /* je: equal / zero */

loc_00061E85: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00061E8Eu); RECOMP_ABI_CALL(0x00060BC0u, sub_00060BC0); /* call 0x00060BC0 */

loc_00061E8E: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00061EA0
 * Original: 0x00061EA0 - 0x00061EF1 (81 bytes, 34 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00061EA0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00061EC0u); RECOMP_ABI_CALL(0x000634B0u, sub_000634B0); /* call 0x000634B0 */

loc_00061EC0: ;
    eax = MEM32(esp + 0x2C);
    edi = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00061ED6u); RECOMP_ABI_CALL(0x00061350u, sub_00061350); /* call 0x00061350 */

loc_00061ED6: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00061EE6; /* je: equal / zero */

loc_00061EDC: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00061EE6u); RECOMP_ABI_CALL(0x00060BC0u, sub_00060BC0); /* call 0x00060BC0 */

loc_00061EE6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00061F00
 * Original: 0x00061F00 - 0x00061F3D (61 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00061F00: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00061F1Au); RECOMP_ABI_CALL(0x002186C0u, sub_002186C0); /* call 0x002186C0 */

loc_00061F1A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00061F33; /* jl: less (signed <) */

loc_00061F1E: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + eax * 8);
    eax = MEM32(ecx + eax * 8 + 4);
    POP32(esp, edi);
    MEM32(esp + 4) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00061F33: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00061F40
 * Original: 0x00061F40 - 0x00061F71 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00061F40: ;
    eax = MEM32(0x3219B4);
    ecx = MEM32(0x3219C0);
    edx = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00061F58u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00061F58: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00061F67; /* jge: greater or equal (signed >=) */

loc_00061F5F: ;
    eax = 0x3219C4;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

loc_00061F67: ;
    ecx = MEM32(0x3219BC);
    eax = MEM32(ecx + eax * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00061F80
 * Original: 0x00061F80 - 0x00061FE6 (102 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00061F80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x00061F93u); RECOMP_ABI_CALL(0x00061C70u, sub_00061C70); /* call 0x00061C70 */

loc_00061F93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00061FD7; /* je: equal / zero */

loc_00061F97: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00061FC5; /* je: equal / zero */

loc_00061F9B: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00061FC5; /* jl: less (signed <) */

loc_00061FA2: ;
    _fa = (uint32_t)(MEM8(eax + 9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 9), 1 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00061FB5; /* ja: above (unsigned >) */

loc_00061FA8: ;
    eax = MEM32(eax);
    MEM32(edi + 0x291C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00061FB5: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx + esi * 4);
    MEM32(edi + 0x291C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00061FC5: ;
    ecx = eax;
    PUSH32(esp, 0x00061FCCu); RECOMP_ABI_CALL(0x00060BF0u, sub_00060BF0); /* call 0x00060BF0 */

loc_00061FCC: ;
    MEM32(edi + 0x291C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00061FD7: ;
    MEM32(edi + 0x291C) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00061FF0
 * Original: 0x00061FF0 - 0x00062040 (80 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00061FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00061FF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    esi = eax + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0006200Cu); RECOMP_ABI_CALL(0x002186C0u, sub_002186C0); /* call 0x002186C0 */

loc_0006200C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00062021; /* jl: less (signed <) */

loc_00062010: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + eax * 8);
    eax = MEM32(ecx + eax * 8 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0006202B; /* jge: greater or equal (signed >=) */

loc_00062021: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0006202B: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00062038u); RECOMP_ABI_CALL(0x00061DF0u, sub_00061DF0); /* call 0x00061DF0 */

loc_00062038: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00062040
 * Original: 0x00062040 - 0x000620F5 (181 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00062040: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x296C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000620C9; /* je: equal / zero */

loc_00062052: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebp = ebx + 0x10;
    PUSH32(esp, ecx);
    ecx = ebp;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00062067u); RECOMP_ABI_CALL(0x002186C0u, sub_002186C0); /* call 0x002186C0 */

loc_00062067: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00062079; /* jl: less (signed <) */

loc_0006206B: ;
    ecx = MEM32(ebp);
    edx = MEM32(ecx + eax * 8);
    edi = MEM32(ecx + eax * 8 + 4);
    MEM32(esp + 0x10) = edx;

loc_00062079: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x28F0;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    PUSH32(esp, 0x00062099u); RECOMP_ABI_CALL(0x00208520u, sub_00208520); /* call 0x00208520 */

loc_00062099: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esi + 0x28F8;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    PUSH32(esp, 0x000620B5u); RECOMP_ABI_CALL(0x00208520u, sub_00208520); /* call 0x00208520 */

loc_000620B5: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 0x2900) = ebx;
    MEM32(esi + 0x2904) = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000620C9: ;
    MEM32(esi + 0x28F0) = eax;
    MEM32(esi + 0x28F4) = eax;
    MEM32(esi + 0x28F8) = eax;
    MEM32(esi + 0x28FC) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x2900) = eax;
    MEM32(esi + 0x2904) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00062100
 * Original: 0x00062100 - 0x0006214F (79 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00062100: ;
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0006211Au); RECOMP_ABI_CALL(0x002186C0u, sub_002186C0); /* call 0x002186C0 */

loc_0006211A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006213D; /* jl: less (signed <) */

loc_0006211E: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + eax * 8);
    MEM32(esp + 8) = edx;
    edx = MEM32(ecx + eax * 8 + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006213D; /* jl: less (signed <) */

loc_0006212F: ;
    eax = MEM32(esp + 0x14);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0006213D: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(ecx) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00062150
 * Original: 0x00062150 - 0x000621AF (95 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00062150: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x793588);
    ecx = MEM32(0x793594);
    edx = MEM32(esp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00062171u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00062171: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00062191; /* jge: greater or equal (signed >=) */

loc_00062178: ;
    eax = 0x793598;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0006218Cu); RECOMP_ABI_CALL(0x00207110u, sub_00207110); /* call 0x00207110 */

loc_0006218C: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00062191: ;
    ecx = MEM32(0x793590);
    edx = MEM32(ecx + eax * 4);
    eax = ecx + eax * 4;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000621AAu); RECOMP_ABI_CALL(0x00207110u, sub_00207110); /* call 0x00207110 */

loc_000621AA: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000621B0
 * Original: 0x000621B0 - 0x000624D6 (806 bytes, 198 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000621B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000621B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000621BAu); RECOMP_ABI_CALL(0x00060AD0u, sub_00060AD0); /* call 0x00060AD0 */

loc_000621BA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(0x2DC8AC)); /* movss */
    MEM32(esi) = edi;
    MEM32(esi + 0x2918) = 0x4140CC;
    eax = MEM32(0x4140CC);
    MEM32(esi + 0x2914) = eax;
    MEMF(esi + 0x2920) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x292C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2930) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2934) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2948) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2938) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2950) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2954) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DDA40)); /* movss */
    MEMF(esi + 0x2958) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E1644)); /* movss */
    MEMF(esi + 0x295C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esi + 0x2960) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E3D58)); /* movss */
    MEM32(esi + 0x291C) = ebx;
    MEMF(esi + 0x2940) = xmm1.f[0]; /* movss */
    MEM8(esi + 0x2981) = LO8(ebx);
    MEM8(esi + 0x2982) = LO8(ebx);
    MEM8(esi + 0x2983) = LO8(ebx);
    MEM32(esi + 0x28E8) = ebx;
    MEMF(esi + 0x2924) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2928) = xmm0.f[0]; /* movss */
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0006229Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00062294u); } /* indirect call */
    }

loc_0006229A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000623FB; /* je: equal / zero */

loc_000622A2: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x000622ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000622A6u); } /* indirect call */
    }

loc_000622AC: ;
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
    PUSH32(esp, 0x000622CEu); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_000622CE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000622DC; /* jge: greater or equal (signed >=) */

loc_000622D5: ;
    eax = 0x6438B8;
    goto loc_000622E5;

loc_000622DC: ;
    ecx = MEM32(0x6438B0);
    eax = ecx + eax * 4;

loc_000622E5: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(edi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000623FB; /* je: equal / zero */

loc_000622F2: ;
    eax = MEM32(eax + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000623FB; /* je: equal / zero */

loc_00062303: ;
    edi = esi + 8;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0006230Eu); RECOMP_ABI_CALL(0x0010E940u, sub_0010E940); /* call 0x0010E940 */

loc_0006230E: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    ecx = esi + 0x70C;
    PUSH32(esp, 0x0006231Du); RECOMP_ABI_CALL(0x0010E940u, sub_0010E940); /* call 0x0010E940 */

loc_0006231D: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00062325u); RECOMP_ABI_CALL(0x00207D40u, sub_00207D40); /* call 0x00207D40 */

loc_00062325: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006233E; /* je: equal / zero */

loc_0006232D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00062333u); RECOMP_ABI_CALL(0x00061F40u, sub_00061F40); /* call 0x00061F40 */

loc_00062333: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28D0) = eax;
    goto loc_00062344;

loc_0006233E: ;
    MEM32(esi + 0x28D0) = ebx;

loc_00062344: ;
    _fa = (uint32_t)(MEM32(esi + 0x28D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28D0), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006235F; /* jne: not equal / not zero */

loc_0006234C: ;
    PUSH32(esp, 0x971B9788u);
    PUSH32(esp, 0x00062356u); RECOMP_ABI_CALL(0x00061F40u, sub_00061F40); /* call 0x00061F40 */

loc_00062356: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28D0) = eax;

loc_0006235F: ;
    eax = MEM32(esi + 0x28D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006237D; /* je: equal / zero */

loc_00062369: ;
    eax = MEM32(eax + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00062372u); RECOMP_ABI_CALL(0x00061F40u, sub_00061F40); /* call 0x00061F40 */

loc_00062372: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28D4) = eax;
    goto loc_00062383;

loc_0006237D: ;
    MEM32(esi + 0x28D4) = ebx;

loc_00062383: ;
    ecx = MEM32(esi + 0x28D0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 0x28D8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000623A5; /* je: equal / zero */

loc_00062393: ;
    PUSH32(esp, 0x933B5BDEu);
    PUSH32(esp, 0x0006239Du); RECOMP_ABI_CALL(0x00061420u, sub_00061420); /* call 0x00061420 */

loc_0006239D: ;
    MEM32(esi + 0x28DC) = eax;
    goto loc_000623AB;

loc_000623A5: ;
    MEM32(esi + 0x28DC) = ebx;

loc_000623AB: ;
    ecx = MEM32(esi + 0x28D4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 0x28E0) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000623CD; /* je: equal / zero */

loc_000623BB: ;
    PUSH32(esp, 0x933B5BDEu);
    PUSH32(esp, 0x000623C5u); RECOMP_ABI_CALL(0x00061420u, sub_00061420); /* call 0x00061420 */

loc_000623C5: ;
    MEM32(esi + 0x28E4) = eax;
    goto loc_000623D3;

loc_000623CD: ;
    MEM32(esi + 0x28E4) = ebx;

loc_000623D3: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esi + 0x1964;
    PUSH32(esp, 0x000623E3u); RECOMP_ABI_CALL(0x00062F30u, sub_00062F30); /* call 0x00062F30 */

loc_000623E3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000623FB; /* je: equal / zero */

loc_000623E7: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = esi + 0xE10;
    PUSH32(esp, 0x000623F7u); RECOMP_ABI_CALL(0x00062F30u, sub_00062F30); /* call 0x00062F30 */

loc_000623F7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00062403; /* jne: not equal / not zero */

loc_000623FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00062403: ;
    PUSH32(esp, 0xBE794A08u);
    edx = esi + 0x2968;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esi + 0x24B4) = ebx;
    MEM32(esi + 0x1960) = ebx;
    PUSH32(esp, 0x00062422u); RECOMP_ABI_CALL(0x00062100u, sub_00062100); /* call 0x00062100 */

loc_00062422: ;
    PUSH32(esp, 0x730B6C7B);
    eax = esi + 0x296C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00062435u); RECOMP_ABI_CALL(0x00062100u, sub_00062100); /* call 0x00062100 */

loc_00062435: ;
    PUSH32(esp, 0x4313EBF2);
    ecx = esi + 0x2970;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00062448u); RECOMP_ABI_CALL(0x00062100u, sub_00062100); /* call 0x00062100 */

loc_00062448: ;
    PUSH32(esp, 0x730B6C7B);
    edx = esi + 0x2974;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0006245Bu); RECOMP_ABI_CALL(0x00062100u, sub_00062100); /* call 0x00062100 */

loc_0006245B: ;
    PUSH32(esp, 0x740B6E0E);
    eax = esi + 0x2978;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0006246Eu); RECOMP_ABI_CALL(0x00062100u, sub_00062100); /* call 0x00062100 */

loc_0006246E: ;
    PUSH32(esp, 0xB813DAE5u);
    ecx = esi + 0x297C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00062481u); RECOMP_ABI_CALL(0x00062100u, sub_00062100); /* call 0x00062100 */

loc_00062481: ;
    MEM8(esi + 0x2980) = LO8(ebx);
    SET_LO8(ecx, 3);
    /* nop */

loc_00062490: ;
    SET_LO8(eax, MEM8(esi + 0x2980));
    edx = ZX8(LO8(eax));
    _fa = (uint32_t)(MEM32(esi + edx * 4 + 0x2974)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + edx * 4 + 0x2974), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000624AE; /* je: equal / zero */

loc_000624A2: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    MEM8(esi + 0x2980) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_00062490; /* jb: below (unsigned <) */

loc_000624AE: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x9C5820BEu);
    PUSH32(esp, 0x000624BBu); RECOMP_ABI_CALL(0x00061F00u, sub_00061F00); /* call 0x00061F00 */

loc_000624BB: ;
    ecx = esi;
    MEM32(esi + 0x2964) = eax;
    PUSH32(esp, 0x000624C8u); RECOMP_ABI_CALL(0x00062040u, sub_00062040); /* call 0x00062040 */

loc_000624C8: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    MEM8(esi + 0x2984) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000624E0
 * Original: 0x000624E0 - 0x000626A6 (454 bytes, 125 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000624E0(void)
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

loc_000624E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x2981));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00062600; /* je: equal / zero */

loc_000624FE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00062507u); RECOMP_ABI_CALL(0x000611E0u, sub_000611E0); /* call 0x000611E0 */

loc_00062507: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x410) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x410 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00062600; /* jne: not equal / not zero */

loc_00062512: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00062519u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00062516u); } /* indirect call */
    }

loc_00062519: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi + 0x2908;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00062528u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_00062528: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00062535u); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_00062535: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB813DAE5u);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006254Du); RECOMP_ABI_CALL(0x00061FF0u, sub_00061FF0); /* call 0x00061FF0 */

loc_0006254D: ;
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00062556u); RECOMP_ABI_CALL(0x001F8860u, sub_001F8860); /* call 0x001F8860 */

loc_00062556: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00062563u); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_00062563: ;
    SET_LO8(eax, MEM8(esi + 0x2982));
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x2928)); /* fsub dword ptr [esi + 0x2928] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x2924)); /* fadd dword ptr [esi + 0x2924] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_000625AC; /* je: equal / zero */

loc_00062592: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006259C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00062597: ;
    xmm1 = xmm0; /* movaps */
    goto loc_000625F9;

loc_0006259C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000625F9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000625A7: ;
    xmm1 = xmm0; /* movaps */
    goto loc_000625F9;

loc_000625AC: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000625B8; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000625B1: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000625C6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esp + 0x1C)) */

loc_000625B8: ;
    edx = MEM32(esi + 0x2918);
    eax = MEM32(edx);
    MEM32(esi + 0x2914) = eax;

loc_000625C6: ;
    eax = MEM32(esi + 0x2918);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000625E6; /* je: equal / zero */

loc_000625D0: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(MEM32(esi + 0x2914)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esi + 0x2914);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x6921A0); /* mulss */
    goto loc_000625E9;

loc_000625E6: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000625E9: ;
    xmm2 = XMM_SCALAR(MEMF(0x30D8CC)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000625F9; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000625F6: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */

loc_000625F9: ;
    MEM8(esi + 0x2981) = 0;

loc_00062600: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2938)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x30D8C8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ebp + 8); /* mulss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00062623; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0006261A: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    goto loc_0006262F;

loc_00062623: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00062634; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00062628: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */

loc_0006262F: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00062634; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00062631: ;
    xmm0 = xmm1; /* movaps */

loc_00062634: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esi + 0x2938) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0006269E; /* jnp: not parity */

loc_00062649: ;
    edi = esi + 0x2790;
    PUSH32(esp, 0x6438E0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006265Bu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0006265B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x2938); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00062672u); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_00062672: ;
    eax = MEM32(esi + 0x2970);
    PUSH32(esp, 0x3F);
    edx = esi + 0x2688;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00062687u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_00062687: ;
    MEM32(esi + eax * 4 + 0x2588) = edi;
    eax = MEM32(esi + 0x2580);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x2580) = eax;

loc_0006269E: ;
    POP32(esp, edi);
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
 * sub_000626B0
 * Original: 0x000626B0 - 0x000626FE (78 bytes, 30 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000626B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000626B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x000626C9u); RECOMP_ABI_CALL(0x00061C70u, sub_00061C70); /* call 0x00061C70 */

loc_000626C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000626DF; /* jne: not equal / not zero */

loc_000626CD: ;
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x000626D8u); RECOMP_ABI_CALL(0x00207100u, sub_00207100); /* call 0x00207100 */

loc_000626D8: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_000626DF: ;
    _fa = (uint32_t)(MEM8(eax + 9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 9), 1 (8-bit) */
    eax = MEM32(eax);
    if (CMP_BE(_fa, _fb)) goto loc_000626E9; /* jbe: below or equal (unsigned <=) */

loc_000626E7: ;
    eax = MEM32(eax);

loc_000626E9: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000626F4u); RECOMP_ABI_CALL(0x00062150u, sub_00062150); /* call 0x00062150 */

loc_000626F4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00062700
 * Original: 0x00062700 - 0x0006290E (526 bytes, 139 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00062700: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x0006270Fu); RECOMP_ABI_CALL(0x000611E0u, sub_000611E0); /* call 0x000611E0 */

loc_0006270F: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006271B; /* je: equal / zero */

loc_00062714: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0006271Bu); RECOMP_ABI_CALL(0x00060DF0u, sub_00060DF0); /* call 0x00060DF0 */

loc_0006271B: ;
    SET_LO8(eax, MEM8(esi + 0x2980));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_BE(_fa, _fb)) goto loc_000628AB; /* jbe: below or equal (unsigned <=) */

loc_0006272C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2930)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x30D8D8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x292C); /* subss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00062755; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00062750: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0006275D;

loc_00062755: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006275D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0006275A: ;
    xmm0 = xmm2; /* movaps */

loc_0006275D: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x2934)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm2 = XMM_SCALAR(MEMF(0x30D8C0)); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x30D8C4)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm5.f[0]; /* comiss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000627A9; /* jb: below (unsigned <) (xmm3.f[0] vs xmm5.f[0]) */

loc_00062796: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000627A0; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_0006279B: ;
    xmm1 = xmm4; /* movaps */
    goto loc_000627BE;

loc_000627A0: ;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm2; /* movaps */
    goto loc_000627BE;

loc_000627A9: ;
    xmm7 = xmm5; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000627BA; /* jb: below (unsigned <) (xmm2.f[0] vs xmm7.f[0]) */

loc_000627B5: ;
    xmm1 = xmm4; /* movaps */
    goto loc_000627BE;

loc_000627BA: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_000627BE: ;
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x2930)); /* movss */
    MEMF(esi + 0x2934) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x292C); /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi + 0x292C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00062807; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm1.f[0]) */

loc_000627F3: ;
    eax = MEM32(esi + 0x2930);
    MEM32(esi + 0x292C) = eax;
    MEMF(esi + 0x2934) = xmm5.f[0]; /* movss */

loc_00062807: ;
    SET_LO8(eax, MEM8(esi + 0x2983));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x292C)); /* movss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00062828; /* je: equal / zero */

loc_0006281F: ;
    MEM8(esi + 0x2983) = 0;
    goto loc_00062830;

loc_00062828: ;
    MEMF(esi + 0x2944) = xmm5.f[0]; /* movss */

loc_00062830: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2948)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x2944)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x2940)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00062860; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00062857: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    goto loc_0006286C;

loc_00062860: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006287D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00062865: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */

loc_0006286C: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0006287D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00062874: ;
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_0006287D: ;
    _fca = xmm3.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esi + 0x2948) = xmm0.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00062897; /* jp: parity */

loc_0006288E: ;
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000628AB; /* jnp: not parity */

loc_00062897: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000628A8u); RECOMP_ABI_CALL(0x00061A50u, sub_00061A50); /* call 0x00061A50 */

loc_000628A8: ;
    xmm5 = XMM_ZERO(); /* xorps self = zero */

loc_000628AB: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2950)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000628D2; /* jp: parity */

loc_000628C1: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2954)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000628DD; /* jnp: not parity */

loc_000628D2: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000628DAu); RECOMP_ABI_CALL(0x00061910u, sub_00061910); /* call 0x00061910 */

loc_000628DA: ;
    xmm5 = XMM_ZERO(); /* xorps self = zero */

loc_000628DD: ;
    eax = MEM32(esi + 0x2970);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000628F2; /* je: equal / zero */

loc_000628E7: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000628EFu); RECOMP_ABI_CALL(0x000624E0u, sub_000624E0); /* call 0x000624E0 */

loc_000628EF: ;
    xmm5 = XMM_ZERO(); /* xorps self = zero */

loc_000628F2: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2960)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    POP32(esp, edi);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00062907; /* jb: below (unsigned <) (xmm0.f[0] vs xmm5.f[0]) */

loc_00062900: ;
    ecx = esi;
    PUSH32(esp, 0x00062907u); RECOMP_ABI_CALL(0x000619B0u, sub_000619B0); /* call 0x000619B0 */

loc_00062907: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00062910
 * Original: 0x00062910 - 0x000629E5 (213 bytes, 68 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00062910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00062910: ;
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
    _fa = (uint32_t)(MEM32(esi + 0x28E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28E8), 1 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0006293B; /* jne: not equal / not zero */

loc_0006292A: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00062939u); RECOMP_ABI_CALL(0x000615F0u, sub_000615F0); /* call 0x000615F0 */

loc_00062939: ;
    goto loc_0006294B;

loc_0006293B: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006294Bu); RECOMP_ABI_CALL(0x00061460u, sub_00061460); /* call 0x00061460 */

loc_0006294B: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00062953u); RECOMP_ABI_CALL(0x00062700u, sub_00062700); /* call 0x00062700 */

loc_00062953: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, 0x6459E8);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = esi + 8;
    PUSH32(esp, 0);
    ecx = edi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006298Cu); RECOMP_ABI_CALL(0x002081A0u, sub_002081A0); /* call 0x002081A0 */

loc_0006298C: ;
    PUSH32(esp, 0x6438E0);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006299Au); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_0006299A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x292C); /* subss */
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000629B5u); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_000629B5: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x000629BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000629B9u); } /* indirect call */
    }

loc_000629BF: ;
    _fb = (uint32_t)(0x24B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24B8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = eax + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000629D6u); RECOMP_ABI_CALL(0x00204770u, sub_00204770); /* call 0x00204770 */

loc_000629D6: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000629DDu); RECOMP_ABI_CALL(0x00203C10u, sub_00203C10); /* call 0x00203C10 */

loc_000629DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000629F0
 * Original: 0x000629F0 - 0x00062A00 (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000629F0(void)
{

loc_000629F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00062A00
 * Original: 0x00062A00 - 0x00062A29 (41 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00062A00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(ecx + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_00062A1A; /* je: equal / zero */

loc_00062A0B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00062A23; /* jne: not equal / not zero */

loc_00062A0F: ;
    edx = MEM32(ecx);
    MEM32(edx + 8) = MEM32(edx + 8) + 1;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

loc_00062A1A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00062A23; /* je: equal / zero */

loc_00062A1E: ;
    edx = MEM32(ecx);
    MEM32(edx + 8) = MEM32(edx + 8) - 1;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00062A23: ;
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00062A30
 * Original: 0x00062A30 - 0x00062A4B (27 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062A30(void)
{

loc_00062A30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ecx);
    MEM32(ecx + 8) = 0;
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, 0x00062A44u); RECOMP_ABI_CALL(0x000629F0u, sub_000629F0); /* call 0x000629F0 */

loc_00062A44: ;
    MEM8(ecx + 0x10) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00062A50
 * Original: 0x00062A50 - 0x00062A5B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062A50(void)
{

loc_00062A50: ;
    MEM32(0x3219AC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00062A60
 * Original: 0x00062A60 - 0x00062A6C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062A60(void)
{

loc_00062A60: ;
    PUSH32(esp, 0x00062A65u); RECOMP_ABI_CALL(0x00196A70u, sub_00196A70); /* call 0x00196A70 */

loc_00062A65: ;
    MEM8(ecx + 0x10) = 0;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00062A70
 * Original: 0x00062A70 - 0x00062A95 (37 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00062A70: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00062A79; /* jl: less (signed <) */

loc_00062A76: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00062A79: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 4;
    edi = edi;

loc_00062A80: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00062A91; /* je: equal / zero */

loc_00062A85: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00062A80; /* jl: less (signed <) */

loc_00062A8E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00062A91: ;
    eax = ecx + eax * 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00062AA0
 * Original: 0x00062AA0 - 0x00062AEF (79 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00062AA0: ;
    edx = MEM32(0x30EFF0);
    eax = edx;
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(0u - (uint32_t)(LO8(edx))));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x8B6724B5u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x98CE4424u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x98CE4424u)) >> 32) & 1);
    edx = edx + 0x98CE4424u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    if (0x13) _cf = (int)(((edx) >> (32 - (0x13))) & 1);
    edx = edx << 0x13;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0xD) _cf = (int)(((eax) >> ((0xD) - 1)) & 1);
    eax = eax >> 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x30EFF0) = edx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 4;

loc_00062AD6: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00062AEB; /* jne: not equal / not zero */

loc_00062ADB: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(8)) >> 32) & 1);
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00062AE8; /* jge: greater or equal (signed >=) */

loc_00062AE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00062AD6; /* jne: not equal / not zero */

loc_00062AE8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00062AEB: ;
    eax = ecx + eax * 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00062AF0
 * Original: 0x00062AF0 - 0x00062B13 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00062AF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00062AFCu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00062AFC: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00062B05u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00062B05: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00062B0Eu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00062B0E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00062B20
 * Original: 0x00062B20 - 0x00062B84 (100 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00062B20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00062B31; /* jl: less (signed <) */

loc_00062B2B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00062B31: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = eax + eax * 4;
    PUSH32(esp, edx);
    ecx = ecx + eax * 4;
    PUSH32(esp, 0x00062B45u); RECOMP_ABI_CALL(0x00062A30u, sub_00062A30); /* call 0x00062A30 */

loc_00062B45: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x14);
    eax = eax + eax * 4;
    edi = ecx + eax * 4;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00062B5Fu); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_00062B5F: ;
    edx = MEM32(esi + 8);
    MEM32(edx + eax * 4) = edi;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    eax = ecx + ecx * 4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x18) = ecx;
    eax = edx + eax * 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00062B90
 * Original: 0x00062B90 - 0x00062C81 (241 bytes, 95 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00062B90: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x2E3D7C);
    eax = ebx + ebx * 4;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = ebx;
    PUSH32(esp, 0x00062BC2u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00062BC2: ;
    edx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00062BE4; /* je: equal / zero */

loc_00062BCB: ;
    eax = ebx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    ecx = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00062BE6; /* jl: less (signed <) */

loc_00062BD4: ;
    ebx = eax + 1;

loc_00062BD7: ;
    PUSH32(esp, 0x00062BDCu); RECOMP_ABI_CALL(0x00062A60u, sub_00062A60); /* call 0x00062A60 */

loc_00062BDC: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00062BD7; /* jne: not equal / not zero */

loc_00062BE2: ;
    goto loc_00062BE6;

loc_00062BE4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00062BE6: ;
    ecx = MEM32(esi + 0x1C);
    ebx = 1;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 0x14) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00062C06; /* jbe: below or equal (unsigned <=) */

loc_00062BF7: ;
    eax = MEM32(esi + 0x1C);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    /* nop */

loc_00062C00: ;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00062C00; /* jb: below (unsigned <) */

loc_00062C06: ;
    PUSH32(esp, 0x2E3D5C);
    ebp = ebx * 4;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00062C19u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00062C19: ;
    PUSH32(esp, 0x2E3D5C);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    edi = eax;
    PUSH32(esp, 0x00062C28u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00062C28: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00062C49; /* jne: not equal / not zero */

loc_00062C35: ;
    POP32(esp, edi);
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00062C49: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esi) = ebx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = edi;
    PUSH32(esp, 0x00062C58u); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_00062C58: ;
    edi = MEM32(esp + 0x1C);
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 4) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00062C90
 * Original: 0x00062C90 - 0x00062CB7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00062C90: ;
    ecx = MEM32(0x3219AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00062CB6; /* je: equal / zero */

loc_00062C9A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00062CA2u); RECOMP_ABI_CALL(0x00062AF0u, sub_00062AF0); /* call 0x00062AF0 */

loc_00062CA2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00062CA8u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00062CA8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3219AC) = 0;
    POP32(esp, esi);

loc_00062CB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00062CC0
 * Original: 0x00062CC0 - 0x00062CF4 (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00062CC0: ;
    PUSH32(esp, 0x00062CC5u); RECOMP_ABI_CALL(0x00062C90u, sub_00062C90); /* call 0x00062C90 */

loc_00062CC5: ;
    PUSH32(esp, 0x2E3D9C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00062CD3u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00062CD3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00062CE9; /* je: equal / zero */

loc_00062CDA: ;
    PUSH32(esp, 0x10);
    ecx = eax;
    PUSH32(esp, 0x00062CE3u); RECOMP_ABI_CALL(0x00062B90u, sub_00062B90); /* call 0x00062B90 */

loc_00062CE3: ;
    MEM32(0x3219AC) = eax;
    esp += 4; return; /* ret */

loc_00062CE9: ;
    MEM32(0x3219AC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00062D00
 * Original: 0x00062D00 - 0x00062D21 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062D00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00062D00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00062D08u); RECOMP_ABI_CALL(0x00206A30u, sub_00206A30); /* call 0x00206A30 */

loc_00062D08: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xB2C) = eax;
    MEM32(esi + 0xB30) = eax;
    MEM8(esi + 0xB4E) = MEM8(esi + 0xB4E) & 0xFB;
    _fa = (uint32_t)(MEM8(esi + 0xB4E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00062D30
 * Original: 0x00062D30 - 0x00062D41 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062D30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00062D30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00062D38u); RECOMP_ABI_CALL(0x00206930u, sub_00206930); /* call 0x00206930 */

loc_00062D38: ;
    MEM8(esi + 0xB4E) = MEM8(esi + 0xB4E) & 0xFB;
    _fa = (uint32_t)(MEM8(esi + 0xB4E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00062D50
 * Original: 0x00062D50 - 0x00062DF0 (160 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00062D50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xB48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00062DEC; /* je: equal / zero */

loc_00062D61: ;
    ecx = MEM32(esi + 0xB44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00062D80; /* jns: not sign (positive) */

loc_00062D6B: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xB38); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00062D80; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0xB38)) */

loc_00062D7C: ;
    SET_LO8(eax, 1);
    goto loc_00062D82;

loc_00062D80: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00062D82: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x40000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00062DEC; /* jne: not equal / not zero */

loc_00062D8A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00062DEC; /* jne: not equal / not zero */

loc_00062D8E: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00062D9Au); RECOMP_ABI_CALL(0x00206D60u, sub_00206D60); /* call 0x00206D60 */

loc_00062D9A: ;
    PUSH32(esp, 1);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00062DA8u); RECOMP_ABI_CALL(0x00206CD0u, sub_00206CD0); /* call 0x00206CD0 */

loc_00062DA8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00062DEC; /* je: equal / zero */

loc_00062DAC: ;
    /* nop */

loc_00062DB0: ;
    ecx = MEM32(esi + 0xB30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00062DC6; /* je: equal / zero */

loc_00062DBA: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00062DC4u); RECOMP_ABI_CALL(0x00060350u, sub_00060350); /* call 0x00060350 */

loc_00062DC4: ;
    goto loc_00062DDA;

loc_00062DC6: ;
    ecx = MEM32(esi + 0xB2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00062DDA; /* je: equal / zero */

loc_00062DD0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00062DDAu); RECOMP_ABI_CALL(0x00060B00u, sub_00060B00); /* call 0x00060B00 */

loc_00062DDA: ;
    PUSH32(esp, 1);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00062DE8u); RECOMP_ABI_CALL(0x00206CD0u, sub_00206CD0); /* call 0x00206CD0 */

loc_00062DE8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00062DB0; /* jne: not equal / not zero */

loc_00062DEC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00062DF0
 * Original: 0x00062DF0 - 0x00062DF5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00062DF0: ;
    g_seh_ebp = ebp; sub_00207270(); return; /* tail jmp 0x00207270 */

}

/**
 * sub_00062E00
 * Original: 0x00062E00 - 0x00062EA9 (169 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00062E00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00062E00: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x241688);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(esi + 0xB4E));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEMF(esi + 0xB34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEM8(esi + 0xB4E) = LO8(ecx);
    PUSH32(esp, ebx);
    ecx = esp + 0xC;
    MEM32(esi + 0xB48) = ebx;
    MEM8(esi + 0xB4C) = LO8(ebx);
    MEM8(esi + 0xB4D) = LO8(ebx);
    MEM32(esi + 0xB44) = ebx;
    MEMF(esi + 0xB38) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00062E72u); RECOMP_ABI_CALL(0x00207110u, sub_00207110); /* call 0x00207110 */

loc_00062E72: ;
    PUSH32(esp, 0x41F00000);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x00062E87u); RECOMP_ABI_CALL(0x00206EF0u, sub_00206EF0); /* call 0x00206EF0 */

loc_00062E87: ;
    ecx = esp + 8;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00062E98u); RECOMP_ABI_CALL(0x00207270u, sub_00207270); /* call 0x00207270 */

loc_00062E98: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}
