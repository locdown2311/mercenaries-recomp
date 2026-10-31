/**
 * Mercenaries - Recompiled code chunk 43
 * Functions: 250 (0x002111C0 - 0x0021AB70)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002111C0
 * Original: 0x002111C0 - 0x0021122E (110 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002111C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002111C0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8F);
    PUSH32(esp, 0x002111CCu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_002111CC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x93);
    PUSH32(esp, 0x002111D8u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_002111D8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x002111E1u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_002111E1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5D);
    PUSH32(esp, 0x002111EAu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_002111EA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x66);
    PUSH32(esp, 0x002111F3u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_002111F3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x67);
    PUSH32(esp, 0x002111FCu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_002111FC: ;
    SET_LO8(eax, MEM8(0x6437D0));
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021121B; /* jne: not equal / not zero */

loc_00211208: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0x8B);
    PUSH32(esp, 0x00211217u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00211217: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0021121B: ;
    PUSH32(esp, 0x1B01);
    PUSH32(esp, 0x8B);
    PUSH32(esp, 0x0021122Au); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0021122A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00211230
 * Original: 0x00211230 - 0x002112C3 (147 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00211230: ;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0021123Cu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0021123C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00211247u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00211247: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00211252u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00211252: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0021125Du); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0021125D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00211268u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00211268: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00211273u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00211273: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00211278: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00211282u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00211282: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021128Cu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0021128C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00211296u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00211296: ;
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002112A0u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_002112A0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002112AAu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_002112AA: ;
    eax = MEM32(0x7B5310);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002112B8u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_002112B8: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00211278; /* jl: less (signed <) */

loc_002112C1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002112D0
 * Original: 0x002112D0 - 0x00211370 (160 bytes, 53 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002112D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002112D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x7934C0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002112E2u); RECOMP_ABI_CALL(0x000C2740u, sub_000C2740); /* call 0x000C2740 */

loc_002112E2: ;
    esi = MEM32(esp + 0xC);
    edi = eax;
    _fa = (uint32_t)(MEM32(esi * 4 + 0x7AD310)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi * 4 + 0x7AD310), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021136D; /* je: equal / zero */

loc_002112F1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021135E; /* je: equal / zero */

loc_002112F5: ;
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002112FFu); RECOMP_ABI_CALL(0x00289E20u, sub_00289E20); /* call 0x00289E20 */

loc_002112FF: ;
    edx = MEM32(edi + 0x54);
    eax = esi;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x7AD128)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x7AD128) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00211346; /* je: equal / zero */

loc_0021130F: ;
    PUSH32(esp, ebx);
    ecx = esi;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(0x298ED8);
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x298ED8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00211339; /* jne: not equal / not zero */

loc_0021132B: ;
    ecx = MEM32(0x7B5310);
    MEM32(eax + 0x298EF8) = ecx;
    goto loc_0021133F;

loc_00211339: ;
    MEM32(eax + 0x298EF8) = edx;

loc_0021133F: ;
    MEM32(eax + 0x7AD128) = edx;
    POP32(esp, ebx);

loc_00211346: ;
    eax = MEM32(edi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00211366; /* je: equal / zero */

loc_0021134D: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00211354u); RECOMP_ABI_CALL(0x00289FD0u, sub_00289FD0); /* call 0x00289FD0 */

loc_00211354: ;
    MEM32(esi * 4 + 0x7AD310) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021135E: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00211366u); RECOMP_ABI_CALL(0x00289E20u, sub_00289E20); /* call 0x00289E20 */

loc_00211366: ;
    MEM32(esi * 4 + 0x7AD310) = edi;

loc_0021136D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00211370
 * Original: 0x00211370 - 0x00211490 (288 bytes, 63 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211370: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x50));
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = 0x2E0465;
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0x3019BC;
    MEM32(esp + 0xC) = 0x3019A4;
    MEM32(esp + 0x10) = 0x301988;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = 0x301974;
    MEM32(esp + 0x1C) = 0x301958;
    MEM32(esp + 0x20) = 0x301938;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = 0x301924;
    MEM32(esp + 0x2C) = 0x301910;
    MEM32(esp + 0x30) = 0x301900;
    MEM32(esp + 0x34) = 0x3018E8;
    MEM32(esp + 0x38) = 0x3018D4;
    MEM32(esp + 0x3C) = 0x3018B8;
    MEM32(esp + 0x40) = 0x3018A4;
    MEM32(esp + 0x44) = 0x30188C;
    MEM32(esp + 0x48) = 0x301870;
    MEM32(esp + 0x4C) = 0x301854;
    MEM32(esp + 0x50) = 0x30183C;
    MEM32(esp + 0x54) = 0x30181C;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00211419u); RECOMP_ABI_CALL(0x002293FDu, sub_002293FD); /* call 0x002293FD */

loc_00211419: ;
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFDu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00211442; /* ja: above (unsigned >) */

loc_00211421: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x21147C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00211428u) goto loc_00211428;
    if (_jt == 0x0021142Fu) goto loc_0021142F;
    if (_jt == 0x00211436u) goto loc_00211436;
    if (_jt == 0x0021143Du) goto loc_0021143D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00211428: ;
    edi = 3;
    goto loc_00211442;

loc_0021142F: ;
    edi = 1;
    goto loc_00211442;

loc_00211436: ;
    edi = 4;
    goto loc_00211442;

loc_0021143D: ;
    edi = 2;

loc_00211442: ;
    PUSH32(esp, 0x00211447u); RECOMP_ABI_CALL(0x00210D40u, sub_00210D40); /* call 0x00210D40 */

loc_00211447: ;
    if (4) _cf = (int)(((edi) >> (32 - (4))) & 1);
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = 0xA0;
    edi = esp + edi + 8;

loc_00211453: ;
    eax = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00211461u); RECOMP_ABI_CALL(0x00210F70u, sub_00210F70); /* call 0x00210F70 */

loc_00211461: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x20)) >> 32) & 1);
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x120) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x120 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00211453; /* jb: below (unsigned <) */

loc_00211472: ;
    PUSH32(esp, 0x00211477u); RECOMP_ABI_CALL(0x002111B0u, sub_002111B0); /* call 0x002111B0 */

loc_00211477: ;
    goto loc_00211477;

    /* nop */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x21) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x21) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x21) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(-872406764)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(-872406764) = MEM8(-872406764) + HI8(ebx);
    _fa = (uint32_t)(MEM8(-872406764)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00211490
 * Original: 0x00211490 - 0x00211B61 (1745 bytes, 385 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00211490(void)
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

loc_00211490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ecx = esp + 8;
    MEM32(esp + 8) = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002114AEu); RECOMP_ABI_CALL(0x0028A090u, sub_0028A090); /* call 0x0028A090 */

loc_002114AE: ;
    xmm0 = XMM_SCALAR(MEMF(0x6437CC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 8); /* addss */
    MEMF(0x6437CC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002114C8u); RECOMP_ABI_CALL(0x00211F40u, sub_00211F40); /* call 0x00211F40 */

loc_002114C8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002114CDu); RECOMP_ABI_CALL(0x00210750u, sub_00210750); /* call 0x00210750 */

loc_002114CD: ;
    eax = MEM32(0x6437B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00211585; /* je: equal / zero */

loc_002114DA: ;
    edx = esp + 0x40;
    ecx = eax + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002114E7u); RECOMP_ABI_CALL(0x00044FF0u, sub_00044FF0); /* call 0x00044FF0 */

loc_002114E7: ;
    PUSH32(esp, eax);
    ecx = 0x7B5320;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002114F2u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_002114F2: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(0x6437B4);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x7B5328); /* subss */
    MEMF(0x7B5328) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x7B5338); /* subss */
    MEMF(0x7B5338) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7B5358); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x7B5348); /* subss */
    MEMF(0x7B5358) = xmm0.f[0]; /* movss */
    MEMF(0x7B5348) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    edx = esp + 0x10;
    ecx = 0x24;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211580u); RECOMP_ABI_CALL(0x00288900u, sub_00288900); /* call 0x00288900 */

loc_00211580: ;
    goto loc_00211610;

loc_00211585: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x7B5358) = xmm0.f[0]; /* movss */
    MEMF(0x7B5354) = xmm0.f[0]; /* movss */
    MEMF(0x7B5350) = xmm0.f[0]; /* movss */
    MEMF(0x7B534C) = xmm0.f[0]; /* movss */
    MEMF(0x7B5344) = xmm0.f[0]; /* movss */
    MEMF(0x7B5340) = xmm0.f[0]; /* movss */
    MEMF(0x7B533C) = xmm0.f[0]; /* movss */
    MEMF(0x7B5338) = xmm0.f[0]; /* movss */
    MEMF(0x7B5330) = xmm0.f[0]; /* movss */
    MEMF(0x7B532C) = xmm0.f[0]; /* movss */
    MEMF(0x7B5328) = xmm0.f[0]; /* movss */
    MEMF(0x7B5324) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(0x7B535C) = xmm0.f[0]; /* movss */
    MEMF(0x7B5348) = xmm0.f[0]; /* movss */
    MEMF(0x7B5334) = xmm0.f[0]; /* movss */
    MEMF(0x7B5320) = xmm0.f[0]; /* movss */

loc_00211610: ;
    PUSH32(esp, 0x6437E0);
    PUSH32(esp, 0x7B5320);
    PUSH32(esp, 0x7B5360);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211624u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_00211624: ;
    MEM32(0x7AD5BC) = 0;
    esi = 0x7ACDD8;

loc_00211633: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021163Au); RECOMP_ABI_CALL(0x0020F930u, sub_0020F930); /* call 0x0020F930 */

loc_0021163A: ;
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x98;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7AD0D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7AD0D0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00211633; /* jl: less (signed <) */

loc_00211648: ;
    MEM32(0x7AD5B8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211657u); RECOMP_ABI_CALL(0x00210190u, sub_00210190); /* call 0x00210190 */

loc_00211657: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021165Cu); RECOMP_ABI_CALL(0x002111C0u, sub_002111C0); /* call 0x002111C0 */

loc_0021165C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211661u); RECOMP_ABI_CALL(0x00211230u, sub_00211230); /* call 0x00211230 */

loc_00211661: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211666u); RECOMP_ABI_CALL(0x0020FA00u, sub_0020FA00); /* call 0x0020FA00 */

loc_00211666: ;
    xmm2 = XMM_SCALAR(MEMF(0x6437E0)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x7AD5F4); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(0x3019D8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x7AD5FC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30F278)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x30F27C)); /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x6437F4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x7AD5F0); /* mulss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x643808)); /* movss */
    ecx = MEM32(esp + 0x14);
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x7AD5F8)); /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x643818)); /* movss */
    MEM32(0x7B53A8) = edx;
    edx = MEM32(esp + 0x14);
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    MEM32(0x7B53A0) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(0x7B53A4) = ecx;
    ecx = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    MEM32(0x7B53B4) = edx;
    edx = MEM32(0x30F280);
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    MEM32(0x7B53AC) = eax;
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    MEM32(0x7B53B0) = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    PUSH32(esp, 0x8A);
    MEM32(0x7B53B8) = eax;
    MEM32(0x7B53BC) = ecx;
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211797u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00211797: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    edx = 0x7B53A0;
    ecx = 0x1A;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002117ABu); RECOMP_ABI_CALL(0x00288AF0u, sub_00288AF0); /* call 0x00288AF0 */

loc_002117AB: ;
    edx = esp + 0x20;
    ecx = 0x1D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002117B9u); RECOMP_ABI_CALL(0x00288900u, sub_00288900); /* call 0x00288900 */

loc_002117B9: ;
    eax = MEM32(0x7B5314);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002117D2; /* jne: not equal / not zero */

loc_002117C2: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 8) = 2;
    xmm2 = xmm1; /* movaps */
    goto loc_002117EC;

loc_002117D2: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002117E1; /* jne: not equal / not zero */

loc_002117D9: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = xmm1; /* movaps */
    goto loc_002117EC;

loc_002117E1: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */

loc_002117EC: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD5FC)); /* movss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm3.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD5F8)); /* movss */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm3.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    edx = esp + 0x30;
    ecx = 0x1C;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021183Eu); RECOMP_ABI_CALL(0x00288900u, sub_00288900); /* call 0x00288900 */

loc_0021183E: ;
    SET_LO8(ecx, MEM8(0x841FC0));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = 0x841FD8;
    if (CMP_NE(_fa, _fb)) goto loc_00211852; /* jne: not equal / not zero */

loc_0021184D: ;
    eax = 0x841FCC;

loc_00211852: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(0x30F2A0) = eax;
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(0x30F29C) = edx;
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(0x30F2A8) = eax;
    eax = MEM32(0x30F2CC);
    MEM32(0x30F2A4) = edx;
    edx = eax;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_002118C9; /* jge: greater or equal (signed >=) */

loc_002118C3: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_002118C9: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3019D4)); /* fmul dword ptr [0x3019d4] */
    edx = eax;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_002118F0; /* jge: greater or equal (signed >=) */

loc_002118EA: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_002118F0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3019D4)); /* fmul dword ptr [0x3019d4] */
    edx = eax;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00211917; /* jge: greater or equal (signed >=) */

loc_00211911: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00211917: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3019D4)); /* fmul dword ptr [0x3019d4] */
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00211936; /* jge: greater or equal (signed >=) */

loc_00211930: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00211936: ;
    eax = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3019D4)); /* fmul dword ptr [0x3019d4] */
    edx = MEM32(esp + 0x14);
    MEM32(0x30F2AC) = eax;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(0x30F2B4) = eax;
    eax = MEM32(0x30F2D4);
    if (CMP_EQ(_fa, _fb)) eax = MEM32(0x30F2D0); /* cmove */
    ecx = eax;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x30F2B0) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEM32(0x30F2B8) = edx;
    MEM8(0x841FC0) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_00211995; /* jge: greater or equal (signed >=) */

loc_0021198F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00211995: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3019D4)); /* fmul dword ptr [0x3019d4] */
    edx = eax;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_002119BC; /* jge: greater or equal (signed >=) */

loc_002119B6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_002119BC: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3019D4)); /* fmul dword ptr [0x3019d4] */
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_002119E3; /* jge: greater or equal (signed >=) */

loc_002119DD: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_002119E3: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3019D4)); /* fmul dword ptr [0x3019d4] */
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00211A02; /* jge: greater or equal (signed >=) */

loc_002119FC: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00211A02: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3019D4)); /* fmul dword ptr [0x3019d4] */
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    MEM32(0x30F2BC) = edx;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x1C);
    MEM32(0x30F2C4) = ecx;
    MEM32(0x30F2C8) = edx;
    PUSH32(esp, 0xC);
    edx = 0x30F29C;
    ecx = 1;
    MEM32(0x30F2C0) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211A44u); RECOMP_ABI_CALL(0x00288AF0u, sub_00288AF0); /* call 0x00288AF0 */

loc_00211A44: ;
    PUSH32(esp, 0x25);
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211A4Du); RECOMP_ABI_CALL(0x0020FA20u, sub_0020FA20); /* call 0x0020FA20 */

loc_00211A4D: ;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211A56u); RECOMP_ABI_CALL(0x0020FA20u, sub_0020FA20); /* call 0x0020FA20 */

loc_00211A56: ;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211A5Fu); RECOMP_ABI_CALL(0x0020FA20u, sub_0020FA20); /* call 0x0020FA20 */

loc_00211A5F: ;
    eax = MEM32(0x30F270);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00211A78; /* je: equal / zero */

loc_00211A6C: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211A75u); RECOMP_ABI_CALL(0x0020FA20u, sub_0020FA20); /* call 0x0020FA20 */

loc_00211A75: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00211A78: ;
    _fa = (uint32_t)(MEM8(0x6437D0)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x6437D0), 0x10 (8-bit) */
    eax = 0xF0;
    if (TEST_NZ(_fa, _fb)) goto loc_00211A8B; /* jne: not equal / not zero */

loc_00211A86: ;
    eax = MEM32(0x7AD5E8);

loc_00211A8B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    eax = eax | 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211A9Du); RECOMP_ABI_CALL(0x00210730u, sub_00210730); /* call 0x00210730 */

loc_00211A9D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x30F19C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211AAAu); RECOMP_ABI_CALL(0x00209730u, sub_00209730); /* call 0x00209730 */

loc_00211AAA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211AAFu); RECOMP_ABI_CALL(0x00210090u, sub_00210090); /* call 0x00210090 */

loc_00211AAF: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211AB6u); RECOMP_ABI_CALL(0x00288F80u, sub_00288F80); /* call 0x00288F80 */

loc_00211AB6: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211ABDu); RECOMP_ABI_CALL(0x0028C5B0u, sub_0028C5B0); /* call 0x0028C5B0 */

loc_00211ABD: ;
    PUSH32(esp, 0x7B5318);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211AC7u); RECOMP_ABI_CALL(0x002888E0u, sub_002888E0); /* call 0x002888E0 */

loc_00211AC7: ;
    eax = MEM32(0x7B5318);
    eax = eax | 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    MEM32(0x7B5318) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211ADAu); RECOMP_ABI_CALL(0x00288D30u, sub_00288D30); /* call 0x00288D30 */

loc_00211ADA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211AE3u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_00211AE3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211AECu); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_00211AEC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211AF5u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_00211AF5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211AFEu); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_00211AFE: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211B0Au); RECOMP_ABI_CALL(0x00289FD0u, sub_00289FD0); /* call 0x00289FD0 */

loc_00211B0A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211B13u); RECOMP_ABI_CALL(0x00289FD0u, sub_00289FD0); /* call 0x00289FD0 */

loc_00211B13: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211B1Cu); RECOMP_ABI_CALL(0x00289FD0u, sub_00289FD0); /* call 0x00289FD0 */

loc_00211B1C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211B25u); RECOMP_ABI_CALL(0x00289FD0u, sub_00289FD0); /* call 0x00289FD0 */

loc_00211B25: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211B30u); RECOMP_ABI_CALL(0x00288B30u, sub_00288B30); /* call 0x00288B30 */

loc_00211B30: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211B3Bu); RECOMP_ABI_CALL(0x00288B30u, sub_00288B30); /* call 0x00288B30 */

loc_00211B3B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211B40u); RECOMP_ABI_CALL(0x00210170u, sub_00210170); /* call 0x00210170 */

loc_00211B40: ;
    MEM32(0x6437BC) = MEM32(0x6437BC) + 1;
    _fa = (uint32_t)(MEM32(0x6437BC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00211B52; /* jne: not equal / not zero */

loc_00211B48: ;
    MEM32(0x6437BC) = 1;

loc_00211B52: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211B57u); RECOMP_ABI_CALL(0x00215D90u, sub_00215D90); /* call 0x00215D90 */

loc_00211B57: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211B5Cu); RECOMP_ABI_CALL(0x00206850u, sub_00206850); /* call 0x00206850 */

loc_00211B5C: ;
    POP32(esp, esi);
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
 * sub_00211B70
 * Original: 0x00211B70 - 0x00211BCD (93 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00211B70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00211BAD; /* jge: greater or equal (signed >=) */

loc_00211B7E: ;
    edi = edi;

loc_00211B80: ;
    edx = MEM32(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi) = edx;
    if ((_fa != 0)) goto loc_00211BA5; /* jne: not equal / not zero */

loc_00211B8C: ;
    PUSH32(esp, 0x42800000);
    PUSH32(esp, 0x42800000);
    PUSH32(esp, 0x200);
    ecx = 0x842010;
    PUSH32(esp, 0x00211BA5u); RECOMP_ABI_CALL(0x00225480u, sub_00225480); /* call 0x00225480 */

loc_00211BA5: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00211B80; /* jl: less (signed <) */

loc_00211BAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */

loc_00211BAD: ;
    if (CMP_LE(_fas, _fbs)) goto loc_00211BC8; /* jle: less or equal (signed <=) */

loc_00211BAF: ;
    /* nop */

loc_00211BB0: ;
    edx = MEM32(esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = edx;
    if ((_fa != 0)) goto loc_00211BC4; /* jne: not equal / not zero */

loc_00211BBA: ;
    ecx = 0x842010;
    PUSH32(esp, 0x00211BC4u); RECOMP_ABI_CALL(0x00223E00u, sub_00223E00); /* call 0x00223E00 */

loc_00211BC4: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00211BB0; /* jg: greater (signed >) */

loc_00211BC8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00211BD0
 * Original: 0x00211BD0 - 0x00211BD8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211BD0(void)
{

loc_00211BD0: ;
    MEM8(0x841FC0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00211BE0
 * Original: 0x00211BE0 - 0x00211BFB (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00211BE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00211BF9; /* je: equal / zero */

loc_00211BEA: ;
    PUSH32(esp, esi);
    ecx = 0x30F2D8;
    PUSH32(esp, 0x00211BF5u); RECOMP_ABI_CALL(0x00149A20u, sub_00149A20); /* call 0x00149A20 */

loc_00211BF5: ;
    MEM8(esi + 0x10) = 0;

loc_00211BF9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00211C00
 * Original: 0x00211C00 - 0x00211C86 (134 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211C00(void)
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

loc_00211C00: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00211C0Eu); RECOMP_ABI_CALL(0x001F9DA0u, sub_001F9DA0); /* call 0x001F9DA0 */

loc_00211C0E: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00211C18u); RECOMP_ABI_CALL(0x001F9D70u, sub_001F9D70); /* call 0x001F9D70 */

loc_00211C18: ;
    fp_top() = -fp_top(); /* fchs */
    eax = MEM32(esp + 0x2C);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00211C32u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00211C32: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esp + 0x20);
    xmm5 = xmm0; /* movaps */
    xmm1 = xmm2; /* movaps */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(0x841FCC) = xmm1.f[0]; /* movss */
    MEM32(0x841FD0) = eax;
    MEMF(0x841FD4) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
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
 * sub_00211C90
 * Original: 0x00211C90 - 0x00211E12 (386 bytes, 133 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211C90(void)
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

loc_00211C90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0xEFF9A2ACu);
    ecx = ebx;
    PUSH32(esp, 0x00211CA6u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_00211CA6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00211CDE; /* je: equal / zero */

loc_00211CAA: ;
    ecx = ebx;
    PUSH32(esp, 0x00211CB1u); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_00211CB1: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD3DC)); /* fmul dword ptr [0x2dd3dc] */
    ecx = ebx;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00211CC2u); RECOMP_ABI_CALL(0x001EF100u, sub_001EF100); /* call 0x001EF100 */

loc_00211CC2: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2DD3DC)); /* fmul dword ptr [0x2dd3dc] */
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00211CDBu); RECOMP_ABI_CALL(0x00211C00u, sub_00211C00); /* call 0x00211C00 */

loc_00211CDB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00211CDE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8D37D438u);
    ecx = ebx;
    PUSH32(esp, 0x00211CECu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_00211CEC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00211D6A; /* je: equal / zero */

loc_00211CF0: ;
    ecx = ebx;
    PUSH32(esp, 0x00211CF7u); RECOMP_ABI_CALL(0x001EF0D0u, sub_001EF0D0); /* call 0x001EF0D0 */

loc_00211CF7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00211D0D; /* jle: less or equal (signed <=) */

loc_00211D06: ;
    edi = 0xFF;
    goto loc_00211D13;

loc_00211D0D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00211D13; /* jge: greater or equal (signed >=) */

loc_00211D11: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00211D13: ;
    ecx = ebx;
    PUSH32(esp, 0x00211D1Au); RECOMP_ABI_CALL(0x001EF0D0u, sub_001EF0D0); /* call 0x001EF0D0 */

loc_00211D1A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00211D30; /* jle: less or equal (signed <=) */

loc_00211D29: ;
    esi = 0xFF;
    goto loc_00211D36;

loc_00211D30: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00211D36; /* jge: greater or equal (signed >=) */

loc_00211D34: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00211D36: ;
    ecx = ebx;
    PUSH32(esp, 0x00211D3Du); RECOMP_ABI_CALL(0x001EF0D0u, sub_001EF0D0); /* call 0x001EF0D0 */

loc_00211D3D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00211D50; /* jle: less or equal (signed <=) */

loc_00211D49: ;
    eax = 0xFF;
    goto loc_00211D56;

loc_00211D50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00211D56; /* jge: greater or equal (signed >=) */

loc_00211D54: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00211D56: ;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x30F2D0) = eax;

loc_00211D6A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8E588122u);
    ecx = ebx;
    PUSH32(esp, 0x00211D78u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_00211D78: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00211E0B; /* je: equal / zero */

loc_00211D80: ;
    ecx = ebx;
    PUSH32(esp, 0x00211D87u); RECOMP_ABI_CALL(0x001EF0D0u, sub_001EF0D0); /* call 0x001EF0D0 */

loc_00211D87: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00211D9D; /* jle: less or equal (signed <=) */

loc_00211D96: ;
    edi = 0xFF;
    goto loc_00211DA3;

loc_00211D9D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00211DA3; /* jge: greater or equal (signed >=) */

loc_00211DA1: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00211DA3: ;
    ecx = ebx;
    PUSH32(esp, 0x00211DAAu); RECOMP_ABI_CALL(0x001EF0D0u, sub_001EF0D0); /* call 0x001EF0D0 */

loc_00211DAA: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00211DC0; /* jle: less or equal (signed <=) */

loc_00211DB9: ;
    esi = 0xFF;
    goto loc_00211DC6;

loc_00211DC0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00211DC6; /* jge: greater or equal (signed >=) */

loc_00211DC4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00211DC6: ;
    ecx = ebx;
    PUSH32(esp, 0x00211DCDu); RECOMP_ABI_CALL(0x001EF0D0u, sub_001EF0D0); /* call 0x001EF0D0 */

loc_00211DCD: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00211DE0; /* jle: less or equal (signed <=) */

loc_00211DD9: ;
    eax = 0xFF;
    goto loc_00211DE6;

loc_00211DE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00211DE6; /* jge: greater or equal (signed >=) */

loc_00211DE4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00211DE6: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0xFFFF8000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 0xFFFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x30F2CC) = eax;

loc_00211E0B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00211E20
 * Original: 0x00211E20 - 0x00211E40 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00211E20: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00211E3E; /* je: equal / zero */

loc_00211E2A: ;
    PUSH32(esp, 0x00211E2Fu); RECOMP_ABI_CALL(0x00211BE0u, sub_00211BE0); /* call 0x00211BE0 */

loc_00211E2F: ;
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = 0x842010;
    PUSH32(esp, 0x00211E3Eu); RECOMP_ABI_CALL(0x00224CD0u, sub_00224CD0); /* call 0x00224CD0 */

loc_00211E3E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00211E40
 * Original: 0x00211E40 - 0x00211EC4 (132 bytes, 37 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00211E40: ;
    SET_LO8(eax, MEM8(ecx + 0x10));
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00211EA3; /* je: equal / zero */

loc_00211E50: ;
    eax = ecx + 0x14;
    PUSH32(esp, esi);
    edx = eax;
    esi = MEM32(edx);
    MEM32(esp + 4) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 8) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    PUSH32(esp, eax);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x842010;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x00211E9Cu); RECOMP_ABI_CALL(0x00224DA0u, sub_00224DA0); /* call 0x00224DA0 */

loc_00211E9C: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00211EA3: ;
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00211ED0
 * Original: 0x00211ED0 - 0x00211F3C (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00211ED0: ;
    SET_LO8(eax, MEM8(ecx + 0x10));
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00211F31; /* je: equal / zero */

loc_00211EE0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    PUSH32(esp, esi);
    eax = ecx + 0x14;
    edx = eax;
    esi = MEM32(edx);
    MEM32(esp + 4) = esi;
    esi = MEM32(edx + 4);
    MEM32(esp + 8) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = edx;
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00211F1A; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00211F0F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00211F14u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00211F11u); } /* indirect call */
    }

loc_00211F14: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00211F1A: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = 0x842010;
    PUSH32(esp, 0x00211F2Bu); RECOMP_ABI_CALL(0x00224DA0u, sub_00224DA0); /* call 0x00224DA0 */

loc_00211F2B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00211F31: ;
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00211F40
 * Original: 0x00211F40 - 0x00212004 (196 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00211F40: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3019E0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x00211F57u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00211F57: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x80);
    PUSH32(esp, edi);
    ecx = 0x842010;
    PUSH32(esp, 0x00211F6Cu); RECOMP_ABI_CALL(0x00223FE0u, sub_00223FE0); /* call 0x00223FE0 */

loc_00211F6C: ;
    ebx = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(0x841FC8) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00211FDE; /* jle: less or equal (signed <=) */

loc_00211F7E: ;
    edi = edi;

loc_00211F80: ;
    eax = MEM32(edi + esi * 4);
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    PUSH32(esp, 0);
    edx = ecx;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(0x6437B4);
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00211FC0u); RECOMP_ABI_CALL(0x001F8CA0u, sub_001F8CA0); /* call 0x001F8CA0 */

loc_00211FC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00211FD9; /* jl: less (signed <) */

loc_00211FC4: ;
    eax = MEM32(0x841FC8);
    ecx = MEM32(edi + esi * 4);
    MEM32(eax * 4 + 0x841BC0) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x841FC8) = eax;

loc_00211FD9: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00211F80; /* jl: less (signed <) */

loc_00211FDE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00211FE4u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00211FE4: ;
    eax = MEM32(0x841FC8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_00212000; /* jle: less or equal (signed <=) */

loc_00211FF6: ;
    eax = 0x80;
    MEM32(0x841FC8) = eax;

loc_00212000: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00212010
 * Original: 0x00212010 - 0x0021204F (63 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212010: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM8(eax + 0x10) = LO8(ecx);
    PUSH32(esp, esi);
    MEM32(eax) = 0x2E7468;
    esi = MEM32(edx);
    ecx = eax + 0x14;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(ecx + 8) = esi;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x24) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00212050
 * Original: 0x00212050 - 0x0021206B (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212050: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212069; /* jne: not equal / not zero */

loc_0021205A: ;
    PUSH32(esp, esi);
    ecx = 0x30F2D8;
    PUSH32(esp, 0x00212065u); RECOMP_ABI_CALL(0x0014A2A0u, sub_0014A2A0); /* call 0x0014A2A0 */

loc_00212065: ;
    MEM8(esi + 0x10) = 1;

loc_00212069: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00212070
 * Original: 0x00212070 - 0x002120A1 (49 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212070(void)
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

loc_00212070: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x20); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00212082; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x20)) */

loc_0021207C: ;
    eax = MEM32(esi);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

loc_00212082: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021209F; /* jne: not equal / not zero */

loc_00212089: ;
    ecx = esi;
    PUSH32(esp, 0x00212090u); RECOMP_ABI_CALL(0x00212050u, sub_00212050); /* call 0x00212050 */

loc_00212090: ;
    ecx = esi + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = 0x842010;
    PUSH32(esp, 0x0021209Fu); RECOMP_ABI_CALL(0x00224C40u, sub_00224C40); /* call 0x00224C40 */

loc_0021209F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002120B0
 * Original: 0x002120B0 - 0x00212361 (689 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002120B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_002120B0: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x841FC8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_002122BC; /* jl: less (signed <) */

loc_002120CF: ;
    PUSH32(esp, edi);
    edi = ebx + -3;
    goto loc_002120E0;

    /* nop */
    /* nop */

loc_002120E0: ;
    esi = MEM32(edx * 4 + 0x841BC0);
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0xC); /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm4 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00212154; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00212146: ;
    MEM32(eax * 4 + 0x841DC0) = esi;
    MEMF(esp + eax * 4 + 0xC) = xmm0.f[0]; /* movss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00212154: ;
    esi = MEM32(edx * 4 + 0x841BC4);
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0xC); /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm4 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002121C8; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_002121BA: ;
    MEM32(eax * 4 + 0x841DC0) = esi;
    MEMF(esp + eax * 4 + 0xC) = xmm0.f[0]; /* movss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002121C8: ;
    esi = MEM32(edx * 4 + 0x841BC8);
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0xC); /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm4 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0021223C; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_0021222E: ;
    MEM32(eax * 4 + 0x841DC0) = esi;
    MEMF(esp + eax * 4 + 0xC) = xmm0.f[0]; /* movss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0021223C: ;
    esi = MEM32(edx * 4 + 0x841BCC);
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0xC); /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm4 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002122B0; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_002122A2: ;
    MEM32(eax * 4 + 0x841DC0) = esi;
    MEMF(esp + eax * 4 + 0xC) = xmm0.f[0]; /* movss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002122B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002120E0; /* jl: less (signed <) */

loc_002122BB: ;
    POP32(esp, edi);

loc_002122BC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00212339; /* jge: greater or equal (signed >=) */

loc_002122C0: ;
    esi = MEM32(edx * 4 + 0x841BC0);
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0xC); /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm4 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00212334; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00212326: ;
    MEM32(eax * 4 + 0x841DC0) = esi;
    MEMF(esp + eax * 4 + 8) = xmm0.f[0]; /* movss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00212334: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002122C0; /* jl: less (signed <) */

loc_00212339: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_0021235A; /* jle: less or equal (signed <=) */

loc_00212340: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, 0x841DC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00212352u); RECOMP_ABI_CALL(0x00224AD0u, sub_00224AD0); /* call 0x00224AD0 */

loc_00212352: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 4;

loc_0021235A: ;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00212370
 * Original: 0x00212370 - 0x002126F1 (897 bytes, 276 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212370(void)
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

loc_00212370: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x301A18);
    PUSH32(esp, 2);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x00212388u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00212388: ;
    PUSH32(esp, 0x3019FC);
    ebp = eax;
    PUSH32(esp, 2);
    PUSH32(esp, 0x400);
    MEM32(esp + 0x30) = ebp;
    PUSH32(esp, 0x0021239Fu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0021239F: ;
    esi = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebp);
    ecx = 0x842010;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x002123C6u); RECOMP_ABI_CALL(0x00224F60u, sub_00224F60); /* call 0x00224F60 */

loc_002123C6: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x28) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021269D; /* jle: less or equal (signed <=) */

loc_002123D2: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0021257E; /* jl: less (signed <) */

loc_002123EC: ;
    ecx = ebp + 8;
    /* nop */

loc_002123F0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x28) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002125E4; /* jge: greater or equal (signed >=) */

loc_002123FA: ;
    eax = MEM32(ecx + -8);
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    edx = MEM32(esp + 0x20);
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00212450; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_0021244C: ;
    MEM32(edx + edi * 4) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00212450: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x28) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002125E4; /* jge: greater or equal (signed >=) */

loc_0021245A: ;
    eax = MEM32(ecx + -4);
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002124AC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_002124A8: ;
    MEM32(edx + edi * 4) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002124AC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x28) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002125E4; /* jge: greater or equal (signed >=) */

loc_002124B6: ;
    eax = MEM32(ecx);
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00212507; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_00212503: ;
    MEM32(edx + edi * 4) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00212507: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x28) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002125E4; /* jge: greater or equal (signed >=) */

loc_00212511: ;
    eax = MEM32(ecx + 4);
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00212563; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_0021255F: ;
    MEM32(edx + edi * 4) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00212563: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebx + -3;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002123F0; /* jl: less (signed <) */

loc_0021257C: ;
    ecx = eax;

loc_0021257E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002125E4; /* jge: greater or equal (signed >=) */

loc_00212582: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x28) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002125E4; /* jge: greater or equal (signed >=) */

loc_00212588: ;
    eax = MEM32(ebp + ecx * 4);
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002125DF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_002125D7: ;
    edx = MEM32(esp + 0x20);
    MEM32(edx + edi * 4) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002125DF: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00212582; /* jl: less (signed <) */

loc_002125E4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00212643; /* jl: less (signed <) */

loc_002125EB: ;
    ecx = MEM32(esp + 0x14);
    esi = ebp;
    eax = ecx + 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx + -4;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ebp + 0xC;
    ebp = ecx * 4;
    MEM32(esp + 0x10) = ebp;
    goto loc_00212610;

    /* nop */

loc_00212610: ;
    ebp = MEM32(edx + -12);
    ebp = MEM32(ebp + 0x20);
    MEM32(eax + -4) = ebp;
    ebp = MEM32(eax + esi);
    ebp = MEM32(ebp + 0x20);
    MEM32(eax) = ebp;
    ebp = MEM32(edx + -4);
    ebp = MEM32(ebp + 0x20);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(edx);
    ebp = MEM32(ebp + 0x20);
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
    if ((_fa != 0)) goto loc_00212610; /* jne: not equal / not zero */

loc_0021263B: ;
    ebp = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x10);

loc_00212643: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00212664; /* jge: greater or equal (signed >=) */

loc_00212647: ;
    ecx = MEM32(esp + 0x14);
    edx = ebp;
    eax = ecx + esi * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00212656: ;
    esi = MEM32(eax + edx);
    esi = MEM32(esi + 0x20);
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00212656; /* jne: not equal / not zero */

loc_00212664: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00212672u); RECOMP_ABI_CALL(0x00224AD0u, sub_00224AD0); /* call 0x00224AD0 */

loc_00212672: ;
    ebx = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002126D4; /* jge: greater or equal (signed >=) */

loc_0021267D: ;
    edx = MEM32(esp + 0x20);
    ecx = ebx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx + edi * 4;
    esi = ebp;
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
    goto loc_002126D4;

loc_0021269D: ;
    edx = MEM32(esp + 0x20);
    eax = ebx * 4;
    esi = ebp;
    ecx = eax;
    ebp = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx;
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
    ecx = ebp;
    ebp = MEM32(esp + 0x18);
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
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002126D4; /* jge: greater or equal (signed >=) */

loc_002126C8: ;
    edi = eax + edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x841FE4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_002126D4: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002126DEu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_002126DE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002126E4u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_002126E4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00212700
 * Original: 0x00212700 - 0x00212720 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212700: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x301A34;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00212720
 * Original: 0x00212720 - 0x00212754 (52 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212720(void)
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

loc_00212720: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0021273E; /* jle: less or equal (signed <=) */

loc_0021272B: ;
    edx = MEM32(ecx + 0xC);
    edi = MEM32(esp + 0xC);

loc_00212732: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212749; /* je: equal / zero */

loc_00212736: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00212732; /* jl: less (signed <) */

loc_0021273E: ;
    fp_push(MEMF(0x2DC098)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00212749: ;
    ecx = MEM32(ecx + 8);
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00212760
 * Original: 0x00212760 - 0x00212790 (48 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212760: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0021277E; /* jle: less or equal (signed <=) */

loc_0021276B: ;
    edx = MEM32(ecx + 0x18);
    edi = MEM32(esp + 0xC);

loc_00212772: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212785; /* je: equal / zero */

loc_00212776: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00212772; /* jl: less (signed <) */

loc_0021277E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00212785: ;
    ecx = MEM32(ecx + 0x14);
    eax = MEM32(ecx + eax * 4);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00212790
 * Original: 0x00212790 - 0x002127EF (95 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212790: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002127EB; /* jne: not equal / not zero */

loc_00212798: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002127BC; /* jle: less or equal (signed <=) */

loc_002127A5: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002127B1u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_002127B1: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002127A5; /* jl: less (signed <) */

loc_002127BC: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002127C5u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_002127C5: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002127CEu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_002127CE: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002127D7u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_002127D7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x14) = ebx;
    POP32(esp, ebx);

loc_002127EB: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002127F0
 * Original: 0x002127F0 - 0x00212864 (116 bytes, 36 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002127F0(void)
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

loc_002127F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021285E; /* jne: not equal / not zero */

loc_002127F8: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E5694)); /* fmul dword ptr [0x2e5694] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0021280Du); RECOMP_ABI_CALL(0x00237D67u, sub_00237D67); /* call 0x00237D67 */

loc_0021280D: ;
    PUSH32(esp, 0x00212812u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_00212812: ;
    PUSH32(esp, 0x2F0B60);
    MEM32(esi + 4) = eax;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 8) = 0;
    PUSH32(esp, 0x0021282Cu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0021282C: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x2F0B28);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x00212842u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00212842: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, 0x2F0AF0);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x00212858u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00212858: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = eax;

loc_0021285E: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00212870
 * Original: 0x00212870 - 0x00212917 (167 bytes, 61 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212870(void)
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

loc_00212870: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002128B0; /* je: equal / zero */

loc_00212880: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0xC);
    edi = MEM32(ecx + eax * 4 + -4);
    ecx = ecx + eax * 4 + -4;
    PUSH32(esp, ebp);
    ebp = MEM32(edx + eax * 4 + -4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    POP32(esp, ebp);
    if (CMP_G(_fas, _fbs)) goto loc_002128B0; /* jg: greater (signed >) */

loc_0021289A: ;
    esi = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    eax = MEM32(esi + eax * 4 + -4);
    POP32(esp, edi);
    eax = eax + edx * 4;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ecx) = edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_002128B0: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E5694)); /* fmul dword ptr [0x2e5694] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002128C5u); RECOMP_ABI_CALL(0x00237D67u, sub_00237D67); /* call 0x00237D67 */

loc_002128C5: ;
    PUSH32(esp, 0x002128CAu); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_002128CA: ;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax;
    PUSH32(esp, 0x2F0B98);
    edi = edi >> 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edi * 4;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002128E6u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_002128E6: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    MEM32(eax + edx * 4) = edi;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0x14);
    MEM32(edx + ecx * 4) = ebx;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + ecx * 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00212920
 * Original: 0x00212920 - 0x00212927 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212920(void)
{

loc_00212920: ;
    MEM32(ecx) = 0x301A34;
    esp += 4; return; /* ret */

}

/**
 * sub_00212930
 * Original: 0x00212930 - 0x00212950 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212930: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    ecx = 0x8420FC;
    PUSH32(esp, 0x00212943u); RECOMP_ABI_CALL(0x002127F0u, sub_002127F0); /* call 0x002127F0 */

loc_00212943: ;
    PUSH32(esp, esi);
    ecx = 0x842114;
    PUSH32(esp, 0x0021294Eu); RECOMP_ABI_CALL(0x002127F0u, sub_002127F0); /* call 0x002127F0 */

loc_0021294E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00212950
 * Original: 0x00212950 - 0x00212964 (20 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00212950: ;
    ecx = 0x8420FC;
    PUSH32(esp, 0x0021295Au); RECOMP_ABI_CALL(0x00212790u, sub_00212790); /* call 0x00212790 */

loc_0021295A: ;
    ecx = 0x842114;
    g_seh_ebp = ebp; sub_00212790(); return; /* tail jmp 0x00212790 */

}

/**
 * sub_00212970
 * Original: 0x00212970 - 0x002129FE (142 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212970: ;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xD0);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0xC8);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00212990u); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_00212990: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0021299Au); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_0021299A: ;
    edx = MEM32(esp + 0xD8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0xC8);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002129B8u); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_002129B8: ;
    SET_LO8(eax, MEM8(esp + 0xDC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002129E2; /* je: equal / zero */

loc_002129C4: ;
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002129CFu); RECOMP_ABI_CALL(0x00204D10u, sub_00204D10); /* call 0x00204D10 */

loc_002129CF: ;
    edx = MEM32(esp + 0xDC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002129E2: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002129EBu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_002129EB: ;
    ecx = MEM32(esp + 0xD8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00212A00
 * Original: 0x00212A00 - 0x00212A66 (102 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212A00: ;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xD0);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0xC8);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00212A20u); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_00212A20: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00212A2Au); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00212A2A: ;
    edx = MEM32(esp + 0xD8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0xC8);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00212A48u); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_00212A48: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00212A52u); RECOMP_ABI_CALL(0x00237768u, sub_00237768); /* call 0x00237768 */

loc_00212A52: ;
    edx = MEM32(esp + 0xDC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00212A70
 * Original: 0x00212A70 - 0x00212AD6 (102 bytes, 28 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00212A70(void)
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

loc_00212A70: ;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xD0);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0xC8);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00212A90u); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_00212A90: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00212A9Au); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00212A9A: ;
    edx = MEM32(esp + 0xD8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0xC8);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00212AB8u); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_00212AB8: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00212AC2u); RECOMP_ABI_CALL(0x00237066u, sub_00237066); /* call 0x00237066 */

loc_00212AC2: ;
    edx = MEM32(esp + 0xDC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00212AE0
 * Original: 0x00212AE0 - 0x00212B36 (86 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212AE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212AE0: ;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xD0);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0xC8);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00212B00u); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_00212B00: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00212B0Au); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00212B0A: ;
    edx = MEM32(esp + 0xD8);
    ecx = MEM32(esp + 0xDC);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0xE0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x00212B2Eu); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_00212B2E: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00212B40
 * Original: 0x00212B40 - 0x00212B5E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212B40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00212B48u); RECOMP_ABI_CALL(0x00212920u, sub_00212920); /* call 0x00212920 */

loc_00212B48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00212B58; /* je: equal / zero */

loc_00212B4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00212B55u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00212B55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00212B58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00212B60
 * Original: 0x00212B60 - 0x00212C58 (248 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00212B60: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00212B72u); RECOMP_ABI_CALL(0x00209440u, sub_00209440); /* call 0x00209440 */

loc_00212B72: ;
    ebp = MEM32(esp + 0x6C);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00212B82u); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_00212B82: ;
    PUSH32(esp, 0);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00212B98u); RECOMP_ABI_CALL(0x00212970u, sub_00212970); /* call 0x00212970 */

loc_00212B98: ;
    ecx = MEM32(esp + 0x7C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00212BA7u); RECOMP_ABI_CALL(0x000443D0u, sub_000443D0); /* call 0x000443D0 */

loc_00212BA7: ;
    ecx = MEM32(esp + 0x48);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00212BB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212BADu); } /* indirect call */
    }

loc_00212BB0: ;
    ecx = MEM32(esp + 0x3C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00212BE8; /* je: equal / zero */

loc_00212BB8: ;
    goto loc_00212BC0;

    /* nop */

loc_00212BC0: ;
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00212BD4u); RECOMP_ABI_CALL(0x00212A00u, sub_00212A00); /* call 0x00212A00 */

loc_00212BD4: ;
    ecx = MEM32(esp + 0x54);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00212BE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212BDDu); } /* indirect call */
    }

loc_00212BE0: ;
    ecx = MEM32(esp + 0x3C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00212BC0; /* jne: not equal / not zero */

loc_00212BE8: ;
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00212BF4u); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_00212BF4: ;
    esi = eax;
    ecx = 7;
    edi = esp + 0x14;
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
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212C4E; /* je: equal / zero */

loc_00212C09: ;
    /* nop */

loc_00212C10: ;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00212C19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212C16u); } /* indirect call */
    }

loc_00212C19: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00212C4E; /* je: equal / zero */

loc_00212C21: ;
    edx = MEM32(ebx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00212C2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212C2Au); } /* indirect call */
    }

loc_00212C2D: ;
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00212C39u); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_00212C39: ;
    esi = eax;
    ecx = 7;
    edi = esp + 0x14;
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
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212C10; /* jne: not equal / not zero */

loc_00212C4E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00212C60
 * Original: 0x00212C60 - 0x00212DBA (346 bytes, 131 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212C60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47525453) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x47525453 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00212D20; /* je: equal / zero */

loc_00212C77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x544F4C46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x544F4C46 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212DB3; /* jne: not equal / not zero */

loc_00212C82: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212CB1; /* je: equal / zero */

loc_00212C88: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00212C90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212C8Du); } /* indirect call */
    }

loc_00212C90: ;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00212CB1; /* je: equal / zero */

loc_00212C97: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00212CA7u); RECOMP_ABI_CALL(0x00212A70u, sub_00212A70); /* call 0x00212A70 */

loc_00212CA7: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212C88; /* jne: not equal / not zero */

loc_00212CB1: ;
    ecx = esi;
    PUSH32(esp, 0x00212CB8u); RECOMP_ABI_CALL(0x002094F0u, sub_002094F0); /* call 0x002094F0 */

loc_00212CB8: ;
    PUSH32(esp, ebx);
    ecx = 0x8420FC;
    PUSH32(esp, 0x00212CC3u); RECOMP_ABI_CALL(0x00212870u, sub_00212870); /* call 0x00212870 */

loc_00212CC3: ;
    PUSH32(esp, ebx);
    ecx = 0x842114;
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0x00212CD1u); RECOMP_ABI_CALL(0x00212870u, sub_00212870); /* call 0x00212870 */

loc_00212CD1: ;
    MEM32(edi + 0xC) = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x8420F4) = MEM32(0x8420F4) + ebx;
    _fa = (uint32_t)(MEM32(0x8420F4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x10) = ebx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212DB3; /* je: equal / zero */

loc_00212CE6: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00212CE8: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00212CF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212CEDu); } /* indirect call */
    }

loc_00212CF0: ;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00212DB3; /* je: equal / zero */

loc_00212CFB: ;
    edx = MEM32(edi + 8);
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00212D0Du); RECOMP_ABI_CALL(0x00212A70u, sub_00212A70); /* call 0x00212A70 */

loc_00212D0D: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212CE8; /* jne: not equal / not zero */

loc_00212D19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00212D20: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212D51; /* je: equal / zero */

loc_00212D26: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00212D2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212D2Bu); } /* indirect call */
    }

loc_00212D2E: ;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00212D51; /* je: equal / zero */

loc_00212D35: ;
    PUSH32(esp, 0);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00212D47u); RECOMP_ABI_CALL(0x00212970u, sub_00212970); /* call 0x00212970 */

loc_00212D47: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212D26; /* jne: not equal / not zero */

loc_00212D51: ;
    ecx = esi;
    PUSH32(esp, 0x00212D58u); RECOMP_ABI_CALL(0x002094F0u, sub_002094F0); /* call 0x002094F0 */

loc_00212D58: ;
    PUSH32(esp, ebx);
    ecx = 0x842114;
    PUSH32(esp, 0x00212D63u); RECOMP_ABI_CALL(0x00212870u, sub_00212870); /* call 0x00212870 */

loc_00212D63: ;
    PUSH32(esp, ebx);
    ecx = 0x842114;
    MEM32(edi + 0x14) = eax;
    PUSH32(esp, 0x00212D71u); RECOMP_ABI_CALL(0x00212870u, sub_00212870); /* call 0x00212870 */

loc_00212D71: ;
    MEM32(edi + 0x18) = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x8420F8) = MEM32(0x8420F8) + ebx;
    _fa = (uint32_t)(MEM32(0x8420F8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x1C) = ebx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212DB3; /* je: equal / zero */

loc_00212D82: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00212D84: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00212D8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212D89u); } /* indirect call */
    }

loc_00212D8C: ;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00212DB3; /* je: equal / zero */

loc_00212D93: ;
    edx = MEM32(edi + 0x14);
    eax = MEM32(edi + 0x18);
    PUSH32(esp, 0);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00212DA7u); RECOMP_ABI_CALL(0x00212970u, sub_00212970); /* call 0x00212970 */

loc_00212DA7: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212D84; /* jne: not equal / not zero */

loc_00212DB3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00212DC0
 * Original: 0x00212DC0 - 0x00212DCC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212DC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00212DC0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax * 4 + 0x842130)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00212DD0
 * Original: 0x00212DD0 - 0x00212E53 (131 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212DD0(void)
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

loc_00212DD0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x30F2E8); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00212DF4; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_00212DE9: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0 = xmm1; /* movaps */
    if ((_fca > _fcb)) goto loc_00212DF4; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_00212DF1: ;
    xmm0 = xmm2; /* movaps */

loc_00212DF4: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_00212E39; /* jge: greater or equal (signed >=) */

loc_00212E02: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    MEMF(0x84215C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00212E17u); RECOMP_ABI_CALL(0x00200190u, sub_00200190); /* call 0x00200190 */

loc_00212E17: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00212E20: ;
    ecx = MEM32(esi * 4 + 0x842130);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00212E2Eu); RECOMP_ABI_CALL(0x00200190u, sub_00200190); /* call 0x00200190 */

loc_00212E2E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00212E20; /* jl: less (signed <) */

loc_00212E37: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00212E39: ;
    edx = MEM32(esp + 8);
    MEMF(eax * 4 + 0x842130) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00200190(); return; /* tail jmp 0x00200190 */

}

/**
 * sub_00212E60
 * Original: 0x00212E60 - 0x00212E84 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212E60: ;
    PUSH32(esp, esi);
    esi = 0x8429B0;

loc_00212E66: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212E77; /* je: equal / zero */

loc_00212E6C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00212E71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212E6Eu); } /* indirect call */
    }

loc_00212E71: ;
    MEM32(esi) = 0;

loc_00212E77: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x842A48) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x842A48 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00212E66; /* jl: less (signed <) */

loc_00212E82: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00212E90
 * Original: 0x00212E90 - 0x00212EAE (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212E90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212E90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x104);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00212E9Fu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00212E9F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x104) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00212EB0
 * Original: 0x00212EB0 - 0x0021300C (348 bytes, 95 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212EB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246F5B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x150;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x88;
    PUSH32(esp, 0x00212EDBu); RECOMP_ABI_CALL(0x00209100u, sub_00209100); /* call 0x00209100 */

loc_00212EDB: ;
    eax = MEM32(0x301A70);
    SET_LO8(edx, MEM8(0x301A78));
    ecx = MEM32(0x301A74);
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x168);
    MEM8(esp + 0x10) = LO8(edx);
    MEM32(esp + 0x160) = 0;
    MEM32(esp + 0xC) = ecx;
    edx = eax;
    /* nop */

loc_00212F10: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212F10; /* jne: not equal / not zero */

loc_00212F17: ;
    edi = esp + 8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_00212F20: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212F20; /* jne: not equal / not zero */

loc_00212F28: ;
    PUSH32(esp, esi);
    ecx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx;
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
    PUSH32(esp, 0);
    eax = esp + 0x10;
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
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, 0x00212F4Cu); RECOMP_ABI_CALL(0x00209810u, sub_00209810); /* call 0x00209810 */

loc_00212F4C: ;
    ecx = esp + 0x8C;
    PUSH32(esp, 0x00212F58u); RECOMP_ABI_CALL(0x00209A50u, sub_00209A50); /* call 0x00209A50 */

loc_00212F58: ;
    edi = MEM32(esp + 0x170);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00212F6B; /* jne: not equal / not zero */

loc_00212F65: ;
    edi = ebx + 0x104;

loc_00212F6B: ;
    ecx = esi + 3;
    PUSH32(esp, 0x301A4C);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00212F81u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00212F81: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    MEM32(edi) = eax;
    PUSH32(esp, 0x00212F94u); RECOMP_ABI_CALL(0x002092A0u, sub_002092A0); /* call 0x002092A0 */

loc_00212F94: ;
    ecx = esp + 0x8C;
    PUSH32(esp, 0x00212FA0u); RECOMP_ABI_CALL(0x00209980u, sub_00209980); /* call 0x00209980 */

loc_00212FA0: ;
    _fa = (uint32_t)(MEM8(esp + 0x178)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x178), 1 (8-bit) */
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_00212FDC; /* jne: not equal / not zero */

loc_00212FAB: ;
    edx = MEM32(esp + 0x170);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212FB9; /* jne: not equal / not zero */

loc_00212FB6: ;
    edx = ebx + 4;

loc_00212FB9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx + 8;
    ecx = 0x10;
    /* nop */

loc_00212FD0: ;
    MEM32(eax) = 2;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00212FD0; /* jne: not equal / not zero */

loc_00212FDC: ;
    ecx = esp + 0x88;
    MEM32(esp + 0x160) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00212FF3u); RECOMP_ABI_CALL(0x00209200u, sub_00209200); /* call 0x00209200 */

loc_00212FF3: ;
    ecx = MEM32(esp + 0x158);
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x15C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x15C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00213010
 * Original: 0x00213010 - 0x00213050 (64 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213010(void)
{

loc_00213010: ;
    MEM32(ecx + 0xC) = 0x31;
    MEM32(ecx + 0x1C) = 0x15;
    MEM32(ecx + 0x18) = 6;
    MEM32(ecx + 0x28) = 8;
    MEM32(ecx + 0x2C) = 0x16;
    MEM32(ecx + 0x38) = 0xC;
    MEM32(ecx + 0x3C) = 0x40;
    MEM32(ecx + 0x48) = 0x10;
    MEM32(ecx + 0x4C) = 0x21;
    esp += 4; return; /* ret */

}

/**
 * sub_00213050
 * Original: 0x00213050 - 0x0021306B (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213050: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301A7C);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00213063u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213060u); } /* indirect call */
    }

loc_00213063: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00213010(); return; /* tail jmp 0x00213010 */

}

/**
 * sub_00213070
 * Original: 0x00213070 - 0x0021308B (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213070: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301A8C);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00213083u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213080u); } /* indirect call */
    }

loc_00213083: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00213010(); return; /* tail jmp 0x00213010 */

}

/**
 * sub_00213090
 * Original: 0x00213090 - 0x002130AB (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213090: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301A9C);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002130A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002130A0u); } /* indirect call */
    }

loc_002130A3: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00213010(); return; /* tail jmp 0x00213010 */

}

/**
 * sub_002130B0
 * Original: 0x002130B0 - 0x002130CB (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002130B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002130B0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301AAC);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002130C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002130C0u); } /* indirect call */
    }

loc_002130C3: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00213010(); return; /* tail jmp 0x00213010 */

}

/**
 * sub_002130D0
 * Original: 0x002130D0 - 0x002130EB (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002130D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002130D0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301ABC);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002130E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002130E0u); } /* indirect call */
    }

loc_002130E3: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00213010(); return; /* tail jmp 0x00213010 */

}

/**
 * sub_002130F0
 * Original: 0x002130F0 - 0x00213104 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002130F0(void)
{

loc_002130F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x30F2F4) = eax;
    MEM32(0x30F2F8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00213110
 * Original: 0x00213110 - 0x00213115 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213110: ;
    g_seh_ebp = ebp; sub_00212E90(); return; /* tail jmp 0x00212E90 */

}

/**
 * sub_00213120
 * Original: 0x00213120 - 0x00213140 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213120: ;
    PUSH32(esp, 0x00213125u); RECOMP_ABI_CALL(0x00213010u, sub_00213010); /* call 0x00213010 */

loc_00213125: ;
    eax = MEM32(ecx + 0x48);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0x16;
    MEM32(ecx + 0x58) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x5C) = edx;
    MEM32(ecx + 0x6C) = edx;
    MEM32(ecx + 0x68) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00213140
 * Original: 0x00213140 - 0x0021315B (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213140: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301ACC);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00213153u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213150u); } /* indirect call */
    }

loc_00213153: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00213120(); return; /* tail jmp 0x00213120 */

}

/**
 * sub_00213160
 * Original: 0x00213160 - 0x0021317B (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213160: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301AE0);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00213173u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213170u); } /* indirect call */
    }

loc_00213173: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00213120(); return; /* tail jmp 0x00213120 */

}

/**
 * sub_00213180
 * Original: 0x00213180 - 0x0021319B (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213180: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301AF4);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00213193u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213190u); } /* indirect call */
    }

loc_00213193: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00213120(); return; /* tail jmp 0x00213120 */

}

/**
 * sub_002131A0
 * Original: 0x002131A0 - 0x002131BB (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002131A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002131A0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301B08);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002131B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002131B0u); } /* indirect call */
    }

loc_002131B3: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00213120(); return; /* tail jmp 0x00213120 */

}

/**
 * sub_002131C0
 * Original: 0x002131C0 - 0x002131DB (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002131C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002131C0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301B1C);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002131D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002131D0u); } /* indirect call */
    }

loc_002131D3: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00213120(); return; /* tail jmp 0x00213120 */

}

/**
 * sub_002131E0
 * Original: 0x002131E0 - 0x002131FB (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002131E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002131E0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301B30);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002131F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002131F0u); } /* indirect call */
    }

loc_002131F3: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00213120(); return; /* tail jmp 0x00213120 */

}

/**
 * sub_00213200
 * Original: 0x00213200 - 0x0021321B (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213200: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301B44);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00213213u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213210u); } /* indirect call */
    }

loc_00213213: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00213120(); return; /* tail jmp 0x00213120 */

}

/**
 * sub_00213220
 * Original: 0x00213220 - 0x0021323B (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213220: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301B58);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00213233u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213230u); } /* indirect call */
    }

loc_00213233: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00213010(); return; /* tail jmp 0x00213010 */

}

/**
 * sub_00213240
 * Original: 0x00213240 - 0x0021325B (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213240: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301B68);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00213253u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213250u); } /* indirect call */
    }

loc_00213253: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00213010(); return; /* tail jmp 0x00213010 */

}

/**
 * sub_00213260
 * Original: 0x00213260 - 0x0021327B (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213260: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301B78);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00213273u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213270u); } /* indirect call */
    }

loc_00213273: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00213010(); return; /* tail jmp 0x00213010 */

}

/**
 * sub_00213280
 * Original: 0x00213280 - 0x0021329B (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213280: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301B88);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00213293u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213290u); } /* indirect call */
    }

loc_00213293: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00213010(); return; /* tail jmp 0x00213010 */

}

/**
 * sub_002132A0
 * Original: 0x002132A0 - 0x002132BB (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002132A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002132A0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301B98);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002132B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002132B0u); } /* indirect call */
    }

loc_002132B3: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00213010(); return; /* tail jmp 0x00213010 */

}

/**
 * sub_002132C0
 * Original: 0x002132C0 - 0x002132DB (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002132C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002132C0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301BAC);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002132D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002132D0u); } /* indirect call */
    }

loc_002132D3: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00213010(); return; /* tail jmp 0x00213010 */

}

/**
 * sub_002132E0
 * Original: 0x002132E0 - 0x002132FB (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002132E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002132E0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301BC0);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002132F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002132F0u); } /* indirect call */
    }

loc_002132F3: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00213010(); return; /* tail jmp 0x00213010 */

}

/**
 * sub_00213300
 * Original: 0x00213300 - 0x0021331B (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213300: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301BD4);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00213313u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213310u); } /* indirect call */
    }

loc_00213313: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00213010(); return; /* tail jmp 0x00213010 */

}

/**
 * sub_00213320
 * Original: 0x00213320 - 0x0021333B (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213320: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301BE8);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00213333u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213330u); } /* indirect call */
    }

loc_00213333: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00213010(); return; /* tail jmp 0x00213010 */

}

/**
 * sub_00213340
 * Original: 0x00213340 - 0x0021335B (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213340: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301BFC);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00213353u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213350u); } /* indirect call */
    }

loc_00213353: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00213010(); return; /* tail jmp 0x00213010 */

}

/**
 * sub_00213360
 * Original: 0x00213360 - 0x00213AB4 (1876 bytes, 325 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213360: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x301A7C);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00213375u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213372u); } /* indirect call */
    }

loc_00213375: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    eax = ebx + 0x10C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x301C4C);
    ecx = ebx;
    MEM32(ebx + 0xC) = 0x41;
    MEM32(ebx + 0x38) = 8;
    MEM32(ebx + 0x3C) = 0x40;
    MEM32(ebx + 0x48) = 0xC;
    MEM32(ebx + 0x4C) = 0x21;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x002133AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002133ABu); } /* indirect call */
    }

loc_002133AE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3C;
    edi = 0x842400;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ebp = 0xC00;
    edx = 0x301C0000;
    MEM32(0x8424D4) = 0x11101;
    MEM32(0x8424D8) = 1;
    MEM32(0x8424E0) = esi;
    MEM32(0x8424DC) = esi;
    MEM32(0x8424A8) = esi;
    MEM32(0x842488) = esi;
    MEM32(0x842400) = 0x15D8D135;
    MEM32(0x8424B4) = esi;
    MEM32(0x842468) = ebp;
    MEM32(0x842428) = esi;
    MEM32(0x842448) = esi;
    MEM32(0x842420) = edx;
    MEM32(0x842424) = 0x1C80;
    MEM32(0x8424AC) = esi;
    MEM32(0x8424B0) = esi;
    MEM32(0x8424E4) = 0xFFFFFFF0u;
    MEM32(0x8424E8) = 0xFFFFFFFFu;
    MEM32(0x8424EC) = 0x1FF;
    ecx = 0x3C;
    edi = 0x8424F0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x3C;
    edi = 0x8425E0;
    MEM32(0x8425C4) = 0x11102;
    MEM32(0x8425C8) = 0x21;
    MEM32(0x8425D0) = esi;
    MEM32(0x8425CC) = esi;
    MEM32(0x842598) = esi;
    MEM32(0x842578) = esi;
    MEM32(0x8424F0) = 0x14D9D834;
    MEM32(0x8425A4) = esi;
    MEM32(0x842558) = 0xD00;
    MEM32(0x842518) = esi;
    MEM32(0x842538) = esi;
    MEM32(0x84257C) = esi;
    MEM32(0x8424F4) = 0x15DDD135;
    MEM32(0x8425A8) = esi;
    MEM32(0x84255C) = ebp;
    MEM32(0x84251C) = esi;
    MEM32(0x84253C) = esi;
    MEM32(0x842510) = edx;
    MEM32(0x842514) = 0x1C80;
    MEM32(0x84259C) = esi;
    MEM32(0x8425A0) = esi;
    MEM32(0x8425D4) = 0xFFFFFF0Fu;
    MEM32(0x8425D8) = 0xFFFFFFFFu;
    MEM32(0x8425DC) = 0x1FF;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x8426B4) = 0x11103;
    MEM32(0x8426B8) = 0x421;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    eax = ebx + 0x200;
    PUSH32(esp, eax);
    MEM32(0x8426C0) = esi;
    MEM32(0x8426BC) = esi;
    MEM32(0x842688) = esi;
    MEM32(0x842668) = esi;
    MEM32(0x8425E0) = 0x14D9D834;
    MEM32(0x842694) = esi;
    MEM32(0x842648) = 0xD00;
    MEM32(0x842608) = esi;
    MEM32(0x842628) = esi;
    MEM32(0x84266C) = esi;
    MEM32(0x8425E4) = 0x4DADD24;
    MEM32(0x842698) = esi;
    MEM32(0x84264C) = ebp;
    MEM32(0x84260C) = esi;
    MEM32(0x84262C) = esi;
    MEM32(0x842670) = esi;
    MEM32(0x8425E8) = 0x15DCD135;
    MEM32(0x84269C) = esi;
    MEM32(0x842650) = ebp;
    MEM32(0x842610) = esi;
    MEM32(0x842630) = esi;
    MEM32(0x842600) = edx;
    MEM32(0x842604) = 0x1C80;
    MEM32(0x84268C) = esi;
    MEM32(0x842690) = esi;
    MEM32(0x8426C4) = 0xFFFFF0FFu;
    MEM32(0x8426C8) = 0xFFFFFFFFu;
    MEM32(0x8426CC) = 0x1FF;
    edx = MEM32(ebx);
    PUSH32(esp, 0x301C38);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0021360Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213609u); } /* indirect call */
    }

loc_0021360C: ;
    edx = ebx + 0x204;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    ecx = 0x3C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 0x100C0;
    MEM32(edx + 0xB4) = eax;
    MEM32(edx + 0x68) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 0xE4) = eax;
    MEM32(edx + 0xE8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = ebx + 0x5C8;
    PUSH32(esp, eax);
    ecx = ebx + 0x2F4;
    PUSH32(esp, ecx);
    edi = 0x21;
    MEM32(edx + 0xD4) = 0x11101;
    MEM32(edx + 0xD8) = edi;
    MEM32(edx + 0xE0) = esi;
    MEM32(edx + 0xDC) = esi;
    MEM32(edx + 0xA8) = esi;
    MEM32(edx + 0x88) = 0xC9C40000u;
    MEM32(edx) = 0xD8D41010u;
    MEM32(edx + 0x28) = esi;
    MEM32(edx + 0x48) = esi;
    MEM32(edx + 0x20) = 0x300C0000;
    MEM32(edx + 0x24) = 0x1C80;
    MEM32(edx + 0xAC) = esi;
    MEM32(edx + 0xB0) = esi;
    MEM32(edx + 0xEC) = 0x1FF;
    edx = MEM32(ebx);
    PUSH32(esp, 0x301C24);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x002136B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002136B3u); } /* indirect call */
    }

loc_002136B6: ;
    eax = 0x40;
    MEM32(ebx + 0x5D0) = 0x41;
    MEM32(ebx + 0x5FC) = 8;
    MEM32(ebx + 0x600) = eax;
    MEM32(ebx + 0x60C) = 0xC;
    MEM32(ebx + 0x610) = edi;
    MEM32(ebx + 0x61C) = 0x10;
    MEM32(ebx + 0x620) = edi;
    MEM32(ebx + 0x62C) = 0x14;
    MEM32(ebx + 0x630) = edi;
    MEM32(ebx + 0x640) = edi;
    MEM32(ebx + 0x650) = eax;
    MEM32(ebx + 0x63C) = 0x18;
    MEM32(ebx + 0x64C) = 0x1C;
    edx = ebx + 0x4D8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    ecx = 0x3C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 0xD4) = 0x11105;
    MEM32(edx + 0xD8) = 0x8421;
    MEM32(edx + 0xE0) = esi;
    MEM32(edx + 0xDC) = esi;
    MEM32(edx + 0xA8) = esi;
    MEM32(edx + 0x88) = 0xC1C5D4C8u;
    MEM32(edx) = 0xD1D5D4D8u;
    MEM32(edx + 0xB4) = 0x820DC;
    MEM32(edx + 0x68) = 0xC;
    MEM32(edx + 0x28) = 0xFF0000;
    MEM32(edx + 0x48) = esi;
    MEM32(edx + 0x8C) = 0x15C9CC35;
    MEM32(edx + 4) = esi;
    MEM32(edx + 0xB8) = ebp;
    MEM32(edx + 0x6C) = esi;
    MEM32(edx + 0x2C) = esi;
    MEM32(edx + 0x4C) = esi;
    MEM32(edx + 0x90) = 0xC5C10000u;
    MEM32(edx + 8) = esi;
    MEM32(edx + 0xBC) = 0x20D0;
    MEM32(edx + 0x70) = esi;
    MEM32(edx + 0x30) = 0xFF00;
    MEM32(edx + 0x50) = esi;
    MEM32(edx + 0x94) = 0x1DCACC3D;
    MEM32(edx + 0xC) = esi;
    MEM32(edx + 0xC0) = ebp;
    MEM32(edx + 0x74) = esi;
    MEM32(edx + 0x34) = esi;
    MEM32(edx + 0x54) = esi;
    MEM32(edx + 0x98) = 0xDCBCC2D;
    MEM32(edx + 0x10) = esi;
    MEM32(edx + 0xC4) = ebp;
    MEM32(edx + 0x78) = esi;
    MEM32(edx + 0x38) = esi;
    MEM32(edx + 0x58) = esi;
    MEM32(edx + 0x20) = 0x40C0000;
    MEM32(edx + 0x24) = 0x1C80;
    MEM32(edx + 0xAC) = esi;
    MEM32(edx + 0xB0) = esi;
    MEM32(edx + 0xE4) = 0xFFFFF1F0u;
    MEM32(edx + 0xE8) = 0xFFFFFFFFu;
    MEM32(edx + 0xEC) = 0x1FF;
    edx = ebx + 0x3E8;
    ecx = 0x3C;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 0xD4) = 0x11103;
    MEM32(edx + 0xD8) = 0x421;
    MEM32(edx + 0xE0) = esi;
    MEM32(edx + 0xDC) = esi;
    MEM32(edx + 0xA8) = esi;
    MEM32(edx + 0x88) = 0xC1C5D4C8u;
    MEM32(edx) = 0xD1D5D4D8u;
    MEM32(edx + 0xB4) = 0x820DC;
    MEM32(edx + 0x68) = 0xC;
    MEM32(edx + 0x28) = 0xFF0000;
    MEM32(edx + 0x48) = esi;
    MEM32(edx + 0x8C) = 0x15C9CC35;
    MEM32(edx + 4) = esi;
    MEM32(edx + 0xB8) = ebp;
    MEM32(edx + 0x6C) = esi;
    MEM32(edx + 0x2C) = esi;
    MEM32(edx + 0x4C) = esi;
    MEM32(edx + 0x90) = 0x1DCACC3D;
    MEM32(edx + 8) = esi;
    MEM32(edx + 0xBC) = ebp;
    MEM32(edx + 0x70) = esi;
    MEM32(edx + 0x30) = esi;
    MEM32(edx + 0x50) = esi;
    MEM32(edx + 0x20) = 0x40C0000;
    MEM32(edx + 0x24) = 0x1C80;
    MEM32(edx + 0xAC) = esi;
    MEM32(edx + 0xB0) = esi;
    MEM32(edx + 0xE4) = 0xFFFFFFF0u;
    MEM32(edx + 0xE8) = 0xFFFFFFFFu;
    MEM32(edx + 0xEC) = 0x1FF;
    edx = ebx + 0x2F8;
    edi = edx;
    ecx = 0x3C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = ebx + 0x6CC;
    MEM32(edx + 0xB8) = ebp;
    PUSH32(esp, eax);
    ecx = ebx + 0x6C8;
    PUSH32(esp, ecx);
    ebp = 0x1FF;
    MEM32(edx + 0xD4) = 0x11102;
    MEM32(edx + 0xD8) = 0x21;
    MEM32(edx + 0xE0) = esi;
    MEM32(edx + 0xDC) = esi;
    MEM32(edx + 0xA8) = esi;
    MEM32(edx + 0x88) = 0xC1C5D4C8u;
    MEM32(edx) = 0xD1D5D4D8u;
    MEM32(edx + 0xB4) = 0x820DC;
    MEM32(edx + 0x68) = 0xC;
    MEM32(edx + 0x28) = 0xFF0000;
    MEM32(edx + 0x48) = esi;
    MEM32(edx + 0x8C) = 0x15C9CC35;
    MEM32(edx + 4) = esi;
    MEM32(edx + 0x6C) = esi;
    MEM32(edx + 0x2C) = esi;
    MEM32(edx + 0x4C) = esi;
    MEM32(edx + 0x20) = 0x40C0000;
    MEM32(edx + 0x24) = 0x1C80;
    MEM32(edx + 0xAC) = esi;
    MEM32(edx + 0xB0) = esi;
    MEM32(edx + 0xE4) = 0xFFFFFFF0u;
    MEM32(edx + 0xE8) = 0xFFFFFFFFu;
    MEM32(edx + 0xEC) = ebp;
    edx = MEM32(ebx);
    PUSH32(esp, 0x301C10);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x002139D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002139D4u); } /* indirect call */
    }

loc_002139D7: ;
    edx = ebx + 0x7CC;
    MEM32(ebx + 0x710) = esi;
    MEM32(ebx + 0x6D4) = 0x41;
    MEM32(ebx + 0x70C) = 1;
    MEM32(ebx + 0x714) = 0x25;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3C;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    eax = 0xD00;
    MEM32(edx + 0xE0) = esi;
    MEM32(edx + 0xDC) = esi;
    MEM32(edx + 0xA8) = esi;
    MEM32(edx + 0x28) = esi;
    MEM32(edx + 0x48) = esi;
    MEM32(edx + 0x2C) = esi;
    MEM32(edx + 0x4C) = esi;
    MEM32(edx + 0xAC) = esi;
    MEM32(edx + 0xB0) = esi;
    POP32(esp, esi);
    MEM32(edx + 0xB4) = eax;
    MEM32(edx + 0x68) = eax;
    eax = 0x100C0;
    MEM32(edx + 0xEC) = ebp;
    POP32(esp, ebp);
    MEM32(edx + 0xD4) = 0x11102;
    MEM32(edx + 0xD8) = 0x21;
    MEM32(edx + 0x88) = 0x11C8C931;
    MEM32(edx) = 0x11D8D931;
    MEM32(edx + 0x8C) = 0xCDC10000u;
    MEM32(edx + 4) = 0xDDD11010u;
    MEM32(edx + 0xB8) = eax;
    MEM32(edx + 0x6C) = eax;
    MEM32(edx + 0x20) = 0x300C0000;
    MEM32(edx + 0x24) = 0x1C80;
    MEM32(edx + 0xE4) = 0xFFFFFF10u;
    MEM32(edx + 0xE8) = 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00213AC0
 * Original: 0x00213AC0 - 0x00213B0F (79 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213AC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213AC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00213AC8u); RECOMP_ABI_CALL(0x00212E90u, sub_00212E90); /* call 0x00212E90 */

loc_00213AC8: ;
    eax = MEM32(esi + 0x10C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00213AD4u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00213AD4: ;
    ecx = MEM32(esi + 0x200);
    PUSH32(esp, ecx);
    MEM32(esi + 0x10C) = 0;
    PUSH32(esp, 0x00213AEAu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00213AEA: ;
    edx = MEM32(esi + 0x6C8);
    PUSH32(esp, edx);
    MEM32(esi + 0x200) = 0;
    PUSH32(esp, 0x00213B00u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00213B00: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x6C8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00213B10
 * Original: 0x00213B10 - 0x00213B48 (56 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213B10(void)
{

loc_00213B10: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2E79B0);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00213B23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213B20u); } /* indirect call */
    }

loc_00213B23: ;
    MEM32(esi + 0xC) = 0x32;
    MEM32(esi + 0x38) = 0xC;
    MEM32(esi + 0x3C) = 0x40;
    MEM32(esi + 0x48) = 0x10;
    MEM32(esi + 0x4C) = 0x22;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00213B50
 * Original: 0x00213B50 - 0x00213B58 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213B50(void)
{

loc_00213B50: ;
    PUSH32(esp, 0x00213B55u); RECOMP_ABI_CALL(0x0020E2B0u, sub_0020E2B0); /* call 0x0020E2B0 */

loc_00213B55: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213B60
 * Original: 0x00213B60 - 0x00213BC7 (103 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213B60(void)
{

loc_00213B60: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301C60);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00213B73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213B70u); } /* indirect call */
    }

loc_00213B73: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esi + 0x10C;
    PUSH32(esp, eax);
    ecx = esi + 0x20C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2E7AD0);
    ecx = esi;
    MEM32(esi + 0xC) = 0x32;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00213B96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213B93u); } /* indirect call */
    }

loc_00213B96: ;
    eax = 0x22;
    MEM32(esi + 0x114) = eax;
    MEM32(esi + 0x140) = 8;
    MEM32(esi + 0x144) = 0x40;
    MEM32(esi + 0x150) = 0xC;
    MEM32(esi + 0x154) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00213BD0
 * Original: 0x00213BD0 - 0x00213BF3 (35 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213BD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213BD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00213BD8u); RECOMP_ABI_CALL(0x00212E90u, sub_00212E90); /* call 0x00212E90 */

loc_00213BD8: ;
    eax = MEM32(esi + 0x20C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00213BE4u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00213BE4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00213C00
 * Original: 0x00213C00 - 0x00213C12 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213C00(void)
{

loc_00213C00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x8C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00213C0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213C0Cu); } /* indirect call */
    }

loc_00213C0F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213C20
 * Original: 0x00213C20 - 0x00213D2A (266 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213C20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x301C84);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00213C34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213C31u); } /* indirect call */
    }

loc_00213C34: ;
    eax = MEM32(esi + 8);
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, ebx);
    eax = esi + 0x1FC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x301C70);
    ecx = esi;
    MEM32(esi + 0xC) = 0x25;
    MEM32(esi + 0x1C) = 0x12;
    MEM32(esi + 0x2C) = 0x32;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00213C6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213C6Bu); } /* indirect call */
    }

loc_00213C6E: ;
    edx = esi + 0x10C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3C;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 0xC00;
    POP32(esp, edi);
    MEM32(edx + 0xB4) = eax;
    MEM32(edx + 0x68) = eax;
    eax = 0x100C0;
    POP32(esp, esi);
    MEM32(edx + 0xE0) = ebx;
    MEM32(edx + 0xDC) = ebx;
    MEM32(edx + 0xA8) = ebx;
    MEM32(edx + 0x28) = ebx;
    MEM32(edx + 0x48) = ebx;
    MEM32(edx + 0x2C) = ebx;
    MEM32(edx + 0x4C) = ebx;
    MEM32(edx + 0xAC) = ebx;
    MEM32(edx + 0xB0) = ebx;
    MEM32(edx + 0xD4) = 0x11102;
    MEM32(edx + 0xD8) = 0x21;
    MEM32(edx + 0x88) = 0x11C8C931;
    MEM32(edx) = 0x11D8D931;
    MEM32(edx + 0x8C) = 0xCCC40000u;
    MEM32(edx + 4) = 0xD8D41010u;
    MEM32(edx + 0xB8) = eax;
    MEM32(edx + 0x6C) = eax;
    MEM32(edx + 0x20) = 0x300C0000;
    MEM32(edx + 0x24) = 0x1C80;
    MEM32(edx + 0xE4) = 0xFFFFFFF0u;
    MEM32(edx + 0xE8) = 0xFFFFFFFFu;
    MEM32(edx + 0xEC) = 0x1FF;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00213D30
 * Original: 0x00213D30 - 0x00213D38 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213D30(void)
{

loc_00213D30: ;
    PUSH32(esp, 0x00213D35u); RECOMP_ABI_CALL(0x00201D60u, sub_00201D60); /* call 0x00201D60 */

loc_00213D35: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213D40
 * Original: 0x00213D40 - 0x00213D63 (35 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213D40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213D40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00213D48u); RECOMP_ABI_CALL(0x00212E90u, sub_00212E90); /* call 0x00212E90 */

loc_00213D48: ;
    eax = MEM32(esi + 0x1FC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00213D54u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00213D54: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1FC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00213D70
 * Original: 0x00213D70 - 0x00213D99 (41 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213D70: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2E7AD0);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00213D83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213D80u); } /* indirect call */
    }

loc_00213D83: ;
    ecx = MEM32(esi + 8);
    eax = 0x22;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x48) = ecx;
    MEM32(esi + 0x4C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00213DA0
 * Original: 0x00213DA0 - 0x00214332 (1426 bytes, 272 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213DA0(void)
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

loc_00213DA0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x301C9C);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00213DB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213DB3u); } /* indirect call */
    }

loc_00213DB6: ;
    xmm0 = XMM_SCALAR(MEMF(0x30F300)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E73D8); /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0xC) = 0x41;
    MEM32(esi + 0x28) = 8;
    MEM32(esi + 0x2C) = 0x44;
    MEM32(esi + 0x38) = 0xC;
    MEM32(esi + 0x3C) = 0x40;
    MEM32(esi + 0x48) = 0x10;
    MEM32(esi + 0x4C) = 0x25;
    MEM32(esp + 4) = 0;
    eax = 0x842A5C;
    /* nop */

loc_00213E10: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    esi = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x842C5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x842C5C (32-bit) */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    MEM32(esp + 4) = esi;
    MEMF(eax + -20) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00213E10; /* jl: less (signed <) */

loc_00213E3E: ;
    ecx = MEM32(0x842A58);
    edx = MEM32(0x842A5C);
    eax = MEM32(0x842A60);
    MEM32(0x842C58) = ecx;
    ecx = MEM32(0x842A64);
    MEM32(0x842C5C) = edx;
    edx = MEM32(0x842A68);
    MEM32(0x842C60) = eax;
    eax = MEM32(0x842A6C);
    MEM32(0x842C64) = ecx;
    ecx = MEM32(0x842A70);
    MEM32(0x842C68) = edx;
    edx = MEM32(0x842A74);
    MEM32(0x842C6C) = eax;
    eax = MEM32(0x842A78);
    MEM32(0x842C70) = ecx;
    ecx = MEM32(0x842A7C);
    MEM32(0x842C74) = edx;
    edx = MEM32(0x842A80);
    MEM32(0x842C78) = eax;
    eax = MEM32(0x842A84);
    MEM32(0x842C7C) = ecx;
    ecx = MEM32(0x842A88);
    MEM32(0x842C80) = edx;
    edx = MEM32(0x842A8C);
    MEM32(0x842C84) = eax;
    eax = MEM32(0x842A90);
    MEM32(0x842C88) = ecx;
    ecx = MEM32(0x842A94);
    MEM32(0x842C8C) = edx;
    edx = MEM32(0x842A98);
    MEM32(0x842C90) = eax;
    eax = MEM32(0x842A9C);
    MEM32(0x842C94) = ecx;
    ecx = MEM32(0x842AA0);
    MEM32(0x842C98) = edx;
    edx = MEM32(0x842AA4);
    MEM32(0x842C9C) = eax;
    eax = MEM32(0x842AA8);
    MEM32(0x842CA0) = ecx;
    ecx = MEM32(0x842AAC);
    MEM32(0x842CA4) = edx;
    edx = MEM32(0x842AB0);
    MEM32(0x842CA8) = eax;
    eax = MEM32(0x842AB4);
    MEM32(0x842CAC) = ecx;
    ecx = MEM32(0x842AB8);
    MEM32(0x842CB0) = edx;
    edx = MEM32(0x842ABC);
    MEM32(0x842CB4) = eax;
    eax = MEM32(0x842AC0);
    MEM32(0x842CB8) = ecx;
    ecx = MEM32(0x842AC4);
    MEM32(0x842CBC) = edx;
    edx = MEM32(0x842AC8);
    MEM32(0x842CC0) = eax;
    eax = MEM32(0x842ACC);
    MEM32(0x842CC4) = ecx;
    ecx = MEM32(0x842AD0);
    MEM32(0x842CC8) = edx;
    edx = MEM32(0x842AD4);
    MEM32(0x842CCC) = eax;
    eax = MEM32(0x842AD8);
    MEM32(0x842CD0) = ecx;
    ecx = MEM32(0x842ADC);
    MEM32(0x842CD4) = edx;
    edx = MEM32(0x842AE0);
    MEM32(0x842CD8) = eax;
    eax = MEM32(0x842AE4);
    MEM32(0x842CDC) = ecx;
    MEM32(0x842CE0) = edx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(0x842CE4) = eax;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(0x842CE8) = ecx;
    MEM32(0x842CEC) = edx;
    ecx = MEM32(esp + 0x18);
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    MEM32(0x842CF0) = eax;
    MEM32(0x842CF4) = ecx;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(0x842CFC) = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(0x842CF8) = edx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(0x842D00) = ecx;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(0x842D08) = eax;
    MEM32(0x842D0C) = ecx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(0x842D04) = edx;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(0x2DD6C0)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(0x842D10) = edx;
    MEM32(0x842D14) = eax;
    MEM32(0x842D18) = ecx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(0x842D1C) = edx;
    MEM32(0x842D20) = eax;
    MEM32(0x842D24) = ecx;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(0x842D28) = edx;
    MEM32(0x842D2C) = eax;
    MEM32(0x842D30) = ecx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(0x842D34) = edx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(0x842D68) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(0x842D6C) = ecx;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(0x842D70) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(0x842D74) = eax;
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(0x842D38) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(0x842D3C) = edx;
    MEM32(0x842D40) = eax;
    MEM32(0x842D44) = ecx;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(0x842D78) = edx;
    MEM32(0x842D7C) = eax;
    MEM32(0x842D80) = ecx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(0x842D84) = edx;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    MEM32(0x842D48) = eax;
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(0x842D4C) = ecx;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(0x842D50) = edx;
    MEM32(0x842D54) = eax;
    MEM32(0x842D88) = ecx;
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(0x842D8C) = edx;
    MEM32(0x842D90) = eax;
    MEM32(0x842D94) = ecx;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(0x301C98)); /* movss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(0x842D58) = edx;
    MEM32(0x842D5C) = eax;
    MEM32(0x842D60) = ecx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(0x842D64) = edx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(0x842D98) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(0x842D9C) = ecx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x301C94)); /* movss */
    MEM32(0x842DA0) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(0x842DA4) = eax;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(0x842DC8) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(0x842DCC) = edx;
    MEM32(0x842DD0) = eax;
    MEM32(0x842DD4) = ecx;
    POP32(esp, esi);
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
 * sub_00214340
 * Original: 0x00214340 - 0x00214348 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214340(void)
{

loc_00214340: ;
    PUSH32(esp, 0x00214345u); RECOMP_ABI_CALL(0x001FC870u, sub_001FC870); /* call 0x001FC870 */

loc_00214345: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214350
 * Original: 0x00214350 - 0x00214385 (53 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214350(void)
{

loc_00214350: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2E7AD0);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00214363u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00214360u); } /* indirect call */
    }

loc_00214363: ;
    eax = 0x22;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x38) = 8;
    MEM32(esi + 0x3C) = 0x40;
    MEM32(esi + 0x48) = 0xC;
    MEM32(esi + 0x4C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00214390
 * Original: 0x00214390 - 0x00214398 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214390(void)
{

loc_00214390: ;
    PUSH32(esp, 0x00214395u); RECOMP_ABI_CALL(0x0020DB40u, sub_0020DB40); /* call 0x0020DB40 */

loc_00214395: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002143A0
 * Original: 0x002143A0 - 0x002143BE (30 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002143A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002143A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x104);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002143B1u); RECOMP_ABI_CALL(0x00288C20u, sub_00288C20); /* call 0x00288C20 */

loc_002143B1: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x002143BCu); RECOMP_ABI_CALL(0x002888A0u, sub_002888A0); /* call 0x002888A0 */

loc_002143BC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002143C0
 * Original: 0x002143C0 - 0x0021444D (141 bytes, 46 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002143C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002143C0: ;
    PUSH32(esp, 0x002143C5u); RECOMP_ABI_CALL(0x002143A0u, sub_002143A0); /* call 0x002143A0 */

loc_002143C5: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002143D0u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_002143D0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002143DBu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_002143DB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002143E6u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_002143E6: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002143F1u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_002143F1: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002143FCu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_002143FC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00214407u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00214407: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00214415u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00214415: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00214420u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00214420: ;
    PUSH32(esp, 0x204);
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x0021442Cu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0021442C: ;
    eax = MEM32(0x30F2F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0x00214439u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214439: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x00214445u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214445: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002106F0(); return; /* tail jmp 0x002106F0 */

}

/**
 * sub_00214450
 * Original: 0x00214450 - 0x002149BE (1390 bytes, 198 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214450: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    edi = ecx;
    eax = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x301FC4);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00214464u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00214461u); } /* indirect call */
    }

loc_00214464: ;
    ecx = edi;
    PUSH32(esp, 0x0021446Bu); RECOMP_ABI_CALL(0x00213120u, sub_00213120); /* call 0x00213120 */

loc_0021446B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3C;
    edi = 0x8427D0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edx = 0xCB;
    ebx = 0x1C1C1B1B;
    ecx = 0x3C;
    edi = 0x8426E0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x8428A4) = 0x11107;
    MEM32(0x8428A8) = 0x21021;
    MEM32(0x8428B0) = esi;
    MEM32(0x8428AC) = esi;
    MEM32(0x842878) = esi;
    MEM32(0x842858) = 0x49CA4944;
    MEM32(0x8427D0) = 0xD8D41010u;
    MEM32(0x842884) = 0x30C4;
    MEM32(0x842838) = 0x10040;
    MEM32(0x8427F8) = esi;
    MEM32(0x842818) = esi;
    MEM32(0x84285C) = 0xC20D140;
    MEM32(0x8427D4) = 0x430D250;
    MEM32(0x842888) = 0x10C00;
    MEM32(0x84283C) = 0x10B00;
    MEM32(0x8427FC) = esi;
    MEM32(0x84281C) = esi;
    MEM32(0x842860) = 0x49CB0000;
    MEM32(0x8427D8) = 0xC0C1B1B;
    MEM32(0x84288C) = 0x20B0;
    MEM32(0x842840) = edx;
    MEM32(0x842800) = esi;
    MEM32(0x842820) = esi;
    MEM32(0x842864) = 0xBC10000;
    MEM32(0x8427DC) = ebx;
    MEM32(0x842890) = 0xB0;
    MEM32(0x842844) = edx;
    MEM32(0x842804) = esi;
    MEM32(0x842824) = esi;
    MEM32(0x842868) = 0x20CB30C5;
    MEM32(0x8427E0) = ebx;
    MEM32(0x842894) = 0xB00;
    MEM32(0x842848) = edx;
    MEM32(0x842808) = esi;
    MEM32(0x842828) = esi;
    MEM32(0x84286C) = esi;
    MEM32(0x8427E4) = ebx;
    MEM32(0x842898) = esi;
    MEM32(0x84284C) = edx;
    MEM32(0x84280C) = esi;
    MEM32(0x84282C) = esi;
    MEM32(0x842870) = 0x1CC11BC2;
    MEM32(0x8427E8) = esi;
    MEM32(0x84289C) = 0xC00;
    MEM32(0x842850) = esi;
    MEM32(0x842810) = esi;
    MEM32(0x842830) = esi;
    MEM32(0x8427F0) = 0x190C000B;
    MEM32(0x8427F4) = 0x1480;
    MEM32(0x84287C) = esi;
    MEM32(0x842880) = esi;
    MEM32(0x8428B4) = 0xF1FF0F1Fu;
    MEM32(0x8428B8) = 0xF2FFFF2Fu;
    MEM32(0x8428BC) = 0x1FF;
    MEM32(0x8427B4) = 0x11107;
    MEM32(0x8427B8) = 0x21021;
    MEM32(0x8427C0) = esi;
    MEM32(0x8427BC) = esi;
    MEM32(0x842788) = esi;
    ecx = 0x3C;
    edi = 0x8428C0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x842768) = 0x49CA4944;
    MEM32(0x8426E0) = 0xD8D41010u;
    MEM32(0x842794) = 0x30C4;
    MEM32(0x842748) = 0x10040;
    MEM32(0x842708) = esi;
    MEM32(0x842728) = esi;
    MEM32(0x84276C) = 0xC20D140;
    MEM32(0x8426E4) = 0x430D250;
    MEM32(0x842798) = 0x10C00;
    MEM32(0x84274C) = 0x10B00;
    MEM32(0x84270C) = esi;
    MEM32(0x84272C) = esi;
    MEM32(0x842770) = 0x49CB0000;
    MEM32(0x8426E8) = 0xC0C1B1B;
    MEM32(0x84279C) = 0x20B0;
    MEM32(0x842750) = edx;
    MEM32(0x842710) = esi;
    MEM32(0x842730) = esi;
    MEM32(0x842774) = 0xBC10000;
    MEM32(0x8426EC) = ebx;
    MEM32(0x8427A0) = 0xB0;
    MEM32(0x842754) = edx;
    MEM32(0x842714) = esi;
    MEM32(0x842734) = esi;
    MEM32(0x842778) = 0xC8CBC8C5u;
    MEM32(0x8426F0) = ebx;
    MEM32(0x8427A4) = 0xB00;
    MEM32(0x842758) = edx;
    MEM32(0x842718) = esi;
    MEM32(0x842738) = esi;
    MEM32(0x84277C) = esi;
    MEM32(0x8426F4) = ebx;
    MEM32(0x8427A8) = esi;
    MEM32(0x84275C) = edx;
    MEM32(0x84271C) = esi;
    MEM32(0x84273C) = esi;
    MEM32(0x842780) = 0x1CC11BC2;
    MEM32(0x8426F8) = esi;
    MEM32(0x8427AC) = 0xC00;
    MEM32(0x842760) = esi;
    MEM32(0x842720) = esi;
    MEM32(0x842740) = esi;
    MEM32(0x842700) = 0x300C000B;
    MEM32(0x842704) = 0x1480;
    MEM32(0x84278C) = esi;
    MEM32(0x842790) = esi;
    MEM32(0x8427C4) = 0xF1FF0F1Fu;
    MEM32(0x8427C8) = 0xF2FFFF2Fu;
    MEM32(0x8427CC) = 0x1FF;
    MEM32(0x842994) = 0x11107;
    MEM32(0x842998) = 0x21021;
    MEM32(0x8429A0) = esi;
    MEM32(0x84299C) = esi;
    MEM32(0x842968) = esi;
    MEM32(0x842948) = 0x49CA4944;
    MEM32(0x8428C0) = 0xD8D41010u;
    MEM32(0x842974) = 0x30C4;
    MEM32(0x842928) = 0x10040;
    MEM32(0x8428E8) = esi;
    MEM32(0x842908) = esi;
    MEM32(0x84294C) = 0xC20D140;
    MEM32(0x8428C4) = 0x430D250;
    MEM32(0x842978) = 0x10C00;
    MEM32(0x84292C) = 0x10B00;
    MEM32(0x8428EC) = esi;
    MEM32(0x84290C) = esi;
    MEM32(0x842950) = 0x49CB0000;
    MEM32(0x8428C8) = 0xC0C1B1B;
    MEM32(0x84297C) = 0x20B0;
    MEM32(0x842930) = edx;
    MEM32(0x8428F0) = esi;
    MEM32(0x842910) = esi;
    MEM32(0x842954) = 0xBC10000;
    MEM32(0x8428CC) = ebx;
    MEM32(0x842980) = 0xB0;
    MEM32(0x842934) = edx;
    MEM32(0x8428F4) = esi;
    MEM32(0x842914) = esi;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x8426DC) = xmm0.f[0]; /* movss */
    MEMF(0x8426D8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x301FC0)); /* movss */
    POP32(esp, edi);
    MEM32(0x8428F8) = esi;
    MEM32(0x842918) = esi;
    MEM32(0x84295C) = esi;
    MEM32(0x842988) = esi;
    MEM32(0x8428FC) = esi;
    MEM32(0x84291C) = esi;
    MEM32(0x8428D8) = esi;
    MEM32(0x842940) = esi;
    MEM32(0x842900) = esi;
    MEM32(0x842920) = esi;
    MEM32(0x84296C) = esi;
    MEM32(0x842970) = esi;
    MEMF(0x8426D4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x301FBC)); /* movss */
    POP32(esp, esi);
    MEM32(0x8428D0) = ebx;
    MEM32(0x8428D4) = ebx;
    MEM32(0x842958) = 0xC8CBC8C5u;
    MEM32(0x842984) = 0xB00;
    MEM32(0x842938) = edx;
    MEM32(0x84293C) = edx;
    MEM32(0x842960) = 0x1CC11BC2;
    MEM32(0x84298C) = 0xC00;
    MEM32(0x8428E0) = 0x190C000B;
    MEM32(0x8428E4) = 0x1480;
    MEM32(0x8429A4) = 0xF1FF0F1Fu;
    MEM32(0x8429A8) = 0xF2FFFF2Fu;
    MEM32(0x8429AC) = 0x1FF;
    MEMF(0x8426D0) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002149C0
 * Original: 0x002149C0 - 0x00214C4F (655 bytes, 163 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002149C0(void)
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

loc_002149C0: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x002149CCu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_002149CC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x67);
    PUSH32(esp, 0x002149D5u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_002149D5: ;
    xmm2 = XMM_SCALAR(MEMF(0x8426D8)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x8426DC)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002149FB; /* jnp: not parity */

loc_002149F4: ;
    PUSH32(esp, 0x8427D0);
    goto loc_00214A10;

loc_002149FB: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00214A0B; /* jnp: not parity */

loc_00214A04: ;
    PUSH32(esp, 0x8426E0);
    goto loc_00214A10;

loc_00214A0B: ;
    PUSH32(esp, 0x8428C0);

loc_00214A10: ;
    PUSH32(esp, 0x00214A15u); RECOMP_ABI_CALL(0x0028C570u, sub_0028C570); /* call 0x0028C570 */

loc_00214A15: ;
    SET_LO8(eax, MEM8(0x841FC0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(0x30F2D4);
    if (CMP_EQ(_fa, _fb)) eax = MEM32(0x30F2D0); /* cmove */
    ecx = eax;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp) = ecx;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00214A40; /* jge: greater or equal (signed >=) */

loc_00214A3A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00214A40: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3019D4)); /* fmul dword ptr [0x3019d4] */
    edx = eax;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp) = edx;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00214A65; /* jge: greater or equal (signed >=) */

loc_00214A5F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00214A65: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3019D4)); /* fmul dword ptr [0x3019d4] */
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp) = ecx;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00214A8A; /* jge: greater or equal (signed >=) */

loc_00214A84: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00214A8A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3019D4)); /* fmul dword ptr [0x3019d4] */
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00214AA7; /* jge: greater or equal (signed >=) */

loc_00214AA1: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00214AA7: ;
    eax = MEM32(esp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3019D4)); /* fmul dword ptr [0x3019d4] */
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x30F2F4);
    MEM32(esp + 0x28) = ecx;
    ecx = eax;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(esp) = ecx;
    fp_push((double)SMEM32(esp)); /* fild */
    MEM32(esp + 0x2C) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00214AEE; /* jge: greater or equal (signed >=) */

loc_00214AE8: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00214AEE: ;
    xmm0 = XMM_SCALAR(MEMF(0x2E7B88)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    ecx = ZX8(MEM8(0x30F2F7));
    edx = ZX8(HI8(eax));
    eax = ZX8(MEM8(0x30F2F6));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x14);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(0x30F2F8);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x38) = ecx;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = eax;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x8426D4)); /* movss */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(esp) = ecx;
    fp_push((double)SMEM32(esp)); /* fild */
    MEM32(esp + 0x3C) = edx;
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_00214B86; /* jge: greater or equal (signed >=) */

loc_00214B80: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2E27FC)); /* fadd dword ptr [0x2e27fc] */

loc_00214B86: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E7B88)); /* fmul dword ptr [0x2e7b88] */
    ecx = ZX8(MEM8(0x30F2FB));
    edx = ZX8(HI8(eax));
    eax = ZX8(MEM8(0x30F2FA));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x14);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x18);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x8426D0)); /* movss */
    MEM32(esp + 0x44) = eax;
    PUSH32(esp, 3);
    eax = esp + 0x24;
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x44) = edx;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    MEM32(esp + 0x54) = edx;
    PUSH32(esp, 0);
    MEM32(esp + 0x54) = ecx;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00214C07u); RECOMP_ABI_CALL(0x0028C7B0u, sub_0028C7B0); /* call 0x0028C7B0 */

loc_00214C07: ;
    SET_LO8(eax, MEM8(0x841FC0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x841FD8;
    if (CMP_NE(_fa, _fb)) goto loc_00214C1A; /* jne: not equal / not zero */

loc_00214C15: ;
    eax = 0x841FCC;

loc_00214C1A: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 8) = edx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    MEM32(esp + 4) = ecx;
    edx = esp + 4;
    ecx = 0x25;
    MEM32(esp + 0xC) = eax;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00214C4Bu); RECOMP_ABI_CALL(0x00288900u, sub_00288900); /* call 0x00288900 */

loc_00214C4B: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00214C50
 * Original: 0x00214C50 - 0x00214C74 (36 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214C50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00214C58u); RECOMP_ABI_CALL(0x002143A0u, sub_002143A0); /* call 0x002143A0 */

loc_00214C58: ;
    eax = MEM32(0x842A4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00214C72; /* jne: not equal / not zero */

loc_00214C61: ;
    ecx = esi;
    PUSH32(esp, 0x00214C68u); RECOMP_ABI_CALL(0x002149C0u, sub_002149C0); /* call 0x002149C0 */

loc_00214C68: ;
    MEM32(0x842A4C) = 1;

loc_00214C72: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00214C80
 * Original: 0x00214C80 - 0x00214CB3 (51 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214C80: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x67);
    PUSH32(esp, 0x00214C89u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214C89: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x00214C93u); RECOMP_ABI_CALL(0x0028C5B0u, sub_0028C5B0); /* call 0x0028C5B0 */

loc_00214C93: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00214C9Cu); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_00214C9C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00214CA5u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_00214CA5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x842A4C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00214CC0
 * Original: 0x00214CC0 - 0x00214D0B (75 bytes, 24 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214CC0(void)
{

loc_00214CC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x104);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00214CD1u); RECOMP_ABI_CALL(0x00288C20u, sub_00288C20); /* call 0x00288C20 */

loc_00214CD1: ;
    ecx = MEM32(esi + 0x2F4);
    PUSH32(esp, 0x19);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00214CDFu); RECOMP_ABI_CALL(0x00288C20u, sub_00288C20); /* call 0x00288C20 */

loc_00214CDF: ;
    edx = MEM32(esi + 0x200);
    PUSH32(esp, 0x32);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00214CEDu); RECOMP_ABI_CALL(0x00288C20u, sub_00288C20); /* call 0x00288C20 */

loc_00214CED: ;
    eax = MEM32(esi + 0x10C);
    PUSH32(esp, 0x4B);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00214CFBu); RECOMP_ABI_CALL(0x00288C20u, sub_00288C20); /* call 0x00288C20 */

loc_00214CFB: ;
    ecx = MEM32(esi + 0x6C8);
    PUSH32(esp, 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00214D09u); RECOMP_ABI_CALL(0x00288C20u, sub_00288C20); /* call 0x00288C20 */

loc_00214D09: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00214D10
 * Original: 0x00214D10 - 0x00214D34 (36 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214D10: ;
    PUSH32(esp, 0x301FD4);
    PUSH32(esp, 0xFF00FFF0u);
    PUSH32(esp, 0x00214D1Fu); RECOMP_ABI_CALL(0x0028B340u, sub_0028B340); /* call 0x0028B340 */

loc_00214D1F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x643370;
    PUSH32(esp, 0x00214D2Cu); RECOMP_ABI_CALL(0x0021FA50u, sub_0021FA50); /* call 0x0021FA50 */

loc_00214D2C: ;
    PUSH32(esp, 0x00214D31u); RECOMP_ABI_CALL(0x0028B340u, sub_0028B340); /* call 0x0028B340 */

loc_00214D31: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214D40
 * Original: 0x00214D40 - 0x00214D4C (12 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214D40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214D40: ;
    PUSH32(esp, 0x4B);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00214D4Bu); RECOMP_ABI_CALL(0x002888A0u, sub_002888A0); /* call 0x002888A0 */

loc_00214D4B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00214D50
 * Original: 0x00214D50 - 0x00214D69 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00214D50: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF0);
    ecx = eax + 0x842310;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0028C570(); return; /* tail jmp 0x0028C570 */

}

/**
 * sub_00214D70
 * Original: 0x00214D70 - 0x00214D8C (28 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214D70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x32);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00214D7Eu); RECOMP_ABI_CALL(0x002888A0u, sub_002888A0); /* call 0x002888A0 */

loc_00214D7E: ;
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x204;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00214D8Au); RECOMP_ABI_CALL(0x0028C570u, sub_0028C570); /* call 0x0028C570 */

loc_00214D8A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00214D90
 * Original: 0x00214D90 - 0x00214DA3 (19 bytes, 7 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214D90: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00214D9Bu); RECOMP_ABI_CALL(0x002888A0u, sub_002888A0); /* call 0x002888A0 */

loc_00214D9B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00214DA2u); RECOMP_ABI_CALL(0x0028C5B0u, sub_0028C5B0); /* call 0x0028C5B0 */

loc_00214DA2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00214DB0
 * Original: 0x00214DB0 - 0x00214DDC (44 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00214DB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x19);
    eax = esi + 0x5C8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00214DC1u); RECOMP_ABI_CALL(0x002888A0u, sub_002888A0); /* call 0x002888A0 */

loc_00214DC1: ;
    ecx = MEM32(esp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xF0);
    edx = ecx + esi + 0x118;
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0028C570(); return; /* tail jmp 0x0028C570 */

}

/**
 * sub_00214DE0
 * Original: 0x00214DE0 - 0x00214E3B (91 bytes, 32 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214DE0: ;
    PUSH32(esp, 0x64);
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00214DEEu); RECOMP_ABI_CALL(0x002888A0u, sub_002888A0); /* call 0x002888A0 */

loc_00214DEE: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00214DF9u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00214DF9: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00214E04u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00214E04: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00214E0Fu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00214E0F: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00214E1Au); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00214E1A: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00214E25u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00214E25: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00214E30u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00214E30: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x00214E3Au); RECOMP_ABI_CALL(0x0028C5B0u, sub_0028C5B0); /* call 0x0028C5B0 */

loc_00214E3A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00214E40
 * Original: 0x00214E40 - 0x00214E5F (31 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214E40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214E40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x64);
    eax = esi + 0x6CC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00214E51u); RECOMP_ABI_CALL(0x002888A0u, sub_002888A0); /* call 0x002888A0 */

loc_00214E51: ;
    _fb = (uint32_t)(0x7CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x7CC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00214E5Du); RECOMP_ABI_CALL(0x0028C570u, sub_0028C570); /* call 0x0028C570 */

loc_00214E5D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00214E60
 * Original: 0x00214E60 - 0x00214F1A (186 bytes, 59 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214E60: ;
    PUSH32(esp, 0x00214E65u); RECOMP_ABI_CALL(0x002143A0u, sub_002143A0); /* call 0x002143A0 */

loc_00214E65: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00214E70u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00214E70: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00214E7Bu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00214E7B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00214E86u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00214E86: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00214E8Fu); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_00214E8F: ;
    eax = MEM32(0x842A50);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00214F19; /* jne: not equal / not zero */

loc_00214E9B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x00214EA4u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214EA4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x90);
    PUSH32(esp, 0x00214EB0u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214EB0: ;
    PUSH32(esp, 0x206);
    PUSH32(esp, 0x39);
    PUSH32(esp, 0x00214EBCu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214EBC: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x52);
    PUSH32(esp, 0x00214EC5u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214EC5: ;
    PUSH32(esp, 0x207);
    PUSH32(esp, 0x46);
    PUSH32(esp, 0x00214ED1u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214ED1: ;
    PUSH32(esp, 0x1E00);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x00214EDDu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214EDD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x47);
    PUSH32(esp, 0x00214EE6u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214EE6: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x00214EEFu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214EEF: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x49);
    PUSH32(esp, 0x00214EFBu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214EFB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x00214F04u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214F04: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x00214F0Du); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214F0D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x43);
    PUSH32(esp, 0x00214F16u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214F16: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00214F19: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00214F20
 * Original: 0x00214F20 - 0x00215137 (535 bytes, 141 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214F20: ;
    eax = MEM32(0x842A50);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00215131; /* jne: not equal / not zero */

loc_00214F36: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47);
    PUSH32(esp, 0x00214F3Eu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214F3E: ;
    PUSH32(esp, 0x201);
    PUSH32(esp, 0x46);
    PUSH32(esp, 0x00214F4Au); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214F4A: ;
    PUSH32(esp, 0x1E00);
    PUSH32(esp, 0x91);
    PUSH32(esp, 0x00214F59u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214F59: ;
    PUSH32(esp, 0x1E00);
    PUSH32(esp, 0x45);
    PUSH32(esp, 0x00214F65u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214F65: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x93);
    PUSH32(esp, 0x00214F70u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214F70: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x8F);
    PUSH32(esp, 0x00214F7Bu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214F7B: ;
    PUSH32(esp, 0x1010101);
    PUSH32(esp, 0x43);
    PUSH32(esp, 0x00214F87u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214F87: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x00214F90u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214F90: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0x00214F9Bu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214F9B: ;
    PUSH32(esp, 0x302);
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x00214FA7u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214FA7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00214FB1u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00214FB1: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0xE);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00214FBBu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00214FBB: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00214FC5u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00214FC5: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x12);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00214FCFu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00214FCF: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00214FDDu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00214FDD: ;
    eax = MEM32(0x30F2FC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x00214FEDu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00214FED: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00214FF4u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_00214FF4: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DD6C0)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edi;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00215023u); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_00215023: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC340); /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DD6C0)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x24) = edi;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0021505Bu); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_0021505B: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC340); /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00215072u); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_00215072: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC340); /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DD6C0)); /* movss */
    MEM32(esp + 0x38) = edi;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002150AAu); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_002150AA: ;
    ecx = MEM32(esi + 0x20C);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC340); /* subss */
    PUSH32(esp, edi);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ecx);
    MEM32(esp + 0x54) = edi;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002150DCu); RECOMP_ABI_CALL(0x00288C20u, sub_00288C20); /* call 0x00288C20 */

loc_002150DC: ;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x002150E9u); RECOMP_ABI_CALL(0x002888A0u, sub_002888A0); /* call 0x002888A0 */

loc_002150E9: ;
    PUSH32(esp, 0x14);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0x002150F9u); RECOMP_ABI_CALL(0x0028A990u, sub_0028A990); /* call 0x0028A990 */

loc_002150F9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8F);
    PUSH32(esp, 0x00215105u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00215105: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x0021510Eu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0021510E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x90);
    PUSH32(esp, 0x00215119u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00215119: ;
    PUSH32(esp, 0x203);
    PUSH32(esp, 0x39);
    PUSH32(esp, 0x00215125u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00215125: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x52);
    PUSH32(esp, 0x0021512Eu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0021512E: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00215131: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00215140
 * Original: 0x00215140 - 0x0021518D (77 bytes, 28 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215140: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00215147u); RECOMP_ABI_CALL(0x0028C5B0u, sub_0028C5B0); /* call 0x0028C5B0 */

loc_00215147: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00215152u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00215152: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0021515Du); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0021515D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00215168u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00215168: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00215173u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00215173: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0021517Eu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0021517E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00215189u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00215189: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00215190
 * Original: 0x00215190 - 0x0021519D (13 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215190: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0021519Cu); RECOMP_ABI_CALL(0x0028C570u, sub_0028C570); /* call 0x0028C570 */

loc_0021519C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002151A0
 * Original: 0x002151A0 - 0x002151BE (30 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002151A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002151A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1FC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002151B1u); RECOMP_ABI_CALL(0x00288C20u, sub_00288C20); /* call 0x00288C20 */

loc_002151B1: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x002151BCu); RECOMP_ABI_CALL(0x002888A0u, sub_002888A0); /* call 0x002888A0 */

loc_002151BC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002151C0
 * Original: 0x002151C0 - 0x002153F2 (562 bytes, 184 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002151C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002151C0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x002151CFu); RECOMP_ABI_CALL(0x0028BDB0u, sub_0028BDB0); /* call 0x0028BDB0 */

loc_002151CF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002151D8u); RECOMP_ABI_CALL(0x00289E20u, sub_00289E20); /* call 0x00289E20 */

loc_002151D8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002151E1u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_002151E1: ;
    PUSH32(esp, 0x301FDC);
    PUSH32(esp, 0x8000FF00u);
    PUSH32(esp, 0x002151F0u); RECOMP_ABI_CALL(0x0028B340u, sub_0028B340); /* call 0x0028B340 */

loc_002151F0: ;
    eax = MEM32(esi + 0x104);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00215201u); RECOMP_ABI_CALL(0x00288C20u, sub_00288C20); /* call 0x00288C20 */

loc_00215201: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021520Cu); RECOMP_ABI_CALL(0x002888A0u, sub_002888A0); /* call 0x002888A0 */

loc_0021520C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8F);
    PUSH32(esp, 0x00215218u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00215218: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x00215221u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00215221: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x0021522Bu); RECOMP_ABI_CALL(0x0028C5B0u, sub_0028C5B0); /* call 0x0028C5B0 */

loc_0021522B: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00215236u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00215236: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00215241u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00215241: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0021524Cu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0021524C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00215257u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00215257: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00215262u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00215262: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0021526Du); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0021526D: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0021527Bu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0021527B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00215286u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00215286: ;
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00215291u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00215291: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0021529Cu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0021529C: ;
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002152A7u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_002152A7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x002152B0u); RECOMP_ABI_CALL(0x00210A20u, sub_00210A20); /* call 0x00210A20 */

loc_002152B0: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002152BBu); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_002152BB: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x002152CFu); RECOMP_ABI_CALL(0x00210A20u, sub_00210A20); /* call 0x00210A20 */

loc_002152CF: ;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002152DEu); RECOMP_ABI_CALL(0x002895D0u, sub_002895D0); /* call 0x002895D0 */

loc_002152DE: ;
    PUSH32(esp, 0x002152E3u); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_002152E3: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002152F2u); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_002152F2: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 8);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00215303u); RECOMP_ABI_CALL(0x0028AEF0u, sub_0028AEF0); /* call 0x0028AEF0 */

loc_00215303: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0021530Eu); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0021530E: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00215320u); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_00215320: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC090); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00215342u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_00215342: ;
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00215357u); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_00215357: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00215364u); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_00215364: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00215374u); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_00215374: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0021537Eu); RECOMP_ABI_CALL(0x0028AE00u, sub_0028AE00); /* call 0x0028AE00 */

loc_0021537E: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0021538Fu); RECOMP_ABI_CALL(0x0028AE40u, sub_0028AE40); /* call 0x0028AE40 */

loc_0021538F: ;
    PUSH32(esp, 0x00215394u); RECOMP_ABI_CALL(0x0028AF30u, sub_0028AF30); /* call 0x0028AF30 */

loc_00215394: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021539Eu); RECOMP_ABI_CALL(0x0028B130u, sub_0028B130); /* call 0x0028B130 */

loc_0021539E: ;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002153A9u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_002153A9: ;
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002153B4u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_002153B4: ;
    PUSH32(esp, 2);
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002153BFu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_002153BF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002153CAu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_002153CA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002153D5u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_002153D5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8F);
    PUSH32(esp, 0x002153E1u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_002153E1: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002153E9u); RECOMP_ABI_CALL(0x0028B340u, sub_0028B340); /* call 0x0028B340 */

loc_002153E9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215400
 * Original: 0x00215400 - 0x0021553B (315 bytes, 76 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215400: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00215408u); RECOMP_ABI_CALL(0x002143A0u, sub_002143A0); /* call 0x002143A0 */

loc_00215408: ;
    PUSH32(esp, 0xA4);
    edx = 0x842A58;
    ecx = 0x25;
    PUSH32(esp, 0x0021541Cu); RECOMP_ABI_CALL(0x00288AF0u, sub_00288AF0); /* call 0x00288AF0 */

loc_0021541C: ;
    eax = MEM32(0x6437B4);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x30F088)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x301FE8); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 4);
    MEM32(0x842DA8) = ecx;
    MEM32(0x842DAC) = edx;
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(0x842DB0) = ecx;
    MEM32(0x842DB4) = edx;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    eax = MEM32(esp);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 4);
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(0x842DB8) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x842DBC) = ecx;
    MEM32(0x842DC0) = edx;
    PUSH32(esp, 0x3C);
    edx = 0x842CE8;
    ecx = 0x53;
    MEM32(0x842DC4) = eax;
    PUSH32(esp, 0x002154F2u); RECOMP_ABI_CALL(0x00288AF0u, sub_00288AF0); /* call 0x00288AF0 */

loc_002154F2: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002154FDu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_002154FD: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00215508u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00215508: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00215513u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00215513: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0021551Eu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0021551E: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00215529u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00215529: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00215534u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00215534: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00215540
 * Original: 0x00215540 - 0x00215798 (600 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00215540: ;
    ecx = 0x30F308;
    MEM32(0x8429B0) = 0x30F308;
    PUSH32(esp, 0x00215554u); RECOMP_ABI_CALL(0x00213360u, sub_00213360); /* call 0x00213360 */

loc_00215554: ;
    ecx = 0x30FBC8;
    MEM32(0x8429B4) = 0x30FBC8;
    PUSH32(esp, 0x00215568u); RECOMP_ABI_CALL(0x00213050u, sub_00213050); /* call 0x00213050 */

loc_00215568: ;
    ecx = 0x30FCD8;
    MEM32(0x8429B8) = 0x30FCD8;
    PUSH32(esp, 0x0021557Cu); RECOMP_ABI_CALL(0x00213070u, sub_00213070); /* call 0x00213070 */

loc_0021557C: ;
    ecx = 0x30FDE8;
    MEM32(0x8429BC) = 0x30FDE8;
    PUSH32(esp, 0x00215590u); RECOMP_ABI_CALL(0x00213090u, sub_00213090); /* call 0x00213090 */

loc_00215590: ;
    ecx = 0x30FEF8;
    MEM32(0x8429C0) = 0x30FEF8;
    PUSH32(esp, 0x002155A4u); RECOMP_ABI_CALL(0x002130B0u, sub_002130B0); /* call 0x002130B0 */

loc_002155A4: ;
    ecx = 0x310008;
    MEM32(0x8429C4) = 0x310008;
    PUSH32(esp, 0x002155B8u); RECOMP_ABI_CALL(0x002130D0u, sub_002130D0); /* call 0x002130D0 */

loc_002155B8: ;
    ecx = 0x310118;
    MEM32(0x8429E0) = 0x310118;
    PUSH32(esp, 0x002155CCu); RECOMP_ABI_CALL(0x00214450u, sub_00214450); /* call 0x00214450 */

loc_002155CC: ;
    ecx = 0x310228;
    MEM32(0x8429E4) = 0x310228;
    PUSH32(esp, 0x002155E0u); RECOMP_ABI_CALL(0x00213140u, sub_00213140); /* call 0x00213140 */

loc_002155E0: ;
    ecx = 0x310338;
    MEM32(0x8429E8) = 0x310338;
    PUSH32(esp, 0x002155F4u); RECOMP_ABI_CALL(0x00213160u, sub_00213160); /* call 0x00213160 */

loc_002155F4: ;
    ecx = 0x310448;
    MEM32(0x8429EC) = 0x310448;
    PUSH32(esp, 0x00215608u); RECOMP_ABI_CALL(0x00213180u, sub_00213180); /* call 0x00213180 */

loc_00215608: ;
    ecx = 0x310558;
    MEM32(0x8429F0) = 0x310558;
    PUSH32(esp, 0x0021561Cu); RECOMP_ABI_CALL(0x002131A0u, sub_002131A0); /* call 0x002131A0 */

loc_0021561C: ;
    ecx = 0x310668;
    MEM32(0x8429F4) = 0x310668;
    PUSH32(esp, 0x00215630u); RECOMP_ABI_CALL(0x002131C0u, sub_002131C0); /* call 0x002131C0 */

loc_00215630: ;
    ecx = 0x310778;
    MEM32(0x8429F8) = 0x310778;
    PUSH32(esp, 0x00215644u); RECOMP_ABI_CALL(0x002131E0u, sub_002131E0); /* call 0x002131E0 */

loc_00215644: ;
    ecx = 0x310888;
    MEM32(0x8429FC) = 0x310888;
    PUSH32(esp, 0x00215658u); RECOMP_ABI_CALL(0x00213200u, sub_00213200); /* call 0x00213200 */

loc_00215658: ;
    ecx = 0x310998;
    MEM32(0x842A00) = 0x310998;
    PUSH32(esp, 0x0021566Cu); RECOMP_ABI_CALL(0x00213220u, sub_00213220); /* call 0x00213220 */

loc_0021566C: ;
    ecx = 0x310AA8;
    MEM32(0x842A04) = 0x310AA8;
    PUSH32(esp, 0x00215680u); RECOMP_ABI_CALL(0x00213240u, sub_00213240); /* call 0x00213240 */

loc_00215680: ;
    ecx = 0x310BB8;
    MEM32(0x842A08) = 0x310BB8;
    PUSH32(esp, 0x00215694u); RECOMP_ABI_CALL(0x00213260u, sub_00213260); /* call 0x00213260 */

loc_00215694: ;
    ecx = 0x310CC8;
    MEM32(0x842A0C) = 0x310CC8;
    PUSH32(esp, 0x002156A8u); RECOMP_ABI_CALL(0x00213280u, sub_00213280); /* call 0x00213280 */

loc_002156A8: ;
    ecx = 0x310DD8;
    MEM32(0x8429C8) = 0x310DD8;
    PUSH32(esp, 0x002156BCu); RECOMP_ABI_CALL(0x002132A0u, sub_002132A0); /* call 0x002132A0 */

loc_002156BC: ;
    ecx = 0x310EE8;
    MEM32(0x8429CC) = 0x310EE8;
    PUSH32(esp, 0x002156D0u); RECOMP_ABI_CALL(0x002132C0u, sub_002132C0); /* call 0x002132C0 */

loc_002156D0: ;
    ecx = 0x310FF8;
    MEM32(0x8429D0) = 0x310FF8;
    PUSH32(esp, 0x002156E4u); RECOMP_ABI_CALL(0x002132E0u, sub_002132E0); /* call 0x002132E0 */

loc_002156E4: ;
    ecx = 0x311108;
    MEM32(0x8429D4) = 0x311108;
    PUSH32(esp, 0x002156F8u); RECOMP_ABI_CALL(0x00213300u, sub_00213300); /* call 0x00213300 */

loc_002156F8: ;
    ecx = 0x311218;
    MEM32(0x8429D8) = 0x311218;
    PUSH32(esp, 0x0021570Cu); RECOMP_ABI_CALL(0x00213320u, sub_00213320); /* call 0x00213320 */

loc_0021570C: ;
    ecx = 0x311328;
    MEM32(0x8429DC) = 0x311328;
    PUSH32(esp, 0x00215720u); RECOMP_ABI_CALL(0x00213340u, sub_00213340); /* call 0x00213340 */

loc_00215720: ;
    ecx = 0x311438;
    MEM32(0x842A1C) = 0x311438;
    PUSH32(esp, 0x00215734u); RECOMP_ABI_CALL(0x00213B10u, sub_00213B10); /* call 0x00213B10 */

loc_00215734: ;
    ecx = 0x311548;
    MEM32(0x842A10) = 0x311548;
    PUSH32(esp, 0x00215748u); RECOMP_ABI_CALL(0x00213D70u, sub_00213D70); /* call 0x00213D70 */

loc_00215748: ;
    ecx = 0x311658;
    MEM32(0x842A18) = 0x311658;
    PUSH32(esp, 0x0021575Cu); RECOMP_ABI_CALL(0x00213B60u, sub_00213B60); /* call 0x00213B60 */

loc_0021575C: ;
    ecx = 0x311868;
    MEM32(0x842A14) = 0x311868;
    PUSH32(esp, 0x00215770u); RECOMP_ABI_CALL(0x00213C20u, sub_00213C20); /* call 0x00213C20 */

loc_00215770: ;
    ecx = 0x311B78;
    MEM32(0x842A2C) = 0x311B78;
    PUSH32(esp, 0x00215784u); RECOMP_ABI_CALL(0x00213DA0u, sub_00213DA0); /* call 0x00213DA0 */

loc_00215784: ;
    MEM32(0x842A44) = 0x311A68;
    ecx = 0x311A68;
    g_seh_ebp = ebp; sub_00214350(); return; /* tail jmp 0x00214350 */

}

/**
 * sub_002157A0
 * Original: 0x002157A0 - 0x00215AA0 (768 bytes, 248 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002157A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_002157A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0x7B5320);
    PUSH32(esp, esi);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002157C0u); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_002157C0: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002157CDu); RECOMP_ABI_CALL(0x0022F6A5u, sub_0022F6A5); /* call 0x0022F6A5 */

loc_002157CD: ;
    PUSH32(esp, 0xC);
    edx = esp + 0x54;
    ecx = 0x17;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002157DDu); RECOMP_ABI_CALL(0x00288AF0u, sub_00288AF0); /* call 0x00288AF0 */

loc_002157DD: ;
    _fa = (uint32_t)(MEM8(esi + 0x64)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x64), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021589C; /* je: equal / zero */

loc_002157E7: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x88)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, esi);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00215848; /* jnp: not parity */

loc_002157FD: ;
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215806u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_00215806: ;
    eax = MEM32(esi + 0x88);
    ecx = eax;
    edx = eax;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = edx;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215833u); RECOMP_ABI_CALL(0x0022F6F0u, sub_0022F6F0); /* call 0x0022F6F0 */

loc_00215833: ;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021583Eu); RECOMP_ABI_CALL(0x0022F5A7u, sub_0022F5A7); /* call 0x0022F5A7 */

loc_0021583E: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    goto loc_0021584D;

loc_00215848: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);

loc_0021584D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215852u); RECOMP_ABI_CALL(0x0022F6A5u, sub_0022F6A5); /* call 0x0022F6A5 */

loc_00215852: ;
    ecx = 4;
    edx = esp + 0x10;
    PUSH32(esp, 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215862u); RECOMP_ABI_CALL(0x00288AF0u, sub_00288AF0); /* call 0x00288AF0 */

loc_00215862: ;
    SET_LO16(eax, MEM16(esi + 0x80));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021589C; /* je: equal / zero */

loc_0021586E: ;
    edx = MEM32(esi + 0x7C);
    eax = ZX16(LO16(eax));
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ecx = 7;
    if (CMP_NE(_fa, _fb)) goto loc_00215887; /* jne: not equal / not zero */

loc_00215880: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215885u); RECOMP_ABI_CALL(0x00288900u, sub_00288900); /* call 0x00288900 */

loc_00215885: ;
    goto loc_0021589C;

loc_00215887: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00215893; /* jne: not equal / not zero */

loc_0021588C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215891u); RECOMP_ABI_CALL(0x00288960u, sub_00288960); /* call 0x00288960 */

loc_00215891: ;
    goto loc_0021589C;

loc_00215893: ;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021589Cu); RECOMP_ABI_CALL(0x00288AF0u, sub_00288AF0); /* call 0x00288AF0 */

loc_0021589C: ;
    edx = MEM32(esi + 0x68);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002158DE; /* je: equal / zero */

loc_002158A3: ;
    eax = ZX16(MEM16(esi + 0x66));
    eax = eax + eax * 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002158BB; /* jne: not equal / not zero */

loc_002158AF: ;
    ecx = 0x25;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002158B9u); RECOMP_ABI_CALL(0x00288900u, sub_00288900); /* call 0x00288900 */

loc_002158B9: ;
    goto loc_002158DE;

loc_002158BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002158CC; /* jne: not equal / not zero */

loc_002158C0: ;
    ecx = 0x25;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002158CAu); RECOMP_ABI_CALL(0x00288960u, sub_00288960); /* call 0x00288960 */

loc_002158CA: ;
    goto loc_002158DE;

loc_002158CC: ;
    ecx = eax * 4;
    PUSH32(esp, ecx);
    ecx = 0x25;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002158DEu); RECOMP_ABI_CALL(0x00288AF0u, sub_00288AF0); /* call 0x00288AF0 */

loc_002158DE: ;
    PUSH32(esp, 8);
    edx = esi + 0x40;
    ecx = 0x1E;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002158EDu); RECOMP_ABI_CALL(0x00288AF0u, sub_00288AF0); /* call 0x00288AF0 */

loc_002158ED: ;
    edx = MEM32(esi + 0x70);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002158F8u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_002158F8: ;
    eax = MEM32(esi + 0x70);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215911; /* je: equal / zero */

loc_00215902: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021590Du); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0021590D: ;
    PUSH32(esp, 2);
    goto loc_0021591E;

loc_00215911: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021591Cu); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_0021591C: ;
    PUSH32(esp, 3);

loc_0021591E: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215927u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00215927: ;
    eax = MEM32(esi + 0x6C);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002159AA; /* ja: above (unsigned >) */

loc_00215935: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x215AA0); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0021593Cu) goto loc_0021593C;
    if (_jt == 0x00215955u) goto loc_00215955;
    if (_jt == 0x00215971u) goto loc_00215971;
    if (_jt == 0x0021597Eu) goto loc_0021597E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0021593C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215945u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00215945: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215950u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00215950: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002159AA;

loc_00215955: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021595Eu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0021595E: ;
    PUSH32(esp, 0x302);
    PUSH32(esp, 0x3E);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021596Au); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0021596A: ;
    PUSH32(esp, 0x303);
    goto loc_00215995;

loc_00215971: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021597Au); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0021597A: ;
    PUSH32(esp, 1);
    goto loc_0021598C;

loc_0021597E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215987u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00215987: ;
    PUSH32(esp, 0x302);

loc_0021598C: ;
    PUSH32(esp, 0x3E);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215993u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00215993: ;
    PUSH32(esp, 1);

loc_00215995: ;
    PUSH32(esp, 0x3F);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021599Cu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_0021599C: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002159A7u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_002159A7: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002159AA: ;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), 0xF0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002159B4; /* jne: not equal / not zero */

loc_002159B0: ;
    PUSH32(esp, 0);
    goto loc_002159B6;

loc_002159B4: ;
    PUSH32(esp, 1);

loc_002159B6: ;
    PUSH32(esp, 0x3C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002159BDu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_002159BD: ;
    eax = MEM32(esi + 0x6C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002159CC; /* jne: not equal / not zero */

loc_002159C8: ;
    PUSH32(esp, 1);
    goto loc_002159CE;

loc_002159CC: ;
    PUSH32(esp, 0);

loc_002159CE: ;
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002159D5u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_002159D5: ;
    eax = MEM32(esi + 0x78);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002159E1u); RECOMP_ABI_CALL(0x00210640u, sub_00210640); /* call 0x00210640 */

loc_002159E1: ;
    edx = MEM32(esi + 0x84);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002159FA; /* je: equal / zero */

loc_002159EE: ;
    PUSH32(esp, 8);
    ecx = 0xF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002159FAu); RECOMP_ABI_CALL(0x00288AF0u, sub_00288AF0); /* call 0x00288AF0 */

loc_002159FA: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215A71; /* je: equal / zero */

loc_00215A01: ;
    _fa = (uint32_t)(MEM8(esi + 0x64)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x64), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00215A28; /* je: equal / zero */

loc_00215A07: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215A0Fu); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_00215A0F: ;
    ecx = MEM32(esi + 0x60);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215A1Au); RECOMP_ABI_CALL(0x00216DA0u, sub_00216DA0); /* call 0x00216DA0 */

loc_00215A1A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215A23u); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_00215A23: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00215A79;

loc_00215A28: ;
    ecx = MEM32(esi + 0x60);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215A30u); RECOMP_ABI_CALL(0x00216DA0u, sub_00216DA0); /* call 0x00216DA0 */

loc_00215A30: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215A39u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00215A39: ;
    PUSH32(esp, 0x302);
    PUSH32(esp, 0x3E);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215A45u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00215A45: ;
    PUSH32(esp, 0x303);
    PUSH32(esp, 0x3F);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215A51u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00215A51: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215A5Au); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00215A5A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215A63u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00215A63: ;
    ecx = MEM32(esi + 0x74);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215A6Eu); RECOMP_ABI_CALL(0x00210560u, sub_00210560); /* call 0x00210560 */

loc_00215A6E: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00215A71: ;
    ecx = MEM32(esi + 0x60);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215A79u); RECOMP_ABI_CALL(0x00216DA0u, sub_00216DA0); /* call 0x00216DA0 */

loc_00215A79: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215A82u); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00215A82: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215A8Bu); RECOMP_ABI_CALL(0x00210250u, sub_00210250); /* call 0x00210250 */

loc_00215A8B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215A96u); RECOMP_ABI_CALL(0x002104B0u, sub_002104B0); /* call 0x002104B0 */

loc_00215A96: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215AB0
 * Original: 0x00215AB0 - 0x00215AF9 (73 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215AB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215AD3; /* je: equal / zero */

loc_00215AB9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00215AF1; /* jne: not equal / not zero */

loc_00215ABE: ;
    _fa = (uint32_t)(MEM32(0x842A48)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x842A48), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00215AF1; /* jge: greater or equal (signed >=) */

loc_00215AC6: ;
    PUSH32(esp, 0x00215ACBu); RECOMP_ABI_CALL(0x00215540u, sub_00215540); /* call 0x00215540 */

loc_00215ACB: ;
    MEM32(0x842A48) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00215AD3: ;
    eax = MEM32(0x842A48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00215AE1; /* jle: less or equal (signed <=) */

loc_00215ADC: ;
    PUSH32(esp, 0x00215AE1u); RECOMP_ABI_CALL(0x00212E60u, sub_00212E60); /* call 0x00212E60 */

loc_00215AE1: ;
    PUSH32(esp, edi);
    ecx = 0x26;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x8429B0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_00215AF1: ;
    MEM32(0x842A48) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00215B00
 * Original: 0x00215B00 - 0x00215B41 (65 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215B00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215B00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00215B08u); RECOMP_ABI_CALL(0x001F73A0u, sub_001F73A0); /* call 0x001F73A0 */

loc_00215B08: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esi + 0x28) = LO16(eax);
    MEM16(esi + 0x2A) = LO16(eax);
    MEM16(esi + 0x2C) = LO16(eax);
    MEM16(esi + 0x2E) = LO16(eax);
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x58) = eax;
    MEM8(esi + 0x5D) = LO8(eax);
    MEM8(esi + 0x5E) = LO8(eax);
    MEM32(esi) = 0x301FF0;
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00215B50
 * Original: 0x00215B50 - 0x00215B6B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215B50: ;
    ecx = MEM32(0x842DE4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215B60; /* je: equal / zero */

loc_00215B5A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00215B60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215B5Eu); } /* indirect call */
    }

loc_00215B60: ;
    MEM32(0x842DE4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00215B70
 * Original: 0x00215B70 - 0x00215B76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215B70(void)
{

loc_00215B70: ;
    eax = 0x3C6468F4;
    esp += 4; return; /* ret */

}

/**
 * sub_00215B80
 * Original: 0x00215B80 - 0x00215B94 (20 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215B80(void)
{

loc_00215B80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(0x7934C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00215B91u); RECOMP_ABI_CALL(0x00205810u, sub_00205810); /* call 0x00205810 */

loc_00215B91: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215BA0
 * Original: 0x00215BA0 - 0x00215BEA (74 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215BA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x842DDC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x842DDC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215BDA; /* je: equal / zero */

loc_00215BAE: ;
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = 0x645934;
    PUSH32(esp, 0x00215BBEu); RECOMP_ABI_CALL(0x001F6970u, sub_001F6970); /* call 0x001F6970 */

loc_00215BBE: ;
    edx = MEM32(esi + 0x4C);
    PUSH32(esp, edx);
    MEM32(esi + 0x50) = 0;
    PUSH32(esp, 0x00215BCEu); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00215BCE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x4C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00215BDA: ;
    MEM32(esi + 0x50) = 0;
    MEM32(esi + 0x4C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00215BF0
 * Original: 0x00215BF0 - 0x00215CA9 (185 bytes, 72 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00215BF0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = esi + 0x30;
    ecx = edi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    eax = MEM32(esp + 0x28);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00215C34; /* je: equal / zero */

loc_00215C1A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00215C51; /* jne: not equal / not zero */

loc_00215C1D: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00215C32u); RECOMP_ABI_CALL(0x0029CAD3u, sub_0029CAD3); /* call 0x0029CAD3 */

loc_00215C32: ;
    goto loc_00215C4E;

loc_00215C34: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00215C4Eu); RECOMP_ABI_CALL(0x0029CAA9u, sub_0029CAA9); /* call 0x0029CAA9 */

loc_00215C4E: ;
    MEM32(esi + 0x58) = eax;

loc_00215C51: ;
    edx = MEM32(esi + 0x58);
    PUSH32(esp, 0);
    PUSH32(esp, 0x302034);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00215C61u); RECOMP_ABI_CALL(0x001F7140u, sub_001F7140); /* call 0x001F7140 */

loc_00215C61: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esi + 0x48) = eax;
    PUSH32(esp, 0x00215C6Eu); RECOMP_ABI_CALL(0x0028B2A0u, sub_0028B2A0); /* call 0x0028B2A0 */

loc_00215C6E: ;
    eax = MEM32(esp + 0x24);
    SET_LO16(ecx, MEM16(esp + 0x14));
    SET_LO16(edx, MEM16(esp + 0x18));
    MEM32(esi + 0x24) = eax;
    SET_LO8(eax, MEM8(esp + 0x28));
    MEM32(esi + 0x44) = edi;
    POP32(esp, edi);
    MEM16(esi + 0x2C) = LO16(ebp);
    MEM8(esi + 0x5C) = LO8(ebx);
    MEM16(esi + 0x28) = LO16(ecx);
    MEM16(esi + 0x2A) = LO16(edx);
    MEM16(esi + 0x2E) = 1;
    MEM8(esi + 0x5E) = 0;
    MEM8(esi + 0x5D) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00215CB0
 * Original: 0x00215CB0 - 0x00215CF7 (71 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215CB0: ;
    eax = MEM32(0x842DDC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00215CBCu); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00215CBC: ;
    ecx = MEM32(0x842DE0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = 0x645934;
    MEM32(0x842DDC) = esi;
    PUSH32(esp, 0x00215CD9u); RECOMP_ABI_CALL(0x001F6970u, sub_001F6970); /* call 0x001F6970 */

loc_00215CD9: ;
    ecx = MEM32(0x842DD8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x842DE0) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00215CEF; /* je: equal / zero */

loc_00215CE9: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00215CEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215CEDu); } /* indirect call */
    }

loc_00215CEF: ;
    MEM32(0x842DD8) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00215D00
 * Original: 0x00215D00 - 0x00215D0C (12 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215D00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00215D00: ;
    PUSH32(esp, 0x00215D05u); RECOMP_ABI_CALL(0x000C07F0u, sub_000C07F0); /* call 0x000C07F0 */

loc_00215D05: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_00215D10
 * Original: 0x00215D10 - 0x00215D8E (126 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215D10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246F78);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    PUSH32(esp, 0x00215D32u); RECOMP_ABI_CALL(0x001F73A0u, sub_001F73A0); /* call 0x001F73A0 */

loc_00215D32: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x24);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 0x14) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = eax;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    MEM32(esi + 0x24) = eax;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esi) = 0x301FF0;
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00215D7Au); RECOMP_ABI_CALL(0x00215BF0u, sub_00215BF0); /* call 0x00215BF0 */

loc_00215D7A: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00215D90
 * Original: 0x00215D90 - 0x00215E15 (133 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215D90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x311C8C);
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215E12; /* je: equal / zero */

loc_00215D9F: ;
    /* nop */

loc_00215DA0: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00215E05; /* jle: less or equal (signed <=) */

loc_00215DA8: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x645934;
    PUSH32(esp, 0x00215DB8u); RECOMP_ABI_CALL(0x001F6970u, sub_001F6970); /* call 0x001F6970 */

loc_00215DB8: ;
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x842DEC) = MEM32(0x842DEC) - ecx;
    _fa = (uint32_t)(MEM32(0x842DEC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215DD5; /* je: equal / zero */

loc_00215DC8: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x645934;
    PUSH32(esp, 0x00215DD5u); RECOMP_ABI_CALL(0x001F6970u, sub_001F6970); /* call 0x001F6970 */

loc_00215DD5: ;
    edx = MEM32(0x311C98);
    edi = MEM32(edi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x311C98) = edx;
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    MEM32(esi + 8) = 0;
    MEM32(edx + 4) = eax;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    PUSH32(esp, esi);
    MEM32(ecx) = edx;
    PUSH32(esp, 0x00215E00u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00215E00: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00215E0B;

loc_00215E05: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x18) = eax;
    edi = MEM32(edi);

loc_00215E0B: ;
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00215DA0; /* jne: not equal / not zero */

loc_00215E12: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00215E20
 * Original: 0x00215E20 - 0x00215E93 (115 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215E20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x311C8C);
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215E90; /* je: equal / zero */

loc_00215E2F: ;
    /* nop */

loc_00215E30: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x645934;
    PUSH32(esp, 0x00215E40u); RECOMP_ABI_CALL(0x001F6970u, sub_001F6970); /* call 0x001F6970 */

loc_00215E40: ;
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x842DEC) = MEM32(0x842DEC) - ecx;
    _fa = (uint32_t)(MEM32(0x842DEC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215E5D; /* je: equal / zero */

loc_00215E50: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x645934;
    PUSH32(esp, 0x00215E5Du); RECOMP_ABI_CALL(0x001F6970u, sub_001F6970); /* call 0x001F6970 */

loc_00215E5D: ;
    eax = MEM32(0x311C98);
    edi = MEM32(edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x311C98) = eax;
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    MEM32(esi + 8) = 0;
    MEM32(edx + 4) = eax;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    PUSH32(esp, esi);
    MEM32(ecx) = edx;
    PUSH32(esp, 0x00215E86u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00215E86: ;
    esi = MEM32(edi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00215E30; /* jne: not equal / not zero */

loc_00215E90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00215EA0
 * Original: 0x00215EA0 - 0x00215FB6 (278 bytes, 80 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215EA0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x302044);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x00215EB1u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00215EB1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215ED6; /* je: equal / zero */

loc_00215EB8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x274E1290);
    PUSH32(esp, 1);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x100);
    ecx = eax;
    PUSH32(esp, 0x00215ED4u); RECOMP_ABI_CALL(0x00215D10u, sub_00215D10); /* call 0x00215D10 */

loc_00215ED4: ;
    goto loc_00215ED8;

loc_00215ED6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00215ED8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(0x842DE4) = eax;
    edx = MEM32(eax + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00215EF3u); RECOMP_ABI_CALL(0x0028C530u, sub_0028C530); /* call 0x0028C530 */

loc_00215EF3: ;
    eax = MEM32(esp + 0xC);
    MEM8(esp + 0x10) = 0;
    MEM8(esp + 0x11) = 0x10;
    MEM8(esp + 0x12) = 0x22;
    MEM8(esp + 0x13) = 0x32;
    MEM8(esp + 0x14) = 0x44;
    MEM8(esp + 0x15) = 0x54;
    MEM8(esp + 0x16) = 0x66;
    MEM8(esp + 0x17) = 0x76;
    MEM8(esp + 0x18) = 0x8A;
    MEM8(esp + 0x19) = 0x9A;
    MEM8(esp + 0x1A) = 0xAC;
    MEM8(esp + 0x1B) = 0xBC;
    MEM8(esp + 0x1C) = 0xCE;
    MEM8(esp + 0x1D) = 0xDE;
    MEM8(esp + 0x1E) = 0xF0;
    MEM8(esp + 0x1F) = 0xFF;
    ecx = 0x2FCA60;
    edi = 0x80;

loc_00215F51: ;
    esi = 0x80;

loc_00215F56: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ecx));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ZX8(MEM8(esp + edx + 0x10));
    edx = edx << 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | 0xFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + -8) = edx;
    edx = ZX8(MEM8(ecx));
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ZX8(MEM8(esp + edx + 0x10));
    edx = edx << 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | 0xFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + -4) = edx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00215F56; /* jne: not equal / not zero */

loc_00215F8F: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00215F51; /* jne: not equal / not zero */

loc_00215F92: ;
    eax = MEM32(0x842DE4);
    MEM16(eax + 0x16) = 0;
    MEM16(eax + 0x14) = 0;
    eax = MEM32(0x842DE4);
    SET_LO8(ecx, 6);
    POP32(esp, edi);
    MEM8(eax + 0x20) = LO8(ecx);
    MEM8(eax + 0x21) = LO8(ecx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00215FC0
 * Original: 0x00215FC0 - 0x002160D4 (276 bytes, 80 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215FC0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x30209C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x00215FD1u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00215FD1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215FF0; /* je: equal / zero */

loc_00215FD8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x294F5BAA);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    ecx = eax;
    PUSH32(esp, 0x00215FEEu); RECOMP_ABI_CALL(0x00215D10u, sub_00215D10); /* call 0x00215D10 */

loc_00215FEE: ;
    goto loc_00215FF2;

loc_00215FF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00215FF2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(0x842DD8) = eax;
    edx = MEM32(eax + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021600Bu); RECOMP_ABI_CALL(0x0028C530u, sub_0028C530); /* call 0x0028C530 */

loc_0021600B: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x311C88);
    MEM32(eax) = ecx;
    edx = MEM32(0x311C88);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x311C88);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    edx = MEM32(0x311C88);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    eax = MEM32(0x842DD8);
    MEM16(eax + 0x16) = 0;
    MEM16(eax + 0x14) = 0;
    eax = MEM32(0x842DD8);
    PUSH32(esp, 0x302078);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    MEM8(eax + 0x20) = 6;
    MEM8(eax + 0x21) = 6;
    PUSH32(esp, 0x00216064u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00216064: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x302068);
    PUSH32(esp, 0x400);
    MEM32(0x842DDC) = eax;
    PUSH32(esp, 0x0021607Au); RECOMP_ABI_CALL(0x001F7140u, sub_001F7140); /* call 0x001F7140 */

loc_0021607A: ;
    ecx = MEM32(0x842DDC);
    MEM32(0x842DE0) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = eax;
    edx = MEM32(0x842DDC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002160A0u); RECOMP_ABI_CALL(0x0029CB15u, sub_0029CB15); /* call 0x0029CB15 */

loc_002160A0: ;
    eax = MEM32(0x842DE0);
    ecx = 0x100;
    /* nop */

loc_002160B0: ;
    edx = MEM32(0x311C88);
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002160B0; /* jne: not equal / not zero */

loc_002160BE: ;
    eax = MEM32(0x842DE0);
    ecx = MEM32(0x842DDC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002160D0u); RECOMP_ABI_CALL(0x0028B2A0u, sub_0028B2A0); /* call 0x0028B2A0 */

loc_002160D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002160E0
 * Original: 0x002160E0 - 0x00216146 (102 bytes, 31 insns)
 * Category: game_vehicle
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002160E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002160E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3020C0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    esi = ecx;
    PUSH32(esp, 0x002160F1u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_002160F1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021610E; /* je: equal / zero */

loc_002160F8: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0;
    goto loc_00216110;

loc_0021610E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00216110: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x18) = 0;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = esi;
    MEM32(eax + 8) = eax;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    MEM32(esi + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00216150
 * Original: 0x00216150 - 0x002161EC (156 bytes, 57 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00216150: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002161D5; /* je: equal / zero */

loc_0021615D: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002161C1; /* je: equal / zero */

loc_00216164: ;
    ecx = MEM32(0x311C84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216199; /* je: equal / zero */

loc_0021616E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00216174u); RECOMP_ABI_CALL(0x0028B210u, sub_0028B210); /* call 0x0028B210 */

loc_00216174: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216199; /* je: equal / zero */

loc_00216178: ;
    eax = MEM32(esi + 0x58);
    ecx = MEM32(esi + 0x50);
    edx = MEM32(esi + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x311C8C;
    PUSH32(esp, 0x0021618Eu); RECOMP_ABI_CALL(0x002160E0u, sub_002160E0); /* call 0x002160E0 */

loc_0021618E: ;
    SET_LO8(ebx, 1);
    MEM32(esi + 0x48) = 0;
    goto loc_002161CE;

loc_00216199: ;
    eax = MEM32(esi + 0x48);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x645934;
    PUSH32(esp, 0x002161A9u); RECOMP_ABI_CALL(0x001F6970u, sub_001F6970); /* call 0x001F6970 */

loc_002161A9: ;
    eax = MEM32(0x842DEC);
    ecx = MEM32(esi + 0x58);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x842DEC) = eax;
    MEM32(esi + 0x48) = 0;
    goto loc_002161CE;

loc_002161C1: ;
    SET_LO8(ecx, MEM8(esi + 0x5E));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002161CE; /* je: equal / zero */

loc_002161C8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002161CEu); RECOMP_ABI_CALL(0x0028B130u, sub_0028B130); /* call 0x0028B130 */

loc_002161CE: ;
    MEM32(esi + 0x44) = 0;

loc_002161D5: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002161E9; /* je: equal / zero */

loc_002161DC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002161E9; /* jne: not equal / not zero */

loc_002161E0: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00215BA0(); return; /* tail jmp 0x00215BA0 */

loc_002161E9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002161F0
 * Original: 0x002161F0 - 0x002162C6 (214 bytes, 81 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002161F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002161F0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    esi = ecx;
    PUSH32(esp, 0x00216208u); RECOMP_ABI_CALL(0x0028E300u, sub_0028E300); /* call 0x0028E300 */

loc_00216208: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00216216; /* jne: not equal / not zero */

loc_0021620F: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021621D; /* je: equal / zero */

loc_00216216: ;
    ecx = esi;
    PUSH32(esp, 0x0021621Du); RECOMP_ABI_CALL(0x00216150u, sub_00216150); /* call 0x00216150 */

loc_0021621D: ;
    ebx = MEM32(esp + 0x34);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    edi = esi + 0x30;
    if (CMP_EQ(_fa, _fb)) goto loc_00216246; /* je: equal / zero */

loc_00216229: ;
    PUSH32(esp, ebx);
    MEM8(esi + 0x5C) = LO8(ebx);
    PUSH32(esp, 0x00216232u); RECOMP_ABI_CALL(0x0029BCC7u, sub_0029BCC7); /* call 0x0029BCC7 */

loc_00216232: ;
    edx = MEM32(ebp + 4);
    ecx = eax;
    eax = MEM32(esp + 0x24);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    goto loc_00216269;

loc_00216246: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    MEM8(esi + 0x5C) = LO8(eax);
    PUSH32(esp, 0x00216253u); RECOMP_ABI_CALL(0x0029BCC7u, sub_0029BCC7); /* call 0x0029BCC7 */

loc_00216253: ;
    ecx = MEM32(ebp + 4);
    edx = eax;
    eax = MEM32(esp + 0x24);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, edx);

loc_00216269: ;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, 0);
    ebx = 1;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021627Cu); RECOMP_ABI_CALL(0x0029CAA9u, sub_0029CAA9); /* call 0x0029CAA9 */

loc_0021627C: ;
    edx = MEM32(esp + 0x38);
    SET_LO16(ecx, MEM16(esp + 0x28));
    MEM32(esi + 0x58) = eax;
    SET_LO8(eax, 6);
    MEM8(esi + 0x20) = LO8(eax);
    MEM8(esi + 0x21) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esi + 0x16) = LO16(eax);
    MEM16(esi + 0x14) = LO16(eax);
    SET_LO16(eax, MEM16(esp + 0x24));
    MEM32(esi + 0x44) = edi;
    POP32(esp, edi);
    MEM16(esi + 0x2C) = LO16(ebx);
    MEM16(esi + 0x2E) = LO16(ebx);
    MEM8(esi + 0x5D) = LO8(ebx);
    MEM32(esi + 0x24) = edx;
    MEM16(esi + 0x28) = LO16(eax);
    MEM16(esi + 0x2A) = LO16(ecx);
    MEM8(esi + 0x5E) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002162D0
 * Original: 0x002162D0 - 0x002163AF (223 bytes, 76 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002162D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002162D0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_002162E6; /* jne: not equal / not zero */

loc_002162DF: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002162ED; /* je: equal / zero */

loc_002162E6: ;
    ecx = esi;
    PUSH32(esp, 0x002162EDu); RECOMP_ABI_CALL(0x00216150u, sub_00216150); /* call 0x00216150 */

loc_002162ED: ;
    edi = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x44) = edi;
    PUSH32(esp, 0x00216301u); RECOMP_ABI_CALL(0x0028B0F0u, sub_0028B0F0); /* call 0x0028B0F0 */

loc_00216301: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00216307u); RECOMP_ABI_CALL(0x0028C4D0u, sub_0028C4D0); /* call 0x0028C4D0 */

loc_00216307: ;
    PUSH32(esp, edi);
    MEM16(esi + 0x2C) = LO16(eax);
    PUSH32(esp, 0x00216311u); RECOMP_ABI_CALL(0x0028B180u, sub_0028B180); /* call 0x0028B180 */

loc_00216311: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00216361; /* je: equal / zero */

loc_00216316: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_002163A2; /* jne: not equal / not zero */

loc_0021631F: ;
    edx = MEM32(esi + 0x44);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM8(esi + 0x5D) = 2;
    PUSH32(esp, 0x00216333u); RECOMP_ABI_CALL(0x0028C560u, sub_0028C560); /* call 0x0028C560 */

loc_00216333: ;
    SET_LO16(eax, MEM16(esp + 0x20));
    SET_LO16(ecx, MEM16(esp + 0x24));
    SET_LO8(edx, MEM8(esp + 0xC));
    ebx = 1;
    POP32(esp, edi);
    MEM16(esi + 0x2E) = LO16(ebx);
    MEM8(esi + 0x5E) = LO8(ebx);
    MEM16(esi + 0x28) = LO16(eax);
    MEM16(esi + 0x2A) = LO16(ecx);
    MEM8(esi + 0x5C) = LO8(edx);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00216361: ;
    ecx = MEM32(esi + 0x44);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ebx = 1;
    PUSH32(esp, ecx);
    MEM8(esi + 0x5D) = LO8(ebx);
    PUSH32(esp, 0x00216379u); RECOMP_ABI_CALL(0x0028C560u, sub_0028C560); /* call 0x0028C560 */

loc_00216379: ;
    SET_LO16(edx, MEM16(esp + 0x20));
    SET_LO16(eax, MEM16(esp + 0x24));
    SET_LO8(ecx, MEM8(esp + 0xC));
    POP32(esp, edi);
    MEM16(esi + 0x2E) = LO16(ebx);
    MEM8(esi + 0x5E) = LO8(ebx);
    MEM16(esi + 0x28) = LO16(edx);
    MEM16(esi + 0x2A) = LO16(eax);
    MEM8(esi + 0x5C) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002163A2: ;
    POP32(esp, edi);
    MEM8(esi + 0x5E) = 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002163B0
 * Original: 0x002163B0 - 0x00216884 (1236 bytes, 401 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002163B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002163B0: ;
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x130;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x48);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002163C9; /* je: equal / zero */

loc_002163C4: ;
    PUSH32(esp, 0x002163C9u); RECOMP_ABI_CALL(0x00216150u, sub_00216150); /* call 0x00216150 */

loc_002163C9: ;
    ecx = MEM32(esp + 0x140);
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00216858; /* jl: less (signed <) */

loc_002163DF: ;
    PUSH32(esp, ebx);

loc_002163E0: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002163EAu); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_002163EA: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x544C4150) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x544C4150 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002165CE; /* ja: above (unsigned >) */

loc_002163F9: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00216538; /* je: equal / zero */

loc_002163FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x454D414E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x454D414E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216520; /* je: equal / zero */

loc_0021640A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4F464E49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4F464E49 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00216841; /* jne: not equal / not zero */

loc_00216415: ;
    ecx = MEM32(esp + 0x38);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00216429u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00216426u); } /* indirect call */
    }

loc_00216429: ;
    SET_LO16(eax, MEM16(esp + 0x10));
    ecx = MEM32(esp + 0x38);
    MEM16(esi + 0x28) = LO16(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00216446u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00216443u); } /* indirect call */
    }

loc_00216446: ;
    SET_LO16(ecx, MEM16(esp + 0x10));
    MEM16(esi + 0x2A) = LO16(ecx);
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00216463u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00216460u); } /* indirect call */
    }

loc_00216463: ;
    SET_LO16(ecx, MEM16(esp + 0x10));
    MEM16(esi + 0x2E) = LO16(ecx);
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00216480u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021647Du); } /* indirect call */
    }

loc_00216480: ;
    SET_LO16(ecx, MEM16(esp + 0x10));
    MEM16(esi + 0x2C) = LO16(ecx);
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0021649Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021649Au); } /* indirect call */
    }

loc_0021649D: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(esi + 0x5D) = LO8(ecx);
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x002164B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002164B5u); } /* indirect call */
    }

loc_002164B8: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x002164CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002164C9u); } /* indirect call */
    }

loc_002164CC: ;
    _fa = (uint32_t)(MEM16(esp + 0x14)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x14), 1 (16-bit) */
    SET_LO8(ecx, MEM8(esp + 0x10));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(esi + 0x5C) = LO8(ecx);
    if (CMP_L(_fas, _fbs)) goto loc_002164FA; /* jl: less (signed <) */

loc_002164DE: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x002164F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002164F1u); } /* indirect call */
    }

loc_002164F4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */

loc_002164FA: ;
    ecx = MEM32(esp + 0x38);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x18;
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00216513u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00216510u); } /* indirect call */
    }

loc_00216513: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x3C) = ecx;
    goto loc_00216841;

loc_00216520: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, 0x100);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00216533u); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_00216533: ;
    goto loc_00216841;

loc_00216538: ;
    PUSH32(esp, 0x3020F0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x00216545u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00216545: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x400);
    MEM32(esi + 0x4C) = eax;
    PUSH32(esp, 0x00216554u); RECOMP_ABI_CALL(0x001F7140u, sub_001F7140); /* call 0x001F7140 */

loc_00216554: ;
    ecx = MEM32(esi + 0x4C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esi + 0x50) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002165AB; /* je: equal / zero */

loc_00216561: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021659E; /* je: equal / zero */

loc_00216565: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0021657Au); RECOMP_ABI_CALL(0x0029CB15u, sub_0029CB15); /* call 0x0029CB15 */

loc_0021657A: ;
    ecx = MEM32(esp + 0x38);
    eax = MEM32(esi + 0x50);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0021658Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00216589u); } /* indirect call */
    }

loc_0021658C: ;
    ecx = MEM32(esi + 0x50);
    edx = MEM32(esi + 0x4C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00216599u); RECOMP_ABI_CALL(0x0028B2A0u, sub_0028B2A0); /* call 0x0028B2A0 */

loc_00216599: ;
    goto loc_00216841;

loc_0021659E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002165AB; /* je: equal / zero */

loc_002165A2: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002165A8u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_002165A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002165AB: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002165BE; /* je: equal / zero */

loc_002165B2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = 0x645934;
    PUSH32(esp, 0x002165BEu); RECOMP_ABI_CALL(0x001F6970u, sub_001F6970); /* call 0x001F6970 */

loc_002165BE: ;
    MEM32(esi + 0x50) = ebp;
    eax = MEM32(0x842DDC);
    MEM32(esi + 0x4C) = eax;
    goto loc_00216841;

loc_002165CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x59444F42) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x59444F42 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00216841; /* jne: not equal / not zero */

loc_002165D9: ;
    SET_LO8(eax, MEM8(esi + 0x5D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00216798; /* jne: not equal / not zero */

loc_002165E4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x30;
    PUSH32(esp, ebp);
    edx = edi;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    PUSH32(esp, ebp);
    MEM32(edx + 0xC) = ecx;
    PUSH32(esp, edi);
    MEM32(edx + 0x10) = ecx;
    eax = ZX8(MEM8(esi + 0x5C));
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    edx = ZX16(MEM16(esi + 0x2A));
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi + 0x28));
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00216617u); RECOMP_ABI_CALL(0x0029CAA9u, sub_0029CAA9); /* call 0x0029CAA9 */

loc_00216617: ;
    MEM32(esi + 0x58) = eax;
    PUSH32(esp, ebp);
    MEM16(0x645930) = 1;
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0021662Eu); RECOMP_ABI_CALL(0x001F7140u, sub_001F7140); /* call 0x001F7140 */

loc_0021662E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esi + 0x48) = eax;
    MEM32(esp + 0x10) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_002166B4; /* jne: not equal / not zero */

loc_0021663C: ;
    /* nop */

loc_00216640: ;
    _fa = (uint32_t)(MEM16(esi + 0x2C)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x2C), 1 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002166B4; /* jle: less or equal (signed <=) */

loc_00216647: ;
    edx = ZX8(MEM8(esi + 0x5C));
    eax = ZX16(MEM16(esi + 0x2A));
    ecx = ZX16(MEM16(esi + 0x28));
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00216662u); RECOMP_ABI_CALL(0x0029CAA9u, sub_0029CAA9); /* call 0x0029CAA9 */

loc_00216662: ;
    ecx = MEM32(esp + 0x10);
    MEM16(esi + 0x28) = MEM16(esi + 0x28) >> 1;
    _fa = (uint32_t)(MEM16(esi + 0x28)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    MEM16(esi + 0x2A) = MEM16(esi + 0x2A) >> 1;
    _fa = (uint32_t)(MEM16(esi + 0x2A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    ebx = ZX8(MEM8(esi + 0x5C));
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 0x2C) = MEM16(esi + 0x2C) - 1;
    _fa = (uint32_t)(MEM16(esi + 0x2C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(edx, MEM16(esi + 0x2C));
    SET_LO16(eax, MEM16(esi + 0x28));
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    MEM32(esp + 0x24) = ecx;
    SET_LO16(ecx, MEM16(esi + 0x2A));
    edx = SX16(LO16(edx));
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    ecx = ZX16(LO16(ecx));
    edx = ZX16(LO16(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021669Fu); RECOMP_ABI_CALL(0x0029CAA9u, sub_0029CAA9); /* call 0x0029CAA9 */

loc_0021669F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEM32(esi + 0x58) = eax;
    PUSH32(esp, 0x002166AAu); RECOMP_ABI_CALL(0x001F7140u, sub_001F7140); /* call 0x001F7140 */

loc_002166AA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esi + 0x48) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00216640; /* je: equal / zero */

loc_002166B4: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216703; /* je: equal / zero */

loc_002166B9: ;
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002166D9; /* jle: less or equal (signed <=) */

loc_002166C1: ;
    ecx = MEM32(esp + 0x38);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 0x1F;
    PUSH32(esp, edx);
    MEM8(esp + 0x23) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x002166D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002166D3u); } /* indirect call */
    }

loc_002166D6: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002166C1; /* jne: not equal / not zero */

loc_002166D9: ;
    edx = MEM32(esi + 0x58);
    ecx = MEM32(esp + 0x38);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x48);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x002166EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002166E7u); } /* indirect call */
    }

loc_002166EA: ;
    eax = MEM32(esi + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002166F4u); RECOMP_ABI_CALL(0x0028B2A0u, sub_0028B2A0); /* call 0x0028B2A0 */

loc_002166F4: ;
    MEM32(esi + 0x44) = edi;
    MEM16(0x645930) = LO16(ebp);
    goto loc_00216841;

loc_00216703: ;
    ecx = MEM32(0x842DD8);
    SET_LO16(edx, MEM16(ecx + 0x28));
    MEM16(esi + 0x28) = LO16(edx);
    eax = MEM32(0x842DD8);
    SET_LO16(ecx, MEM16(eax + 0x2A));
    MEM16(esi + 0x2A) = LO16(ecx);
    edx = MEM32(0x842DD8);
    SET_LO16(eax, MEM16(edx + 0x2C));
    MEM16(esi + 0x2C) = LO16(eax);
    ecx = MEM32(0x842DD8);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    edx = edi;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = eax;
    ecx = MEM32(ecx + 0x10);
    MEM32(edx + 0x10) = ecx;
    MEM32(esi + 0x48) = ebp;
    MEM32(esi + 0x44) = edi;
    edx = MEM32(0x842DD8);
    eax = MEM32(edx + 0x58);
    MEM32(esi + 0x58) = eax;
    ecx = MEM32(0x842DD8);
    SET_LO8(edx, MEM8(ecx + 0x5C));
    MEM8(esi + 0x5C) = LO8(edx);
    eax = MEM32(0x842DD8);
    SET_LO8(ecx, MEM8(eax + 0x5D));
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4C), ebp (32-bit) */
    MEM8(esi + 0x5D) = LO8(ecx);
    MEM8(esi + 0x5E) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0021678C; /* je: equal / zero */

loc_00216785: ;
    ecx = esi;
    PUSH32(esp, 0x0021678Cu); RECOMP_ABI_CALL(0x00215BA0u, sub_00215BA0); /* call 0x00215BA0 */

loc_0021678C: ;
    MEM16(0x645930) = LO16(ebp);
    goto loc_00216841;

loc_00216798: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216841; /* je: equal / zero */

loc_002167A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00216841; /* jne: not equal / not zero */

loc_002167A8: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = esi + 0x30;
    eax = ebx;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    PUSH32(esp, ebp);
    MEM32(eax + 8) = edx;
    PUSH32(esp, ebp);
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, ebx);
    MEM32(eax + 0x10) = edx;
    ecx = ZX8(MEM8(esi + 0x5C));
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    eax = ZX16(MEM16(esi + 0x28));
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002167D6u); RECOMP_ABI_CALL(0x0029CAD3u, sub_0029CAD3); /* call 0x0029CAD3 */

loc_002167D6: ;
    MEM32(esi + 0x58) = eax;
    PUSH32(esp, ebp);
    MEM16(0x645930) = 1;
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002167EDu); RECOMP_ABI_CALL(0x001F7140u, sub_001F7140); /* call 0x001F7140 */

loc_002167ED: ;
    MEM32(esi + 0x48) = eax;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM32(esp + 0x48);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edi = edx;
    edi = edi >> 0x1F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(0x645930) = LO16(ebp);
    ebp = MEM32(esi + 0x48);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = 6;

loc_00216815: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00216820u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021681Du); } /* indirect call */
    }

loc_00216820: ;
    eax = MEM32(esp + 0x14);
    ebp = edi + ebp + 0x7F;
    ebp = ebp & 0xFFFFFF80u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_00216815; /* jne: not equal / not zero */

loc_00216832: ;
    eax = MEM32(esi + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0021683Cu); RECOMP_ABI_CALL(0x0028B2A0u, sub_0028B2A0); /* call 0x0028B2A0 */

loc_0021683C: ;
    MEM32(esi + 0x44) = ebx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00216841: ;
    ecx = MEM32(esp + 0x144);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002163E0; /* jge: greater or equal (signed >=) */

loc_00216857: ;
    POP32(esp, ebx);

loc_00216858: ;
    eax = MEM32(esi + 0x58);
    ecx = MEM32(0x842DEC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x842DF0);
    MEM32(0x842DEC) = ecx;
    ecx = MEM32(esi + 0x58);
    POP32(esp, edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(0x842DF0) = eax;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x130;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00216890
 * Original: 0x00216890 - 0x002168FC (108 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216890: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246F78);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    PUSH32(esp, 0x002168B2u); RECOMP_ABI_CALL(0x001F73A0u, sub_001F73A0); /* call 0x001F73A0 */

loc_002168B2: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esi) = 0x301FF0;
    MEMF(esi + 0x54) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002168E8u); RECOMP_ABI_CALL(0x002161F0u, sub_002161F0); /* call 0x002161F0 */

loc_002168E8: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00216900
 * Original: 0x00216900 - 0x0021694F (79 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216900: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246F78);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x301FF0;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00216930u); RECOMP_ABI_CALL(0x00216150u, sub_00216150); /* call 0x00216150 */

loc_00216930: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0021693Fu); RECOMP_ABI_CALL(0x001F73F0u, sub_001F73F0); /* call 0x001F73F0 */

loc_0021693F: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00216950
 * Original: 0x00216950 - 0x00216955 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00216950: ;
    g_seh_ebp = ebp; sub_00216150(); return; /* tail jmp 0x00216150 */

}

/**
 * sub_00216960
 * Original: 0x00216960 - 0x00216974 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216960: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00216980
 * Original: 0x00216980 - 0x002169B0 (48 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216980: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x842DF4) = eax;
    MEM32(0x842DF8) = eax;
    MEM32(0x842DFC) = eax;
    MEM32(0x842E00) = eax;
    MEM32(0x842E04) = eax;
    MEM32(0x842E08) = eax;
    MEM32(0x842E0C) = eax;
    MEM32(0x842E10) = eax;
    MEM32(0x842E14) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002169B0
 * Original: 0x002169B0 - 0x00216A21 (113 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002169B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002169B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x645934;
    PUSH32(esp, 0x002169C3u); RECOMP_ABI_CALL(0x001F6970u, sub_001F6970); /* call 0x001F6970 */

loc_002169C3: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_002169D7; /* je: equal / zero */

loc_002169D1: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(eax + 0x1C) = ecx;

loc_002169D7: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002169E4; /* je: equal / zero */

loc_002169DE: ;
    edx = MEM32(esi + 0x18);
    MEM32(eax + 0x18) = edx;

loc_002169E4: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216A1F; /* je: equal / zero */

loc_002169EB: ;
    edx = MEM32(0x311C9C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216A0C; /* je: equal / zero */

loc_002169F7: ;
    goto loc_00216A00;

    /* nop */

loc_00216A00: ;
    edx = MEM32(eax * 4 + 0x311CA0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00216A00; /* jne: not equal / not zero */

loc_00216A0C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 4 + 0x842DF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax * 4 + 0x842DF4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00216A1F; /* jne: not equal / not zero */

loc_00216A15: ;
    ecx = MEM32(esi + 0x18);
    MEM32(eax * 4 + 0x842DF4) = ecx;

loc_00216A1F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00216A30
 * Original: 0x00216A30 - 0x00216A4A (26 bytes, 10 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216A30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216A30: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00216A44u); RECOMP_ABI_CALL(0x0028BFB0u, sub_0028BFB0); /* call 0x0028BFB0 */

loc_00216A44: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00216A50
 * Original: 0x00216A50 - 0x00216A55 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00216A50: ;
    g_seh_ebp = ebp; sub_002169B0(); return; /* tail jmp 0x002169B0 */

}

/**
 * sub_00216A60
 * Original: 0x00216A60 - 0x00216B44 (228 bytes, 87 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216A60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00216A60: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax * 4 + 0x311C9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x302114);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00216A7Bu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00216A7B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216A8F; /* je: equal / zero */

loc_00216A82: ;
    ecx = eax;
    PUSH32(esp, 0x00216A89u); RECOMP_ABI_CALL(0x00216960u, sub_00216960); /* call 0x00216960 */

loc_00216A89: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00216A94; /* jne: not equal / not zero */

loc_00216A8F: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00216A94: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)ebp);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM16(0x645930) = 2;
    PUSH32(esp, 0x00216AB5u); RECOMP_ABI_CALL(0x001F7140u, sub_001F7140); /* call 0x001F7140 */

loc_00216AB5: ;
    MEM32(esi + 0xC) = eax;
    MEM16(0x645930) = 0;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00216AE2; /* jne: not equal / not zero */

loc_00216ACB: ;
    ecx = esi;
    PUSH32(esp, 0x00216AD2u); RECOMP_ABI_CALL(0x00216A50u, sub_00216A50); /* call 0x00216A50 */

loc_00216AD2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00216AD8u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00216AD8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00216AE2: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x00216AF9u); RECOMP_ABI_CALL(0x0029CAFDu, sub_0029CAFD); /* call 0x0029CAFD */

loc_00216AF9: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00216B03u); RECOMP_ABI_CALL(0x0028B2A0u, sub_0028B2A0); /* call 0x0028B2A0 */

loc_00216B03: ;
    eax = MEM32(esp + 0x18);
    eax = eax * 4 + 0x842DF4;
    MEM32(esi + 0x10) = ebx;
    edx = MEM32(eax);
    MEM32(esi + 0x18) = edx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216B1F; /* je: equal / zero */

loc_00216B1C: ;
    MEM32(ecx + 0x1C) = esi;

loc_00216B1F: ;
    MEM32(eax) = esi;
    MEM32(esi + 0x14) = ebp;
    ecx = MEM32(0x842E18);
    eax = MEM32(0x842E1C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(0x842E1C) = eax;
    eax = esi;
    POP32(esp, esi);
    MEM32(0x842E18) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00216B50
 * Original: 0x00216B50 - 0x00216BA9 (89 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216B50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0x842DF4;

loc_00216B58: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216B80; /* je: equal / zero */

loc_00216B5E: ;
    edi = edi;

loc_00216B60: ;
    edi = esi;
    esi = MEM32(esi + 0x18);
    ecx = edi;
    PUSH32(esp, 0x00216B6Cu); RECOMP_ABI_CALL(0x002169B0u, sub_002169B0); /* call 0x002169B0 */

loc_00216B6C: ;
    ecx = edi;
    PUSH32(esp, 0x00216B73u); RECOMP_ABI_CALL(0x00216A50u, sub_00216A50); /* call 0x00216A50 */

loc_00216B73: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00216B79u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00216B79: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00216B60; /* jne: not equal / not zero */

loc_00216B80: ;
    MEM32(ebx) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x842E18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x842E18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00216B58; /* jl: less (signed <) */

loc_00216B91: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x842E18) = 0;
    MEM32(0x842E1C) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00216BB0
 * Original: 0x00216BB0 - 0x00216BC0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216BB0(void)
{

loc_00216BB0: ;
    eax = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00216BC0
 * Original: 0x00216BC0 - 0x00216BED (45 bytes, 14 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216BC0: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 8);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x10) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00216BF0
 * Original: 0x00216BF0 - 0x00216C3C (76 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00216BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00216BF0: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00216C39; /* ja: above (unsigned >) */

loc_00216BFA: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x216C3C); /* switch: 9 entries, 7 targets */
    if (_jt == 0x00216C01u) goto loc_00216C01;
    if (_jt == 0x00216C06u) goto loc_00216C06;
    if (_jt == 0x00216C0Du) goto loc_00216C0D;
    if (_jt == 0x00216C13u) goto loc_00216C13;
    if (_jt == 0x00216C21u) goto loc_00216C21;
    if (_jt == 0x00216C29u) goto loc_00216C29;
    if (_jt == 0x00216C31u) goto loc_00216C31;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00216C01: ;
    eax = MEM32(esp + 8);
    esp += 4; return; /* ret */

loc_00216C06: ;
    eax = MEM32(esp + 8);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

loc_00216C0D: ;
    eax = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00216C13: ;
    eax = 0xAAAAAAABu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 8);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

loc_00216C21: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00216C29: ;
    eax = MEM32(esp + 8);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

loc_00216C31: ;
    eax = MEM32(esp + 8);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00216C39: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00216C60
 * Original: 0x00216C60 - 0x00216C73 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216C60(void)
{

loc_00216C60: ;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00216C72u); RECOMP_ABI_CALL(0x00216A30u, sub_00216A30); /* call 0x00216A30 */

loc_00216C72: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00216C80
 * Original: 0x00216C80 - 0x00216C88 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00216C80: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_00209040(); return; /* tail jmp 0x00209040 */

}

/**
 * sub_00216C90
 * Original: 0x00216C90 - 0x00216C96 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216C90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216C90: ;
    eax = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00216CA0
 * Original: 0x00216CA0 - 0x00216D38 (152 bytes, 59 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00216CA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00216CCB; /* jne: not equal / not zero */

loc_00216CB6: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00216CBDu); RECOMP_ABI_CALL(0x00216BF0u, sub_00216BF0); /* call 0x00216BF0 */

loc_00216CBD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;
    MEM32(esi) = 0;
    goto loc_00216CE0;

loc_00216CCB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00216CD2u); RECOMP_ABI_CALL(0x00216BF0u, sub_00216BF0); /* call 0x00216BF0 */

loc_00216CD2: ;
    PUSH32(esp, ebx);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x00216CDBu); RECOMP_ABI_CALL(0x002276E0u, sub_002276E0); /* call 0x002276E0 */

loc_00216CDB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;

loc_00216CE0: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00216CEDu); RECOMP_ABI_CALL(0x00216A60u, sub_00216A60); /* call 0x00216A60 */

loc_00216CED: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00216D1C; /* jne: not equal / not zero */

loc_00216CF7: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216D0D; /* je: equal / zero */

loc_00216CFD: ;
    ecx = edi;
    PUSH32(esp, 0x00216D04u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00216D04: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00216D0Au); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00216D0A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00216D0D: ;
    POP32(esp, edi);
    MEM32(esi) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00216D1C: ;
    MEM32(esi + 0x14) = edi;
    POP32(esp, edi);
    MEM32(esi + 8) = ebp;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0xC) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00216D40
 * Original: 0x00216D40 - 0x00216D88 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216D40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00216D62; /* je: equal / zero */

loc_00216D52: ;
    ecx = edi;
    PUSH32(esp, 0x00216D59u); RECOMP_ABI_CALL(0x00216A50u, sub_00216A50); /* call 0x00216A50 */

loc_00216D59: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00216D5Fu); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00216D5F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00216D62: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00216D7F; /* je: equal / zero */

loc_00216D6F: ;
    ecx = edi;
    PUSH32(esp, 0x00216D76u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_00216D76: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00216D7Cu); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00216D7C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00216D7F: ;
    POP32(esp, edi);
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00216D90
 * Original: 0x00216D90 - 0x00216D95 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00216D90: ;
    g_seh_ebp = ebp; sub_00216D40(); return; /* tail jmp 0x00216D40 */

}

/**
 * sub_00216DA0
 * Original: 0x00216DA0 - 0x00216DF2 (82 bytes, 33 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216DA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216DF0; /* je: equal / zero */

loc_00216DAA: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00216DB5u); RECOMP_ABI_CALL(0x002105A0u, sub_002105A0); /* call 0x002105A0 */

loc_00216DB5: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216DD0; /* je: equal / zero */

loc_00216DBE: ;
    edx = MEM32(eax);
    ecx = eax + 4;
    eax = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00216DCEu); RECOMP_ABI_CALL(0x0028ABA0u, sub_0028ABA0); /* call 0x0028ABA0 */

loc_00216DCE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00216DD0: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax * 8 + 0x2E7A20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x10));
    _fb = (uint32_t)(MEM32(eax * 8 + 0x2E7A24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax * 8 + 0x2E7A24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00216DF0u); RECOMP_ABI_CALL(0x0028AB00u, sub_0028AB00); /* call 0x0028AB00 */

loc_00216DF0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00216E00
 * Original: 0x00216E00 - 0x00216E08 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216E00(void)
{

loc_00216E00: ;
    MEM32(ecx + 4) = 0x400;
    esp += 4; return; /* ret */

}

/**
 * sub_00216E10
 * Original: 0x00216E10 - 0x00216E5C (76 bytes, 27 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216E10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x28);
    PUSH32(esp, 0x2E3DF0);
    PUSH32(esp, 0);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x10);
    MEM32(edi + 0x28) = esi;
    PUSH32(esp, 0x00216E29u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00216E29: ;
    esi = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0x2E3DBC);
    MEM32(esi) = eax;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00216E48u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00216E48: ;
    MEM32(esi + 8) = eax;
    ecx = MEM32(edi + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = ecx;
    MEM32(edi + 0xC) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00216E60
 * Original: 0x00216E60 - 0x00217050 (496 bytes, 133 insns)
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216E60: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x30);
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x34); /* cvtsi2ss */
    eax = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    xmm3.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    esi = edi + ecx + -1;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x38);
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x44); /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm4.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    edx = ebx + edx + -1;
    if ((_fa == 0)) goto loc_00216FEE; /* je: equal / zero */

loc_00216EE5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00216F9D; /* je: equal / zero */

loc_00216EEC: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00216F3E; /* je: equal / zero */

loc_00216EEF: ;
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 40; return; /* ret 36 */

loc_00216F3E: ;
    xmm3.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 8) = ecx;
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(eax + 0xC) = edx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 40; return; /* ret 36 */

loc_00216F9D: ;
    xmm5.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x1C) = xmm5.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    goto loc_0021702D;

loc_00216FEE: ;
    xmm4.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    xmm1 = xmm0; /* movaps */
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x18);
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */

loc_0021702D: ;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x14) = edx;
    POP32(esp, edi);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    POP32(esp, esi);
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 40; return; /* ret 36 */

}

/**
 * sub_00217050
 * Original: 0x00217050 - 0x002170AD (93 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217050: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002170AB; /* je: equal / zero */

loc_00217057: ;
    eax = MEM32(esi + 0xC);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217099; /* je: equal / zero */

loc_00217063: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx + 4;

loc_00217068: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = edx;
    edi = edx;
    edx = MEM32(ecx + edi * 4);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00217081u); RECOMP_ABI_CALL(0x002077D0u, sub_002077D0); /* call 0x002077D0 */

loc_00217081: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + edi * 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021708Du); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0021708D: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00217068; /* jne: not equal / not zero */

loc_00217097: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00217099: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002170A2u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_002170A2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002170A8u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_002170A8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002170AB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002170B0
 * Original: 0x002170B0 - 0x00217182 (210 bytes, 83 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002170B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002170B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebp (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_00217134; /* jge: greater or equal (signed >=) */

loc_002170BE: ;
    edi = edi;

loc_002170C0: ;
    edx = MEM32(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = edx;
    if ((_fa == 0)) goto loc_00217125; /* je: equal / zero */

loc_002170CA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0021712C; /* jne: not equal / not zero */

loc_002170CD: ;
    eax = MEM32(esi + 4);
    edi = esi + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002170DBu); RECOMP_ABI_CALL(0x0014AA10u, sub_0014AA10); /* call 0x0014AA10 */

loc_002170DB: ;
    edx = MEM32(edi + 0x1C);
    ebp = MEM32(esi + 4);
    PUSH32(esp, 0x2E3DF0);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    MEM32(edi + 0x1C) = edx;
    PUSH32(esp, 0x002170F3u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_002170F3: ;
    PUSH32(esp, 0x2E3DBC);
    ebx = eax;
    ecx = ebp * 4;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM32(ebx) = ebp;
    MEM32(ebx + 4) = 0;
    PUSH32(esp, 0x00217112u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00217112: ;
    ebp = MEM32(esp + 0x2C);
    MEM32(ebx + 8) = eax;
    edx = MEM32(edi);
    MEM32(ebx + 0xC) = edx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebx;
    goto loc_0021712C;

loc_00217125: ;
    ecx = esi;
    PUSH32(esp, 0x0021712Cu); RECOMP_ABI_CALL(0x00216E00u, sub_00216E00); /* call 0x00216E00 */

loc_0021712C: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002170C0; /* jl: less (signed <) */

loc_00217132: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */

loc_00217134: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0021717B; /* jle: less or equal (signed <=) */

loc_00217136: ;
    edx = MEM32(esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = edx;
    if ((_fa != 0)) goto loc_00217177; /* jne: not equal / not zero */

loc_00217140: ;
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x0021714Au); RECOMP_ABI_CALL(0x00217050u, sub_00217050); /* call 0x00217050 */

loc_0021714A: ;
    eax = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(edi + 0x18) = ebx;
    PUSH32(esp, 0x00217158u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00217158: ;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00217161u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00217161: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    MEM32(edi + 0x10) = ebx;
    PUSH32(esp, 0x00217177u); RECOMP_ABI_CALL(0x00216E00u, sub_00216E00); /* call 0x00216E00 */

loc_00217177: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebp (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00217136; /* jg: greater (signed >) */

loc_0021717B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00217190
 * Original: 0x00217190 - 0x00217198 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217190(void)
{

loc_00217190: ;
    MEM32(ecx + 4) = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_002171A0
 * Original: 0x002171A0 - 0x00217209 (105 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002171A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002171A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edi + 4;
    SET_LO8(eax, 0xC);
    /* nop */

loc_002171B0: ;
    SET_LO8(edx, LO8(ebx));
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x20);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(ecx, LO8(edx));
    SET_LO8(edx, (uint32_t)(((int32_t)(int8_t)(LO8(edx))) >> ((4) & 31u)));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sar result */
    SET_LO8(edx, LO8(edx) & 7);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO16(edx, SX8(LO8(edx)));
    SET_LO16(ecx, SX8(LO8(ecx)));
    MEM8(esi) = 0xF;
    MEM8(esi + 1) = 0x14;
    MEM8(esi + 3) = 0xE;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x15);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esi + -4) = LO16(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esi + -2) = LO16(edx);
    MEM8(esi + 2) = LO8(ecx);
    MEM8(esi + 4) = LO8(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002171B0; /* jl: less (signed <) */

loc_002171F7: ;
    MEM32(edi + 0xA08) = ecx;
    MEM32(edi + 0xA0C) = ecx;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00217210
 * Original: 0x00217210 - 0x0021721E (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217210(void)
{

loc_00217210: ;
    eax = ZX8(MEM8(esp + 4));
    eax = eax + eax * 4;
    eax = ecx + eax * 2;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00217220
 * Original: 0x00217220 - 0x00217270 (80 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217220(void)
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

loc_00217220: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    SET_LO8(eax, MEM8(edx));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEM8(esp + 8) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00217269; /* je: equal / zero */

loc_00217238: ;
    goto loc_00217240;

    /* nop */

loc_00217240: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021724Au); RECOMP_ABI_CALL(0x00217210u, sub_00217210); /* call 0x00217210 */

loc_0021724A: ;
    eax = ZX8(MEM8(eax + 8));
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, MEM8(edx));
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = xmm1; /* movaps */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEM8(esp + 8) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00217240; /* jne: not equal / not zero */

loc_00217269: ;
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00217270
 * Original: 0x00217270 - 0x002172BC (76 bytes, 27 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217270: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x24);
    PUSH32(esp, 0x2E3DF0);
    PUSH32(esp, 0);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x10);
    MEM32(edi + 0x24) = esi;
    PUSH32(esp, 0x00217289u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_00217289: ;
    esi = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0x2E3DBC);
    MEM32(esi) = eax;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x002172A8u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_002172A8: ;
    MEM32(esi + 8) = eax;
    ecx = MEM32(edi + 8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = ecx;
    MEM32(edi + 8) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002172C0
 * Original: 0x002172C0 - 0x00217615 (853 bytes, 251 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002172C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002172C0: ;
    _fb = (uint32_t)(0x22C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x22C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = ebx;
    eax = edi + 4;
    ecx = 0x100;
    /* nop */

loc_002172E0: ;
    MEM16(eax + -4) = LO16(ebx);
    MEM16(eax + -2) = LO16(ebx);
    MEM8(eax) = LO8(ebx);
    MEM8(eax + 1) = LO8(ebx);
    MEM8(eax + 2) = LO8(ebx);
    MEM8(eax + 3) = LO8(ebx);
    MEM8(eax + 4) = LO8(ebx);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002172E0; /* jne: not equal / not zero */

loc_002172FC: ;
    esi = MEM32(esp + 0x23C);
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00217486; /* jl: less (signed <) */

loc_00217312: ;
    PUSH32(esp, ebp);

loc_00217313: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0021731Fu); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_0021731F: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4E584554) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4E584554 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002175AD; /* ja: above (unsigned >) */

loc_0021732E: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00217492; /* je: equal / zero */

loc_00217334: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x444F4246) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x444F4246 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217371; /* je: equal / zero */

loc_0021733B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x454D414E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x454D414E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00217476; /* jne: not equal / not zero */

loc_00217346: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, 0x100);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00217359u); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_00217359: ;
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217363u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00217363: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xA00) = eax;
    goto loc_00217476;

loc_00217371: ;
    ebp = ZX16(MEM16(esp + 0x18));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00217476; /* jle: less or equal (signed <=) */

loc_0021737E: ;
    edi = edi;

loc_00217380: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00217394u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00217391u); } /* indirect call */
    }

loc_00217394: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    MEM8(esp + 0x1B) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x002173A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002173A5u); } /* indirect call */
    }

loc_002173A8: ;
    esi = ZX16(MEM16(esp + 0x1C));
    SET_LO8(edx, MEM8(esp + 0x13));
    ecx = esi + esi * 4;
    MEM8(edi + ecx * 2 + 8) = LO8(edx);
    ecx = MEM32(esp + 0x38);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 0x17;
    PUSH32(esp, edx);
    MEM8(esp + 0x1B) = LO8(ebx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x002173CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002173C9u); } /* indirect call */
    }

loc_002173CC: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    eax = esi + esi * 4;
    esi = edi + eax * 2;
    MEM8(esi + 6) = LO8(ecx);
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    MEM8(esp + 0x1B) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x002173EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002173EAu); } /* indirect call */
    }

loc_002173ED: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    MEM8(esi + 7) = LO8(ecx);
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00217408u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00217405u); } /* indirect call */
    }

loc_00217408: ;
    SET_LO16(ecx, MEM16(esp + 0x14));
    MEM16(esi) = LO16(ecx);
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00217424u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00217421u); } /* indirect call */
    }

loc_00217424: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    _fb = (uint32_t)(MEM8(esi)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esi + 4) = LO8(ecx);
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00217441u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021743Eu); } /* indirect call */
    }

loc_00217441: ;
    SET_LO16(ecx, MEM16(esp + 0x14));
    MEM16(esi + 2) = LO16(ecx);
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0021745Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021745Bu); } /* indirect call */
    }

loc_0021745E: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    _fb = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - MEM8(esi + 2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi + 5) = LO8(ecx);
    if ((_fa != 0)) goto loc_00217380; /* jne: not equal / not zero */

loc_0021746F: ;
    esi = MEM32(esp + 0x240);

loc_00217476: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00217313; /* jge: greater or equal (signed >=) */

loc_00217485: ;
    POP32(esp, ebp);

loc_00217486: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x22C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x22C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00217492: ;
    esi = ZX8(MEM8(edi + 0xA05));
    PUSH32(esp, 0x302158);
    edx = esi + esi * 2;
    eax = edx * 4 + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002174AFu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_002174AF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002174D0; /* je: equal / zero */

loc_002174B6: ;
    PUSH32(esp, 0x30890);
    PUSH32(esp, 0x31080);
    PUSH32(esp, esi);
    ebp = eax + 4;
    PUSH32(esp, 0xC);
    PUSH32(esp, ebp);
    MEM32(eax) = esi;
    PUSH32(esp, 0x002174CEu); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_002174CE: ;
    goto loc_002174D2;

loc_002174D0: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002174D2: ;
    ecx = ZX8(MEM8(edi + 0xA05));
    PUSH32(esp, 0x30213C);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM32(edi + 0xA08) = ebp;
    PUSH32(esp, 0x002174EDu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_002174ED: ;
    MEM32(edi + 0xA0C) = eax;
    SET_LO8(eax, MEM8(edi + 0xA05));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0021746F; /* jbe: below or equal (unsigned <=) */

loc_00217506: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00217510;

    /* nop */

loc_00217510: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, 0x100);
    edx = esp + 0x140;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00217526u); RECOMP_ABI_CALL(0x00209070u, sub_00209070); /* call 0x00209070 */

loc_00217526: ;
    eax = esp + 0x13C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217533u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_00217533: ;
    ecx = MEM32(edi + 0xA08);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00217544u); RECOMP_ABI_CALL(0x001F7D20u, sub_001F7D20); /* call 0x001F7D20 */

loc_00217544: ;
    ecx = MEM32(edi + 0xA08);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00217552u); RECOMP_ABI_CALL(0x001F7C20u, sub_001F7C20); /* call 0x001F7C20 */

loc_00217552: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00217566u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00217563u); } /* indirect call */
    }

loc_00217566: ;
    SET_LO8(edx, MEM8(esp + 0x14));
    ecx = MEM32(edi + 0xA0C);
    MEM8(ecx + esi * 2) = LO8(edx);
    ecx = MEM32(esp + 0x38);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00217587u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00217584u); } /* indirect call */
    }

loc_00217587: ;
    eax = MEM32(edi + 0xA0C);
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM8(eax + esi * 2 + 1) = LO8(ecx);
    edx = ZX8(MEM8(edi + 0xA05));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00217510; /* jl: less (signed <) */

loc_002175A8: ;
    goto loc_0021746F;

loc_002175AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4F464E49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4F464E49 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00217476; /* jne: not equal / not zero */

loc_002175B8: ;
    ecx = MEM32(esp + 0x38);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x002175CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002175C9u); } /* indirect call */
    }

loc_002175CC: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx);
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    MEM8(esp + 0x1B) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x002175E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002175E5u); } /* indirect call */
    }

loc_002175E8: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    MEM8(edi + 0xA05) = LO8(ecx);
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    MEM8(esp + 0x1B) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00217606u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00217603u); } /* indirect call */
    }

loc_00217606: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    MEM8(edi + 0xA04) = LO8(ecx);
    goto loc_00217476;

}

/**
 * sub_00217620
 * Original: 0x00217620 - 0x0021768C (108 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217620: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xA05));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00217652; /* jbe: below or equal (unsigned <=) */

loc_00217630: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00217633: ;
    ecx = MEM32(esi + 0xA08);
    PUSH32(esp, 0xFFFFFFFFu);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00217642u); RECOMP_ABI_CALL(0x001F7C20u, sub_001F7C20); /* call 0x001F7C20 */

loc_00217642: ;
    eax = ZX8(MEM8(esi + 0xA05));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00217633; /* jl: less (signed <) */

loc_00217651: ;
    POP32(esp, ebx);

loc_00217652: ;
    ecx = MEM32(esi + 0xA0C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0021765Eu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0021765E: ;
    esi = MEM32(esi + 0xA08);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217689; /* je: equal / zero */

loc_0021766B: ;
    ecx = MEM32(esi + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = esi + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_00217680; /* je: equal / zero */

loc_00217675: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0021767Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021767Bu); } /* indirect call */
    }

loc_0021767D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00217680: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217686u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00217686: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00217689: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00217690
 * Original: 0x00217690 - 0x002176DA (74 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217690: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ecx + 0xA05));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002176C1; /* jle: less or equal (signed <=) */

loc_0021769F: ;
    edx = MEM32(ecx + 0xA0C);
    SET_LO8(ebx, MEM8(esp + 0xC));
    /* nop */

loc_002176B0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(edx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002176B9; /* jb: below (unsigned <) */

loc_002176B4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(edx + 1) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002176C8; /* jb: below (unsigned <) */

loc_002176B9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002176B0; /* jl: less (signed <) */

loc_002176C1: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_002176C8: ;
    ecx = MEM32(ecx + 0xA08);
    eax = eax + eax * 2;
    eax = MEM32(ecx + eax * 4 + 4);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002176E0
 * Original: 0x002176E0 - 0x0021774C (108 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002176E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002176E0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021774A; /* je: equal / zero */

loc_002176E7: ;
    eax = MEM32(esi + 0xC);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217738; /* je: equal / zero */

loc_002176F3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx + 4;

loc_002176F8: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = edx;
    edi = edx;
    edx = MEM32(ecx + edi * 4);
    eax = MEM32(edx + 0xA00);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00217715u); RECOMP_ABI_CALL(0x002077D0u, sub_002077D0); /* call 0x002077D0 */

loc_00217715: ;
    ecx = MEM32(esi + 8);
    edi = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021772F; /* je: equal / zero */

loc_0021771F: ;
    ecx = edi;
    PUSH32(esp, 0x00217726u); RECOMP_ABI_CALL(0x00217620u, sub_00217620); /* call 0x00217620 */

loc_00217726: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021772Cu); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_0021772C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021772F: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002176F8; /* jne: not equal / not zero */

loc_00217736: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00217738: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00217741u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00217741: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00217747u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00217747: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021774A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00217750
 * Original: 0x00217750 - 0x002177CF (127 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217750: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021778A; /* jge: greater or equal (signed >=) */

loc_0021775C: ;
    /* nop */

loc_00217760: ;
    edx = MEM32(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = edx;
    if ((_fa == 0)) goto loc_0021777B; /* je: equal / zero */

loc_0021776A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00217782; /* jne: not equal / not zero */

loc_0021776D: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 0x00217779u); RECOMP_ABI_CALL(0x0014AA10u, sub_0014AA10); /* call 0x0014AA10 */

loc_00217779: ;
    goto loc_00217782;

loc_0021777B: ;
    ecx = esi;
    PUSH32(esp, 0x00217782u); RECOMP_ABI_CALL(0x00217190u, sub_00217190); /* call 0x00217190 */

loc_00217782: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00217760; /* jl: less (signed <) */

loc_00217788: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */

loc_0021778A: ;
    if (CMP_LE(_fas, _fbs)) goto loc_002177CA; /* jle: less or equal (signed <=) */

loc_0021778C: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00217790: ;
    edx = MEM32(esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = edx;
    if ((_fa != 0)) goto loc_002177C5; /* jne: not equal / not zero */

loc_0021779A: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    MEM32(esi + 0x20) = edi;
    PUSH32(esp, 0x002177A6u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_002177A6: ;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002177AFu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_002177AF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    PUSH32(esp, 0x002177C5u); RECOMP_ABI_CALL(0x00217190u, sub_00217190); /* call 0x00217190 */

loc_002177C5: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00217790; /* jg: greater (signed >) */

loc_002177C9: ;
    POP32(esp, edi);

loc_002177CA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002177D0
 * Original: 0x002177D0 - 0x002178C8 (248 bytes, 86 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002177D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002177D0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    eax = MEM32(ebx + 0xC);
    _fb = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_002178C0; /* jl: less (signed <) */

loc_002177EA: ;
    PUSH32(esp, edi);
    goto loc_002177F0;

    /* nop */

loc_002177F0: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x002177FCu); RECOMP_ABI_CALL(0x00209520u, sub_00209520); /* call 0x00209520 */

loc_002177FC: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x746E6F66) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0x746E6F66 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002178B0; /* jne: not equal / not zero */

loc_0021780A: ;
    PUSH32(esp, 0x302174);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA10);
    PUSH32(esp, 0x0021781Bu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_0021781B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021782D; /* je: equal / zero */

loc_00217822: ;
    ecx = eax;
    PUSH32(esp, 0x00217829u); RECOMP_ABI_CALL(0x002171A0u, sub_002171A0); /* call 0x002171A0 */

loc_00217829: ;
    edi = eax;
    goto loc_0021782F;

loc_0021782D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021782F: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0021783Bu); RECOMP_ABI_CALL(0x002172C0u, sub_002172C0); /* call 0x002172C0 */

loc_0021783B: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x18);
    eax = MEM32(edi + 0xA00);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217850u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00217850: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021785C; /* jge: greater or equal (signed >=) */

loc_00217857: ;
    eax = esi + 0x1C;
    goto loc_00217862;

loc_0021785C: ;
    ecx = MEM32(esi + 0x14);
    eax = ecx + eax * 4;

loc_00217862: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002178A0; /* jne: not equal / not zero */

loc_00217867: ;
    eax = MEM32(esi + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(eax + edx * 4) = edi;
    eax = MEM32(esi + 8);
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x18);
    eax = MEM32(edi + 0xA00);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021788Eu); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_0021788E: ;
    ecx = MEM32(esi + 0x14);
    MEM32(ecx + eax * 4) = edi;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x10) = eax;
    goto loc_002178B0;

loc_002178A0: ;
    ecx = edi;
    PUSH32(esp, 0x002178A7u); RECOMP_ABI_CALL(0x00217620u, sub_00217620); /* call 0x00217620 */

loc_002178A7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002178ADu); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_002178AD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002178B0: ;
    edx = MEM32(ebx + 0xC);
    _fb = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002177F0; /* jge: greater or equal (signed >=) */

loc_002178BF: ;
    POP32(esp, edi);

loc_002178C0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002178D0
 * Original: 0x002178D0 - 0x002178D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002178D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002178D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002176E0(); return; /* tail jmp 0x002176E0 */

}

/**
 * sub_002178E0
 * Original: 0x002178E0 - 0x002178F0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002178E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002178E0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM8(eax + 0x14) = LO8(ecx);
    MEM32(eax + 0x3C) = ecx;
    MEM8(eax + 0x40) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002178F0
 * Original: 0x002178F0 - 0x002178F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002178F0(void)
{

loc_002178F0: ;
    SET_LO8(eax, MEM8(ecx + 0x40));
    esp += 4; return; /* ret */

}

/**
 * sub_00217900
 * Original: 0x00217900 - 0x00217904 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217900(void)
{

loc_00217900: ;
    eax = MEM32(ecx + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_00217910
 * Original: 0x00217910 - 0x00217987 (119 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00217910: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217920u); RECOMP_ABI_CALL(0x0028C4E0u, sub_0028C4E0); /* call 0x0028C4E0 */

loc_00217920: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x8007000Eu (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00217939; /* jge: greater or equal (signed >=) */

loc_00217931: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00217939: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x14));
    MEM32(esp + 0xC) = 0;

loc_00217946: ;
    edx = MEM32(esi);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00217956u); RECOMP_ABI_CALL(0x00256153u, sub_00256153); /* call 0x00256153 */

loc_00217956: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_00217963; /* jne: not equal / not zero */

loc_0021795F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217946; /* je: equal / zero */

loc_00217963: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    POP32(esp, ebx);
    if (CMP_A(_fa, _fb)) goto loc_00217970; /* ja: above (unsigned >) */

loc_00217969: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x217988); /* switch: 4 entries, 2 targets */
    if (_jt == 0x00217970u) goto loc_00217970;
    if (_jt == 0x00217974u) goto loc_00217974;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00217970: ;
    MEM8(esi + 0x40) = 0;

loc_00217974: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021797E; /* je: equal / zero */

loc_00217978: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021797Eu); RECOMP_ABI_CALL(0x0028B130u, sub_0028B130); /* call 0x0028B130 */

loc_0021797E: ;
    eax = MEM32(esi + 0x3C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002179A0
 * Original: 0x002179A0 - 0x00217A06 (102 bytes, 42 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002179A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002179A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002179A8u); RECOMP_ABI_CALL(0x002178F0u, sub_002178F0); /* call 0x002178F0 */

loc_002179A8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002179B8; /* je: equal / zero */

loc_002179AC: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002179B4u); RECOMP_ABI_CALL(0x00255F88u, sub_00255F88); /* call 0x00255F88 */

loc_002179B4: ;
    MEM8(esi + 0x40) = 0;

loc_002179B8: ;
    SET_LO8(eax, MEM8(esi + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002179F0; /* je: equal / zero */

loc_002179BF: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0x14) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_002179EF; /* jbe: below or equal (unsigned <=) */

loc_002179CD: ;
    PUSH32(esp, edi);
    edi = esi + 4;

loc_002179D1: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002179E3; /* je: equal / zero */

loc_002179D7: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x002179DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002179DAu); } /* indirect call */
    }

loc_002179DD: ;
    MEM32(edi) = 0;

loc_002179E3: ;
    eax = MEM32(esi + 0x24);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002179D1; /* jb: below (unsigned <) */

loc_002179EE: ;
    POP32(esp, edi);

loc_002179EF: ;
    POP32(esp, ebp);

loc_002179F0: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217A04; /* je: equal / zero */

loc_002179F7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002179FDu); RECOMP_ABI_CALL(0x0028B130u, sub_0028B130); /* call 0x0028B130 */

loc_002179FD: ;
    MEM32(esi + 0x3C) = 0;

loc_00217A04: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00217A10
 * Original: 0x00217A10 - 0x00217A2C (28 bytes, 11 insns)
 * Category: game_video
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217A10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00217A18u); RECOMP_ABI_CALL(0x002179A0u, sub_002179A0); /* call 0x002179A0 */

loc_00217A18: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217A2A; /* je: equal / zero */

loc_00217A1E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217A24u); RECOMP_ABI_CALL(0x00255C71u, sub_00255C71); /* call 0x00255C71 */

loc_00217A24: ;
    MEM32(esi) = 0;

loc_00217A2A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00217A30
 * Original: 0x00217A30 - 0x00217B2B (251 bytes, 107 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00217A30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00217A43; /* je: equal / zero */

loc_00217A3E: ;
    PUSH32(esp, 0x00217A43u); RECOMP_ABI_CALL(0x002179A0u, sub_002179A0); /* call 0x002179A0 */

loc_00217A43: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217A51u); RECOMP_ABI_CALL(0x00255D55u, sub_00255D55); /* call 0x00255D55 */

loc_00217A51: ;
    SET_LO8(eax, MEM8(esi + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217A99; /* je: equal / zero */

loc_00217A58: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = esi + 4;
    edx = ebx;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    eax = MEM32(esi + 0x24);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00217A99; /* jbe: below or equal (unsigned <=) */

loc_00217A73: ;
    ebp = esi + 0x28;

loc_00217A76: ;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217A80u); RECOMP_ABI_CALL(0x00255D71u, sub_00255D71); /* call 0x00255D71 */

loc_00217A80: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00217A8Eu); RECOMP_ABI_CALL(0x00255E09u, sub_00255E09); /* call 0x00255E09 */

loc_00217A8E: ;
    eax = MEM32(esi + 0x24);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00217A76; /* jb: below (unsigned <) */

loc_00217A99: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 3);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00217AB0u); RECOMP_ABI_CALL(0x0028C420u, sub_0028C420); /* call 0x0028C420 */

loc_00217AB0: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 0x3C) = eax;
    PUSH32(esp, 0x00217ABBu); RECOMP_ABI_CALL(0x0028C4E0u, sub_0028C4E0); /* call 0x0028C4E0 */

loc_00217ABB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    edi = eax;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = edi;
    PUSH32(esp, 0x00217AD0u); RECOMP_ABI_CALL(0x0028E320u, sub_0028E320); /* call 0x0028E320 */

loc_00217AD0: ;
    eax = MEM32(esi + 0x1C);
    edx = MEM32(esp + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00217B09; /* jbe: below or equal (unsigned <=) */

loc_00217ADD: ;
    /* nop */

loc_00217AE0: ;
    ecx = MEM32(esi + 0x18);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebp;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00217AE0; /* jb: below (unsigned <) */

loc_00217B05: ;
    edi = MEM32(esp + 0x10);

loc_00217B09: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00217B15; /* je: equal / zero */

loc_00217B0F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00217B15u); RECOMP_ABI_CALL(0x0028B130u, sub_0028B130); /* call 0x0028B130 */

loc_00217B15: ;
    PUSH32(esp, 1);
    ecx = esi;
    MEM8(esi + 0x40) = 1;
    PUSH32(esp, 0x00217B22u); RECOMP_ABI_CALL(0x00217910u, sub_00217910); /* call 0x00217910 */

loc_00217B22: ;
    POP32(esp, edi);
    MEM32(esi + 0x3C) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00217B30
 * Original: 0x00217B30 - 0x00217B72 (66 bytes, 30 insns)
 * Category: game_video
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217B30: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00217B40; /* jne: not equal / not zero */

loc_00217B3B: ;
    PUSH32(esp, 0x00217B40u); RECOMP_ABI_CALL(0x002179A0u, sub_002179A0); /* call 0x002179A0 */

loc_00217B40: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00217B4Au); RECOMP_ABI_CALL(0x00217910u, sub_00217910); /* call 0x00217910 */

loc_00217B4A: ;
    MEM32(esi + 0x3C) = eax;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217B6D; /* je: equal / zero */

loc_00217B53: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00217B59u); RECOMP_ABI_CALL(0x002567D0u, sub_002567D0); /* call 0x002567D0 */

loc_00217B59: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1E);
    eax = 0x10624DD3;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    POP32(esp, edi);
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00217B6D: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00217B80
 * Original: 0x00217B80 - 0x00217BEC (108 bytes, 38 insns)
 * Category: game_video
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00217B80: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x78));
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00217B90; /* je: equal / zero */

loc_00217B8B: ;
    PUSH32(esp, 0x00217B90u); RECOMP_ABI_CALL(0x00217A10u, sub_00217A10); /* call 0x00217A10 */

loc_00217B90: ;
    eax = MEM32(esp + 0x80);
    PUSH32(esp, 0x78);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00217BA4u); RECOMP_ABI_CALL(0x00209790u, sub_00209790); /* call 0x00209790 */

loc_00217BA4: ;
    SET_LO8(eax, MEM8(esp + 0x94));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    PUSH32(esp, esi);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217BC1u); RECOMP_ABI_CALL(0x0025572Du, sub_0025572D); /* call 0x0025572D */

loc_00217BC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00217BCE; /* jge: greater or equal (signed >=) */

loc_00217BC5: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x78)) >> 32) & 1);
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00217BCE: ;
    SET_LO8(eax, MEM8(esp + 0x84));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00217BDC; /* je: equal / zero */

loc_00217BD9: ;
    MEM8(esi + 0x14) = LO8(eax);

loc_00217BDC: ;
    ecx = esi;
    PUSH32(esp, 0x00217BE3u); RECOMP_ABI_CALL(0x00217A30u, sub_00217A30); /* call 0x00217A30 */

loc_00217BE3: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x78)) >> 32) & 1);
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00217BF0
 * Original: 0x00217BF0 - 0x00217C73 (131 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217BF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217BF0: ;
    edx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(edx + 0x104) = LO8(eax);
    MEM32(edx + 0x108) = eax;
    MEM32(edx + 0x10C) = eax;
    MEM32(edx + 0x110) = eax;
    MEM32(edx + 0x118) = eax;
    MEM32(edx + 0x11C) = eax;
    MEM32(edx + 0x120) = eax;
    MEM32(edx + 0x124) = eax;
    MEM32(edx + 0x128) = eax;
    MEM32(edx + 0x12C) = eax;
    MEM32(edx + 0x130) = eax;
    MEM32(edx) = 0xFFFFFFFFu;
    PUSH32(esp, edi);
    ecx = 0x40;
    edi = edx + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx + 0x134;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    ecx = edx + 0x148;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00217C80
 * Original: 0x00217C80 - 0x00217D43 (195 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217C80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40;
    edi = esi + 4;
    MEM32(esi) = 0xFFFFFFFFu;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esi + 0x10C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esi + 0x104) = LO8(ebx);
    MEM32(esi + 0x108) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00217CC7; /* je: equal / zero */

loc_00217CAF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217CB5u); RECOMP_ABI_CALL(0x0022AC56u, sub_0022AC56); /* call 0x0022AC56 */

loc_00217CB5: ;
    eax = MEM32(esi + 0x10C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217CC1u); RECOMP_ABI_CALL(0x0022AC11u, sub_0022AC11); /* call 0x0022AC11 */

loc_00217CC1: ;
    MEM32(esi + 0x10C) = ebx;

loc_00217CC7: ;
    eax = MEM32(esi + 0x110);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217CE9; /* je: equal / zero */

loc_00217CD1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217CD7u); RECOMP_ABI_CALL(0x0022AC56u, sub_0022AC56); /* call 0x0022AC56 */

loc_00217CD7: ;
    ecx = MEM32(esi + 0x110);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00217CE3u); RECOMP_ABI_CALL(0x0022AC11u, sub_0022AC11); /* call 0x0022AC11 */

loc_00217CE3: ;
    MEM32(esi + 0x110) = ebx;

loc_00217CE9: ;
    MEM32(esi + 0x118) = ebx;
    MEM32(esi + 0x11C) = ebx;
    MEM32(esi + 0x120) = ebx;
    MEM32(esi + 0x124) = ebx;
    MEM32(esi + 0x128) = ebx;
    MEM32(esi + 0x12C) = ebx;
    MEM32(esi + 0x130) = ebx;
    eax = esi + 0x134;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    _fb = (uint32_t)(0x148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x148;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x10) = edx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    POP32(esp, edi);
    MEM32(esi + 0x10) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00217D50
 * Original: 0x00217D50 - 0x00217D73 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217D50: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    if (CMP_G(_fas, _fbs)) goto loc_00217D6F; /* jg: greater (signed >) */

loc_00217D61: ;
    eax = MEM32(esp + 8);
    if (CMP_L(_fas, _fbs)) goto loc_00217D6B; /* jl: less (signed <) */

loc_00217D67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00217D6F; /* jae: above or equal (unsigned >=) */

loc_00217D6B: ;
    edx = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00217D6F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00217D80
 * Original: 0x00217D80 - 0x00217E1E (158 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217D80: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x78);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00217D98u); RECOMP_ABI_CALL(0x00209790u, sub_00209790); /* call 0x00209790 */

loc_00217D98: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00217DB4u); RECOMP_ABI_CALL(0x0022A7A4u, sub_0022A7A4); /* call 0x0022A7A4 */

loc_00217DB4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217DDA; /* je: equal / zero */

loc_00217DBB: ;
    eax = MEM32(esp + 0x8C);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM8(eax) = 1;
    PUSH32(esp, 0x00217DD0u); RECOMP_ABI_CALL(0x0022A1AAu, sub_0022A1AA); /* call 0x0022A1AA */

loc_00217DD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00217DE4; /* jne: not equal / not zero */

loc_00217DD4: ;
    PUSH32(esp, esi);

loc_00217DD5: ;
    PUSH32(esp, 0x00217DDAu); RECOMP_ABI_CALL(0x0022AC11u, sub_0022AC11); /* call 0x0022AC11 */

loc_00217DDA: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00217DE4: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 0x90);
    ecx = MEM32(esp + 8);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x94);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(eax + 4) = ecx;
    PUSH32(esp, 0x00217E0Au); RECOMP_ABI_CALL(0x0022A11Du, sub_0022A11D); /* call 0x0022A11D */

loc_00217E0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00217DD5; /* je: equal / zero */

loc_00217E0F: ;
    PUSH32(esp, 0x00217E14u); RECOMP_ABI_CALL(0x0022AC11u, sub_0022AC11); /* call 0x0022AC11 */

loc_00217E14: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00217E20
 * Original: 0x00217E20 - 0x00217E4E (46 bytes, 18 insns)
 * CC: cdecl, 13 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00217E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217E20: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00217E49; /* jne: not equal / not zero */

loc_00217E28: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217E49; /* je: equal / zero */

loc_00217E30: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00217E46u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00217E44u); } /* indirect call */
    }

loc_00217E46: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00217E49: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 56; return; /* ret 52 */

}

/**
 * sub_00217E50
 * Original: 0x00217E50 - 0x00217EA8 (88 bytes, 22 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00217E50: ;
    SET_LO8(eax, MEM8(0x842E65));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00217EA5; /* jne: not equal / not zero */

loc_00217E59: ;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00217EA5; /* je: equal / zero */

loc_00217E64: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00217EA0; /* jne: not equal / not zero */

loc_00217E6C: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax + 0x120);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 0x124);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(eax + 0x120) = edx;
    MEM32(eax + 0x124) = ecx;
    MEM32(eax + 0x13C) = edx;
    MEM32(eax + 0x108) = 4;
    esp += 16; return; /* ret 12 */

loc_00217EA0: ;
    PUSH32(esp, 0x00217EA5u); RECOMP_ABI_CALL(0x00209760u, sub_00209760); /* call 0x00209760 */

loc_00217EA5: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00217EB0
 * Original: 0x00217EB0 - 0x00217F25 (117 bytes, 28 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00217EB0: ;
    SET_LO8(eax, MEM8(0x842E65));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00217F22; /* jne: not equal / not zero */

loc_00217EB9: ;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00217F22; /* je: equal / zero */

loc_00217EC4: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00217F22; /* jne: not equal / not zero */

loc_00217ECC: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax + 0x128);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 0x12C);
    MEM32(eax + 0x128) = edx;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(eax + 0x150) = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x11C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x11C) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(eax + 0x12C) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_00217F18; /* jb: below (unsigned <) */

loc_00217EFB: ;
    if (CMP_A(_fa, _fb)) goto loc_00217F0B; /* ja: above (unsigned >) */

loc_00217EFD: ;
    edx = MEM32(eax + 0x128);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x118)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x118) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00217F18; /* jb: below (unsigned <) */

loc_00217F0B: ;
    MEM32(eax + 0x108) = 6;
    esp += 16; return; /* ret 12 */

loc_00217F18: ;
    MEM32(eax + 0x108) = 2;

loc_00217F22: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00217F30
 * Original: 0x00217F30 - 0x00217FE4 (180 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217F30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00217F4Cu); RECOMP_ABI_CALL(0x0022A7A4u, sub_0022A7A4); /* call 0x0022A7A4 */

loc_00217F4C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217F86; /* je: equal / zero */

loc_00217F53: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00217F59u); RECOMP_ABI_CALL(0x0022B077u, sub_0022B077); /* call 0x0022B077 */

loc_00217F59: ;
    ecx = eax;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00217F80; /* je: equal / zero */

loc_00217F60: ;
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00217F6Au); RECOMP_ABI_CALL(0x0022AFD1u, sub_0022AFD1); /* call 0x0022AFD1 */

loc_00217F6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00217F80; /* jne: not equal / not zero */

loc_00217F6E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00217F74u); RECOMP_ABI_CALL(0x0022AC11u, sub_0022AC11); /* call 0x0022AC11 */

loc_00217F74: ;
    PUSH32(esp, 0x00217F79u); RECOMP_ABI_CALL(0x00209760u, sub_00209760); /* call 0x00209760 */

loc_00217F79: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00217F80: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00217F86u); RECOMP_ABI_CALL(0x0022AC11u, sub_0022AC11); /* call 0x0022AC11 */

loc_00217F86: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x80);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00217F9Cu); RECOMP_ABI_CALL(0x0022A7A4u, sub_0022A7A4); /* call 0x0022A7A4 */

loc_00217F9C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217F79; /* je: equal / zero */

loc_00217FA3: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFCu);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x00217FB2u); RECOMP_ABI_CALL(0x00229F5Bu, sub_00229F5B); /* call 0x00229F5B */

loc_00217FB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217FD7; /* je: equal / zero */

loc_00217FB7: ;
    PUSH32(esp, ebx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x842E74);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00217FCAu); RECOMP_ABI_CALL(0x00229E01u, sub_00229E01); /* call 0x00229E01 */

loc_00217FCA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217FD7; /* je: equal / zero */

loc_00217FCE: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00217FD7; /* jne: not equal / not zero */

loc_00217FD5: ;
    SET_LO8(ebx, 1);

loc_00217FD7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00217FDDu); RECOMP_ABI_CALL(0x0022AC11u, sub_0022AC11); /* call 0x0022AC11 */

loc_00217FDD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00217FF0
 * Original: 0x00217FF0 - 0x0021806B (123 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217FF0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x80);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00218011u); RECOMP_ABI_CALL(0x0022A7A4u, sub_0022A7A4); /* call 0x0022A7A4 */

loc_00218011: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218063; /* je: equal / zero */

loc_00218018: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFCu);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x0021802Bu); RECOMP_ABI_CALL(0x00229F5Bu, sub_00229F5B); /* call 0x00229F5B */

loc_0021802B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218055; /* je: equal / zero */

loc_00218030: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00218043u); RECOMP_ABI_CALL(0x00229D14u, sub_00229D14); /* call 0x00229D14 */

loc_00218043: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218055; /* je: equal / zero */

loc_00218047: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x842E74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x842E74) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00218055; /* jne: not equal / not zero */

loc_00218053: ;
    SET_LO8(ebx, 1);

loc_00218055: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021805Bu); RECOMP_ABI_CALL(0x0022AC11u, sub_0022AC11); /* call 0x0022AC11 */

loc_0021805B: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00218063: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00218070
 * Original: 0x00218070 - 0x002180C8 (88 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218070: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021808Du); RECOMP_ABI_CALL(0x0022A7A4u, sub_0022A7A4); /* call 0x0022A7A4 */

loc_0021808D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002180C4; /* je: equal / zero */

loc_00218094: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x002180A8u); RECOMP_ABI_CALL(0x00229F5Bu, sub_00229F5B); /* call 0x00229F5B */

loc_002180A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002180B9; /* je: equal / zero */

loc_002180AD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002180B3u); RECOMP_ABI_CALL(0x00229ED7u, sub_00229ED7); /* call 0x00229ED7 */

loc_002180B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002180B9; /* je: equal / zero */

loc_002180B7: ;
    SET_LO8(ebx, 1);

loc_002180B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002180BFu); RECOMP_ABI_CALL(0x0022AC11u, sub_0022AC11); /* call 0x0022AC11 */

loc_002180BF: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002180C4: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002180D0
 * Original: 0x002180D0 - 0x002180FC (44 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002180D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002180D0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax + eax * 2;
    eax = MEM32(ecx);
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = 0x18;
    edi = eax;
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
    MEM32(esp + 4) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00218100
 * Original: 0x00218100 - 0x00218155 (85 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218100(void)
{

loc_00218100: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
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
    edx = MEM32(ecx + 0x38);
    MEM32(eax + 0x38) = edx;
    edx = MEM32(ecx + 0x3C);
    MEM32(eax + 0x3C) = edx;
    edx = MEM32(ecx + 0x40);
    MEM32(eax + 0x40) = edx;
    edx = MEM32(ecx + 0x44);
    MEM32(eax + 0x44) = edx;
    edx = MEM32(ecx + 0x48);
    MEM32(eax + 0x48) = edx;
    ecx = MEM32(ecx + 0x4C);
    MEM32(eax + 0x4C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00218160
 * Original: 0x00218160 - 0x0021817C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218160: ;
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
    esp += 4; return; /* ret */

}

/**
 * sub_00218180
 * Original: 0x00218180 - 0x002181B2 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218180: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x85BF18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002181B0; /* je: equal / zero */

loc_0021818D: ;
    eax = MEM32(esi + 0xC);
    edx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002181A2u); RECOMP_ABI_CALL(0x002226C0u, sub_002226C0); /* call 0x002226C0 */

loc_002181A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002181B0; /* je: equal / zero */

loc_002181A9: ;
    MEM32(esi + 0x18) = 1;

loc_002181B0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002181C0
 * Original: 0x002181C0 - 0x002181DE (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002181C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002181C0: ;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002181DA; /* jne: not equal / not zero */

loc_002181C6: ;
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x20);
    eax = 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_002181DA; /* jne: not equal / not zero */

loc_002181D7: ;
    MEM32(ecx + 0x18) = eax;

loc_002181DA: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_002181E0
 * Original: 0x002181E0 - 0x00218209 (41 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002181E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002181E0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218206; /* je: equal / zero */

loc_002181EA: ;
    edx = MEM32(eax + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218206; /* je: equal / zero */

loc_002181F1: ;
    _fa = (uint32_t)(MEM32(edx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x20), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00218206; /* jne: not equal / not zero */

loc_002181F7: ;
    eax = edx;
    edx = MEM32(eax + 0x1C);
    eax = MEM32(eax + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00218206u); RECOMP_ABI_CALL(0x00208EC0u, sub_00208EC0); /* call 0x00208EC0 */

loc_00218206: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00218210
 * Original: 0x00218210 - 0x0021822A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00218210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218210: ;
    eax = MEM32(0x3128D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218227; /* je: equal / zero */

loc_00218219: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x3128D0) = eax;
    eax = MEM32(eax * 4 + 0x311CD0);
    esp += 4; return; /* ret */

loc_00218227: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00218230
 * Original: 0x00218230 - 0x00218240 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00218230: ;
    ecx = MEM32(0x85BF18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021823F; /* je: equal / zero */

loc_0021823A: ;
    g_seh_ebp = ebp; sub_00222190(); return; /* tail jmp 0x00222190 */

loc_0021823F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00218240
 * Original: 0x00218240 - 0x002182E4 (164 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218240: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xF;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM8(esp + 0x17) = LO8(ebx);
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x0021826Bu); RECOMP_ABI_CALL(0x00217D80u, sub_00217D80); /* call 0x00217D80 */

loc_0021826B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00218279; /* jne: not equal / not zero */

loc_00218272: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00218279: ;
    _fa = (uint32_t)(MEM8(esp + 7)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 7), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218272; /* je: equal / zero */

loc_0021827F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x13;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM8(esp + 0x1B) = LO8(ebx);
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0x002182A5u); RECOMP_ABI_CALL(0x00217D80u, sub_00217D80); /* call 0x00217D80 */

loc_002182A5: ;
    SET_LO8(ecx, MEM8(esp + 0x1B));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002182B8; /* jne: not equal / not zero */

loc_002182B0: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002182B8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002182B0; /* je: equal / zero */

loc_002182BC: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002182B0; /* jne: not equal / not zero */

loc_002182C6: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002182B0; /* jne: not equal / not zero */

loc_002182D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002182D6u); RECOMP_ABI_CALL(0x00217FF0u, sub_00217FF0); /* call 0x00217FF0 */

loc_002182D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002182F0
 * Original: 0x002182F0 - 0x00218578 (648 bytes, 210 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002182F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002182F0: ;
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1A8));
    esp = esp - 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1B0);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1B8);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0021830Du); RECOMP_ABI_CALL(0x00239D29u, sub_00239D29); /* call 0x00239D29 */

loc_0021830D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0021831F; /* jne: not equal / not zero */

loc_00218314: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1A8)) >> 32) & 1);
    esp = esp + 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0021831F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00218328u); RECOMP_ABI_CALL(0x00238170u, sub_00238170); /* call 0x00238170 */

loc_00218328: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0021856C; /* je: equal / zero */

loc_00218335: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = eax;
    PUSH32(esp, edi);
    eax = esp + 0x40;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00218347u); RECOMP_ABI_CALL(0x00237FC0u, sub_00237FC0); /* call 0x00237FC0 */

loc_00218347: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x27;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    MEM8(esp + edi + 0x58) = LO8(ebx);
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ebx;
    PUSH32(esp, 0x00218368u); RECOMP_ABI_CALL(0x00217D80u, sub_00217D80); /* call 0x00217D80 */

loc_00218368: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00218459; /* je: equal / zero */

loc_00218373: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x1B;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = ebx;
    PUSH32(esp, 0x00218390u); RECOMP_ABI_CALL(0x00217D80u, sub_00217D80); /* call 0x00217D80 */

loc_00218390: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002183A4u); RECOMP_ABI_CALL(0x0022A2C5u, sub_0022A2C5); /* call 0x0022A2C5 */

loc_002183A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00218459; /* je: equal / zero */

loc_002183AC: ;
    ebp = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x20);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x18);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_002183D8; /* ja: above (unsigned >) */

loc_002183C8: ;
    if (CMP_B(_fa, _fb)) goto loc_00218459; /* jb: below (unsigned <) */

loc_002183CE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00218459; /* jb: below (unsigned <) */

loc_002183D8: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002183E0u); RECOMP_ABI_CALL(0x00238BD0u, sub_00238BD0); /* call 0x00238BD0 */

loc_002183E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00218459; /* je: equal / zero */

loc_002183E7: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = eax;
    PUSH32(esp, edi);
    eax = esp + 0x40;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002183F8u); RECOMP_ABI_CALL(0x00237FC0u, sub_00237FC0); /* call 0x00237FC0 */

loc_002183F8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    MEM8(esp + edi + 0x44) = LO8(ebx);
    PUSH32(esp, 0x0021840Au); RECOMP_ABI_CALL(0x0022B222u, sub_0022B222); /* call 0x0022B222 */

loc_0021840A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0021841A; /* jne: not equal / not zero */

loc_0021840E: ;
    PUSH32(esp, 0x00218413u); RECOMP_ABI_CALL(0x0022B150u, sub_0022B150); /* call 0x0022B150 */

loc_00218413: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00218459; /* jne: not equal / not zero */

loc_0021841A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021842Cu); RECOMP_ABI_CALL(0x0022A7A4u, sub_0022A7A4); /* call 0x0022A7A4 */

loc_0021842C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0021846C; /* je: equal / zero */

loc_00218433: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00218439u); RECOMP_ABI_CALL(0x0022B077u, sub_0022B077); /* call 0x0022B077 */

loc_00218439: ;
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx | 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00218466; /* je: equal / zero */

loc_00218440: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021844Au); RECOMP_ABI_CALL(0x0022AFD1u, sub_0022AFD1); /* call 0x0022AFD1 */

loc_0021844A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00218466; /* jne: not equal / not zero */

loc_0021844E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00218454u); RECOMP_ABI_CALL(0x0022AC11u, sub_0022AC11); /* call 0x0022AC11 */

loc_00218454: ;
    PUSH32(esp, 0x00218459u); RECOMP_ABI_CALL(0x00209760u, sub_00209760); /* call 0x00209760 */

loc_00218459: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1A8)) >> 32) & 1);
    esp = esp + 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00218466: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021846Cu); RECOMP_ABI_CALL(0x0022AC11u, sub_0022AC11); /* call 0x0022AC11 */

loc_0021846C: ;
    _fa = (uint32_t)(MEM8(esp + 0x1CC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x1CC), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0021850F; /* je: equal / zero */

loc_00218479: ;
    ecx = MEM32(0x842E6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0021855F; /* jae: above or equal (unsigned >=) */

loc_00218488: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x160);
    _fb = (uint32_t)(0x84DB78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x84DB78)) >> 32) & 1);
    ecx = ecx + 0x84DB78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00218499u); RECOMP_ABI_CALL(0x00217C80u, sub_00217C80); /* call 0x00217C80 */

loc_00218499: ;
    eax = MEM32(0x842E6C);
    ecx = MEM32(esp + 0x1C8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x160);
    PUSH32(esp, 0x100);
    edx = eax + 0x84DB7C;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM32(eax + 0x84DB78) = ecx;
    PUSH32(esp, 0x002184C3u); RECOMP_ABI_CALL(0x00237FC0u, sub_00237FC0); /* call 0x00237FC0 */

loc_002184C3: ;
    ecx = MEM32(0x842E6C);
    SET_LO8(edx, MEM8(esp + 0x1DC));
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x160);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 0x84DC7C) = LO8(edx);
    edx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(eax + 0x84DC80) = 1;
    POP32(esp, ebx);
    MEM32(eax + 0x84DC90) = edx;
    MEM32(eax + 0x84DC94) = ebp;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x842E6C) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1A8)) >> 32) & 1);
    esp = esp + 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0021850F: ;
    eax = MEM32(esp + 0x1BC);
    PUSH32(esp, 0x78);
    PUSH32(esp, eax);
    ecx = esp + 0x148;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00218526u); RECOMP_ABI_CALL(0x00209790u, sub_00209790); /* call 0x00209790 */

loc_00218526: ;
    edx = MEM32(esp + 0x1D0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x217E20);
    PUSH32(esp, esi);
    eax = esp + 0x154;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00218546u); RECOMP_ABI_CALL(0x0022A92Fu, sub_0022A92F); /* call 0x0022A92F */

loc_00218546: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00218459; /* je: equal / zero */

loc_0021854E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00218554u); RECOMP_ABI_CALL(0x00217F30u, sub_00217F30); /* call 0x00217F30 */

loc_00218554: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00218459; /* je: equal / zero */

loc_0021855F: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1A8)) >> 32) & 1);
    esp = esp + 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0021856C: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1A8)) >> 32) & 1);
    esp = esp + 0x1A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00218580
 * Original: 0x00218580 - 0x00218696 (278 bytes, 100 insns)
 * CC: cdecl, 24 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00218580: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x247018);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00218624; /* jle: less or equal (signed <=) */

loc_002185A4: ;
    ebx = MEM32(ecx);
    ebp = MEM32(esp + 0x38);
    esi = edi;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = esi + esi * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + ebx + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002185E4; /* jne: not equal / not zero */

loc_002185BC: ;
    ecx = esp + 0x20;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    PUSH32(esp, 0x002185CDu); RECOMP_ABI_CALL(0x00227FC0u, sub_00227FC0); /* call 0x00227FC0 */

loc_002185CD: ;
    eax = esi;
    ecx = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 100; return; /* ret 96 */

loc_002185E4: ;
    ecx = edi + -1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00218624; /* jle: less or equal (signed <=) */

loc_002185ED: ;
    /* nop */

loc_002185F0: ;
    edi = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021864D; /* jle: less or equal (signed <=) */

loc_002185F9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00218607; /* jae: above or equal (unsigned >=) */

loc_002185FD: ;
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00218612;

loc_00218607: ;
    edx = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00218612: ;
    edx = esi + esi * 2;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(edx + ebx + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021866E; /* je: equal / zero */

loc_00218620: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002185F0; /* jl: less (signed <) */

loc_00218624: ;
    ecx = esp + 0x20;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00218635u); RECOMP_ABI_CALL(0x00227FC0u, sub_00227FC0); /* call 0x00227FC0 */

loc_00218635: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 100; return; /* ret 96 */

loc_0021864D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    esi = eax;
    if (CMP_G(_fas, _fbs)) goto loc_00218624; /* jg: greater (signed >) */

loc_00218653: ;
    eax = eax + eax * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ebx + 0x18;
    /* nop */

loc_00218660: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021866E; /* je: equal / zero */

loc_00218664: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00218660; /* jle: less or equal (signed <=) */

loc_0021866C: ;
    goto loc_00218624;

loc_0021866E: ;
    ecx = esp + 0x20;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0021867Fu); RECOMP_ABI_CALL(0x00227FC0u, sub_00227FC0); /* call 0x00227FC0 */

loc_0021867F: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 100; return; /* ret 96 */

}

/**
 * sub_002186A0
 * Original: 0x002186A0 - 0x002186BB (27 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002186A0(void)
{

loc_002186A0: ;
    edx = MEM32(ecx);
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx + ecx * 8);
    MEM32(eax) = esi;
    ecx = MEM32(edx + ecx * 8 + 4);
    MEM32(eax + 4) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002186C0
 * Original: 0x002186C0 - 0x00218746 (134 bytes, 65 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002186C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002186C0: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002186CD; /* jg: greater (signed >) */

loc_002186C7: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 12; return; /* ret 8 */

loc_002186CD: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    eax = edx;
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = MEM32(edi + eax * 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218740; /* je: equal / zero */

loc_002186E1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, ebp);
    if (CMP_LE(_fas, _fbs)) goto loc_0021873C; /* jle: less or equal (signed <=) */

loc_002186E9: ;
    /* nop */

loc_002186F0: ;
    ebp = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00218727; /* jle: less or equal (signed <=) */

loc_002186F9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00218707; /* jae: above or equal (unsigned >=) */

loc_002186FD: ;
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00218712;

loc_00218707: ;
    esi = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00218712: ;
    esi = MEM32(edi + eax * 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021873F; /* je: equal / zero */

loc_00218719: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002186F0; /* jl: less (signed <) */

loc_0021871D: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00218727: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    eax = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_0021873C; /* jg: greater (signed >) */

loc_0021872D: ;
    ecx = edi + ecx * 8;

loc_00218730: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021873F; /* je: equal / zero */

loc_00218734: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00218730; /* jle: less or equal (signed <=) */

loc_0021873C: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0021873F: ;
    POP32(esp, ebp);

loc_00218740: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00218750
 * Original: 0x00218750 - 0x002187DC (140 bytes, 68 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00218750: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0021875D; /* jg: greater (signed >) */

loc_00218757: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 16; return; /* ret 12 */

loc_0021875D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    ecx = eax + eax * 2;
    esi = MEM32(edi + ecx * 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002187D6; /* je: equal / zero */

loc_00218774: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, ebp);
    if (CMP_LE(_fas, _fbs)) goto loc_002187D2; /* jle: less or equal (signed <=) */

loc_0021877C: ;
    /* nop */

loc_00218780: ;
    ebp = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002187BA; /* jle: less or equal (signed <=) */

loc_00218789: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00218797; /* jae: above or equal (unsigned >=) */

loc_0021878D: ;
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002187A2;

loc_00218797: ;
    esi = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002187A2: ;
    esi = eax + eax * 2;
    esi = MEM32(edi + esi * 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002187D5; /* je: equal / zero */

loc_002187AC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00218780; /* jl: less (signed <) */

loc_002187B0: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_002187BA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    eax = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_002187D2; /* jg: greater (signed >) */

loc_002187C0: ;
    ecx = ecx + ecx * 2;
    ecx = edi + ecx * 4;

loc_002187C6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002187D5; /* je: equal / zero */

loc_002187CA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002187C6; /* jle: less or equal (signed <=) */

loc_002187D2: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002187D5: ;
    POP32(esp, ebp);

loc_002187D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002187E0
 * Original: 0x002187E0 - 0x00218A61 (641 bytes, 182 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002187E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002187E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246F9B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x268) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x268;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00218A4C; /* jle: less or equal (signed <=) */

loc_00218816: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esp + 0xE2) = LO16(eax);
    MEM16(esp + 0xE0) = LO16(ecx);
    eax = 2;
    goto loc_00218832;

loc_0021882E: ;
    eax = MEM32(esp + 0xC);

loc_00218832: ;
    edx = ZX16(MEM16(esp + eax * 2 + 0xDE));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ZX16(MEM16(esp + eax * 2 + 0xDE));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ecx;
    ebx = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = ecx + ecx * 2;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebp + 8);
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x18;
    edi = esp + 0x80;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x10) = edx;
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
    esi = ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(esp + 0x27C) = 0;
    if (CMP_G(_fas, _fbs)) goto loc_002189E5; /* jg: greater (signed >) */

loc_0021888A: ;
    goto loc_00218890;

loc_0021888C: ;
    eax = MEM32(ebp + 8);
    /* nop */

loc_00218890: ;
    ecx = edx + edx * 2;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(ecx + eax + 0x18);
    esi = ecx + eax + 0x18;
    ecx = MEM32(esp + 0x98);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002188BF; /* jae: above or equal (unsigned >=) */

loc_002188A9: ;
    /* nop */

loc_002188B0: ;
    edi = MEM32(esi + 0x60);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002188B0; /* jb: below (unsigned <) */

loc_002188BB: ;
    MEM32(esp + 0x10) = edx;

loc_002188BF: ;
    esi = ebx + ebx * 2;
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(esi + eax + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    esi = esi + eax + 0x18;
    if (CMP_BE(_fa, _fb)) goto loc_002188DC; /* jbe: below or equal (unsigned <=) */

loc_002188D1: ;
    edi = MEM32(esi + -96);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002188D1; /* ja: above (unsigned >) */

loc_002188DC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002189E5; /* jg: greater (signed >) */

loc_002188E4: ;
    edx = edx + edx * 2;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edx;
    ecx = 0x18;
    edi = esp + 0x20;
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
    ecx = ebx + ebx * 2;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(edx + 0x10) = ecx;
    ecx = MEM32(eax + 0x14);
    MEM32(edx + 0x14) = ecx;
    ecx = MEM32(eax + 0x18);
    MEM32(edx + 0x18) = ecx;
    ecx = MEM32(eax + 0x1C);
    MEM32(edx + 0x1C) = ecx;
    ecx = MEM32(eax + 0x38);
    MEM32(edx + 0x38) = ecx;
    ecx = MEM32(eax + 0x3C);
    MEM32(edx + 0x3C) = ecx;
    ecx = MEM32(eax + 0x40);
    MEM32(edx + 0x40) = ecx;
    ecx = MEM32(eax + 0x44);
    MEM32(edx + 0x44) = ecx;
    ecx = MEM32(eax + 0x48);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEM32(edx + 0x48) = ecx;
    ecx = MEM32(eax + 0x4C);
    esi = MEM32(esp + 0x10);
    MEM32(edx + 0x4C) = ecx;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x30);
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x2C);
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x14);
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x3C);
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x20;
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002189DBu); RECOMP_ABI_CALL(0x00227FC0u, sub_00227FC0); /* call 0x00227FC0 */

loc_002189DB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    edx = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0021888C; /* jle: less or equal (signed <=) */

loc_002189E5: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_GE(_fas, _fbs)) goto loc_00218A07; /* jge: greater or equal (signed >=) */

loc_002189F1: ;
    MEM16(esp + eax * 2 + 0xE0) = LO16(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esp + eax * 2 + 0xE0) = LO16(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = eax;

loc_00218A07: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00218A25; /* jge: greater or equal (signed >=) */

loc_00218A0F: ;
    MEM16(esp + eax * 2 + 0xE0) = LO16(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esp + eax * 2 + 0xE0) = LO16(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = eax;

loc_00218A25: ;
    ecx = esp + 0x80;
    MEM32(esp + 0x27C) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00218A3Cu); RECOMP_ABI_CALL(0x00227FC0u, sub_00227FC0); /* call 0x00227FC0 */

loc_00218A3C: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021882E; /* jne: not equal / not zero */

loc_00218A48: ;
    eax = MEM32(esp + 0x14);

loc_00218A4C: ;
    ecx = MEM32(esp + 0x274);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00218A70
 * Original: 0x00218A70 - 0x00218C1E (430 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00218A70: ;
    _fb = (uint32_t)(0x1C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1D0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00218C15; /* jle: less or equal (signed <=) */

loc_00218A8B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM16(esp + 0x48) = LO16(eax);
    MEM16(esp + 0x4A) = LO16(ecx);
    ebp = 2;
    /* nop */

loc_00218AA0: ;
    edx = ZX16(MEM16(esp + ebp * 2 + 0x46));
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ZX16(MEM16(esp + ebp * 2 + 0x46));
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = ecx;
    MEM32(esp + 0x14) = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = ecx + ecx * 4;
    ecx = MEM32(esp + 0x1DC);
    eax = ecx + eax * 4;
    ebx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x10);
    MEM32(esp + 0x30) = eax;
    eax = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x18) = ebp;
    edi = edx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x2C) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_00218BDA; /* jg: greater (signed >) */

loc_00218AF9: ;
    goto loc_00218B00;

loc_00218AFB: ;
    ebx = MEM32(esp + 0x20);
    /* nop */

loc_00218B00: ;
    eax = MEM32(esp + 0x1DC);
    ecx = edi + edi * 4;
    eax = eax + ecx * 4;
    /* nop */

loc_00218B10: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00218B21; /* jb: below (unsigned <) */

loc_00218B16: ;
    if (CMP_NE(_fa, _fb)) goto loc_00218B27; /* jne: not equal / not zero */

loc_00218B18: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00218B27; /* jae: above or equal (unsigned >=) */

loc_00218B21: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00218B10;

loc_00218B27: ;
    ecx = MEM32(esp + 0x1DC);
    eax = esi + esi * 4;
    eax = ecx + eax * 4;

loc_00218B34: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00218B45; /* ja: above (unsigned >) */

loc_00218B3A: ;
    if (CMP_NE(_fa, _fb)) goto loc_00218B4B; /* jne: not equal / not zero */

loc_00218B3C: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00218B4B; /* jbe: below or equal (unsigned <=) */

loc_00218B45: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00218B34;

loc_00218B4B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00218BDA; /* jg: greater (signed >) */

loc_00218B53: ;
    eax = MEM32(esp + 0x1DC);
    edx = edi + edi * 4;
    edx = eax + edx * 4;
    ecx = edx;
    ebx = MEM32(ecx);
    ebp = MEM32(ecx + 4);
    eax = MEM32(ecx + 8);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0x10);
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0x1DC);
    eax = esi + esi * 4;
    ecx = ecx + eax * 4;
    eax = MEM32(ecx);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = eax;
    eax = MEM32(ecx + 0x10);
    MEM32(edx + 0x10) = eax;
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x40);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(esp + 0x18);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx) = ebx;
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00218AFB; /* jle: less or equal (signed <=) */

loc_00218BDA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00218BEA; /* jge: greater or equal (signed >=) */

loc_00218BDE: ;
    MEM16(esp + ebp * 2 + 0x48) = LO16(esi);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esp + ebp * 2 + 0x48) = LO16(edx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00218BEA: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00218BFE; /* jge: greater or equal (signed >=) */

loc_00218BF2: ;
    MEM16(esp + ebp * 2 + 0x48) = LO16(eax);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esp + ebp * 2 + 0x48) = LO16(edi);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00218BFE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00218AA0; /* jne: not equal / not zero */

loc_00218C06: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00218C15: ;
    eax = ecx;
    _fb = (uint32_t)(0x1C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00218C20
 * Original: 0x00218C20 - 0x00218D79 (345 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00218C20: ;
    _fb = (uint32_t)(0x1B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1B8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x1C0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    MEM32(esp) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00218D72; /* jle: less or equal (signed <=) */

loc_00218C3B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1CC);
    MEM16(esp + 0x38) = LO16(ecx);
    MEM16(esp + 0x3A) = LO16(eax);
    ebp = 2;
    goto loc_00218C60;

    /* nop */
    /* nop */

loc_00218C60: ;
    esi = ZX16(MEM16(esp + ebp * 2 + 0x36));
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ZX16(MEM16(esp + ebp * 2 + 0x36));
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    edx = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = ecx + ecx * 2;
    ecx = edi + eax * 4;
    ebx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = ecx;
    eax = esi;
    ecx = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x1C) = ebp;
    if (CMP_G(_fas, _fbs)) goto loc_00218D3A; /* jg: greater (signed >) */

loc_00218CA0: ;
    ecx = esi + esi * 2;
    eax = edi + ecx * 4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00218CBB; /* jae: above or equal (unsigned >=) */

loc_00218CAA: ;
    /* nop */

loc_00218CB0: ;
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00218CB0; /* jb: below (unsigned <) */

loc_00218CBB: ;
    eax = edx + edx * 2;
    ecx = MEM32(edi + eax * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    eax = edi + eax * 4;
    if (CMP_BE(_fa, _fb)) goto loc_00218CD3; /* jbe: below or equal (unsigned <=) */

loc_00218CC8: ;
    ecx = MEM32(eax + -12);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00218CC8; /* ja: above (unsigned >) */

loc_00218CD3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00218D3A; /* jg: greater (signed >) */

loc_00218CD7: ;
    ecx = esi + esi * 2;
    edi = edi + ecx * 4;
    eax = edi;
    ebp = MEM32(eax);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x1CC);
    MEM32(esp + 0x24) = ecx;
    ecx = edx + edx * 2;
    ecx = eax + ecx * 4;
    eax = MEM32(ecx);
    MEM32(edi) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edi + 4) = eax;
    eax = MEM32(ecx + 8);
    MEM32(edi + 8) = eax;
    eax = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x1CC);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(ecx) = ebp;
    ebp = MEM32(esp + 0x1C);
    MEM32(ecx + 8) = eax;
    ecx = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00218CA0; /* jle: less or equal (signed <=) */

loc_00218D3A: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00218D4E; /* jge: greater or equal (signed >=) */

loc_00218D42: ;
    MEM16(esp + ebp * 2 + 0x38) = LO16(edx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esp + ebp * 2 + 0x38) = LO16(eax);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00218D4E: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00218D62; /* jge: greater or equal (signed >=) */

loc_00218D56: ;
    MEM16(esp + ebp * 2 + 0x38) = LO16(eax);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esp + ebp * 2 + 0x38) = LO16(esi);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00218D62: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00218C60; /* jne: not equal / not zero */

loc_00218D6A: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00218D72: ;
    _fb = (uint32_t)(0x1B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1B8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00218D80
 * Original: 0x00218D80 - 0x00218D97 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218D80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218D80: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = 1;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00218DA0
 * Original: 0x00218DA0 - 0x00218DD4 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218DA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x00218DABu); RECOMP_ABI_CALL(0x00222AC0u, sub_00222AC0); /* call 0x00222AC0 */

loc_00218DAB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = eax;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x18) = eax;
    eax = MEM32(0x3128D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3128D4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3128D4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00218DD2; /* jge: greater or equal (signed >=) */

loc_00218DC5: ;
    MEM32(eax * 4 + 0x311CD0) = esi;
    MEM32(0x3128D0) = MEM32(0x3128D0) + 1;
    _fa = (uint32_t)(MEM32(0x3128D0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00218DD2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00218DE0
 * Original: 0x00218DE0 - 0x00218E1B (59 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218DE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218E19; /* je: equal / zero */

loc_00218DEA: ;
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, ebx);
    ebx = 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x85BF18);
    if (CMP_EQ(_fa, _fb)) goto loc_00218E14; /* je: equal / zero */

loc_00218DFE: ;
    edi = edi;

loc_00218E00: ;
    ecx = edi;
    PUSH32(esp, 0x00218E07u); RECOMP_ABI_CALL(0x00222A10u, sub_00222A10); /* call 0x00222A10 */

loc_00218E07: ;
    PUSH32(esp, 0x00218E0Cu); RECOMP_ABI_CALL(0x00218230u, sub_00218230); /* call 0x00218230 */

loc_00218E0C: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00218E00; /* jne: not equal / not zero */

loc_00218E14: ;
    POP32(esp, edi);
    MEM32(esi + 0x18) = ebx;
    POP32(esp, ebx);

loc_00218E19: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00218E20
 * Original: 0x00218E20 - 0x00218EA2 (130 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218E20: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246FF8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x842E58);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = eax;
    ebx = ecx + 0x108;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    ecx = 0x18;
    esi = esp + 0x6C;
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
    MEM32(esp + 0xD4) = 0;
    PUSH32(esp, 0x00218E6Cu); RECOMP_ABI_CALL(0x00218580u, sub_00218580); /* call 0x00218580 */

loc_00218E6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00218E7F; /* jl: less (signed <) */

loc_00218E70: ;
    ebx = MEM32(ebx);
    ecx = eax + eax * 2;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00218E7Fu); RECOMP_ABI_CALL(0x002284C0u, sub_002284C0); /* call 0x002284C0 */

loc_00218E7F: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x74) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00218E90u); RECOMP_ABI_CALL(0x00227FC0u, sub_00227FC0); /* call 0x00227FC0 */

loc_00218E90: ;
    ecx = MEM32(esp + 0x6C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00218EB0
 * Original: 0x00218EB0 - 0x00218F8E (222 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00218EB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246FC6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x130;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x842E58);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    MEM32(esp + 0x28) = eax;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    ecx = 0x18;
    esi = esp + 0x70;
    ebx = ebp + 0x108;
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
    MEM32(esp + 0x1A8) = 0;
    PUSH32(esp, 0x00218F02u); RECOMP_ABI_CALL(0x00218580u, sub_00218580); /* call 0x00218580 */

loc_00218F02: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00218F61; /* jl: less (signed <) */

loc_00218F08: ;
    ecx = esp + 0x70;
    PUSH32(esp, 0x00218F11u); RECOMP_ABI_CALL(0x00209100u, sub_00209100); /* call 0x00209100 */

loc_00218F11: ;
    PUSH32(esp, 0);
    ecx = ebp + 4;
    PUSH32(esp, ecx);
    ecx = esp + 0x78;
    MEM8(esp + 0x150) = 1;
    PUSH32(esp, 0x00218F28u); RECOMP_ABI_CALL(0x00209810u, sub_00209810); /* call 0x00209810 */

loc_00218F28: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218F50; /* je: equal / zero */

loc_00218F2C: ;
    edx = MEM32(ebp + 0x118);
    eax = MEM32(ebp + 0x104);
    ebx = MEM32(ebx);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    ecx = esi + esi * 2;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00218F50u); RECOMP_ABI_CALL(0x00228720u, sub_00228720); /* call 0x00228720 */

loc_00218F50: ;
    ecx = esp + 0x70;
    MEM8(esp + 0x148) = 0;
    PUSH32(esp, 0x00218F61u); RECOMP_ABI_CALL(0x00209200u, sub_00209200); /* call 0x00209200 */

loc_00218F61: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x148) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00218F75u); RECOMP_ABI_CALL(0x00227FC0u, sub_00227FC0); /* call 0x00227FC0 */

loc_00218F75: ;
    ecx = MEM32(esp + 0x140);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x13C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x13C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00218F90
 * Original: 0x00218F90 - 0x00218FE9 (89 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00218F90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    edx = MEM32(esi + 0xC);
    ebp = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = ebp;
    ecx = edi;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x00218FB9u); RECOMP_ABI_CALL(0x00218750u, sub_00218750); /* call 0x00218750 */

loc_00218FB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00218FE0; /* jl: less (signed <) */

loc_00218FBD: ;
    edx = eax + eax * 2;
    eax = MEM32(edi);
    ecx = eax + edx * 4;
    edx = ecx;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esi) = eax;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 8) = edx;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00218FE0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00218FF0
 * Original: 0x00218FF0 - 0x0021902F (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218FF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021902D; /* je: equal / zero */

loc_00218FFA: ;
    MEM8(eax + 0xC) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00219009u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00219009: ;
    edx = MEM32(esi + 4);
    MEM32(edx + 8) = 0;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00219026; /* je: equal / zero */

loc_0021901D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00219023u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_00219023: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00219026: ;
    MEM32(esi + 4) = 0;

loc_0021902D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00219030
 * Original: 0x00219030 - 0x0021907F (79 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00219030: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi);
    if (CMP_LE(_fas, _fbs)) goto loc_0021904E; /* jle: less or equal (signed <=) */

loc_0021903D: ;
    PUSH32(esp, ebp);
    ebp = eax;

loc_00219040: ;
    ecx = edi;
    PUSH32(esp, 0x00219047u); RECOMP_ABI_CALL(0x00218FF0u, sub_00218FF0); /* call 0x00218FF0 */

loc_00219047: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00219040; /* jne: not equal / not zero */

loc_0021904D: ;
    POP32(esp, ebp);

loc_0021904E: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00219075; /* je: equal / zero */

loc_00219058: ;
    ecx = MEM32(eax + -4);
    edi = eax + -4;
    PUSH32(esp, 0x209040);
    PUSH32(esp, ecx);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021906Cu); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_0021906C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00219072u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00219072: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00219075: ;
    POP32(esp, edi);
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00219080
 * Original: 0x00219080 - 0x002190F4 (116 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219080: ;
    eax = MEM32(0x842E58);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002190F2; /* je: equal / zero */

loc_0021908E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002190C0; /* je: equal / zero */

loc_00219094: ;
    eax = MEM32(0x842E4C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_002190C0; /* js: sign (negative) */

loc_0021909C: ;
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x134);
    _fb = (uint32_t)(0x842E78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x842E78;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 1;
    /* nop */

loc_002190B0: ;
    ecx = esi;
    PUSH32(esp, 0x002190B7u); RECOMP_ABI_CALL(0x00218E20u, sub_00218E20); /* call 0x00218E20 */

loc_002190B7: ;
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x134;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002190B0; /* jne: not equal / not zero */

loc_002190C0: ;
    eax = MEM32(0x842E4C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x842E58) = ebx;
    if ((_fas < 0)) goto loc_002190F0; /* js: sign (negative) */

loc_002190CE: ;
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x134);
    _fb = (uint32_t)(0x842E78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x842E78;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 1;
    /* nop */

loc_002190E0: ;
    ecx = esi;
    PUSH32(esp, 0x002190E7u); RECOMP_ABI_CALL(0x00218EB0u, sub_00218EB0); /* call 0x00218EB0 */

loc_002190E7: ;
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x134;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002190E0; /* jne: not equal / not zero */

loc_002190F0: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002190F2: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00219100
 * Original: 0x00219100 - 0x002191F5 (245 bytes, 91 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00219100: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x842E4C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x10) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_002191CE; /* jle: less or equal (signed <=) */

loc_00219121: ;
    ebx = 0x842E7C;
    goto loc_00219130;

    /* nop */
    /* nop */

loc_00219130: ;
    PUSH32(esp, 0x311CC0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0021913Bu); RECOMP_ABI_CALL(0x00238B40u, sub_00238B40); /* call 0x00238B40 */

loc_0021913B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = ebx; /* cmove */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00219145: ;
    SET_LO8(edx, MEM8(ecx + 0x311CC4));
    MEM8(esp + ecx + 0x18) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00219145; /* jne: not equal / not zero */

loc_00219154: ;
    ecx = 0x311CC0;
    esi = ecx + 1;
    /* nop */

loc_00219160: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00219160; /* jne: not equal / not zero */

loc_00219167: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    /* nop */

loc_00219170: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00219170; /* jne: not equal / not zero */

loc_00219177: ;
    edi = esp + 0x18;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00219180: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00219180; /* jne: not equal / not zero */

loc_00219188: ;
    ecx = eax;
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
    SET_LO8(eax, MEM8(ebx + 0x118));
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
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
    if (CMP_EQ(_fa, _fb)) goto loc_002191BA; /* je: equal / zero */

loc_002191A0: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002191AFu); RECOMP_ABI_CALL(0x00218240u, sub_00218240); /* call 0x00218240 */

loc_002191AF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002191E8; /* je: equal / zero */

loc_002191B6: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002191BA: ;
    eax = MEM32(0x842E4C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x134;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00219130; /* jl: less (signed <) */

loc_002191CE: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002191E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00219200
 * Original: 0x00219200 - 0x002192B0 (176 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219200: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246FDB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x842E58);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = eax;
    ebx = ecx + 0x108;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    ecx = 0x18;
    esi = esp + 0x6C;
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
    MEM32(esp + 0x134) = 0;
    PUSH32(esp, 0x0021924Fu); RECOMP_ABI_CALL(0x00218580u, sub_00218580); /* call 0x00218580 */

loc_0021924F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00219284; /* jl: less (signed <) */

loc_00219255: ;
    PUSH32(esp, esi);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00219262u); RECOMP_ABI_CALL(0x002180D0u, sub_002180D0); /* call 0x002180D0 */

loc_00219262: ;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0021926Cu); RECOMP_ABI_CALL(0x00218100u, sub_00218100); /* call 0x00218100 */

loc_0021926C: ;
    ecx = esp + 0x6C;
    PUSH32(esp, 0x00219275u); RECOMP_ABI_CALL(0x00227FC0u, sub_00227FC0); /* call 0x00227FC0 */

loc_00219275: ;
    ebx = MEM32(ebx);
    ecx = esi + esi * 2;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00219284u); RECOMP_ABI_CALL(0x00228150u, sub_00228150); /* call 0x00228150 */

loc_00219284: ;
    ecx = esp + 0xC;
    MEM32(esp + 0xD4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00219298u); RECOMP_ABI_CALL(0x00227FC0u, sub_00227FC0); /* call 0x00227FC0 */

loc_00219298: ;
    ecx = MEM32(esp + 0xCC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002192B0
 * Original: 0x002192B0 - 0x00219360 (176 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002192B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002192B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246FDB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x842E58);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = eax;
    ebx = ecx + 0x108;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    ecx = 0x18;
    esi = esp + 0x6C;
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
    MEM32(esp + 0x134) = 0;
    PUSH32(esp, 0x002192FFu); RECOMP_ABI_CALL(0x00218580u, sub_00218580); /* call 0x00218580 */

loc_002192FF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00219334; /* jl: less (signed <) */

loc_00219305: ;
    PUSH32(esp, esi);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00219312u); RECOMP_ABI_CALL(0x002180D0u, sub_002180D0); /* call 0x002180D0 */

loc_00219312: ;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0021931Cu); RECOMP_ABI_CALL(0x00218100u, sub_00218100); /* call 0x00218100 */

loc_0021931C: ;
    ecx = esp + 0x6C;
    PUSH32(esp, 0x00219325u); RECOMP_ABI_CALL(0x00227FC0u, sub_00227FC0); /* call 0x00227FC0 */

loc_00219325: ;
    ebx = MEM32(ebx);
    ecx = esi + esi * 2;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00219334u); RECOMP_ABI_CALL(0x002281B0u, sub_002281B0); /* call 0x002281B0 */

loc_00219334: ;
    ecx = esp + 0xC;
    MEM32(esp + 0xD4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00219348u); RECOMP_ABI_CALL(0x00227FC0u, sub_00227FC0); /* call 0x00227FC0 */

loc_00219348: ;
    ecx = MEM32(esp + 0xCC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00219360
 * Original: 0x00219360 - 0x00219393 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219360: ;
    eax = MEM32(0x842E4C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00219392; /* js: sign (negative) */

loc_00219368: ;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x134);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x842E78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x842E78;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 1;
    goto loc_00219380;

    /* nop */

loc_00219380: ;
    ecx = esi;
    PUSH32(esp, 0x00219387u); RECOMP_ABI_CALL(0x00219200u, sub_00219200); /* call 0x00219200 */

loc_00219387: ;
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x134;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00219380; /* jne: not equal / not zero */

loc_00219390: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00219392: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002193A0
 * Original: 0x002193A0 - 0x002193F6 (86 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002193A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002193A0: ;
    eax = MEM32(0x842E60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x842E58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x842E58) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002193C8; /* je: equal / zero */

loc_002193AD: ;
    PUSH32(esp, 0x002193B2u); RECOMP_ABI_CALL(0x00219360u, sub_00219360); /* call 0x00219360 */

loc_002193B2: ;
    ecx = MEM32(0x842E58);
    MEM32(0x311CC8) = 0xFFFFFFFFu;
    MEM32(0x842E60) = ecx;

loc_002193C8: ;
    eax = MEM32(0x842E4C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_002193F5; /* js: sign (negative) */

loc_002193D0: ;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x134);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x842E78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x842E78;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 1;

loc_002193E3: ;
    ecx = esi;
    PUSH32(esp, 0x002193EAu); RECOMP_ABI_CALL(0x002192B0u, sub_002192B0); /* call 0x002192B0 */

loc_002193EA: ;
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x134;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002193E3; /* jne: not equal / not zero */

loc_002193F3: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002193F5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00219400
 * Original: 0x00219400 - 0x0021944B (75 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219400: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0xFFFFFFFFu;
    MEM32(esi + 0x104) = ebx;
    SET_LO8(eax, 1);
    MEM32(esi + 0x108) = ebx;
    MEM32(esi + 0x10C) = ebx;
    MEM32(esi + 0x110) = ebx;
    MEM8(esi + 0x114) = LO8(ebx);
    MEM8(esi + 0x115) = LO8(eax);
    ecx = esi + 0x120;
    MEM8(esi + 0x11C) = LO8(eax);
    PUSH32(esp, 0x00219443u); RECOMP_ABI_CALL(0x00218D80u, sub_00218D80); /* call 0x00218D80 */

loc_00219443: ;
    MEM8(esi + 4) = LO8(ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00219450
 * Original: 0x00219450 - 0x00219466 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219450(void)
{

loc_00219450: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x120;
    PUSH32(esp, 0x0021945Eu); RECOMP_ABI_CALL(0x00219030u, sub_00219030); /* call 0x00219030 */

loc_0021945E: ;
    MEM32(esi) = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00219470
 * Original: 0x00219470 - 0x002194C7 (87 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219470: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0021948Cu); RECOMP_ABI_CALL(0x002186C0u, sub_002186C0); /* call 0x002186C0 */

loc_0021948C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002194BC; /* jl: less (signed <) */

loc_00219490: ;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0021949Du); RECOMP_ABI_CALL(0x002186A0u, sub_002186A0); /* call 0x002186A0 */

loc_0021949D: ;
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x002194A7u); RECOMP_ABI_CALL(0x00218F90u, sub_00218F90); /* call 0x00218F90 */

loc_002194A7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002194BC; /* je: equal / zero */

loc_002194AB: ;
    ecx = MEM32(esi + 0x10);
    MEM32(edi + 0x10) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_002194BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002194D0
 * Original: 0x002194D0 - 0x002195C3 (243 bytes, 65 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002194D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002194D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x246FF8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x84);
    edx = MEM32(0x842E58);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx;
    ecx = MEM32(esp + 0x90);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x3C) = edx;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    ecx = 0x18;
    esi = esp + 0x84;
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
    ecx = ebp + 0x108;
    MEM32(esp + 0xEC) = ebx;
    PUSH32(esp, 0x00219541u); RECOMP_ABI_CALL(0x00218580u, sub_00218580); /* call 0x00218580 */

loc_00219541: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebp + 0x120;
    PUSH32(esp, 0x00219551u); RECOMP_ABI_CALL(0x00219470u, sub_00219470); /* call 0x00219470 */

loc_00219551: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00219592; /* je: equal / zero */

loc_00219555: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00219592; /* jle: less or equal (signed <=) */

loc_0021955D: ;
    PUSH32(esp, 0x00219562u); RECOMP_ABI_CALL(0x00218210u, sub_00218210); /* call 0x00218210 */

loc_00219562: ;
    ebp = MEM32(ebp + 0x104);
    edx = MEM32(esp + 0x10);
    ebx = eax;
    eax = MEM32(esp + 0x14);
    MEM32(ebx) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ebx + 4) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(ebx + 0xC) = ecx;
    ecx = ebx;
    MEM32(ebx + 8) = edx;
    MEM32(ebx + 0x10) = eax;
    MEM32(ebx + 0x1C) = ebp;
    PUSH32(esp, 0x00219592u); RECOMP_ABI_CALL(0x00218180u, sub_00218180); /* call 0x00218180 */

loc_00219592: ;
    ecx = esp + 0x24;
    MEM32(esp + 0x8C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x002195A6u); RECOMP_ABI_CALL(0x00227FC0u, sub_00227FC0); /* call 0x00227FC0 */

loc_002195A6: ;
    ecx = MEM32(esp + 0x84);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002195D0
 * Original: 0x002195D0 - 0x002195DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002195D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002195D0: ;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x120;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00219470(); return; /* tail jmp 0x00219470 */

}

/**
 * sub_002195E0
 * Original: 0x002195E0 - 0x00219669 (137 bytes, 44 insns)
 * CC: cdecl, 24 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002195E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002195E0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x247018);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00219646; /* jne: not equal / not zero */

loc_00219607: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00219646; /* jge: greater or equal (signed >=) */

loc_0021960F: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax + eax * 2;
    eax = MEM32(esi);
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00219623u); RECOMP_ABI_CALL(0x00218100u, sub_00218100); /* call 0x00218100 */

loc_00219623: ;
    edx = MEM32(esi + 8);
    SET_LO8(ecx, MEM8(esi + 0xD));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(esi + 8) = edx;
    eax = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00219646; /* je: equal / zero */

loc_00219633: ;
    SET_LO8(ecx, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00219646; /* jne: not equal / not zero */

loc_0021963A: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00219643u); RECOMP_ABI_CALL(0x002187E0u, sub_002187E0); /* call 0x002187E0 */

loc_00219643: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00219646: ;
    ecx = esp + 0x14;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00219657u); RECOMP_ABI_CALL(0x00227FC0u, sub_00227FC0); /* call 0x00227FC0 */

loc_00219657: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 100; return; /* ret 96 */

}

/**
 * sub_00219670
 * Original: 0x00219670 - 0x002196B5 (69 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219670: ;
    SET_LO8(eax, MEM8(ecx + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002196B2; /* jne: not equal / not zero */

loc_00219677: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002196B2; /* jge: greater or equal (signed >=) */

loc_0021967F: ;
    edx = MEM32(ecx);
    eax = edx + eax * 8;
    edx = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 8);
    SET_LO8(edx, MEM8(ecx + 0xD));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM32(ecx + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002196B2; /* je: equal / zero */

loc_0021969F: ;
    SET_LO8(edx, MEM8(ecx + 0xC));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002196B2; /* jne: not equal / not zero */

loc_002196A6: ;
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002196AFu); RECOMP_ABI_CALL(0x001EC6E0u, sub_001EC6E0); /* call 0x001EC6E0 */

loc_002196AF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002196B2: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002196C0
 * Original: 0x002196C0 - 0x0021970F (79 bytes, 30 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002196C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002196C0: ;
    SET_LO8(eax, MEM8(ecx + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021970C; /* jne: not equal / not zero */

loc_002196C7: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021970C; /* jge: greater or equal (signed >=) */

loc_002196CF: ;
    edx = MEM32(ecx);
    eax = eax + eax * 2;
    eax = edx + eax * 4;
    edx = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = edx;
    eax = MEM32(ecx + 8);
    SET_LO8(edx, MEM8(ecx + 0xD));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM32(ecx + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0021970C; /* je: equal / zero */

loc_002196F9: ;
    SET_LO8(edx, MEM8(ecx + 0xC));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021970C; /* jne: not equal / not zero */

loc_00219700: ;
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00219709u); RECOMP_ABI_CALL(0x00218C20u, sub_00218C20); /* call 0x00218C20 */

loc_00219709: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021970C: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00219710
 * Original: 0x00219710 - 0x00219733 (35 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00219710: ;
    ecx = MEM32(0x842E4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00219732; /* je: equal / zero */

loc_0021971A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x842E4C) = ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x134);
    _fb = (uint32_t)(0x842E78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x842E78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00219450(); return; /* tail jmp 0x00219450 */

loc_00219732: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00219740
 * Original: 0x00219740 - 0x002197B3 (115 bytes, 42 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00219740: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    MEM32(esi + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002197AE; /* jle: less or equal (signed <=) */

loc_00219753: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x302194);
    ecx = edi * 8 + 4;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00219768u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00219768: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00219789; /* je: equal / zero */

loc_0021976F: ;
    PUSH32(esp, 0x209040);
    PUSH32(esp, 0x209440);
    PUSH32(esp, edi);
    ebp = eax + 4;
    PUSH32(esp, 8);
    PUSH32(esp, ebp);
    MEM32(eax) = edi;
    PUSH32(esp, 0x00219787u); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_00219787: ;
    goto loc_0021978B;

loc_00219789: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021978B: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021979E; /* jne: not equal / not zero */

loc_00219792: ;
    MEM32(esi) = ebp;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = 0;

loc_0021979E: ;
    SET_LO8(eax, MEM8(esi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esi + 0xC) = 0;
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_002197AE; /* je: equal / zero */

loc_002197AA: ;
    MEM8(esi + 0xD) = 0;

loc_002197AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002197C0
 * Original: 0x002197C0 - 0x0021985B (155 bytes, 63 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002197C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002197C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3021DC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    MEM32(edi) = eax;
    PUSH32(esp, 0x002197D9u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_002197D9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002197F1; /* je: equal / zero */

loc_002197E0: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM8(eax + 0xC) = LO8(ebx);
    MEM8(eax + 0xD) = 1;
    goto loc_002197F3;

loc_002197F1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002197F3: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0x3021B8);
    ecx = esi + esi * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM32(edi + 4) = eax;
    PUSH32(esp, 0x0021980Du); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0021980D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00219832; /* je: equal / zero */

loc_00219814: ;
    edx = esi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021982E; /* jl: less (signed <) */

loc_0021981B: ;
    ecx = eax + 8;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* nop */

loc_00219820: ;
    MEM32(ecx + -8) = ebx;
    MEM32(ecx + -4) = ebx;
    MEM32(ecx) = ebx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00219820; /* jne: not equal / not zero */

loc_0021982E: ;
    ecx = eax;
    goto loc_00219834;

loc_00219832: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00219834: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xC), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00219844; /* jne: not equal / not zero */

loc_0021983C: ;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = ebx;

loc_00219844: ;
    edx = MEM32(edi + 4);
    MEM8(edx + 0xC) = LO8(ebx);
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(MEM8(eax + 0xD)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xD), LO8(ebx) (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00219856; /* je: equal / zero */

loc_00219853: ;
    MEM8(eax + 0xD) = LO8(ebx);

loc_00219856: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00219860
 * Original: 0x00219860 - 0x002198A9 (73 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219860: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    SET_LO8(ecx, MEM8(eax + 0xD));
    SET_LO8(ebx, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00219889; /* je: equal / zero */

loc_00219870: ;
    SET_LO8(ecx, MEM8(eax + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM8(eax + 0xD) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00219889; /* jne: not equal / not zero */

loc_0021987A: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00219886u); RECOMP_ABI_CALL(0x00218C20u, sub_00218C20); /* call 0x00218C20 */

loc_00219886: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00219889: ;
    eax = MEM32(esi + 4);
    SET_LO8(ecx, MEM8(eax + 0xD));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002198A0; /* je: equal / zero */

loc_00219893: ;
    MEM8(eax + 0xD) = 0;
    eax = MEM32(esi + 4);
    POP32(esp, esi);
    MEM8(eax + 0xC) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002198A0: ;
    ecx = MEM32(esi + 4);
    POP32(esp, esi);
    MEM8(ecx + 0xC) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002198B0
 * Original: 0x002198B0 - 0x002198D8 (40 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002198B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002198B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    MEM32(edi) = edx;
    MEM32(edi + 4) = esi;
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0x002198D3u); RECOMP_ABI_CALL(0x002196C0u, sub_002196C0); /* call 0x002196C0 */

loc_002198D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002198E0
 * Original: 0x002198E0 - 0x00219917 (55 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002198E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002198E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xD));
    SET_LO8(ebx, 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00219906; /* je: equal / zero */

loc_002198ED: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esi + 0xD) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00219906; /* jne: not equal / not zero */

loc_002198F7: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00219903u); RECOMP_ABI_CALL(0x001EC6E0u, sub_001EC6E0); /* call 0x001EC6E0 */

loc_00219903: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00219906: ;
    SET_LO8(eax, MEM8(esi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esi + 0xC) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00219914; /* je: equal / zero */

loc_00219910: ;
    MEM8(esi + 0xD) = 0;

loc_00219914: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00219920
 * Original: 0x00219920 - 0x00219940 (32 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219920: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0021993E; /* jle: less or equal (signed <=) */

loc_0021992A: ;
    PUSH32(esp, edi);
    edi = eax;
    /* nop */

loc_00219930: ;
    ecx = esi;
    PUSH32(esp, 0x00219937u); RECOMP_ABI_CALL(0x00219860u, sub_00219860); /* call 0x00219860 */

loc_00219937: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00219930; /* jne: not equal / not zero */

loc_0021993D: ;
    POP32(esp, edi);

loc_0021993E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00219940
 * Original: 0x00219940 - 0x00219B13 (467 bytes, 146 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00219940: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x247046);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    eax = 0x258C;
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, 0x0021995Fu); RECOMP_ABI_CALL(0x00237830u, sub_00237830); /* call 0x00237830 */

loc_0021995F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x227FC0);
    PUSH32(esp, 0x227FD0);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x60);
    eax = esp + 0x2C;
    ebx = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0x00219981u); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_00219981: ;
    esi = MEM32(esp + 0x25AC);
    edx = MEM32(esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esp + 0x25A4) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00219998u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00219995u); } /* indirect call */
    }

loc_00219998: ;
    ebp = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x002199A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021999Eu); } /* indirect call */
    }

loc_002199A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00219ADA; /* jle: less or equal (signed <=) */

loc_002199A9: ;
    ebp = esp + 0x1C;
    /* nop */

loc_002199B0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1C) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x002199C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002199C3u); } /* indirect call */
    }

loc_002199C6: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF8040) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0xFF8040 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00219A04; /* jne: not equal / not zero */

loc_002199D0: ;
    ecx = MEM32(ebx + 0x118);
    edx = MEM32(ebx + 0x104);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x002199E8u); RECOMP_ABI_CALL(0x00228720u, sub_00228720); /* call 0x00228720 */

loc_002199E8: ;
    eax = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x60;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002199F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002199F0u); } /* indirect call */
    }

loc_002199F3: ;
    edx = MEM32(esi);
    ecx = esi;
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x002199FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002199F9u); } /* indirect call */
    }

loc_002199FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ebx = MEM32(esp + 0x10);
    if (CMP_G(_fas, _fbs)) goto loc_002199B0; /* jg: greater (signed >) */

loc_00219A04: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00219ADA; /* je: equal / zero */

loc_00219A0C: ;
    eax = edi + edi * 2;
    PUSH32(esp, 0x302200);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00219A22u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00219A22: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00219A43; /* je: equal / zero */

loc_00219A29: ;
    PUSH32(esp, 0x227FC0);
    PUSH32(esp, 0x227FD0);
    PUSH32(esp, edi);
    esi = eax + 4;
    PUSH32(esp, 0x60);
    PUSH32(esp, esi);
    MEM32(eax) = edi;
    PUSH32(esp, 0x00219A41u); RECOMP_ABI_CALL(0x0023792Fu, sub_0023792F); /* call 0x0023792F */

loc_00219A41: ;
    goto loc_00219A45;

loc_00219A43: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00219A45: ;
    SET_LO8(eax, MEM8(ebx + 0x114));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebp = ebx + 0x108;
    if (CMP_NE(_fa, _fb)) goto loc_00219A62; /* jne: not equal / not zero */

loc_00219A55: ;
    MEM32(ebp) = esi;
    MEM32(ebp + 4) = edi;
    MEM32(ebp + 8) = 0;

loc_00219A62: ;
    MEM8(ebx + 0x114) = 0;
    SET_LO8(eax, MEM8(ebp + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00219A74; /* je: equal / zero */

loc_00219A70: ;
    MEM8(ebp + 0xD) = 0;

loc_00219A74: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00219AA7; /* jle: less or equal (signed <=) */

loc_00219A78: ;
    ebx = esp + 0x1C;
    MEM32(esp + 0x18) = edi;

loc_00219A80: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    ecx = 0x18;
    esi = ebx;
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
    ecx = ebp;
    PUSH32(esp, 0x00219A95u); RECOMP_ABI_CALL(0x002195E0u, sub_002195E0); /* call 0x002195E0 */

loc_00219A95: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x60;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_00219A80; /* jne: not equal / not zero */

loc_00219AA3: ;
    ebx = MEM32(esp + 0x10);

loc_00219AA7: ;
    _fa = (uint32_t)(MEM8(ebp + 0xD)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xD), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00219AC8; /* je: equal / zero */

loc_00219AAD: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ebp + 0xD) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00219AC8; /* jne: not equal / not zero */

loc_00219AB8: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00219AC5u); RECOMP_ABI_CALL(0x002187E0u, sub_002187E0); /* call 0x002187E0 */

loc_00219AC5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00219AC8: ;
    SET_LO8(eax, MEM8(ebp + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00219AD3; /* je: equal / zero */

loc_00219ACF: ;
    MEM8(ebp + 0xD) = 0;

loc_00219AD3: ;
    MEM8(ebx + 0x114) = 1;

loc_00219ADA: ;
    PUSH32(esp, 0x227FC0);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x60);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEM32(esp + 0x25B4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00219AF8u); RECOMP_ABI_CALL(0x002378CFu, sub_002378CF); /* call 0x002378CF */

loc_00219AF8: ;
    ecx = MEM32(esp + 0x259C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2598) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2598;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00219B20
 * Original: 0x00219B20 - 0x00219B60 (64 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00219B20: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x842E4C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x134);
    _fb = (uint32_t)(0x842E78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x842E78;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00219B43: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00219B5B; /* jl: less (signed <) */

loc_00219B47: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00219B50u); RECOMP_ABI_CALL(0x002194D0u, sub_002194D0); /* call 0x002194D0 */

loc_00219B50: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x134;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00219B43; /* je: equal / zero */

loc_00219B5B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00219B60
 * Original: 0x00219B60 - 0x00219BA3 (67 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219B60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x842E4C);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00219B97; /* js: sign (negative) */

loc_00219B6C: ;
    ebx = MEM32(esp + 0x10);
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x134);
    _fb = (uint32_t)(0x842E78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x842E78;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_00219B80: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00219B88u); RECOMP_ABI_CALL(0x002195D0u, sub_002195D0); /* call 0x002195D0 */

loc_00219B88: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00219B9D; /* je: equal / zero */

loc_00219B8C: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x134;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00219B80; /* jge: greater or equal (signed >=) */

loc_00219B97: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00219B9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00219BB0
 * Original: 0x00219BB0 - 0x00219BFC (76 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219BB0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00219BD0u); RECOMP_ABI_CALL(0x002186C0u, sub_002186C0); /* call 0x002186C0 */

loc_00219BD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00219BF4; /* jge: greater or equal (signed >=) */

loc_00219BD4: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00219BE3u); RECOMP_ABI_CALL(0x002197C0u, sub_002197C0); /* call 0x002197C0 */

loc_00219BE3: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00219BF4u); RECOMP_ABI_CALL(0x00219670u, sub_00219670); /* call 0x00219670 */

loc_00219BF4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00219C00
 * Original: 0x00219C00 - 0x00219C3C (60 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219C00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00219C19u); RECOMP_ABI_CALL(0x002186C0u, sub_002186C0); /* call 0x002186C0 */

loc_00219C19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00219C34; /* jl: less (signed <) */

loc_00219C1D: ;
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00219C2Au); RECOMP_ABI_CALL(0x002186A0u, sub_002186A0); /* call 0x002186A0 */

loc_00219C2A: ;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00219C34u); RECOMP_ABI_CALL(0x002198B0u, sub_002198B0); /* call 0x002198B0 */

loc_00219C34: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00219C40
 * Original: 0x00219C40 - 0x00219F45 (773 bytes, 251 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00219C40: ;
    _fb = (uint32_t)(0x54C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    esi = MEM32(ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x302248);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + esi * 4;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = ebp;
    PUSH32(esp, 0x00219C67u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00219C67: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00219C9A; /* je: equal / zero */

loc_00219C6E: ;
    edx = esi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00219C94; /* jl: less (signed <) */

loc_00219C75: ;
    ecx = eax + 8;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* nop */

loc_00219C80: ;
    MEM32(ecx + -8) = edi;
    MEM32(ecx + -4) = edi;
    MEM32(ecx) = edi;
    MEM32(ecx + 4) = edi;
    MEM32(ecx + 8) = edi;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00219C80; /* jne: not equal / not zero */

loc_00219C94: ;
    MEM32(esp + 0x14) = eax;
    goto loc_00219C9E;

loc_00219C9A: ;
    MEM32(esp + 0x14) = edi;

loc_00219C9E: ;
    eax = MEM32(ebp);
    MEM32(esp + 0x24) = eax;
    eax = eax + eax * 2 + 2;
    PUSH32(esp, 0x302224);
    ebx = eax * 4;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00219CBDu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_00219CBD: ;
    esi = MEM32(esp + 0x56C);
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esp + 0x24) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00219CD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00219CD3u); } /* indirect call */
    }

loc_00219CD6: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00219CE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00219CE0u); } /* indirect call */
    }

loc_00219CE3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esp + 0x25C;
    PUSH32(esp, 0x80);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x5C) = ebx;
    MEM32(esp + 0x60) = ebx;
    PUSH32(esp, 0x00219D03u); RECOMP_ABI_CALL(0x001F2A90u, sub_001F2A90); /* call 0x001F2A90 */

loc_00219D03: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00219D0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00219D0Au); } /* indirect call */
    }

loc_00219D0D: ;
    MEM32(esp + 0x18) = eax;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), ebx (32-bit) */
    MEM32(esp + 0x20) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00219E2F; /* jle: less or equal (signed <=) */

loc_00219D1E: ;
    ebx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00219D30;

    /* nop */
    edi = edi;

loc_00219D30: ;
    edx = MEM32(ebp + 0x104);
    ebp = MEM32(esp + 0x18);
    eax = MEM32(ebx + -8);
    ecx = MEM32(ebx + -4);
    esi = MEM32(ebx);
    MEM32(esp + 0x48) = ebp;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x38) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x24) (32-bit) */
    MEM32(esp + 0x18) = ebp;
    ebp = MEM32(esp + 0x48);
    MEM32(esp + 0x3C) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00219D81; /* jge: greater or equal (signed >=) */

loc_00219D5E: ;
    eax = MEM32(esp + 0x14);
    edx = edi + edi * 4;
    eax = eax + edx * 4;
    edx = MEM32(esp + 0x3C);
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00219D81: ;
    PUSH32(esp, 0x7F);
    eax = esp + 0x260;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00219D91u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00219D91: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0x7F);
    if (CMP_GE(_fas, _fbs)) goto loc_00219DCE; /* jge: greater or equal (signed >=) */

loc_00219D9A: ;
    ecx = esp + 0x260;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00219DA8u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_00219DA8: ;
    MEM32(esp + eax * 4 + 0x68) = 1;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x60);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + eax * 4 + 0x45C) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x10) = eax;
    goto loc_00219E0B;

loc_00219DCE: ;
    edx = esp + 0x260;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00219DDCu); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00219DDC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00219DE9; /* jge: greater or equal (signed >=) */

loc_00219DE3: ;
    eax = esp + 0x58;
    goto loc_00219DED;

loc_00219DE9: ;
    eax = esp + eax * 4 + 0x5C;

loc_00219DED: ;
    ebp = MEM32(eax);
    PUSH32(esp, 0x7F);
    eax = esp + 0x260;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00219E00u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00219E00: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00219E0B; /* jl: less (signed <) */

loc_00219E07: ;
    MEM32(esp + eax * 4 + 0x5C) = ebp;

loc_00219E0B: ;
    eax = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x28);
    ecx = MEM32(ebp);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00219D30; /* jl: less (signed <) */

loc_00219E26: ;
    esi = MEM32(esp + 0x560);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00219E2F: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00219E3Au); RECOMP_ABI_CALL(0x00218A70u, sub_00218A70); /* call 0x00218A70 */

loc_00219E3A: ;
    edx = MEM32(ebp + 0x104);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edi = ebp + 0x120;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00219E56u); RECOMP_ABI_CALL(0x00219740u, sub_00219740); /* call 0x00219740 */

loc_00219E56: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00219EA3; /* jle: less or equal (signed <=) */

loc_00219E5E: ;
    edi = edi;

loc_00219E60: ;
    eax = MEM32(esp + ebx * 4 + 0x45C);
    PUSH32(esp, 0x7F);
    ecx = esp + 0x260;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00219E77u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_00219E77: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00219E84; /* jge: greater or equal (signed >=) */

loc_00219E7E: ;
    eax = esp + 0x58;
    goto loc_00219E88;

loc_00219E84: ;
    eax = esp + eax * 4 + 0x5C;

loc_00219E88: ;
    edx = MEM32(eax);
    eax = MEM32(esp + ebx * 4 + 0x45C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00219E9Au); RECOMP_ABI_CALL(0x00219BB0u, sub_00219BB0); /* call 0x00219BB0 */

loc_00219E9A: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00219E60; /* jl: less (signed <) */

loc_00219EA3: ;
    ecx = edi;
    PUSH32(esp, 0x00219EAAu); RECOMP_ABI_CALL(0x002198E0u, sub_002198E0); /* call 0x002198E0 */

loc_00219EAA: ;
    eax = MEM32(ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00219F05; /* jle: less or equal (signed <=) */

loc_00219EB3: ;
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x10) = eax;
    goto loc_00219EC0;

    /* nop */

loc_00219EC0: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0x10);
    MEM32(esp + 0x34) = edx;
    edx = esp + 0x2C;
    MEM32(esp + 0x3C) = ecx;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x00219EF2u); RECOMP_ABI_CALL(0x00219C00u, sub_00219C00); /* call 0x00219C00 */

loc_00219EF2: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00219EC0; /* jl: less (signed <) */

loc_00219F05: ;
    ecx = edi;
    PUSH32(esp, 0x00219F0Cu); RECOMP_ABI_CALL(0x00219920u, sub_00219920); /* call 0x00219920 */

loc_00219F0C: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00219F1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00219F17u); } /* indirect call */
    }

loc_00219F1A: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00219F24u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00219F24: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00219F3C; /* je: equal / zero */

loc_00219F33: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00219F39u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_00219F39: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00219F3C: ;
    _fb = (uint32_t)(0x54C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00219F50
 * Original: 0x00219F50 - 0x0021A095 (325 bytes, 86 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00219F50: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x247063);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0021A07A; /* jge: greater or equal (signed >=) */

loc_00219F7E: ;
    eax = MEM32(esp + 0x154);
    PUSH32(esp, 0x78);
    PUSH32(esp, eax);
    esi = ebp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00219F91u); RECOMP_ABI_CALL(0x00237FC0u, sub_00237FC0); /* call 0x00237FC0 */

loc_00219F91: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    PUSH32(esp, 0x00219F9Du); RECOMP_ABI_CALL(0x00209100u, sub_00209100); /* call 0x00209100 */

loc_00219F9D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = esp + 0x1C;
    MEM32(esp + 0x154) = ebx;
    PUSH32(esp, 0x00219FAFu); RECOMP_ABI_CALL(0x00209810u, sub_00209810); /* call 0x00209810 */

loc_00219FAF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021A066; /* je: equal / zero */

loc_00219FB7: ;
    ecx = MEM32(0x85BF18);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00219FC7u); RECOMP_ABI_CALL(0x00222710u, sub_00222710); /* call 0x00222710 */

loc_00219FC7: ;
    edx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    MEM32(ebp + 0x104) = eax;
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00219FE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00219FE0u); } /* indirect call */
    }

loc_00219FE3: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    MEM32(ebp) = eax;
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0021A000u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00219FFDu); } /* indirect call */
    }

loc_0021A000: ;
    eax = MEM32(esp + 0x10);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(ebp + 0x118) = eax;
    PUSH32(esp, 0x0021A016u); RECOMP_ABI_CALL(0x00219C40u, sub_00219C40); /* call 0x00219C40 */

loc_0021A016: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0021A022u); RECOMP_ABI_CALL(0x00219940u, sub_00219940); /* call 0x00219940 */

loc_0021A022: ;
    MEM32(esp + 0xFC) = 0x400F92A5;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp;
    ecx = 0x18;
    esi = esp + 0x144;
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
    ecx = ebp + 0x108;
    MEM8(esp + 0x1AC) = 1;
    PUSH32(esp, 0x0021A053u); RECOMP_ABI_CALL(0x00218580u, sub_00218580); /* call 0x00218580 */

loc_0021A053: ;
    ecx = esp + 0xE4;
    MEM8(esp + 0x14C) = LO8(ebx);
    PUSH32(esp, 0x0021A066u); RECOMP_ABI_CALL(0x00227FC0u, sub_00227FC0); /* call 0x00227FC0 */

loc_0021A066: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x14C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0021A07Au); RECOMP_ABI_CALL(0x00209200u, sub_00209200); /* call 0x00209200 */

loc_0021A07A: ;
    ecx = MEM32(esp + 0x144);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021A0A0
 * Original: 0x0021A0A0 - 0x0021A213 (371 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A0A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021A0A0: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x842E4C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 8) = ebx;
    MEM32(esp + 0xC) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0021A1D0; /* jle: less or equal (signed <=) */

loc_0021A0C1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = 0x842E7C;
    goto loc_0021A0D0;

    /* nop */

loc_0021A0D0: ;
    PUSH32(esp, 0x311CC0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0021A0DBu); RECOMP_ABI_CALL(0x00238B40u, sub_00238B40); /* call 0x00238B40 */

loc_0021A0DB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = ebp; /* cmove */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021A0E5: ;
    SET_LO8(edx, MEM8(ecx + 0x311CC4));
    MEM8(esp + ecx + 0x18) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A0E5; /* jne: not equal / not zero */

loc_0021A0F4: ;
    ecx = 0x311CC0;
    esi = ecx + 1;
    /* nop */

loc_0021A100: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A100; /* jne: not equal / not zero */

loc_0021A107: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    /* nop */

loc_0021A110: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A110; /* jne: not equal / not zero */

loc_0021A117: ;
    edi = esp + 0x18;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0021A120: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A120; /* jne: not equal / not zero */

loc_0021A128: ;
    ecx = eax;
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
    SET_LO8(eax, MEM8(ebp + 0x118));
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
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
    if (CMP_EQ(_fa, _fb)) goto loc_0021A1B6; /* je: equal / zero */

loc_0021A140: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0021A14Fu); RECOMP_ABI_CALL(0x00218240u, sub_00218240); /* call 0x00218240 */

loc_0021A14F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A181; /* jne: not equal / not zero */

loc_0021A156: ;
    ecx = MEM32(esp + 0x124);
    edx = MEM32(esp + 0x120);
    eax = MEM32(esp + 0x11C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0021A17Au); RECOMP_ABI_CALL(0x002182F0u, sub_002182F0); /* call 0x002182F0 */

loc_0021A17A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021A1B6; /* je: equal / zero */

loc_0021A181: ;
    ecx = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(esp + 0x120));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0021A1B6; /* jne: not equal / not zero */

loc_0021A195: ;
    SET_LO8(eax, MEM8(esp + 0x124));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021A1B6; /* je: equal / zero */

loc_0021A1A0: ;
    esi = ebp + -4;
    ecx = esi;
    PUSH32(esp, 0x0021A1AAu); RECOMP_ABI_CALL(0x00219450u, sub_00219450); /* call 0x00219450 */

loc_0021A1AA: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0021A1B6u); RECOMP_ABI_CALL(0x00219F50u, sub_00219F50); /* call 0x00219F50 */

loc_0021A1B6: ;
    eax = MEM32(0x842E4C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x134;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021A0D0; /* jl: less (signed <) */

loc_0021A1CA: ;
    esi = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0021A1D0: ;
    SET_LO8(eax, MEM8(esp + 0x118));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021A1FF; /* je: equal / zero */

loc_0021A1DB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0021A1FF; /* jbe: below or equal (unsigned <=) */

loc_0021A1DF: ;
    PUSH32(esp, 0x30226C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20000);
    PUSH32(esp, 0x0021A1F0u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_0021A1F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x842E70) = eax;
    MEM8(0x842E64) = 1;

loc_0021A1FF: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0021A220
 * Original: 0x0021A220 - 0x0021A5D2 (946 bytes, 283 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021A220: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x842E68);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x160);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x84DC80);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0021A25F; /* jne: not equal / not zero */

loc_0021A23E: ;
    edi = edi;

loc_0021A240: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0021A2A1; /* je: equal / zero */

loc_0021A24A: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x160);
    _fa = (uint32_t)(MEM32(edx + 0x84DC80)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x84DC80), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0021A240; /* je: equal / zero */

loc_0021A25A: ;
    MEM32(0x842E68) = eax;

loc_0021A25F: ;
    SET_LO8(ecx, MEM8(0x842E65));
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x160);
    _fb = (uint32_t)(0x84DB78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x84DB78)) >> 32) & 1);
    esi = esi + 0x84DB78;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0021A289; /* je: equal / zero */

loc_0021A277: ;
    ecx = esi;
    PUSH32(esp, 0x0021A27Eu); RECOMP_ABI_CALL(0x00217C80u, sub_00217C80); /* call 0x00217C80 */

loc_0021A27E: ;
    eax = MEM32(0x842E68);
    SET_LO8(ecx, MEM8(0x842E65));

loc_0021A289: ;
    edx = MEM32(esi + 0x108);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0021A5C6; /* ja: above (unsigned >) */

loc_0021A299: ;
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(edx * 4 + 0x21A5D4); /* switch: 7 entries, 6 targets */
    if (_jt == 0x0021A2CAu) goto loc_0021A2CA;
    if (_jt == 0x0021A3B6u) goto loc_0021A3B6;
    if (_jt == 0x0021A455u) goto loc_0021A455;
    if (_jt == 0x0021A471u) goto loc_0021A471;
    if (_jt == 0x0021A50Bu) goto loc_0021A50B;
    if (_jt == 0x0021A57Au) goto loc_0021A57A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0021A2A1: ;
    MEM32(0x842E68) = eax;
    eax = MEM32(0x842E70);
    PUSH32(esp, eax);
    MEM8(0x842E64) = LO8(ebx);
    MEM8(0x842E65) = LO8(ebx);
    PUSH32(esp, 0x0021A2BDu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_0021A2BD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(0x842E70) = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0021A2CA: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x134);
    PUSH32(esp, 0x60000080);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    _fb = (uint32_t)(0x842E7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x842E7C)) >> 32) & 1);
    ecx = ecx + 0x842E7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0021A2EEu); RECOMP_ABI_CALL(0x0022A7A4u, sub_0022A7A4); /* call 0x0022A7A4 */

loc_0021A2EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x10C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0021A441; /* je: equal / zero */

loc_0021A2FD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x60000080);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x40000000);
    edx = esi + 4;
    PUSH32(esp, edx);
    MEM32(esi + 0x13C) = ebx;
    MEM32(esi + 0x144) = esi;
    MEM32(esi + 0x120) = ebx;
    MEM32(esi + 0x124) = ebx;
    PUSH32(esp, 0x0021A32Eu); RECOMP_ABI_CALL(0x0022A7A4u, sub_0022A7A4); /* call 0x0022A7A4 */

loc_0021A32E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x110) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0021A441; /* je: equal / zero */

loc_0021A33D: ;
    edx = MEM32(esi + 0x118);
    PUSH32(esp, ebx);
    ecx = esp + 0x10;
    _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x1FF)) >> 32) & 1);
    edx = edx + 0x1FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFFFFE00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x0021A360u); RECOMP_ABI_CALL(0x00229F5Bu, sub_00229F5B); /* call 0x00229F5B */

loc_0021A360: ;
    eax = MEM32(esi + 0x110);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021A36Cu); RECOMP_ABI_CALL(0x00229ED7u, sub_00229ED7); /* call 0x00229ED7 */

loc_0021A36C: ;
    ecx = MEM32(0x842E70);
    MEM32(esi + 0x130) = ecx;
    edi = MEM32(esi + 0x130);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x150) = ebx;
    MEM32(esi + 0x158) = esi;
    MEM32(esi + 0x128) = ebx;
    MEM32(esi + 0x12C) = ebx;
    ecx = 0x8000;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    MEM32(esi + 0x108) = 2;
    PUSH32(esp, 0x0021A3B2u); RECOMP_ABI_CALL(0x002292D1u, sub_002292D1); /* call 0x002292D1 */

loc_0021A3B2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0021A3B6: ;
    eax = MEM32(esi + 0x120);
    edx = MEM32(esi + 0x118);
    edi = MEM32(esi + 0x124);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x11C);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(edi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20000);
    PUSH32(esp, 0x0021A3DFu); RECOMP_ABI_CALL(0x00217D50u, sub_00217D50); /* call 0x00217D50 */

loc_0021A3DF: ;
    edx = MEM32(esi + 0x130);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x217E50);
    _fb = (uint32_t)(0x7FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x7FF)) >> 32) & 1);
    eax = eax + 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x134;
    PUSH32(esp, ecx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFF800u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021A40Cu); RECOMP_ABI_CALL(0x0022A1E8u, sub_0022A1E8); /* call 0x0022A1E8 */

loc_0021A40C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0021A427; /* je: equal / zero */

loc_0021A410: ;
    POP32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    MEM32(esi + 0x108) = 3;
    PUSH32(esp, 0x0021A423u); RECOMP_ABI_CALL(0x002292D1u, sub_002292D1); /* call 0x002292D1 */

loc_0021A423: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0021A427: ;
    PUSH32(esp, 0x0021A42Cu); RECOMP_ABI_CALL(0x0022B150u, sub_0022B150); /* call 0x0022B150 */

loc_0021A42C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0021A410; /* je: equal / zero */

loc_0021A433: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x26 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0021A5C5; /* je: equal / zero */

loc_0021A43C: ;
    PUSH32(esp, 0x0021A441u); RECOMP_ABI_CALL(0x00209760u, sub_00209760); /* call 0x00209760 */

loc_0021A441: ;
    ecx = esi;
    PUSH32(esp, 0x0021A448u); RECOMP_ABI_CALL(0x00217C80u, sub_00217C80); /* call 0x00217C80 */

loc_0021A448: ;
    POP32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0021A451u); RECOMP_ABI_CALL(0x002292D1u, sub_002292D1); /* call 0x002292D1 */

loc_0021A451: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0021A455: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0021A5C5; /* je: equal / zero */

loc_0021A45D: ;
    ecx = esi;
    PUSH32(esp, 0x0021A464u); RECOMP_ABI_CALL(0x00217C80u, sub_00217C80); /* call 0x00217C80 */

loc_0021A464: ;
    POP32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0021A46Du); RECOMP_ABI_CALL(0x002292D1u, sub_002292D1); /* call 0x002292D1 */

loc_0021A46D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0021A471: ;
    edx = MEM32(esi + 0x128);
    ecx = MEM32(esi + 0x118);
    eax = MEM32(esi + 0x12C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x11C);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20000);
    PUSH32(esp, 0x0021A49Au); RECOMP_ABI_CALL(0x00217D50u, sub_00217D50); /* call 0x00217D50 */

loc_0021A49A: ;
    edx = MEM32(esi + 0x130);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x217EB0);
    _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1FF)) >> 32) & 1);
    eax = eax + 0x1FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x148;
    PUSH32(esp, ecx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFE00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x110);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021A4C7u); RECOMP_ABI_CALL(0x0022A239u, sub_0022A239); /* call 0x0022A239 */

loc_0021A4C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0021A4E2; /* je: equal / zero */

loc_0021A4CB: ;
    POP32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    MEM32(esi + 0x108) = 5;
    PUSH32(esp, 0x0021A4DEu); RECOMP_ABI_CALL(0x002292D1u, sub_002292D1); /* call 0x002292D1 */

loc_0021A4DE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0021A4E2: ;
    PUSH32(esp, 0x0021A4E7u); RECOMP_ABI_CALL(0x0022B150u, sub_0022B150); /* call 0x0022B150 */

loc_0021A4E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0021A4CB; /* je: equal / zero */

loc_0021A4EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x26 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0021A5C5; /* je: equal / zero */

loc_0021A4F7: ;
    ecx = esi;
    PUSH32(esp, 0x0021A4FEu); RECOMP_ABI_CALL(0x00217C80u, sub_00217C80); /* call 0x00217C80 */

loc_0021A4FE: ;
    POP32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0021A507u); RECOMP_ABI_CALL(0x002292D1u, sub_002292D1); /* call 0x002292D1 */

loc_0021A507: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0021A50B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0021A5C5; /* jne: not equal / not zero */

loc_0021A513: ;
    ecx = MEM32(esi + 0x10C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0021A51Fu); RECOMP_ABI_CALL(0x0022AC11u, sub_0022AC11); /* call 0x0022AC11 */

loc_0021A51F: ;
    edx = MEM32(esi + 0x110);
    PUSH32(esp, edx);
    MEM32(esi + 0x10C) = ebx;
    PUSH32(esp, 0x0021A531u); RECOMP_ABI_CALL(0x0022AC11u, sub_0022AC11); /* call 0x0022AC11 */

loc_0021A531: ;
    eax = esi + 0x118;
    PUSH32(esp, eax);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi + 0x110) = ebx;
    PUSH32(esp, 0x0021A547u); RECOMP_ABI_CALL(0x00218070u, sub_00218070); /* call 0x00218070 */

loc_0021A547: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0021A441; /* je: equal / zero */

loc_0021A552: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021A558u); RECOMP_ABI_CALL(0x00217F30u, sub_00217F30); /* call 0x00217F30 */

loc_0021A558: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0021A441; /* je: equal / zero */

loc_0021A563: ;
    POP32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    MEM32(esi + 0x108) = 7;
    PUSH32(esp, 0x0021A576u); RECOMP_ABI_CALL(0x002292D1u, sub_002292D1); /* call 0x002292D1 */

loc_0021A576: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0021A57A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0021A5BC; /* jne: not equal / not zero */

loc_0021A57E: ;
    _fa = (uint32_t)(MEM8(esi + 0x104)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x104), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0021A5B0; /* je: equal / zero */

loc_0021A586: ;
    ecx = MEM32(esi);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x134);
    _fb = (uint32_t)(0x842E78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x842E78)) >> 32) & 1);
    ecx = ecx + 0x842E78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0021A599u); RECOMP_ABI_CALL(0x00219450u, sub_00219450); /* call 0x00219450 */

loc_0021A599: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x134);
    _fb = (uint32_t)(0x842E78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x842E78)) >> 32) & 1);
    ecx = ecx + 0x842E78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0021A5B0u); RECOMP_ABI_CALL(0x00219F50u, sub_00219F50); /* call 0x00219F50 */

loc_0021A5B0: ;
    ecx = esi;
    PUSH32(esp, 0x0021A5B7u); RECOMP_ABI_CALL(0x00217C80u, sub_00217C80); /* call 0x00217C80 */

loc_0021A5B7: ;
    eax = MEM32(0x842E68);

loc_0021A5BC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x842E68) = eax;

loc_0021A5C5: ;
    POP32(esp, edi);

loc_0021A5C6: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0021A5CEu); RECOMP_ABI_CALL(0x002292D1u, sub_002292D1); /* call 0x002292D1 */

loc_0021A5CE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021A5F0
 * Original: 0x0021A5F0 - 0x0021A72C (316 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021A5F0: ;
    SET_LO8(eax, MEM8(0x842E54));
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x80);
    if (CMP_EQ(_fa, _fb)) goto loc_0021A61E; /* je: equal / zero */

loc_0021A604: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x311CC4);
    eax = esp + 0xC;
    PUSH32(esp, 0x2E845C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021A619u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0021A619: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0021A65A;

loc_0021A61E: ;
    SET_LO8(eax, MEM8(esp + 0x84));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021A643; /* je: equal / zero */

loc_0021A629: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x311CC0);
    ecx = esp + 0xC;
    PUSH32(esp, 0x2E845C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0021A63Eu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_0021A63E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0021A65A;

loc_0021A643: ;
    edx = esp + 4;
    eax = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0021A650;

    /* nop */

loc_0021A650: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A650; /* jne: not equal / not zero */

loc_0021A65A: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021A664u); RECOMP_ABI_CALL(0x002099C0u, sub_002099C0); /* call 0x002099C0 */

loc_0021A664: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A68E; /* jne: not equal / not zero */

loc_0021A66B: ;
    PUSH32(esp, 0x78);
    eax = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021A678u); RECOMP_ABI_CALL(0x00237FC0u, sub_00237FC0); /* call 0x00237FC0 */

loc_0021A678: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0021A682u); RECOMP_ABI_CALL(0x002099C0u, sub_002099C0); /* call 0x002099C0 */

loc_0021A682: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A68E; /* jne: not equal / not zero */

loc_0021A689: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0021A68E: ;
    ecx = MEM32(0x842E4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A6C9; /* jne: not equal / not zero */

loc_0021A698: ;
    edx = MEM32(0x3128D0);
    eax = 0x847B78;

loc_0021A6A3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3128D4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x3128D4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021A6BF; /* jge: greater or equal (signed >=) */

loc_0021A6AB: ;
    MEM32(edx * 4 + 0x311CD0) = eax;
    edx = MEM32(0x3128D0);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x3128D0) = edx;

loc_0021A6BF: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x84DB78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x84DB78 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021A6A3; /* jl: less (signed <) */

loc_0021A6C9: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x134);
    edx = esp + 4;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x842E78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x842E78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0021A6DFu); RECOMP_ABI_CALL(0x00219F50u, sub_00219F50); /* call 0x00219F50 */

loc_0021A6DF: ;
    eax = MEM32(0x842E4C);
    SET_LO8(edx, MEM8(esp + 0x88));
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x134);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x842E4C) = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ecx + 0x842F94) = LO8(edx);
    if ((_fas < 0)) goto loc_0021A725; /* js: sign (negative) */

loc_0021A702: ;
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x134);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x842E78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x842E78;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 1;

loc_0021A714: ;
    ecx = esi;
    PUSH32(esp, 0x0021A71Bu); RECOMP_ABI_CALL(0x00218EB0u, sub_00218EB0); /* call 0x00218EB0 */

loc_0021A71B: ;
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x134;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0021A714; /* jne: not equal / not zero */

loc_0021A724: ;
    POP32(esp, edi);

loc_0021A725: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0021A730
 * Original: 0x0021A730 - 0x0021A74F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021A730: ;
    SET_LO8(eax, MEM8(0x842E64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x842E65) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0021A74E; /* je: equal / zero */

loc_0021A740: ;
    PUSH32(esp, 0x0021A745u); RECOMP_ABI_CALL(0x0021A220u, sub_0021A220); /* call 0x0021A220 */

loc_0021A745: ;
    SET_LO8(eax, MEM8(0x842E64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A740; /* jne: not equal / not zero */

loc_0021A74E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0021A750
 * Original: 0x0021A750 - 0x0021A858 (264 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021A750: ;
    eax = MEM32(0x85BB20);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + 1));
    PUSH32(esp, ebx);
    ebx = MEM32(0x85BB1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(eax + -2));
    edi = 0x10;
    /* nop */

loc_0021A770: ;
    ecx = edx;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0021A78A; /* jne: not equal / not zero */

loc_0021A77A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x10;
    SET_LO8(edx, MEM8(eax + -2));

loc_0021A78A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A797; /* jne: not equal / not zero */

loc_0021A78F: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(ebx) = LO8(ecx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0021A770;

loc_0021A797: ;
    ecx = edx;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0021A7B1; /* jne: not equal / not zero */

loc_0021A7A1: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x10;
    SET_LO8(edx, MEM8(eax + -2));

loc_0021A7B1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A7FC; /* jne: not equal / not zero */

loc_0021A7B5: ;
    ecx = edx;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0021A7CF; /* jne: not equal / not zero */

loc_0021A7BF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x10;
    SET_LO8(edx, MEM8(eax + -2));

loc_0021A7CF: ;
    esi = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0021A7EB; /* jne: not equal / not zero */

loc_0021A7DB: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x10;
    SET_LO8(edx, MEM8(eax + -2));

loc_0021A7EB: ;
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ZX8(MEM8(eax));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi | 0xFFFFFF00u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0021A82C;

loc_0021A7FC: ;
    esi = ZX8(MEM8(eax));
    ecx = ZX8(MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ecx;
    ebp = ebp & 0xF0;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x100;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp << 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi | ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A82C; /* jne: not equal / not zero */

loc_0021A823: ;
    ecx = ZX8(MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021A846; /* je: equal / zero */

loc_0021A82B: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0021A82C: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021A770; /* je: equal / zero */

loc_0021A836: ;
    ebp = ecx;

loc_0021A838: ;
    SET_LO8(ecx, MEM8(esi));
    MEM8(ebx) = LO8(ecx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0021A838; /* jne: not equal / not zero */

loc_0021A841: ;
    goto loc_0021A770;

loc_0021A846: ;
    eax = MEM32(0x85BB1C);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    MEM32(0x85BB28) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021A860
 * Original: 0x0021A860 - 0x0021A894 (52 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021A860: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x85BB30) = eax;
    MEM32(0x85BB28) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x85BB20) = ecx;
    MEM32(0x85BB2C) = edx;
    MEM32(0x85BB1C) = eax;
    PUSH32(esp, 0x0021A88Eu); RECOMP_ABI_CALL(0x0021A750u, sub_0021A750); /* call 0x0021A750 */

loc_0021A88E: ;
    eax = MEM32(0x85BB28);
    esp += 4; return; /* ret */

}

/**
 * sub_0021A8A0
 * Original: 0x0021A8A0 - 0x0021AA59 (441 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A8A0(void)
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

loc_0021A8A0: ;
    PUSH32(esp, ecx);
    xmm6 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    xmm6.f[0] = xmm6.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm6.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_0021AA56; /* jle: less or equal (signed <=) */

loc_0021A8C4: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0021A8E0;

    /* nop */
    edi = edi;

loc_0021A8E0: ;
    xmm4 = XMM_SCALAR(MEMF(esi + -8)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(ebx); /* subss */
    xmm5 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(ebx + 4); /* subss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ebx); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 4); /* subss */
    xmm1 = xmm5; /* movaps */
    xmm2 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0021A940; /* ja: above (unsigned >) (xmm1.f[0] vs xmm6.f[0]) */

loc_0021A91C: ;
    xmm2 = xmm0; /* movaps */
    xmm7 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm7.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0021A940; /* ja: above (unsigned >) (xmm2.f[0] vs xmm6.f[0]) */

loc_0021A933: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    goto loc_0021AA3B;

loc_0021A940: ;
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm6.f[0]; /* subss */
    xmm3 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC880); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    if ((_fca >= _fcb)) goto loc_0021AA33; /* jae: above or equal (unsigned >=) (xmm4.f[0] vs xmm3.f[0]) */

loc_0021A9A5: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3 = xmm5; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] / xmm2.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0021A9E1; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_0021A9D8: ;
    xmm0 = xmm3; /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm1 = xmm0; /* movaps */

loc_0021A9E1: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0021AA33; /* ja: above (unsigned >) (xmm3.f[0] vs xmm0.f[0]) */

loc_0021A9EE: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0021AA33; /* ja: above (unsigned >) (xmm4.f[0] vs xmm1.f[0]) */

loc_0021A9F3: ;
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0021AA18; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm4.f[0]) */

loc_0021A9F8: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(edx + ecx * 4) = xmm3.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0021AA0D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0021AA02: ;
    MEMF(edx + ecx * 4 + 4) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0021AA46;

loc_0021AA0D: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0021AA40;

loc_0021AA18: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0021AA46; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0021AA1D: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC8A8)); /* movss */
    MEMF(edx + ecx * 4) = xmm0.f[0]; /* movss */
    MEMF(edx + ecx * 4 + 4) = xmm1.f[0]; /* movss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0021AA46;

loc_0021AA33: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC8A8)); /* movss */

loc_0021AA3B: ;
    MEMF(edx + ecx * 4) = xmm0.f[0]; /* movss */

loc_0021AA40: ;
    MEMF(edx + ecx * 4 + 4) = xmm0.f[0]; /* movss */

loc_0021AA46: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021A8E0; /* jl: less (signed <) */

loc_0021AA54: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0021AA56: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0021AA60
 * Original: 0x0021AA60 - 0x0021AA7B (27 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021AA60(void)
{

loc_0021AA60: ;
    eax = MEM32(esp + 4);
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
 * sub_0021AA80
 * Original: 0x0021AA80 - 0x0021AA9E (30 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021AA80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021AA80: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
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
 * sub_0021AAA0
 * Original: 0x0021AAA0 - 0x0021AAC4 (36 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021AAA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021AAA0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(edx + 8) = esi;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021AAD0
 * Original: 0x0021AAD0 - 0x0021AAEE (30 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021AAD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021AAD0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
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
 * sub_0021AAF0
 * Original: 0x0021AAF0 - 0x0021AB0E (30 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021AAF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021AAF0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
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
 * sub_0021AB10
 * Original: 0x0021AB10 - 0x0021AB2E (30 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021AB10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021AB10: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x58;
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
 * sub_0021AB30
 * Original: 0x0021AB30 - 0x0021AB37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021AB30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0021AB30: ;
    fp_push(MEMF(ecx + 0xDC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0021AB40
 * Original: 0x0021AB40 - 0x0021AB47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021AB40(void)
{

loc_0021AB40: ;
    SET_LO8(eax, MEM8(ecx + 0xE0));
    esp += 4; return; /* ret */

}

/**
 * sub_0021AB50
 * Original: 0x0021AB50 - 0x0021AB61 (17 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021AB50(void)
{

loc_0021AB50: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0xE4) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021AB70
 * Original: 0x0021AB70 - 0x0021AB90 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021AB70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021AB70: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}
