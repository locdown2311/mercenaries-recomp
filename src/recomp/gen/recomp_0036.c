/**
 * Mercenaries - Recompiled code chunk 36
 * Functions: 250 (0x001CF180 - 0x001D89B0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001CF180
 * Original: 0x001CF180 - 0x001CF232 (178 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF180: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax + 8) = 0x2F8098;
    MEM32(eax) = 0x2F9B44;
    MEM32(eax + 8) = 0x2F9B34;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = 0x80000008u;
    ecx = eax + 0x2C;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x3C) = 0x80000000u;
    MEM32(eax + 0x50) = edx;
    MEM32(eax + 0x54) = edx;
    MEM32(eax + 0x58) = edx;
    MEM32(eax + 0x5C) = edx;
    MEM32(eax + 0x60) = edx;
    MEM32(eax + 0x64) = edx;
    MEM32(eax + 0x68) = edx;
    MEM32(eax + 0x6C) = edx;
    MEM32(eax + 0x70) = 0x3E88D677;
    MEM32(eax + 0x74) = 0x3F08D677;
    ecx = 0x3F4D41B3;
    MEM32(eax + 0x78) = ecx;
    MEM32(eax + 0x7C) = ecx;
    MEM32(eax + 0x94) = edx;
    MEM32(eax + 0x98) = 0x80000004u;
    ecx = eax + 0x9C;
    MEM32(eax + 0x90) = ecx;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001CF240
 * Original: 0x001CF240 - 0x001CF248 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF240: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001CF250(); return; /* tail jmp 0x001CF250 */

}

/**
 * sub_001CF250
 * Original: 0x001CF250 - 0x001CF278 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF250: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001CF258u); RECOMP_ABI_CALL(0x001CAC90u, sub_001CAC90); /* call 0x001CAC90 */

loc_001CF258: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CF272; /* je: equal / zero */

loc_001CF25F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x27);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001CF272u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF26Fu); } /* indirect call */
    }

loc_001CF272: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF280
 * Original: 0x001CF280 - 0x001CF286 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF280(void)
{

loc_001CF280: ;
    eax = 0x441080;
    esp += 4; return; /* ret */

}

/**
 * sub_001CF290
 * Original: 0x001CF290 - 0x001CF2CD (61 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF290: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2461F1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(esp) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001CF2BE; /* je: equal / zero */

loc_001CF2B9: ;
    PUSH32(esp, 0x001CF2BEu); RECOMP_ABI_CALL(0x001D9170u, sub_001D9170); /* call 0x001D9170 */

loc_001CF2BE: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CF2D0
 * Original: 0x001CF2D0 - 0x001CF2F2 (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF2D0(void)
{

loc_001CF2D0: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x26);
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001CF2DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF2DCu); } /* indirect call */
    }

loc_001CF2DF: ;
    MEM16(eax + 4) = 8;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2F9870;
    esp += 4; return; /* ret */

}

/**
 * sub_001CF300
 * Original: 0x001CF300 - 0x001CF30F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF300(void)
{

loc_001CF300: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF30Eu); RECOMP_ABI_CALL(0x001CBE50u, sub_001CBE50); /* call 0x001CBE50 */

loc_001CF30E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CF310
 * Original: 0x001CF310 - 0x001CF31F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF310(void)
{

loc_001CF310: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF31Eu); RECOMP_ABI_CALL(0x001CBE80u, sub_001CBE80); /* call 0x001CBE80 */

loc_001CF31E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CF320
 * Original: 0x001CF320 - 0x001CF326 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF320(void)
{

loc_001CF320: ;
    eax = 0x4410A8;
    esp += 4; return; /* ret */

}

/**
 * sub_001CF330
 * Original: 0x001CF330 - 0x001CF381 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF330(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF330: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24620B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0x26);
    PUSH32(esp, 0x60);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001CF355u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF352u); } /* indirect call */
    }

loc_001CF355: ;
    MEM16(eax + 4) = 0x60;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001CF372u); RECOMP_ABI_CALL(0x001CC1A0u, sub_001CC1A0); /* call 0x001CC1A0 */

loc_001CF372: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CF390
 * Original: 0x001CF390 - 0x001CF3F4 (100 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF390: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246231);
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
    if (CMP_EQ(_fa, _fb)) goto loc_001CF3E4; /* je: equal / zero */

loc_001CF3BB: ;
    ecx = esi;
    PUSH32(esp, 0x001CF3C2u); RECOMP_ABI_CALL(0x001D9170u, sub_001D9170); /* call 0x001D9170 */

loc_001CF3C2: ;
    MEM32(esi) = 0xBF800000u;
    MEM32(esi + 4) = 0x3C23D70A;
    MEM32(esi + 8) = 0x3BA3D70A;
    MEM32(esi + 0xC) = 0x3DCCCCCD;
    MEM32(esi + 0x10) = 0x3E4CCCCD;

loc_001CF3E4: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CF400
 * Original: 0x001CF400 - 0x001CF4DF (223 bytes, 69 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001CF400(void)
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

loc_001CF400: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) - fp_top()); /* fsubr dword ptr [0x2dc08c] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xC) = eax;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) - fp_top()); /* fsubr dword ptr [0x2dc08c] */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    MEMF(ecx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x1C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    MEMF(ecx + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    MEMF(ecx + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) - fp_top()); /* fsubr dword ptr [0x2dc08c] */
    MEMF(ecx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x2C) = eax;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001CF4E0
 * Original: 0x001CF4E0 - 0x001CF505 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001CF4E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001CF4E0: ;
    eax = MEM32(ecx + 4);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    MEM32(ecx + 0x10) = eax;
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 8);
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    MEM32(ecx + 0x20) = edx;
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 0x18);
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    MEM32(ecx + 0x24) = eax;
    MEMF(ecx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001CF510
 * Original: 0x001CF510 - 0x001CF556 (70 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF510: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(ecx + 0x28) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x1C) = edx;
    MEM32(ecx + 0x2C) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x18) = edx;
    eax = MEM32(eax + 0x18);
    MEM32(ecx + 0x24) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF560
 * Original: 0x001CF560 - 0x001CF5EF (143 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    xmm3 = XMM_MEM(ecx); /* movaps */
    xmm1 = XMM_MEM(0x2F6A20); /* movaps */
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebp + 0xC);
    xmm2 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3 = XMM_SUB(xmm3, xmm2); /* subps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm3 = XMM_AND(xmm3, xmm1); /* andps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_CMP_PRED(xmm2, xmm3, 1); /* cmpltps */
    edx = XMM_MOVEMASK(xmm2); /* movmskps */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 7 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CF5E2; /* jne: not equal / not zero */

loc_001CF59F: ;
    xmm2 = XMM_MEM(eax + 0x10); /* movaps */
    xmm3 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm3 = XMM_SUB(xmm3, xmm2); /* subps */
    xmm3 = XMM_AND(xmm3, xmm1); /* andps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_CMP_PRED(xmm2, xmm3, 1); /* cmpltps */
    edx = XMM_MOVEMASK(xmm2); /* movmskps */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 7 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CF5E2; /* jne: not equal / not zero */

loc_001CF5BC: ;
    xmm2 = XMM_MEM(eax + 0x20); /* movaps */
    xmm3 = XMM_MEM(ecx + 0x20); /* movaps */
    xmm3 = XMM_SUB(xmm3, xmm2); /* subps */
    xmm3 = XMM_AND(xmm3, xmm1); /* andps */
    xmm0 = XMM_CMP_PRED(xmm0, xmm3, 1); /* cmpltps */
    eax = XMM_MOVEMASK(xmm0); /* movmskps */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 7 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CF5E2; /* jne: not equal / not zero */

loc_001CF5D5: ;
    eax = MEM32(ebp + 8);
    SET_LO8(ecx, 1);
    MEM8(eax) = LO8(ecx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_001CF5E2: ;
    eax = MEM32(ebp + 8);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax) = LO8(ecx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001CF5F0
 * Original: 0x001CF5F0 - 0x001CF653 (99 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF5F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF5F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = 3;
    goto loc_001CF610;

    /* nop */

loc_001CF610: ;
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm2 = XMM_MEM(edx + 0x20); /* movaps */
    xmm3 = XMM_MEM(edx + 0x10); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xAA); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(edx); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(ecx + eax, xmm0); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CF610; /* jne: not equal / not zero */

loc_001CF64C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CF660
 * Original: 0x001CF660 - 0x001CF6C8 (104 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF660(void)
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

loc_001CF660: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(esp, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    edx = MEM32(esp + 8);
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    eax = MEM32(esp + 4);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM32(esp + 0x20) = edx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CF6C2u); RECOMP_ABI_CALL(0x001CF5F0u, sub_001CF5F0); /* call 0x001CF5F0 */

loc_001CF6C2: ;
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
 * sub_001CF6D0
 * Original: 0x001CF6D0 - 0x001CF700 (48 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF6D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF6D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CF6EBu); RECOMP_ABI_CALL(0x001CF660u, sub_001CF660); /* call 0x001CF660 */

loc_001CF6EB: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CF6F8u); RECOMP_ABI_CALL(0x001CF5F0u, sub_001CF5F0); /* call 0x001CF5F0 */

loc_001CF6F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF700
 * Original: 0x001CF700 - 0x001CF74E (78 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF700: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_MEM(eax); /* movaps */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_MEM(eax + 0x30); /* movaps */
    xmm3 = XMM_MEM(eax + 0x20); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm2 = XMM_MEM(eax + 0x10); /* movaps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(ecx, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CF750
 * Original: 0x001CF750 - 0x001CF7C6 (118 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF750: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 8);
    xmm3 = XMM_MEM(eax + 0x20); /* movaps */
    xmm1 = XMM_MEM(eax + 0x30); /* movaps */
    edx = MEM32(ebp + 0xC);
    xmm0 = XMM_MEM(edx); /* movaps */
    xmm2 = XMM_MEM(eax); /* movaps */
    xmm5 = XMM_MEM(eax + 0x10); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm4 = xmm3; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm3, 0x44); /* shufps */
    xmm7 = xmm3; /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm5, 0x44); /* shufps */
    xmm7 = XMM_SHUFFLE(xmm7, xmm3, 0xEE); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm5, 0xEE); /* shufps */
    xmm5 = xmm1; /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0x55); /* shufps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm4, 0xDD); /* shufps */
    xmm5 = XMM_MUL(xmm5, xmm3); /* mulps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm4, 0x88); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm6 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm0, 0xAA); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm7, 0x88); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm6); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm5); /* addps */
    xmm1 = XMM_ADD(xmm1, xmm2); /* addps */
    XMM_STORE(ecx, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CF7D0
 * Original: 0x001CF7D0 - 0x001CF83F (111 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF7D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF7D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 8);
    xmm3 = XMM_MEM(eax + 0x20); /* movaps */
    xmm5 = XMM_MEM(eax + 0x10); /* movaps */
    xmm2 = XMM_MEM(eax); /* movaps */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm4 = xmm3; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm3, 0x44); /* shufps */
    xmm7 = xmm3; /* movaps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm5, 0x44); /* shufps */
    xmm7 = XMM_SHUFFLE(xmm7, xmm3, 0xEE); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm5, 0xEE); /* shufps */
    xmm5 = xmm0; /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0x55); /* shufps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm4, 0xDD); /* shufps */
    xmm5 = XMM_MUL(xmm5, xmm3); /* mulps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm4, 0x88); /* shufps */
    xmm3 = xmm1; /* movaps */
    xmm6 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm3); /* mulps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm1, 0xAA); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm7, 0x88); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm6); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm5); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(ecx, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CF840
 * Original: 0x001CF840 - 0x001CF887 (71 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_MEM(eax); /* movaps */
    eax = MEM32(ebp + 8);
    xmm2 = XMM_MEM(eax + 0x20); /* movaps */
    xmm3 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xAA); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(ecx, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CF890
 * Original: 0x001CF890 - 0x001CF903 (115 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF890: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 4;
    /* nop */

loc_001CF8B0: ;
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm2 = XMM_MEM(edx + 0x20); /* movaps */
    xmm3 = XMM_MEM(edx + 0x10); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xAA); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(edx); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esi + eax, xmm0); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CF8B0; /* jne: not equal / not zero */

loc_001CF8EC: ;
    xmm0 = XMM_MEM(edx + 0x30); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x30); /* movaps */
    POP32(esp, edi);
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(ecx + 0x30, xmm1); /* movaps */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CF910
 * Original: 0x001CF910 - 0x001CFA08 (248 bytes, 79 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF910: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    xmm2 = XMM_MEM(edx + 0x20); /* movaps */
    xmm1 = XMM_MEM(edx); /* movaps */
    xmm3 = XMM_MEM(edx + 0x10); /* movaps */
    eax = MEM32(ebp + 0xC);
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm3, 0x44); /* shufps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm3, 0xEE); /* shufps */
    xmm3 = xmm2; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm2, 0x44); /* shufps */
    xmm4 = xmm0; /* movaps */
    PUSH32(esp, esi);
    xmm4 = XMM_SHUFFLE(xmm4, xmm3, 0x88); /* shufps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm3, 0xDD); /* shufps */
    xmm3 = xmm2; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm2, 0xEE); /* shufps */
    esi = ecx;
    PUSH32(esp, edi);
    xmm1 = XMM_SHUFFLE(xmm1, xmm3, 0x88); /* shufps */
    xmm2 = xmm1; /* movaps */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 4;

loc_001CF960: ;
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0xAA); /* shufps */
    xmm5 = xmm2; /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm3); /* mulps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0x55); /* shufps */
    xmm6 = xmm0; /* movaps */
    xmm6 = XMM_MUL(xmm6, xmm3); /* mulps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0); /* shufps */
    xmm1 = xmm4; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm6); /* addps */
    xmm1 = XMM_ADD(xmm1, xmm5); /* addps */
    XMM_STORE(esi + eax, xmm1); /* movaps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CF960; /* jne: not equal / not zero */

loc_001CF99A: ;
    xmm3 = XMM_MEM(edx + 0x20); /* movaps */
    xmm1 = XMM_MEM(edx + 0x30); /* movaps */
    xmm2 = XMM_MEM(edx); /* movaps */
    xmm5 = XMM_MEM(edx + 0x10); /* movaps */
    xmm4 = xmm3; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm3, 0x44); /* shufps */
    xmm7 = xmm3; /* movaps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm5, 0x44); /* shufps */
    xmm7 = XMM_SHUFFLE(xmm7, xmm3, 0xEE); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm5, 0xEE); /* shufps */
    xmm5 = xmm0; /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0x55); /* shufps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm4, 0xDD); /* shufps */
    xmm5 = XMM_MUL(xmm5, xmm3); /* mulps */
    xmm3 = xmm1; /* movaps */
    xmm6 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0); /* shufps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm4, 0x88); /* shufps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm1, 0xAA); /* shufps */
    xmm1 = XMM_MEM(ecx + 0x30); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm3); /* mulps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm7, 0x88); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm6); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm5); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    POP32(esp, edi);
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    XMM_STORE(ecx + 0x30, xmm1); /* movaps */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CFA10
 * Original: 0x001CFA10 - 0x001CFAAC (156 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CFA10(void)
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

loc_001CFA10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2 = XMM_MEM(0x4410D0); /* movaps */
    xmm3 = XMM_MEM(0x2F1900); /* movaps */
    MEM32(esp + 0xC) = 0x3F800000;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 8) = 0x41200000;
    MEM32(esp + 4) = 0x41300000;
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    ecx = 0x17;
    edi = edi;

loc_001CFA50: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    eax = MEM32(esp + 0x10);
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xB (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001CFA8D; /* jae: above or equal (unsigned >=) */

loc_001CFA87: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001CFA91;

loc_001CFA8D: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_001CFA91: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CFA50; /* jne: not equal / not zero */

loc_001CFA94: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DDE2C)); /* fsub dword ptr [0x2dde2c] */
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
 * sub_001CFAB0
 * Original: 0x001CFAB0 - 0x001CFB42 (146 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFAB0(void)
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

loc_001CFAB0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001CFAEB; /* jp: parity */

loc_001CFAC7: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2F9CA8)); /* fadd dword ptr [0x2f9ca8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(0x2F9CB4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); /* fsubr st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F9CB0)); /* fmul dword ptr [0x2f9cb0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    goto loc_001CFB15;

loc_001CFAEB: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2F9CA8)); /* fadd dword ptr [0x2f9ca8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(0x2F9CB4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); /* fsubr st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F9CB0)); /* fmul dword ptr [0x2f9cb0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DDA3C) - fp_top()); /* fsubr dword ptr [0x2dda3c] */

loc_001CFB15: ;
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001CFB2E; /* jp: parity */

loc_001CFB28: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x2F9CAC) - fp_top()); /* fsubr dword ptr [0x2f9cac] */

loc_001CFB2E: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001CFB41; /* jp: parity */

loc_001CFB3F: ;
    fp_top() = -fp_top(); /* fchs */

loc_001CFB41: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001CFB50
 * Original: 0x001CFB50 - 0x001CFB8E (62 bytes, 21 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001CFB50(void)
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

loc_001CFB50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    xmm1 = XMM_MEM(eax); /* movaps */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(ecx, xmm2); /* movaps */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_001CFB90
 * Original: 0x001CFB90 - 0x001CFCAA (282 bytes, 94 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001CFB90(void)
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

loc_001CFB90: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x14);
    fp_push(MEMF(edx + 0x14)); /* fld float */
    MEM32(esp) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx)); /* fadd dword ptr [edx] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x28)); /* fadd dword ptr [edx + 0x28] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CFBF0; /* jne: not equal / not zero */

loc_001CFBAF: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC08C)); /* fadd dword ptr [0x2dc08c] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push(MEMF(0x2DC340)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    fp_push(MEMF(edx + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x24)); /* fsub dword ptr [edx + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 8)); /* fsub dword ptr [edx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x10)); /* fsub dword ptr [edx + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001CFBF0: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, ebx);
    fp_push(MEMF(edx + 0x14)); /* fld float */
    PUSH32(esp, ebp);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx] */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    MEM32(esp + 0x18) = 2;
    MEM32(esp + 0x1C) = esi;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CFC1D; /* jne: not equal / not zero */

loc_001CFC18: ;
    esi = 1;

loc_001CFC1D: ;
    fp_push(MEMF(edx + 0x28)); /* fld float */
    eax = esi + esi * 4;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + eax * 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + eax*4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CFC32; /* jne: not equal / not zero */

loc_001CFC2D: ;
    esi = 2;

loc_001CFC32: ;
    eax = MEM32(esp + esi * 4 + 0x14);
    edi = MEM32(esp + eax * 4 + 0x14);
    ebx = edi + edi * 4;
    fp_push(MEMF(edx + ebx * 4)); /* fld float */
    ebp = eax + eax * 4;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + ebp * 4)); /* fadd dword ptr [edx + ebp*4] */
    ecx = esi + esi * 4;
    ebx = edi + eax * 4;
    ebp = eax + edi * 4;
    fp_top() = RECOMP_FP_PC(MEMF(edx + ecx * 4) - fp_top()); /* fsubr dword ptr [edx + ecx*4] */
    ecx = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC08C)); /* fadd dword ptr [0x2dc08c] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push(MEMF(0x2DC340)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    MEMF(ecx + esi * 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + ebx * 4)); /* fld float */
    ebx = esi + eax * 4;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + ebp * 4)); /* fsub dword ptr [edx + ebp*4] */
    ebp = eax + esi * 4;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + ebx * 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + ebp * 4)); /* fadd dword ptr [edx + ebp*4] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ecx + eax * 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esi + edi * 4;
    fp_push(MEMF(edx + eax * 4)); /* fld float */
    esi = edi + esi * 4;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + esi * 4)); /* fadd dword ptr [edx + esi*4] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ecx + edi * 4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    fp_pop(); /* fstp st(0) */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_001CFCB0
 * Original: 0x001CFCB0 - 0x001CFD34 (132 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CFCB0(void)
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

loc_001CFCB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001CFCD6; /* jnp: not parity */

loc_001CFCC6: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001CFCDF; /* jp: parity */

loc_001CFCD6: ;
    eax = 1;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001CFCDF: ;
    eax = MEM32(ebp + 0x10);
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    XMM_STORE(eax + 0x40, xmm0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    ecx = 0x3F800000;
    MEM32(eax + 0x20) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD418)); /* fmul dword ptr [0x2dd418] */
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x48) = ecx;
    ecx = MEM32(ebp + 0xC);
    MEMF(eax + 0x20) = (float)fp_top(); /* fst */
    MEMF(eax + 0x34) = (float)fp_top(); /* fst */
    MEMF(eax + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    MEM32(eax + 4) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2F9CC4)); /* fmul dword ptr [0x2f9cc4] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_001CFD40
 * Original: 0x001CFD40 - 0x001CFDE9 (169 bytes, 61 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001CFD40(void)
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

loc_001CFD40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001CFD62; /* jp: parity */

loc_001CFD59: ;
    eax = 1;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001CFD62: ;
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx = 0x3F800000;
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(ebp + 0x10);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DDA48)); /* fmul dword ptr [0x2dda48] */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    XMM_STORE(eax + 0x40, xmm0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEM32(eax + 0x20) = ecx;
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEM32(eax + 0x34) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    MEM32(eax + 0x48) = ecx;
    ecx = MEM32(ebp + 0xC);
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    MEM32(eax + 4) = ecx;
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC8AC)); /* fmul dword ptr [0x2dc8ac] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
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
 * sub_001CFDF0
 * Original: 0x001CFDF0 - 0x001CFE77 (135 bytes, 44 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001CFDF0(void)
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

loc_001CFDF0: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edx + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CFE58; /* jl: less (signed <) */

loc_001CFE01: ;
    PUSH32(esp, esi);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ecx;
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = edx + esi * 4;
    POP32(esp, esi);
    /* nop */

loc_001CFE10: ;
    fp_push(MEMF(eax + 0xC)); /* fld float */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(eax + -164) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(eax + -180) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + -132)); /* fld float */
    MEMF(eax + -116) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(eax + -132) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + -84)); /* fld float */
    MEMF(eax + -68) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(eax + -84) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + -36)); /* fld float */
    MEMF(eax + -20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(eax + -36) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_001CFE10; /* jne: not equal / not zero */

loc_001CFE58: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CFE74; /* jl: less (signed <) */

loc_001CFE5C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + 1;

loc_001CFE62: ;
    fp_push(MEMF(eax)); /* fld float */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(eax + -32) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(eax + -48) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_001CFE62; /* jne: not equal / not zero */

loc_001CFE74: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001CFE80
 * Original: 0x001CFE80 - 0x001CFFFC (380 bytes, 113 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CFE80(void)
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

loc_001CFE80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x2DC098)); /* fld float */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    xmm2 = XMM_MEM(ebx + 0x10); /* movaps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 8, xmm0); /* movaps */
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    PUSH32(esp, edi);
    XMM_STORE(esi, xmm2); /* movaps */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001CFF16; /* jnp: not parity */

loc_001CFED0: ;
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm1.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEM32(esp + 0xC) = 0x40400000;
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0xC) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    goto loc_001CFF24;

loc_001CFF16: ;
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_001CFF24: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    XMM_STORE(esi, xmm1); /* movaps */
    eax = MEM32(ebx + 0xC);
    MEM32(esi + 0xC) = eax;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x58)); /* fsub dword ptr [ecx + 0x58] */
    edi = esi + 0x10;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x38);
    MEM32(esi + 0x20) = edx;
    eax = MEM32(ecx + 0x34);
    MEM32(esi + 0x2C) = eax;
    edx = MEM32(ecx + 0x50);
    MEM32(esi + 0x24) = edx;
    eax = MEM32(ecx + 0x54);
    MEM32(esi + 0x28) = eax;
    XMM_STORE(edi, xmm0); /* movaps */
    MEM32(esi + 0x30) = 0;
    eax = MEM32(ebx + 0x28);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CFFB6; /* jne: not equal / not zero */

loc_001CFF71: ;
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001CFFB6; /* je: equal / zero */

loc_001CFF7C: ;
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001CFF86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CFF83u); } /* indirect call */
    }

loc_001CFF86: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001CFF92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CFF8Fu); } /* indirect call */
    }

loc_001CFF92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CFF9E; /* jne: not equal / not zero */

loc_001CFF97: ;
    MEM32(esi + 0x30) = 2;

loc_001CFF9E: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001CFFAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CFFA7u); } /* indirect call */
    }

loc_001CFFAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CFFB6; /* jne: not equal / not zero */

loc_001CFFAF: ;
    MEM32(esi + 0x30) = 1;

loc_001CFFB6: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2F9CE0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2f9ce0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001CFFF3; /* jp: parity */

loc_001CFFC6: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    xmm1 = XMM_MEM(ebx + 0x10); /* movaps */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(edi); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(edi, xmm0); /* movaps */
    MEM32(esi + 0xC) = 0;

loc_001CFFF3: ;
    POP32(esp, edi);
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
 * sub_001D0000
 * Original: 0x001D0000 - 0x001D012A (298 bytes, 96 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D0000(void)
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

loc_001D0000: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(ecx + 0x5C)); /* fld float */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xC9); /* shufps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0xD2); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xD2); /* shufps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0xC9); /* shufps */
    ecx = MEM32(eax + 0x28);
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm3); /* subps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    edx = esp + 0x14;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx) = xmm2.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    XMM_STORE(esp + 0x40, xmm1); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xC)); /* fsub dword ptr [esi + 0xc] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_NE(_fa, _fb)) goto loc_001D00BA; /* jne: not equal / not zero */

loc_001D009B: ;
    ecx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D00BA; /* je: equal / zero */

loc_001D00A2: ;
    ecx = MEM32(ecx + 0x3C);
    edx = MEM32(ecx);
    ebx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001D00B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D00ADu); } /* indirect call */
    }

loc_001D00B0: ;
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    xmm1 = XMM_MEM(esp + 0x40); /* movaps */

loc_001D00BA: ;
    eax = MEM32(esi + 0x28);
    XMM_STORE(esp + 0x30, xmm1); /* movaps */
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D00E2; /* jne: not equal / not zero */

loc_001D00C8: ;
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D00E2; /* je: equal / zero */

loc_001D00CF: ;
    ecx = MEM32(eax + 0x3C);
    eax = MEM32(ecx);
    edx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001D00DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D00DAu); } /* indirect call */
    }

loc_001D00DD: ;
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */

loc_001D00E2: ;
    xmm0 = XMM_SUB(xmm0, XMM_MEM(esp + 0x30)); /* subps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    eax = esp + 0x14;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD414)); /* fmul dword ptr [0x2dd414] */
    POP32(esp, esi);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    POP32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC094)); /* fmul dword ptr [0x2dc094] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
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
 * sub_001D0130
 * Original: 0x001D0130 - 0x001D013A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0130: ;
    eax = MEM32(ecx + 0x30);
    eax = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D0140
 * Original: 0x001D0140 - 0x001D0148 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0140: ;
    ecx = MEM32(ecx + 0x30);
    g_seh_ebp = ebp; sub_001C6FE0(); return; /* tail jmp 0x001C6FE0 */

}

/**
 * sub_001D0150
 * Original: 0x001D0150 - 0x001D015E (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0150(void)
{

loc_001D0150: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0160
 * Original: 0x001D0160 - 0x001D01B5 (85 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0160(void)
{

loc_001D0160: ;
    eax = MEM32(ecx + 0x30);
    edx = MEM32(eax + 0x14);
    xmm0 = XMM_MEM(edx + 0x50); /* movaps */
    eax = MEM32(esp + 4);
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    edx = MEM32(ecx + 0x30);
    MEM32(eax + 0x48) = edx;
    edx = MEM32(ecx + 0x34);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x38);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x50);
    MEM32(eax + 0x40) = edx;
    edx = MEM32(ecx + 0x54);
    MEM32(eax + 0x44) = edx;
    edx = MEM32(ecx + 0x58);
    MEM32(eax + 0x4C) = edx;
    edx = MEM32(ecx + 0x5C);
    MEM32(eax + 0x50) = edx;
    edx = MEM32(ecx + 0x60);
    MEM32(eax + 0x54) = edx;
    SET_LO8(ecx, MEM8(ecx + 0x94));
    MEM8(eax + 0x58) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D01C0
 * Original: 0x001D01C0 - 0x001D0386 (454 bytes, 139 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D01C0(void)
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

loc_001D01C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x48);
    MEM16(eax + 6) = MEM16(eax + 6) + 1;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esi = ecx;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D01F0; /* je: equal / zero */

loc_001D01DF: ;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D01F0; /* jne: not equal / not zero */

loc_001D01EA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001D01F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D01EEu); } /* indirect call */
    }

loc_001D01F0: ;
    xmm0 = XMM_MEM(edi + 0x10); /* movaps */
    fp_push(MEMF(0x2DC098)); /* fld float */
    XMM_STORE(esi + 0x10, xmm0); /* movaps */
    ecx = MEM32(edi + 0x20);
    MEM32(esi + 0x34) = ecx;
    edx = MEM32(edi + 0x24);
    MEM32(esi + 0x38) = edx;
    eax = MEM32(edi + 0x40);
    MEM32(esi + 0x50) = eax;
    ecx = MEM32(edi + 0x44);
    MEM32(esi + 0x54) = ecx;
    edx = MEM32(edi + 0x4C);
    MEM32(esi + 0x58) = edx;
    eax = MEM32(edi + 0x48);
    MEM32(esi + 0x30) = eax;
    ecx = MEM32(edi + 0x50);
    MEM32(esi + 0x5C) = ecx;
    edx = MEM32(edi + 0x54);
    MEM32(esi + 0x60) = edx;
    SET_LO8(eax, MEM8(edi + 0x58));
    MEM8(esi + 0x94) = LO8(eax);
    xmm0 = XMM_MEM(edi + 0x30); /* movaps */
    XMM_STORE(esi + 0x40, xmm0); /* movaps */
    xmm2 = XMM_MEM(esi + 0x40); /* movaps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001D02BA; /* jnp: not parity */

loc_001D0274: ;
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm1.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEM32(esp + 0xC) = 0x40400000;
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0xC) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    goto loc_001D02C8;

loc_001D02BA: ;
    MEM32(esp + 0xC) = 0;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_001D02C8: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    XMM_STORE(esi + 0x40, xmm1); /* movaps */
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D02E6; /* je: equal / zero */

loc_001D02E0: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D02E6u); RECOMP_ABI_CALL(0x001C6FE0u, sub_001C6FE0); /* call 0x001C6FE0 */

loc_001D02E6: ;
    eax = MEM32(esi + 0x80);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esi + 0x20, xmm0); /* movaps */
    if (CMP_LE(_fas, _fbs)) goto loc_001D0317; /* jle: less or equal (signed <=) */

loc_001D02F9: ;
    ebx = esi + 8;
    /* nop */

loc_001D0300: ;
    ecx = MEM32(esi + 0x7C);
    ecx = MEM32(ecx + edi * 4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D030Cu); RECOMP_ABI_CALL(0x001C2990u, sub_001C2990); /* call 0x001C2990 */

loc_001D030C: ;
    eax = MEM32(esi + 0x80);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0300; /* jl: less (signed <) */

loc_001D0317: ;
    eax = MEM32(esi + 0x8C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x80) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_001D034A; /* jle: less or equal (signed <=) */

loc_001D0329: ;
    ebx = esi + 0xC;
    /* nop */

loc_001D0330: ;
    edx = MEM32(esi + 0x88);
    ecx = MEM32(edx + edi * 4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D033Fu); RECOMP_ABI_CALL(0x001CE710u, sub_001CE710); /* call 0x001CE710 */

loc_001D033F: ;
    eax = MEM32(esi + 0x8C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0330; /* jl: less (signed <) */

loc_001D034A: ;
    ecx = MEM32(esi + 0x30);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x68) = eax;
    edx = MEM32(ecx + 0x34);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D0372; /* jle: less or equal (signed <=) */

loc_001D035F: ;
    edi = MEM32(ecx + 0x30);

loc_001D0362: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0x1300 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D037D; /* je: equal / zero */

loc_001D036A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0362; /* jl: less (signed <) */

loc_001D0372: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1300);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D037Du); RECOMP_ABI_CALL(0x001CB490u, sub_001CB490); /* call 0x001CB490 */

loc_001D037D: ;
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
 * sub_001D0390
 * Original: 0x001D0390 - 0x001D03EC (92 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0390(void)
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

loc_001D0390: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x68);
    PUSH32(esp, edi);
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = 0x3DCCCCCD;
    if (CMP_LE(_fas, _fbs)) goto loc_001D03E3; /* jle: less or equal (signed <=) */

loc_001D03AA: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001D03B0: ;
    eax = MEM32(esi + 0x64);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001D03C2u); RECOMP_ABI_CALL(0x001D0000u, sub_001D0000); /* call 0x001D0000 */

loc_001D03C2: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D03D5; /* jp: parity */

loc_001D03CD: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = edi;
    goto loc_001D03D7;

loc_001D03D5: ;
    fp_pop(); /* fstp st(0) */

loc_001D03D7: ;
    eax = MEM32(esi + 0x68);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D03B0; /* jl: less (signed <) */

loc_001D03E2: ;
    POP32(esp, ebx);

loc_001D03E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D03F0
 * Original: 0x001D03F0 - 0x001D074F (863 bytes, 251 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D03F0(void)
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

loc_001D03F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x60) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_001D0739; /* jle: less or equal (signed <=) */

loc_001D041D: ;
    edx = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = eax;
    edi = edi;

loc_001D0430: ;
    eax = MEM32(esi + 0x64);
    ecx = MEM32(ebx + eax + 0x28);
    edx = MEM32(ecx + 0x20);
    eax = MEM32(edx + 0x34);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D04A2; /* jle: less or equal (signed <=) */

loc_001D0443: ;
    edi = MEM32(edx + 0x30);
    edx = edi;

loc_001D0448: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x1300 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D045A; /* je: equal / zero */

loc_001D0450: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0448; /* jl: less (signed <) */

loc_001D0458: ;
    goto loc_001D04A2;

loc_001D045A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D0476; /* jle: less or equal (signed <=) */

loc_001D0460: ;
    edx = edi;

loc_001D0462: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x1300 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0742; /* je: equal / zero */

loc_001D046E: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0462; /* jl: less (signed <) */

loc_001D0476: ;
    MEM32(esp + 0x10) = 0;

loc_001D047E: ;
    edi = MEM32(esi + 0x74);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001D04A2; /* js: sign (negative) */

loc_001D0484: ;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D049F; /* je: equal / zero */

loc_001D048E: ;
    eax = MEM32(esi + 0x64);
    edx = MEM32(ecx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001D049Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D049Cu); } /* indirect call */
    }

loc_001D049F: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001D0484; /* jns: not sign (positive) */

loc_001D04A2: ;
    ecx = MEM32(esi + 0x64);
    eax = MEM32(ebx + ecx + 0x28);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0718; /* jne: not equal / not zero */

loc_001D04B3: ;
    edi = MEM32(eax + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0718; /* je: equal / zero */

loc_001D04BE: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0718; /* je: equal / zero */

loc_001D04CB: ;
    ecx = MEM32(edi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001D04D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D04D0u); } /* indirect call */
    }

loc_001D04D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0718; /* je: equal / zero */

loc_001D04DC: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001D04E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D04E1u); } /* indirect call */
    }

loc_001D04E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0718; /* je: equal / zero */

loc_001D04ED: ;
    eax = MEM32(esi + 0x64);
    xmm0 = XMM_MEM(eax + ebx); /* movaps */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    eax = esp + 0x70;
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    MEM32(esp + 0x64) = edi;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001D051Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0517u); } /* indirect call */
    }

loc_001D051A: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    xmm1 = XMM_MEM(esi + 0x10); /* movaps */
    xmm0 = XMM_MEM(esp + 0x70); /* movaps */
    eax = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm1 = XMM_MEM(esp + 0x40); /* movaps */
    XMM_STORE(esp + 0x70, xmm0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD418)); /* fmul dword ptr [0x2dd418] */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    ecx = esp + 0x20;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC3E4)); /* fmul dword ptr [0x2dc3e4] */
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x58) = edx;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D0718; /* je: equal / zero */

loc_001D058A: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0xD0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x001D059Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0597u); } /* indirect call */
    }

loc_001D059A: ;
    ecx = MEM32(edi + 0x3C);
    xmm1 = XMM_MEM(ecx + 0x70); /* movaps */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm1 = XMM_MEM(esp + 0x40); /* movaps */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0xC9); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xD2); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0xD2); /* shufps */
    edx = esp + 0x80;
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xC9); /* shufps */
    PUSH32(esp, edx);
    eax = esp + 0xD4;
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm1 = XMM_SUB(xmm1, xmm3); /* subps */
    PUSH32(esp, eax);
    ecx = esp + 0xC8;
    XMM_STORE(esp + 0x88, xmm1); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D05F7u); RECOMP_ABI_CALL(0x001CF840u, sub_001CF840); /* call 0x001CF840 */

loc_001D05F7: ;
    xmm1 = XMM_MEM(esp + 0x80); /* movaps */
    xmm0 = XMM_MEM(esp + 0xC0); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    ecx = esp + 0x28;
    MEMF(ecx) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x5C) = edx;
    eax = MEM32(edi + 0x3C);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x2C)); /* fadd dword ptr [eax + 0x2c] */
    ebx = MEM32(esi + 0x74);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm1 = XMM_MEM(esp + 0x40); /* movaps */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    XMM_STORE(esp + 0xB0, xmm0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x5C)); /* fdiv dword ptr [esp + 0x5c] */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    XMM_STORE(esp + 0xA0, xmm0); /* movaps */
    MEMF(esp + 0x50) = (float)fp_top(); /* fst */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(esp + 0x90, xmm2); /* movaps */
    if ((_fas < 0)) goto loc_001D06B0; /* js: sign (negative) */

loc_001D0689: ;
    /* nop */

loc_001D0690: ;
    ecx = MEM32(esi + 0x70);
    ecx = MEM32(ecx + ebx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D06AD; /* je: equal / zero */

loc_001D069A: ;
    edx = MEM32(ecx);
    eax = esp + 0x90;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D06ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D06AAu); } /* indirect call */
    }

loc_001D06AD: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001D0690; /* jns: not sign (positive) */

loc_001D06B0: ;
    ecx = esp + 0x1B;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D06BCu); RECOMP_ABI_CALL(0x001C2870u, sub_001C2870); /* call 0x001C2870 */

loc_001D06BC: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D06CF; /* jne: not equal / not zero */

loc_001D06C1: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D06CF; /* je: equal / zero */

loc_001D06C8: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D06CFu); RECOMP_ABI_CALL(0x001C2890u, sub_001C2890); /* call 0x001C2890 */

loc_001D06CF: ;
    edi = MEM32(edi + 0x3C);
    edx = MEM32(edi);
    eax = esp + 0xA0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001D06E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D06E6u); } /* indirect call */
    }

loc_001D06E9: ;
    edx = MEM32(esp + 0x60);
    xmm1 = XMM_MEM(esp + 0xB0); /* movaps */
    ebx = MEM32(esp + 0x24);
    MEM32(esp + 0x2C) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esi + 0x10, xmm0); /* movaps */

loc_001D0718: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x1C) = eax;
    if ((_fa != 0)) goto loc_001D0430; /* jne: not equal / not zero */

loc_001D0739: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_001D0742: ;
    edx = MEM32(edi + ecx * 8 + 4);
    MEM32(esp + 0x10) = edx;
    goto loc_001D047E;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D0750
 * Original: 0x001D0750 - 0x001D0805 (181 bytes, 68 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0750: ;
    eax = MEM32(ecx + 0x60);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((_fas < 0)) goto loc_001D07D1; /* js: sign (negative) */

loc_001D075D: ;
    esi = eax + eax * 2;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + 1;
    goto loc_001D0770;

    /* nop */
    /* nop */

loc_001D0770: ;
    eax = MEM32(ecx + 0x5C);
    eax = MEM32(eax + esi + 0x28);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0782; /* jne: not equal / not zero */

loc_001D077D: ;
    eax = MEM32(eax + 0x20);
    goto loc_001D0784;

loc_001D0782: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D0784: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D07CB; /* jne: not equal / not zero */

loc_001D0788: ;
    eax = MEM32(ecx + 0x60);
    edx = MEM32(ecx + 0x5C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x60) = eax;
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(eax + edx); /* movaps */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esi + edx, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(esi + edx + 0x10, xmm0); /* movaps */
    ebp = MEM32(eax + 0x20);
    MEM32(esi + edx + 0x20) = ebp;
    ebp = MEM32(eax + 0x24);
    MEM32(esi + edx + 0x24) = ebp;
    ebp = MEM32(eax + 0x28);
    MEM32(esi + edx + 0x28) = ebp;
    eax = MEM32(eax + 0x2C);
    ebp = MEM32(esp + 0x10);
    MEM32(esi + edx + 0x2C) = eax;

loc_001D07CB: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D0770; /* jne: not equal / not zero */

loc_001D07D1: ;
    esi = MEM32(ecx + 0x78);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D07EC; /* jle: less or equal (signed <=) */

loc_001D07DA: ;
    edx = MEM32(ecx + 0x74);
    /* nop */

loc_001D07E0: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D07EF; /* je: equal / zero */

loc_001D07E4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D07E0; /* jl: less (signed <) */

loc_001D07EC: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001D07EF: ;
    edx = MEM32(ecx + 0x78);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x78) = edx;
    ecx = MEM32(ecx + 0x74);
    edx = MEM32(ecx + edx * 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + eax * 4) = edx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0810
 * Original: 0x001D0810 - 0x001D08CB (187 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0810: ;
    eax = MEM32(ecx + 0x5C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((_fas < 0)) goto loc_001D0891; /* js: sign (negative) */

loc_001D081D: ;
    esi = eax + eax * 2;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + 1;
    goto loc_001D0830;

    /* nop */
    /* nop */

loc_001D0830: ;
    eax = MEM32(ecx + 0x58);
    eax = MEM32(eax + esi + 0x28);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0842; /* jne: not equal / not zero */

loc_001D083D: ;
    eax = MEM32(eax + 0x20);
    goto loc_001D0844;

loc_001D0842: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D0844: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D088B; /* jne: not equal / not zero */

loc_001D0848: ;
    eax = MEM32(ecx + 0x5C);
    edx = MEM32(ecx + 0x58);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x5C) = eax;
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(eax + edx); /* movaps */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esi + edx, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(esi + edx + 0x10, xmm0); /* movaps */
    ebp = MEM32(eax + 0x20);
    MEM32(esi + edx + 0x20) = ebp;
    ebp = MEM32(eax + 0x24);
    MEM32(esi + edx + 0x24) = ebp;
    ebp = MEM32(eax + 0x28);
    MEM32(esi + edx + 0x28) = ebp;
    eax = MEM32(eax + 0x2C);
    ebp = MEM32(esp + 0x10);
    MEM32(esi + edx + 0x2C) = eax;

loc_001D088B: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D0830; /* jne: not equal / not zero */

loc_001D0891: ;
    esi = MEM32(ecx + 0x80);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D08AC; /* jle: less or equal (signed <=) */

loc_001D089D: ;
    edx = MEM32(ecx + 0x7C);

loc_001D08A0: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D08AF; /* je: equal / zero */

loc_001D08A4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D08A0; /* jl: less (signed <) */

loc_001D08AC: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001D08AF: ;
    edx = MEM32(ecx + 0x80);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x80) = edx;
    ecx = MEM32(ecx + 0x7C);
    edx = MEM32(ecx + edx * 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + eax * 4) = edx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D08D0
 * Original: 0x001D08D0 - 0x001D0901 (49 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D08D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D08D0: ;
    eax = MEM32(ecx + 0x78);
    PUSH32(esp, esi);
    esi = ecx + 0x70;
    ecx = MEM32(esi + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D08EE; /* jne: not equal / not zero */

loc_001D08E3: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D08EBu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001D08EB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D08EE: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = MEM32(esp + 8);
    MEM32(edx + ecx * 4) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0910
 * Original: 0x001D0910 - 0x001D0935 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0910: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D0934; /* js: sign (negative) */

loc_001D0919: ;
    ecx = MEM32(0x4409AC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001D0933u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0930u); } /* indirect call */
    }

loc_001D0933: ;
    POP32(esp, esi);

loc_001D0934: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D0940
 * Original: 0x001D0940 - 0x001D09EB (171 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0940: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246282);
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
    MEM32(esp + 0x10) = eax;
    MEM32(esi + 8) = 0x2F8098;
    MEM32(esi + 0xC) = 0x2F9CD4;
    MEM32(esi) = 0x2F9D00;
    MEM32(esi + 8) = 0x2F9CF0;
    MEM32(esi + 0xC) = 0x2F9CE4;
    MEM32(esi + 0x30) = eax;
    ecx = 0x80000000u;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = ecx;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x78) = ecx;
    MEM32(esi + 0x7C) = eax;
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x84) = ecx;
    MEM32(esi + 0x88) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x90) = ecx;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0x14) = 5;
    PUSH32(esp, 0x001D09D7u); RECOMP_ABI_CALL(0x001D01C0u, sub_001D01C0); /* call 0x001D01C0 */

loc_001D09D7: ;
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
 * sub_001D09F0
 * Original: 0x001D09F0 - 0x001D09F8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D09F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D09F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001D0F60(); return; /* tail jmp 0x001D0F60 */

}

/**
 * sub_001D0A00
 * Original: 0x001D0A00 - 0x001D0BB7 (439 bytes, 132 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0A00: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2462F6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = esi + 8;
    ebx = esi + 0xC;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = esi;
    MEM32(esi) = 0x2F9D00;
    MEM32(ebp) = 0x2F9CF0;
    MEM32(ebx) = 0x2F9CE4;
    eax = MEM32(esi + 0x80);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x24) = 5;
    if (CMP_LE(_fas, _fbs)) goto loc_001D0A67; /* jle: less or equal (signed <=) */

loc_001D0A4F: ;
    /* nop */

loc_001D0A50: ;
    eax = MEM32(esi + 0x7C);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001D0A5Cu); RECOMP_ABI_CALL(0x001C2990u, sub_001C2990); /* call 0x001C2990 */

loc_001D0A5C: ;
    eax = MEM32(esi + 0x80);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0A50; /* jl: less (signed <) */

loc_001D0A67: ;
    eax = MEM32(esi + 0x8C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x80) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_001D0A9A; /* jle: less or equal (signed <=) */

loc_001D0A79: ;
    /* nop */

loc_001D0A80: ;
    ecx = MEM32(esi + 0x88);
    ecx = MEM32(ecx + edi * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D0A8Fu); RECOMP_ABI_CALL(0x001CE710u, sub_001CE710); /* call 0x001CE710 */

loc_001D0A8F: ;
    eax = MEM32(esi + 0x8C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0A80; /* jl: less (signed <) */

loc_001D0A9A: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0x1300);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEM32(esi + 0x8C) = 0;
    PUSH32(esp, 0x001D0AB6u); RECOMP_ABI_CALL(0x001CB300u, sub_001CB300); /* call 0x001CB300 */

loc_001D0AB6: ;
    ecx = MEM32(esi + 0x30);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(ecx + 6));
    if ((_fa != 0)) goto loc_001D0AC9; /* jne: not equal / not zero */

loc_001D0AC3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001D0AC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0AC7u); } /* indirect call */
    }

loc_001D0AC9: ;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x24) = 4;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D0AF5; /* js: sign (negative) */

loc_001D0AD8: ;
    edx = MEM32(esi + 0x88);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D0AF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0AF2u); } /* indirect call */
    }

loc_001D0AF5: ;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x24) = 3;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D0B1E; /* js: sign (negative) */

loc_001D0B04: ;
    edx = MEM32(esi + 0x7C);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D0B1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0B1Bu); } /* indirect call */
    }

loc_001D0B1E: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x24) = 2;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D0B44; /* js: sign (negative) */

loc_001D0B2A: ;
    edx = MEM32(esi + 0x70);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D0B44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0B41u); } /* indirect call */
    }

loc_001D0B44: ;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x24) = 1;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D0B6D; /* js: sign (negative) */

loc_001D0B50: ;
    edx = MEM32(esi + 0x64);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D0B6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0B6Au); } /* indirect call */
    }

loc_001D0B6D: ;
    MEM32(ebp) = 0x2F8098;
    MEM32(esi) = 0x2DC688;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 4));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    MEM32(esp + 0x24) = 6;
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_001D0B9E; /* jns: not sign (positive) */

loc_001D0B8C: ;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    ecx = esi;
    MEM16(esi + 4) = LO16(eax);
    PUSH32(esp, 0x001D0B9Eu); RECOMP_ABI_CALL(0x0018D710u, sub_0018D710); /* call 0x0018D710 */

loc_001D0B9E: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    MEM32(esi) = 0x2DC684;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D0BC0
 * Original: 0x001D0BC0 - 0x001D0C50 (144 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0BC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246308);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = esi;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0x80000000u;
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx + 0xC);
    MEM32(esp + 0x14) = eax;
    eax = ebx;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D0C14; /* jle: less or equal (signed <=) */

loc_001D0C0C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001D0C12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0C0Fu); } /* indirect call */
    }

loc_001D0C12: ;
    goto loc_001D0C28;

loc_001D0C14: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    ebp = edi + eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi;
    POP32(esp, edi);
    MEM32(ecx + 8) = ebp;
    MEM32(ecx + 0xC) = edx;
    POP32(esp, ebp);

loc_001D0C28: ;
    ecx = ebx;
    MEM32(esi) = eax;
    ecx = ecx | 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x10) = ebx;
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
 * sub_001D0C50
 * Original: 0x001D0C50 - 0x001D0CEA (154 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0C50: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246308);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    ecx = MEM32(0x4409AC);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = 0;
    if ((_fa == 0)) goto loc_001D0CA1; /* je: equal / zero */

loc_001D0C8D: ;
    edi = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0C98; /* je: equal / zero */

loc_001D0C94: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0CA1; /* jne: not equal / not zero */

loc_001D0C98: ;
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x28); PUSH32(esp, 0x001D0C9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0C9Cu); } /* indirect call */
    }

loc_001D0C9F: ;
    goto loc_001D0CB1;

loc_001D0CA1: ;
    edi = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = edi;
    MEM32(ecx + 0xC) = edx;

loc_001D0CB1: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D0CD9; /* js: sign (negative) */

loc_001D0CC0: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D0CD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0CD6u); } /* indirect call */
    }

loc_001D0CD9: ;
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
 * sub_001D0CF0
 * Original: 0x001D0CF0 - 0x001D0D80 (144 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0CF0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246328);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = esi;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0x80000000u;
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx + 0xC);
    MEM32(esp + 0x14) = eax;
    eax = ebx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D0D44; /* jle: less or equal (signed <=) */

loc_001D0D3C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001D0D42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0D3Fu); } /* indirect call */
    }

loc_001D0D42: ;
    goto loc_001D0D58;

loc_001D0D44: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    ebp = edi + eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi;
    POP32(esp, edi);
    MEM32(ecx + 8) = ebp;
    MEM32(ecx + 0xC) = edx;
    POP32(esp, ebp);

loc_001D0D58: ;
    ecx = ebx;
    MEM32(esi) = eax;
    ecx = ecx | 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x10) = ebx;
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
 * sub_001D0D80
 * Original: 0x001D0D80 - 0x001D0E1A (154 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0D80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246328);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    ecx = MEM32(0x4409AC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = 0;
    if ((_fa == 0)) goto loc_001D0DD1; /* je: equal / zero */

loc_001D0DBD: ;
    edi = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0DC8; /* je: equal / zero */

loc_001D0DC4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0DD1; /* jne: not equal / not zero */

loc_001D0DC8: ;
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x28); PUSH32(esp, 0x001D0DCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0DCCu); } /* indirect call */
    }

loc_001D0DCF: ;
    goto loc_001D0DE1;

loc_001D0DD1: ;
    edi = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = edi;
    MEM32(ecx + 0xC) = edx;

loc_001D0DE1: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D0E09; /* js: sign (negative) */

loc_001D0DF0: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D0E09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0E06u); } /* indirect call */
    }

loc_001D0E09: ;
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
 * sub_001D0E20
 * Original: 0x001D0E20 - 0x001D0EB1 (145 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0E20: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246348);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0x80000000u;
    edi = MEM32(esp + 0x1C);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx + 0xC);
    MEM32(esp + 0x14) = eax;
    eax = edi + edi * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D0E75; /* jle: less or equal (signed <=) */

loc_001D0E6D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001D0E73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0E70u); } /* indirect call */
    }

loc_001D0E73: ;
    goto loc_001D0E89;

loc_001D0E75: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 8);
    PUSH32(esp, ebp);
    ebp = ebx + eax;
    MEM32(ecx + 8) = ebp;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    eax = ebx;
    MEM32(ecx + 0xC) = edx;
    POP32(esp, ebx);

loc_001D0E89: ;
    ecx = edi;
    ecx = ecx | 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x10) = edi;
    MEM32(esi) = eax;
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0EC0
 * Original: 0x001D0EC0 - 0x001D0F60 (160 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0EC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246348);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    ecx = MEM32(0x4409AC);
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = 0;
    if ((_fa == 0)) goto loc_001D0F14; /* je: equal / zero */

loc_001D0F00: ;
    edi = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0F0B; /* je: equal / zero */

loc_001D0F07: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0F14; /* jne: not equal / not zero */

loc_001D0F0B: ;
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x28); PUSH32(esp, 0x001D0F12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0F0Fu); } /* indirect call */
    }

loc_001D0F12: ;
    goto loc_001D0F24;

loc_001D0F14: ;
    edi = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = edi;
    MEM32(ecx + 0xC) = edx;

loc_001D0F24: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D0F4F; /* js: sign (negative) */

loc_001D0F33: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D0F4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0F4Cu); } /* indirect call */
    }

loc_001D0F4F: ;
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
 * sub_001D0F60
 * Original: 0x001D0F60 - 0x001D0F88 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0F60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D0F68u); RECOMP_ABI_CALL(0x001D0A00u, sub_001D0A00); /* call 0x001D0A00 */

loc_001D0F68: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D0F82; /* je: equal / zero */

loc_001D0F6F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2F);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D0F82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D0F7Fu); } /* indirect call */
    }

loc_001D0F82: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0F90
 * Original: 0x001D0F90 - 0x001D115D (461 bytes, 142 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D0F90(void)
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

loc_001D0F90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    xmm0 = XMM_MEM(esi); /* movaps */
    PUSH32(esp, edi);
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0FB7u); RECOMP_ABI_CALL(0x0023827Du, sub_0023827D); /* call 0x0023827D */

loc_001D0FB7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1155; /* jne: not equal / not zero */

loc_001D0FC2: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0FD1u); RECOMP_ABI_CALL(0x0023827Du, sub_0023827D); /* call 0x0023827D */

loc_001D0FD1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1155; /* jne: not equal / not zero */

loc_001D0FDC: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D0FEBu); RECOMP_ABI_CALL(0x0023827Du, sub_0023827D); /* call 0x0023827D */

loc_001D0FEB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1155; /* jne: not equal / not zero */

loc_001D0FF6: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1005u); RECOMP_ABI_CALL(0x0023827Du, sub_0023827D); /* call 0x0023827D */

loc_001D1005: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1155; /* jne: not equal / not zero */

loc_001D1010: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D101Fu); RECOMP_ABI_CALL(0x00238268u, sub_00238268); /* call 0x00238268 */

loc_001D101F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1155; /* je: equal / zero */

loc_001D102A: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1039u); RECOMP_ABI_CALL(0x00238268u, sub_00238268); /* call 0x00238268 */

loc_001D1039: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1155; /* je: equal / zero */

loc_001D1044: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1053u); RECOMP_ABI_CALL(0x00238268u, sub_00238268); /* call 0x00238268 */

loc_001D1053: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1155; /* je: equal / zero */

loc_001D105E: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D106Du); RECOMP_ABI_CALL(0x00238268u, sub_00238268); /* call 0x00238268 */

loc_001D106D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1155; /* je: equal / zero */

loc_001D1078: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2E55D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2e55d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D1155; /* je: equal / zero */

loc_001D108F: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2E55D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2e55d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D1155; /* je: equal / zero */

loc_001D10A6: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2E55D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2e55d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D1155; /* je: equal / zero */

loc_001D10BD: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2E55D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2e55d0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D1155; /* je: equal / zero */

loc_001D10D4: ;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(edi + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D10F1; /* jne: not equal / not zero */

loc_001D10E6: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D10EEu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001D10EE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D10F1: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(edi);
    eax = ecx + ecx * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 4) = ecx;
    xmm0 = XMM_MEM(esi); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1129; /* je: equal / zero */

loc_001D111A: ;
    /* nop */

loc_001D1120: ;
    ecx = edx;
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1120; /* jne: not equal / not zero */

loc_001D1129: ;
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esi + 0x24);
    ecx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1149; /* je: equal / zero */

loc_001D113F: ;
    /* nop */

loc_001D1140: ;
    edx = ecx;
    ecx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1140; /* jne: not equal / not zero */

loc_001D1149: ;
    MEM32(eax + 0x28) = edx;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x2C) = edx;

loc_001D1155: ;
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
 * sub_001D1160
 * Original: 0x001D1160 - 0x001D1165 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1160: ;
    g_seh_ebp = ebp; sub_0003A690(); return; /* tail jmp 0x0003A690 */

}

/**
 * sub_001D1170
 * Original: 0x001D1170 - 0x001D1195 (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1170: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D1178u); RECOMP_ABI_CALL(0x001D1160u, sub_001D1160); /* call 0x001D1160 */

loc_001D1178: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D118F; /* je: equal / zero */

loc_001D117F: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D118Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D118Cu); } /* indirect call */
    }

loc_001D118F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D11A0
 * Original: 0x001D11A0 - 0x001D1808 (1640 bytes, 535 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D11A0(void)
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

loc_001D11A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246368);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x80);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001D11E9; /* jle: less or equal (signed <=) */

loc_001D11CF: ;
    edi = esi + 8;

loc_001D11D2: ;
    eax = MEM32(esi + 0x7C);
    ecx = MEM32(eax + ebx * 4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D11DEu); RECOMP_ABI_CALL(0x001C2990u, sub_001C2990); /* call 0x001C2990 */

loc_001D11DE: ;
    eax = MEM32(esi + 0x80);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D11D2; /* jl: less (signed <) */

loc_001D11E9: ;
    eax = MEM32(esi + 0x8C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x80) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_001D121A; /* jle: less or equal (signed <=) */

loc_001D11FB: ;
    edi = esi + 0xC;
    edi = edi;

loc_001D1200: ;
    ecx = MEM32(esi + 0x88);
    ecx = MEM32(ecx + ebx * 4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D120Fu); RECOMP_ABI_CALL(0x001CE710u, sub_001CE710); /* call 0x001CE710 */

loc_001D120F: ;
    eax = MEM32(esi + 0x8C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D1200; /* jl: less (signed <) */

loc_001D121A: ;
    ebx = MEM32(ebp + 8);
    MEM32(esi + 0x8C) = 0;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1234u); RECOMP_ABI_CALL(0x001D0E20u, sub_001D0E20); /* call 0x001D0E20 */

loc_001D1234: ;
    eax = MEM32(ebx + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x4C) = edx;
    MEM32(esp + 0x30) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001D128E; /* jle: less or equal (signed <=) */

loc_001D1247: ;
    goto loc_001D1250;

loc_001D1249: ;
    ebx = MEM32(ebp + 8);
    /* nop */

loc_001D1250: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(esp + 0x2C);
    xmm0 = XMM_MEM(eax + edx); /* movaps */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(ecx, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
    ebx = MEM32(eax + 0x20);
    MEM32(ecx + 0x20) = ebx;
    ebx = MEM32(eax + 0x24);
    MEM32(ecx + 0x24) = ebx;
    ebx = MEM32(eax + 0x28);
    MEM32(ecx + 0x28) = ebx;
    eax = MEM32(eax + 0x2C);
    MEM32(ecx + 0x2C) = eax;
    eax = MEM32(esp + 0x30);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D1249; /* jl: less (signed <) */

loc_001D128E: ;
    eax = MEM32(esi + 0x68);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001D1411; /* js: sign (negative) */

loc_001D1298: ;
    ebx = eax + eax * 2;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = eax;

loc_001D12A3: ;
    edi = MEM32(esi + 0x64);
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    MEM32(esp + 0x20) = 0x3F8CCCCD;
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_001D139C; /* jle: less or equal (signed <=) */

loc_001D12CC: ;
    MEM32(esp + 0x1C) = 0;

loc_001D12D4: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x1C);
    eax = edx + ecx;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D12E8u); RECOMP_ABI_CALL(0x001D0000u, sub_001D0000); /* call 0x001D0000 */

loc_001D12E8: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D1301; /* jp: parity */

loc_001D12F3: ;
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x24) = eax;
    goto loc_001D1303;

loc_001D1301: ;
    fp_pop(); /* fstp st(0) */

loc_001D1303: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x30);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001D12D4; /* jl: less (signed <) */

loc_001D131F: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D139C; /* jl: less (signed <) */

loc_001D1327: ;
    edx = MEM32(esp + 0x2C);
    ecx = ecx + ecx * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(ecx + edx); /* movaps */
    XMM_STORE(edi, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + edx + 0x10); /* movaps */
    eax = ecx + edx;
    XMM_STORE(edi + 0x10, xmm0); /* movaps */
    edx = MEM32(eax + 0x20);
    MEM32(edi + 0x20) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(edi + 0x24) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(edi + 0x28) = edx;
    eax = MEM32(eax + 0x2C);
    MEM32(edi + 0x2C) = eax;
    eax = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x2C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = eax;
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(eax + edx); /* movaps */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(ecx, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
    edx = MEM32(eax + 0x20);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(ecx + 0x28) = edx;
    eax = MEM32(eax + 0x2C);
    MEM32(ecx + 0x2C) = eax;
    goto loc_001D13FF;

loc_001D139C: ;
    eax = MEM32(esi + 0x64);
    edi = MEM32(esi + 0x74);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = eax;
    if ((_fas < 0)) goto loc_001D13C0; /* js: sign (negative) */

loc_001D13AB: ;
    goto loc_001D13B1;

loc_001D13AD: ;
    eax = MEM32(esp + 0x24);

loc_001D13B1: ;
    ecx = MEM32(esi + 0x70);
    ecx = MEM32(ecx + edi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001D13BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D13BAu); } /* indirect call */
    }

loc_001D13BD: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001D13AD; /* jns: not sign (positive) */

loc_001D13C0: ;
    eax = MEM32(esi + 0x68);
    ecx = MEM32(esi + 0x64);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x68) = eax;
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(eax + ecx); /* movaps */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(ecx + ebx, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(ecx + ebx + 0x10, xmm0); /* movaps */
    edx = MEM32(eax + 0x20);
    MEM32(ecx + ebx + 0x20) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + ebx + 0x24) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(ecx + ebx + 0x28) = edx;
    eax = MEM32(eax + 0x2C);
    MEM32(ecx + ebx + 0x2C) = eax;

loc_001D13FF: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = eax;
    if ((_fa != 0)) goto loc_001D12A3; /* jne: not equal / not zero */

loc_001D1411: ;
    eax = MEM32(esp + 0x30);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x28) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_001D1556; /* jle: less or equal (signed <=) */

loc_001D1423: ;
    MEM32(esp + 0x1C) = edi;
    goto loc_001D1430;

    /* nop */

loc_001D1430: ;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(edi + ecx + 0x28);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1489; /* jne: not equal / not zero */

loc_001D143E: ;
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1489; /* je: equal / zero */

loc_001D1445: ;
    ecx = MEM32(eax + 0x3C);
    xmm0 = XMM_MEM(ecx + 0x40); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    edx = esp + 0x24;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D1489; /* jne: not equal / not zero */

loc_001D147B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001D1480u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D147Du); } /* indirect call */
    }

loc_001D1480: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1489; /* jne: not equal / not zero */

loc_001D1485: ;
    SET_LO8(edx, 1);
    goto loc_001D148B;

loc_001D1489: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001D148B: ;
    ecx = MEM32(esp + 0x2C);
    fp_push(MEMF(ecx + edi + 0xC)); /* fld float */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001D14AA; /* jnp: not parity */

loc_001D14A2: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D153A; /* je: equal / zero */

loc_001D14AA: ;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D14B2u); RECOMP_ABI_CALL(0x001D0390u, sub_001D0390); /* call 0x001D0390 */

loc_001D14B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D153A; /* jge: greater or equal (signed >=) */

loc_001D14BA: ;
    edx = MEM32(esp + 0x2C);
    ebx = edi + edx;
    edi = MEM32(esi + 0x74);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001D14D6; /* js: sign (negative) */

loc_001D14C7: ;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(eax + edi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001D14D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D14D0u); } /* indirect call */
    }

loc_001D14D3: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001D14C7; /* jns: not sign (positive) */

loc_001D14D6: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esi + 0x6C);
    ebx = esi + 0x64;
    edi = eax + ecx;
    eax = MEM32(ebx + 4);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D14FF; /* jne: not equal / not zero */

loc_001D14F4: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D14FCu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001D14FC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D14FF: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx);
    eax = ecx + ecx * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 4) = ecx;
    xmm0 = XMM_MEM(edi); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_MEM(edi + 0x10); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    ecx = MEM32(edi + 0x20);
    MEM32(eax + 0x20) = ecx;
    edx = MEM32(edi + 0x24);
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(edi + 0x28);
    MEM32(eax + 0x28) = ecx;
    edx = MEM32(edi + 0x2C);
    edi = MEM32(esp + 0x1C);
    MEM32(eax + 0x2C) = edx;

loc_001D153A: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x30);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x1C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001D1430; /* jl: less (signed <) */

loc_001D1556: ;
    eax = MEM32(ebp + 0xC);
    edi = MEM32(eax + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D15F3; /* je: equal / zero */

loc_001D1569: ;
    edi = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1574u); RECOMP_ABI_CALL(0x001D0390u, sub_001D0390); /* call 0x001D0390 */

loc_001D1574: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D15C2; /* jne: not equal / not zero */

loc_001D1579: ;
    eax = MEM32(esi + 0x74);
    ebx = eax + -1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D1592; /* jl: less (signed <) */

loc_001D1583: ;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(eax + ebx * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001D158Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D158Cu); } /* indirect call */
    }

loc_001D158F: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001D1583; /* jns: not sign (positive) */

loc_001D1592: ;
    eax = MEM32(esi + 0x6C);
    ecx = MEM32(esi + 0x68);
    ebx = esi + 0x64;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D15AF; /* jne: not equal / not zero */

loc_001D15A4: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D15ACu); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001D15AC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D15AF: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx);
    eax = ecx + ecx * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 4) = ecx;
    goto loc_001D15CD;

loc_001D15C2: ;
    ecx = MEM32(esi + 0x64);
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D15CD: ;
    xmm0 = XMM_MEM(edi); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_MEM(edi + 0x10); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    ecx = MEM32(edi + 0x20);
    MEM32(eax + 0x20) = ecx;
    edx = MEM32(edi + 0x24);
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(edi + 0x28);
    MEM32(eax + 0x28) = ecx;
    edx = MEM32(edi + 0x2C);
    MEM32(eax + 0x2C) = edx;

loc_001D15F3: ;
    eax = MEM32(esi + 0x68);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D16C1; /* jle: less or equal (signed <=) */

loc_001D15FF: ;
    edi = eax + eax * 2;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_001D1605: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ecx = eax + -1;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D16B2; /* jl: less (signed <) */

loc_001D1619: ;
    ebx = edi + -48;
    /* nop */

loc_001D1620: ;
    eax = MEM32(esi + 0x64);
    ecx = eax + ebx;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1631u); RECOMP_ABI_CALL(0x001D0000u, sub_001D0000); /* call 0x001D0000 */

loc_001D1631: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DD414)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dd414] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001D1650; /* jnp: not parity */

loc_001D163E: ;
    eax = MEM32(esp + 0x28);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x28) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001D1620; /* jge: greater or equal (signed >=) */

loc_001D164E: ;
    goto loc_001D16B2;

loc_001D1650: ;
    eax = MEM32(esi + 0x64);
    ebx = MEM32(esi + 0x74);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = eax;
    if ((_fas < 0)) goto loc_001D1673; /* js: sign (negative) */

loc_001D165F: ;
    /* nop */

loc_001D1660: ;
    edx = MEM32(esi + 0x70);
    ecx = MEM32(edx + ebx * 4);
    edx = MEM32(esp + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001D1670u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D166Du); } /* indirect call */
    }

loc_001D1670: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001D1660; /* jns: not sign (positive) */

loc_001D1673: ;
    eax = MEM32(esi + 0x68);
    ecx = MEM32(esi + 0x64);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x68) = eax;
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(eax + ecx); /* movaps */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(edi + ecx, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(edi + ecx + 0x10, xmm0); /* movaps */
    edx = MEM32(eax + 0x20);
    MEM32(edi + ecx + 0x20) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(edi + ecx + 0x24) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(edi + ecx + 0x28) = edx;
    eax = MEM32(eax + 0x2C);
    MEM32(edi + ecx + 0x2C) = eax;

loc_001D16B2: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001D1605; /* jg: greater (signed >) */

loc_001D16C1: ;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x28) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_001D17E3; /* jle: less or equal (signed <=) */

loc_001D16D4: ;
    MEM32(esp + 0x18) = 0;
    /* nop */

loc_001D16E0: ;
    ecx = MEM32(esi + 0x64);
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx + ecx + 0x28);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1754; /* jne: not equal / not zero */

loc_001D16F1: ;
    ebx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1754; /* je: equal / zero */

loc_001D16F8: ;
    ecx = MEM32(esi + 0x80);
    edi = esi + 0x7C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D1723; /* jle: less or equal (signed <=) */

loc_001D1707: ;
    edx = MEM32(edi);
    /* nop */

loc_001D1710: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D171E; /* je: equal / zero */

loc_001D1714: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D1710; /* jl: less (signed <) */

loc_001D171C: ;
    goto loc_001D1723;

loc_001D171E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1754; /* jne: not equal / not zero */

loc_001D1723: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D172Eu); RECOMP_ABI_CALL(0x001C2B00u, sub_001C2B00); /* call 0x001C2B00 */

loc_001D172E: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(edi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1749; /* jne: not equal / not zero */

loc_001D173E: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1746u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001D1746: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D1749: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edi);
    MEM32(eax + edx * 4) = ebx;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D1754: ;
    ecx = MEM32(esi + 0x64);
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx + ecx + 0x28);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D17C4; /* jne: not equal / not zero */

loc_001D1765: ;
    ebx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D17C4; /* je: equal / zero */

loc_001D176C: ;
    ecx = MEM32(esi + 0x8C);
    edi = esi + 0x88;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D1793; /* jle: less or equal (signed <=) */

loc_001D177E: ;
    edx = MEM32(edi);

loc_001D1780: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D178E; /* je: equal / zero */

loc_001D1784: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D1780; /* jl: less (signed <) */

loc_001D178C: ;
    goto loc_001D1793;

loc_001D178E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D17C4; /* jne: not equal / not zero */

loc_001D1793: ;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D179Eu); RECOMP_ABI_CALL(0x001CE7B0u, sub_001CE7B0); /* call 0x001CE7B0 */

loc_001D179E: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(edi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D17B9; /* jne: not equal / not zero */

loc_001D17AE: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D17B6u); RECOMP_ABI_CALL(0x0018D930u, sub_0018D930); /* call 0x0018D930 */

loc_001D17B6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D17B9: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edi);
    MEM32(eax + edx * 4) = ebx;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D17C4: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x68);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x18) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001D16E0; /* jl: less (signed <) */

loc_001D17E3: ;
    ecx = esp + 0x2C;
    MEM32(esp + 0x4C) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D17F4u); RECOMP_ABI_CALL(0x001D0EC0u, sub_001D0EC0); /* call 0x001D0EC0 */

loc_001D17F4: ;
    ecx = MEM32(esp + 0x44);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
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
 * sub_001D1810
 * Original: 0x001D1810 - 0x001D21BB (2475 bytes, 571 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D1810(void)
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

loc_001D1810: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2463C2);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x4B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4B8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x4409E8);
    esi = ecx;
    ecx = MEM32(0x4409E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1867; /* je: equal / zero */

loc_001D184B: ;
    MEM32(ecx) = 0x2F9D60;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001D1867: ;
    ecx = MEM32(esi + 0x30);
    fp_push(MEMF(esi + 0x58)); /* fld float */
    eax = MEM32(ecx + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DD414)); /* fadd dword ptr [0x2dd414] */
    xmm0 = XMM_MEM(eax + 0x50); /* movaps */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x1A0;
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x190) = edx;
    edx = 0x80000008u;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x2F9D20;
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    MEM32(esp + 0x60) = 0x3C23D70A;
    MEM32(esp + 0x198) = edx;
    MEM32(esp + 0x194) = ebx;
    MEM32(esp + 0x184) = 0x7F7FFFFF;
    MEM32(esp + 0x180) = eax;
    edi = esp + 0x340;
    MEM32(esp + 0x4CC) = ebx;
    MEM32(esp + 0x330) = edi;
    MEM32(esp + 0x338) = edx;
    MEM32(esp + 0x334) = ebx;
    MEM32(esp + 0x324) = 0x7F7FFFFF;
    MEM32(esp + 0x320) = eax;
    xmm1 = XMM_MEM(esi + 0x20); /* movaps */
    edx = esp + 0x320;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x184;
    PUSH32(esp, edx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    edx = esp + 0x2C;
    XMM_STORE(esp + 0x5C, xmm0); /* movaps */
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    MEM8(esp + 0x4DC) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x001D1930u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D192Du); } /* indirect call */
    }

loc_001D1930: ;
    _fa = (uint32_t)(MEM32(esp + 0x194)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x194), ebx (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D199C; /* je: equal / zero */

loc_001D193E: ;
    ecx = esp + 0x180;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D194Au); RECOMP_ABI_CALL(0x0003A700u, sub_0003A700); /* call 0x0003A700 */

loc_001D194A: ;
    xmm0 = XMM_MEM(esi + 0x20); /* movaps */
    edx = MEM32(esp + 0x194);
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    eax = esp + 0x18;
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x190);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D199Cu); RECOMP_ABI_CALL(0x001CFDF0u, sub_001CFDF0); /* call 0x001CFDF0 */

loc_001D199C: ;
    ecx = MEM32(ebp + 8);
    fp_push(MEMF(ecx)); /* fld float */
    MEM32(esp + 0x38) = ebx;
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2F9CC8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2f9cc8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D20D3; /* jne: not equal / not zero */

loc_001D19BA: ;
    /* nop */

loc_001D19C0: ;
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x38), 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D20D3; /* jge: greater or equal (signed >=) */

loc_001D19CB: ;
    ecx = MEM32(0x4409E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4409E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x4409E8) (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1A00; /* je: equal / zero */

loc_001D19DE: ;
    MEM32(ecx) = 0x2F9D4C;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x108) = eax;
    edx = MEM32(esp + 0x108);
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001D1A00: ;
    eax = MEM32(esi);
    ecx = esp + 0x180;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x324;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D1A17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1A14u); } /* indirect call */
    }

loc_001D1A17: ;
    eax = MEM32(esi + 0x68);
    ecx = MEM32(esi + 0x60);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esp + 0x90;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1A2Cu); RECOMP_ABI_CALL(0x001D0BC0u, sub_001D0BC0); /* call 0x001D0BC0 */

loc_001D1A2C: ;
    eax = MEM32(esi + 0x68);
    edx = MEM32(esi + 0x60);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esp + 0x4CC) = 2;
    MEM32(esp + 0x90) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_001D1A82; /* jle: less or equal (signed <=) */

loc_001D1A49: ;
    MEM32(esp + 0x18) = ebx;
    /* nop */

loc_001D1A50: ;
    ecx = MEM32(esp + 0x8C);
    eax = MEM32(esi);
    edx = ebx + ecx;
    ecx = MEM32(esi + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001D1A6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1A67u); } /* indirect call */
    }

loc_001D1A6A: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esi + 0x68);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D1A50; /* jl: less (signed <) */

loc_001D1A80: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D1A82: ;
    ecx = MEM32(0x4409E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4409E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x4409E8) (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1AB7; /* je: equal / zero */

loc_001D1A95: ;
    MEM32(ecx) = 0x2F9D40;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0xF8) = eax;
    edx = MEM32(esp + 0xF8);
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001D1AB7: ;
    eax = MEM32(esi + 0x68);
    ecx = MEM32(esi + 0x60);
    MEM32(esp + 0xE0) = 0x34000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xE0)); /* movss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    XMM_STORE(esp + 0x130, xmm0); /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ecx);
    ecx = esp + 0x7C;
    MEM32(esp + 0x144) = 0;
    MEM32(esp + 0x148) = 0x3F800000;
    MEM32(esp + 0x14C) = 0;
    MEM32(esp + 0x150) = 0;
    XMM_STORE(esp + 0x164, xmm0); /* movaps */
    XMM_STORE(esp + 0x114, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1B28u); RECOMP_ABI_CALL(0x001D0CF0u, sub_001D0CF0); /* call 0x001D0CF0 */

loc_001D1B28: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    eax = MEM32(esi + 0x68);
    edx = MEM32(esi + 0x60);
    ecx = MEM32(esp + 0x8C);
    XMM_STORE(esp + 0x120, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    MEM32(esp + 0x15C) = eax;
    MEM32(esp + 0xDC) = 0x3F000000;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xDC)); /* movss */
    MEM32(esp + 0x7C) = edx;
    edx = MEM32(esp + 0x1C);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    MEM32(esp + 0xFC) = 0x40400000;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xFC)); /* movss */
    MEM8(esp + 0x4CC) = 3;
    MEM32(esp + 0x158) = ecx;
    MEM32(esp + 0x150) = edx;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001D1BEC; /* jnp: not parity */

loc_001D1BC2: ;
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm1.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x40); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    goto loc_001D1C00;

loc_001D1BEC: ;
    MEM32(esp + 0x104) = 0;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x104)); /* movss */

loc_001D1C00: ;
    xmm0 = XMM_MEM(esp + 0x160); /* movaps */
    edi = MEM32(esi + 0x74);
    eax = esp + 0x10C;
    MEMF(eax) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x58)); /* fmul dword ptr [esi + 0x58] */
    XMM_STORE(esp + 0x110, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esp + 0x140, xmm0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    MEM32(esp + 0xE8) = 0x447A0000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xE8)); /* movss */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(esp + 0x154) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    XMM_STORE(esp + 0x130, xmm0); /* movaps */
    if (CMP_L(_fas, _fbs)) goto loc_001D1C88; /* jl: less (signed <) */

loc_001D1C66: ;
    ebx = esi + 0x64;
    /* nop */

loc_001D1C70: ;
    ecx = MEM32(esi + 0x70);
    ecx = MEM32(ecx + edi * 4);
    edx = MEM32(ecx);
    eax = esp + 0x110;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001D1C83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1C81u); } /* indirect call */
    }

loc_001D1C83: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001D1C70; /* jns: not sign (positive) */

loc_001D1C86: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D1C88: ;
    ecx = MEM32(esp + 0x78);
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    eax = esp + 0x114;
    PUSH32(esp, eax);
    MEM32(esp + 0xCC) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1CA8u); RECOMP_ABI_CALL(0x00235640u, sub_00235640); /* call 0x00235640 */

loc_001D1CA8: ;
    ecx = MEM32(0x4409E4);
    edi = MEM32(0x4409E8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1CE2; /* je: equal / zero */

loc_001D1CC0: ;
    MEM32(ecx) = 0x2F9D34;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0xEC) = eax;
    edx = MEM32(esp + 0xEC);
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001D1CE2: ;
    eax = MEM32(esi + 0x68);
    ecx = MEM32(ebp + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x7C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001D1CF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1CF3u); } /* indirect call */
    }

loc_001D1CF6: ;
    ecx = MEM32(0x4409E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4409E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x4409E8) (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1D2B; /* je: equal / zero */

loc_001D1D09: ;
    MEM32(ecx) = 0x2F9D28;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0xF4) = eax;
    edx = MEM32(esp + 0xF4);
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001D1D2B: ;
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x38), ebx (32-bit) */
    xmm1 = XMM_MEM(esp + 0xA0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_001D1E43; /* jne: not equal / not zero */

loc_001D1D4A: ;
    xmm2 = XMM_MEM(esi + 0x20); /* movaps */
    xmm0 = XMM_MEM(0x2F6A20); /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm1); /* subps */
    xmm1 = xmm2; /* movaps */
    xmm1 = XMM_AND(xmm1, xmm0); /* andps */
    MEM32(esp + 0xE4) = 0x3A83126F;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xE4)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm0 = XMM_CMP_PRED(xmm0, xmm1, 1); /* cmpltps */
    eax = XMM_MOVEMASK(xmm0); /* movmskps */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, ((_fa == 0)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1E32; /* jne: not equal / not zero */

loc_001D1D8F: ;
    ecx = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esp + 0x184;
    PUSH32(esp, eax);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    MEM32(esp + 0x1A0) = ebx;
    MEM32(esp + 0x190) = 0x7F7FFFFF;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001D1DBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1DB9u); } /* indirect call */
    }

loc_001D1DBC: ;
    _fa = (uint32_t)(MEM32(esp + 0x194)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x194), ebx (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1E32; /* je: equal / zero */

loc_001D1DCA: ;
    ecx = esp + 0x180;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1DD6u); RECOMP_ABI_CALL(0x0003A700u, sub_0003A700); /* call 0x0003A700 */

loc_001D1DD6: ;
    xmm0 = XMM_MEM(esp + 0xA0); /* movaps */
    eax = MEM32(esp + 0x194);
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    ecx = esp + 0xD8;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xD8);
    ecx = MEM32(esp + 0x190);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1E32u); RECOMP_ABI_CALL(0x001CFDF0u, sub_001CFDF0); /* call 0x001CFDF0 */

loc_001D1E32: ;
    xmm0 = XMM_MEM(esp + 0xA0); /* movaps */
    XMM_STORE(esi + 0x20, xmm0); /* movaps */
    goto loc_001D1EFF;

loc_001D1E43: ;
    ecx = MEM32(esi + 0x30);
    eax = esp + 0x320;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x184;
    PUSH32(esp, eax);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    MEM32(esp + 0x1A0) = ebx;
    MEM32(esp + 0x190) = 0x7F7FFFFF;
    MEM32(esp + 0x340) = ebx;
    MEM32(esp + 0x330) = 0x7F7FFFFF;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001D1E89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1E86u); } /* indirect call */
    }

loc_001D1E89: ;
    _fa = (uint32_t)(MEM32(esp + 0x194)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x194), ebx (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1EFF; /* je: equal / zero */

loc_001D1E97: ;
    ecx = esp + 0x180;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1EA3u); RECOMP_ABI_CALL(0x0003A700u, sub_0003A700); /* call 0x0003A700 */

loc_001D1EA3: ;
    xmm0 = XMM_MEM(esp + 0xA0); /* movaps */
    eax = MEM32(esp + 0x194);
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    ecx = esp + 0xF0;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xF0);
    ecx = MEM32(esp + 0x190);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1EFFu); RECOMP_ABI_CALL(0x001CFDF0u, sub_001CFDF0); /* call 0x001CFDF0 */

loc_001D1EFF: ;
    _fa = (uint32_t)(MEM32(esp + 0x194)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x194), ebx (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1F33; /* jne: not equal / not zero */

loc_001D1F0D: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC0)); /* fsub dword ptr [esp + 0xc0] */
    xmm0 = XMM_ADD(xmm0, XMM_MEM(esp + 0xA0)); /* addps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001D2090;

loc_001D1F33: ;
    SET_LO8(eax, MEM8(esi + 0x94));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2046; /* jne: not equal / not zero */

loc_001D1F41: ;
    eax = MEM32(esp + 0x190);
    edx = MEM32(eax + 0x1C);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    xmm1 = XMM_MEM(0x2F18F0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC0)); /* fmul dword ptr [esp + 0xc0] */
    MEM32(esp + 0x100) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x100)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_MUL(xmm0, XMM_MEM(esp + 0x50)); /* mulps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(esp + 0x20)); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    PUSH32(esp, eax);
    ecx = esi;
    XMM_STORE(esp + 0x174, xmm1); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D1F94u); RECOMP_ABI_CALL(0x001D0390u, sub_001D0390); /* call 0x001D0390 */

loc_001D1F94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D202B; /* je: equal / zero */

loc_001D1F9D: ;
    eax = MEM32(esp + 0x194);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x194) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001D2002; /* jle: less or equal (signed <=) */

loc_001D1FB2: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D1FC0;

    /* nop */
    /* nop */

loc_001D1FC0: ;
    eax = MEM32(esp + 0x190);
    xmm0 = XMM_MEM(eax + edx + 0x30); /* movaps */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    edi = MEM32(eax + 0x50);
    MEM32(eax + 0x20) = edi;
    edi = MEM32(eax + 0x54);
    MEM32(eax + 0x24) = edi;
    edi = MEM32(eax + 0x58);
    MEM32(eax + 0x28) = edi;
    edi = MEM32(eax + 0x5C);
    MEM32(eax + 0x2C) = edi;
    eax = MEM32(esp + 0x194);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D1FC0; /* jl: less (signed <) */

loc_001D2000: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */

loc_001D2002: ;
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1F41; /* jne: not equal / not zero */

loc_001D200D: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    xmm0 = XMM_MEM(esp + 0xA0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC0)); /* fsub dword ptr [esp + 0xc0] */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001D2088;

loc_001D202B: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    xmm0 = XMM_MEM(esp + 0x170); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001D2090;

loc_001D2046: ;
    eax = MEM32(esp + 0x190);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    ecx = MEM32(eax + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC0)); /* fmul dword ptr [esp + 0xc0] */
    xmm1 = XMM_MEM(0x2F18F0); /* movaps */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(esp + 0x3C) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_MUL(xmm0, XMM_MEM(esp + 0x50)); /* mulps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(esp + 0x20)); /* mulps */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_001D2088: ;
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(esp + 0x20, xmm1); /* movaps */

loc_001D2090: ;
    ecx = esp + 0x78;
    MEM8(esp + 0x4CC) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D20A1u); RECOMP_ABI_CALL(0x001D0D80u, sub_001D0D80); /* call 0x001D0D80 */

loc_001D20A1: ;
    ecx = esp + 0x8C;
    MEM8(esp + 0x4CC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D20B5u); RECOMP_ABI_CALL(0x001D0C50u, sub_001D0C50); /* call 0x001D0C50 */

loc_001D20B5: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    eax = MEM32(esp + 0x38);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2F9CC8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2f9cc8] */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x38) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D19C0; /* je: equal / zero */

loc_001D20D3: ;
    xmm0 = XMM_MEM(esp + 0xB0); /* movaps */
    ecx = MEM32(esi + 0x30);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    XMM_STORE(esi + 0x10, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D20ECu); RECOMP_ABI_CALL(0x001C6FE0u, sub_001C6FE0); /* call 0x001C6FE0 */

loc_001D20EC: ;
    ecx = MEM32(0x4409E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4409E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x4409E8) (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D211B; /* je: equal / zero */

loc_001D20FF: ;
    MEM32(ecx) = 0x2F7504;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001D211B: ;
    esi = 0x2E0840;
    MEM32(esp + 0x320) = esi;
    eax = MEM32(esp + 0x338);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x4CC) = 4;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D215B; /* js: sign (negative) */

loc_001D213A: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x338);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D215Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2158u); } /* indirect call */
    }

loc_001D215B: ;
    MEM32(esp + 0x320) = 0x2E0660;
    MEM32(esp + 0x180) = esi;
    eax = MEM32(esp + 0x198);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x4CC) = 5;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D21A4; /* js: sign (negative) */

loc_001D2183: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x198);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D21A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D21A1u); } /* indirect call */
    }

loc_001D21A4: ;
    ecx = MEM32(esp + 0x4C4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
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
 * sub_001D21C0
 * Original: 0x001D21C0 - 0x001D2214 (84 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D21C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D21C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2463DB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0xA0);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D21E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D21E5u); } /* indirect call */
    }

loc_001D21E8: ;
    MEM16(eax + 4) = 0xA0;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001D2205u); RECOMP_ABI_CALL(0x001D0940u, sub_001D0940); /* call 0x001D0940 */

loc_001D2205: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D2220
 * Original: 0x001D2220 - 0x001D222F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2220(void)
{

loc_001D2220: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D222Eu); RECOMP_ABI_CALL(0x001D0160u, sub_001D0160); /* call 0x001D0160 */

loc_001D222E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D2230
 * Original: 0x001D2230 - 0x001D223F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2230(void)
{

loc_001D2230: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D223Eu); RECOMP_ABI_CALL(0x001D01C0u, sub_001D01C0); /* call 0x001D01C0 */

loc_001D223E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D2240
 * Original: 0x001D2240 - 0x001D2246 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2240(void)
{

loc_001D2240: ;
    eax = 0x4410E4;
    esp += 4; return; /* ret */

}

/**
 * sub_001D2250
 * Original: 0x001D2250 - 0x001D22A0 (80 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2250: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    edx = 0x3F800000;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = 0x3D4CCCCD;
    MEM32(eax + 0x50) = edx;
    MEM32(eax + 0x54) = 4;
    MEM8(eax + 0x58) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D22A0
 * Original: 0x001D22A0 - 0x001D22B0 (16 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D22A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D22A0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D22AD; /* je: equal / zero */

loc_001D22A8: ;
    g_seh_ebp = ebp; sub_001D2250(); return; /* tail jmp 0x001D2250 */

loc_001D22AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D22B0
 * Original: 0x001D22B0 - 0x001D2312 (98 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D22B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D22B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2463F8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2F9F28;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D22FC; /* js: sign (negative) */

loc_001D22E2: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D22FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D22F9u); } /* indirect call */
    }

loc_001D22FC: ;
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
 * sub_001D2320
 * Original: 0x001D2320 - 0x001D2351 (49 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2320: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x14);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D232Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D232Cu); } /* indirect call */
    }

loc_001D232F: ;
    MEM16(eax + 4) = 0x14;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2F9F28;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001D2360
 * Original: 0x001D2360 - 0x001D2388 (40 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2360: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D2368u); RECOMP_ABI_CALL(0x001D22B0u, sub_001D22B0); /* call 0x001D22B0 */

loc_001D2368: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D2382; /* je: equal / zero */

loc_001D236F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D2382u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D237Fu); } /* indirect call */
    }

loc_001D2382: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2390
 * Original: 0x001D2390 - 0x001D23C4 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2390: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D239Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D239Cu); } /* indirect call */
    }

loc_001D239F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(eax + 4) = 0x18;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2F9F2C;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001D23D0
 * Original: 0x001D23D0 - 0x001D23F8 (40 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D23D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D23D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D23D8u); RECOMP_ABI_CALL(0x001D2400u, sub_001D2400); /* call 0x001D2400 */

loc_001D23D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D23F2; /* je: equal / zero */

loc_001D23DF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D23F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D23EFu); } /* indirect call */
    }

loc_001D23F2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2400
 * Original: 0x001D2400 - 0x001D24A4 (164 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2400: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246420);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebx + 0xC;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x14) = esi;
    eax = MEM32(esi + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM8(esp + 0x20) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_001D2463; /* jle: less or equal (signed <=) */

loc_001D243D: ;
    /* nop */

loc_001D2440: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + edi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + -4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = eax;
    if ((_fas >= 0)) goto loc_001D2458; /* jns: not sign (positive) */

loc_001D2453: ;
    PUSH32(esp, 0x001D2458u); RECOMP_ABI_CALL(0x0018F550u, sub_0018F550); /* call 0x0018F550 */

loc_001D2458: ;
    eax = MEM32(esi + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D2440; /* jl: less (signed <) */

loc_001D2463: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x20) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D248B; /* js: sign (negative) */

loc_001D246F: ;
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
    eax = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D248Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2488u); } /* indirect call */
    }

loc_001D248B: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx) = 0x2DC684;
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D24B0
 * Original: 0x001D24B0 - 0x001D25AB (251 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D24B0(void)
{

loc_001D24B0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    xmm0 = XMM_MEM(ecx); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x20); /* movaps */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x40); /* movaps */
    XMM_STORE(eax + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x50); /* movaps */
    XMM_STORE(eax + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x60); /* movaps */
    XMM_STORE(eax + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x70); /* movaps */
    XMM_STORE(eax + 0x70, xmm0); /* movaps */
    SET_LO8(edx, MEM8(ecx + 0x80));
    MEM8(eax + 0x80) = LO8(edx);
    edx = MEM32(ecx + 0x84);
    MEM32(eax + 0x84) = edx;
    edx = MEM32(ecx + 0x88);
    MEM32(eax + 0x88) = edx;
    edx = MEM32(ecx + 0x8C);
    MEM32(eax + 0x8C) = edx;
    edx = MEM32(ecx + 0x90);
    MEM32(eax + 0x90) = edx;
    edx = MEM32(ecx + 0x94);
    MEM32(eax + 0x94) = edx;
    edx = MEM32(ecx + 0x98);
    MEM32(eax + 0x98) = edx;
    edx = MEM32(ecx + 0x9C);
    MEM32(eax + 0x9C) = edx;
    edx = MEM32(ecx + 0xA0);
    MEM32(eax + 0xA0) = edx;
    edx = MEM32(ecx + 0xA4);
    MEM32(eax + 0xA4) = edx;
    edx = MEM32(ecx + 0xA8);
    MEM32(eax + 0xA8) = edx;
    SET_LO8(edx, MEM8(ecx + 0xAC));
    MEM8(eax + 0xAC) = LO8(edx);
    edx = MEM32(ecx + 0xB0);
    MEM32(eax + 0xB0) = edx;
    edx = MEM32(ecx + 0xB4);
    MEM32(eax + 0xB4) = edx;
    ecx = MEM32(ecx + 0xB8);
    MEM32(eax + 0xB8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D25B0
 * Original: 0x001D25B0 - 0x001D26AD (253 bytes, 81 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D25B0(void)
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

loc_001D25B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 0x80);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = esi + esi * 2;
    edi = edi << 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push(MEMF(edi + edx + 0x94)); /* fld float */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    fp_top() = -fp_top(); /* fchs */
    eax = edi + 0x40;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D25E7u); RECOMP_ABI_CALL(0x001CFB50u, sub_001CFB50); /* call 0x001CFB50 */

loc_001D25E7: ;
    ebx = MEM32(ebp + 8);
    edx = MEM32(ebx + 0x3C);
    ecx = edi + 0x70;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D25FEu); RECOMP_ABI_CALL(0x001CB6F0u, sub_001CB6F0); /* call 0x001CB6F0 */

loc_001D25FE: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2610u); RECOMP_ABI_CALL(0x001CB6F0u, sub_001CB6F0); /* call 0x001CB6F0 */

loc_001D2610: ;
    fp_push(MEMF(edi + 0xB4)); /* fld float */
    fp_push(MEMF(0x2DC098)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D262D; /* jne: not equal / not zero */

loc_001D2625: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2DC098)); /* fld float */

loc_001D262D: ;
    edx = MEM32(ebp + 0xC);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edx + 0x10);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(esi + eax); /* movaps */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx + 0x3C);
    xmm1 = XMM_MEM(eax + 0xB0); /* movaps */
    xmm3 = XMM_MEM(eax + 0xA0); /* movaps */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm2 = XMM_MEM(eax + 0x10); /* movaps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(eax); /* movaps */
    eax = MEM32(ebp + 0x14);
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    XMM_STORE(eax, xmm0); /* movaps */
    xmm2 = XMM_MEM(edi + 0x50); /* movaps */
    POP32(esp, edi);
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    POP32(esp, esi);
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    XMM_STORE(eax, xmm0); /* movaps */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D26B0
 * Original: 0x001D26B0 - 0x001D2E18 (1896 bytes, 647 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D26B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D26B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi);
    esi = ecx;
    MEM32(esi + 8) = eax;
    ebx = MEM32(edi + 0x14);
    MEM32(esi + 0xC) = ebx;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0xC8) = 0;
    MEM8(esp + 0xA0) = 0;
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    MEM32(esp + 0xB0) = 0;
    MEM32(esp + 0xB4) = 0;
    MEM32(esp + 0xB8) = 0;
    MEM32(esp + 0xC0) = 0;
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001D27A0; /* jle: less or equal (signed <=) */

loc_001D2729: ;
    eax = MEM32(esi + 0x88);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D2755; /* jge: greater or equal (signed >=) */

loc_001D2738: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D2740; /* jl: less (signed <) */

loc_001D273E: ;
    eax = ebx;

loc_001D2740: ;
    PUSH32(esp, 0xC0);
    PUSH32(esp, eax);
    eax = esi + 0x80;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2752u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001D2752: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D2755: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D27A0; /* jge: greater or equal (signed >=) */

loc_001D275D: ;
    ecx = eax;
    eax = ecx + ecx * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0xC) = eax;
    eax = ebx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = eax;

loc_001D2771: ;
    edx = MEM32(esp + 0xC);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x80);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2787u); RECOMP_ABI_CALL(0x001D24B0u, sub_001D24B0); /* call 0x001D24B0 */

loc_001D2787: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_001D2771; /* jne: not equal / not zero */

loc_001D27A0: ;
    MEM32(esi + 0x84) = ebx;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(edi + 0x14);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D27ED; /* jge: greater or equal (signed >=) */

loc_001D27B7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D27D0; /* js: sign (negative) */

loc_001D27BB: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D27D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D27CDu); } /* indirect call */
    }

loc_001D27D0: ;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D27E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D27E1u); } /* indirect call */
    }

loc_001D27E4: ;
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(edi + 0x14);
    MEM32(esi + 0x18) = ecx;

loc_001D27ED: ;
    edx = MEM32(edi + 0x14);
    ecx = MEM32(esi + 0x10);
    MEM32(esi + 0x14) = edx;
    eax = MEM32(edi + 0x14);
    ebx = MEM32(edi + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0xC) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001D2868; /* jl: less (signed <) */

loc_001D2813: ;
    eax = ecx + 4;
    edx = ebx + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ebx;
    ebx = ecx * 4;
    MEM32(esp + 0xC) = ebx;

loc_001D2835: ;
    ebx = MEM32(edx + -12);
    MEM32(eax + -4) = ebx;
    ebx = MEM32(esp + 0x14);
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
    if ((_fa != 0)) goto loc_001D2835; /* jne: not equal / not zero */

loc_001D2858: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x10);

loc_001D2868: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D2880; /* jge: greater or equal (signed >=) */

loc_001D286C: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx + edx * 4;
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001D2875: ;
    ecx = MEM32(edx + ebx);
    MEM32(edx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D2875; /* jne: not equal / not zero */

loc_001D2880: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(edi + 0x20);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D28C7; /* jge: greater or equal (signed >=) */

loc_001D2891: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D28AA; /* js: sign (negative) */

loc_001D2895: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D28AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D28A7u); } /* indirect call */
    }

loc_001D28AA: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D28BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D28BBu); } /* indirect call */
    }

loc_001D28BE: ;
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(edi + 0x20);
    MEM32(esi + 0x24) = ecx;

loc_001D28C7: ;
    edx = MEM32(edi + 0x20);
    ecx = MEM32(esi + 0x1C);
    MEM32(esi + 0x20) = edx;
    eax = MEM32(edi + 0x20);
    ebx = MEM32(edi + 0x1C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0xC) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001D2943; /* jl: less (signed <) */

loc_001D28ED: ;
    eax = ecx + 4;
    edx = ebx + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ebx;
    ebx = ecx * 4;
    MEM32(esp + 0xC) = ebx;
    /* nop */

loc_001D2910: ;
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
    if ((_fa != 0)) goto loc_001D2910; /* jne: not equal / not zero */

loc_001D2933: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);

loc_001D2943: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D295B; /* jge: greater or equal (signed >=) */

loc_001D2947: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx + edx * 4;
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001D2950: ;
    ecx = MEM32(edx + ebx);
    MEM32(edx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D2950; /* jne: not equal / not zero */

loc_001D295B: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(edi + 0x2C);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D29A2; /* jge: greater or equal (signed >=) */

loc_001D296C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D2985; /* js: sign (negative) */

loc_001D2970: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D2985u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2982u); } /* indirect call */
    }

loc_001D2985: ;
    eax = MEM32(edi + 0x2C);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D2999u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2996u); } /* indirect call */
    }

loc_001D2999: ;
    MEM32(esi + 0x28) = eax;
    ecx = MEM32(edi + 0x2C);
    MEM32(esi + 0x30) = ecx;

loc_001D29A2: ;
    edx = MEM32(edi + 0x2C);
    ecx = MEM32(esi + 0x28);
    MEM32(esi + 0x2C) = edx;
    eax = MEM32(edi + 0x2C);
    ebx = MEM32(edi + 0x28);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0xC) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001D2A23; /* jl: less (signed <) */

loc_001D29C8: ;
    eax = ecx + 4;
    edx = ebx + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ebx;
    ebx = ecx * 4;
    MEM32(esp + 0xC) = ebx;
    /* nop */

loc_001D29F0: ;
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
    if ((_fa != 0)) goto loc_001D29F0; /* jne: not equal / not zero */

loc_001D2A13: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);

loc_001D2A23: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D2A3B; /* jge: greater or equal (signed >=) */

loc_001D2A27: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx + edx * 4;
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001D2A30: ;
    ecx = MEM32(edx + ebx);
    MEM32(edx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D2A30; /* jne: not equal / not zero */

loc_001D2A3B: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(edi + 0x38);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D2A82; /* jge: greater or equal (signed >=) */

loc_001D2A4C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D2A65; /* js: sign (negative) */

loc_001D2A50: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D2A65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2A62u); } /* indirect call */
    }

loc_001D2A65: ;
    eax = MEM32(edi + 0x38);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D2A79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2A76u); } /* indirect call */
    }

loc_001D2A79: ;
    MEM32(esi + 0x34) = eax;
    ecx = MEM32(edi + 0x38);
    MEM32(esi + 0x3C) = ecx;

loc_001D2A82: ;
    edx = MEM32(edi + 0x38);
    ecx = MEM32(esi + 0x34);
    MEM32(esi + 0x38) = edx;
    eax = MEM32(edi + 0x38);
    ebx = MEM32(edi + 0x34);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0xC) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001D2B03; /* jl: less (signed <) */

loc_001D2AA8: ;
    eax = ecx + 4;
    edx = ebx + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ebx;
    ebx = ecx * 4;
    MEM32(esp + 0xC) = ebx;
    /* nop */

loc_001D2AD0: ;
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
    if ((_fa != 0)) goto loc_001D2AD0; /* jne: not equal / not zero */

loc_001D2AF3: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);

loc_001D2B03: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D2B1B; /* jge: greater or equal (signed >=) */

loc_001D2B07: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx + edx * 4;
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001D2B10: ;
    ecx = MEM32(ebx + edx);
    MEM32(edx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D2B10; /* jne: not equal / not zero */

loc_001D2B1B: ;
    ecx = MEM32(esi + 0x48);
    edx = MEM32(edi + 0x44);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D2B62; /* jge: greater or equal (signed >=) */

loc_001D2B2C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D2B45; /* js: sign (negative) */

loc_001D2B30: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D2B45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2B42u); } /* indirect call */
    }

loc_001D2B45: ;
    eax = MEM32(edi + 0x44);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D2B59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2B56u); } /* indirect call */
    }

loc_001D2B59: ;
    MEM32(esi + 0x40) = eax;
    ecx = MEM32(edi + 0x44);
    MEM32(esi + 0x48) = ecx;

loc_001D2B62: ;
    edx = MEM32(edi + 0x44);
    ecx = MEM32(esi + 0x40);
    MEM32(esi + 0x44) = edx;
    eax = MEM32(edi + 0x44);
    ebx = MEM32(edi + 0x40);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0xC) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001D2BE3; /* jl: less (signed <) */

loc_001D2B88: ;
    eax = ecx + 4;
    edx = ebx + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ebx;
    ebx = ecx * 4;
    MEM32(esp + 0xC) = ebx;
    /* nop */

loc_001D2BB0: ;
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
    if ((_fa != 0)) goto loc_001D2BB0; /* jne: not equal / not zero */

loc_001D2BD3: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);

loc_001D2BE3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D2BFB; /* jge: greater or equal (signed >=) */

loc_001D2BE7: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx + edx * 4;
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001D2BF0: ;
    ecx = MEM32(edx + ebx);
    MEM32(edx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D2BF0; /* jne: not equal / not zero */

loc_001D2BFB: ;
    ecx = MEM32(esi + 0x60);
    edx = MEM32(edi + 8);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D2C42; /* jge: greater or equal (signed >=) */

loc_001D2C0C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D2C25; /* js: sign (negative) */

loc_001D2C10: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D2C25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2C22u); } /* indirect call */
    }

loc_001D2C25: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D2C39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2C36u); } /* indirect call */
    }

loc_001D2C39: ;
    MEM32(esi + 0x58) = eax;
    ecx = MEM32(edi + 8);
    MEM32(esi + 0x60) = ecx;

loc_001D2C42: ;
    edx = MEM32(edi + 8);
    eax = MEM32(esi + 0x58);
    MEM32(esi + 0x5C) = edx;
    edx = MEM32(edi + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(edi + 4);
    if (CMP_LE(_fas, _fbs)) goto loc_001D2C62; /* jle: less or equal (signed <=) */

loc_001D2C55: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001D2C57: ;
    ebx = MEM32(ecx + eax);
    MEM32(eax) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D2C57; /* jne: not equal / not zero */

loc_001D2C62: ;
    ecx = MEM32(esi + 0x54);
    edx = MEM32(edi + 0x50);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D2CA9; /* jge: greater or equal (signed >=) */

loc_001D2C73: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D2C8C; /* js: sign (negative) */

loc_001D2C77: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x4C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D2C8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2C89u); } /* indirect call */
    }

loc_001D2C8C: ;
    eax = MEM32(edi + 0x50);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D2CA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2C9Du); } /* indirect call */
    }

loc_001D2CA0: ;
    MEM32(esi + 0x4C) = eax;
    ecx = MEM32(edi + 0x50);
    MEM32(esi + 0x54) = ecx;

loc_001D2CA9: ;
    edx = MEM32(edi + 0x50);
    ecx = MEM32(esi + 0x4C);
    MEM32(esi + 0x50) = edx;
    eax = MEM32(edi + 0x50);
    ebx = MEM32(edi + 0x4C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0xC) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001D2D24; /* jl: less (signed <) */

loc_001D2CCF: ;
    eax = ecx + 4;
    edx = ebx + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ebx;
    ebx = ecx * 4;
    MEM32(esp + 0xC) = ebx;

loc_001D2CF1: ;
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
    if ((_fa != 0)) goto loc_001D2CF1; /* jne: not equal / not zero */

loc_001D2D14: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);

loc_001D2D24: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D2D3C; /* jge: greater or equal (signed >=) */

loc_001D2D28: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx + edx * 4;
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001D2D31: ;
    ecx = MEM32(edx + ebx);
    MEM32(edx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D2D31; /* jne: not equal / not zero */

loc_001D2D3C: ;
    ecx = MEM32(esi + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D2D71; /* jle: less or equal (signed <=) */

loc_001D2D45: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D2D50;

    /* nop */

loc_001D2D50: ;
    edx = MEM32(edi + 0x58);
    edx = MEM32(edx + eax * 4);
    ebx = MEM32(esi + 0x80);
    MEM32(ecx + ebx + 0x84) = edx;
    edx = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D2D50; /* jl: less (signed <) */

loc_001D2D71: ;
    eax = MEM32(esi + 0x5C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D2D8F; /* jle: less or equal (signed <=) */

loc_001D2D7A: ;
    ecx = MEM32(esi + 0x58);
    edx = eax;
    /* nop */

loc_001D2D80: ;
    eax = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D2D89; /* jle: less or equal (signed <=) */

loc_001D2D87: ;
    edi = eax;

loc_001D2D89: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D2D80; /* jne: not equal / not zero */

loc_001D2D8F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x6C) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D2DBA; /* jle: less or equal (signed <=) */

loc_001D2D94: ;
    eax = MEM32(esi + 0x70);
    ebx = esi + 0x68;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D2DB7; /* jge: greater or equal (signed >=) */

loc_001D2DA3: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D2DAB; /* jl: less (signed <) */

loc_001D2DA9: ;
    eax = edi;

loc_001D2DAB: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2DB4u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001D2DB4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D2DB7: ;
    MEM32(ebx + 4) = edi;

loc_001D2DBA: ;
    ecx = MEM32(esi + 0x6C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D2DD5; /* jle: less or equal (signed <=) */

loc_001D2DC3: ;
    ecx = MEM32(esi + 0x68);
    MEM32(ecx + eax * 4) = 0;
    ecx = MEM32(esi + 0x6C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D2DC3; /* jl: less (signed <) */

loc_001D2DD5: ;
    ecx = MEM32(esi + 0x5C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D2E09; /* jle: less or equal (signed <=) */

loc_001D2DDE: ;
    edi = edi;

loc_001D2DE0: ;
    edx = MEM32(esi + 0x58);
    ecx = MEM32(edx + eax * 4);
    edx = MEM32(esi + 0x68);
    edi = MEM32(edx + ecx * 4);
    ecx = edx + ecx * 4;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0x5C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D2DE0; /* jl: less (signed <) */

loc_001D2DFA: ;
    eax = MEM32(esi + 0x6C);
    MEM32(esi + 0x64) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001D2E09: ;
    ecx = MEM32(esi + 0x6C);
    POP32(esp, edi);
    MEM32(esi + 0x64) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2E20
 * Original: 0x001D2E20 - 0x001D33A6 (1414 bytes, 504 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2E20: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    MEM32(edi) = eax;
    ecx = MEM32(edi + 0x18);
    edx = MEM32(esi + 0x14);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D2E79; /* jge: greater or equal (signed >=) */

loc_001D2E43: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D2E5C; /* js: sign (negative) */

loc_001D2E47: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D2E5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2E59u); } /* indirect call */
    }

loc_001D2E5C: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D2E70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2E6Du); } /* indirect call */
    }

loc_001D2E70: ;
    MEM32(edi + 0x10) = eax;
    ecx = MEM32(esi + 0x14);
    MEM32(edi + 0x18) = ecx;

loc_001D2E79: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edi + 0x10);
    MEM32(edi + 0x14) = edx;
    ebx = MEM32(esi + 0x14);
    ebp = MEM32(esi + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D2EE4; /* jl: less (signed <) */

loc_001D2E97: ;
    edx = ebp + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + 4;
    ecx = ebx + -4;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ebp;
    ebp = ecx * 4;
    MEM32(esp + 0x10) = ebp;

loc_001D2EB5: ;
    ebp = MEM32(edx + -12);
    MEM32(eax + -4) = ebp;
    ebp = MEM32(esp + 0x20);
    ebp = MEM32(eax + ebp);
    MEM32(eax) = ebp;
    ebp = MEM32(edx + -4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(edx);
    MEM32(eax + 8) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D2EB5; /* jne: not equal / not zero */

loc_001D2ED8: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x18);

loc_001D2EE4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D2EFB; /* jge: greater or equal (signed >=) */

loc_001D2EE8: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + edx * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001D2EF0: ;
    ecx = MEM32(eax + ebp);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D2EF0; /* jne: not equal / not zero */

loc_001D2EFB: ;
    ecx = MEM32(edi + 0x24);
    edx = MEM32(esi + 0x20);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D2F42; /* jge: greater or equal (signed >=) */

loc_001D2F0C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D2F25; /* js: sign (negative) */

loc_001D2F10: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x1C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D2F25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2F22u); } /* indirect call */
    }

loc_001D2F25: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D2F39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2F36u); } /* indirect call */
    }

loc_001D2F39: ;
    MEM32(edi + 0x1C) = eax;
    ecx = MEM32(esi + 0x20);
    MEM32(edi + 0x24) = ecx;

loc_001D2F42: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(edi + 0x1C);
    MEM32(edi + 0x20) = edx;
    ebx = MEM32(esi + 0x20);
    ebp = MEM32(esi + 0x1C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D2FAF; /* jl: less (signed <) */

loc_001D2F60: ;
    edx = ebp + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + 4;
    ecx = ebx + -4;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ebp;
    ebp = ecx * 4;
    MEM32(esp + 0x18) = ebp;
    edi = edi;

loc_001D2F80: ;
    ebp = MEM32(edx + -12);
    MEM32(eax + -4) = ebp;
    ebp = MEM32(esp + 0x20);
    ebp = MEM32(eax + ebp);
    MEM32(eax) = ebp;
    ebp = MEM32(edx + -4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(edx);
    MEM32(eax + 8) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D2F80; /* jne: not equal / not zero */

loc_001D2FA3: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x10);

loc_001D2FAF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D2FCB; /* jge: greater or equal (signed >=) */

loc_001D2FB3: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + edx * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001D2FC0: ;
    ecx = MEM32(eax + ebp);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D2FC0; /* jne: not equal / not zero */

loc_001D2FCB: ;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(esi + 0x2C);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D3012; /* jge: greater or equal (signed >=) */

loc_001D2FDC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D2FF5; /* js: sign (negative) */

loc_001D2FE0: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x28);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D2FF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2FF2u); } /* indirect call */
    }

loc_001D2FF5: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D3009u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3006u); } /* indirect call */
    }

loc_001D3009: ;
    MEM32(edi + 0x28) = eax;
    ecx = MEM32(esi + 0x2C);
    MEM32(edi + 0x30) = ecx;

loc_001D3012: ;
    edx = MEM32(esi + 0x2C);
    ecx = MEM32(edi + 0x28);
    MEM32(edi + 0x2C) = edx;
    ebx = MEM32(esi + 0x2C);
    ebp = MEM32(esi + 0x28);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D307F; /* jl: less (signed <) */

loc_001D3030: ;
    edx = ebp + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + 4;
    ecx = ebx + -4;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ebp;
    ebp = ecx * 4;
    MEM32(esp + 0x18) = ebp;
    edi = edi;

loc_001D3050: ;
    ebp = MEM32(edx + -12);
    MEM32(eax + -4) = ebp;
    ebp = MEM32(esp + 0x20);
    ebp = MEM32(eax + ebp);
    MEM32(eax) = ebp;
    ebp = MEM32(edx + -4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(edx);
    MEM32(eax + 8) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D3050; /* jne: not equal / not zero */

loc_001D3073: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x10);

loc_001D307F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D309B; /* jge: greater or equal (signed >=) */

loc_001D3083: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + edx * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001D3090: ;
    ecx = MEM32(eax + ebp);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D3090; /* jne: not equal / not zero */

loc_001D309B: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(esi + 0x38);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D30E2; /* jge: greater or equal (signed >=) */

loc_001D30AC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D30C5; /* js: sign (negative) */

loc_001D30B0: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x34);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D30C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D30C2u); } /* indirect call */
    }

loc_001D30C5: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D30D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D30D6u); } /* indirect call */
    }

loc_001D30D9: ;
    MEM32(edi + 0x34) = eax;
    ecx = MEM32(esi + 0x38);
    MEM32(edi + 0x3C) = ecx;

loc_001D30E2: ;
    edx = MEM32(esi + 0x38);
    ecx = MEM32(edi + 0x34);
    MEM32(edi + 0x38) = edx;
    ebx = MEM32(esi + 0x38);
    ebp = MEM32(esi + 0x34);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D314F; /* jl: less (signed <) */

loc_001D3100: ;
    edx = ebp + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + 4;
    ecx = ebx + -4;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ebp;
    ebp = ecx * 4;
    MEM32(esp + 0x18) = ebp;
    edi = edi;

loc_001D3120: ;
    ebp = MEM32(edx + -12);
    MEM32(eax + -4) = ebp;
    ebp = MEM32(esp + 0x20);
    ebp = MEM32(eax + ebp);
    MEM32(eax) = ebp;
    ebp = MEM32(edx + -4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(edx);
    MEM32(eax + 8) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D3120; /* jne: not equal / not zero */

loc_001D3143: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x10);

loc_001D314F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D316B; /* jge: greater or equal (signed >=) */

loc_001D3153: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + edx * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001D3160: ;
    ecx = MEM32(eax + ebp);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D3160; /* jne: not equal / not zero */

loc_001D316B: ;
    ecx = MEM32(edi + 0x48);
    edx = MEM32(esi + 0x44);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D31B2; /* jge: greater or equal (signed >=) */

loc_001D317C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D3195; /* js: sign (negative) */

loc_001D3180: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x40);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D3195u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3192u); } /* indirect call */
    }

loc_001D3195: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D31A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D31A6u); } /* indirect call */
    }

loc_001D31A9: ;
    MEM32(edi + 0x40) = eax;
    ecx = MEM32(esi + 0x44);
    MEM32(edi + 0x48) = ecx;

loc_001D31B2: ;
    edx = MEM32(esi + 0x44);
    ecx = MEM32(edi + 0x40);
    MEM32(edi + 0x44) = edx;
    ebx = MEM32(esi + 0x44);
    ebp = MEM32(esi + 0x40);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D321F; /* jl: less (signed <) */

loc_001D31D0: ;
    edx = ebp + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + 4;
    ecx = ebx + -4;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ebp;
    ebp = ecx * 4;
    MEM32(esp + 0x18) = ebp;
    edi = edi;

loc_001D31F0: ;
    ebp = MEM32(edx + -12);
    MEM32(eax + -4) = ebp;
    ebp = MEM32(esp + 0x20);
    ebp = MEM32(eax + ebp);
    MEM32(eax) = ebp;
    ebp = MEM32(edx + -4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(edx);
    MEM32(eax + 8) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D31F0; /* jne: not equal / not zero */

loc_001D3213: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x10);

loc_001D321F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D323B; /* jge: greater or equal (signed >=) */

loc_001D3223: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + edx * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001D3230: ;
    ecx = MEM32(eax + ebp);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D3230; /* jne: not equal / not zero */

loc_001D323B: ;
    ecx = MEM32(edi + 0x54);
    edx = MEM32(esi + 0x50);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D3282; /* jge: greater or equal (signed >=) */

loc_001D324C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D3265; /* js: sign (negative) */

loc_001D3250: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x4C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D3265u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3262u); } /* indirect call */
    }

loc_001D3265: ;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D3279u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3276u); } /* indirect call */
    }

loc_001D3279: ;
    MEM32(edi + 0x4C) = eax;
    ecx = MEM32(esi + 0x50);
    MEM32(edi + 0x54) = ecx;

loc_001D3282: ;
    edx = MEM32(esi + 0x50);
    ecx = MEM32(edi + 0x4C);
    MEM32(edi + 0x50) = edx;
    ebx = MEM32(esi + 0x50);
    ebp = MEM32(esi + 0x4C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D32EF; /* jl: less (signed <) */

loc_001D32A0: ;
    edx = ebp + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + 4;
    ecx = ebx + -4;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ebp;
    ebp = ecx * 4;
    MEM32(esp + 0x18) = ebp;
    edi = edi;

loc_001D32C0: ;
    ebp = MEM32(edx + -12);
    MEM32(eax + -4) = ebp;
    ebp = MEM32(esp + 0x20);
    ebp = MEM32(eax + ebp);
    MEM32(eax) = ebp;
    ebp = MEM32(edx + -4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(edx);
    MEM32(eax + 8) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D32C0; /* jne: not equal / not zero */

loc_001D32E3: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x10);

loc_001D32EF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D330B; /* jge: greater or equal (signed >=) */

loc_001D32F3: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + edx * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001D3300: ;
    ecx = MEM32(eax + ebp);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D3300; /* jne: not equal / not zero */

loc_001D330B: ;
    eax = MEM32(edi + 0xC);
    ebx = MEM32(esi + 0xC);
    ebp = edi + 4;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D3331; /* jge: greater or equal (signed >=) */

loc_001D331D: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D3325; /* jl: less (signed <) */

loc_001D3323: ;
    eax = ebx;

loc_001D3325: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001D332Eu); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001D332E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D3331: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x58;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 4) = ebx;
    eax = MEM32(edi + 8);
    ebx = MEM32(esi + 0xC);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D335A; /* jge: greater or equal (signed >=) */

loc_001D3346: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D334E; /* jl: less (signed <) */

loc_001D334C: ;
    eax = ebx;

loc_001D334E: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D3357u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001D3357: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D335A: ;
    MEM32(edi + 4) = ebx;
    ecx = MEM32(esi + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D339C; /* jle: less or equal (signed <=) */

loc_001D3366: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D3370;

    /* nop */

loc_001D3370: ;
    edx = MEM32(esi + 0x58);
    edx = MEM32(edx + eax * 4);
    ebx = MEM32(ebp);
    MEM32(ebx + eax * 4) = edx;
    edx = MEM32(esi + 0x80);
    edx = MEM32(ecx + edx + 0x84);
    ebx = MEM32(edi);
    MEM32(ebx + eax * 4) = edx;
    edx = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D3370; /* jl: less (signed <) */

loc_001D339C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D33B0
 * Original: 0x001D33B0 - 0x001D33B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D33B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D33B0: ;
    g_seh_ebp = ebp; sub_001D26B0(); return; /* tail jmp 0x001D26B0 */

}

/**
 * sub_001D33C0
 * Original: 0x001D33C0 - 0x001D33E8 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D33C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D33C0: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D33E7; /* js: sign (negative) */

loc_001D33C9: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001D33E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D33E3u); } /* indirect call */
    }

loc_001D33E6: ;
    POP32(esp, esi);

loc_001D33E7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D33F0
 * Original: 0x001D33F0 - 0x001D34AD (189 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D33F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D33F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24649E);
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
    MEM32(esi) = 0x2F9F34;
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
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = ecx;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = ecx;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x60) = ecx;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x70) = ecx;
    ecx = esi + 0x90;
    MEM32(esi + 0x80) = ecx;
    MEM32(esi + 0x84) = eax;
    MEM32(esi + 0x88) = 0x80000004u;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esp + 0x14) = 9;
    PUSH32(esp, 0x001D3499u); RECOMP_ABI_CALL(0x001D26B0u, sub_001D26B0); /* call 0x001D26B0 */

loc_001D3499: ;
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
 * sub_001D34B0
 * Original: 0x001D34B0 - 0x001D34D8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D34B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D34B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D34B8u); RECOMP_ABI_CALL(0x001D34E0u, sub_001D34E0); /* call 0x001D34E0 */

loc_001D34B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D34D2; /* je: equal / zero */

loc_001D34BF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D34D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D34CFu); } /* indirect call */
    }

loc_001D34D2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D34E0
 * Original: 0x001D34E0 - 0x001D3680 (416 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D34E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D34E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246510);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = MEM32(esi + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 8;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D3530; /* js: sign (negative) */

loc_001D3510: ;
    edx = MEM32(esi + 0x80);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D3530u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D352Du); } /* indirect call */
    }

loc_001D3530: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 7;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D3556; /* js: sign (negative) */

loc_001D353C: ;
    edx = MEM32(esi + 0x68);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D3556u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3553u); } /* indirect call */
    }

loc_001D3556: ;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 6;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D357C; /* js: sign (negative) */

loc_001D3562: ;
    edx = MEM32(esi + 0x58);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D357Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3579u); } /* indirect call */
    }

loc_001D357C: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 5;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D35A2; /* js: sign (negative) */

loc_001D3588: ;
    edx = MEM32(esi + 0x4C);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D35A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D359Fu); } /* indirect call */
    }

loc_001D35A2: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 4;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D35C8; /* js: sign (negative) */

loc_001D35AE: ;
    edx = MEM32(esi + 0x40);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D35C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D35C5u); } /* indirect call */
    }

loc_001D35C8: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 3;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D35EE; /* js: sign (negative) */

loc_001D35D4: ;
    edx = MEM32(esi + 0x34);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D35EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D35EBu); } /* indirect call */
    }

loc_001D35EE: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 2;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D3614; /* js: sign (negative) */

loc_001D35FA: ;
    edx = MEM32(esi + 0x28);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D3614u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3611u); } /* indirect call */
    }

loc_001D3614: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 1;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D363A; /* js: sign (negative) */

loc_001D3620: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D363Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3637u); } /* indirect call */
    }

loc_001D363A: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D3660; /* js: sign (negative) */

loc_001D3646: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D3660u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D365Du); } /* indirect call */
    }

loc_001D3660: ;
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001D366Fu); RECOMP_ABI_CALL(0x00015C50u, sub_00015C50); /* call 0x00015C50 */

loc_001D366F: ;
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
 * sub_001D3680
 * Original: 0x001D3680 - 0x001D369E (30 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3680(void)
{

loc_001D3680: ;
    edx = MEM32(ecx + 0x28);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x38);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 4) = edx;
    SET_LO8(ecx, MEM8(ecx + 0x3C));
    MEM8(eax + 0xC) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D36A0
 * Original: 0x001D36A0 - 0x001D36E8 (72 bytes, 24 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001D36A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D36A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x28) = edx;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x38) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x38)); /* fsub dword ptr [ecx + 0x38] */
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x2C) = edx;
    SET_LO8(eax, MEM8(eax + 0xC));
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x2C)); /* fmul dword ptr [ecx + 0x2c] */
    MEM8(ecx + 0x3C) = LO8(eax);
    MEMF(ecx + 0x34) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x38)); /* fsub dword ptr [ecx + 0x38] */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    MEMF(ecx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D36F0
 * Original: 0x001D36F0 - 0x001D3751 (97 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D36F0(void)
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

loc_001D36F0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x38)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x38] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D370F; /* jp: parity */

loc_001D3705: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2DC098)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001D370F: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D3724; /* jne: not equal / not zero */

loc_001D371C: ;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    goto loc_001D372A;

loc_001D3724: ;
    fp_push(MEMF(0x2DC3A0)); /* fld float */

loc_001D372A: ;
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x28] */
    fp_push(MEMF(esp)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D3744; /* jp: parity */

loc_001D373A: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x38)); /* fsub dword ptr [ecx + 0x38] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x2C)); /* fmul dword ptr [ecx + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001D3744: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x28)); /* fsub dword ptr [ecx + 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x30)); /* fmul dword ptr [ecx + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x34)); /* fadd dword ptr [ecx + 0x34] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D3760
 * Original: 0x001D3760 - 0x001D3788 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3760: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D3768u); RECOMP_ABI_CALL(0x001D5BB0u, sub_001D5BB0); /* call 0x001D5BB0 */

loc_001D3768: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D3782; /* je: equal / zero */

loc_001D376F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D3782u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D377Fu); } /* indirect call */
    }

loc_001D3782: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D3790
 * Original: 0x001D3790 - 0x001D3803 (115 bytes, 37 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001D3790(void)
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

loc_001D3790: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM8(eax + 0x18) = LO8(ecx);
    MEM8(eax + 0x19) = LO8(ecx);
    MEM8(eax + 0x24) = LO8(ecx);
    MEM8(eax + 0x25) = LO8(ecx);
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2F9F7C;
    edx = MEM32(ecx);
    MEM32(eax + 0x28) = edx;
    fp_push(MEMF(eax + 0x28)); /* fld float */
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x38) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x38)); /* fsub dword ptr [eax + 0x38] */
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x2C) = edx;
    SET_LO8(ecx, MEM8(ecx + 0xC));
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x2C)); /* fmul dword ptr [eax + 0x2c] */
    MEM8(eax + 0x3C) = LO8(ecx);
    MEMF(eax + 0x34) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x38)); /* fsub dword ptr [eax + 0x38] */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D3810
 * Original: 0x001D3810 - 0x001D3AA7 (663 bytes, 190 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D3810(void)
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

loc_001D3810: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(ecx + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001D3832; /* jne: not equal / not zero */

loc_001D3822: ;
    SET_LO8(ecx, MEM8(ecx + 0x25));
    eax = MEM32(ebp + 8);
    MEM8(eax) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001D3832: ;
    esi = MEM32(ecx + 8);
    edx = MEM32(esi + 0x30);
    edx = MEM32(edx + 0x3C);
    xmm0 = XMM_MEM(edx + 0x40); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    eax = esp + 8;
    MEMF(eax) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esi + 0x20);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2F9F94)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2f9f94] */
    SET_LO8(eax, MEM8(eax + 0x14));
    MEM8(esp + 0xC) = LO8(eax);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D3896; /* jp: parity */

loc_001D3892: ;
    SET_LO8(ebx, 1);
    goto loc_001D3898;

loc_001D3896: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001D3898: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DD414)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dd414] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D3984; /* jne: not equal / not zero */

loc_001D38AC: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    SET_LO8(ecx, 1);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2F9F48)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2f9f48] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D3A6A; /* jne: not equal / not zero */

loc_001D38C3: ;
    eax = MEM32(esi + 0x10);
    fp_push(MEMF(0x2DC098)); /* fld float */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    xmm3 = XMM_MEM(edx + 0xA0); /* movaps */
    xmm2 = XMM_MEM(edx + 0x90); /* movaps */
    xmm4 = XMM_MEM(edx + 0x40); /* movaps */
    xmm1 = XMM_MEM(edx + 0x80); /* movaps */
    xmm5 = xmm0; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0xAA); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm5); /* mulps */
    xmm5 = xmm0; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0x55); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm5); /* mulps */
    xmm5 = xmm0; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm5); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm2); /* addps */
    xmm0 = xmm4; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm4); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm3); /* addps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001D398B; /* jnp: not parity */

loc_001D393E: ;
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm2.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0x10); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 8) = 0x40400000;
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 8) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    goto loc_001D3999;

loc_001D3984: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_001D3A6A;

loc_001D398B: ;
    MEM32(esp + 8) = 0;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_001D3999: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm3 = xmm0; /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm4); /* mulps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0x55); /* shufps */
    xmm4 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xAA); /* shufps */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001D3A20; /* jnp: not parity */

loc_001D39DA: ;
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm3.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_MEM(esp + 0x10); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEM32(esp + 8) = 0x40400000;
    xmm4 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 8) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    goto loc_001D3A2E;

loc_001D3A20: ;
    MEM32(esp + 8) = 0;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_001D3A2E: ;
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm2 = XMM_MUL(xmm2, xmm3); /* mulps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm2, 0x55); /* shufps */
    xmm1 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm2, 0xAA); /* shufps */
    edx = esp + 8;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(edx) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2F9F48)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2f9f48] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001D3A8B; /* jnp: not parity */

loc_001D3A6A: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3A83; /* je: equal / zero */

loc_001D3A72: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_001D3A8E; /* je: equal / zero */

loc_001D3A79: ;
    MEM8(eax) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001D3A83: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3A99; /* je: equal / zero */

loc_001D3A87: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3A99; /* je: equal / zero */

loc_001D3A8B: ;
    eax = MEM32(ebp + 8);

loc_001D3A8E: ;
    MEM8(eax) = 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001D3A99: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    MEM8(eax) = 0;
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
 * sub_001D3AB0
 * Original: 0x001D3AB0 - 0x001D3B4B (155 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3AB0(void)
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

loc_001D3AB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + 0x20);
    SET_LO8(eax, MEM8(eax + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3ACF; /* je: equal / zero */

loc_001D3AC1: ;
    SET_LO8(eax, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3ACF; /* je: equal / zero */

loc_001D3AC8: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    goto loc_001D3AD2;

loc_001D3ACF: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */

loc_001D3AD2: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D3AE9; /* jne: not equal / not zero */

loc_001D3ADF: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2DC098)); /* fld float */
    goto loc_001D3AEF;

loc_001D3AE9: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC3A0)); /* fmul dword ptr [0x2dc3a0] */

loc_001D3AEF: ;
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 0x20);
    SET_LO8(eax, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3B0A; /* je: equal / zero */

loc_001D3AFC: ;
    SET_LO8(eax, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3B0A; /* je: equal / zero */

loc_001D3B03: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    goto loc_001D3B0D;

loc_001D3B0A: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */

loc_001D3B0D: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D3B22; /* jp: parity */

loc_001D3B1A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2DC098)); /* fld float */

loc_001D3B22: ;
    ecx = esi;
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001D3B2Cu); RECOMP_ABI_CALL(0x001D36F0u, sub_001D36F0); /* call 0x001D36F0 */

loc_001D3B2C: ;
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(edx, MEM8(esi + 0x24));
    eax = esp + 7;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esi + 0x18) = LO8(edx);
    PUSH32(esp, 0x001D3B41u); RECOMP_ABI_CALL(0x001D3810u, sub_001D3810); /* call 0x001D3810 */

loc_001D3B41: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(esi + 0x19) = LO8(ecx);
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
 * sub_001D3B50
 * Original: 0x001D3B50 - 0x001D3B69 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3B50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3B50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D3B58u); RECOMP_ABI_CALL(0x001D9170u, sub_001D9170); /* call 0x001D9170 */

loc_001D3B58: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM8(esi + 0xC) = LO8(eax);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D3B70
 * Original: 0x001D3B70 - 0x001D3B7F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3B70(void)
{

loc_001D3B70: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D3B7Eu); RECOMP_ABI_CALL(0x001D3680u, sub_001D3680); /* call 0x001D3680 */

loc_001D3B7E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D3B80
 * Original: 0x001D3B80 - 0x001D3B8F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3B80(void)
{

loc_001D3B80: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D3B8Eu); RECOMP_ABI_CALL(0x001D36A0u, sub_001D36A0); /* call 0x001D36A0 */

loc_001D3B8E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D3B90
 * Original: 0x001D3B90 - 0x001D3B96 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3B90(void)
{

loc_001D3B90: ;
    eax = 0x44111C;
    esp += 4; return; /* ret */

}

/**
 * sub_001D3BA0
 * Original: 0x001D3BA0 - 0x001D3BF1 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3BA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3BA0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24652B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x40);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D3BC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3BC2u); } /* indirect call */
    }

loc_001D3BC5: ;
    MEM16(eax + 4) = 0x40;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001D3BE2u); RECOMP_ABI_CALL(0x001D3790u, sub_001D3790); /* call 0x001D3790 */

loc_001D3BE2: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D3C00
 * Original: 0x001D3C00 - 0x001D3C4D (77 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3C00: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246551);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    MEM32(esp + 8) = esi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D3C3C; /* je: equal / zero */

loc_001D3C2A: ;
    ecx = esi;
    PUSH32(esp, 0x001D3C31u); RECOMP_ABI_CALL(0x001D9170u, sub_001D9170); /* call 0x001D9170 */

loc_001D3C31: ;
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM8(esi + 0xC) = LO8(ebx);

loc_001D3C3C: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D3C50
 * Original: 0x001D3C50 - 0x001D3CBD (109 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3C50(void)
{

loc_001D3C50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001D3C5Eu); RECOMP_ABI_CALL(0x001D5710u, sub_001D5710); /* call 0x001D5710 */

loc_001D3C5E: ;
    eax = MEM32(esi + 0x1AC);
    MEM32(edi + 0x28) = eax;
    ecx = MEM32(esi + 0x18C);
    MEM32(edi + 0x2C) = ecx;
    edx = MEM32(esi + 0x190);
    MEM32(edi + 0x30) = edx;
    eax = MEM32(esi + 0x194);
    MEM32(edi + 0x34) = eax;
    ecx = MEM32(esi + 0x198);
    MEM32(edi + 0x38) = ecx;
    edx = MEM32(esi + 0x19C);
    MEM32(edi + 0x3C) = edx;
    eax = MEM32(esi + 0x1A0);
    MEM32(edi + 0x44) = eax;
    ecx = MEM32(esi + 0x1A4);
    MEM32(edi + 0x48) = ecx;
    edx = MEM32(esi + 0x1A8);
    MEM32(edi + 0x4C) = edx;
    eax = MEM32(esi + 0x150);
    MEM32(edi + 0x40) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D3CC0
 * Original: 0x001D3CC0 - 0x001D3CD6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3CC0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D3CD3; /* jne: not equal / not zero */

loc_001D3CCC: ;
    MEM32(eax + 0xC) = 1;

loc_001D3CD3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D3CE0
 * Original: 0x001D3CE0 - 0x001D40B4 (980 bytes, 248 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D3CE0(void)
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

loc_001D3CE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 0x18C) = eax;
    ecx = MEM32(esi + 0x30);
    MEM32(edi + 0x190) = ecx;
    edx = MEM32(esi + 0x34);
    MEM32(edi + 0x194) = edx;
    eax = MEM32(esi + 0x44);
    MEM32(edi + 0x1A0) = eax;
    ecx = MEM32(esi + 0x48);
    MEM32(edi + 0x1A4) = ecx;
    edx = MEM32(esi + 0x4C);
    MEM32(edi + 0x1A8) = edx;
    eax = MEM32(esi + 0x40);
    MEM32(edi + 0x150) = eax;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(esi + 0x48);
    eax = MEM32(esi);
    xmm5 = XMM_MEM(eax + 0x30); /* movaps */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    xmm4 = XMM_MEM(0x2F6A20); /* movaps */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    MEM32(esp + 0x18) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    ecx = MEM32(esi + 0x4C);
    MEM32(esp + 0x18) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(esp + 0x18) = ecx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    xmm6 = xmm2; /* movaps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm2, 0); /* shufps */
    xmm2 = XMM_MEM(eax + 0x10); /* movaps */
    xmm5 = XMM_AND(xmm5, xmm4); /* andps */
    xmm6 = XMM_MUL(xmm6, xmm5); /* mulps */
    xmm2 = XMM_AND(xmm2, xmm4); /* andps */
    xmm5 = xmm1; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm1, 0); /* shufps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm2); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm1 = XMM_AND(xmm1, xmm4); /* andps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm5); /* addps */
    xmm0 = xmm3; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm3, 0); /* shufps */
    xmm2 = XMM_ADD(xmm2, xmm6); /* addps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x20)); /* fdiv dword ptr [esp + 0x20] */
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    MEM32(esp + 0x40) = edx;
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x68) = ecx;
    MEMF(edi + 0x160) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x24)); /* fdiv dword ptr [esp + 0x24] */
    MEMF(edi + 0x164) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x28)); /* fdiv dword ptr [esp + 0x28] */
    MEMF(edi + 0x168) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi + 0x16C) = 0;
    edx = MEM32(edi + 0x30);
    ecx = MEM32(edx + 0x3C);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x001D3E30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3E2Du); } /* indirect call */
    }

loc_001D3E30: ;
    eax = MEM32(edi + 0x30);
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x001D3E40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D3E3Du); } /* indirect call */
    }

loc_001D3E40: ;
    fp_push(MEMF(esi + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x44)); /* fdiv dword ptr [esi + 0x44] */
    eax = MEM32(esi);
    xmm4 = XMM_MEM(eax + 0x30); /* movaps */
    xmm3 = XMM_MEM(0x2F6A20); /* movaps */
    ebx = MEM32(edi + 0x30);
    xmm4 = XMM_AND(xmm4, xmm3); /* andps */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x48)); /* fdiv dword ptr [esi + 0x48] */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x4C)); /* fdiv dword ptr [esi + 0x4c] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC08C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x1C)); /* fdiv dword ptr [esp + 0x1c] */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm2, 0); /* shufps */
    xmm2 = XMM_MEM(eax + 0x10); /* movaps */
    xmm2 = XMM_AND(xmm2, xmm3); /* andps */
    xmm5 = XMM_MUL(xmm5, xmm4); /* mulps */
    xmm4 = xmm1; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm1, 0); /* shufps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    xmm4 = XMM_MUL(xmm4, xmm2); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm1 = XMM_AND(xmm1, xmm3); /* andps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm4); /* addps */
    xmm2 = XMM_ADD(xmm2, xmm5); /* addps */
    XMM_STORE(esp + 0x20, xmm2); /* movaps */
    MEM32(esp + 0x2C) = 0x3F800000;
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(edi + 0x170, xmm2); /* movaps */
    ecx = MEM32(ebx + 0x3C);
    xmm0 = XMM_MEM(ecx + 0x20); /* movaps */
    edx = MEM32(edi + 0x170);
    ecx = MEM32(edi + 0x174);
    XMM_STORE(esp + 0x90, xmm0); /* movaps */
    eax = MEM32(ebx + 0x3C);
    xmm1 = XMM_MEM(eax + 0x80); /* movaps */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    edx = MEM32(edi + 0x178);
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(esp + 0x40, xmm2); /* movaps */
    MEM32(esp + 0x18) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    XMM_STORE(esp + 0x50, xmm2); /* movaps */
    MEM32(esp + 0x18) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    PUSH32(esp, eax);
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    eax = esp + 0x44;
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(esp + 0x64, xmm2); /* movaps */
    PUSH32(esp, eax);
    ecx = esp + 0xD8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D3F81u); RECOMP_ABI_CALL(0x001CF660u, sub_001CF660); /* call 0x001CF660 */

loc_001D3F81: ;
    ecx = MEM32(ebx + 0x3C);
    edx = MEM32(ecx + 0x2C);
    eax = MEM32(esi);
    MEM32(esp + 0x100) = edx;
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(esp + 0xB0, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(esp + 0xA0, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    eax = MEM32(esi + 0x38);
    MEM32(edi + 0x198) = eax;
    ecx = MEM32(esi + 0x3C);
    MEM32(edi + 0x19C) = ecx;
    edx = MEM32(esi + 0x28);
    ecx = MEM32(edi + 0xC);
    eax = edx;
    MEM32(edi + 0x1AC) = eax;
    XMM_STORE(esp + 0xC0, xmm0); /* movaps */
    MEM32(esp + 0x114) = edx;
    MEM32(esp + 0x104) = 0;
    MEM32(esp + 0x108) = 0;
    edx = MEM32(ecx + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D409A; /* jle: less or equal (signed <=) */

loc_001D4000: ;
    MEM32(esp + 0x1C) = esi;

loc_001D4004: ;
    edx = MEM32(ecx + 0x58);
    edx = MEM32(edx + eax * 4);
    ebx = MEM32(ecx + 0x10);
    ebx = MEM32(ebx + eax * 4);
    MEM32(esp + edx * 4 + 0x10C) = ebx;
    ebx = MEM32(edi + 0x28);
    ebx = MEM32(ebx + 0x28);
    fp_push(MEMF(ebx + eax * 4)); /* fld float */
    ebx = MEM32(edi + 0x28);
    ebx = MEM32(ebx + 0x1C);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_MEM(ebx + esi); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    ebx = MEM32(edi + 0x28);
    ebx = MEM32(ebx + 0x10);
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(ebx + esi); /* movaps */
    ebx = edx;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = esp + edx * 4 + 0x104;
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    MEM32(esp + 0x3C) = edx;
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esp + ebx + 0x70, xmm0); /* movaps */
    ebx = MEM32(ecx + 0x80);
    edx = MEM32(ecx + 0x10);
    fp_push(MEMF(edx + eax * 4)); /* fld float */
    edx = ebx;
    ebx = MEM32(esp + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + edx + 0x84)); /* fmul dword ptr [ebx + edx + 0x84] */
    edx = MEM32(esp + 0x3C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx)); /* fadd dword ptr [edx] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ebx;
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D4004; /* jl: less (signed <) */

loc_001D409A: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x48;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x70;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D40A8u); RECOMP_ABI_CALL(0x00235B00u, sub_00235B00); /* call 0x00235B00 */

loc_001D40A8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_001D40C0
 * Original: 0x001D40C0 - 0x001D40DB (27 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D40C0(void)
{

loc_001D40C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001D40CEu); RECOMP_ABI_CALL(0x001D5760u, sub_001D5760); /* call 0x001D5760 */

loc_001D40CE: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D40D6u); RECOMP_ABI_CALL(0x001D3CE0u, sub_001D3CE0); /* call 0x001D3CE0 */

loc_001D40D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D40E0
 * Original: 0x001D40E0 - 0x001D4182 (162 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D40E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D40E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 0x80);
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax); /* movaps */
    edx = MEM32(ebp + 8);
    xmm1 = XMM_MIN(xmm1, xmm0); /* minps */
    XMM_STORE(edx, xmm1); /* movaps */
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 0x80);
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax); /* movaps */
    PUSH32(esp, ebx);
    xmm1 = XMM_MAX(xmm1, xmm0); /* maxps */
    XMM_STORE(edx + 0x10, xmm1); /* movaps */
    ebx = MEM32(ecx + 0xC);
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, esi);
    esi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001D4179; /* jle: less or equal (signed <=) */

loc_001D4129: ;
    edi = 0xC0;
    edi = edi;

loc_001D4130: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 0x80);
    xmm1 = XMM_MEM(eax + edi + 0x10); /* movaps */
    xmm0 = XMM_MEM(edx); /* movaps */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_MIN(xmm0, xmm1); /* minps */
    XMM_STORE(edx, xmm0); /* movaps */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_MIN(xmm0, xmm1); /* minps */
    XMM_STORE(edx, xmm0); /* movaps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm0 = XMM_MEM(edx + 0x10); /* movaps */
    xmm0 = XMM_MAX(xmm0, xmm1); /* maxps */
    XMM_STORE(edx + 0x10, xmm0); /* movaps */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_MAX(xmm0, xmm1); /* maxps */
    XMM_STORE(edx + 0x10, xmm0); /* movaps */
    eax = MEM32(ebx + 0xC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D4130; /* jl: less (signed <) */

loc_001D4179: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D4190
 * Original: 0x001D4190 - 0x001D41E8 (88 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D4190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D4190: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 0xC);
    eax = MEM32(ebp + 8);
    eax = eax + eax * 2;
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x80);
    edx = MEM32(ebp + 0xC);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x30) = 0;
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    eax = MEM32(ecx + 0x44);
    ecx = MEM32(ecx + 0x38);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    XMM_STORE(esp + 0x28, xmm0); /* movaps */
    MEM8(esp + 0x38) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D41E1u); RECOMP_ABI_CALL(0x00236B30u, sub_00236B30); /* call 0x00236B30 */

loc_001D41E1: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D41F0
 * Original: 0x001D41F0 - 0x001D4E02 (3090 bytes, 779 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D41F0(void)
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

loc_001D41F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x414) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x414;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(esi + 0x2C);
    xmm2 = XMM_MEM(eax + 0x10); /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    edx = MEM32(esi + 0x30);
    ebx = MEM32(esi + 0xC);
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    XMM_STORE(esp + 0x5C, xmm0); /* movaps */
    xmm2 = XMM_MEM(eax + 0x20); /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    XMM_STORE(esp + 0x4C, xmm3); /* movaps */
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x3C);
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    MEM32(esp + 0x14) = esi;
    fp_push(MEMF(0x2DC098)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D4264; /* jp: parity */

loc_001D425A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2DC098)); /* fld float */
    goto loc_001D426A;

loc_001D4264: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) / fp_top()); /* fdivr dword ptr [0x2dc08c] */

loc_001D426A: ;
    ecx = MEM32(esi + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    xmm2 = XMM_MEM(ecx + 0xE0); /* movaps */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3 = xmm1; /* movaps */
    fp_pop(); /* fstp st(0) */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    fp_push(MEMF(0x2DC098)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D42B2; /* jp: parity */

loc_001D42A8: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2DC098)); /* fld float */
    goto loc_001D42B8;

loc_001D42B2: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) / fp_top()); /* fdivr dword ptr [0x2dc08c] */

loc_001D42B8: ;
    xmm1 = XMM_MEM(ecx + 0xE0); /* movaps */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x20;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(esp + 0x20, xmm2); /* movaps */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x001D42E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D42E3u); } /* indirect call */
    }

loc_001D42E6: ;
    edx = MEM32(edi);
    eax = esp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001D42F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D42EFu); } /* indirect call */
    }

loc_001D42F2: ;
    edx = MEM32(edi);
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001D42FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D42FBu); } /* indirect call */
    }

loc_001D42FE: ;
    eax = MEM32(esi + 0x184);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D4330; /* jle: less or equal (signed <=) */

loc_001D430A: ;
    /* nop */

loc_001D4310: ;
    ecx = MEM32(esi + 0x180);
    ecx = MEM32(ecx + edi * 4);
    eax = MEM32(ebp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D4323u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4320u); } /* indirect call */
    }

loc_001D4323: ;
    eax = MEM32(esi + 0x184);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D4310; /* jl: less (signed <) */

loc_001D432E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D4330: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esp + 0x60, xmm3); /* movaps */
    eax = esp + 0x290;
    ecx = 2;

loc_001D4344: ;
    XMM_STORE(eax + -32, xmm3); /* movaps */
    XMM_STORE(eax + -16, xmm3); /* movaps */
    XMM_STORE(eax, xmm3); /* movaps */
    MEM32(eax + 0x18) = edi;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x20) = edi;
    MEM32(eax + 0x24) = edi;
    MEM32(eax + 0x28) = edi;
    MEM8(eax + 0x2C) = 0;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D4344; /* jne: not equal / not zero */

loc_001D436E: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x3C) = edi;
    MEM32(esp + 0x40) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_001D4680; /* jle: less or equal (signed <=) */

loc_001D4381: ;
    MEM32(esp + 0x18) = 0;
    /* nop */

loc_001D4390: ;
    ecx = MEM32(ebx + 0x58);
    edx = MEM32(ecx + edi * 4);
    esi = MEM32(ebx + 0x80);
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    xmm1 = XMM_MEM(esi + ecx + 0x30); /* movaps */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 0x28);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(ecx + 0x34);
    fp_push(MEMF(edx + edi * 4)); /* fld float */
    ecx = MEM32(ebp + 8);
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    edx = esp + 0x4A;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    ecx = MEM32(eax + 0x30);
    PUSH32(esp, edx);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(esp + 0x54, xmm2); /* movaps */
    MEM32(esp + 0x10) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D43EBu); RECOMP_ABI_CALL(0x001C2870u, sub_001C2870); /* call 0x001C2870 */

loc_001D43EB: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4400; /* jne: not equal / not zero */

loc_001D43F0: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4400; /* je: equal / zero */

loc_001D43FB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D4400u); RECOMP_ABI_CALL(0x001C2890u, sub_001C2890); /* call 0x001C2890 */

loc_001D4400: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001D4412u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D440Fu); } /* indirect call */
    }

loc_001D4412: ;
    ecx = MEM32(esi + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D44A8; /* je: equal / zero */

loc_001D4424: ;
    edx = MEM32(ebx + 0x4C);
    fp_push(MEMF(edx + edi * 4)); /* fld float */
    xmm1 = XMM_MEM(esp + 0x50); /* movaps */
    fp_top() = -fp_top(); /* fchs */
    eax = esp + 0x4B;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(esp + 0x54, xmm2); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D4454u); RECOMP_ABI_CALL(0x001C2870u, sub_001C2870); /* call 0x001C2870 */

loc_001D4454: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4469; /* jne: not equal / not zero */

loc_001D4459: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4469; /* je: equal / zero */

loc_001D4464: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D4469u); RECOMP_ABI_CALL(0x001C2890u, sub_001C2890); /* call 0x001C2890 */

loc_001D4469: ;
    ecx = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001D447Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4478u); } /* indirect call */
    }

loc_001D447B: ;
    ecx = MEM32(esp + 0x38);
    eax = MEM32(esp + ecx * 4 + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D449E; /* je: equal / zero */

loc_001D4487: ;
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx + 0x3C);
    eax = MEM32(eax + 0x3C);
    fp_push(MEMF(edx + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D44AC; /* jp: parity */

loc_001D449E: ;
    edx = MEM32(esp + 0xC);
    MEM32(esp + ecx * 4 + 0x3C) = edx;
    goto loc_001D44AC;

loc_001D44A8: ;
    ecx = MEM32(esp + 0x38);

loc_001D44AC: ;
    xmm1 = XMM_MEM(esi + 0x30); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + 0x24);
    eax = MEM32(eax + 0x10);
    edx = MEM32(edx + 0x20);
    fp_push(MEMF(eax + edi * 4)); /* fld float */
    edx = MEM32(edx + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + edi * 4)); /* fadd dword ptr [edx + edi*4] */
    eax = MEM32(ebx + 0x10);
    xmm2 = xmm1; /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0xD2); /* shufps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0xC9); /* shufps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xC9); /* shufps */
    xmm4 = xmm2; /* movaps */
    xmm4 = XMM_MUL(xmm4, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xD2); /* shufps */
    xmm0 = xmm3; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SUB(xmm1, xmm4); /* subps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0x55); /* shufps */
    xmm5 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0xAA); /* shufps */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(eax + edi * 4)); /* fdiv dword ptr [eax + edi*4] */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    fp_push(MEMF(0x2DC098)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001D457B; /* jnp: not parity */

loc_001D4535: ;
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm4.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x20) = xmm4.f[0]; /* movss */
    xmm4 = XMM_MEM(esp + 0x20); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    MEM32(esp + 0x44) = 0x40400000;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x4C) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    goto loc_001D4589;

loc_001D457B: ;
    MEM32(esp + 0x30) = 0;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */

loc_001D4589: ;
    edx = MEM32(ebx + 0x68);
    fp_push((double)SMEM32(edx + ecx * 4)); /* fild */
    eax = ecx + ecx * 4;
    ecx = MEM32(ebx + 0x28);
    xmm4 = xmm0; /* movaps */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) / fp_top()); /* fdivr dword ptr [0x2dc08c] */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0); /* shufps */
    xmm0 = xmm4; /* movaps */
    xmm4 = XMM_MEM(esi + 0x20); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = esp + eax + 0x270;
    fp_push(MEMF(ecx + edi * 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x88)); /* fmul dword ptr [esi + 0x88] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm5 = xmm1; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    xmm5 = XMM_SHUFFLE(xmm5, xmm1, 0); /* shufps */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm4); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm5); /* addps */
    XMM_STORE(eax, xmm1); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xD2); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xC9); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm3 = XMM_SUB(xmm3, xmm1); /* subps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm3); /* addps */
    XMM_STORE(eax + 0x10, xmm1); /* movaps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(eax + 0x20, xmm1); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x38)); /* fadd dword ptr [eax + 0x38] */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ebx + 0x34);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + edi * 4)); /* fmul dword ptr [edx + edi*4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x3C)); /* fadd dword ptr [eax + 0x3c] */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebx + 0x40);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + edi * 4)); /* fmul dword ptr [ecx + edi*4] */
    SET_LO8(ecx, MEM8(eax + 0x4C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x40)); /* fadd dword ptr [eax + 0x40] */
    MEMF(eax + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x44)); /* fadd dword ptr [eax + 0x44] */
    MEMF(eax + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x48)); /* fadd dword ptr [eax + 0x48] */
    MEMF(eax + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_001D4658; /* jne: not equal / not zero */

loc_001D4644: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(edx + 0x24);
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(MEM8(edi + ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4658; /* jne: not equal / not zero */

loc_001D4654: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_001D465A;

loc_001D4658: ;
    SET_LO8(ecx, 1);

loc_001D465A: ;
    MEM8(eax + 0x4C) = LO8(ecx);
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ebx + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D4390; /* jl: less (signed <) */

loc_001D4677: ;
    xmm3 = XMM_MEM(esp + 0x60); /* movaps */
    esi = MEM32(esp + 0x14);

loc_001D4680: ;
    edx = MEM32(esi + 0x19C);
    MEM32(esp + 0x310) = edx;
    eax = MEM32(ebx + 0x64);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_001D4960; /* jle: less or equal (signed <=) */

loc_001D469E: ;
    ecx = esp + 0x290;
    MEM32(esp + 0xC) = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D46B0;

    /* nop */

loc_001D46B0: ;
    xmm2 = XMM_MEM(ecx + -16); /* movaps */
    fp_push(MEMF(0x2DC098)); /* fld float */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm4 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xAA); /* shufps */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001D4731; /* jnp: not parity */

loc_001D46EB: ;
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm1.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEM32(esp + 0x30) = 0x40400000;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x4C) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    goto loc_001D473F;

loc_001D4731: ;
    MEM32(esp + 0x44) = 0;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */

loc_001D473F: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    XMM_STORE(ecx + -16, xmm1); /* movaps */
    xmm1 = XMM_MEM(ecx); /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm4 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xAA); /* shufps */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001D47CD; /* jnp: not parity */

loc_001D4787: ;
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm2.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0x20); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 0x1C) = 0x40400000;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x38) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    goto loc_001D47DB;

loc_001D47CD: ;
    MEM32(esp + 0x18) = 0;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_001D47DB: ;
    edx = MEM32(esp + edx * 4 + 0x3C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    eax = esp + esi + 0x70;
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(ecx, xmm2); /* movaps */
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001D4D79; /* je: equal / zero */

loc_001D47FE: ;
    _fa = (uint32_t)(MEM8(edx + 0x40)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x40), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4D79; /* jne: not equal / not zero */

loc_001D4808: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D482B; /* jle: less or equal (signed <=) */

loc_001D480C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x3C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D482B; /* jne: not equal / not zero */

loc_001D4812: ;
    eax = MEM32(esp + 0x2A0);
    MEM32(ecx + 0x10) = eax;
    edx = MEM32(esp + 0x2A4);
    MEM32(ecx + 0x14) = edx;
    goto loc_001D493B;

loc_001D482B: ;
    edi = MEM32(edx + 0x3C);
    XMM_STORE(esp + 0x50, xmm3); /* movaps */
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4841; /* je: equal / zero */

loc_001D483A: ;
    MEM32(edi + 8) = 0;

loc_001D4841: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001D4852u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D484Fu); } /* indirect call */
    }

loc_001D4852: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001D4859u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4856u); } /* indirect call */
    }

loc_001D4859: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001D4CAD; /* je: equal / zero */

loc_001D4862: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001D4932; /* jne: not equal / not zero */

loc_001D486B: ;
    eax = MEM32(esp + esi + 0x70);
    xmm0 = XMM_MEM(esp + esi + 0x80); /* movaps */
    MEM32(esp + esi + 0x170) = eax;
    ecx = esp + esi + 0x74;
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    edx = esp + esi + 0x174;
    MEM32(edx) = eax;
    MEM32(edx + 4) = ecx;
    SET_LO8(edx, MEM8(esp + esi + 0x7C));
    ecx = MEM32(esp + 0xC);
    XMM_STORE(esp + esi + 0x180, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + esi + 0x90); /* movaps */
    XMM_STORE(esp + esi + 0x190, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + esi + 0xA0); /* movaps */
    XMM_STORE(esp + esi + 0x1A0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + esi + 0xB0); /* movaps */
    XMM_STORE(esp + esi + 0x1B0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + esi + 0xC0); /* movaps */
    XMM_STORE(esp + esi + 0x1C0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + esi + 0xD0); /* movaps */
    XMM_STORE(esp + esi + 0x1D0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + esi + 0xE0); /* movaps */
    MEM8(esp + esi + 0x17C) = LO8(edx);
    XMM_STORE(esp + esi + 0x1E0, xmm0); /* movaps */
    xmm0 = XMM_MEM(edi + 0xD0); /* movaps */
    XMM_STORE(esp + esi + 0x190, xmm0); /* movaps */
    xmm0 = XMM_MEM(edi + 0xC0); /* movaps */
    eax = esp + esi + 0x170;
    XMM_STORE(esp + esi + 0x180, xmm0); /* movaps */
    MEM32(ecx + 0x14) = eax;

loc_001D4932: ;
    xmm3 = XMM_MEM(esp + 0x60); /* movaps */
    ecx = MEM32(esp + 0xC);

loc_001D493B: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(ebx + 0x64);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0xC) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D46B0; /* jl: less (signed <) */

loc_001D495C: ;
    esi = MEM32(esp + 0x14);

loc_001D4960: ;
    eax = MEM32(esi + 0x30);
    XMM_STORE(esp + 0x20, xmm3); /* movaps */
    ecx = MEM32(eax + 0x3C);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D497D; /* je: equal / zero */

loc_001D4976: ;
    MEM32(ecx + 8) = 0;

loc_001D497D: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(ecx);
    edx = esp + 0x320;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001D4993u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4990u); } /* indirect call */
    }

loc_001D4993: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    xmm4 = XMM_MEM(esi + 0x170); /* movaps */
    fp_push(MEMF(esi + 0x198)); /* fld float */
    eax = MEM32(esp + 0x30);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    ecx = MEM32(esp + 0x320);
    edx = MEM32(esp + 0x324);
    xmm1 = XMM_MEM(esp + 0x330); /* movaps */
    xmm2 = XMM_MEM(esp + 0x380); /* movaps */
    xmm3 = XMM_MEM(esp + 0x390); /* movaps */
    xmm5 = XMM_MEM(esp + 0x340); /* movaps */
    xmm0 = xmm4; /* movaps */
    XMM_STORE(esp + 0x350, xmm0); /* movaps */
    eax = MEM32(eax + 0x3C);
    XMM_STORE(esp + 0x3B0, xmm1); /* movaps */
    xmm1 = XMM_MEM(esp + 0x370); /* movaps */
    MEM32(esp + 0x3A0) = ecx;
    ecx = MEM32(esp + 0x328);
    MEM32(esp + 0x3A4) = edx;
    SET_LO8(edx, MEM8(esp + 0x32C));
    XMM_STORE(esp + 0x3D0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x360); /* movaps */
    XMM_STORE(esp + 0x3F0, xmm1); /* movaps */
    XMM_STORE(esp + 0x3C0, xmm5); /* movaps */
    XMM_STORE(esp + 0x400, xmm2); /* movaps */
    XMM_STORE(esp + 0x410, xmm3); /* movaps */
    MEM32(esp + 0x3A8) = ecx;
    MEM8(esp + 0x3AC) = LO8(edx);
    XMM_STORE(esp + 0x3E0, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0xD0); /* movaps */
    xmm6 = xmm0; /* movaps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm0, 0xAA); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm6); /* mulps */
    xmm6 = xmm0; /* movaps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm0, 0x55); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm6); /* mulps */
    xmm6 = xmm0; /* movaps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm6); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm2); /* addps */
    xmm1 = XMM_ADD(xmm1, xmm3); /* addps */
    XMM_STORE(esp + 0x3C0, xmm1); /* movaps */
    xmm0 = XMM_MEM(eax + 0xC0); /* movaps */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    XMM_STORE(esp + 0x3B0, xmm0); /* movaps */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001D4ADA; /* jnp: not parity */

loc_001D4AA3: ;
    eax = MEM32(esi + 0x18);
    fp_push(MEMF(eax + 0x10)); /* fld float */
    ecx = MEM32(esi + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x198)); /* fmul dword ptr [esi + 0x198] */
    xmm1 = XMM_MEM(ecx + 0x20); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm2 = XMM_MUL(xmm2, xmm4); /* mulps */
    xmm5 = XMM_ADD(xmm5, xmm2); /* addps */
    XMM_STORE(esp + 0x340, xmm5); /* movaps */

loc_001D4ADA: ;
    edx = MEM32(edi);
    eax = MEM32(edi + 4);
    ecx = esi + 0x118;
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = edx;
    edx = esp + 0x274;
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, edx);
    eax = esi + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D4B04u); RECOMP_ABI_CALL(0x00235E00u, sub_00235E00); /* call 0x00235E00 */

loc_001D4B04: ;
    xmm0 = XMM_MEM(esp + 0x350); /* movaps */
    edx = MEM32(esi + 0x30);
    edi = MEM32(edx + 0x3C);
    xmm2 = XMM_MEM(edi + 0xA0); /* movaps */
    xmm3 = XMM_MEM(edi + 0x90); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xAA); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(edi + 0x80); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    ecx = esp + 0x20;
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x001D4B5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4B5Cu); } /* indirect call */
    }

loc_001D4B5F: ;
    edx = MEM32(edi);
    eax = esp + 0x330;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001D4B6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4B6Bu); } /* indirect call */
    }

loc_001D4B6E: ;
    ecx = MEM32(ebx + 0x64);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001D4C5F; /* jle: less or equal (signed <=) */

loc_001D4B7F: ;
    ecx = esp + 0x2A0;
    MEM32(esp + 0x14) = ecx;
    /* nop */

loc_001D4B90: ;
    ecx = MEM32(esp + eax * 4 + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4C44; /* je: equal / zero */

loc_001D4B9C: ;
    SET_LO8(edx, MEM8(ecx + 0x40));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4C44; /* jne: not equal / not zero */

loc_001D4BA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4BB9; /* je: equal / zero */

loc_001D4BAB: ;
    edx = MEM32(esp + 0x40);
    _fa = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x3C), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4C44; /* je: equal / zero */

loc_001D4BB9: ;
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax);
    xmm3 = XMM_MEM(eax + 0x70); /* movaps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    xmm2 = XMM_MEM(eax + 0x50); /* movaps */
    xmm5 = XMM_MEM(eax + 0x60); /* movaps */
    edi = MEM32(ecx + 0x3C);
    xmm4 = xmm3; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm3, 0x44); /* shufps */
    xmm7 = xmm3; /* movaps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm5, 0x44); /* shufps */
    xmm7 = XMM_SHUFFLE(xmm7, xmm3, 0xEE); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm5, 0xEE); /* shufps */
    xmm5 = xmm0; /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0x55); /* shufps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm4, 0xDD); /* shufps */
    xmm5 = XMM_MUL(xmm5, xmm3); /* mulps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm4, 0x88); /* shufps */
    xmm3 = xmm1; /* movaps */
    xmm6 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm3); /* mulps */
    xmm6 = XMM_SHUFFLE(xmm6, xmm1, 0xAA); /* shufps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm7, 0x88); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm6); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm5); /* addps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    eax = esp + 0x20;
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001D4C2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4C2Cu); } /* indirect call */
    }

loc_001D4C2F: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax);
    edx = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001D4C40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4C3Du); } /* indirect call */
    }

loc_001D4C40: ;
    eax = MEM32(esp + 0x10);

loc_001D4C44: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(ebx + 0x64);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x50;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001D4B90; /* jl: less (signed <) */

loc_001D4C5F: ;
    eax = MEM32(ebx + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D4DF9; /* jle: less or equal (signed <=) */

loc_001D4C6C: ;
    MEM32(esp + 0x18) = edx;

loc_001D4C70: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x80);
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx + 0x58);
    eax = MEM32(eax + edx * 4);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ecx + 0x80)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x80), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4DB9; /* je: equal / zero */

loc_001D4C98: ;
    _fa = (uint32_t)(MEM8(ecx + 0xAC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0xAC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4DB9; /* je: equal / zero */

loc_001D4CA5: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    goto loc_001D4DBF;

loc_001D4CAD: ;
    edx = MEM32(esp + esi + 0x70);
    xmm0 = XMM_MEM(esp + esi + 0x80); /* movaps */
    MEM32(esp + esi + 0x170) = edx;
    eax = esp + esi + 0x74;
    edx = MEM32(eax);
    eax = MEM32(eax + 4);
    ecx = esp + esi + 0x174;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 4) = eax;
    SET_LO8(ecx, MEM8(esp + esi + 0x7C));
    XMM_STORE(esp + esi + 0x180, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + esi + 0x90); /* movaps */
    XMM_STORE(esp + esi + 0x190, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + esi + 0xA0); /* movaps */
    XMM_STORE(esp + esi + 0x1A0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + esi + 0xB0); /* movaps */
    XMM_STORE(esp + esi + 0x1B0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + esi + 0xC0); /* movaps */
    XMM_STORE(esp + esi + 0x1C0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + esi + 0xD0); /* movaps */
    XMM_STORE(esp + esi + 0x1D0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + esi + 0xE0); /* movaps */
    MEM8(esp + esi + 0x17C) = LO8(ecx);
    XMM_STORE(esp + esi + 0x1E0, xmm0); /* movaps */
    xmm0 = XMM_MEM(edi + 0xF0); /* movaps */
    XMM_STORE(esp + esi + 0x190, xmm0); /* movaps */
    xmm0 = XMM_MEM(edi + 0xE0); /* movaps */
    eax = esp + esi + 0x170;
    XMM_STORE(esp + esi + 0x180, xmm0); /* movaps */
    MEM32(edx + 0x14) = eax;
    goto loc_001D4932;

loc_001D4D79: ;
    MEM8(eax) = 2;
    XMM_STORE(esp + esi + 0xA0, xmm3); /* movaps */
    XMM_STORE(esp + esi + 0x80, xmm3); /* movaps */
    XMM_STORE(esp + esi + 0x90, xmm3); /* movaps */
    XMM_STORE(esp + esi + 0xB0, xmm3); /* movaps */
    XMM_STORE(esp + esi + 0xC0, xmm3); /* movaps */
    XMM_STORE(esp + esi + 0xD0, xmm3); /* movaps */
    XMM_STORE(esp + esi + 0xE0, xmm3); /* movaps */
    goto loc_001D493B;

loc_001D4DB9: ;
    fp_push(MEMF(0x2DC098)); /* fld float */

loc_001D4DBF: ;
    MEMF(ecx + 0x98) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(eax + 0xC);
    MEM32(ecx + 0x9C) = edi;
    edi = MEM32(eax + 4);
    MEM32(ecx + 0xA4) = edi;
    eax = MEM32(eax);
    MEM32(ecx + 0xA0) = eax;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ebx + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D4C70; /* jl: less (signed <) */

loc_001D4DF9: ;
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
 * sub_001D4E10
 * Original: 0x001D4E10 - 0x001D4F0A (250 bytes, 84 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D4E10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246576);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x001D4E3Au); RECOMP_ABI_CALL(0x001D5950u, sub_001D5950); /* call 0x001D5950 */

loc_001D4E3A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2FA050;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = 0x2FA048;
    MEM32(esi + 0x40) = ebx;
    eax = esi + 0x118;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = ebx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi + 0x180;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(edi) = ebx;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = 0x80000000u;
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(esp + 0x20) = 1;
    PUSH32(esp, 0x001D4E9Du); RECOMP_ABI_CALL(0x001D3CE0u, sub_001D3CE0); /* call 0x001D3CE0 */

loc_001D4E9D: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(ebp + 0x54);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001D4EC8; /* jge: greater or equal (signed >=) */

loc_001D4EB0: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D4EB8; /* jl: less (signed <) */

loc_001D4EB6: ;
    eax = ecx;

loc_001D4EB8: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D4EC1u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001D4EC1: ;
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D4EC8: ;
    MEM32(edi + 4) = ecx;
    _fa = (uint32_t)(MEM32(ebp + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x54), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D4EE3; /* jle: less or equal (signed <=) */

loc_001D4ED0: ;
    eax = MEM32(ebp + 0x50);
    edx = MEM32(eax + ebx * 4);
    ecx = MEM32(edi);
    MEM32(ecx + ebx * 4) = edx;
    eax = MEM32(ebp + 0x54);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D4ED0; /* jl: less (signed <) */

loc_001D4EE3: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 8);
    eax = MEM32(esi + 0x30);
    MEM32(esi + 0x44) = ecx;
    MEM16(eax + 6) = MEM16(eax + 6) + 1;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D4F10
 * Original: 0x001D4F10 - 0x001D5011 (257 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D4F10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246576);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    MEM32(esi) = 0x2FA050;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001D4F73; /* je: equal / zero */

loc_001D4F43: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4F53; /* je: equal / zero */

loc_001D4F4A: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D4F53u); RECOMP_ABI_CALL(0x001BF2B0u, sub_001BF2B0); /* call 0x001BF2B0 */

loc_001D4F53: ;
    ecx = MEM32(esi + 0x38);
    eax = esi + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D4F5Fu); RECOMP_ABI_CALL(0x001CE760u, sub_001CE760); /* call 0x001CE760 */

loc_001D4F5F: ;
    ecx = MEM32(esi + 0x38);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4F73; /* jne: not equal / not zero */

loc_001D4F6D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001D4F73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4F71u); } /* indirect call */
    }

loc_001D4F73: ;
    ecx = MEM32(esi + 0x30);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4F87; /* jne: not equal / not zero */

loc_001D4F81: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001D4F87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4F85u); } /* indirect call */
    }

loc_001D4F87: ;
    eax = MEM32(esi + 0x184);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4FC5; /* je: equal / zero */

loc_001D4F91: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D4FC5; /* jle: less or equal (signed <=) */

loc_001D4F97: ;
    goto loc_001D4FA0;

    /* nop */

loc_001D4FA0: ;
    ecx = MEM32(esi + 0x180);
    ecx = MEM32(ecx + edi * 4);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D4FBA; /* jne: not equal / not zero */

loc_001D4FB4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001D4FBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4FB8u); } /* indirect call */
    }

loc_001D4FBA: ;
    eax = MEM32(esi + 0x184);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D4FA0; /* jl: less (signed <) */

loc_001D4FC5: ;
    eax = MEM32(esi + 0x188);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D4FF1; /* js: sign (negative) */

loc_001D4FD4: ;
    edx = MEM32(esi + 0x180);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D4FF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D4FEEu); } /* indirect call */
    }

loc_001D4FF1: ;
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001D5000u); RECOMP_ABI_CALL(0x001D57D0u, sub_001D57D0); /* call 0x001D57D0 */

loc_001D5000: ;
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
 * sub_001D5020
 * Original: 0x001D5020 - 0x001D5048 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D5020: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D5028u); RECOMP_ABI_CALL(0x001D4F10u, sub_001D4F10); /* call 0x001D4F10 */

loc_001D5028: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D5042; /* je: equal / zero */

loc_001D502F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D5042u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D503Fu); } /* indirect call */
    }

loc_001D5042: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D5050
 * Original: 0x001D5050 - 0x001D570A (1722 bytes, 455 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D5050(void)
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

loc_001D5050: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246596);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x30);
    eax = MEM32(eax + 0x3C);
    esi = MEM32(edi + 0xC);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x34) = eax;
    eax = MEM32(edi + 0x28);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x18) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_001D5159; /* jle: less or equal (signed <=) */

loc_001D50A0: ;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = ebx;
    goto loc_001D50B0;

    /* nop */

loc_001D50B0: ;
    ecx = MEM32(edi + 0xC);
    esi = MEM32(ecx + 0x80);
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x28);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx + 0x1C);
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    ecx = esi + 0x50;
    PUSH32(esp, edx);
    MEM32(esp + 0x2C) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D50DCu); RECOMP_ABI_CALL(0x001CF840u, sub_001CF840); /* call 0x001CF840 */

loc_001D50DC: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x34);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D50F6u); RECOMP_ABI_CALL(0x001CF700u, sub_001CF700); /* call 0x001CF700 */

loc_001D50F6: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(eax + 0x28);
    fp_push(MEMF(ecx + ebx * 4)); /* fld float */
    eax = MEM32(esp + 0x18);
    edx = MEM32(eax + 0x10);
    fp_push(MEMF(edx + ebx * 4)); /* fld float */
    ecx = MEM32(esp + 0x24);
    xmm1 = XMM_MEM(ecx); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    edx = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    fp_pop(); /* fstp st(0) */
    xmm1 = XMM_MEM(esi); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(esi + 0x10, xmm1); /* movaps */
    esi = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001D50B0; /* jl: less (signed <) */

loc_001D5155: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax;

loc_001D5159: ;
    edx = MEM32(edi);
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001D5165u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5162u); } /* indirect call */
    }

loc_001D5165: ;
    ecx = MEM32(edi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D517B; /* je: equal / zero */

loc_001D516C: ;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D5176u); RECOMP_ABI_CALL(0x00236A80u, sub_00236A80); /* call 0x00236A80 */

loc_001D5176: ;
    goto loc_001D523B;

loc_001D517B: ;
    ecx = esp + 0x70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D5184u); RECOMP_ABI_CALL(0x00236F80u, sub_00236F80); /* call 0x00236F80 */

loc_001D5184: ;
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    eax = MEM32(edi + 0x44);
    ecx = MEM32(0x4409AC);
    XMM_STORE(esp + 0x90, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x60); /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2C);
    XMM_STORE(esp + 0xA4, xmm0); /* movaps */
    MEM32(esp + 0x74) = eax;
    edx = MEM32(ecx);
    PUSH32(esp, 0x90);
    MEM32(esp + 0xE4) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D51BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D51BBu); } /* indirect call */
    }

loc_001D51BE: ;
    MEM16(eax + 4) = 0x90;
    MEM32(esp + 0x2C) = eax;
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM8(esp + 0xE0) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D51DCu); RECOMP_ABI_CALL(0x00236DB0u, sub_00236DB0); /* call 0x00236DB0 */

loc_001D51DC: ;
    edx = MEM32(edi + 0x30);
    ecx = edi + 0x3C;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    MEM8(esp + 0xE0) = 0;
    MEM32(edi + 0x38) = eax;
    MEM32(edi + 0x40) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D51FBu); RECOMP_ABI_CALL(0x001CE7F0u, sub_001CE7F0); /* call 0x001CE7F0 */

loc_001D51FB: ;
    edx = MEM32(edi + 0x38);
    ecx = MEM32(edi + 0x34);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D5207u); RECOMP_ABI_CALL(0x001BF180u, sub_001BF180); /* call 0x001BF180 */

loc_001D5207: ;
    eax = MEM32(esp + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xDC) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D523B; /* js: sign (negative) */

loc_001D521D: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x84);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D523Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5238u); } /* indirect call */
    }

loc_001D523B: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebx (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_001D5500; /* jle: less or equal (signed <=) */

loc_001D5248: ;
    MEM32(esp + 0x1C) = ebx;
    /* nop */

loc_001D5250: ;
    ecx = MEM32(edi + 0xC);
    esi = MEM32(ecx + 0x80);
    edx = MEM32(esp + 0x1C);
    eax = esp + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esp + 0x8C) = 0x3F800000;
    MEM32(esp + 0x98) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x001D5282u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D527Fu); } /* indirect call */
    }

loc_001D5282: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx + 0x28);
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(edx + ebx * 4)); /* fld float */
    ecx = MEM32(eax + 0x10);
    fp_push(MEMF(ecx + ebx * 4)); /* fld float */
    eax = MEM32(esp + 0x90);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D548A; /* je: equal / zero */

loc_001D52AB: ;
    xmm0 = XMM_MEM(esp + 0x70); /* movaps */
    XMM_STORE(esi + 0x30, xmm0); /* movaps */
    eax = MEM32(esp + 0x90);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D52C6; /* jne: not equal / not zero */

loc_001D52C1: ;
    ebx = MEM32(eax + 0x20);
    goto loc_001D52C8;

loc_001D52C6: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D52C8: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    MEM32(esi + 0xA8) = ebx;
    SET_LO8(eax, MEM8(ebx + 0x40));
    MEM8(esi + 0xAC) = LO8(eax);
    MEM8(esi + 0x80) = 1;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x84)); /* fmul dword ptr [esp + 0x84] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    ecx = ebx;
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(esi); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(esi + 0x20, xmm0); /* movaps */
    edx = MEM32(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D531Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D531Cu); } /* indirect call */
    }

loc_001D531F: ;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x24) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esi + 0x8C) = edx;
    eax = MEM32(edi);
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x001D5341u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D533Eu); } /* indirect call */
    }

loc_001D5341: ;
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    eax = MEM32(esp + 0x24);
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    ecx = esp + 0x20;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    edx = MEM32(esp + 0x20);
    MEM32(esi + 0x88) = eax;
    MEM32(esp + 0x10) = edx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D53DE; /* jne: not equal / not zero */

loc_001D538D: ;
    xmm1 = XMM_MEM(esi + 0x30); /* movaps */
    MEM32(esp + 0x3C) = 0xBF800000u;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(esi + 0x30, xmm2); /* movaps */
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    eax = esp + 0x38;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x10) = ecx;

loc_001D53DE: ;
    edx = MEM32(edi + 0x30);
    ecx = MEM32(edx + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001D53F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D53EFu); } /* indirect call */
    }

loc_001D53F2: ;
    ebx = MEM32(ebx + 0x3C);
    edx = MEM32(ebx);
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001D5405u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5402u); } /* indirect call */
    }

loc_001D5405: ;
    fp_push(MEMF(edi + 0x150)); /* fld float */
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    fp_top() = -fp_top(); /* fchs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    xmm1 = XMM_MEM(esp + 0x40); /* movaps */
    ebx = MEM32(esp + 0x14);
    xmm1 = XMM_SUB(xmm1, xmm0); /* subps */
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    xmm1 = xmm0; /* movaps */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    ecx = esp + 0x2C;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D546C; /* jp: parity */

loc_001D544E: ;
    fp_push(MEMF(0x2DC08C)); /* fld float */
    MEM32(esi + 0xB8) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(edi + 0x150)); /* fdiv dword ptr [edi + 0x150] */
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001D54DA;

loc_001D546C: ;
    fp_push(MEMF(0x2DC3A0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x10)); /* fdiv dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esi + 0xB8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001D54DA;

loc_001D548A: ;
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    MEM8(esi + 0x80) = 0;
    MEM8(esi + 0xAC) = 1;
    MEM32(esi + 0xA8) = ecx;
    MEM32(esi + 0xB8) = ecx;
    XMM_STORE(esi + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x2F6A30); /* movaps */
    xmm1 = XMM_XOR(xmm1, xmm0); /* xorps */
    XMM_STORE(esi + 0x30, xmm1); /* movaps */
    MEM32(esi + 0x88) = ecx;
    MEM32(esi + 0x8C) = ecx;
    MEM32(esi + 0xB0) = 0x3F800000;

loc_001D54DA: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx + 0xC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x1C) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D5250; /* jl: less (signed <) */

loc_001D54FC: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edx;

loc_001D5500: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0xC8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D5518u); RECOMP_ABI_CALL(0x001CF840u, sub_001CF840); /* call 0x001CF840 */

loc_001D5518: ;
    edx = MEM32(edi + 0x30);
    eax = MEM32(edx + 0x3C);
    xmm1 = XMM_MEM(esp + 0xC0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebx (32-bit) */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    ecx = esp + 0x2C;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_001D56F3; /* jle: less or equal (signed <=) */

loc_001D5554: ;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x1C) = ebx;
    /* nop */

loc_001D5560: ;
    edx = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(edx + 0x80);
    eax = MEM32(edi + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM8(ebx + ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D55A8; /* jne: not equal / not zero */

loc_001D557B: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    edx = MEM32(esp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xA0)); /* fadd dword ptr [esi + 0xa0] */
    eax = MEM32(edx + 0x10);
    ecx = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(eax + ebx * 4)); /* fdiv dword ptr [eax + ebx*4] */
    MEMF(esi + 0x90) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x94)); /* fadd dword ptr [esi + 0x94] */
    MEMF(esi + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001D55B2;

loc_001D55A8: ;
    MEM32(esi + 0x90) = 0;

loc_001D55B2: ;
    edx = MEM32(edi + 0x18);
    eax = MEM32(edx + 0x14);
    fp_push(MEMF(eax + ebx * 4)); /* fld float */
    ecx = MEM32(esp + 0x28);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx + 0x1C);
    xmm1 = XMM_MEM(edx + eax); /* movaps */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    fp_push(MEMF(0x2DC098)); /* fld float */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(esp + 0x40, xmm2); /* movaps */
    MEM32(esp + 0x4C) = 0x3F800000;
    xmm2 = XMM_MEM(esp + 0x40); /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0x4E); /* shufps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xB1); /* shufps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001D566E; /* jnp: not parity */

loc_001D5628: ;
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    xmm1.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x50); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEM32(esp + 0x3C) = 0x40400000;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x20) = 0x3F000000;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    goto loc_001D567C;

loc_001D566E: ;
    MEM32(esp + 0x24) = 0;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */

loc_001D567C: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    XMM_STORE(esi + 0x70, xmm0); /* movaps */
    ecx = MEM32(edi + 0x10);
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    XMM_STORE(esi + 0x40, xmm0); /* movaps */
    edx = MEM32(edi + 0x10);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0xB8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D56B5u); RECOMP_ABI_CALL(0x00029F10u, sub_00029F10); /* call 0x00029F10 */

loc_001D56B5: ;
    edx = MEM32(esp + 0x34);
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi + 0x60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D56CAu); RECOMP_ABI_CALL(0x001CF840u, sub_001CF840); /* call 0x001CF840 */

loc_001D56CA: ;
    esi = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 0xC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001D5560; /* jl: less (signed <) */

loc_001D56F3: ;
    ecx = MEM32(esp + 0xD4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
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
 * sub_001D5710
 * Original: 0x001D5710 - 0x001D5752 (66 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5710(void)
{

loc_001D5710: ;
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(ecx + 0x30);
    MEM32(eax + 0x24) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D5760
 * Original: 0x001D5760 - 0x001D57CC (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5760(void)
{

loc_001D5760: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x1C) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 0x2C) = edx;
    eax = MEM32(eax + 0x24);
    edx = MEM32(ecx + 0x14);
    MEM32(ecx + 0x30) = eax;
    MEM32(edx + 8) = ecx;
    eax = MEM32(ecx + 0x18);
    MEM32(eax + 8) = ecx;
    edx = MEM32(ecx + 0x1C);
    MEM32(edx + 8) = ecx;
    eax = MEM32(ecx + 0x20);
    MEM32(eax + 8) = ecx;
    edx = MEM32(ecx + 0x24);
    MEM32(edx + 8) = ecx;
    eax = MEM32(ecx + 0x28);
    MEM32(eax + 8) = ecx;
    edx = MEM32(ecx + 0x2C);
    MEM32(edx + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D57D0
 * Original: 0x001D57D0 - 0x001D588F (191 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D57D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D57D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2465A8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2FA078;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001D5808; /* je: equal / zero */

loc_001D5802: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001D5808u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5806u); } /* indirect call */
    }

loc_001D5808: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5815; /* je: equal / zero */

loc_001D580F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001D5815u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5813u); } /* indirect call */
    }

loc_001D5815: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5822; /* je: equal / zero */

loc_001D581C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001D5822u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5820u); } /* indirect call */
    }

loc_001D5822: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D582F; /* je: equal / zero */

loc_001D5829: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001D582Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D582Du); } /* indirect call */
    }

loc_001D582F: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D583C; /* je: equal / zero */

loc_001D5836: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001D583Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D583Au); } /* indirect call */
    }

loc_001D583C: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5849; /* je: equal / zero */

loc_001D5843: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001D5849u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5847u); } /* indirect call */
    }

loc_001D5849: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5856; /* je: equal / zero */

loc_001D5850: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001D5856u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5854u); } /* indirect call */
    }

loc_001D5856: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5863; /* je: equal / zero */

loc_001D585D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001D5863u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5861u); } /* indirect call */
    }

loc_001D5863: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5870; /* je: equal / zero */

loc_001D586A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001D5870u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D586Eu); } /* indirect call */
    }

loc_001D5870: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001D587Fu); RECOMP_ABI_CALL(0x00015C50u, sub_00015C50); /* call 0x00015C50 */

loc_001D587F: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D5890
 * Original: 0x001D5890 - 0x001D594C (188 bytes, 70 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5890(void)
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

loc_001D5890: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x4409E8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x4409E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_001D58C0; /* jae: above or equal (unsigned >=) */

loc_001D58A4: ;
    MEM32(ecx) = 0x2FA094;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001D58C0: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    edi = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D58D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D58D1u); } /* indirect call */
    }

loc_001D58D4: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D58DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D58DAu); } /* indirect call */
    }

loc_001D58DD: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D58E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D58E3u); } /* indirect call */
    }

loc_001D58E6: ;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D58EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D58ECu); } /* indirect call */
    }

loc_001D58EF: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D58F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D58F5u); } /* indirect call */
    }

loc_001D58F8: ;
    ecx = MEM32(esi + 0x24);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D5901u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D58FEu); } /* indirect call */
    }

loc_001D5901: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D590Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5907u); } /* indirect call */
    }

loc_001D590A: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D5913u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5910u); } /* indirect call */
    }

loc_001D5913: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001D591Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5918u); } /* indirect call */
    }

loc_001D591B: ;
    eax = MEM32(0x4409E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4409E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x4409E8) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_001D5948; /* jae: above or equal (unsigned >=) */

loc_001D592A: ;
    ecx = eax;
    MEM32(ecx) = 0x2F19C0;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4409E4) = ecx;

loc_001D5948: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D5950
 * Original: 0x001D5950 - 0x001D5972 (34 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5950(void)
{

loc_001D5950: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    MEM16(ecx + 6) = 1;
    MEM32(ecx) = 0x2FA078;
    MEM32(ecx + 8) = 0;
    PUSH32(esp, 0x001D596Du); RECOMP_ABI_CALL(0x001D5760u, sub_001D5760); /* call 0x001D5760 */

loc_001D596D: ;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D5980
 * Original: 0x001D5980 - 0x001D59A8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D5980: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D5988u); RECOMP_ABI_CALL(0x001D57D0u, sub_001D57D0); /* call 0x001D57D0 */

loc_001D5988: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D59A2; /* je: equal / zero */

loc_001D598F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D59A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D599Fu); } /* indirect call */
    }

loc_001D59A2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D59B0
 * Original: 0x001D59B0 - 0x001D59C8 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D59B0(void)
{

loc_001D59B0: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x10);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D59D0
 * Original: 0x001D59D0 - 0x001D59E8 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D59D0(void)
{

loc_001D59D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0xC) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D59F0
 * Original: 0x001D59F0 - 0x001D5A18 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D59F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D59F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D59F8u); RECOMP_ABI_CALL(0x001D5B20u, sub_001D5B20); /* call 0x001D5B20 */

loc_001D59F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D5A12; /* je: equal / zero */

loc_001D59FF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D5A12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5A0Fu); } /* indirect call */
    }

loc_001D5A12: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D5A20
 * Original: 0x001D5A20 - 0x001D5AEC (204 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D5A20(void)
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

loc_001D5A20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    PUSH32(esp, esi);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    esi = MEM32(eax + 0x30);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    edx = MEM32(esi + 0x3C);
    xmm1 = XMM_MEM(edx + 0x50); /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm3 = xmm0; /* movaps */
    eax = esp + 0xC;
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D5A7B; /* jne: not equal / not zero */

loc_001D5A71: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    ecx = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    goto loc_001D5A83;

loc_001D5A7B: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    edx = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */

loc_001D5A83: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) - fp_top()); /* fsubr dword ptr [0x2dc08c] */
    fp_push(MEMF(0x2DC098)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D5AA0; /* jne: not equal / not zero */

loc_001D5A98: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2DC098)); /* fld float */

loc_001D5AA0: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    eax = esp + 0xB;
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    PUSH32(esp, eax);
    ecx = esi;
    XMM_STORE(esp + 0x14, xmm2); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D5AC5u); RECOMP_ABI_CALL(0x001C2870u, sub_001C2870); /* call 0x001C2870 */

loc_001D5AC5: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D5AD8; /* jne: not equal / not zero */

loc_001D5ACA: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5AD8; /* je: equal / zero */

loc_001D5AD1: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D5AD8u); RECOMP_ABI_CALL(0x001C2890u, sub_001C2890); /* call 0x001C2890 */

loc_001D5AD8: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001D5AE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5AE2u); } /* indirect call */
    }

loc_001D5AE5: ;
    POP32(esp, esi);
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
 * sub_001D5AF0
 * Original: 0x001D5AF0 - 0x001D5B16 (38 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5AF0(void)
{

loc_001D5AF0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2FA0B8;
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x10) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D5B20
 * Original: 0x001D5B20 - 0x001D5B2B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5B20: ;
    MEM32(ecx) = 0x2FA0A0;
    g_seh_ebp = ebp; sub_00015C50(); return; /* tail jmp 0x00015C50 */

}

/**
 * sub_001D5B30
 * Original: 0x001D5B30 - 0x001D5B62 (50 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5B30(void)
{

loc_001D5B30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001D5B3Eu); RECOMP_ABI_CALL(0x00087D20u, sub_00087D20); /* call 0x00087D20 */

loc_001D5B3E: ;
    eax = MEM32(esi + 0x30);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 0x34);
    MEM32(edi + 4) = ecx;
    edx = MEM32(esi + 0x38);
    MEM32(edi + 8) = edx;
    eax = MEM32(esi + 0x3C);
    MEM32(edi + 0xC) = eax;
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(edi + 0x10, xmm0); /* movaps */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D5B70
 * Original: 0x001D5B70 - 0x001D5BA2 (50 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5B70(void)
{

loc_001D5B70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001D5B7Eu); RECOMP_ABI_CALL(0x001D89D0u, sub_001D89D0); /* call 0x001D89D0 */

loc_001D5B7E: ;
    eax = MEM32(edi);
    MEM32(esi + 0x30) = eax;
    ecx = MEM32(edi + 4);
    MEM32(esi + 0x34) = ecx;
    edx = MEM32(edi + 8);
    MEM32(esi + 0x38) = edx;
    eax = MEM32(edi + 0xC);
    MEM32(esi + 0x3C) = eax;
    xmm0 = XMM_MEM(edi + 0x10); /* movaps */
    POP32(esp, edi);
    XMM_STORE(esi + 0x40, xmm0); /* movaps */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D5BB0
 * Original: 0x001D5BB0 - 0x001D5BBB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5BB0: ;
    MEM32(ecx) = 0x2F9F4C;
    g_seh_ebp = ebp; sub_00015C50(); return; /* tail jmp 0x00015C50 */

}

/**
 * sub_001D5BC0
 * Original: 0x001D5BC0 - 0x001D5BFA (58 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5BC0(void)
{

loc_001D5BC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001D5BCEu); RECOMP_ABI_CALL(0x001D89E0u, sub_001D89E0); /* call 0x001D89E0 */

loc_001D5BCE: ;
    MEM32(esi) = 0x2FA0D0;
    eax = MEM32(edi);
    MEM32(esi + 0x30) = eax;
    ecx = MEM32(edi + 4);
    MEM32(esi + 0x34) = ecx;
    edx = MEM32(edi + 8);
    MEM32(esi + 0x38) = edx;
    eax = MEM32(edi + 0xC);
    MEM32(esi + 0x3C) = eax;
    xmm0 = XMM_MEM(edi + 0x10); /* movaps */
    POP32(esp, edi);
    XMM_STORE(esi + 0x40, xmm0); /* movaps */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D5C00
 * Original: 0x001D5C00 - 0x001D5D64 (356 bytes, 102 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D5C00(void)
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

loc_001D5C00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 8);
    edx = MEM32(eax + 0x10);
    xmm0 = XMM_MEM(edx + 0x10); /* movaps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xAA); /* shufps */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x30);
    eax = MEM32(esi + 0x3C);
    xmm2 = XMM_MEM(eax + 0xA0); /* movaps */
    xmm3 = XMM_MEM(eax + 0x90); /* movaps */
    xmm1 = XMM_MEM(eax + 0x80); /* movaps */
    xmm5 = xmm2; /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm4); /* mulps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0x55); /* shufps */
    xmm6 = xmm3; /* movaps */
    xmm6 = XMM_MUL(xmm6, xmm4); /* mulps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0); /* shufps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm4); /* mulps */
    xmm4 = xmm0; /* movaps */
    xmm0 = XMM_MEM(edx + 0x20); /* movaps */
    xmm4 = XMM_ADD(xmm4, xmm6); /* addps */
    xmm4 = XMM_ADD(xmm4, xmm5); /* addps */
    xmm5 = xmm0; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0xAA); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm5); /* mulps */
    xmm5 = xmm0; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0x55); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm5); /* mulps */
    xmm5 = xmm0; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm4); /* mulps */
    xmm1 = XMM_MUL(xmm1, xmm5); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm3); /* addps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0x55); /* shufps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm5 = xmm0; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0xAA); /* shufps */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    eax = esp + 8;
    MEMF(eax) = xmm5.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    xmm1 = XMM_ADD(xmm1, xmm2); /* addps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x38)); /* fmul dword ptr [ecx + 0x38] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x34)); /* fmul dword ptr [ecx + 0x34] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x30)); /* fmul dword ptr [ecx + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD6C0)); /* fmul dword ptr [0x2dd6c0] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x3C)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x34)); /* fmul dword ptr [ecx + 0x34] */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm4); /* mulps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x30)); /* fmul dword ptr [ecx + 0x30] */
    XMM_STORE(ecx + 0x10, xmm3); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
    edx = MEM32(esi + 0x3C);
    fp_push(MEMF(edx + 0x2C)); /* fld float */
    fp_push(MEMF(0x2DC098)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D5D34; /* jp: parity */

loc_001D5D2A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2DC098)); /* fld float */
    goto loc_001D5D3A;

loc_001D5D34: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) / fp_top()); /* fdivr dword ptr [0x2dc08c] */

loc_001D5D3A: ;
    xmm1 = XMM_MEM(ecx + 0x40); /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm2); /* addps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
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
 * sub_001D5D70
 * Original: 0x001D5D70 - 0x001D5E2B (187 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001D5D70(void)
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

loc_001D5D70: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x30);
    edx = MEM32(eax + 0x3C);
    fp_push(MEMF(edx + 0x2C)); /* fld float */
    fp_push(MEMF(0x2DC098)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D5D9B; /* jp: parity */

loc_001D5D91: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x2DC098)); /* fld float */
    goto loc_001D5DA1;

loc_001D5D9B: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) / fp_top()); /* fdivr dword ptr [0x2dc08c] */

loc_001D5DA1: ;
    eax = MEM32(ecx + 0x40);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D5E25; /* jle: less or equal (signed <=) */

loc_001D5DAA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_001D5DB0: ;
    eax = MEM32(edi + 0x80);
    SET_LO8(ebx, MEM8(eax + esi + 0x80));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5E0B; /* je: equal / zero */

loc_001D5DC3: ;
    ebx = MEM32(ecx + 0x28);
    fp_push(MEMF(ebx + edx * 4)); /* fld float */
    ebx = MEM32(ecx + 0x44);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0xB4)); /* fsub dword ptr [eax + 0xb4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + edx * 4)); /* fmul dword ptr [ebx + edx*4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xB0)); /* fmul dword ptr [eax + 0xb0] */
    fp_push(MEMF(eax + 0xB8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D5DF3; /* jp: parity */

loc_001D5DEE: ;
    eax = MEM32(ecx + 0x50);
    goto loc_001D5DF6;

loc_001D5DF3: ;
    eax = MEM32(ecx + 0x5C);

loc_001D5DF6: ;
    fp_push(MEMF(eax + edx * 4)); /* fld float */
    eax = MEM32(ecx + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); /* fsubr st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    MEMF(eax + edx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    goto loc_001D5E15;

loc_001D5E0B: ;
    eax = MEM32(ecx + 0x34);
    MEM32(eax + edx * 4) = 0;

loc_001D5E15: ;
    eax = MEM32(ecx + 0x40);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D5DB0; /* jl: less (signed <) */

loc_001D5E23: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001D5E25: ;
    fp_pop(); /* fstp st(0) */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D5E30
 * Original: 0x001D5E30 - 0x001D609D (621 bytes, 226 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5E30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = MEM32(edi + 0x28);
    esi = ecx;
    MEM32(esi + 0x40) = eax;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(edi + 0x28);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D5E8A; /* jge: greater or equal (signed >=) */

loc_001D5E54: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D5E6D; /* js: sign (negative) */

loc_001D5E58: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D5E6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5E6Au); } /* indirect call */
    }

loc_001D5E6D: ;
    eax = MEM32(edi + 0x28);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D5E81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5E7Eu); } /* indirect call */
    }

loc_001D5E81: ;
    MEM32(esi + 0x44) = eax;
    ecx = MEM32(edi + 0x28);
    MEM32(esi + 0x4C) = ecx;

loc_001D5E8A: ;
    edx = MEM32(edi + 0x28);
    ecx = MEM32(esi + 0x44);
    MEM32(esi + 0x48) = edx;
    ebx = MEM32(edi + 0x28);
    ebp = MEM32(edi + 0x24);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D5EF5; /* jl: less (signed <) */

loc_001D5EA8: ;
    edx = ebp + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + 4;
    ecx = ebx + -4;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ebp;
    ebp = ecx * 4;
    MEM32(esp + 0x10) = ebp;

loc_001D5EC6: ;
    ebp = MEM32(edx + -12);
    MEM32(eax + -4) = ebp;
    ebp = MEM32(esp + 0x20);
    ebp = MEM32(eax + ebp);
    MEM32(eax) = ebp;
    ebp = MEM32(edx + -4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(edx);
    MEM32(eax + 8) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D5EC6; /* jne: not equal / not zero */

loc_001D5EE9: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x18);

loc_001D5EF5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D5F0B; /* jge: greater or equal (signed >=) */

loc_001D5EF9: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + edx * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001D5F00: ;
    ecx = MEM32(eax + ebp);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D5F00; /* jne: not equal / not zero */

loc_001D5F0B: ;
    ecx = MEM32(esi + 0x58);
    edx = MEM32(edi + 0x34);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D5F52; /* jge: greater or equal (signed >=) */

loc_001D5F1C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D5F35; /* js: sign (negative) */

loc_001D5F20: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x50);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D5F35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5F32u); } /* indirect call */
    }

loc_001D5F35: ;
    eax = MEM32(edi + 0x34);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D5F49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5F46u); } /* indirect call */
    }

loc_001D5F49: ;
    MEM32(esi + 0x50) = eax;
    ecx = MEM32(edi + 0x34);
    MEM32(esi + 0x58) = ecx;

loc_001D5F52: ;
    edx = MEM32(edi + 0x34);
    ecx = MEM32(esi + 0x50);
    MEM32(esi + 0x54) = edx;
    ebx = MEM32(edi + 0x34);
    ebp = MEM32(edi + 0x30);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D5FBF; /* jl: less (signed <) */

loc_001D5F70: ;
    edx = ebp + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + 4;
    ecx = ebx + -4;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ebp;
    ebp = ecx * 4;
    MEM32(esp + 0x18) = ebp;
    edi = edi;

loc_001D5F90: ;
    ebp = MEM32(edx + -12);
    MEM32(eax + -4) = ebp;
    ebp = MEM32(esp + 0x20);
    ebp = MEM32(eax + ebp);
    MEM32(eax) = ebp;
    ebp = MEM32(edx + -4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(edx);
    MEM32(eax + 8) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D5F90; /* jne: not equal / not zero */

loc_001D5FB3: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x10);

loc_001D5FBF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D5FDB; /* jge: greater or equal (signed >=) */

loc_001D5FC3: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + edx * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001D5FD0: ;
    ecx = MEM32(eax + ebp);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D5FD0; /* jne: not equal / not zero */

loc_001D5FDB: ;
    ecx = MEM32(esi + 0x64);
    edx = MEM32(edi + 0x40);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D6022; /* jge: greater or equal (signed >=) */

loc_001D5FEC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D6005; /* js: sign (negative) */

loc_001D5FF0: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x5C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D6005u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6002u); } /* indirect call */
    }

loc_001D6005: ;
    eax = MEM32(edi + 0x40);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D6019u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6016u); } /* indirect call */
    }

loc_001D6019: ;
    MEM32(esi + 0x5C) = eax;
    ecx = MEM32(edi + 0x40);
    MEM32(esi + 0x64) = ecx;

loc_001D6022: ;
    edx = MEM32(edi + 0x40);
    MEM32(esi + 0x60) = edx;
    ebx = MEM32(edi + 0x40);
    edi = MEM32(edi + 0x3C);
    esi = MEM32(esi + 0x5C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001D607D; /* jl: less (signed <) */

loc_001D603C: ;
    ecx = ebx + -4;
    edx = edi + 0xC;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi + 4;
    MEM32(esp + 0x20) = edi;
    ebp = ecx * 4;

loc_001D6056: ;
    edi = MEM32(edx + -12);
    MEM32(eax + -4) = edi;
    edi = MEM32(esp + 0x20);
    edi = MEM32(edi + eax);
    MEM32(eax) = edi;
    edi = MEM32(edx + -4);
    MEM32(eax + 4) = edi;
    edi = MEM32(edx);
    MEM32(eax + 8) = edi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D6056; /* jne: not equal / not zero */

loc_001D6079: ;
    edi = MEM32(esp + 0x18);

loc_001D607D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D6093; /* jge: greater or equal (signed >=) */

loc_001D6081: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + ebp * 4;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001D6088: ;
    ecx = MEM32(eax + edi);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D6088; /* jne: not equal / not zero */

loc_001D6093: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D60A0
 * Original: 0x001D60A0 - 0x001D630D (621 bytes, 226 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D60A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D60A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001D60B3u); RECOMP_ABI_CALL(0x001D8C40u, sub_001D8C40); /* call 0x001D8C40 */

loc_001D60B3: ;
    ecx = MEM32(edi + 0x2C);
    edx = MEM32(esi + 0x48);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D60FA; /* jge: greater or equal (signed >=) */

loc_001D60C4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D60DD; /* js: sign (negative) */

loc_001D60C8: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x24);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D60DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D60DAu); } /* indirect call */
    }

loc_001D60DD: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D60F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D60EEu); } /* indirect call */
    }

loc_001D60F1: ;
    MEM32(edi + 0x24) = eax;
    ecx = MEM32(esi + 0x48);
    MEM32(edi + 0x2C) = ecx;

loc_001D60FA: ;
    edx = MEM32(esi + 0x48);
    ecx = MEM32(edi + 0x24);
    MEM32(edi + 0x28) = edx;
    ebx = MEM32(esi + 0x48);
    ebp = MEM32(esi + 0x44);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D6165; /* jl: less (signed <) */

loc_001D6118: ;
    edx = ebp + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + 4;
    ecx = ebx + -4;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ebp;
    ebp = ecx * 4;
    MEM32(esp + 0x10) = ebp;

loc_001D6136: ;
    ebp = MEM32(edx + -12);
    MEM32(eax + -4) = ebp;
    ebp = MEM32(esp + 0x20);
    ebp = MEM32(eax + ebp);
    MEM32(eax) = ebp;
    ebp = MEM32(edx + -4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(edx);
    MEM32(eax + 8) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D6136; /* jne: not equal / not zero */

loc_001D6159: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x18);

loc_001D6165: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D617B; /* jge: greater or equal (signed >=) */

loc_001D6169: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + edx * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001D6170: ;
    ecx = MEM32(eax + ebp);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D6170; /* jne: not equal / not zero */

loc_001D617B: ;
    ecx = MEM32(edi + 0x38);
    edx = MEM32(esi + 0x54);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D61C2; /* jge: greater or equal (signed >=) */

loc_001D618C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D61A5; /* js: sign (negative) */

loc_001D6190: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x30);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D61A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D61A2u); } /* indirect call */
    }

loc_001D61A5: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D61B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D61B6u); } /* indirect call */
    }

loc_001D61B9: ;
    MEM32(edi + 0x30) = eax;
    ecx = MEM32(esi + 0x54);
    MEM32(edi + 0x38) = ecx;

loc_001D61C2: ;
    edx = MEM32(esi + 0x54);
    ecx = MEM32(edi + 0x30);
    MEM32(edi + 0x34) = edx;
    ebx = MEM32(esi + 0x54);
    ebp = MEM32(esi + 0x50);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D622F; /* jl: less (signed <) */

loc_001D61E0: ;
    edx = ebp + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + 4;
    ecx = ebx + -4;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ebp;
    ebp = ecx * 4;
    MEM32(esp + 0x18) = ebp;
    edi = edi;

loc_001D6200: ;
    ebp = MEM32(edx + -12);
    MEM32(eax + -4) = ebp;
    ebp = MEM32(esp + 0x20);
    ebp = MEM32(eax + ebp);
    MEM32(eax) = ebp;
    ebp = MEM32(edx + -4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(edx);
    MEM32(eax + 8) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D6200; /* jne: not equal / not zero */

loc_001D6223: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x10);

loc_001D622F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D624B; /* jge: greater or equal (signed >=) */

loc_001D6233: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + edx * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001D6240: ;
    ecx = MEM32(eax + ebp);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D6240; /* jne: not equal / not zero */

loc_001D624B: ;
    ecx = MEM32(edi + 0x44);
    edx = MEM32(esi + 0x60);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D6292; /* jge: greater or equal (signed >=) */

loc_001D625C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D6275; /* js: sign (negative) */

loc_001D6260: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D6275u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6272u); } /* indirect call */
    }

loc_001D6275: ;
    eax = MEM32(esi + 0x60);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D6289u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6286u); } /* indirect call */
    }

loc_001D6289: ;
    MEM32(edi + 0x3C) = eax;
    ecx = MEM32(esi + 0x60);
    MEM32(edi + 0x44) = ecx;

loc_001D6292: ;
    edx = MEM32(esi + 0x60);
    MEM32(edi + 0x40) = edx;
    ebx = MEM32(esi + 0x60);
    esi = MEM32(esi + 0x5C);
    edi = MEM32(edi + 0x3C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x18) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_001D62ED; /* jl: less (signed <) */

loc_001D62AC: ;
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
    MEM32(esp + 0x20) = esi;
    ebp = ecx * 4;

loc_001D62C6: ;
    esi = MEM32(edx + -12);
    MEM32(eax + -4) = esi;
    esi = MEM32(esp + 0x20);
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
    if ((_fa != 0)) goto loc_001D62C6; /* jne: not equal / not zero */

loc_001D62E9: ;
    esi = MEM32(esp + 0x18);

loc_001D62ED: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D6303; /* jge: greater or equal (signed >=) */

loc_001D62F1: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi + ebp * 4;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001D62F8: ;
    ecx = MEM32(eax + esi);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D62F8; /* jne: not equal / not zero */

loc_001D6303: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D6310
 * Original: 0x001D6310 - 0x001D632B (27 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6310(void)
{

loc_001D6310: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001D631Eu); RECOMP_ABI_CALL(0x001D8DF0u, sub_001D8DF0); /* call 0x001D8DF0 */

loc_001D631E: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D6326u); RECOMP_ABI_CALL(0x001D5E30u, sub_001D5E30); /* call 0x001D5E30 */

loc_001D6326: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D6330
 * Original: 0x001D6330 - 0x001D640F (223 bytes, 72 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D6330: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2465E9);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 3;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D6377; /* js: sign (negative) */

loc_001D635D: ;
    edx = MEM32(esi + 0x34);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D6377u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6374u); } /* indirect call */
    }

loc_001D6377: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 2;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D639D; /* js: sign (negative) */

loc_001D6383: ;
    edx = MEM32(esi + 0x28);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D639Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D639Au); } /* indirect call */
    }

loc_001D639D: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 1;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D63C3; /* js: sign (negative) */

loc_001D63A9: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D63C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D63C0u); } /* indirect call */
    }

loc_001D63C3: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D63E9; /* js: sign (negative) */

loc_001D63CF: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D63E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D63E6u); } /* indirect call */
    }

loc_001D63E9: ;
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM32(esi) = 0x2F9F4C;
    PUSH32(esp, 0x001D63FEu); RECOMP_ABI_CALL(0x00015C50u, sub_00015C50); /* call 0x00015C50 */

loc_001D63FE: ;
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
 * sub_001D6410
 * Original: 0x001D6410 - 0x001D6486 (118 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D6410: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246629);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x001D6438u); RECOMP_ABI_CALL(0x001D8E00u, sub_001D8E00); /* call 0x001D8E00 */

loc_001D6438: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2FA0E8;
    ecx = 0x80000000u;
    MEM32(esp + 0x14) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = ecx;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = ecx;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x64) = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(esp + 0x18) = 3;
    PUSH32(esp, 0x001D6471u); RECOMP_ABI_CALL(0x001D5E30u, sub_001D5E30); /* call 0x001D5E30 */

loc_001D6471: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D6490
 * Original: 0x001D6490 - 0x001D64B8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D6490: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D6498u); RECOMP_ABI_CALL(0x001D64C0u, sub_001D64C0); /* call 0x001D64C0 */

loc_001D6498: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D64B2; /* je: equal / zero */

loc_001D649F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D64B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D64AFu); } /* indirect call */
    }

loc_001D64B2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D64C0
 * Original: 0x001D64C0 - 0x001D6573 (179 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D64C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D64C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24665E);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = MEM32(esi + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 2;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D6507; /* js: sign (negative) */

loc_001D64ED: ;
    edx = MEM32(esi + 0x5C);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D6507u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6504u); } /* indirect call */
    }

loc_001D6507: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 1;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D652D; /* js: sign (negative) */

loc_001D6513: ;
    edx = MEM32(esi + 0x50);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D652Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D652Au); } /* indirect call */
    }

loc_001D652D: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D6553; /* js: sign (negative) */

loc_001D6539: ;
    edx = MEM32(esi + 0x44);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D6553u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6550u); } /* indirect call */
    }

loc_001D6553: ;
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001D6562u); RECOMP_ABI_CALL(0x001D6330u, sub_001D6330); /* call 0x001D6330 */

loc_001D6562: ;
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
 * sub_001D6580
 * Original: 0x001D6580 - 0x001D66CA (330 bytes, 115 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6580(void)
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

loc_001D6580: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x14);
    edx = MEM32(eax + 0x10);
    SET_LO8(eax, MEM8(eax + 0x18));
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esp + 0x1C);
    edx = MEM32(edx + 4);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM8(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_001D66BC; /* jle: less or equal (signed <=) */

loc_001D65B5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_001D65C0: ;
    eax = MEM32(ecx + 0x40);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fa = (uint32_t)(MEM8(esi + eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + eax), 0 (8-bit) */
    ebx = MEM32(ecx + 0x1C);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + ebx) = LO8(eax);
    eax = MEM32(ecx + 0x34);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + esi * 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + esi*4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D65E8; /* jne: not equal / not zero */

loc_001D65E3: ;
    MEM8(esp + 0x18) = 1;

loc_001D65E8: ;
    ebx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0x80);
    fp_push(MEMF(ebx + esi * 4)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x90)); /* fmul dword ptr [eax + 0x90] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x84)); /* fmul dword ptr [eax + 0x84] */
    eax = MEM32(ecx + 0x28);
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = -fp_top(); /* fchs */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + esi * 4)); /* fmul dword ptr [eax + esi*4] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D663E; /* jne: not equal / not zero */

loc_001D662B: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D663E; /* je: equal / zero */

loc_001D663C: ;
    fp_top() = -fp_top(); /* fchs */

loc_001D663E: ;
    eax = MEM32(ecx + 0x10);
    MEMF(eax + esi * 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 0xC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC0;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D65C0; /* jl: less (signed <) */

loc_001D6656: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001D66BC; /* je: equal / zero */

loc_001D6660: ;
    fp_push(MEMF(ecx + 0x50)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D66A8; /* jp: parity */

loc_001D6670: ;
    eax = MEM32(ecx + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D66C2; /* jle: less or equal (signed <=) */

loc_001D6679: ;
    /* nop */

loc_001D6680: ;
    eax = MEM32(ecx + 0x34);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + edx * 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + edx*4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D6698; /* jne: not equal / not zero */

loc_001D6691: ;
    eax = MEM32(ecx + 0x1C);
    MEM8(edx + eax) = 1;

loc_001D6698: ;
    eax = MEM32(ecx + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D6680; /* jl: less (signed <) */

loc_001D66A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001D66A8: ;
    fp_push(MEMF(ecx + 0x50)); /* fld float */
    edx = MEM32(esp + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx)); /* fsub dword ptr [edx] */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001D66BC: ;
    eax = MEM32(ecx + 0x4C);
    MEM32(ecx + 0x50) = eax;

loc_001D66C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_001D66D0
 * Original: 0x001D66D0 - 0x001D68EF (543 bytes, 199 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D66D0(void)
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

loc_001D66D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    edx = MEM32(edi + 8);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D6724; /* jge: greater or equal (signed >=) */

loc_001D66EE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D6707; /* js: sign (negative) */

loc_001D66F2: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D6707u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6704u); } /* indirect call */
    }

loc_001D6707: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D671Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6718u); } /* indirect call */
    }

loc_001D671B: ;
    MEM32(esi + 0x28) = eax;
    ecx = MEM32(edi + 8);
    MEM32(esi + 0x30) = ecx;

loc_001D6724: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(esi + 0x28);
    MEM32(esi + 0x2C) = edx;
    ebx = MEM32(edi + 8);
    ebp = MEM32(edi + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D678F; /* jl: less (signed <) */

loc_001D6742: ;
    edx = ebp + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + 4;
    ecx = ebx + -4;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ebp;
    ebp = ecx * 4;
    MEM32(esp + 0x10) = ebp;

loc_001D6760: ;
    ebp = MEM32(edx + -12);
    MEM32(eax + -4) = ebp;
    ebp = MEM32(esp + 0x20);
    ebp = MEM32(eax + ebp);
    MEM32(eax) = ebp;
    ebp = MEM32(edx + -4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(edx);
    MEM32(eax + 8) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D6760; /* jne: not equal / not zero */

loc_001D6783: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x18);

loc_001D678F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D67AB; /* jge: greater or equal (signed >=) */

loc_001D6793: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + edx * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001D67A0: ;
    ecx = MEM32(eax + ebp);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D67A0; /* jne: not equal / not zero */

loc_001D67AB: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(edi + 0x14);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D67F2; /* jge: greater or equal (signed >=) */

loc_001D67BC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D67D5; /* js: sign (negative) */

loc_001D67C0: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D67D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D67D2u); } /* indirect call */
    }

loc_001D67D5: ;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D67E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D67E6u); } /* indirect call */
    }

loc_001D67E9: ;
    MEM32(esi + 0x34) = eax;
    ecx = MEM32(edi + 0x14);
    MEM32(esi + 0x3C) = ecx;

loc_001D67F2: ;
    edx = MEM32(edi + 0x14);
    ecx = MEM32(esi + 0x34);
    MEM32(esi + 0x38) = edx;
    ebx = MEM32(edi + 0x14);
    ebp = MEM32(edi + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D685F; /* jl: less (signed <) */

loc_001D6810: ;
    edx = ebp + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + 4;
    ecx = ebx + -4;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ebp;
    ebp = ecx * 4;
    MEM32(esp + 0x18) = ebp;
    edi = edi;

loc_001D6830: ;
    ebp = MEM32(edx + -12);
    MEM32(eax + -4) = ebp;
    ebp = MEM32(esp + 0x20);
    ebp = MEM32(eax + ebp);
    MEM32(eax) = ebp;
    ebp = MEM32(edx + -4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(edx);
    MEM32(eax + 8) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D6830; /* jne: not equal / not zero */

loc_001D6853: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x10);

loc_001D685F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D687B; /* jge: greater or equal (signed >=) */

loc_001D6863: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + edx * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001D6870: ;
    ecx = MEM32(eax + ebp);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D6870; /* jne: not equal / not zero */

loc_001D687B: ;
    ecx = MEM32(esi + 0x48);
    edx = MEM32(edi + 0x24);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D68BC; /* jge: greater or equal (signed >=) */

loc_001D688C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D68A2; /* js: sign (negative) */

loc_001D6890: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D68A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D689Fu); } /* indirect call */
    }

loc_001D68A2: ;
    eax = MEM32(edi + 0x24);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D68B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D68B0u); } /* indirect call */
    }

loc_001D68B3: ;
    MEM32(esi + 0x40) = eax;
    eax = MEM32(edi + 0x24);
    MEM32(esi + 0x48) = eax;

loc_001D68BC: ;
    ecx = MEM32(edi + 0x24);
    eax = MEM32(esi + 0x40);
    MEM32(esi + 0x44) = ecx;
    edx = MEM32(edi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(edi + 0x20);
    if (CMP_LE(_fas, _fbs)) goto loc_001D68DC; /* jle: less or equal (signed <=) */

loc_001D68CF: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = edx;

loc_001D68D3: ;
    SET_LO8(edx, MEM8(ecx + eax));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D68D3; /* jne: not equal / not zero */

loc_001D68DC: ;
    fp_push(MEMF(edi + 0x1C)); /* fld float */
    POP32(esp, edi);
    MEMF(esi + 0x4C) = (float)fp_top(); /* fst */
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D68F0
 * Original: 0x001D68F0 - 0x001D6B1C (556 bytes, 207 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D68F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D68F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001D6903u); RECOMP_ABI_CALL(0x001D9200u, sub_001D9200); /* call 0x001D9200 */

loc_001D6903: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(esi + 0x2C);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D694A; /* jge: greater or equal (signed >=) */

loc_001D6914: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D692D; /* js: sign (negative) */

loc_001D6918: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D692Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D692Au); } /* indirect call */
    }

loc_001D692D: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D6941u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D693Eu); } /* indirect call */
    }

loc_001D6941: ;
    MEM32(edi + 4) = eax;
    ecx = MEM32(esi + 0x2C);
    MEM32(edi + 0xC) = ecx;

loc_001D694A: ;
    edx = MEM32(esi + 0x2C);
    ecx = MEM32(edi + 4);
    MEM32(edi + 8) = edx;
    ebx = MEM32(esi + 0x2C);
    ebp = MEM32(esi + 0x28);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D69B5; /* jl: less (signed <) */

loc_001D6968: ;
    edx = ebp + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + 4;
    ecx = ebx + -4;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ebp;
    ebp = ecx * 4;
    MEM32(esp + 0x10) = ebp;

loc_001D6986: ;
    ebp = MEM32(edx + -12);
    MEM32(eax + -4) = ebp;
    ebp = MEM32(esp + 0x20);
    ebp = MEM32(eax + ebp);
    MEM32(eax) = ebp;
    ebp = MEM32(edx + -4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(edx);
    MEM32(eax + 8) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D6986; /* jne: not equal / not zero */

loc_001D69A9: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x18);

loc_001D69B5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D69CB; /* jge: greater or equal (signed >=) */

loc_001D69B9: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + edx * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001D69C0: ;
    ecx = MEM32(eax + ebp);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D69C0; /* jne: not equal / not zero */

loc_001D69CB: ;
    ecx = MEM32(edi + 0x18);
    edx = MEM32(esi + 0x38);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D6A12; /* jge: greater or equal (signed >=) */

loc_001D69DC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D69F5; /* js: sign (negative) */

loc_001D69E0: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D69F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D69F2u); } /* indirect call */
    }

loc_001D69F5: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D6A09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6A06u); } /* indirect call */
    }

loc_001D6A09: ;
    MEM32(edi + 0x10) = eax;
    ecx = MEM32(esi + 0x38);
    MEM32(edi + 0x18) = ecx;

loc_001D6A12: ;
    edx = MEM32(esi + 0x38);
    ecx = MEM32(edi + 0x10);
    MEM32(edi + 0x14) = edx;
    ebx = MEM32(esi + 0x38);
    ebp = MEM32(esi + 0x34);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D6A7F; /* jl: less (signed <) */

loc_001D6A30: ;
    edx = ebp + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + 4;
    ecx = ebx + -4;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ebp;
    ebp = ecx * 4;
    MEM32(esp + 0x18) = ebp;
    edi = edi;

loc_001D6A50: ;
    ebp = MEM32(edx + -12);
    MEM32(eax + -4) = ebp;
    ebp = MEM32(esp + 0x20);
    ebp = MEM32(eax + ebp);
    MEM32(eax) = ebp;
    ebp = MEM32(edx + -4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(edx);
    MEM32(eax + 8) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D6A50; /* jne: not equal / not zero */

loc_001D6A73: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x10);

loc_001D6A7F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D6A9B; /* jge: greater or equal (signed >=) */

loc_001D6A83: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + edx * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001D6A90: ;
    ecx = MEM32(eax + ebp);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D6A90; /* jne: not equal / not zero */

loc_001D6A9B: ;
    ecx = MEM32(edi + 0x28);
    edx = MEM32(esi + 0x44);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D6ADC; /* jge: greater or equal (signed >=) */

loc_001D6AAC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D6AC2; /* js: sign (negative) */

loc_001D6AB0: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x20);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D6AC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6ABFu); } /* indirect call */
    }

loc_001D6AC2: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D6AD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6AD0u); } /* indirect call */
    }

loc_001D6AD3: ;
    MEM32(edi + 0x20) = eax;
    eax = MEM32(esi + 0x44);
    MEM32(edi + 0x28) = eax;

loc_001D6ADC: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(edi + 0x20);
    MEM32(edi + 0x24) = ecx;
    edx = MEM32(esi + 0x44);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(esi + 0x40);
    if (CMP_LE(_fas, _fbs)) goto loc_001D6B0C; /* jle: less or equal (signed <=) */

loc_001D6AEF: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = edx;

loc_001D6AF3: ;
    SET_LO8(edx, MEM8(ecx + eax));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D6AF3; /* jne: not equal / not zero */

loc_001D6AFC: ;
    eax = MEM32(esi + 0x4C);
    MEM32(edi + 0x1C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001D6B0C: ;
    ecx = MEM32(esi + 0x4C);
    MEM32(edi + 0x1C) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D6B20
 * Original: 0x001D6B20 - 0x001D6B3B (27 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6B20(void)
{

loc_001D6B20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001D6B2Eu); RECOMP_ABI_CALL(0x001D8F80u, sub_001D8F80); /* call 0x001D8F80 */

loc_001D6B2E: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D6B36u); RECOMP_ABI_CALL(0x001D66D0u, sub_001D66D0); /* call 0x001D66D0 */

loc_001D6B36: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D6B40
 * Original: 0x001D6B40 - 0x001D6BD0 (144 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D6B40: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246683);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 1;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D6B84; /* js: sign (negative) */

loc_001D6B6D: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D6B84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6B81u); } /* indirect call */
    }

loc_001D6B84: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D6BAA; /* js: sign (negative) */

loc_001D6B90: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D6BAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6BA7u); } /* indirect call */
    }

loc_001D6BAA: ;
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM32(esi) = 0x2F9F4C;
    PUSH32(esp, 0x001D6BBFu); RECOMP_ABI_CALL(0x00015C50u, sub_00015C50); /* call 0x00015C50 */

loc_001D6BBF: ;
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
 * sub_001D6BD0
 * Original: 0x001D6BD0 - 0x001D6CDD (269 bytes, 95 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6BD0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2466B9);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x001D6BFCu); RECOMP_ABI_CALL(0x001D8F90u, sub_001D8F90); /* call 0x001D8F90 */

loc_001D6BFC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edi + 0x28;
    MEM32(edi) = 0x2FA100;
    ecx = 0x80000000u;
    MEM32(esp + 0x20) = eax;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ecx;
    ebx = edi + 0x34;
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = ecx;
    ebp = edi + 0x40;
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = eax;
    MEM32(ebp + 8) = ecx;
    ecx = MEM32(esp + 0x28);
    ecx = (uint32_t)(int32_t)SMEM8(ecx);
    eax = MEM32(esi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM8(esp + 0x20) = 3;
    MEM32(esp + 0x10) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001D6C63; /* jge: greater or equal (signed >=) */

loc_001D6C4B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D6C53; /* jl: less (signed <) */

loc_001D6C51: ;
    eax = ecx;

loc_001D6C53: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D6C5Cu); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001D6C5C: ;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D6C63: ;
    edx = MEM32(esp + 0x28);
    MEM32(esi + 4) = ecx;
    esi = (uint32_t)(int32_t)SMEM8(edx);
    eax = MEM32(ebx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D6C8D; /* jge: greater or equal (signed >=) */

loc_001D6C79: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D6C81; /* jl: less (signed <) */

loc_001D6C7F: ;
    eax = esi;

loc_001D6C81: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D6C8Au); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001D6C8A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D6C8D: ;
    eax = MEM32(esp + 0x28);
    MEM32(ebx + 4) = esi;
    esi = (uint32_t)(int32_t)SMEM8(eax);
    eax = MEM32(ebp + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D6CB7; /* jge: greater or equal (signed >=) */

loc_001D6CA3: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D6CAB; /* jl: less (signed <) */

loc_001D6CA9: ;
    eax = esi;

loc_001D6CAB: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001D6CB4u); RECOMP_ABI_CALL(0x0018D8C0u, sub_0018D8C0); /* call 0x0018D8C0 */

loc_001D6CB4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D6CB7: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(ebp + 4) = esi;
    PUSH32(esp, 0x001D6CC6u); RECOMP_ABI_CALL(0x001D66D0u, sub_001D66D0); /* call 0x001D66D0 */

loc_001D6CC6: ;
    ecx = MEM32(esp + 0x18);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D6CE0
 * Original: 0x001D6CE0 - 0x001D6D08 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D6CE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D6CE8u); RECOMP_ABI_CALL(0x001D6D10u, sub_001D6D10); /* call 0x001D6D10 */

loc_001D6CE8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D6D02; /* je: equal / zero */

loc_001D6CEF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D6D02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6CFFu); } /* indirect call */
    }

loc_001D6D02: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D6D10
 * Original: 0x001D6D10 - 0x001D6DC0 (176 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D6D10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2466EE);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 2;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D6D54; /* js: sign (negative) */

loc_001D6D3D: ;
    edx = MEM32(esi + 0x40);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D6D54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6D51u); } /* indirect call */
    }

loc_001D6D54: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 1;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D6D7A; /* js: sign (negative) */

loc_001D6D60: ;
    edx = MEM32(esi + 0x34);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D6D7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6D77u); } /* indirect call */
    }

loc_001D6D7A: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D6DA0; /* js: sign (negative) */

loc_001D6D86: ;
    edx = MEM32(esi + 0x28);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D6DA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6D9Du); } /* indirect call */
    }

loc_001D6DA0: ;
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001D6DAFu); RECOMP_ABI_CALL(0x001D6B40u, sub_001D6B40); /* call 0x001D6B40 */

loc_001D6DAF: ;
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
 * sub_001D6DC0
 * Original: 0x001D6DC0 - 0x001D6E37 (119 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6DC0(void)
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

loc_001D6DC0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 8);
    edx = MEM32(eax + 8);
    SET_LO8(eax, MEM8(ecx + 0x58));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D6DE5; /* je: equal / zero */

loc_001D6DD1: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x5C)); /* fsub dword ptr [ecx + 0x5c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x38)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x38] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D6DE5; /* jne: not equal / not zero */

loc_001D6DE1: ;
    MEM8(ecx + 0x58) = 0;

loc_001D6DE5: ;
    SET_LO8(eax, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D6E35; /* jne: not equal / not zero */

loc_001D6DEC: ;
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    SET_LO8(edx, 1);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D6E0F; /* jp: parity */

loc_001D6DFB: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D6E0F; /* jle: less or equal (signed <=) */

loc_001D6E02: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x10) = eax;
    eax = MEM32(esp);
    MEM32(ecx + 0x5C) = eax;
    MEM8(ecx + 0x58) = LO8(edx);

loc_001D6E0F: ;
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D6E35; /* jne: not equal / not zero */

loc_001D6E1C: ;
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x44);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_001D6E35; /* jge: greater or equal (signed >=) */

loc_001D6E29: ;
    MEM32(ecx + 0x10) = eax;
    eax = MEM32(esp);
    MEM32(ecx + 0x5C) = eax;
    MEM8(ecx + 0x58) = LO8(edx);

loc_001D6E35: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D6E40
 * Original: 0x001D6E40 - 0x001D6F2D (237 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6E40(void)
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

loc_001D6E40: ;
    eax = MEM32(ecx + 8);
    fp_push(MEMF(0x2DC098)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0xC);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D6ED0; /* jl: less (signed <) */

loc_001D6E5A: ;
    eax = MEM32(ecx + 0x4C);
    edx = MEM32(ebp + 0x80);
    esi = ebx + -4;
    esi = esi >> 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x150;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = esi * 4;
    /* nop */

loc_001D6E80: ;
    fp_push(MEMF(edx + -192)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2EBBC4)); /* fmul dword ptr [0x2ebbc4] */
    _fb = (uint32_t)(0x300) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x300;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -24)); /* fmul dword ptr [eax - 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edx + -768)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2EBBC4)); /* fmul dword ptr [0x2ebbc4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -20)); /* fmul dword ptr [eax - 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edx + -576)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2EBBC4)); /* fmul dword ptr [0x2ebbc4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -16)); /* fmul dword ptr [eax - 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edx + -384)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2EBBC4)); /* fmul dword ptr [0x2ebbc4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -12)); /* fmul dword ptr [eax - 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    if ((_fa != 0)) goto loc_001D6E80; /* jne: not equal / not zero */

loc_001D6ED0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D6F08; /* jge: greater or equal (signed >=) */

loc_001D6ED4: ;
    edx = MEM32(ecx + 0x4C);
    esi = MEM32(ebp + 0x80);
    eax = edi + edi * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx + edi * 4;
    eax = eax + esi + 0x90;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001D6EF0: ;
    fp_push(MEMF(eax)); /* fld float */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2EBBC4)); /* fmul dword ptr [0x2ebbc4] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -4)); /* fmul dword ptr [edx - 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    if ((_fa != 0)) goto loc_001D6EF0; /* jne: not equal / not zero */

loc_001D6F08: ;
    SET_LO8(eax, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001D6F1E; /* je: equal / zero */

loc_001D6F13: ;
    fp_push(MEMF(ecx + 0x3C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x34)); /* fmul dword ptr [ecx + 0x34] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    esp += 4; return; /* ret */

loc_001D6F1E: ;
    edx = MEM32(ecx + 0x10);
    eax = MEM32(ecx + 0x40);
    fp_push(MEMF(eax + edx * 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x34)); /* fmul dword ptr [ecx + 0x34] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D6F30
 * Original: 0x001D6F30 - 0x001D70ED (445 bytes, 163 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D6F30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = MEM32(edi + 4);
    MEM32(esi + 0x2C) = eax;
    ecx = MEM32(edi + 8);
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(edi + 0xC);
    MEM32(esi + 0x34) = edx;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x38) = eax;
    ecx = MEM32(edi + 0x14);
    MEM32(esi + 0x3C) = ecx;
    ecx = MEM32(esi + 0x48);
    edx = MEM32(edi + 0x1C);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D6FA2; /* jge: greater or equal (signed >=) */

loc_001D6F6C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D6F85; /* js: sign (negative) */

loc_001D6F70: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D6F85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6F82u); } /* indirect call */
    }

loc_001D6F85: ;
    eax = MEM32(edi + 0x1C);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D6F99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6F96u); } /* indirect call */
    }

loc_001D6F99: ;
    MEM32(esi + 0x40) = eax;
    ecx = MEM32(edi + 0x1C);
    MEM32(esi + 0x48) = ecx;

loc_001D6FA2: ;
    edx = MEM32(edi + 0x1C);
    ecx = MEM32(esi + 0x40);
    MEM32(esi + 0x44) = edx;
    ebx = MEM32(edi + 0x1C);
    ebp = MEM32(edi + 0x18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D700F; /* jl: less (signed <) */

loc_001D6FC0: ;
    edx = ebp + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + 4;
    ecx = ebx + -4;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ebp;
    ebp = ecx * 4;
    MEM32(esp + 0x18) = ebp;
    edi = edi;

loc_001D6FE0: ;
    ebp = MEM32(edx + -12);
    MEM32(eax + -4) = ebp;
    ebp = MEM32(esp + 0x20);
    ebp = MEM32(eax + ebp);
    MEM32(eax) = ebp;
    ebp = MEM32(edx + -4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(edx);
    MEM32(eax + 8) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D6FE0; /* jne: not equal / not zero */

loc_001D7003: ;
    ecx = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);

loc_001D700F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D702B; /* jge: greater or equal (signed >=) */

loc_001D7013: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + edx * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001D7020: ;
    ecx = MEM32(eax + ebp);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D7020; /* jne: not equal / not zero */

loc_001D702B: ;
    ecx = MEM32(esi + 0x54);
    edx = MEM32(edi + 0x28);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D7072; /* jge: greater or equal (signed >=) */

loc_001D703C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D7055; /* js: sign (negative) */

loc_001D7040: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x4C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D7055u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D7052u); } /* indirect call */
    }

loc_001D7055: ;
    eax = MEM32(edi + 0x28);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D7069u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D7066u); } /* indirect call */
    }

loc_001D7069: ;
    MEM32(esi + 0x4C) = eax;
    ecx = MEM32(edi + 0x28);
    MEM32(esi + 0x54) = ecx;

loc_001D7072: ;
    edx = MEM32(edi + 0x28);
    MEM32(esi + 0x50) = edx;
    ebx = MEM32(edi + 0x28);
    edi = MEM32(edi + 0x24);
    esi = MEM32(esi + 0x4C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001D70CD; /* jl: less (signed <) */

loc_001D708C: ;
    ecx = ebx + -4;
    edx = edi + 0xC;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi + 4;
    MEM32(esp + 0x20) = edi;
    ebp = ecx * 4;

loc_001D70A6: ;
    edi = MEM32(edx + -12);
    MEM32(eax + -4) = edi;
    edi = MEM32(esp + 0x20);
    edi = MEM32(edi + eax);
    MEM32(eax) = edi;
    edi = MEM32(edx + -4);
    MEM32(eax + 4) = edi;
    edi = MEM32(edx);
    MEM32(eax + 8) = edi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D70A6; /* jne: not equal / not zero */

loc_001D70C9: ;
    edi = MEM32(esp + 0x18);

loc_001D70CD: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D70E3; /* jge: greater or equal (signed >=) */

loc_001D70D1: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + ebp * 4;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001D70D8: ;
    ecx = MEM32(eax + edi);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D70D8; /* jne: not equal / not zero */

loc_001D70E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D70F0
 * Original: 0x001D70F0 - 0x001D72AD (445 bytes, 164 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D70F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D70F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001D7103u); RECOMP_ABI_CALL(0x001D9200u, sub_001D9200); /* call 0x001D9200 */

loc_001D7103: ;
    eax = MEM32(esi + 0x2C);
    MEM32(edi + 4) = eax;
    ecx = MEM32(esi + 0x30);
    MEM32(edi + 8) = ecx;
    edx = MEM32(esi + 0x34);
    MEM32(edi + 0xC) = edx;
    eax = MEM32(esi + 0x38);
    MEM32(edi + 0x10) = eax;
    ecx = MEM32(esi + 0x3C);
    MEM32(edi + 0x14) = ecx;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(esi + 0x44);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D7168; /* jge: greater or equal (signed >=) */

loc_001D7132: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D714B; /* js: sign (negative) */

loc_001D7136: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x18);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D714Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D7148u); } /* indirect call */
    }

loc_001D714B: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D715Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D715Cu); } /* indirect call */
    }

loc_001D715F: ;
    MEM32(edi + 0x18) = eax;
    ecx = MEM32(esi + 0x44);
    MEM32(edi + 0x20) = ecx;

loc_001D7168: ;
    edx = MEM32(esi + 0x44);
    ecx = MEM32(edi + 0x18);
    MEM32(edi + 0x1C) = edx;
    ebx = MEM32(esi + 0x44);
    ebp = MEM32(esi + 0x40);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001D71D3; /* jl: less (signed <) */

loc_001D7186: ;
    edx = ebp + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + 4;
    ecx = ebx + -4;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ebp;
    ebp = ecx * 4;
    MEM32(esp + 0x18) = ebp;

loc_001D71A4: ;
    ebp = MEM32(edx + -12);
    MEM32(eax + -4) = ebp;
    ebp = MEM32(esp + 0x20);
    ebp = MEM32(eax + ebp);
    MEM32(eax) = ebp;
    ebp = MEM32(edx + -4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(edx);
    MEM32(eax + 8) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D71A4; /* jne: not equal / not zero */

loc_001D71C7: ;
    ecx = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);

loc_001D71D3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D71EB; /* jge: greater or equal (signed >=) */

loc_001D71D7: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + edx * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_001D71E0: ;
    ecx = MEM32(eax + ebp);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D71E0; /* jne: not equal / not zero */

loc_001D71EB: ;
    ecx = MEM32(edi + 0x2C);
    edx = MEM32(esi + 0x50);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D7232; /* jge: greater or equal (signed >=) */

loc_001D71FC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D7215; /* js: sign (negative) */

loc_001D7200: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x24);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D7215u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D7212u); } /* indirect call */
    }

loc_001D7215: ;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D7229u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D7226u); } /* indirect call */
    }

loc_001D7229: ;
    MEM32(edi + 0x24) = eax;
    ecx = MEM32(esi + 0x50);
    MEM32(edi + 0x2C) = ecx;

loc_001D7232: ;
    edx = MEM32(esi + 0x50);
    MEM32(edi + 0x28) = edx;
    ebx = MEM32(esi + 0x50);
    esi = MEM32(esi + 0x4C);
    edi = MEM32(edi + 0x24);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x18) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_001D728D; /* jl: less (signed <) */

loc_001D724C: ;
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
    MEM32(esp + 0x20) = esi;
    ebp = ecx * 4;

loc_001D7266: ;
    esi = MEM32(edx + -12);
    MEM32(eax + -4) = esi;
    esi = MEM32(esp + 0x20);
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
    if ((_fa != 0)) goto loc_001D7266; /* jne: not equal / not zero */

loc_001D7289: ;
    esi = MEM32(esp + 0x18);

loc_001D728D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D72A3; /* jge: greater or equal (signed >=) */

loc_001D7291: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi + ebp * 4;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001D7298: ;
    ecx = MEM32(eax + esi);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D7298; /* jne: not equal / not zero */

loc_001D72A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D72B0
 * Original: 0x001D72B0 - 0x001D72CB (27 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D72B0(void)
{

loc_001D72B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001D72BEu); RECOMP_ABI_CALL(0x001D90C0u, sub_001D90C0); /* call 0x001D90C0 */

loc_001D72BE: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D72C6u); RECOMP_ABI_CALL(0x001D6F30u, sub_001D6F30); /* call 0x001D6F30 */

loc_001D72C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D72D0
 * Original: 0x001D72D0 - 0x001D733D (109 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D72D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D72D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246708);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D7318; /* js: sign (negative) */

loc_001D72FC: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(0x4409AC);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D7317u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D7314u); } /* indirect call */
    }

loc_001D7317: ;
    POP32(esp, edi);

loc_001D7318: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEM32(esi) = 0x2F9F4C;
    PUSH32(esp, 0x001D732Du); RECOMP_ABI_CALL(0x00015C50u, sub_00015C50); /* call 0x00015C50 */

loc_001D732D: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D7340
 * Original: 0x001D7340 - 0x001D73C0 (128 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7340(void)
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

loc_001D7340: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x14);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x19));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D7352; /* jne: not equal / not zero */

loc_001D734E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_001D735A;

loc_001D7352: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */

loc_001D735A: ;
    SET_LO8(ebx, MEM8(ecx + 0x58));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM8(ecx + 0x14) = LO8(eax);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001D736D; /* je: equal / zero */

loc_001D7365: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    goto loc_001D738C;

loc_001D736D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = MEM32(edx + 0x1C);
    fp_push(MEMF(edx + 0xC)); /* fld float */
    if (CMP_EQ(_fa, _fb)) goto loc_001D737E; /* je: equal / zero */

loc_001D7377: ;
    fp_push(MEMF(ecx + 0x3C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    goto loc_001D7387;

loc_001D737E: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0x40);
    fp_push(MEMF(edx + eax * 4)); /* fld float */

loc_001D7387: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x34)); /* fmul dword ptr [ecx + 0x34] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */

loc_001D738C: ;
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001D7394u); RECOMP_ABI_CALL(0x001D6E40u, sub_001D6E40); /* call 0x001D6E40 */

loc_001D7394: ;
    edx = MEM32(ecx + 0x50);
    MEMF(ecx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D73B8; /* jle: less or equal (signed <=) */

loc_001D73A0: ;
    edx = MEM32(ecx + 0x4C);
    fp_push(MEMF(edx + eax * 4)); /* fld float */
    edx = MEM32(ecx + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x1C)); /* fmul dword ptr [ecx + 0x1c] */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(edx + eax * 4 + -4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D73A0; /* jl: less (signed <) */

loc_001D73B8: ;
    PUSH32(esp, 0x001D73BDu); RECOMP_ABI_CALL(0x001D6DC0u, sub_001D6DC0); /* call 0x001D6DC0 */

loc_001D73BD: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D73C0
 * Original: 0x001D73C0 - 0x001D743D (125 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D73C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D73C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24673E);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x001D73E8u); RECOMP_ABI_CALL(0x001D90D0u, sub_001D90D0); /* call 0x001D90D0 */

loc_001D73E8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2FA11C;
    ecx = 0x80000000u;
    MEM32(esp + 0x14) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = ecx;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(esp + 0x18) = 2;
    MEM8(esi + 0x14) = LO8(eax);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x5C) = 0xBF800000u;
    MEM8(esi + 0x58) = LO8(eax);
    PUSH32(esp, 0x001D7428u); RECOMP_ABI_CALL(0x001D6F30u, sub_001D6F30); /* call 0x001D6F30 */

loc_001D7428: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7440
 * Original: 0x001D7440 - 0x001D7468 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7440: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D7448u); RECOMP_ABI_CALL(0x001D7470u, sub_001D7470); /* call 0x001D7470 */

loc_001D7448: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D7462; /* je: equal / zero */

loc_001D744F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D7462u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D745Fu); } /* indirect call */
    }

loc_001D7462: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7470
 * Original: 0x001D7470 - 0x001D74FD (141 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7470: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246763);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 1;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D74B7; /* js: sign (negative) */

loc_001D749D: ;
    edx = MEM32(esi + 0x4C);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D74B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D74B4u); } /* indirect call */
    }

loc_001D74B7: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x14) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D74DD; /* js: sign (negative) */

loc_001D74C3: ;
    edx = MEM32(esi + 0x40);
    ecx = MEM32(0x4409AC);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D74DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D74DAu); } /* indirect call */
    }

loc_001D74DD: ;
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001D74ECu); RECOMP_ABI_CALL(0x001D72D0u, sub_001D72D0); /* call 0x001D72D0 */

loc_001D74EC: ;
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
 * sub_001D7500
 * Original: 0x001D7500 - 0x001D7542 (66 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7500(void)
{

loc_001D7500: ;
    edx = MEM32(ecx + 0x14);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x30);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 0x34);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(ecx + 0x38);
    MEM32(eax + 0x24) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7550
 * Original: 0x001D7550 - 0x001D7592 (66 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7550(void)
{

loc_001D7550: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x1C) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 0x2C) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 0x30) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(ecx + 0x34) = edx;
    eax = MEM32(eax + 0x24);
    MEM32(ecx + 0x38) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D75A0
 * Original: 0x001D75A0 - 0x001D75FD (93 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D75A0(void)
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

loc_001D75A0: ;
    PUSH32(esp, ecx);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x20);
    eax = MEM32(eax + 0x18);
    MEM32(esp) = eax;
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D75F8; /* jp: parity */

loc_001D75BA: ;
    edx = MEM32(edx + 0x14);
    fp_push(MEMF(edx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x38)); /* fmul dword ptr [ecx + 0x38] */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DC340)); /* fmul dword ptr [0x2dc340] */
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D75DF; /* jp: parity */

loc_001D75D8: ;
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x14)); /* fadd dword ptr [ecx + 0x14] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001D75DF: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] * fp_top()); fp_pop(); /* fmulp st(2) */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] / fp_top()); fp_pop(); /* fdivp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x14)); /* fadd dword ptr [ecx + 0x14] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001D75F8: ;
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D7600
 * Original: 0x001D7600 - 0x001D7720 (288 bytes, 91 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001D7600(void)
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

loc_001D7600: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x14);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x18)); /* fsub dword ptr [ecx + 0x18] */
    MEMF(esp) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x2DC098)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x2dc098] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D769A; /* jp: parity */

loc_001D7622: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    edx = MEM32(edx + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x18)); /* fsub dword ptr [ecx + 0x18] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) / fp_top()); /* fdivr dword ptr [0x2dc08c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x30)); /* fsub dword ptr [ecx + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x30)); /* fadd dword ptr [ecx + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x20)); /* fmul dword ptr [ecx + 0x20] */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC08C)); /* fsub dword ptr [0x2dc08c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC08C)); /* fadd dword ptr [0x2dc08c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x20)); /* fmul dword ptr [ecx + 0x20] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x18)); /* fld float */
    MEMF(esp) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D770E; /* jp: parity */

loc_001D7680: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x14)); /* fdiv dword ptr [ecx + 0x14] */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] * fp_top()); fp_pop(); /* fmulp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001D769A: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D7700; /* jp: parity */

loc_001D76A7: ;
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x18)); /* fsub dword ptr [ecx + 0x18] */
    fp_top() = RECOMP_FP_PC(MEMF(0x2DC08C) / fp_top()); /* fdivr dword ptr [0x2dc08c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x30)); /* fsub dword ptr [ecx + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x30)); /* fadd dword ptr [ecx + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x20)); /* fmul dword ptr [ecx + 0x20] */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DC08C)); /* fsub dword ptr [0x2dc08c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2DC08C)); /* fadd dword ptr [0x2dc08c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x20)); /* fmul dword ptr [ecx + 0x20] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] * fp_top()); fp_pop(); /* fmulp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001D7700: ;
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    MEM32(esp + 4) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x20)); /* fmul dword ptr [ecx + 0x20] */

loc_001D770E: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] * fp_top()); fp_pop(); /* fmulp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */
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
 * sub_001D7720
 * Original: 0x001D7720 - 0x001D7778 (88 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7720: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2FA14C;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x34) = edx;
    ecx = MEM32(ecx + 0x24);
    MEM32(eax + 0x38) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7780
 * Original: 0x001D7780 - 0x001D7799 (25 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001D7780(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D7780: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D7788u); RECOMP_ABI_CALL(0x001D75A0u, sub_001D75A0); /* call 0x001D75A0 */

loc_001D7788: ;
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    PUSH32(esp, 0x001D7792u); RECOMP_ABI_CALL(0x001D7600u, sub_001D7600); /* call 0x001D7600 */

loc_001D7792: ;
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D77A0
 * Original: 0x001D77A0 - 0x001D786A (202 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D77A0(void)
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

loc_001D77A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x14);
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    edx = MEM32(eax + 0x10);
    eax = MEM32(eax + 0x30);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x24)); /* fmul dword ptr [esi + 0x24] */
    ecx = MEM32(eax + 0x3C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D77D9u); RECOMP_ABI_CALL(0x001CF840u, sub_001CF840); /* call 0x001CF840 */

loc_001D77D9: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 0x30);
    ecx = MEM32(eax + 0x3C);
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x40); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    edx = esp + 8;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001D7820; /* jp: parity */

loc_001D781A: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    goto loc_001D782F;

loc_001D7820: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 8)); /* fdiv dword ptr [esp + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */

loc_001D782F: ;
    ecx = MEM32(esi + 0x30);
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D7863; /* jle: less or equal (signed <=) */

loc_001D783B: ;
    goto loc_001D7840;

    /* nop */

loc_001D7840: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(MEM8(eax + ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ecx), 0 (8-bit) */
    edx = MEM32(esi + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_001D7854; /* je: equal / zero */

loc_001D784C: ;
    ecx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = ecx;
    goto loc_001D785B;

loc_001D7854: ;
    MEM32(edx + eax * 4) = 0;

loc_001D785B: ;
    ecx = MEM32(esi + 0x30);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D7840; /* jl: less (signed <) */

loc_001D7863: ;
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
 * sub_001D7870
 * Original: 0x001D7870 - 0x001D78FF (143 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7870: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    MEM32(esi + 0x24) = eax;
    ecx = MEM32(edi + 8);
    MEM32(esi + 0x28) = ecx;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(edi + 0x10);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D78C5; /* jge: greater or equal (signed >=) */

loc_001D7895: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D78AB; /* js: sign (negative) */

loc_001D7899: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D78ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D78A8u); } /* indirect call */
    }

loc_001D78AB: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D78BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D78B9u); } /* indirect call */
    }

loc_001D78BC: ;
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x34) = eax;

loc_001D78C5: ;
    ecx = MEM32(edi + 0x10);
    eax = MEM32(esi + 0x2C);
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(edi + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(edi + 0xC);
    if (CMP_LE(_fas, _fbs)) goto loc_001D78F4; /* jle: less or equal (signed <=) */

loc_001D78D8: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edx;
    /* nop */

loc_001D78E0: ;
    SET_LO8(edx, MEM8(ecx + eax));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D78E0; /* jne: not equal / not zero */

loc_001D78E9: ;
    eax = MEM32(esi + 0x30);
    POP32(esp, edi);
    MEM32(esi + 0x20) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001D78F4: ;
    ecx = MEM32(esi + 0x30);
    POP32(esp, edi);
    MEM32(esi + 0x20) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7900
 * Original: 0x001D7900 - 0x001D7980 (128 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7900: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001D790Eu); RECOMP_ABI_CALL(0x001D9200u, sub_001D9200); /* call 0x001D9200 */

loc_001D790E: ;
    eax = MEM32(esi + 0x24);
    MEM32(edi + 4) = eax;
    ecx = MEM32(esi + 0x28);
    MEM32(edi + 8) = ecx;
    ecx = MEM32(edi + 0x14);
    edx = MEM32(esi + 0x30);
    eax = ecx;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D795B; /* jge: greater or equal (signed >=) */

loc_001D792B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D7941; /* js: sign (negative) */

loc_001D792F: ;
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001D7941u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D793Eu); } /* indirect call */
    }

loc_001D7941: ;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(0x4409AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D7952u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D794Fu); } /* indirect call */
    }

loc_001D7952: ;
    MEM32(edi + 0xC) = eax;
    eax = MEM32(esi + 0x30);
    MEM32(edi + 0x14) = eax;

loc_001D795B: ;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(edi + 0xC);
    MEM32(edi + 0x10) = ecx;
    edx = MEM32(esi + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(esi + 0x2C);
    if (CMP_LE(_fas, _fbs)) goto loc_001D797B; /* jle: less or equal (signed <=) */

loc_001D796E: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edx;

loc_001D7972: ;
    SET_LO8(edx, MEM8(ecx + eax));
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D7972; /* jne: not equal / not zero */

loc_001D797B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7980
 * Original: 0x001D7980 - 0x001D799B (27 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7980(void)
{

loc_001D7980: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001D798Eu); RECOMP_ABI_CALL(0x001D92A0u, sub_001D92A0); /* call 0x001D92A0 */

loc_001D798E: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001D7996u); RECOMP_ABI_CALL(0x001D7870u, sub_001D7870); /* call 0x001D7870 */

loc_001D7996: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D79A0
 * Original: 0x001D79A0 - 0x001D7A0D (109 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D79A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D79A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246778);
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
    MEM32(esp + 0x10) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D79E8; /* js: sign (negative) */

loc_001D79CC: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(0x4409AC);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D79E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D79E4u); } /* indirect call */
    }

loc_001D79E7: ;
    POP32(esp, edi);

loc_001D79E8: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEM32(esi) = 0x2F9F4C;
    PUSH32(esp, 0x001D79FDu); RECOMP_ABI_CALL(0x00015C50u, sub_00015C50); /* call 0x00015C50 */

loc_001D79FD: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D7A10
 * Original: 0x001D7A10 - 0x001D7A73 (99 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7A10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2467A3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x001D7A38u); RECOMP_ABI_CALL(0x001D92C0u, sub_001D92C0); /* call 0x001D92C0 */

loc_001D7A38: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2FA164;
    MEM32(esp + 0x14) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = 0x80000000u;
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(esp + 0x18) = 1;
    PUSH32(esp, 0x001D7A5Eu); RECOMP_ABI_CALL(0x001D7870u, sub_001D7870); /* call 0x001D7870 */

loc_001D7A5E: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7A80
 * Original: 0x001D7A80 - 0x001D7AA8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7A80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D7A88u); RECOMP_ABI_CALL(0x001D7AB0u, sub_001D7AB0); /* call 0x001D7AB0 */

loc_001D7A88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D7AA2; /* je: equal / zero */

loc_001D7A8F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D7AA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D7A9Fu); } /* indirect call */
    }

loc_001D7AA2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7AB0
 * Original: 0x001D7AB0 - 0x001D7B14 (100 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7AB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2467B8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001D7AF5; /* js: sign (negative) */

loc_001D7ADC: ;
    edx = MEM32(esi + 0x2C);
    ecx = MEM32(0x4409AC);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x001D7AF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D7AF1u); } /* indirect call */
    }

loc_001D7AF4: ;
    POP32(esp, edi);

loc_001D7AF5: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001D7B04u); RECOMP_ABI_CALL(0x001D79A0u, sub_001D79A0); /* call 0x001D79A0 */

loc_001D7B04: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D7B20
 * Original: 0x001D7B20 - 0x001D7B25 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7B20: ;
    g_seh_ebp = ebp; sub_001D9360(); return; /* tail jmp 0x001D9360 */

}

/**
 * sub_001D7B30
 * Original: 0x001D7B30 - 0x001D7B35 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7B30: ;
    g_seh_ebp = ebp; sub_001D9800(); return; /* tail jmp 0x001D9800 */

}

/**
 * sub_001D7B40
 * Original: 0x001D7B40 - 0x001D7B59 (25 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7B40(void)
{

loc_001D7B40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001D7B4Du); RECOMP_ABI_CALL(0x001D9810u, sub_001D9810); /* call 0x001D9810 */

loc_001D7B4D: ;
    MEM32(esi) = 0x2FA17C;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7B60
 * Original: 0x001D7B60 - 0x001D7B88 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7B60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D7B68u); RECOMP_ABI_CALL(0x001CC0E0u, sub_001CC0E0); /* call 0x001CC0E0 */

loc_001D7B68: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D7B82; /* je: equal / zero */

loc_001D7B6F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D7B82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D7B7Fu); } /* indirect call */
    }

loc_001D7B82: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7B90
 * Original: 0x001D7B90 - 0x001D7B95 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7B90: ;
    g_seh_ebp = ebp; sub_001D2E20(); return; /* tail jmp 0x001D2E20 */

}

/**
 * sub_001D7BA0
 * Original: 0x001D7BA0 - 0x001D7BA5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7BA0: ;
    g_seh_ebp = ebp; sub_001D33B0(); return; /* tail jmp 0x001D33B0 */

}

/**
 * sub_001D7BB0
 * Original: 0x001D7BB0 - 0x001D7BC9 (25 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7BB0(void)
{

loc_001D7BB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001D7BBDu); RECOMP_ABI_CALL(0x001D33F0u, sub_001D33F0); /* call 0x001D33F0 */

loc_001D7BBD: ;
    MEM32(esi) = 0x2FA190;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7BD0
 * Original: 0x001D7BD0 - 0x001D7BF8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7BD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D7BD8u); RECOMP_ABI_CALL(0x001D7C00u, sub_001D7C00); /* call 0x001D7C00 */

loc_001D7BD8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D7BF2; /* je: equal / zero */

loc_001D7BDF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D7BF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D7BEFu); } /* indirect call */
    }

loc_001D7BF2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D7C00
 * Original: 0x001D7C00 - 0x001D7C05 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7C00: ;
    g_seh_ebp = ebp; sub_001D34E0(); return; /* tail jmp 0x001D34E0 */

}

/**
 * sub_001D7C10
 * Original: 0x001D7C10 - 0x001D7C1F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7C10(void)
{

loc_001D7C10: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D7C1Eu); RECOMP_ABI_CALL(0x001D3C50u, sub_001D3C50); /* call 0x001D3C50 */

loc_001D7C1E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D7C20
 * Original: 0x001D7C20 - 0x001D7C2F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7C20(void)
{

loc_001D7C20: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D7C2Eu); RECOMP_ABI_CALL(0x001D40C0u, sub_001D40C0); /* call 0x001D40C0 */

loc_001D7C2E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D7C30
 * Original: 0x001D7C30 - 0x001D7C36 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7C30(void)
{

loc_001D7C30: ;
    eax = 0x441144;
    esp += 4; return; /* ret */

}

/**
 * sub_001D7C40
 * Original: 0x001D7C40 - 0x001D7C94 (84 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7C40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7C40: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2467DB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x1B0);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D7C68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D7C65u); } /* indirect call */
    }

loc_001D7C68: ;
    MEM16(eax + 4) = 0x1B0;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001D7C85u); RECOMP_ABI_CALL(0x001D4E10u, sub_001D4E10); /* call 0x001D4E10 */

loc_001D7C85: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D7CA0
 * Original: 0x001D7CA0 - 0x001D7CE6 (70 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7CA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7CA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D7CA8u); RECOMP_ABI_CALL(0x001D8980u, sub_001D8980); /* call 0x001D8980 */

loc_001D7CA8: ;
    MEM32(esi + 0x58) = 0x80000000u;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = eax;
    ecx = 0x3F800000;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x34) = ecx;
    MEM32(esi + 0x3C) = 0x41200000;
    MEM32(esi + 0x40) = 0x3DCCCCCD;
    MEM32(esi + 0x44) = ecx;
    MEM32(esi + 0x48) = ecx;
    MEM32(esi + 0x4C) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D7CF0
 * Original: 0x001D7CF0 - 0x001D7D2D (61 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7CF0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246801);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(esp) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001D7D1E; /* je: equal / zero */

loc_001D7D19: ;
    PUSH32(esp, 0x001D7D1Eu); RECOMP_ABI_CALL(0x001D7CA0u, sub_001D7CA0); /* call 0x001D7CA0 */

loc_001D7D1E: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D7D30
 * Original: 0x001D7D30 - 0x001D7D39 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7D30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7D30: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_00047810(); return; /* tail jmp 0x00047810 */

}

/**
 * sub_001D7D40
 * Original: 0x001D7D40 - 0x001D7D60 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7D40(void)
{

loc_001D7D40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D7D48u); RECOMP_ABI_CALL(0x000B5E50u, sub_000B5E50); /* call 0x000B5E50 */

loc_001D7D48: ;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D7D60
 * Original: 0x001D7D60 - 0x001D7D70 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7D60(void)
{

loc_001D7D60: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D7D6Eu); RECOMP_ABI_CALL(0x001D59B0u, sub_001D59B0); /* call 0x001D59B0 */

loc_001D7D6E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D7D70
 * Original: 0x001D7D70 - 0x001D7D7F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7D70(void)
{

loc_001D7D70: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D7D7Eu); RECOMP_ABI_CALL(0x001D59D0u, sub_001D59D0); /* call 0x001D59D0 */

loc_001D7D7E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D7D80
 * Original: 0x001D7D80 - 0x001D7D86 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7D80(void)
{

loc_001D7D80: ;
    eax = 0x44116C;
    esp += 4; return; /* ret */

}

/**
 * sub_001D7D90
 * Original: 0x001D7D90 - 0x001D7DE1 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7D90: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24681B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x14);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D7DB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D7DB2u); } /* indirect call */
    }

loc_001D7DB5: ;
    MEM16(eax + 4) = 0x14;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001D7DD2u); RECOMP_ABI_CALL(0x001D5AF0u, sub_001D5AF0); /* call 0x001D5AF0 */

loc_001D7DD2: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D7DF0
 * Original: 0x001D7DF0 - 0x001D7E46 (86 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7DF0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246841);
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
    if (CMP_EQ(_fa, _fb)) goto loc_001D7E36; /* je: equal / zero */

loc_001D7E1B: ;
    ecx = esi;
    PUSH32(esp, 0x001D7E22u); RECOMP_ABI_CALL(0x000B5E50u, sub_000B5E50); /* call 0x000B5E50 */

loc_001D7E22: ;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0x3F800000;

loc_001D7E36: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D7E50
 * Original: 0x001D7E50 - 0x001D7E5F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7E50(void)
{

loc_001D7E50: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D7E5Eu); RECOMP_ABI_CALL(0x001D5B30u, sub_001D5B30); /* call 0x001D5B30 */

loc_001D7E5E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D7E60
 * Original: 0x001D7E60 - 0x001D7E6F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7E60(void)
{

loc_001D7E60: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D7E6Eu); RECOMP_ABI_CALL(0x001D5B70u, sub_001D5B70); /* call 0x001D5B70 */

loc_001D7E6E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D7E70
 * Original: 0x001D7E70 - 0x001D7E76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7E70(void)
{

loc_001D7E70: ;
    eax = 0x441194;
    esp += 4; return; /* ret */

}

/**
 * sub_001D7E80
 * Original: 0x001D7E80 - 0x001D7EA0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7E80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D7E88u); RECOMP_ABI_CALL(0x001D9170u, sub_001D9170); /* call 0x001D9170 */

loc_001D7E88: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esi + 0x10, xmm0); /* movaps */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D7EA0
 * Original: 0x001D7EA0 - 0x001D7F00 (96 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7EA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7EA0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24685B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x50);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D7EC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D7EC2u); } /* indirect call */
    }

loc_001D7EC5: ;
    MEM16(eax + 4) = 0x50;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001D7EE2u); RECOMP_ABI_CALL(0x001D5BC0u, sub_001D5BC0); /* call 0x001D5BC0 */

loc_001D7EE2: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D7F00
 * Original: 0x001D7F00 - 0x001D7F6C (108 bytes, 41 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D7F00: ;
    PUSH32(esp, ebx);
    ebx = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 4);
    MEM32(esp + 4) = ebp;
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246884);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebx + 8);
    PUSH32(esp, edi);
    MEM32(ebp + -20) = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001D7F59; /* je: equal / zero */

loc_001D7F40: ;
    ecx = esi;
    PUSH32(esp, 0x001D7F47u); RECOMP_ABI_CALL(0x001D9170u, sub_001D9170); /* call 0x001D9170 */

loc_001D7F47: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    XMM_STORE(esi + 0x10, xmm0); /* movaps */

loc_001D7F59: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D7F70
 * Original: 0x001D7F70 - 0x001D7F7F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7F70(void)
{

loc_001D7F70: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D7F7Eu); RECOMP_ABI_CALL(0x001D60A0u, sub_001D60A0); /* call 0x001D60A0 */

loc_001D7F7E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D7F80
 * Original: 0x001D7F80 - 0x001D7F8F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7F80(void)
{

loc_001D7F80: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D7F8Eu); RECOMP_ABI_CALL(0x001D6310u, sub_001D6310); /* call 0x001D6310 */

loc_001D7F8E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D7F90
 * Original: 0x001D7F90 - 0x001D7F96 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7F90(void)
{

loc_001D7F90: ;
    eax = 0x4411BC;
    esp += 4; return; /* ret */

}

/**
 * sub_001D7FA0
 * Original: 0x001D7FA0 - 0x001D7FF1 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D7FA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D7FA0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24689B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x68);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D7FC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D7FC2u); } /* indirect call */
    }

loc_001D7FC5: ;
    MEM16(eax + 4) = 0x68;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001D7FE2u); RECOMP_ABI_CALL(0x001D6410u, sub_001D6410); /* call 0x001D6410 */

loc_001D7FE2: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D8000
 * Original: 0x001D8000 - 0x001D802E (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8000: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D8008u); RECOMP_ABI_CALL(0x001D9990u, sub_001D9990); /* call 0x001D9990 */

loc_001D8008: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    ecx = 0x80000000u;
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = ecx;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D8030
 * Original: 0x001D8030 - 0x001D8092 (98 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8030: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2468C1);
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
    if (CMP_EQ(_fa, _fb)) goto loc_001D8081; /* je: equal / zero */

loc_001D805A: ;
    ecx = esi;
    PUSH32(esp, 0x001D8061u); RECOMP_ABI_CALL(0x001D9990u, sub_001D9990); /* call 0x001D9990 */

loc_001D8061: ;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    eax = 0x80000000u;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x44) = eax;

loc_001D8081: ;
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
 * sub_001D80A0
 * Original: 0x001D80A0 - 0x001D80A9 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D80A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D80A0: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_00047F40(); return; /* tail jmp 0x00047F40 */

}

/**
 * sub_001D80B0
 * Original: 0x001D80B0 - 0x001D80BF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D80B0(void)
{

loc_001D80B0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D80BEu); RECOMP_ABI_CALL(0x001D68F0u, sub_001D68F0); /* call 0x001D68F0 */

loc_001D80BE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D80C0
 * Original: 0x001D80C0 - 0x001D80CF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D80C0(void)
{

loc_001D80C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D80CEu); RECOMP_ABI_CALL(0x001D6B20u, sub_001D6B20); /* call 0x001D6B20 */

loc_001D80CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D80D0
 * Original: 0x001D80D0 - 0x001D80D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D80D0(void)
{

loc_001D80D0: ;
    eax = 0x4411E4;
    esp += 4; return; /* ret */

}

/**
 * sub_001D80E0
 * Original: 0x001D80E0 - 0x001D8131 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D80E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D80E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2468DB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x54);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D8105u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8102u); } /* indirect call */
    }

loc_001D8105: ;
    MEM16(eax + 4) = 0x54;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001D8122u); RECOMP_ABI_CALL(0x001D6BD0u, sub_001D6BD0); /* call 0x001D6BD0 */

loc_001D8122: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D8140
 * Original: 0x001D8140 - 0x001D8171 (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8140: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D8148u); RECOMP_ABI_CALL(0x001D9A40u, sub_001D9A40); /* call 0x001D9A40 */

loc_001D8148: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    ecx = 0x80000000u;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = ecx;
    MEM32(esi + 0x1C) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D8180
 * Original: 0x001D8180 - 0x001D81E5 (101 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8180: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246901);
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
    if (CMP_EQ(_fa, _fb)) goto loc_001D81D4; /* je: equal / zero */

loc_001D81AA: ;
    ecx = esi;
    PUSH32(esp, 0x001D81B1u); RECOMP_ABI_CALL(0x001D9A40u, sub_001D9A40); /* call 0x001D9A40 */

loc_001D81B1: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    eax = 0x80000000u;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x1C) = edi;

loc_001D81D4: ;
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
 * sub_001D81F0
 * Original: 0x001D81F0 - 0x001D81F9 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D81F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D81F0: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_00047760(); return; /* tail jmp 0x00047760 */

}

/**
 * sub_001D8200
 * Original: 0x001D8200 - 0x001D820F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8200(void)
{

loc_001D8200: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D820Eu); RECOMP_ABI_CALL(0x001D70F0u, sub_001D70F0); /* call 0x001D70F0 */

loc_001D820E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D8210
 * Original: 0x001D8210 - 0x001D821F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8210(void)
{

loc_001D8210: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D821Eu); RECOMP_ABI_CALL(0x001D72B0u, sub_001D72B0); /* call 0x001D72B0 */

loc_001D821E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D8220
 * Original: 0x001D8220 - 0x001D8226 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8220(void)
{

loc_001D8220: ;
    eax = 0x44120C;
    esp += 4; return; /* ret */

}

/**
 * sub_001D8230
 * Original: 0x001D8230 - 0x001D8281 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8230: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24691B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x60);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D8255u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8252u); } /* indirect call */
    }

loc_001D8255: ;
    MEM16(eax + 4) = 0x60;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001D8272u); RECOMP_ABI_CALL(0x001D73C0u, sub_001D73C0); /* call 0x001D73C0 */

loc_001D8272: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D8290
 * Original: 0x001D8290 - 0x001D82C4 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8290: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D8298u); RECOMP_ABI_CALL(0x001D9A40u, sub_001D9A40); /* call 0x001D9A40 */

loc_001D8298: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    ecx = 0x80000000u;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D82D0
 * Original: 0x001D82D0 - 0x001D8338 (104 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D82D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D82D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246941);
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
    if (CMP_EQ(_fa, _fb)) goto loc_001D8327; /* je: equal / zero */

loc_001D82FA: ;
    ecx = esi;
    PUSH32(esp, 0x001D8301u); RECOMP_ABI_CALL(0x001D9A40u, sub_001D9A40); /* call 0x001D9A40 */

loc_001D8301: ;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    eax = 0x80000000u;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;

loc_001D8327: ;
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
 * sub_001D8340
 * Original: 0x001D8340 - 0x001D8349 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8340: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_000476D0(); return; /* tail jmp 0x000476D0 */

}

/**
 * sub_001D8350
 * Original: 0x001D8350 - 0x001D8394 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8350: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D8358u); RECOMP_ABI_CALL(0x001D9170u, sub_001D9170); /* call 0x001D9170 */

loc_001D8358: ;
    eax = 0x3F800000;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi) = 0x447A0000;
    MEM32(esi + 4) = 0x457A0000;
    MEM32(esi + 8) = 0x45BB8000;
    MEM32(esi + 0xC) = 0x44480000;
    MEM32(esi + 0x24) = 0x44FA0000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D83A0
 * Original: 0x001D83A0 - 0x001D83AF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D83A0(void)
{

loc_001D83A0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D83AEu); RECOMP_ABI_CALL(0x001D7500u, sub_001D7500); /* call 0x001D7500 */

loc_001D83AE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D83B0
 * Original: 0x001D83B0 - 0x001D83BF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D83B0(void)
{

loc_001D83B0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D83BEu); RECOMP_ABI_CALL(0x001D7550u, sub_001D7550); /* call 0x001D7550 */

loc_001D83BE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D83C0
 * Original: 0x001D83C0 - 0x001D83C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D83C0(void)
{

loc_001D83C0: ;
    eax = 0x441234;
    esp += 4; return; /* ret */

}

/**
 * sub_001D83D0
 * Original: 0x001D83D0 - 0x001D8421 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D83D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D83D0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24695B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x3C);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D83F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D83F2u); } /* indirect call */
    }

loc_001D83F5: ;
    MEM16(eax + 4) = 0x3C;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001D8412u); RECOMP_ABI_CALL(0x001D7720u, sub_001D7720); /* call 0x001D7720 */

loc_001D8412: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D8430
 * Original: 0x001D8430 - 0x001D846D (61 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8430: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246981);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(esp) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001D845E; /* je: equal / zero */

loc_001D8459: ;
    PUSH32(esp, 0x001D845Eu); RECOMP_ABI_CALL(0x001D8350u, sub_001D8350); /* call 0x001D8350 */

loc_001D845E: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D8470
 * Original: 0x001D8470 - 0x001D847F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8470(void)
{

loc_001D8470: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D847Eu); RECOMP_ABI_CALL(0x001D7900u, sub_001D7900); /* call 0x001D7900 */

loc_001D847E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D8480
 * Original: 0x001D8480 - 0x001D848F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8480(void)
{

loc_001D8480: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D848Eu); RECOMP_ABI_CALL(0x001D7980u, sub_001D7980); /* call 0x001D7980 */

loc_001D848E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D8490
 * Original: 0x001D8490 - 0x001D8496 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8490(void)
{

loc_001D8490: ;
    eax = 0x44125C;
    esp += 4; return; /* ret */

}

/**
 * sub_001D84A0
 * Original: 0x001D84A0 - 0x001D84F1 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D84A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D84A0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24699B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x38);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D84C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D84C2u); } /* indirect call */
    }

loc_001D84C5: ;
    MEM16(eax + 4) = 0x38;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001D84E2u); RECOMP_ABI_CALL(0x001D7A10u, sub_001D7A10); /* call 0x001D7A10 */

loc_001D84E2: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D8500
 * Original: 0x001D8500 - 0x001D8521 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8500: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D8508u); RECOMP_ABI_CALL(0x001D9A40u, sub_001D9A40); /* call 0x001D9A40 */

loc_001D8508: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = 0x80000000u;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D8530
 * Original: 0x001D8530 - 0x001D8585 (85 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8530: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2469C1);
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
    if (CMP_EQ(_fa, _fb)) goto loc_001D8574; /* je: equal / zero */

loc_001D855A: ;
    ecx = esi;
    PUSH32(esp, 0x001D8561u); RECOMP_ABI_CALL(0x001D9A40u, sub_001D9A40); /* call 0x001D9A40 */

loc_001D8561: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = 0x80000000u;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;

loc_001D8574: ;
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
 * sub_001D8590
 * Original: 0x001D8590 - 0x001D8599 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8590: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_000476A0(); return; /* tail jmp 0x000476A0 */

}

/**
 * sub_001D85A0
 * Original: 0x001D85A0 - 0x001D85AC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D85A0(void)
{

loc_001D85A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D85A8u); RECOMP_ABI_CALL(0x001D9D00u, sub_001D9D00); /* call 0x001D9D00 */

loc_001D85A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D85B0
 * Original: 0x001D85B0 - 0x001D85BF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D85B0(void)
{

loc_001D85B0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D85BEu); RECOMP_ABI_CALL(0x001D7B20u, sub_001D7B20); /* call 0x001D7B20 */

loc_001D85BE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D85C0
 * Original: 0x001D85C0 - 0x001D85CF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D85C0(void)
{

loc_001D85C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D85CEu); RECOMP_ABI_CALL(0x001D7B30u, sub_001D7B30); /* call 0x001D7B30 */

loc_001D85CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D85D0
 * Original: 0x001D85D0 - 0x001D85D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D85D0(void)
{

loc_001D85D0: ;
    eax = 0x441284;
    esp += 4; return; /* ret */

}

/**
 * sub_001D85E0
 * Original: 0x001D85E0 - 0x001D8631 (81 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D85E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D85E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2469DB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x40);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D8605u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D8602u); } /* indirect call */
    }

loc_001D8605: ;
    MEM16(eax + 4) = 0x40;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001D8622u); RECOMP_ABI_CALL(0x001D7B40u, sub_001D7B40); /* call 0x001D7B40 */

loc_001D8622: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D8640
 * Original: 0x001D8640 - 0x001D867D (61 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8640: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246A01);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(esp) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001D866E; /* je: equal / zero */

loc_001D8669: ;
    PUSH32(esp, 0x001D866Eu); RECOMP_ABI_CALL(0x001D9D00u, sub_001D9D00); /* call 0x001D9D00 */

loc_001D866E: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D8680
 * Original: 0x001D8680 - 0x001D868F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8680(void)
{

loc_001D8680: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D868Eu); RECOMP_ABI_CALL(0x001D7B90u, sub_001D7B90); /* call 0x001D7B90 */

loc_001D868E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D8690
 * Original: 0x001D8690 - 0x001D869F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8690(void)
{

loc_001D8690: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D869Eu); RECOMP_ABI_CALL(0x001D7BA0u, sub_001D7BA0); /* call 0x001D7BA0 */

loc_001D869E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D86A0
 * Original: 0x001D86A0 - 0x001D86A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D86A0(void)
{

loc_001D86A0: ;
    eax = 0x4412AC;
    esp += 4; return; /* ret */

}

/**
 * sub_001D86B0
 * Original: 0x001D86B0 - 0x001D8704 (84 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D86B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D86B0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246A1B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x390);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D86D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D86D5u); } /* indirect call */
    }

loc_001D86D8: ;
    MEM16(eax + 4) = 0x390;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001D86F5u); RECOMP_ABI_CALL(0x001D7BB0u, sub_001D7BB0); /* call 0x001D7BB0 */

loc_001D86F5: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D8710
 * Original: 0x001D8710 - 0x001D871C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8710(void)
{

loc_001D8710: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D8718u); RECOMP_ABI_CALL(0x001D8800u, sub_001D8800); /* call 0x001D8800 */

loc_001D8718: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D8720
 * Original: 0x001D8720 - 0x001D875D (61 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8720: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246A41);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(esp) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001D874E; /* je: equal / zero */

loc_001D8749: ;
    PUSH32(esp, 0x001D874Eu); RECOMP_ABI_CALL(0x001D8800u, sub_001D8800); /* call 0x001D8800 */

loc_001D874E: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D8760
 * Original: 0x001D8760 - 0x001D8769 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D8760: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_00047F30(); return; /* tail jmp 0x00047F30 */

}

/**
 * sub_001D8770
 * Original: 0x001D8770 - 0x001D877F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8770(void)
{

loc_001D8770: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D877Eu); RECOMP_ABI_CALL(0x001D2E20u, sub_001D2E20); /* call 0x001D2E20 */

loc_001D877E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D8780
 * Original: 0x001D8780 - 0x001D878F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8780(void)
{

loc_001D8780: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D878Eu); RECOMP_ABI_CALL(0x001D33B0u, sub_001D33B0); /* call 0x001D33B0 */

loc_001D878E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D8790
 * Original: 0x001D8790 - 0x001D8796 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8790(void)
{

loc_001D8790: ;
    eax = 0x4412D4;
    esp += 4; return; /* ret */

}

/**
 * sub_001D87A0
 * Original: 0x001D87A0 - 0x001D87F4 (84 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D87A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D87A0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246A5B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x390);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D87C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D87C5u); } /* indirect call */
    }

loc_001D87C8: ;
    MEM16(eax + 4) = 0x390;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001D87E5u); RECOMP_ABI_CALL(0x001D33F0u, sub_001D33F0); /* call 0x001D33F0 */

loc_001D87E5: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D8800
 * Original: 0x001D8800 - 0x001D885D (93 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8800: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D8808u); RECOMP_ABI_CALL(0x000B5E50u, sub_000B5E50); /* call 0x000B5E50 */

loc_001D8808: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    ecx = 0x80000000u;
    MEM32(esi + 0xC) = ecx;
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
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = ecx;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = ecx;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x60) = ecx;
    MEM32(esi) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D8860
 * Original: 0x001D8860 - 0x001D889D (61 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8860: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246A81);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(esp) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001D888E; /* je: equal / zero */

loc_001D8889: ;
    PUSH32(esp, 0x001D888Eu); RECOMP_ABI_CALL(0x001D8800u, sub_001D8800); /* call 0x001D8800 */

loc_001D888E: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D88A0
 * Original: 0x001D88A0 - 0x001D88A9 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D88A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D88A0: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_00047840(); return; /* tail jmp 0x00047840 */

}

/**
 * sub_001D88B0
 * Original: 0x001D88B0 - 0x001D88B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D88B0(void)
{

loc_001D88B0: ;
    eax = 0x4412FC;
    esp += 4; return; /* ret */

}

/**
 * sub_001D88C0
 * Original: 0x001D88C0 - 0x001D88E2 (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D88C0(void)
{

loc_001D88C0: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D88CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D88CCu); } /* indirect call */
    }

loc_001D88CF: ;
    MEM16(eax + 4) = 0xC;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2F9F4C;
    esp += 4; return; /* ret */

}

/**
 * sub_001D88F0
 * Original: 0x001D88F0 - 0x001D88F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D88F0(void)
{

loc_001D88F0: ;
    eax = 0x441324;
    esp += 4; return; /* ret */

}

/**
 * sub_001D8900
 * Original: 0x001D8900 - 0x001D893D (61 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8900: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246AA1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(esp) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001D892E; /* je: equal / zero */

loc_001D8929: ;
    PUSH32(esp, 0x001D892Eu); RECOMP_ABI_CALL(0x000B5E50u, sub_000B5E50); /* call 0x000B5E50 */

loc_001D892E: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D8940
 * Original: 0x001D8940 - 0x001D8973 (51 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8940: ;
    ecx = MEM32(0x4409AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x1C);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D894Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D894Cu); } /* indirect call */
    }

loc_001D894F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(eax + 4) = 0x1C;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x2F9F64;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM8(eax + 0x18) = LO8(ecx);
    MEM8(eax + 0x19) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D8980
 * Original: 0x001D8980 - 0x001D89A2 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D8980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D8980: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001D89B0
 * Original: 0x001D89B0 - 0x001D89B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D89B0(void)
{

loc_001D89B0: ;
    eax = 0x44134C;
    esp += 4; return; /* ret */

}
