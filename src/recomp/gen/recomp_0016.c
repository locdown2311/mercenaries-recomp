/**
 * Mercenaries - Recompiled code chunk 16
 * Functions: 250 (0x000CDBD0 - 0x000D8990)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000CDBD0
 * Original: 0x000CDBD0 - 0x000CDC19 (73 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000CDBD0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0x1190)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1190), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CDC11; /* jle: less or equal (signed <=) */

loc_000CDBE1: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x000CDBEBu); RECOMP_ABI_CALL(0x0008ECE0u, sub_0008ECE0); /* call 0x0008ECE0 */

loc_000CDBEB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x000CDBF8u); RECOMP_ABI_CALL(0x000CAE90u, sub_000CAE90); /* call 0x000CAE90 */

loc_000CDBF8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CDC11; /* je: equal / zero */

loc_000CDBFC: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0xAC4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CDC11; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0xAC4)) */

loc_000CDC09: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000CDC11: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CDC20
 * Original: 0x000CDC20 - 0x000CDD63 (323 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CDC20: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x2E8628);
    esi = ecx;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x000CDC38u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CDC38: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x000CDC4Bu); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_000CDC4B: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x1794) = ebx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x1798) = ebx;
    MEM32(esi + 0x179C) = ebx;
    MEM32(esi + 0x17A0) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_000CDD25; /* jle: less or equal (signed <=) */

loc_000CDC71: ;
    PUSH32(esp, edi);

loc_000CDC72: ;
    MEM8(esp + 0x20) = LO8(ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xF;
    edi = esp + 0x21;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, ebp);
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    edx = esp + 0x24;
    PUSH32(esp, 0x2E861C);
    PUSH32(esp, edx);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    PUSH32(esp, 0x000CDC96u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000CDC96: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x000CDCA4u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CDCA4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x000CDCB7u); RECOMP_ABI_CALL(0x00122060u, sub_00122060); /* call 0x00122060 */

loc_000CDCB7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CDD17; /* jne: not equal / not zero */

loc_000CDCBB: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000CDCC8u); RECOMP_ABI_CALL(0x000CDA60u, sub_000CDA60); /* call 0x000CDA60 */

loc_000CDCC8: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000CDCD4u); RECOMP_ABI_CALL(0x000C8BF0u, sub_000C8BF0); /* call 0x000C8BF0 */

loc_000CDCD4: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x24;
    PUSH32(esp, 0x2E860C);
    PUSH32(esp, ecx);
    edi = eax;
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0x000CDCEAu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000CDCEA: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CDCF4u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CDCF4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x000CDD07u); RECOMP_ABI_CALL(0x00122060u, sub_00122060); /* call 0x00122060 */

loc_000CDD07: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), ebx (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CDD17u); RECOMP_ABI_CALL(0x000C8B30u, sub_000C8B30); /* call 0x000C8B30 */

loc_000CDD17: ;
    eax = MEM32(esp + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CDC72; /* jl: less (signed <) */

loc_000CDD24: ;
    POP32(esp, edi);

loc_000CDD25: ;
    PUSH32(esp, 0x2E85FC);
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x000CDD33u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CDD33: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x000CDD46u); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_000CDD46: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), ebx (32-bit) */
    eax = MEM32(esi + 0x24);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x19BC) = LO8(edx);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 0xE378) = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CDD70
 * Original: 0x000CDD70 - 0x000CDEE9 (377 bytes, 105 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDD70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CDD70: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000CDD7Du); RECOMP_ABI_CALL(0x000C9BE0u, sub_000C9BE0); /* call 0x000C9BE0 */

loc_000CDD7D: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esi + 0x194) = ebx;
    MEM8(esi + 0x190) = 1;
    PUSH32(esp, 0x000CDD93u); RECOMP_ABI_CALL(0x000CBAF0u, sub_000CBAF0); /* call 0x000CBAF0 */

loc_000CDD93: ;
    ecx = esi;
    MEM8(esi + 0x3AD) = LO8(ebx);
    MEM8(esi + 0x3AC) = LO8(ebx);
    PUSH32(esp, 0x000CDDA6u); RECOMP_ABI_CALL(0x000CB040u, sub_000CB040); /* call 0x000CB040 */

loc_000CDDA6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x198) = eax;
    MEM32(esi + 0x19C) = 2;
    MEM32(esi + 0x3A4) = ebx;
    MEMF(esi + 0x3B0) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x3C0) = LO8(ebx);
    MEMF(esi + 0x3C4) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x3C9) = LO8(ebx);
    MEM8(esi + 0x3C8) = LO8(ebx);
    MEM8(esi + 0x3CA) = LO8(ebx);
    MEM8(esi + 0x3B5) = LO8(ebx);
    MEM8(esi + 0x3B4) = LO8(ebx);
    if (CMP_A(_fa, _fb)) goto loc_000CDE30; /* ja: above (unsigned >) */

loc_000CDDF8: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xCDEEC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000CDDFFu) goto loc_000CDDFF;
    if (_jt == 0x000CDE06u) goto loc_000CDE06;
    if (_jt == 0x000CDE12u) goto loc_000CDE12;
    if (_jt == 0x000CDE1Eu) goto loc_000CDE1E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000CDDFF: ;
    PUSH32(esp, 0x2E8684);
    goto loc_000CDE23;

loc_000CDE06: ;
    PUSH32(esp, 0x2E866C);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    goto loc_000CDE28;

loc_000CDE12: ;
    PUSH32(esp, 0x2E8654);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    goto loc_000CDE28;

loc_000CDE1E: ;
    PUSH32(esp, 0x2E863C);

loc_000CDE23: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);

loc_000CDE28: ;
    PUSH32(esp, 0x000CDE2Du); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000CDE2D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CDE30: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CDE3Au); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CDE3A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi + 0x3B8;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x000CDE4Fu); RECOMP_ABI_CALL(0x00122000u, sub_00122000); /* call 0x00122000 */

loc_000CDE4F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CDE5A; /* jne: not equal / not zero */

loc_000CDE53: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi) = xmm0.f[0]; /* movss */

loc_000CDE5A: ;
    _fa = (uint32_t)(MEM32(esi + 0x198)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x198), ebx (32-bit) */
    edx = MEM32(edi);
    MEM32(esi + 0x3BC) = edx;
    MEM32(esi + 0x3CC) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_000CDEE2; /* jle: less or equal (signed <=) */

loc_000CDE70: ;
    PUSH32(esp, ebp);
    ebp = 0x50;
    goto loc_000CDE80;

    /* nop */
    /* nop */

loc_000CDE80: ;
    edi = 2;

loc_000CDE85: ;
    ecx = MEM32(esi + 0x24);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CDE93u); RECOMP_ABI_CALL(0x000C8580u, sub_000C8580); /* call 0x000C8580 */

loc_000CDE93: ;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, 0x2E86A8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CDEA8u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000CDEA8: ;
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CDEB2u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CDEB2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x000CDEC2u); RECOMP_ABI_CALL(0x00121E00u, sub_00121E00); /* call 0x00121E00 */

loc_000CDEC2: ;
    ecx = MEM32(esi + 0x24);
    MEM8(ecx + ebp + 0xDAF8) = 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x28;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xE (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CDE85; /* jle: less or equal (signed <=) */

loc_000CDED6: ;
    eax = MEM32(esi + 0x198);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CDE80; /* jl: less (signed <) */

loc_000CDEE1: ;
    POP32(esp, ebp);

loc_000CDEE2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CDF00
 * Original: 0x000CDF00 - 0x000CDF7B (123 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDF00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CDF00: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x198);
    ecx = MEM32(esi + 0x19C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD);
    edx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    eax = eax + ecx + -2;
    edi = eax + eax * 4;
    edi = edi << 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(edx + edi + 0xDB48) = 1;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + edi + 0xDB40);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CDF40u); RECOMP_ABI_CALL(0x000C8580u, sub_000C8580); /* call 0x000C8580 */

loc_000CDF40: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax + edi + 0xDB44);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, 0x2E8A8C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CDF5Fu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000CDF5F: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CDF69u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CDF69: ;
    ecx = MEM32(esi + 0x24);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CDF75u); RECOMP_ABI_CALL(0x000CC840u, sub_000CC840); /* call 0x000CC840 */

loc_000CDF75: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CDF80
 * Original: 0x000CDF80 - 0x000CDF85 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDF80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CDF80: ;
    g_seh_ebp = ebp; sub_000CB4F0(); return; /* tail jmp 0x000CB4F0 */

}

/**
 * sub_000CDF90
 * Original: 0x000CDF90 - 0x000CE005 (117 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CDF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CDF90: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = edi + 0x1C;
    edx = 0x200;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000CDFA0: ;
    MEM32(eax + -28) = 0x2E8A5C;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + -4) = ecx;
    MEM8(eax + 0x10) = LO8(ecx);
    MEM32(eax + -8) = ecx;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000CDFA0; /* jne: not equal / not zero */

loc_000CDFBE: ;
    eax = edi + 0x6808;
    edx = 0x20;
    /* nop */

loc_000CDFD0: ;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM8(eax + 0x2C) = LO8(ecx);
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax) = 0x2E8A70;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x5C) = ecx;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000CDFD0; /* jne: not equal / not zero */

loc_000CDFFA: ;
    ecx = edi;
    PUSH32(esp, 0x000CE001u); RECOMP_ABI_CALL(0x000C91C0u, sub_000C91C0); /* call 0x000C91C0 */

loc_000CE001: ;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CE010
 * Original: 0x000CE010 - 0x000CE0B5 (165 bytes, 60 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CE010: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0x6804);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x1FF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CE029; /* jl: less (signed <) */

loc_000CE022: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CE029: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000CE036u); RECOMP_ABI_CALL(0x000CC840u, sub_000CC840); /* call 0x000CC840 */

loc_000CE036: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE059; /* jne: not equal / not zero */

loc_000CE03A: ;
    ecx = MEM32(esi + 0x6000);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CE059; /* jle: less or equal (signed <=) */

loc_000CE044: ;
    ecx = esi + 4;

loc_000CE047: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE061; /* je: equal / zero */

loc_000CE04B: ;
    edx = MEM32(esi + 0x6000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CE047; /* jl: less (signed <) */

loc_000CE059: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CE061: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(esi + ebx * 4 + 0x6004) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000CE09A; /* je: equal / zero */

loc_000CE070: ;
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + esi;
    PUSH32(esp, 0xDE396099u);
    ecx = 0x37DD10;
    MEM8(edi + 0x2C) = 0;
    PUSH32(esp, 0x000CE08Cu); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000CE08C: ;
    MEM32(esi + 0x6804) = MEM32(esi + 0x6804) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x6804)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CE09A: ;
    ecx = eax + eax * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx + esi;
    MEM8(edi + 0x2C) = 1;
    MEM32(esi + 0x6804) = MEM32(esi + 0x6804) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x6804)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CE0C0
 * Original: 0x000CE0C0 - 0x000CE30D (589 bytes, 197 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE0C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CE0C0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    MEM32(esp + 0x28) = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xEC90E52Eu);
    ecx = esi;
    MEM32(esp + 0x30) = edi;
    PUSH32(esp, 0x000CE0E3u); RECOMP_ABI_CALL(0x001EEFB0u, sub_001EEFB0); /* call 0x001EEFB0 */

loc_000CE0E3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE302; /* je: equal / zero */

loc_000CE0EB: ;
    PUSH32(esp, ebp);
    /* nop */

loc_000CE0F0: ;
    PUSH32(esp, 0x2E8B08);
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x38) = ebx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000CE118u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CE118: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000CE124u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_000CE124: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE13C; /* je: equal / zero */

loc_000CE128: ;
    ecx = esi;
    PUSH32(esp, 0x000CE12Fu); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_000CE12F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE135u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CE135: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = eax;

loc_000CE13C: ;
    PUSH32(esp, 0x2E8B00);
    PUSH32(esp, 0x000CE146u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CE146: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000CE152u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_000CE152: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE16A; /* je: equal / zero */

loc_000CE156: ;
    ecx = esi;
    PUSH32(esp, 0x000CE15Du); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_000CE15D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE163u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CE163: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = eax;

loc_000CE16A: ;
    PUSH32(esp, 0x2E8AF8);
    PUSH32(esp, 0x000CE174u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CE174: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000CE180u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_000CE180: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE198; /* je: equal / zero */

loc_000CE184: ;
    ecx = esi;
    PUSH32(esp, 0x000CE18Bu); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_000CE18B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE191u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CE191: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = eax;

loc_000CE198: ;
    PUSH32(esp, 0x2E8AF0);
    PUSH32(esp, 0x000CE1A2u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CE1A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000CE1AEu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_000CE1AE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE1C6; /* je: equal / zero */

loc_000CE1B2: ;
    ecx = esi;
    PUSH32(esp, 0x000CE1B9u); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_000CE1B9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE1BFu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CE1BF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;

loc_000CE1C6: ;
    PUSH32(esp, 0x2E8AE4);
    PUSH32(esp, 0x000CE1D0u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CE1D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000CE1DCu); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_000CE1DC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE1F4; /* je: equal / zero */

loc_000CE1E0: ;
    ecx = esi;
    PUSH32(esp, 0x000CE1E7u); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_000CE1E7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE1EDu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CE1ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;

loc_000CE1F4: ;
    PUSH32(esp, 0x2E8AD8);
    PUSH32(esp, 0x000CE1FEu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CE1FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000CE20Au); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_000CE20A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE222; /* je: equal / zero */

loc_000CE20E: ;
    ecx = esi;
    PUSH32(esp, 0x000CE215u); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_000CE215: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE21Bu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CE21B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;

loc_000CE222: ;
    PUSH32(esp, 0x2E8ACC);
    PUSH32(esp, 0x000CE22Cu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CE22C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000CE238u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_000CE238: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE250; /* je: equal / zero */

loc_000CE23C: ;
    ecx = esi;
    PUSH32(esp, 0x000CE243u); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_000CE243: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE249u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CE249: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x34) = eax;

loc_000CE250: ;
    PUSH32(esp, 0x2E8AC0);
    PUSH32(esp, 0x000CE25Au); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CE25A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000CE266u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_000CE266: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE2BA; /* je: equal / zero */

loc_000CE26A: ;
    ecx = esi;
    PUSH32(esp, 0x000CE271u); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_000CE271: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE2B8; /* je: equal / zero */

loc_000CE277: ;
    PUSH32(esp, 0x2E8AA0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x000CE288u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_000CE288: ;
    edi = eax;
    PUSH32(esp, 0x3E7);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CE296u); RECOMP_ABI_CALL(0x000C9120u, sub_000C9120); /* call 0x000C9120 */

loc_000CE296: ;
    ecx = MEM32(esp + 0x40);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CE2A3u); RECOMP_ABI_CALL(0x000CC9D0u, sub_000CC9D0); /* call 0x000CC9D0 */

loc_000CE2A3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CE2A9u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CE2A9: ;
    PUSH32(esp, edi);
    ebp = eax;
    PUSH32(esp, 0x000CE2B1u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_000CE2B1: ;
    edi = MEM32(esp + 0x34);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE2B8: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000CE2BA: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE2E7u); RECOMP_ABI_CALL(0x000CC7B0u, sub_000CC7B0); /* call 0x000CC7B0 */

loc_000CE2E7: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, 0xEC90E52Eu);
    ecx = esi;
    MEM32(esp + 0x34) = edi;
    PUSH32(esp, 0x000CE2F9u); RECOMP_ABI_CALL(0x001EEFB0u, sub_001EEFB0); /* call 0x001EEFB0 */

loc_000CE2F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CE0F0; /* jne: not equal / not zero */

loc_000CE301: ;
    POP32(esp, ebp);

loc_000CE302: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CE310
 * Original: 0x000CE310 - 0x000CE454 (324 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CE310: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000CE31Bu); RECOMP_ABI_CALL(0x000CDF90u, sub_000CDF90); /* call 0x000CDF90 */

loc_000CE31B: ;
    edi = esi + 0x740C;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000CE329u); RECOMP_ABI_CALL(0x000C87F0u, sub_000C87F0); /* call 0x000C87F0 */

loc_000CE329: ;
    ebx = esi + 0x75B4;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x000CE337u); RECOMP_ABI_CALL(0x000C87D0u, sub_000C87D0); /* call 0x000C87D0 */

loc_000CE337: ;
    ebp = esi + 0x7760;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x000CE345u); RECOMP_ABI_CALL(0x000CA6B0u, sub_000CA6B0); /* call 0x000CA6B0 */

loc_000CE345: ;
    ecx = esi + 0x9120;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CE351u); RECOMP_ABI_CALL(0x000C8E20u, sub_000C8E20); /* call 0x000C8E20 */

loc_000CE351: ;
    ecx = esi + 0x94F0;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CE35Du); RECOMP_ABI_CALL(0x000C8F80u, sub_000C8F80); /* call 0x000C8F80 */

loc_000CE35D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x9680) = edi;
    MEM32(esi + 0x9684) = ebx;
    MEM32(esi + 0x9688) = ebp;
    MEM32(esi + 0x9694) = 0xFFFFFFFFu;
    MEM32(esi + 0x9698) = 0;
    eax = esi + 0x9120;
    MEM32(esi + 0x968C) = eax;
    eax = esi + 0x94F0;
    MEM32(esi + 0x9690) = eax;
    MEMF(esi + 0x969C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x96C0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x96A0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x96C4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x96A4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x96C8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x96A8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x96CC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x96AC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x96D0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x96B0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x96D4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x96B4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x96D8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x96B8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x96DC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x96BC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x96E0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2E7460)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0xE364) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE368) = xmm0.f[0]; /* movss */
    MEM8(esi + 0xE360) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000CE460
 * Original: 0x000CE460 - 0x000CE788 (808 bytes, 206 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CE460: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2422AC);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x664) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x664;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x000CE486u); RECOMP_ABI_CALL(0x000C91C0u, sub_000C91C0); /* call 0x000C91C0 */

loc_000CE486: ;
    ecx = esp + 0x40;
    PUSH32(esp, 0x000CE48Fu); RECOMP_ABI_CALL(0x00209100u, sub_00209100); /* call 0x00209100 */

loc_000CE48F: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    eax = esp + 0x578;
    PUSH32(esp, 0x2E8B84);
    PUSH32(esp, eax);
    MEM32(esp + 0x688) = ebp;
    PUSH32(esp, 0x000CE4ABu); RECOMP_ABI_CALL(0x001789B0u, sub_001789B0); /* call 0x001789B0 */

loc_000CE4AB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, 0x000CE4B8u); RECOMP_ABI_CALL(0x00209810u, sub_00209810); /* call 0x00209810 */

loc_000CE4B8: ;
    ecx = esp + 0x18;
    MEM8(esp + 0x13) = LO8(eax);
    PUSH32(esp, 0x000CE4C5u); RECOMP_ABI_CALL(0x00208F10u, sub_00208F10); /* call 0x00208F10 */

loc_000CE4C5: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x67C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000CE5BE; /* je: equal / zero */

loc_000CE4D9: ;
    PUSH32(esp, 0x2E8B64);
    PUSH32(esp, 2);
    ecx = esp + 0x48;
    PUSH32(esp, 0x000CE4E9u); RECOMP_ABI_CALL(0x00209A50u, sub_00209A50); /* call 0x00209A50 */

loc_000CE4E9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE4EFu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_000CE4EF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x40;
    esi = eax;
    PUSH32(esp, 0x000CE4FDu); RECOMP_ABI_CALL(0x00209A50u, sub_00209A50); /* call 0x00209A50 */

loc_000CE4FD: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x48;
    PUSH32(esp, 0x000CE508u); RECOMP_ABI_CALL(0x002092A0u, sub_002092A0); /* call 0x002092A0 */

loc_000CE508: ;
    ecx = esp + 0x40;
    PUSH32(esp, 0x000CE511u); RECOMP_ABI_CALL(0x00209A50u, sub_00209A50); /* call 0x00209A50 */

loc_000CE511: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000CE51Cu); RECOMP_ABI_CALL(0x00208EC0u, sub_00208EC0); /* call 0x00208EC0 */

loc_000CE51C: ;
    ecx = esp + 0x40;
    PUSH32(esp, 0x000CE525u); RECOMP_ABI_CALL(0x00209980u, sub_00209980); /* call 0x00209980 */

loc_000CE525: ;
    ecx = esp + 0x150;
    PUSH32(esp, 0x000CE531u); RECOMP_ABI_CALL(0x001EEF80u, sub_001EEF80); /* call 0x001EEF80 */

loc_000CE531: ;
    PUSH32(esp, 0x2E8B44);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10000);
    MEM8(esp + 0x688) = 2;
    PUSH32(esp, 0x000CE54Au); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_000CE54A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x2000);
    PUSH32(esp, edi);
    ecx = esp + 0x158;
    PUSH32(esp, 0x000CE561u); RECOMP_ABI_CALL(0x001EEF50u, sub_001EEF50); /* call 0x001EEF50 */

loc_000CE561: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x154;
    PUSH32(esp, 0x000CE572u); RECOMP_ABI_CALL(0x001EF500u, sub_001EF500); /* call 0x001EF500 */

loc_000CE572: ;
    edx = esp + 0x150;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x000CE581u); RECOMP_ABI_CALL(0x000CE0C0u, sub_000CE0C0); /* call 0x000CE0C0 */

loc_000CE581: ;
    ecx = esp + 0x150;
    PUSH32(esp, 0x000CE58Du); RECOMP_ABI_CALL(0x001EEFA0u, sub_001EEFA0); /* call 0x001EEFA0 */

loc_000CE58D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    ecx = esp + 0x158;
    PUSH32(esp, 0x000CE59Bu); RECOMP_ABI_CALL(0x001EEF50u, sub_001EEF50); /* call 0x001EEF50 */

loc_000CE59B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CE5A1u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_000CE5A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CE5A7u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_000CE5A7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x150;
    MEM8(esp + 0x67C) = 1;
    PUSH32(esp, 0x000CE5BEu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_000CE5BE: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x000CE5C7u); RECOMP_ABI_CALL(0x00208F00u, sub_00208F00); /* call 0x00208F00 */

loc_000CE5C7: ;
    esi = ebx + 0x7760;
    PUSH32(esp, ebp);
    MEM32(esi + 0x1798) = ebp;
    MEM32(esi + 0x179C) = ebp;
    MEM32(esi + 0x17A0) = ebp;
    eax = esp + 0x578;
    PUSH32(esp, 0x2E8B2C);
    PUSH32(esp, eax);
    MEM32(esi + 0x1794) = ebp;
    MEM32(esi + 0x19B8) = ebp;
    MEM8(esi + 0x19BC) = 0;
    PUSH32(esp, 0x000CE605u); RECOMP_ABI_CALL(0x001789B0u, sub_001789B0); /* call 0x001789B0 */

loc_000CE605: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, 0x000CE612u); RECOMP_ABI_CALL(0x00209810u, sub_00209810); /* call 0x00209810 */

loc_000CE612: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE6C3; /* je: equal / zero */

loc_000CE61A: ;
    PUSH32(esp, 0x2E8B0C);
    PUSH32(esp, 2);
    ecx = esp + 0x48;
    PUSH32(esp, 0x000CE62Au); RECOMP_ABI_CALL(0x00209A50u, sub_00209A50); /* call 0x00209A50 */

loc_000CE62A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE630u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_000CE630: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x40;
    edi = eax;
    PUSH32(esp, 0x000CE63Eu); RECOMP_ABI_CALL(0x00209A50u, sub_00209A50); /* call 0x00209A50 */

loc_000CE63E: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x48;
    PUSH32(esp, 0x000CE649u); RECOMP_ABI_CALL(0x002092A0u, sub_002092A0); /* call 0x002092A0 */

loc_000CE649: ;
    ecx = esp + 0x40;
    PUSH32(esp, 0x000CE652u); RECOMP_ABI_CALL(0x00209A50u, sub_00209A50); /* call 0x00209A50 */

loc_000CE652: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000CE65Du); RECOMP_ABI_CALL(0x00208EC0u, sub_00208EC0); /* call 0x00208EC0 */

loc_000CE65D: ;
    ecx = esp + 0x40;
    PUSH32(esp, 0x000CE666u); RECOMP_ABI_CALL(0x00209980u, sub_00209980); /* call 0x00209980 */

loc_000CE666: ;
    ecx = esp + 0x150;
    PUSH32(esp, 0x000CE672u); RECOMP_ABI_CALL(0x001EEF80u, sub_001EEF80); /* call 0x001EEF80 */

loc_000CE672: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x154;
    MEM8(esp + 0x680) = 3;
    PUSH32(esp, 0x000CE68Bu); RECOMP_ABI_CALL(0x001EF500u, sub_001EF500); /* call 0x001EF500 */

loc_000CE68B: ;
    edx = esp + 0x150;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000CE69Au); RECOMP_ABI_CALL(0x000CAB90u, sub_000CAB90); /* call 0x000CAB90 */

loc_000CE69A: ;
    ecx = esp + 0x150;
    PUSH32(esp, 0x000CE6A6u); RECOMP_ABI_CALL(0x001EEFA0u, sub_001EEFA0); /* call 0x001EEFA0 */

loc_000CE6A6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CE6ACu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_000CE6AC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x150;
    MEM8(esp + 0x67C) = 1;
    PUSH32(esp, 0x000CE6C3u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_000CE6C3: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x000CE6CCu); RECOMP_ABI_CALL(0x00208F00u, sub_00208F00); /* call 0x00208F00 */

loc_000CE6CC: ;
    edi = ebx + 0xDB48;

loc_000CE6D2: ;
    esi = 2;

loc_000CE6D7: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x000CE6E4u); RECOMP_ABI_CALL(0x000C8580u, sub_000C8580); /* call 0x000C8580 */

loc_000CE6E4: ;
    PUSH32(esp, esi);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0x118;
    PUSH32(esp, 0x2E86A8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CE6FCu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000CE6FC: ;
    eax = esp + 0x120;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0x000CE711u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CE711: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x000CE724u); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_000CE724: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE737; /* je: equal / zero */

loc_000CE728: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE737; /* je: equal / zero */

loc_000CE730: ;
    eax = 1;
    goto loc_000CE739;

loc_000CE737: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000CE739: ;
    MEM8(edi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xE (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CE6D7; /* jle: less or equal (signed <=) */

loc_000CE744: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CE6D2; /* jl: less (signed <) */

loc_000CE74A: ;
    ecx = esp + 0x18;
    MEM8(esp + 0x67C) = 0;
    PUSH32(esp, 0x000CE75Bu); RECOMP_ABI_CALL(0x00208DF0u, sub_00208DF0); /* call 0x00208DF0 */

loc_000CE75B: ;
    ecx = esp + 0x40;
    MEM32(esp + 0x67C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000CE76Fu); RECOMP_ABI_CALL(0x00209200u, sub_00209200); /* call 0x00209200 */

loc_000CE76F: ;
    ecx = MEM32(esp + 0x674);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x670) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x670;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CE790
 * Original: 0x000CE790 - 0x000CE852 (194 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000CE790: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000CE79Eu); RECOMP_ABI_CALL(0x000CCDF0u, sub_000CCDF0); /* call 0x000CCDF0 */

loc_000CE79E: ;
    eax = MEM32(esi + 0x9694);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE7B6; /* je: equal / zero */

loc_000CE7A9: ;
    ecx = MEM32(esi + eax * 4 + 0x9680);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000CE7B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CE7B3u); } /* indirect call */
    }

loc_000CE7B6: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xDB3C)); /* movss */
    _fa = (uint32_t)(MEM8(esi + 0xE36C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE36C), 1 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi + 0xDB3C) = xmm1.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000CE84D; /* jne: not equal / not zero */

loc_000CE7D9: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm2.f[0]; _fcb = MEMF(esi + 0xE370); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CE827; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(esi + 0xE370)) */

loc_000CE7EA: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC880); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xE370); /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CE812; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000CE802: ;
    xmm0 = xmm1; /* movaps */
    POP32(esp, edi);
    MEMF(esi + 0xE370) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000CE812: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CE81A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000CE817: ;
    xmm0 = xmm2; /* movaps */

loc_000CE81A: ;
    POP32(esp, edi);
    MEMF(esi + 0xE370) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000CE827: ;
    eax = MEM32(esi + 0xE374);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ecx = eax + 1;
    MEM32(esi + 0xE374) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_000CE84D; /* jle: less or equal (signed <=) */

loc_000CE83B: ;
    PUSH32(esp, 0xC2CBD863u);
    PUSH32(esp, 0x4249D707);
    PUSH32(esp, 0x000CE84Au); RECOMP_ABI_CALL(0x0017A0A0u, sub_0017A0A0); /* call 0x0017A0A0 */

loc_000CE84A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CE84D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CE860
 * Original: 0x000CE860 - 0x000CE8FC (156 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CE860: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE870u); RECOMP_ABI_CALL(0x000CE010u, sub_000CE010); /* call 0x000CE010 */

loc_000CE870: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM8(esp + 0xC) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_000CE8F6; /* je: equal / zero */

loc_000CE87D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE8F6; /* je: equal / zero */

loc_000CE881: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000CE888u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CE885u); } /* indirect call */
    }

loc_000CE888: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95417ABBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x95417ABBu (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000CE8B6; /* ja: above (unsigned >) */

loc_000CE88F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000CE8CF; /* je: equal / zero */

loc_000CE891: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x626AB657) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x626AB657 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000CE8AF; /* ja: above (unsigned >) */

loc_000CE898: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000CE8A8; /* je: equal / zero */

loc_000CE89A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19FFEB0B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19FFEB0B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE8CF; /* je: equal / zero */

loc_000CE8A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2707633E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2707633E (32-bit) */
    goto loc_000CE8C9;

loc_000CE8A8: ;
    eax = 1;
    goto loc_000CE8D4;

loc_000CE8AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x757523BE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x757523BE (32-bit) */
    goto loc_000CE8C9;

loc_000CE8B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB1566552u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB1566552u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE8CF; /* je: equal / zero */

loc_000CE8BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC1A40351u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC1A40351u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CE8CF; /* je: equal / zero */

loc_000CE8C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE23508DAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE23508DAu (32-bit) */

loc_000CE8C9: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000CE8CF; /* je: equal / zero */

loc_000CE8CB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000CE8D4;

loc_000CE8CF: ;
    eax = 2;

loc_000CE8D4: ;
    PUSH32(esp, eax);
    ecx = 0x35FE0C;
    PUSH32(esp, 0x000CE8DFu); RECOMP_ABI_CALL(0x000F2BB0u, sub_000F2BB0); /* call 0x000F2BB0 */

loc_000CE8DF: ;
    PUSH32(esp, 0xDE396099u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000CE8EBu); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_000CE8EB: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CE8F6: ;
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CE900
 * Original: 0x000CE900 - 0x000CE9E2 (226 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CE900: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x2E8540);
    ebp = ecx;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0x000CE918u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CE918: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x000CE92Bu); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_000CE92B: ;
    eax = MEM32(esp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CE9DB; /* jle: less or equal (signed <=) */

loc_000CE939: ;
    PUSH32(esp, edi);
    /* nop */

loc_000CE940: ;
    MEM8(esp + 0x1C) = LO8(ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xF;
    edi = esp + 0x1D;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, esi);
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    edx = esp + 0x20;
    PUSH32(esp, 0x2E855C);
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    PUSH32(esp, 0x000CE96Cu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000CE96C: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE976u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CE976: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x000CE989u); RECOMP_ABI_CALL(0x00122060u, sub_00122060); /* call 0x00122060 */

loc_000CE989: ;
    PUSH32(esp, esi);
    edx = esp + 0x20;
    PUSH32(esp, 0x2E854C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CE999u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000CE999: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE9A3u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000CE9A3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x000CE9B6u); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_000CE9B6: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    eax = MEM32(esp + 0x18);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CE9CDu); RECOMP_ABI_CALL(0x000CE860u, sub_000CE860); /* call 0x000CE860 */

loc_000CE9CD: ;
    eax = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CE940; /* jl: less (signed <) */

loc_000CE9DA: ;
    POP32(esp, edi);

loc_000CE9DB: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CE9F0
 * Original: 0x000CE9F0 - 0x000CEA94 (164 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CE9F0(void)
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

loc_000CE9F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000CE9FBu); RECOMP_ABI_CALL(0x000C9BE0u, sub_000C9BE0); /* call 0x000C9BE0 */

loc_000CE9FB: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC8A0)); /* movss */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(esi + 0x19B4) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x17A4) = 0;
    MEM8(esi + 0x19A8) = 0;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000CEA20: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000CEA28u); RECOMP_ABI_CALL(0x000C8AD0u, sub_000C8AD0); /* call 0x000C8AD0 */

loc_000CEA28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000CEA34; /* jg: greater (signed >) */

loc_000CEA2C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CEA20; /* jl: less (signed <) */

loc_000CEA32: ;
    goto loc_000CEA3C;

loc_000CEA34: ;
    SET_LO8(ebx, 1);
    MEM32(esi + 0x19B0) = edi;

loc_000CEA3C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    edi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000CEA85; /* je: equal / zero */

loc_000CEA45: ;
    SET_LO8(eax, MEM8(esi + 0x19BC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEA85; /* jne: not equal / not zero */

loc_000CEA4F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    ecx = 0x323338;
    PUSH32(esp, 0x000CEA5Cu); RECOMP_ABI_CALL(0x00095B70u, sub_00095B70); /* call 0x00095B70 */

loc_000CEA5C: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = 0x323338;
    PUSH32(esp, 0x000CEA6Fu); RECOMP_ABI_CALL(0x00095EE0u, sub_00095EE0); /* call 0x00095EE0 */

loc_000CEA6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEA87; /* jne: not equal / not zero */

loc_000CEA73: ;
    edi = 5;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000CEA80u); RECOMP_ABI_CALL(0x000CD6C0u, sub_000CD6C0); /* call 0x000CD6C0 */

loc_000CEA80: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000CEA85: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000CEA87: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000CEA8Fu); RECOMP_ABI_CALL(0x000CD6C0u, sub_000CD6C0); /* call 0x000CD6C0 */

loc_000CEA8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CEAA0
 * Original: 0x000CEAA0 - 0x000CEAEF (79 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CEAA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1190);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CEADB; /* jle: less or equal (signed <=) */

loc_000CEAB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    ebx = esi + 0x198;
    /* nop */

loc_000CEAC0: ;
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000CEACBu); RECOMP_ABI_CALL(0x000CDA60u, sub_000CDA60); /* call 0x000CDA60 */

loc_000CEACB: ;
    eax = MEM32(esi + 0x1190);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CEAC0; /* jl: less (signed <) */

loc_000CEAD9: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000CEADB: ;
    ecx = MEM32(esi + 0x24);
    eax = edi;
    POP32(esp, edi);
    MEM32(ecx + 0xE378) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CEAF0
 * Original: 0x000CEAF0 - 0x000CEBCE (222 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEAF0(void)
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

loc_000CEAF0: ;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x842E24);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CEB12u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_000CEB12: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CEB1E; /* jge: greater or equal (signed >=) */

loc_000CEB19: ;
    eax = esi + 0x10;
    goto loc_000CEB24;

loc_000CEB1E: ;
    ecx = MEM32(esi + 8);
    eax = ecx + eax * 4;

loc_000CEB24: ;
    ebx = MEM32(eax);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEBC5; /* je: equal / zero */

loc_000CEB30: ;
    esi = MEM32(esp + 0x24);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(eax, MEM8(esi));
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x30); /* divss */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEBBB; /* je: equal / zero */

loc_000CEB58: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEB61; /* jne: not equal / not zero */

loc_000CEB5E: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000CEBAA;

loc_000CEB61: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000CEB69u); RECOMP_ABI_CALL(0x00217210u, sub_00217210); /* call 0x00217210 */

loc_000CEB69: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x18) = edx;
    SET_LO16(edx, MEM16(eax + 8));
    eax = ZX8(LO8(edx));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, MEM8(esi));
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_EQ(_fa, _fb)) edi = esi; /* cmove */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    MEM32(esp + 0x1C) = ecx;
    MEM16(esp + 0x20) = LO16(edx);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CEBB3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_000CEBA0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEBB3; /* je: equal / zero */

loc_000CEBA4: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = edi + 1;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000CEBAA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_000CEBB3: ;
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEB58; /* jne: not equal / not zero */

loc_000CEBBB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CEBC5: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CEBD0
 * Original: 0x000CEBD0 - 0x000CEC9D (205 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000CEBD0: ;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x842E24);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CEBF1u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_000CEBF1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CEBFD; /* jge: greater or equal (signed >=) */

loc_000CEBF8: ;
    eax = esi + 0x10;
    goto loc_000CEC03;

loc_000CEBFD: ;
    ecx = MEM32(esi + 8);
    eax = ecx + eax * 4;

loc_000CEC03: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEC97; /* je: equal / zero */

loc_000CEC0D: ;
    esi = MEM32(esp + 0x20);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(eax, MEM8(esi));
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x2C); /* divss */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEC96; /* je: equal / zero */

loc_000CEC35: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEC85; /* je: equal / zero */

loc_000CEC3B: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000CEC43u); RECOMP_ABI_CALL(0x00217210u, sub_00217210); /* call 0x00217210 */

loc_000CEC43: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x14) = edx;
    SET_LO16(edx, MEM16(eax + 8));
    eax = ZX8(LO8(edx));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, MEM8(esi));
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_EQ(_fa, _fb)) edi = esi; /* cmove */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    MEM32(esp + 0x18) = ecx;
    MEM16(esp + 0x1C) = LO16(edx);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CEC8E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_000CEC7A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEC8E; /* je: equal / zero */

loc_000CEC7E: ;
    MEM8(edi) = 0xA;
    esi = edi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000CEC85: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_000CEC8E: ;
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEC35; /* jne: not equal / not zero */

loc_000CEC96: ;
    POP32(esp, edi);

loc_000CEC97: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CECA0
 * Original: 0x000CECA0 - 0x000CEE11 (369 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CECA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000CECA0: ;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x842E24);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CECC1u); RECOMP_ABI_CALL(0x001F2A20u, sub_001F2A20); /* call 0x001F2A20 */

loc_000CECC1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CECCD; /* jge: greater or equal (signed >=) */

loc_000CECC8: ;
    eax = esi + 0x10;
    goto loc_000CECD3;

loc_000CECCD: ;
    ecx = MEM32(esi + 8);
    eax = ecx + eax * 4;

loc_000CECD3: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEE0B; /* je: equal / zero */

loc_000CECDD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x30); /* divss */
    PUSH32(esp, 0x2E);
    ecx = ebx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000CECF8u); RECOMP_ABI_CALL(0x00217210u, sub_00217210); /* call 0x00217210 */

loc_000CECF8: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x14) = edx;
    SET_LO16(edx, MEM16(eax + 8));
    eax = ZX8(LO8(edx));
    eax = eax + eax * 2;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    MEM32(esp + 0x18) = ecx;
    MEM16(esp + 0x1C) = LO16(edx);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CED3D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_000CED25: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0x2E8B9C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CED34u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000CED34: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CED3D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    SET_LO8(eax, MEM8(edi));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEE0A; /* je: equal / zero */

loc_000CED57: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + edi));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CED64u); RECOMP_ABI_CALL(0x00217210u, sub_00217210); /* call 0x00217210 */

loc_000CED64: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x18) = edx;
    SET_LO16(edx, MEM16(eax + 8));
    eax = ZX8(LO8(edx));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    MEM32(esp + 0x1C) = ecx;
    MEM16(esp + 0x20) = LO16(edx);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000CEDA2; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_000CED95: ;
    _fa = (uint32_t)(MEM8(esi + edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + edi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CED57; /* jne: not equal / not zero */

loc_000CED9B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000CEDA2: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca > _fcb)) goto loc_000CEDB5; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_000CEDAF: ;
    _fa = (uint32_t)(MEM8(esi + edi)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + edi), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEDFA; /* jne: not equal / not zero */

loc_000CEDB5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CEDFA; /* jle: less or equal (signed <=) */

loc_000CEDB9: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + edi + -1));
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x000CEDC8u); RECOMP_ABI_CALL(0x00217210u, sub_00217210); /* call 0x00217210 */

loc_000CEDC8: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x18) = edx;
    SET_LO16(edx, MEM16(eax + 8));
    eax = ZX8(LO8(edx));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x1C) = ecx;
    MEM16(esp + 0x20) = LO16(edx);
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    goto loc_000CEDA2;

loc_000CEDFA: ;
    PUSH32(esp, 0x2E8B98);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CEE07u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000CEE07: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CEE0A: ;
    POP32(esp, edi);

loc_000CEE0B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000CEE20
 * Original: 0x000CEE20 - 0x000CEE8C (108 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEE20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CEE20: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CEE8A; /* jge: greater or equal (signed >=) */

loc_000CEE2A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2E8BA0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0x000CEE3Cu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_000CEE3C: ;
    ecx = MEM32(0x413FC0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    eax = MEM32(edi + 0x20);
    PUSH32(esp, 0x1000);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CEE57u); RECOMP_ABI_CALL(0x00121650u, sub_00121650); /* call 0x00121650 */

loc_000CEE57: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x000CEE61u); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_000CEE61: ;
    edx = MEM32(0x2E7C74);
    eax = MEM32(0x2E7C8C);
    ecx = MEM32(0x343460);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CEE7Bu); RECOMP_ABI_CALL(0x000CEAF0u, sub_000CEAF0); /* call 0x000CEAF0 */

loc_000CEE7B: ;
    edi = eax;
    PUSH32(esp, esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000CEE84u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_000CEE84: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, esi);

loc_000CEE8A: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CEE90
 * Original: 0x000CEE90 - 0x000CEFE6 (342 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000CEE90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CEE90: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000CEE9Au); RECOMP_ABI_CALL(0x000C9E40u, sub_000C9E40); /* call 0x000C9E40 */

loc_000CEE9A: ;
    ecx = MEM32(esi + 0x24);
    edi = eax;
    eax = MEM32(esi + 0x1A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CEEABu); RECOMP_ABI_CALL(0x000C8FA0u, sub_000C8FA0); /* call 0x000C8FA0 */

loc_000CEEAB: ;
    ecx = eax + edi;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esi + 0x198) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_000CEEC6; /* jg: greater (signed >) */

loc_000CEEBA: ;
    MEM32(esi + 0x190) = 0xFFFFFFFFu;
    goto loc_000CEEFC;

loc_000CEEC6: ;
    _fa = (uint32_t)(MEM32(esi + 0x190)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x190), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEEDF; /* jne: not equal / not zero */

loc_000CEECF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x190) = edx;

loc_000CEEDF: ;
    edx = ecx + -1;
    ecx = MEM32(esi + 0x190);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CEEF0; /* jge: greater or equal (signed >=) */

loc_000CEEEC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000CEEF6;

loc_000CEEF0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CEEF6; /* jle: less or equal (signed <=) */

loc_000CEEF4: ;
    ecx = edx;

loc_000CEEF6: ;
    MEM32(esi + 0x190) = ecx;

loc_000CEEFC: ;
    ecx = MEM32(esi + 0x190);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEF19; /* jne: not equal / not zero */

loc_000CEF07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000CEF19; /* jl: less (signed <) */

loc_000CEF0B: ;
    MEM32(esi + 0x190) = ebp;
    MEM32(esi + 0x194) = ebp;
    goto loc_000CEF40;

loc_000CEF19: ;
    edx = MEM32(0x2E7CD0);
    eax = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x194);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CEF36; /* jge: greater or equal (signed >=) */

loc_000CEF2E: ;
    MEM32(esi + 0x194) = eax;
    goto loc_000CEF40;

loc_000CEF36: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CEF40; /* jle: less or equal (signed <=) */

loc_000CEF3A: ;
    MEM32(esi + 0x194) = ecx;

loc_000CEF40: ;
    ecx = MEM32(esi + 0x1A8);
    edx = MEM32(esi + 0x190);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CEF58u); RECOMP_ABI_CALL(0x000C9000u, sub_000C9000); /* call 0x000C9000 */

loc_000CEF58: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CEFD6; /* je: equal / zero */

loc_000CEF5E: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000CEF64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CEF62u); } /* indirect call */
    }

loc_000CEF64: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CEFD6; /* jne: not equal / not zero */

loc_000CEF68: ;
    ecx = edi;
    PUSH32(esp, 0x000CEF6Fu); RECOMP_ABI_CALL(0x000CEE20u, sub_000CEE20); /* call 0x000CEE20 */

loc_000CEF6F: ;
    ecx = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(0x2E7CD4)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(0x2E7CD4))); }
    MEM32(esi + 0x1A4) = eax;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(0x2E7CD4)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(0x2E7CD4))); }
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1A4) = ecx;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000CEF9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CEF9Au); } /* indirect call */
    }

loc_000CEF9D: ;
    edi = MEM32(esi + 0x1A4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    ecx = eax + -1;
    eax = MEM32(esi + 0x1A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esi + 0x1A4) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_000CEFC6; /* jge: greater or equal (signed >=) */

loc_000CEFBA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0x1A0) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000CEFC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CEFCC; /* jle: less or equal (signed <=) */

loc_000CEFCA: ;
    eax = ecx;

loc_000CEFCC: ;
    POP32(esp, edi);
    MEM32(esi + 0x1A0) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000CEFD6: ;
    POP32(esp, edi);
    MEM32(esi + 0x1A0) = ebp;
    MEM32(esi + 0x1A4) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000CEFF0
 * Original: 0x000CEFF0 - 0x000CF026 (54 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CEFF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CEFF6u); RECOMP_ABI_CALL(0x000CDF00u, sub_000CDF00); /* call 0x000CDF00 */

loc_000CEFF6: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF024; /* je: equal / zero */

loc_000CEFFE: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000CF006u); RECOMP_ABI_CALL(0x000CEE20u, sub_000CEE20); /* call 0x000CEE20 */

loc_000CF006: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(0x2E7CD4)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(0x2E7CD4))); }
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edx = MEM32(esi);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000CF01Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CF01Cu); } /* indirect call */
    }

loc_000CF01F: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);

loc_000CF024: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CF030
 * Original: 0x000CF030 - 0x000CF534 (1284 bytes, 313 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CF030: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000CF040u); RECOMP_ABI_CALL(0x000C9CA0u, sub_000C9CA0); /* call 0x000C9CA0 */

loc_000CF040: ;
    ebp = MEM32(esi + 0x194);
    ebx = MEM32(esi + 0x198);
    eax = edi + -2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    ecx = ebp;
    edx = ebx;
    if (CMP_A(_fa, _fb)) goto loc_000CF4EA; /* ja: above (unsigned >) */

loc_000CF05C: ;
    eax = ZX8(MEM8(eax + 0xCF580));
    { uint32_t _jt = MEM32(eax * 4 + 0xCF534); /* switch: 19 entries, 19 targets */
    if (_jt == 0x000CF06Au) goto loc_000CF06A;
    if (_jt == 0x000CF09Fu) goto loc_000CF09F;
    if (_jt == 0x000CF0D2u) goto loc_000CF0D2;
    if (_jt == 0x000CF0DBu) goto loc_000CF0DB;
    if (_jt == 0x000CF109u) goto loc_000CF109;
    if (_jt == 0x000CF13Eu) goto loc_000CF13E;
    if (_jt == 0x000CF171u) goto loc_000CF171;
    if (_jt == 0x000CF209u) goto loc_000CF209;
    if (_jt == 0x000CF29Bu) goto loc_000CF29B;
    if (_jt == 0x000CF3CBu) goto loc_000CF3CB;
    if (_jt == 0x000CF3FBu) goto loc_000CF3FB;
    if (_jt == 0x000CF424u) goto loc_000CF424;
    if (_jt == 0x000CF454u) goto loc_000CF454;
    if (_jt == 0x000CF46Cu) goto loc_000CF46C;
    if (_jt == 0x000CF494u) goto loc_000CF494;
    if (_jt == 0x000CF4AEu) goto loc_000CF4AE;
    if (_jt == 0x000CF4C1u) goto loc_000CF4C1;
    if (_jt == 0x000CF4DCu) goto loc_000CF4DC;
    if (_jt == 0x000CF4EAu) goto loc_000CF4EA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000CF06A: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_000CF071; /* jns: not sign (positive) */

loc_000CF06D: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000CF07B;

loc_000CF071: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CF07B; /* jle: less or equal (signed <=) */

loc_000CF076: ;
    ebp = 3;

loc_000CF07B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = 0x37DD10;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0xFB08E32Du;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x7F36DC92) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x7F36DC92;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CF09Au); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000CF09A: ;
    goto loc_000CF4EA;

loc_000CF09F: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_000CF0A6; /* jns: not sign (positive) */

loc_000CF0A2: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000CF0B0;

loc_000CF0A6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CF0B0; /* jle: less or equal (signed <=) */

loc_000CF0AB: ;
    ebp = 3;

loc_000CF0B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = 0x37DD10;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0xFB08E32Du;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x7F36DC92) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7F36DC92;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CF0CDu); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000CF0CD: ;
    goto loc_000CF4EA;

loc_000CF0D2: ;
    edx = MEM32(esi + 0x19C);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_000CF0E2;

loc_000CF0DB: ;
    edx = MEM32(esi + 0x19C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000CF0E2: ;
    PUSH32(esp, 0x7A3FBFBF);
    ecx = 0x37DD10;
    MEM32(esi + 0x19C) = edx;
    PUSH32(esp, 0x000CF0F7u); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000CF0F7: ;
    _fa = (uint32_t)(MEM8(esi + 0x3AD)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x3AD), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF4EA; /* jne: not equal / not zero */

loc_000CF104: ;
    goto loc_000CF4E3;

loc_000CF109: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_000CF110; /* jns: not sign (positive) */

loc_000CF10C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000CF11A;

loc_000CF110: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CF11A; /* jle: less or equal (signed <=) */

loc_000CF115: ;
    ebx = 3;

loc_000CF11A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0xFB08E32Du;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x7F36DC92) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7F36DC92;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = 0x37DD10;
    PUSH32(esp, 0x000CF139u); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000CF139: ;
    goto loc_000CF4EA;

loc_000CF13E: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_000CF145; /* jns: not sign (positive) */

loc_000CF141: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000CF14F;

loc_000CF145: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CF14F; /* jle: less or equal (signed <=) */

loc_000CF14A: ;
    ebx = 3;

loc_000CF14F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = 0x37DD10;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0xFB08E32Du;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x7F36DC92) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7F36DC92;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CF16Cu); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000CF16C: ;
    goto loc_000CF4EA;

loc_000CF171: ;
    eax = MEM32(esi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF19A; /* jne: not equal / not zero */

loc_000CF17C: ;
    PUSH32(esp, 0x7A3FBFBF);
    ecx = 0x37DD10;
    MEM32(esi + 0x19C) = 0xC;
    PUSH32(esp, 0x000CF195u); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000CF195: ;
    goto loc_000CF4EA;

loc_000CF19A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF1BD; /* jne: not equal / not zero */

loc_000CF19F: ;
    PUSH32(esp, 0x7A3FBFBF);
    ecx = 0x37DD10;
    MEM32(esi + 0x19C) = 8;
    PUSH32(esp, 0x000CF1B8u); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000CF1B8: ;
    goto loc_000CF4EA;

loc_000CF1BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF1E0; /* jne: not equal / not zero */

loc_000CF1C2: ;
    PUSH32(esp, 0x7A3FBFBF);
    ecx = 0x37DD10;
    MEM32(esi + 0x19C) = 6;
    PUSH32(esp, 0x000CF1DBu); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000CF1DB: ;
    goto loc_000CF4EA;

loc_000CF1E0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x7A3FBFBF);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0xFFFFFFF6u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xE;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x19C) = ecx;
    ecx = 0x37DD10;
    PUSH32(esp, 0x000CF204u); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000CF204: ;
    goto loc_000CF4EA;

loc_000CF209: ;
    eax = MEM32(esi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF232; /* jne: not equal / not zero */

loc_000CF214: ;
    PUSH32(esp, 0x7A3FBFBF);
    ecx = 0x37DD10;
    MEM32(esi + 0x19C) = 6;
    PUSH32(esp, 0x000CF22Du); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000CF22D: ;
    goto loc_000CF4EA;

loc_000CF232: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CF255; /* jle: less or equal (signed <=) */

loc_000CF237: ;
    PUSH32(esp, 0x7A3FBFBF);
    ecx = 0x37DD10;
    MEM32(esi + 0x19C) = 0xE;
    PUSH32(esp, 0x000CF250u); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000CF250: ;
    goto loc_000CF4EA;

loc_000CF255: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CF278; /* jle: less or equal (signed <=) */

loc_000CF25A: ;
    PUSH32(esp, 0x7A3FBFBF);
    ecx = 0x37DD10;
    MEM32(esi + 0x19C) = 0xD;
    PUSH32(esp, 0x000CF273u); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000CF273: ;
    goto loc_000CF4EA;

loc_000CF278: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CF287; /* jle: less or equal (signed <=) */

loc_000CF27D: ;
    MEM32(esi + 0x19C) = 0xC;

loc_000CF287: ;
    PUSH32(esp, 0x7A3FBFBF);
    ecx = 0x37DD10;
    PUSH32(esp, 0x000CF296u); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000CF296: ;
    goto loc_000CF4EA;

loc_000CF29B: ;
    PUSH32(esp, 0x7FC0D27D);
    ecx = 0x37DD10;
    PUSH32(esp, 0x000CF2AAu); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000CF2AA: ;
    ecx = MEM32(esi + 0x194);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM8(esi + 0x3AD) = LO8(eax);
    MEM8(esi + 0x3AC) = LO8(eax);
    MEM8(esi + 0x190) = LO8(eax);
    MEM32(esi + 0x3A4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000CF2E7; /* jne: not equal / not zero */

loc_000CF2CE: ;
    ecx = esi;
    MEM8(esi + 0x3C9) = LO8(eax);
    MEM8(esi + 0x3C8) = 1;
    PUSH32(esp, 0x000CF2E2u); RECOMP_ABI_CALL(0x000CB9B0u, sub_000CB9B0); /* call 0x000CB9B0 */

loc_000CF2E2: ;
    goto loc_000CF4EA;

loc_000CF2E7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF306; /* jne: not equal / not zero */

loc_000CF2EC: ;
    ecx = esi;
    PUSH32(esp, 0x000CF2F3u); RECOMP_ABI_CALL(0x000CB4F0u, sub_000CB4F0); /* call 0x000CB4F0 */

loc_000CF2F3: ;
    ecx = esi;
    PUSH32(esp, 0x000CF2FAu); RECOMP_ABI_CALL(0x000C8F40u, sub_000C8F40); /* call 0x000C8F40 */

loc_000CF2FA: ;
    ecx = esi;
    PUSH32(esp, 0x000CF301u); RECOMP_ABI_CALL(0x000CBC70u, sub_000CBC70); /* call 0x000CBC70 */

loc_000CF301: ;
    goto loc_000CF4EA;

loc_000CF306: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF325; /* jne: not equal / not zero */

loc_000CF30B: ;
    ecx = esi;
    PUSH32(esp, 0x000CF312u); RECOMP_ABI_CALL(0x000CDF80u, sub_000CDF80); /* call 0x000CDF80 */

loc_000CF312: ;
    ecx = esi;
    PUSH32(esp, 0x000CF319u); RECOMP_ABI_CALL(0x000C8F40u, sub_000C8F40); /* call 0x000C8F40 */

loc_000CF319: ;
    ecx = esi;
    PUSH32(esp, 0x000CF320u); RECOMP_ABI_CALL(0x000CC600u, sub_000CC600); /* call 0x000CC600 */

loc_000CF320: ;
    goto loc_000CF4EA;

loc_000CF325: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF344; /* jne: not equal / not zero */

loc_000CF32A: ;
    ecx = esi;
    PUSH32(esp, 0x000CF331u); RECOMP_ABI_CALL(0x000CDF80u, sub_000CDF80); /* call 0x000CDF80 */

loc_000CF331: ;
    ecx = esi;
    PUSH32(esp, 0x000CF338u); RECOMP_ABI_CALL(0x000C8F40u, sub_000C8F40); /* call 0x000C8F40 */

loc_000CF338: ;
    ecx = esi;
    PUSH32(esp, 0x000CF33Fu); RECOMP_ABI_CALL(0x000C8F10u, sub_000C8F10); /* call 0x000C8F10 */

loc_000CF33F: ;
    goto loc_000CF4EA;

loc_000CF344: ;
    MEM32(esi + 0x16C) = eax;
    MEM32(esi + 0x148) = 0x26;
    MEM8(esi + 0x28) = LO8(eax);
    MEM32(esi + 0x170) = eax;
    MEM8(esi + 0x48) = LO8(eax);
    ecx = 0x27;
    MEM32(esi + 0x14C) = ecx;
    MEM32(esi + 0x174) = eax;
    MEM32(esi + 0x150) = 0x1A;
    MEM8(esi + 0x68) = LO8(eax);
    MEM32(esi + 0x188) = eax;
    MEM32(esi + 0x164) = ecx;
    MEM8(esi + 0x108) = LO8(eax);
    MEM32(esi + 0x18C) = eax;
    MEM32(esi + 0x168) = ecx;
    MEM8(esi + 0x128) = LO8(eax);
    MEM32(esi + 0x180) = eax;
    MEM32(esi + 0x15C) = ecx;
    MEM8(esi + 0xC8) = LO8(eax);
    MEM32(esi + 0x184) = eax;
    MEM32(esi + 0x160) = ecx;
    MEM8(esi + 0xE8) = LO8(eax);
    goto loc_000CF4EA;

loc_000CF3CB: ;
    PUSH32(esp, 0x7FC0D27D);
    ecx = 0x37DD10;
    PUSH32(esp, 0x000CF3DAu); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000CF3DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM8(esi + 0x3C9) = LO8(eax);
    MEM8(esi + 0x3C8) = LO8(eax);
    MEM8(esi + 0x190) = 1;
    PUSH32(esp, 0x000CF3F6u); RECOMP_ABI_CALL(0x000CBAF0u, sub_000CBAF0); /* call 0x000CBAF0 */

loc_000CF3F6: ;
    goto loc_000CF4EA;

loc_000CF3FB: ;
    PUSH32(esp, 0x7FC0D27D);
    ecx = 0x37DD10;
    PUSH32(esp, 0x000CF40Au); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000CF40A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x3C9) = LO8(eax);
    MEM8(esi + 0x3C8) = LO8(eax);
    MEM8(esi + 0x3AD) = 1;
    goto loc_000CF4E3;

loc_000CF424: ;
    PUSH32(esp, 0x7FC0D27D);
    ecx = 0x37DD10;
    PUSH32(esp, 0x000CF433u); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000CF433: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM8(esi + 0x3C9) = 1;
    MEM8(esi + 0x3C8) = LO8(eax);
    MEM8(esi + 0x3AD) = LO8(eax);
    PUSH32(esp, 0x000CF44Fu); RECOMP_ABI_CALL(0x000CB830u, sub_000CB830); /* call 0x000CB830 */

loc_000CF44F: ;
    goto loc_000CF4EA;

loc_000CF454: ;
    MEM32(esi + 0x3A4) = MEM32(esi + 0x3A4) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x3A4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_000CF4EA; /* jns: not sign (positive) */

loc_000CF460: ;
    MEM32(esi + 0x3A4) = 0;
    goto loc_000CF4EA;

loc_000CF46C: ;
    eax = MEM32(esi + 0x3A0);
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_000CF479; /* jns: not sign (positive) */

loc_000CF477: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000CF479: ;
    edx = MEM32(esi + 0x3A4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esi + 0x3A4) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000CF4EA; /* jl: less (signed <) */

loc_000CF48C: ;
    MEM32(esi + 0x3A4) = eax;
    goto loc_000CF4EA;

loc_000CF494: ;
    ecx = esi;
    MEM8(esi + 0x3AC) = 1;
    MEM32(esi + 0x3A8) = 0;
    PUSH32(esp, 0x000CF4ACu); RECOMP_ABI_CALL(0x000C9CE0u, sub_000C9CE0); /* call 0x000C9CE0 */

loc_000CF4AC: ;
    goto loc_000CF4EA;

loc_000CF4AE: ;
    eax = MEM32(esi + 0x3A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CF4EA; /* jle: less or equal (signed <=) */

loc_000CF4B8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x3A8) = eax;
    goto loc_000CF4EA;

loc_000CF4C1: ;
    edi = MEM32(esi + 0x3A8);
    ecx = esi;
    PUSH32(esp, 0x000CF4CEu); RECOMP_ABI_CALL(0x000CEFF0u, sub_000CEFF0); /* call 0x000CEFF0 */

loc_000CF4CE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CF4EA; /* jge: greater or equal (signed >=) */

loc_000CF4D3: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x3A8) = edi;
    goto loc_000CF4EA;

loc_000CF4DC: ;
    MEM8(esi + 0x3AC) = 0;

loc_000CF4E3: ;
    ecx = esi;
    PUSH32(esp, 0x000CF4EAu); RECOMP_ABI_CALL(0x000CB650u, sub_000CB650); /* call 0x000CB650 */

loc_000CF4EA: ;
    eax = MEM32(esi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000CF512; /* jge: greater or equal (signed >=) */

loc_000CF4F5: ;
    POP32(esp, edi);
    MEM32(esi + 0x194) = ebp;
    MEM32(esi + 0x198) = ebx;
    MEM32(esi + 0x19C) = 0xE;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000CF512: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000CF521; /* jle: less or equal (signed <=) */

loc_000CF517: ;
    MEM32(esi + 0x19C) = 2;

loc_000CF521: ;
    POP32(esp, edi);
    MEM32(esi + 0x194) = ebp;
    MEM32(esi + 0x198) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF5B0
 * Original: 0x000CF5B0 - 0x000CF5F8 (72 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF5B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF5B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000CF5B8u); RECOMP_ABI_CALL(0x000C9BE0u, sub_000C9BE0); /* call 0x000C9BE0 */

loc_000CF5B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esi + 0x190) = 0xFFFFFFFFu;
    MEM32(esi + 0x194) = eax;
    MEM32(esi + 0x198) = eax;
    MEM8(esi + 0x19C) = LO8(eax);
    MEM32(esi + 0x1A8) = eax;
    PUSH32(esp, 0x000CF5E3u); RECOMP_ABI_CALL(0x000CEE90u, sub_000CEE90); /* call 0x000CEE90 */

loc_000CF5E3: ;
    ecx = esi;
    PUSH32(esp, 0x000CF5EAu); RECOMP_ABI_CALL(0x000CD3F0u, sub_000CD3F0); /* call 0x000CD3F0 */

loc_000CF5EA: ;
    PUSH32(esp, 3);
    ecx = 0x35FE0C;
    PUSH32(esp, 0x000CF5F6u); RECOMP_ABI_CALL(0x000F2BB0u, sub_000F2BB0); /* call 0x000F2BB0 */

loc_000CF5F6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CF600
 * Original: 0x000CF600 - 0x000CF608 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF600(void)
{

loc_000CF600: ;
    PUSH32(esp, 0x000CF605u); RECOMP_ABI_CALL(0x000CEE90u, sub_000CEE90); /* call 0x000CEE90 */

loc_000CF605: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF610
 * Original: 0x000CF610 - 0x000CF8E0 (720 bytes, 229 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000CF610: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000CF623u); RECOMP_ABI_CALL(0x000C9CA0u, sub_000C9CA0); /* call 0x000C9CA0 */

loc_000CF623: ;
    ebx = MEM32(esi + 0x1A0);
    eax = edi + -2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = ebx;
    MEM8(esp + 0x13) = 0;
    if (CMP_A(_fa, _fb)) goto loc_000CF832; /* ja: above (unsigned >) */

loc_000CF63E: ;
    eax = ZX8(MEM8(eax + 0xCF8B8));
    { uint32_t _jt = MEM32(eax * 4 + 0xCF898); /* switch: 8 entries, 8 targets */
    if (_jt == 0x000CF64Cu) goto loc_000CF64C;
    if (_jt == 0x000CF6B4u) goto loc_000CF6B4;
    if (_jt == 0x000CF6F2u) goto loc_000CF6F2;
    if (_jt == 0x000CF787u) goto loc_000CF787;
    if (_jt == 0x000CF808u) goto loc_000CF808;
    if (_jt == 0x000CF819u) goto loc_000CF819;
    if (_jt == 0x000CF824u) goto loc_000CF824;
    if (_jt == 0x000CF832u) goto loc_000CF832;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000CF64C: ;
    MEM32(esi + 0x190) = MEM32(esi + 0x190) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x190)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_000CF65E; /* jns: not sign (positive) */

loc_000CF654: ;
    MEM32(esi + 0x190) = 0;

loc_000CF65E: ;
    ecx = MEM32(esi + 0x1A8);
    edx = MEM32(esi + 0x190);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000CF674u); RECOMP_ABI_CALL(0x000C9000u, sub_000C9000); /* call 0x000C9000 */

loc_000CF674: ;
    edi = MEM32(esi + 0x190);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000CF698; /* jl: less (signed <) */

loc_000CF67E: ;
    ecx = esi;
    PUSH32(esp, 0x000CF685u); RECOMP_ABI_CALL(0x000C9E40u, sub_000C9E40); /* call 0x000C9E40 */

loc_000CF685: ;
    ecx = MEM32(esi + 0x198);
    edx = eax + ecx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);

loc_000CF691: ;
    eax = 0x7A3FBFBF;
    if (CMP_LE(_fas, _fbs)) goto loc_000CF69D; /* jle: less or equal (signed <=) */

loc_000CF698: ;
    eax = 0x7F36DC92;

loc_000CF69D: ;
    PUSH32(esp, eax);

loc_000CF69E: ;
    ecx = 0x37DD10;
    PUSH32(esp, 0x000CF6A8u); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000CF6A8: ;
    ecx = esi;
    PUSH32(esp, 0x000CF6AFu); RECOMP_ABI_CALL(0x000CD3F0u, sub_000CD3F0); /* call 0x000CD3F0 */

loc_000CF6AF: ;
    goto loc_000CF832;

loc_000CF6B4: ;
    edi = MEM32(esi + 0x190);
    ecx = MEM32(esi + 0x1A8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    eax = edi;
    PUSH32(esp, eax);
    MEM32(esi + 0x190) = edi;
    PUSH32(esp, 0x000CF6D3u); RECOMP_ABI_CALL(0x000C9000u, sub_000C9000); /* call 0x000C9000 */

loc_000CF6D3: ;
    edi = MEM32(esi + 0x190);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000CF698; /* jl: less (signed <) */

loc_000CF6DD: ;
    ecx = esi;
    PUSH32(esp, 0x000CF6E4u); RECOMP_ABI_CALL(0x000C9E40u, sub_000C9E40); /* call 0x000C9E40 */

loc_000CF6E4: ;
    edx = MEM32(esi + 0x198);
    eax = eax + edx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    goto loc_000CF691;

loc_000CF6F2: ;
    PUSH32(esp, 0x7FC0D27D);
    ecx = 0x37DD10;
    PUSH32(esp, 0x000CF701u); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000CF701: ;
    ecx = esi;
    PUSH32(esp, 0x000CF708u); RECOMP_ABI_CALL(0x000C9E40u, sub_000C9E40); /* call 0x000C9E40 */

loc_000CF708: ;
    edi = MEM32(esi + 0x190);
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x000CF717u); RECOMP_ABI_CALL(0x000C9E40u, sub_000C9E40); /* call 0x000C9E40 */

loc_000CF717: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000CF74E; /* jge: greater or equal (signed >=) */

loc_000CF71B: ;
    ecx = MEM32(esi + 0x1A8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x000CF72Au); RECOMP_ABI_CALL(0x000C9070u, sub_000C9070); /* call 0x000C9070 */

loc_000CF72A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF742; /* je: equal / zero */

loc_000CF72E: ;
    edx = MEM32(eax + edi * 4 + 0x3C);
    MEM32(esi + 0x1A8) = edx;
    MEM32(esi + 0x190) = 0xFFFFFFFFu;

loc_000CF742: ;
    ecx = esi;
    PUSH32(esp, 0x000CF749u); RECOMP_ABI_CALL(0x000CD3F0u, sub_000CD3F0); /* call 0x000CD3F0 */

loc_000CF749: ;
    goto loc_000CF832;

loc_000CF74E: ;
    eax = MEM32(esi + 0x1A8);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(ebp));
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CF760u); RECOMP_ABI_CALL(0x000C9000u, sub_000C9000); /* call 0x000C9000 */

loc_000CF760: ;
    SET_LO8(ebx, 1);
    ecx = esi;
    edi = eax;
    MEM32(esi + 0x1A0) = 0;
    MEM8(esi + 0x19C) = LO8(ebx);
    PUSH32(esp, 0x000CF77Bu); RECOMP_ABI_CALL(0x000C9CE0u, sub_000C9CE0); /* call 0x000C9CE0 */

loc_000CF77B: ;
    MEM8(edi + 0x2C) = LO8(ebx);
    ebx = MEM32(esp + 0x14);
    goto loc_000CF832;

loc_000CF787: ;
    ecx = MEM32(esi + 0x1A8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x000CF796u); RECOMP_ABI_CALL(0x000C9070u, sub_000C9070); /* call 0x000C9070 */

loc_000CF796: ;
    PUSH32(esp, 0xE3CF432Fu);
    ecx = 0x37DD10;
    edi = eax;
    PUSH32(esp, 0x000CF7A7u); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000CF7A7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF832; /* je: equal / zero */

loc_000CF7AF: ;
    eax = MEM32(edi + 0x38);
    ebp = MEM32(edi + 0x30);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    MEM32(esi + 0x1A8) = eax;
    PUSH32(esp, 0x000CF7C4u); RECOMP_ABI_CALL(0x000C9070u, sub_000C9070); /* call 0x000C9070 */

loc_000CF7C4: ;
    edx = MEM32(eax + 0x5C);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000CF7F5; /* jle: less or equal (signed <=) */

loc_000CF7CD: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x3C)) >> 32) & 1);
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000CF7D0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000CF7EF; /* je: equal / zero */

loc_000CF7D4: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000CF7D0; /* jl: less (signed <) */

loc_000CF7DC: ;
    ecx = esi;
    MEM32(esi + 0x194) = 0;
    PUSH32(esp, 0x000CF7EDu); RECOMP_ABI_CALL(0x000CD3F0u, sub_000CD3F0); /* call 0x000CD3F0 */

loc_000CF7ED: ;
    goto loc_000CF832;

loc_000CF7EF: ;
    MEM32(esi + 0x190) = ecx;

loc_000CF7F5: ;
    ecx = esi;
    MEM32(esi + 0x194) = 0;
    PUSH32(esp, 0x000CF806u); RECOMP_ABI_CALL(0x000CD3F0u, sub_000CD3F0); /* call 0x000CD3F0 */

loc_000CF806: ;
    goto loc_000CF832;

loc_000CF808: ;
    MEM8(esi + 0x19C) = 0;
    PUSH32(esp, 0xE3CF432Fu);
    goto loc_000CF69E;

loc_000CF819: ;
    edx = ebx + -1;
    MEM32(esi + 0x1A0) = edx;
    goto loc_000CF82D;

loc_000CF824: ;
    eax = ebx + 1;
    MEM32(esi + 0x1A0) = eax;

loc_000CF82D: ;
    MEM8(esp + 0x13) = 1;

loc_000CF832: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000CF84F; /* jl: less (signed <) */

loc_000CF83B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000CF84F; /* jg: greater (signed >) */

loc_000CF840: ;
    PUSH32(esp, 0x68913E38);
    ecx = 0x37DD10;
    PUSH32(esp, 0x000CF84Fu); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000CF84F: ;
    ecx = esi;
    PUSH32(esp, 0x000CF856u); RECOMP_ABI_CALL(0x000CEE90u, sub_000CEE90); /* call 0x000CEE90 */

loc_000CF856: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000CF88D; /* je: equal / zero */

loc_000CF85F: ;
    ebp = MEM32(esi + 0x1A0);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x4F71CD3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x7A3FBFBF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x7A3FBFBF)) >> 32) & 1);
    ecx = ecx + 0x7A3FBFBF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = ecx;
    ecx = 0x37DD10;
    g_seh_ebp = ebp; sub_00152580(); return; /* tail jmp 0x00152580 */

loc_000CF88D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF8E0
 * Original: 0x000CF8E0 - 0x000CF901 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF8E0: ;
    SET_LO8(edx, MEM8(ecx + 0x524));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = ecx + 0x524;
    if (CMP_EQ(_fa, _fb)) goto loc_000CF900; /* je: equal / zero */

loc_000CF8F0: ;
    ecx = MEM32(ecx + 0x520);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF900; /* je: equal / zero */

loc_000CF8FA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CF900u); RECOMP_ABI_CALL(0x00113A50u, sub_00113A50); /* call 0x00113A50 */

loc_000CF900: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF910
 * Original: 0x000CF910 - 0x000CF942 (50 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF910: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x330);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF93D; /* je: equal / zero */

loc_000CF922: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF92C; /* je: equal / zero */

loc_000CF926: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000CF92Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CF929u); } /* indirect call */
    }

loc_000CF92C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x330) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000CF93D; /* je: equal / zero */

loc_000CF936: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000CF93Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CF93Bu); } /* indirect call */
    }

loc_000CF93D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF950
 * Original: 0x000CF950 - 0x000CF97E (46 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF950: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x64);
    PUSH32(esp, ecx);
    edx = esi + 0x524;
    PUSH32(esp, edx);
    MEM32(esi + 0x520) = eax;
    PUSH32(esp, 0x000CF970u); RECOMP_ABI_CALL(0x00237FC0u, sub_00237FC0); /* call 0x00237FC0 */

loc_000CF970: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x587) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CF980
 * Original: 0x000CF980 - 0x000CF9D0 (80 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF980: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    ecx = esi + 0x450;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000CF996u); RECOMP_ABI_CALL(0x00237FC0u, sub_00237FC0); /* call 0x00237FC0 */

loc_000CF996: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0x64);
    PUSH32(esp, edx);
    eax = esi + 0x4B4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CF9A9u); RECOMP_ABI_CALL(0x00237FC0u, sub_00237FC0); /* call 0x00237FC0 */

loc_000CF9A9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x4B3) = LO8(eax);
    MEM8(esi + 0x517) = LO8(eax);
    MEM32(esi + 0x334) = esi;
    MEM32(esi + 0x520) = eax;
    MEM8(esi + 0x524) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CF9D0
 * Original: 0x000CF9D0 - 0x000CFA8D (189 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF9D0(void)
{

loc_000CF9D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0xE1BC1D11u);
    esi = ecx;
    PUSH32(esp, 0x000CF9E8u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CF9E8: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42800000);
    PUSH32(esp, 0x44000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000CFA0Bu); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000CFA0B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0xA54E2DE7u);
    ecx = esi;
    PUSH32(esp, 0x000CFA22u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CFA22: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41C00000);
    PUSH32(esp, 0x429A0000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x41200000);
    ecx = esi;
    PUSH32(esp, 0x000CFA4Bu); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000CFA4B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x1228E1D8);
    ecx = esi;
    PUSH32(esp, 0x000CFA62u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CFA62: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41C00000);
    PUSH32(esp, 0x42A80000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x43CF8000);
    ecx = esi;
    PUSH32(esp, 0x000CFA8Bu); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000CFA8B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000CFA90
 * Original: 0x000CFA90 - 0x000CFDDC (844 bytes, 226 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFA90(void)
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

loc_000CFA90: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x4879FCCE);
    esi = ecx;
    PUSH32(esp, 0x000CFAA8u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CFAA8: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41B80000);
    PUSH32(esp, 0x43360000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000CFACBu); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000CFACB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x5F3A5818);
    ecx = esi;
    PUSH32(esp, 0x000CFAE2u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CFAE2: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x432A0000);
    PUSH32(esp, 0x43360000);
    PUSH32(esp, 0x41B80000);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000CFB08u); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000CFB08: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x69D27757);
    ecx = esi;
    PUSH32(esp, 0x000CFB1Fu); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CFB1F: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41B80000);
    PUSH32(esp, 0x43360000);
    PUSH32(esp, 0x43410000);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000CFB45u); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000CFB45: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x5F3A5818);
    ecx = esi;
    PUSH32(esp, 0x000CFB5Cu); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CFB5C: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x430C0000);
    PUSH32(esp, 0x43360000);
    PUSH32(esp, 0x43580000);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000CFB82u); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000CFB82: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x4C91D38);
    ecx = esi;
    PUSH32(esp, 0x000CFB99u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CFB99: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41100000);
    PUSH32(esp, 0x43360000);
    PUSH32(esp, 0x43B20000);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000CFBBFu); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000CFBBF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0xA76FDEBAu);
    ecx = esi;
    PUSH32(esp, 0x000CFBD6u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CFBD6: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43140000);
    PUSH32(esp, 0x42CA0000);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x41200000);
    ecx = esi;
    PUSH32(esp, 0x000CFBFFu); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000CFBFF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x9AD928C1u);
    ecx = esi;
    PUSH32(esp, 0x000CFC16u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CFC16: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x431A0000);
    PUSH32(esp, 0x429A0000);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x42DC0000);
    ecx = esi;
    PUSH32(esp, 0x000CFC3Fu); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000CFC3F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0xF4606B44u);
    ecx = esi;
    PUSH32(esp, 0x000CFC56u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CFC56: ;
    eax = MEM32(esi + 0x188);
    PUSH32(esp, 0x3EC80000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43020000);
    PUSH32(esp, 0x432C0000);
    PUSH32(esp, 0x43600000);
    PUSH32(esp, 0x41000000);
    ecx = esi;
    PUSH32(esp, 0x000CFC84u); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000CFC84: ;
    eax = ZX8(MEM8(esi + 0x184));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000CFCE7; /* je: equal / zero */

loc_000CFC8E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000CFD27; /* jne: not equal / not zero */

loc_000CFC95: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x24B8CB56);
    ecx = esi;
    PUSH32(esp, 0x000CFCACu); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CFCAC: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42840000);
    PUSH32(esp, 0x43770000);
    PUSH32(esp, 0xC0800000u);
    PUSH32(esp, 0xC3870000u);
    ecx = esi;
    PUSH32(esp, 0x000CFCD5u); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000CFCD5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0xF9AD13F);
    goto loc_000CFCF7;

loc_000CFCE7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x24B8CB56);

loc_000CFCF7: ;
    ecx = esi;
    PUSH32(esp, 0x000CFCFEu); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CFCFE: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42840000);
    PUSH32(esp, 0x43770000);
    PUSH32(esp, 0xC0800000u);
    ecx = esi;
    PUSH32(esp, 0xC3870000u);
    PUSH32(esp, 0x000CFD27u); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000CFD27: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x18C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC8A0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000CFDDA; /* jnp: not parity */

loc_000CFD44: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x190)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000CFDDA; /* jnp: not parity */

loc_000CFD59: ;
    fp_push(MEMF(esi + 0x198)); /* fld float */
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E2440)); /* fmul dword ptr [0x2e2440] */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000CFD70u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_000CFD70: ;
    ecx = ZX8(LO8(eax));
    ecx = ecx << 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | 0x808080;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1F83AB18);
    ecx = esi;
    PUSH32(esp, 0x000CFD89u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CFD89: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x194)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E8BC0); /* mulss */
    edx = MEM32(esi + 0x190);
    eax = MEM32(esi + 0x18C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x194)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E7D1C); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000CFDDAu); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000CFDDA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CFDE0
 * Original: 0x000CFDE0 - 0x000D00AD (717 bytes, 196 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFDE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x4879FCCE);
    esi = ecx;
    PUSH32(esp, 0x000CFDF8u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CFDF8: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41B80000);
    PUSH32(esp, 0x43360000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000CFE1Bu); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000CFE1B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x5F3A5818);
    ecx = esi;
    PUSH32(esp, 0x000CFE32u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CFE32: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x432A0000);
    PUSH32(esp, 0x43360000);
    PUSH32(esp, 0x41B80000);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000CFE58u); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000CFE58: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x69D27757);
    ecx = esi;
    PUSH32(esp, 0x000CFE6Fu); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CFE6F: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41B80000);
    PUSH32(esp, 0x43360000);
    PUSH32(esp, 0x43410000);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000CFE95u); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000CFE95: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x5F3A5818);
    ecx = esi;
    PUSH32(esp, 0x000CFEACu); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CFEAC: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x430C0000);
    PUSH32(esp, 0x43360000);
    PUSH32(esp, 0x43580000);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000CFED2u); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000CFED2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x4C91D38);
    ecx = esi;
    PUSH32(esp, 0x000CFEE9u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CFEE9: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41100000);
    PUSH32(esp, 0x43360000);
    PUSH32(esp, 0x43B20000);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000CFF0Fu); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000CFF0F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0xA76FDEBAu);
    ecx = esi;
    PUSH32(esp, 0x000CFF26u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CFF26: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43160000);
    PUSH32(esp, 0x42A00000);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x41A00000);
    ecx = esi;
    PUSH32(esp, 0x000CFF4Fu); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000CFF4F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x9AD928C1u);
    ecx = esi;
    PUSH32(esp, 0x000CFF66u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CFF66: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x431A0000);
    PUSH32(esp, 0x429A0000);
    PUSH32(esp, 0x42000000);
    PUSH32(esp, 0x42C80000);
    ecx = esi;
    PUSH32(esp, 0x000CFF8Fu); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000CFF8F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0xF4606B44u);
    ecx = esi;
    PUSH32(esp, 0x000CFFA6u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CFFA6: ;
    eax = MEM32(esi + 0x188);
    PUSH32(esp, 0x3EC80000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43020000);
    PUSH32(esp, 0x432C0000);
    PUSH32(esp, 0x43600000);
    PUSH32(esp, 0x41000000);
    ecx = esi;
    PUSH32(esp, 0x000CFFD4u); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000CFFD4: ;
    SET_LO8(eax, MEM8(esi + 0x184));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D00AB; /* je: equal / zero */

loc_000CFFE2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x46C8852D);
    ecx = esi;
    PUSH32(esp, 0x000CFFF9u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000CFFF9: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43800000);
    PUSH32(esp, 0x43800000);
    PUSH32(esp, 0x420C0000);
    PUSH32(esp, 0xC3870000u);
    ecx = esi;
    PUSH32(esp, 0x000D0022u); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000D0022: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x63491573);
    ecx = esi;
    PUSH32(esp, 0x000D0039u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000D0039: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42A00000);
    PUSH32(esp, 0x43800000);
    PUSH32(esp, 0x43910000);
    PUSH32(esp, 0xC3870000u);
    ecx = esi;
    PUSH32(esp, 0x000D0062u); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000D0062: ;
    _fa = (uint32_t)(MEM8(esi + 0x184)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x184), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D00AB; /* jne: not equal / not zero */

loc_000D006B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80808080u);
    PUSH32(esp, 0x3AFE0393);
    ecx = esi;
    PUSH32(esp, 0x000D0082u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000D0082: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x425C0000);
    PUSH32(esp, 0x43800000);
    PUSH32(esp, 0xC0800000u);
    PUSH32(esp, 0xC3870000u);
    ecx = esi;
    PUSH32(esp, 0x000D00ABu); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000D00AB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D00B0
 * Original: 0x000D00B0 - 0x000D00FF (79 bytes, 15 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D00B0(void)
{

loc_000D00B0: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x30) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x34) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(ecx + 0x38) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm1.f[0]; /* movss */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000D0100
 * Original: 0x000D0100 - 0x000D017E (126 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0100(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000D0100: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm2.f[0]; _fcb = MEMF(ecx + 0x30); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D0171; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(ecx + 0x30)) */

loc_000D0116: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x3C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D0167; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000D0120: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x30); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x30); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm1.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_000D0167: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */

loc_000D0171: ;
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm1.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0180
 * Original: 0x000D0180 - 0x000D0317 (407 bytes, 83 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0180(void)
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

loc_000D0180: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000D018Du); RECOMP_ABI_CALL(0x000D0100u, sub_000D0100); /* call 0x000D0100 */

loc_000D018D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DDC40); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D01DE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DDC40)) */

loc_000D019C: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2DDC40)); /* fsub dword ptr [0x2ddc40] */
    edi = ZX8(MEM8(esi + 0x184));
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    PUSH32(esp, 0x000D01B5u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_000D01B5: ;
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    MEM8(esi + 0x184) = LO8(eax);
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000D01D8; /* jne: not equal / not zero */

loc_000D01C5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D01D8; /* jne: not equal / not zero */

loc_000D01C9: ;
    PUSH32(esp, 0x6316F007);
    ecx = 0x37DD10;
    PUSH32(esp, 0x000D01D8u); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000D01D8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_000D01DE: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D020E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000D01EB: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC3D0); /* mulss */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm3.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    MEMF(esi + 0x188) = xmm1.f[0]; /* movss */

loc_000D020E: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D0298; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D021B: ;
    xmm2 = XMM_SCALAR(MEMF(0x2DDA34)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D027C; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000D0228: ;
    xmm2 = XMM_SCALAR(MEMF(0x2E8BCC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    MEMF(esi + 0x18C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DD8EC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esi + 0x190) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2DBED0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x194) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x198) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D027C: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC8A0)); /* movss */
    MEMF(esi + 0x18C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x190) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D0298: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC3F0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000D027C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000D02A5: ;
    xmm3 = XMM_SCALAR(MEMF(0x2DC350)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E8BC8); /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2E8BC4); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC090); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2E7038); /* mulss */
    MEMF(esi + 0x18C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x2E7D18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esi + 0x194) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x190) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x198) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D0320
 * Original: 0x000D0320 - 0x000D0330 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0320: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D032Du); RECOMP_ABI_CALL(0x000D0180u, sub_000D0180); /* call 0x000D0180 */

loc_000D032D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0330
 * Original: 0x000D0330 - 0x000D0398 (104 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0330(void)
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

loc_000D0330: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000D033Du); RECOMP_ABI_CALL(0x000D0100u, sub_000D0100); /* call 0x000D0100 */

loc_000D033D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC090); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D0367; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC090)) */

loc_000D034C: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    PUSH32(esp, 0x000D0357u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_000D0357: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x184) = LO8(eax);

loc_000D0367: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D0394; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D0374: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC3D0); /* mulss */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x188) = xmm0.f[0]; /* movss */

loc_000D0394: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D03A0
 * Original: 0x000D03A0 - 0x000D03B0 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D03A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D03A0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D03ADu); RECOMP_ABI_CALL(0x000D0330u, sub_000D0330); /* call 0x000D0330 */

loc_000D03AD: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D03B0
 * Original: 0x000D03B0 - 0x000D0413 (99 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D03B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D03B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x51C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D03D5; /* je: equal / zero */

loc_000D03BF: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(MEM32(esi + 0x518)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x518);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x6921A0); /* mulss */
    goto loc_000D03D8;

loc_000D03D5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000D03D8: ;
    PUSH32(esp, 0);
    ecx = 0x4140CC;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000D03EAu); RECOMP_ABI_CALL(0x001FFBB0u, sub_001FFBB0); /* call 0x001FFBB0 */

loc_000D03EA: ;
    eax = MEM32(esi + 0x330);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_000D0401; /* je: equal / zero */

loc_000D03F8: ;
    ecx = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D0401u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D03FEu); } /* indirect call */
    }

loc_000D0401: ;
    PUSH32(esp, edi);
    ecx = esi + 0x388;
    PUSH32(esp, 0x000D040Du); RECOMP_ABI_CALL(0x000D0100u, sub_000D0100); /* call 0x000D0100 */

loc_000D040D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0420
 * Original: 0x000D0420 - 0x000D042E (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0420(void)
{

loc_000D0420: ;
    MEM32(ecx) = 0x2E8BD0;
    MEM32(ecx + 4) = 0x2E6470;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0430
 * Original: 0x000D0430 - 0x000D043E (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0430(void)
{

loc_000D0430: ;
    MEM32(ecx) = 0x2E8BE0;
    MEM32(ecx + 4) = 0x2E6470;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0440
 * Original: 0x000D0440 - 0x000D045E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0440: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000D0448u); RECOMP_ABI_CALL(0x000D0420u, sub_000D0420); /* call 0x000D0420 */

loc_000D0448: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D0458; /* je: equal / zero */

loc_000D044F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D0455u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000D0455: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D0458: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0460
 * Original: 0x000D0460 - 0x000D047E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0460: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000D0468u); RECOMP_ABI_CALL(0x000D0430u, sub_000D0430); /* call 0x000D0430 */

loc_000D0468: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D0478; /* je: equal / zero */

loc_000D046F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D0475u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000D0475: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D0478: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0480
 * Original: 0x000D0480 - 0x000D04EB (107 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0480: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2422D6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = esi + 0x338;
    MEM32(esp + 0x10) = 1;
    MEM32(esi + 0x388) = 0x2E6470;
    PUSH32(esp, 0x000D04BAu); RECOMP_ABI_CALL(0x00209670u, sub_00209670); /* call 0x00209670 */

loc_000D04BA: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x190) = 0x2E8BE0;
    MEM32(esi + 0x194) = 0x2E6470;
    MEM32(esi) = 0x2E8BD0;
    MEM32(esi + 4) = 0x2E6470;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D04F0
 * Original: 0x000D04F0 - 0x000D06C2 (466 bytes, 152 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D04F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D04F0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x4A80C22D);
    PUSH32(esp, 0x40);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x78);
    edi = ecx;
    PUSH32(esp, 0xE1BC1D11u);
    ecx = esp + 0x30;
    PUSH32(esp, 0x000D051Fu); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D051F: ;
    ecx = MEM32(eax);
    MEM32(edi + 0x40) = ecx;
    edx = MEM32(eax + 4);
    MEM32(edi + 0x44) = edx;
    ecx = MEM32(eax + 8);
    esi = edi + 0x40;
    MEM32(esi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esi + 0xC) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(esi + 0x1C) = edx;
    ebx = MEM32(0x842E20);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D056Bu); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D056B: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x4A80C22D);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x4D);
    MEM32(ecx + eax * 4) = esi;
    edx = MEM32(ebx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0xA54E2DE7u);
    ecx = esp + 0x30;
    MEM32(ebx + 4) = edx;
    PUSH32(esp, 0x000D05A2u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D05A2: ;
    edx = MEM32(eax);
    MEM32(edi + 0xA0) = edx;
    ecx = MEM32(eax + 4);
    MEM32(edi + 0xA4) = ecx;
    edx = MEM32(eax + 8);
    esi = edi + 0xA0;
    MEM32(esi + 8) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = edx;
    eax = MEM32(eax + 0x1C);
    MEM32(esi + 0x1C) = eax;
    ebx = MEM32(0x842E20);
    eax = MEM32(esi);
    ecx = MEM32(ebx + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebx + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D05F7u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D05F7: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x4A80C22D);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x54);
    MEM32(ecx + eax * 4) = esi;
    edx = MEM32(ebx + 4);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1228E1D8);
    ecx = esp + 0x30;
    MEM32(ebx + 4) = edx;
    PUSH32(esp, 0x000D062Eu); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D062E: ;
    edx = MEM32(eax);
    MEM32(edi + 0x80) = edx;
    ecx = MEM32(eax + 4);
    MEM32(edi + 0x84) = ecx;
    edx = MEM32(eax + 8);
    esi = edi + 0x80;
    MEM32(esi + 8) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = edx;
    eax = MEM32(eax + 0x1C);
    MEM32(esi + 0x1C) = eax;
    ebx = MEM32(0x842E20);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D0683u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D0683: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    MEM32(ecx + eax * 4) = esi;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, 0x43CD0000);
    PUSH32(esp, 0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x43FA0000);
    MEM32(ebx + 4) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000D06AFu); RECOMP_ABI_CALL(0x000D00B0u, sub_000D00B0); /* call 0x000D00B0 */

loc_000D06AF: ;
    edx = MEM32(esp + 0x30);
    MEM32(edi + 0xC0) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D06D0
 * Original: 0x000D06D0 - 0x000D0711 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D06D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D06D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(0x842E20);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D06E8u); RECOMP_ABI_CALL(0x002077D0u, sub_002077D0); /* call 0x002077D0 */

loc_000D06E8: ;
    ecx = MEM32(esi + 0xA0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x842E20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D06FDu); RECOMP_ABI_CALL(0x002077D0u, sub_002077D0); /* call 0x002077D0 */

loc_000D06FD: ;
    edx = MEM32(esi + 0x40);
    ecx = MEM32(0x842E20);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D070Fu); RECOMP_ABI_CALL(0x002077D0u, sub_002077D0); /* call 0x002077D0 */

loc_000D070F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D0720
 * Original: 0x000D0720 - 0x000D0D71 (1617 bytes, 493 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D0720: ;
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x138);
    _fb = (uint32_t)(0x4B4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4B4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    eax = esp + 0x38;
    PUSH32(esp, 0x2E8C80);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000D0749u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000D0749: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D0753u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000D0753: ;
    PUSH32(esp, edi);
    edx = esp + 0x48;
    PUSH32(esp, 0x2E8C68);
    PUSH32(esp, edx);
    ebp = eax;
    PUSH32(esp, 0x000D0765u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000D0765: ;
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D076Fu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000D076F: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x5AD25FFB);
    PUSH32(esp, 2);
    PUSH32(esp, 0xB6);
    PUSH32(esp, 0xA2);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F3A5818);
    ecx = esp + 0x38;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x000D07A3u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D07A3: ;
    ecx = MEM32(eax);
    MEM32(esi + 0xA4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0xA8) = edx;
    ecx = MEM32(eax + 8);
    edi = esi + 0xA4;
    MEM32(edi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = edx;
    ebx = MEM32(0x842E20);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D07F8u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D07F8: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x5AD25FFB);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0xB6);
    MEM32(ecx + eax * 4) = edi;
    edx = MEM32(ebx + 4);
    PUSH32(esp, 0x8A);
    PUSH32(esp, 0);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x4879FCCE);
    ecx = esp + 0x38;
    MEM32(ebx + 4) = edx;
    PUSH32(esp, 0x000D0835u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D0835: ;
    edx = MEM32(eax);
    MEM32(esi + 0x84) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x88) = ecx;
    edx = MEM32(eax + 8);
    edi = esi + 0x84;
    MEM32(edi + 8) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = edx;
    eax = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = eax;
    ebx = MEM32(0x842E20);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D088Au); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D088A: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x5AD25FFB);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0xB6);
    MEM32(ecx + eax * 4) = edi;
    edx = MEM32(ebx + 4);
    PUSH32(esp, 0xA7);
    PUSH32(esp, 0);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x69D27757);
    ecx = esp + 0x38;
    MEM32(ebx + 4) = edx;
    PUSH32(esp, 0x000D08C7u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D08C7: ;
    edx = MEM32(eax);
    MEM32(esi + 0x64) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x68) = ecx;
    edx = MEM32(eax + 8);
    edi = esi + 0x64;
    MEM32(edi + 8) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = edx;
    eax = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = eax;
    ebx = MEM32(0x842E20);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D0913u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D0913: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(ecx + eax * 4) = edi;
    edx = MEM32(ebx + 4);
    PUSH32(esp, 0x100);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x100);
    MEM32(ebx + 4) = edx;
    PUSH32(esp, 0x5AD25FFB);
    PUSH32(esp, 9);
    PUSH32(esp, 0xB6);
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4C91D38);
    ecx = esp + 0x38;
    PUSH32(esp, 0x000D0950u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D0950: ;
    edx = MEM32(eax);
    MEM32(esi + 0x44) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x48) = ecx;
    edx = MEM32(eax + 8);
    edi = esi + 0x44;
    MEM32(edi + 8) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = edx;
    eax = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = eax;
    ebx = MEM32(0x842E20);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D099Cu); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D099C: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x5AD25FFB);
    PUSH32(esp, 0x42);
    PUSH32(esp, 0xF7);
    MEM32(ecx + eax * 4) = edi;
    edx = MEM32(ebx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x24B8CB56);
    ecx = esp + 0x38;
    MEM32(ebx + 4) = edx;
    PUSH32(esp, 0x000D09D6u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D09D6: ;
    edx = MEM32(eax);
    MEM32(esi + 0xC4) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0xC8) = ecx;
    edx = MEM32(eax + 8);
    edi = esi + 0xC4;
    MEM32(edi + 8) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = edx;
    eax = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = eax;
    ebx = MEM32(0x842E20);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D0A2Bu); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D0A2B: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + eax * 4) = edi;
    edx = MEM32(ebx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x5AD25FFB);
    PUSH32(esp, 0x42);
    PUSH32(esp, 0xF7);
    PUSH32(esp, 0x42);
    PUSH32(esp, 0);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0xF9AD13F);
    ecx = esp + 0x38;
    MEM32(ebx + 4) = edx;
    PUSH32(esp, 0x000D0A65u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D0A65: ;
    edx = MEM32(eax);
    MEM32(esi + 0xE4) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0xE8) = ecx;
    edx = MEM32(eax + 8);
    edi = esi + 0xE4;
    MEM32(edi + 8) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = edx;
    eax = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = eax;
    ebx = MEM32(0x842E20);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D0ABAu); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D0ABA: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x65);
    MEM32(ecx + eax * 4) = edi;
    edx = MEM32(ebx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0xA76FDEBAu);
    ecx = esp + 0x38;
    MEM32(ebx + 4) = edx;
    PUSH32(esp, 0x000D0AF0u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D0AF0: ;
    edx = MEM32(eax);
    MEM32(esi + 0x104) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x108) = ecx;
    edx = MEM32(eax + 8);
    edi = esi + 0x104;
    MEM32(edi + 8) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = edx;
    eax = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = eax;
    ebx = MEM32(0x842E20);
    ecx = MEM32(ebx + 0x10);
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    edx = MEM32(ebx + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D0B45u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D0B45: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(ecx + eax * 4) = edi;
    edx = MEM32(ebx + 4);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 4) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x9A);
    PUSH32(esp, 0x4D);
    PUSH32(esp, 0);
    PUSH32(esp, 0xB2);
    PUSH32(esp, 0x9AD928C1u);
    ecx = esp + 0x38;
    PUSH32(esp, 0x000D0B82u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D0B82: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x124) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x128) = edx;
    ecx = MEM32(eax + 8);
    edi = esi + 0x124;
    MEM32(edi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = edx;
    ebx = MEM32(0x842E20);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D0BD7u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D0BD7: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(ecx + eax * 4) = edi;
    edx = MEM32(ebx + 4);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 4) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0xAC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF4606B44u);
    ecx = esp + 0x38;
    PUSH32(esp, 0x000D0C14u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D0C14: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x144) = ecx;
    edx = MEM32(eax + 4);
    edi = esi + 0x144;
    MEM32(edi + 4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(edi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = edx;
    ebx = MEM32(0x842E20);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D0C66u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D0C66: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x52);
    PUSH32(esp, 0x3E);
    MEM32(ecx + eax * 4) = edi;
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1F83AB18);
    ecx = esp + 0x38;
    MEM32(ebx + 4) = eax;
    PUSH32(esp, 0x000D0C99u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D0C99: ;
    edx = MEM32(eax);
    MEM32(esi + 0x164) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x168) = ecx;
    edx = MEM32(eax + 8);
    edi = esi + 0x164;
    MEM32(edi + 8) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = edx;
    eax = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = eax;
    ebx = MEM32(0x842E20);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D0CEEu); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D0CEE: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41A00000);
    MEM32(ecx + eax * 4) = edi;
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0x439B0000);
    PUSH32(esp, 0x41A00000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x44160000);
    ecx = esi;
    MEM32(ebx + 4) = eax;
    PUSH32(esp, 0x000D0D20u); RECOMP_ABI_CALL(0x000D00B0u, sub_000D00B0); /* call 0x000D00B0 */

loc_000D0D20: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 0x138);
    MEMF(esi + 0x188) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC8A0)); /* movss */
    MEMF(esi + 0x18C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x190) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEM8(esi + 0x184) = 0;
    MEMF(esi + 0x194) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x40) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0D80
 * Original: 0x000D0D80 - 0x000D0DA4 (36 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0D80(void)
{

loc_000D0D80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000D0D91u); RECOMP_ABI_CALL(0x000D0720u, sub_000D0720); /* call 0x000D0720 */

loc_000D0D91: ;
    PUSH32(esp, 9);
    PUSH32(esp, esi);
    ecx = edi + 0x338;
    PUSH32(esp, 0x000D0D9Fu); RECOMP_ABI_CALL(0x0020B770u, sub_0020B770); /* call 0x0020B770 */

loc_000D0D9F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0DB0
 * Original: 0x000D0DB0 - 0x000D0DCF (31 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0DB0: ;
    PUSH32(esp, esi);
    esi = ecx + 4;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x338) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x338;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D0DC4u); RECOMP_ABI_CALL(0x0020B800u, sub_0020B800); /* call 0x0020B800 */

loc_000D0DC4: ;
    ecx = esi;
    PUSH32(esp, 0x000D0DCBu); RECOMP_ABI_CALL(0x000D1410u, sub_000D1410); /* call 0x000D1410 */

loc_000D0DCB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0DD0
 * Original: 0x000D0DD0 - 0x000D140E (1598 bytes, 497 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D0DD0: ;
    _fb = (uint32_t)(0x128) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x128;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x13C);
    _fb = (uint32_t)(0x4B4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4B4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    eax = esp + 0x3C;
    PUSH32(esp, 0x2E8C80);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000D0DF9u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000D0DF9: ;
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D0E03u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000D0E03: ;
    PUSH32(esp, edi);
    edx = esp + 0x4C;
    PUSH32(esp, 0x2E8C68);
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x000D0E17u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000D0E17: ;
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D0E21u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000D0E21: ;
    PUSH32(esp, edi);
    ecx = esp + 0x5C;
    PUSH32(esp, 0x2E8C98);
    PUSH32(esp, ecx);
    ebp = eax;
    PUSH32(esp, 0x000D0E33u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000D0E33: ;
    edx = esp + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D0E3Du); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000D0E3D: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x5AD25FFB);
    PUSH32(esp, 2);
    PUSH32(esp, 0xB6);
    PUSH32(esp, 0xA2);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F3A5818);
    ecx = esp + 0x3C;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x000D0E71u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D0E71: ;
    ecx = MEM32(eax);
    MEM32(esi + 0xA4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0xA8) = edx;
    ecx = MEM32(eax + 8);
    edi = esi + 0xA4;
    MEM32(edi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = edx;
    ebx = MEM32(0x842E20);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D0EC6u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D0EC6: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + eax * 4) = edi;
    edx = MEM32(ebx + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    MEM32(ebx + 4) = edx;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x5AD25FFB);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0xB6);
    PUSH32(esp, 0x8A);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4879FCCE);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x000D0F03u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D0F03: ;
    edx = MEM32(eax);
    MEM32(esi + 0x84) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x88) = ecx;
    edx = MEM32(eax + 8);
    edi = esi + 0x84;
    MEM32(edi + 8) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = edx;
    eax = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = eax;
    ebx = MEM32(0x842E20);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D0F58u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D0F58: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x5AD25FFB);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0xB6);
    MEM32(ecx + eax * 4) = edi;
    edx = MEM32(ebx + 4);
    PUSH32(esp, 0xA7);
    PUSH32(esp, 0);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x69D27757);
    ecx = esp + 0x3C;
    MEM32(ebx + 4) = edx;
    PUSH32(esp, 0x000D0F95u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D0F95: ;
    edx = MEM32(eax);
    MEM32(esi + 0x64) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x68) = ecx;
    edx = MEM32(eax + 8);
    edi = esi + 0x64;
    MEM32(edi + 8) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = edx;
    eax = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = eax;
    ebx = MEM32(0x842E20);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D0FE1u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D0FE1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x5AD25FFB);
    PUSH32(esp, 9);
    PUSH32(esp, 0xB6);
    MEM32(ecx + eax * 4) = edi;
    edx = MEM32(ebx + 4);
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x4C91D38);
    ecx = esp + 0x3C;
    MEM32(ebx + 4) = edx;
    PUSH32(esp, 0x000D101Eu); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D101E: ;
    edx = MEM32(eax);
    MEM32(esi + 0x44) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x48) = ecx;
    edx = MEM32(eax + 8);
    edi = esi + 0x44;
    MEM32(edi + 8) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = edx;
    eax = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = eax;
    ebx = MEM32(0x842E20);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D106Au); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D106A: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(ecx + eax * 4) = edi;
    edx = MEM32(ebx + 4);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 4) = edx;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA76FDEBAu);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x000D10A4u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D10A4: ;
    ecx = MEM32(eax);
    MEM32(esi + 0xC4) = ecx;
    edx = MEM32(eax + 4);
    edi = esi + 0xC4;
    MEM32(edi + 4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(edi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = edx;
    ebx = MEM32(0x842E20);
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx);
    edx = MEM32(ebx + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D10F5u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D10F5: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x9A);
    PUSH32(esp, 0x4D);
    MEM32(ecx + eax * 4) = edi;
    edx = MEM32(ebx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0xB2);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x9AD928C1u);
    ecx = esp + 0x3C;
    MEM32(ebx + 4) = edx;
    PUSH32(esp, 0x000D112Eu); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D112E: ;
    edx = MEM32(eax);
    MEM32(esi + 0xE4) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0xE8) = ecx;
    edx = MEM32(eax + 8);
    edi = esi + 0xE4;
    MEM32(edi + 8) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = edx;
    eax = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = eax;
    ebx = MEM32(0x842E20);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D1183u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D1183: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0xAC);
    MEM32(ecx + eax * 4) = edi;
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0xF4606B44u);
    ecx = esp + 0x3C;
    MEM32(ebx + 4) = eax;
    PUSH32(esp, 0x000D11BCu); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D11BC: ;
    edx = MEM32(eax);
    MEM32(esi + 0x104) = edx;
    ecx = MEM32(eax + 4);
    edi = esi + 0x104;
    MEM32(edi + 4) = ecx;
    edx = MEM32(eax + 8);
    MEM32(edi + 8) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = edx;
    eax = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = eax;
    ebx = MEM32(0x842E20);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D120Eu); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D120E: ;
    ebp = MEM32(esp + 0x1C);
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x37);
    MEM32(ecx + eax * 4) = edi;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x3C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    MEM32(ebx + 4) = ecx;
    PUSH32(esp, 0x3AFE0393);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x000D1248u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D1248: ;
    edx = MEM32(eax);
    MEM32(esi + 0x124) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x128) = ecx;
    edx = MEM32(eax + 8);
    edi = esi + 0x124;
    MEM32(edi + 8) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = edx;
    eax = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = eax;
    ebx = MEM32(0x842E20);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D129Du); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D129D: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x100);
    MEM32(ecx + eax * 4) = edi;
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0x76);
    PUSH32(esp, 0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x63491573);
    ecx = esp + 0x3C;
    MEM32(ebx + 4) = eax;
    PUSH32(esp, 0x000D12D3u); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D12D3: ;
    edx = MEM32(eax);
    edi = esi + 0x144;
    MEM32(edi) = edx;
    ecx = MEM32(eax + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(eax + 8);
    MEM32(edi + 8) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = edx;
    eax = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = eax;
    ebx = MEM32(0x842E20);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D1321u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D1321: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xD0ECA306u);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x80);
    MEM32(ecx + eax * 4) = edi;
    edi = MEM32(ebx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x46C8852D);
    ecx = esp + 0x3C;
    MEM32(ebx + 4) = edi;
    PUSH32(esp, 0x000D135Eu); RECOMP_ABI_CALL(0x00216E60u, sub_00216E60); /* call 0x00216E60 */

loc_000D135E: ;
    edx = MEM32(eax);
    MEM32(esi + 0x164) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x168) = ecx;
    edx = MEM32(eax + 8);
    edi = esi + 0x164;
    MEM32(edi + 8) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(edi + 0x10) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = edx;
    eax = MEM32(eax + 0x1C);
    MEM32(edi + 0x1C) = eax;
    ebx = MEM32(0x842E20);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D13B3u); RECOMP_ABI_CALL(0x001F2A60u, sub_001F2A60); /* call 0x001F2A60 */

loc_000D13B3: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41A00000);
    MEM32(ecx + eax * 4) = edi;
    eax = MEM32(ebx + 4);
    PUSH32(esp, 0x439B0000);
    PUSH32(esp, 0x41A00000);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x44160000);
    ecx = esi;
    MEM32(ebx + 4) = eax;
    PUSH32(esp, 0x000D13E5u); RECOMP_ABI_CALL(0x000D00B0u, sub_000D00B0); /* call 0x000D00B0 */

loc_000D13E5: ;
    MEM8(esi + 0x184) = 0;
    edx = MEM32(esp + 0x13C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, edi);
    MEMF(esi + 0x188) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x40) = edx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x128) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x128;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1410
 * Original: 0x000D1410 - 0x000D14E1 (209 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1410: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x164);
    ecx = MEM32(0x842E20);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D1428u); RECOMP_ABI_CALL(0x002077D0u, sub_002077D0); /* call 0x002077D0 */

loc_000D1428: ;
    ecx = MEM32(esi + 0x144);
    PUSH32(esp, ecx);
    ecx = MEM32(0x842E20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D143Du); RECOMP_ABI_CALL(0x002077D0u, sub_002077D0); /* call 0x002077D0 */

loc_000D143D: ;
    edx = MEM32(esi + 0x124);
    ecx = MEM32(0x842E20);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D1452u); RECOMP_ABI_CALL(0x002077D0u, sub_002077D0); /* call 0x002077D0 */

loc_000D1452: ;
    eax = MEM32(esi + 0x104);
    ecx = MEM32(0x842E20);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D1467u); RECOMP_ABI_CALL(0x002077D0u, sub_002077D0); /* call 0x002077D0 */

loc_000D1467: ;
    ecx = MEM32(esi + 0xE4);
    PUSH32(esp, ecx);
    ecx = MEM32(0x842E20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D147Cu); RECOMP_ABI_CALL(0x002077D0u, sub_002077D0); /* call 0x002077D0 */

loc_000D147C: ;
    edx = MEM32(esi + 0xC4);
    ecx = MEM32(0x842E20);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D1491u); RECOMP_ABI_CALL(0x002077D0u, sub_002077D0); /* call 0x002077D0 */

loc_000D1491: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(0x842E20);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D14A3u); RECOMP_ABI_CALL(0x002077D0u, sub_002077D0); /* call 0x002077D0 */

loc_000D14A3: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, ecx);
    ecx = MEM32(0x842E20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D14B5u); RECOMP_ABI_CALL(0x002077D0u, sub_002077D0); /* call 0x002077D0 */

loc_000D14B5: ;
    edx = MEM32(esi + 0x84);
    ecx = MEM32(0x842E20);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D14CAu); RECOMP_ABI_CALL(0x002077D0u, sub_002077D0); /* call 0x002077D0 */

loc_000D14CA: ;
    eax = MEM32(esi + 0xA4);
    ecx = MEM32(0x842E20);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D14DFu); RECOMP_ABI_CALL(0x002077D0u, sub_002077D0); /* call 0x002077D0 */

loc_000D14DF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D14F0
 * Original: 0x000D14F0 - 0x000D1514 (36 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D14F0(void)
{

loc_000D14F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000D1501u); RECOMP_ABI_CALL(0x000D0DD0u, sub_000D0DD0); /* call 0x000D0DD0 */

loc_000D1501: ;
    PUSH32(esp, 9);
    PUSH32(esp, esi);
    ecx = edi + 0x338;
    PUSH32(esp, 0x000D150Fu); RECOMP_ABI_CALL(0x0020B770u, sub_0020B770); /* call 0x0020B770 */

loc_000D150F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1520
 * Original: 0x000D1520 - 0x000D15C0 (160 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1520: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = 0x323608;
    PUSH32(esp, 0x000D152Fu); RECOMP_ABI_CALL(0x000A3AB0u, sub_000A3AB0); /* call 0x000A3AB0 */

loc_000D152F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    ecx = 0x323608;
    MEM32(esi + 0x44C) = eax;
    PUSH32(esp, 0x000D1543u); RECOMP_ABI_CALL(0x000A3F80u, sub_000A3F80); /* call 0x000A3F80 */

loc_000D1543: ;
    PUSH32(esp, 0);
    ecx = 0x4140CC;
    MEM8(0x30EBA4) = 0;
    PUSH32(esp, 0x000D1556u); RECOMP_ABI_CALL(0x001FFBB0u, sub_001FFBB0); /* call 0x001FFBB0 */

loc_000D1556: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000D155Du); RECOMP_ABI_CALL(0x00159260u, sub_00159260); /* call 0x00159260 */

loc_000D155D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esi + 0x388;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x000D156Eu); RECOMP_ABI_CALL(0x000D04F0u, sub_000D04F0); /* call 0x000D04F0 */

loc_000D156E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = esi + 0x338;
    PUSH32(esp, 0xA);
    PUSH32(esp, ebx);
    ecx = edi;
    MEMF(edi + 0x48) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x4C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000D158Bu); RECOMP_ABI_CALL(0x0020B770u, sub_0020B770); /* call 0x0020B770 */

loc_000D158B: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000D1594u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D1591u); } /* indirect call */
    }

loc_000D1594: ;
    MEM32(esi + 0x51C) = 0x4140D8;
    ecx = MEM32(0x4140D8);
    MEM32(esi + 0x518) = ecx;
    eax = MEM32(esi + 0x334);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D15BC; /* je: equal / zero */

loc_000D15B4: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D15BCu); RECOMP_ABI_CALL(0x000CF910u, sub_000CF910); /* call 0x000CF910 */

loc_000D15BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D15C0
 * Original: 0x000D15C0 - 0x000D1642 (130 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D15C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D15C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x000D15CEu); RECOMP_ABI_CALL(0x000CF910u, sub_000CF910); /* call 0x000CF910 */

loc_000D15CE: ;
    eax = MEM32(esi + 0x338);
    edi = esi + 0x338;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000D15DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D15DCu); } /* indirect call */
    }

loc_000D15DF: ;
    ebp = esi + 0x388;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x000D15EDu); RECOMP_ABI_CALL(0x0020B800u, sub_0020B800); /* call 0x0020B800 */

loc_000D15ED: ;
    ecx = ebp;
    PUSH32(esp, 0x000D15F4u); RECOMP_ABI_CALL(0x000D06D0u, sub_000D06D0); /* call 0x000D06D0 */

loc_000D15F4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000D15FAu); RECOMP_ABI_CALL(0x00159260u, sub_00159260); /* call 0x00159260 */

loc_000D15FA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    ecx = 0x4140CC;
    MEM8(0x30EBA4) = 1;
    PUSH32(esp, 0x000D1613u); RECOMP_ABI_CALL(0x001FFBB0u, sub_001FFBB0); /* call 0x001FFBB0 */

loc_000D1613: ;
    ecx = MEM32(esi + 0x44C);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = 0x323608;
    PUSH32(esp, 0x000D1625u); RECOMP_ABI_CALL(0x000A3F80u, sub_000A3F80); /* call 0x000A3F80 */

loc_000D1625: ;
    POP32(esp, edi);
    MEM8(esi + 0x450) = LO8(ebx);
    MEM8(esi + 0x4B4) = LO8(ebx);
    MEM32(esi + 0x330) = ebx;
    MEM32(esi + 0x334) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D1650
 * Original: 0x000D1650 - 0x000D1764 (276 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1650: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2422D6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E8BD0;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    MEM32(esi + 4) = 0x2E8C18;
    MEM32(esi + 0x190) = 0x2E8BE0;
    MEM32(esi + 0x19C) = ebx;
    MEM32(esi + 0x1A0) = ebx;
    MEM32(esi + 0x1A4) = ebx;
    MEM32(esi + 0x1A8) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esi + 0x194) = 0x2E8C40;
    edi = esi + 0x338;
    ecx = edi;
    MEM8(esp + 0x18) = 1;
    PUSH32(esp, 0x000D16CCu); RECOMP_ABI_CALL(0x00209680u, sub_00209680); /* call 0x00209680 */

loc_000D16CC: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEM32(edi) = 0x2E683C;
    MEM32(edi + 0x1C) = ebx;
    MEM32(edi + 0x24) = ebx;
    ecx = MEM32(esp + 0x10);
    eax = edi + 0x14;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(edi + 0x30) = ebx;
    MEM32(edi + 0x38) = ebx;
    eax = edi + 0x28;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEMF(edi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(edi + 0x44) = ebx;
    MEMF(edi + 0x48) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x4C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x390) = ebx;
    MEM32(esi + 0x394) = ebx;
    MEM32(esi + 0x398) = ebx;
    MEM32(esi + 0x39C) = ebx;
    MEM32(esi + 0x388) = 0x2E8BF0;
    MEM32(esi + 0x51C) = ebx;
    MEM8(esi + 0x450) = LO8(ebx);
    MEM8(esi + 0x4B4) = LO8(ebx);
    MEM32(esi + 0x330) = ebx;
    MEM32(esi + 0x334) = ebx;
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
 * sub_000D1770
 * Original: 0x000D1770 - 0x000D17D3 (99 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D1770: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000D177Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D1778u); } /* indirect call */
    }

loc_000D177B: ;
    PUSH32(esp, 0);
    edi = esi + 0xC0;
    PUSH32(esp, edi);
    ecx = 0x351E20;
    PUSH32(esp, 0x000D178Eu); RECOMP_ABI_CALL(0x0020B770u, sub_0020B770); /* call 0x0020B770 */

loc_000D178E: ;
    PUSH32(esp, 0);
    ebx = esi + 0x30;
    PUSH32(esp, ebx);
    ecx = 0x351E20;
    PUSH32(esp, 0x000D179Eu); RECOMP_ABI_CALL(0x0020AF60u, sub_0020AF60); /* call 0x0020AF60 */

loc_000D179E: ;
    PUSH32(esp, 0);
    ebp = esi + 0x160;
    PUSH32(esp, ebp);
    ecx = 0x351E20;
    PUSH32(esp, 0x000D17B1u); RECOMP_ABI_CALL(0x0020AF60u, sub_0020AF60); /* call 0x0020AF60 */

loc_000D17B1: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D17B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D17B5u); } /* indirect call */
    }

loc_000D17B8: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D17BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D17BCu); } /* indirect call */
    }

loc_000D17BF: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D17C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D17C4u); } /* indirect call */
    }

loc_000D17C7: ;
    POP32(esp, edi);
    MEM8(esi + 0x238) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D17E0
 * Original: 0x000D17E0 - 0x000D17ED (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D17E0(void)
{

loc_000D17E0: ;
    PUSH32(esp, 0xFFFFFFF6u);
    ecx = 0x351E20;
    PUSH32(esp, 0x000D17ECu); RECOMP_ABI_CALL(0x002096E0u, sub_002096E0); /* call 0x002096E0 */

loc_000D17EC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D17F0
 * Original: 0x000D17F0 - 0x000D182A (58 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D17F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D17F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000D181F; /* je: equal / zero */

loc_000D1802: ;
    SET_LO8(eax, MEM8(esi + ebp));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D181F; /* je: equal / zero */

loc_000D1809: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D1812u); RECOMP_ABI_CALL(0x00237F82u, sub_00237F82); /* call 0x00237F82 */

loc_000D1812: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + edi + 0x2C) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x4F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D1802; /* jl: less (signed <) */

loc_000D181F: ;
    MEM8(esi + edi + 0x2C) = LO8(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1830
 * Original: 0x000D1830 - 0x000D1842 (18 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1830(void)
{

loc_000D1830: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEM8(ecx + 0x64) = 1;
    MEMF(ecx + 0x68) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1850
 * Original: 0x000D1850 - 0x000D18B8 (104 bytes, 18 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1850(void)
{

loc_000D1850: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(ecx + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(ecx + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(ecx + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(ecx + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEM8(ecx + 0x64) = 0;
    MEMF(ecx + 0x78) = xmm0.f[0]; /* movss */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_000D18C0
 * Original: 0x000D18C0 - 0x000D18E7 (39 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D18C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D18C0: ;
    eax = MEM32(esp + 4);
    edx = eax;
    edx = edx & 0xFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x10000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x90) = eax;
    MEM32(ecx + 0x1C0) = edx;
    MEM32(ecx + 0x13C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D18F0
 * Original: 0x000D18F0 - 0x000D190B (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D18F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D18F0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1903; /* je: equal / zero */

loc_000D18FB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000D1900u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D18FDu); } /* indirect call */
    }

loc_000D1900: ;
    esp += 8; return; /* ret 4 */

loc_000D1903: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D1908u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D1905u); } /* indirect call */
    }

loc_000D1908: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1910
 * Original: 0x000D1910 - 0x000D191D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1910(void)
{

loc_000D1910: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x238) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1920
 * Original: 0x000D1920 - 0x000D1943 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1920: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x60) = eax;
    MEMF(ecx + 0x64) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x68) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x6C) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x74) = eax;
    MEM32(ecx + 0x78) = eax;
    MEMF(ecx + 0x70) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1950
 * Original: 0x000D1950 - 0x000D196A (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1950: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x74) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000D1966; /* je: equal / zero */

loc_000D195E: ;
    PUSH32(esp, 0x000D1963u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_000D1963: ;
    MEM32(esi + 0x78) = eax;

loc_000D1966: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1970
 * Original: 0x000D1970 - 0x000D19BD (77 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1970: ;
    SET_LO8(eax, MEM8(0x351D90));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000D19BB; /* jne: not equal / not zero */

loc_000D197C: ;
    eax = MEM32(esi + 0x60);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D1989u); RECOMP_ABI_CALL(0x0020A2B0u, sub_0020A2B0); /* call 0x0020A2B0 */

loc_000D1989: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(esi + 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000D1998u); RECOMP_ABI_CALL(0x0020A3E0u, sub_0020A3E0); /* call 0x0020A3E0 */

loc_000D1998: ;
    eax = MEM32(esi + 0x60);
    PUSH32(esp, 0);
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000D19ACu); RECOMP_ABI_CALL(0x0020A2D0u, sub_0020A2D0); /* call 0x0020A2D0 */

loc_000D19AC: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(esi + 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000D19BBu); RECOMP_ABI_CALL(0x0020A2F0u, sub_0020A2F0); /* call 0x0020A2F0 */

loc_000D19BB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D19C0
 * Original: 0x000D19C0 - 0x000D19F1 (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D19C0(void)
{

loc_000D19C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000D19C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D19C6u); } /* indirect call */
    }

loc_000D19C9: ;
    PUSH32(esp, 0);
    edi = esi + 0x28;
    PUSH32(esp, edi);
    ecx = 0x351EF8;
    PUSH32(esp, 0x000D19D9u); RECOMP_ABI_CALL(0x0020B770u, sub_0020B770); /* call 0x0020B770 */

loc_000D19D9: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D19E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D19DDu); } /* indirect call */
    }

loc_000D19E0: ;
    POP32(esp, edi);
    MEM8(esi + 0x123) = 0;
    MEM8(esi + 0x122) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D1A00
 * Original: 0x000D1A00 - 0x000D1A0D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1A00(void)
{

loc_000D1A00: ;
    PUSH32(esp, 0xFFFFFFF6u);
    ecx = 0x351EF8;
    PUSH32(esp, 0x000D1A0Cu); RECOMP_ABI_CALL(0x002096E0u, sub_002096E0); /* call 0x002096E0 */

loc_000D1A0C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D1A10
 * Original: 0x000D1A10 - 0x000D1A81 (113 bytes, 32 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1A10(void)
{

loc_000D1A10: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 8);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0xC);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(ecx + 8);
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEM32(eax + 0x28) = ecx;
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000D1A90
 * Original: 0x000D1A90 - 0x000D1B02 (114 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000D1A90(void)
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

loc_000D1A90: ;
    eax = MEM32(0x41410C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1AA3; /* jne: not equal / not zero */

loc_000D1A9C: ;
    eax = 0x6438E0;
    goto loc_000D1AA6;

loc_000D1AA3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D1AA6: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(esp) = edx;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x220)); /* fsub dword ptr [ecx + 0x220] */
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 4) = edx;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x224)); /* fsub dword ptr [ecx + 0x224] */
    MEM32(esp + 8) = eax;
    fp_push(MEMF(esp + 8)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x228)); /* fsub dword ptr [ecx + 0x228] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x000D1AFAu); RECOMP_ABI_CALL(0x00237629u, sub_00237629); /* call 0x00237629 */

loc_000D1AFA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002375B4(); return; /* tail jmp 0x002375B4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D1B10
 * Original: 0x000D1B10 - 0x000D1B96 (134 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1B94; /* je: equal / zero */

loc_000D1B1A: ;
    PUSH32(esp, 0x000D1B1Fu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_000D1B1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x78) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1B94; /* jne: not equal / not zero */

loc_000D1B24: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    eax = MEM32(esi + 0x74);
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D1B94; /* jne: not equal / not zero */

loc_000D1B4C: ;
    eax = MEM32(eax + 0x24);
    PUSH32(esp, eax);
    ecx = 0x30D4B0;
    PUSH32(esp, 0x000D1B5Au); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_000D1B5A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1B7A; /* je: equal / zero */

loc_000D1B5E: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D1B7A: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC090)); /* movss */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC880)); /* movss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */

loc_000D1B94: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D1BA0
 * Original: 0x000D1BA0 - 0x000D1C12 (114 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000D1BA0(void)
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

loc_000D1BA0: ;
    eax = MEM32(0x41410C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D1BB3; /* jne: not equal / not zero */

loc_000D1BAC: ;
    eax = 0x6438E0;
    goto loc_000D1BB6;

loc_000D1BB3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D1BB6: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(esp) = edx;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x110)); /* fsub dword ptr [ecx + 0x110] */
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 4) = edx;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x114)); /* fsub dword ptr [ecx + 0x114] */
    MEM32(esp + 8) = eax;
    fp_push(MEMF(esp + 8)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x118)); /* fsub dword ptr [ecx + 0x118] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x000D1C0Au); RECOMP_ABI_CALL(0x00237629u, sub_00237629); /* call 0x00237629 */

loc_000D1C0A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002375B4(); return; /* tail jmp 0x002375B4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D1C20
 * Original: 0x000D1C20 - 0x000D1C33 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1C20(void)
{

loc_000D1C20: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x28); /* addss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D1C40
 * Original: 0x000D1C40 - 0x000D1EFB (699 bytes, 178 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D1C40(void)
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

loc_000D1C40: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2422EB);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xAC));
    esp = esp - 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1EE5; /* je: equal / zero */

loc_000D1C69: ;
    SET_LO8(eax, MEM8(0x351D90));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D1EE5; /* jne: not equal / not zero */

loc_000D1C76: ;
    eax = MEM32(0x41410C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D1C86; /* jne: not equal / not zero */

loc_000D1C7F: ;
    eax = 0x6438E0;
    goto loc_000D1C89;

loc_000D1C86: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D1C89: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = edi + 0x88;
    MEM32(esp + 0x14) = ecx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 0x18) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 4); /* subss */
    xmm2 = xmm1; /* movaps */
    MEM32(esp + 0x1C) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 8); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC340)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000D1EE4; /* jbe: below or equal (unsigned <=) */

loc_000D1D08: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC3DC); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E741C); /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000D1EE4; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_000D1D30: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D1D45; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D1D3D: ;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    goto loc_000D1D4E;

loc_000D1D45: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D1EE4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000D1D4E: ;
    ecx = esp + 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D1D59u); RECOMP_ABI_CALL(0x001F3400u, sub_001F3400); /* call 0x001F3400 */

loc_000D1D59: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D1EE4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D1D6E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D1EE4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D1D8F: ;
    PUSH32(esp, 0x000D1D94u); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_000D1D94: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D1EE4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 8)) */

loc_000D1DA3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D1EE4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_000D1DB6: ;
    PUSH32(esp, 0x000D1DBBu); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_000D1DBB: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D1EE4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_000D1DCA: ;
    ecx = esp + 0x2C;
    PUSH32(esp, 0x000D1DD3u); RECOMP_ABI_CALL(0x000186F0u, sub_000186F0); /* call 0x000186F0 */

loc_000D1DD3: ;
    PUSH32(esp, esi);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esp + 0x34;
    MEM32(esp + 0xC4) = 0;
    PUSH32(esp, 0x000D1DEDu); RECOMP_ABI_CALL(0x000188E0u, sub_000188E0); /* call 0x000188E0 */

loc_000D1DED: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x104);
    eax = esp + 0x38;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D1E02u); RECOMP_ABI_CALL(0x0012C650u, sub_0012C650); /* call 0x0012C650 */

loc_000D1E02: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D1ED0; /* jne: not equal / not zero */

loc_000D1E0D: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E2440)); /* fmul dword ptr [0x2e2440] */
    ebx = MEM32(edi + 0x7C);
    PUSH32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0xFFFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x000D1E27u); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_000D1E27: ;
    ebp = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    esi = eax;
    eax = MEM32(edi + 0x80);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x100);
    if (0x18) _cf = (int)(((esi) >> (32 - (0x18))) & 1);
    esi = esi << 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    esi = esi | ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = edi + 0x2C;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000D1E77u); RECOMP_ABI_CALL(0x000F5FC0u, sub_000F5FC0); /* call 0x000F5FC0 */

loc_000D1E77: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC340); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x43000000);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x80);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = edi + 0x2C;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000D1ECEu); RECOMP_ABI_CALL(0x000F5FC0u, sub_000F5FC0); /* call 0x000F5FC0 */

loc_000D1ECE: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000D1ED0: ;
    ecx = esp + 0x2C;
    MEM32(esp + 0xBC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000D1EE4u); RECOMP_ABI_CALL(0x00018AD0u, sub_00018AD0); /* call 0x00018AD0 */

loc_000D1EE4: ;
    POP32(esp, esi);

loc_000D1EE5: ;
    ecx = MEM32(esp + 0xB0);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xB8)) >> 32) & 1);
    esp = esp + 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D1F00
 * Original: 0x000D1F00 - 0x000D28DB (2523 bytes, 619 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D1F00(void)
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

loc_000D1F00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x24230B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x158) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x158));
    esp = esp - 0x158;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(0x351D90));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000D28C6; /* jne: not equal / not zero */

loc_000D1F33: ;
    MEM32(esp + 0xD0) = 0x2E8DE0;
    eax = MEM32(0x41410C);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x16C) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000D1F57; /* jne: not equal / not zero */

loc_000D1F50: ;
    eax = 0x6438E0;
    goto loc_000D1F5A;

loc_000D1F57: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D1F5A: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    edi = esi + 0x50;
    MEM32(esp + 0x2C) = ecx;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    MEM32(esp + 0x30) = edx;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    MEM32(esp + 0x34) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 4)); /* fsub dword ptr [edi + 4] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] * fp_top()); fp_pop(); /* fmulp st(3) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC340)); /* fld float */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000D28C6; /* jbe: below or equal (unsigned <=) */

loc_000D1FB8: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2DC890); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E741C); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2DC3B4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x2E42A8); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D28C6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_000D1FFA: ;
    PUSH32(esp, 0x43800000);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2004u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_000D2004: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D2020; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000D201A: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_000D2020: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esi + 0x60);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2034u); RECOMP_ABI_CALL(0x001F9EA0u, sub_001F9EA0); /* call 0x001F9EA0 */

loc_000D2034: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = esp + 0x43;
    MEM32(esp + 0x54) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x8C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2050u); RECOMP_ABI_CALL(0x0012D6A0u, sub_0012D6A0); /* call 0x0012D6A0 */

loc_000D2050: ;
    MEMF(esp + 0xA0) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esi + 0x64));
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D254A; /* je: equal / zero */

loc_000D2065: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    PUSH32(esp, 0x2E8DBC);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC3D0); /* addss */
    PUSH32(esp, 2);
    PUSH32(esp, 0x64);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D208Cu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_000D208C: ;
    PUSH32(esp, 0x2E8D98);
    PUSH32(esp, 2);
    PUSH32(esp, 0x64);
    MEM32(esp + 0x7C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D209Eu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_000D209E: ;
    PUSH32(esp, 0x2E8D74);
    edi = eax;
    PUSH32(esp, 2);
    PUSH32(esp, 0x64);
    MEM32(esp + 0x3C) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D20B2u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_000D20B2: ;
    MEM32(esp + 0x78) = eax;
    SET_LO8(eax, MEM8(esp + 0x4B));
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D22BC; /* je: equal / zero */

loc_000D20C5: ;
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    edx = esp + 0x80;
    PUSH32(esp, edx);
    eax = esp + 0x128;
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D20E2u); RECOMP_ABI_CALL(0x00044FF0u, sub_00044FF0); /* call 0x00044FF0 */

loc_000D20E2: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D20E9u); RECOMP_ABI_CALL(0x00015AF0u, sub_00015AF0); /* call 0x00015AF0 */

loc_000D20E9: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = MEM32(esp + 0x6C);
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = MEM32(esp + 0x70);
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x74);
    MEM32(esp + 0x34) = eax;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEM32(esp + 0x30) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEM32(esp + 0x2C) = ecx;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm4 = xmm0; /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm7.f[0]; /* subss */
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    xmm7 = xmm0; /* movaps */
    xmm6 = xmm4; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    edx = esp + 0x30;
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x60) = xmm4.f[0]; /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x60;
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] - xmm7.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    PUSH32(esp, eax);
    ecx = esp + 0xEC;
    MEMF(esp + 0x64) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D21C6u); RECOMP_ABI_CALL(0x000D1A10u, sub_000D1A10); /* call 0x000D1A10 */

loc_000D21C6: ;
    eax = MEM32(esp + 0x64);
    ecx = MEM32(esp + 0x54);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC098); /* mulss */
    edx = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x20) = ecx;
    goto loc_000D2200;

loc_000D21F2: ;
    eax = MEM32(esp + 0x3C);
    goto loc_000D2200;

    /* nop */
    /* nop */

loc_000D2200: ;
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x30E548); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E8D70); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2223u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_000D2223: ;
    ecx = MEM32(esp + 0x48);
    xmm0 = XMM_SCALAR(MEMF(ecx + edi)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    eax = ecx + edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xE0;
    PUSH32(esp, edx);
    eax = esp + 0x5C;
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2273u); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_000D2273: ;
    eax = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x4C);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x78); /* addss */
    MEMF(eax + edi) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x54); /* subss */
    MEMF(eax + edi) = xmm0.f[0]; /* movss */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x18 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x34) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_000D21F2; /* jle: less or equal (signed <=) */

loc_000D22B7: ;
    goto loc_000D2399;

loc_000D22BC: ;
    edi = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x64);
    ecx = MEM32(esp + 0x54);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC098); /* mulss */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edi));
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x20) = ecx;
    goto loc_000D22F0;

loc_000D22EA: ;
    eax = MEM32(esp + 0x3C);
    edi = edi;

loc_000D22F0: ;
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x30E548); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E8D70); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2313u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_000D2313: ;
    edx = MEM32(esp + 0x48);
    xmm0 = XMM_SCALAR(MEMF(edi + edx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    eax = edi + edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x20;
    PUSH32(esp, eax);
    eax = esp + 0x5C;
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D235Fu); RECOMP_ABI_CALL(0x0022F49Eu, sub_0022F49E); /* call 0x0022F49E */

loc_000D235F: ;
    ecx = MEM32(esp + 0x4C);
    eax = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x88) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2379u); RECOMP_ABI_CALL(0x001F1530u, sub_001F1530); /* call 0x001F1530 */

loc_000D2379: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = MEM32(esp + 0x28);
    MEMF(edi + eax) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x54)); /* fsub dword ptr [esi + 0x54] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x18 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEMF(edi + eax + -4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_000D22EA; /* jle: less or equal (signed <=) */

loc_000D2399: ;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D23A9u); RECOMP_ABI_CALL(0x0020A2D0u, sub_0020A2D0); /* call 0x0020A2D0 */

loc_000D23A9: ;
    edi = MEM32(esp + 0x54);
    ebx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x64);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edi));
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x1C) = eax;
    goto loc_000D23D0;

    /* nop */
    edi = edi;

loc_000D23D0: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x20); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x30E548); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2E8D70); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D23FBu); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_000D23FB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + edi)); /* movss */
    eax = MEM32(esp + 0x28);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi); /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = esi;
    MEMF(esp) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2439u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_000D2439: ;
    eax = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x20) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_000D23D0; /* jle: less or equal (signed <=) */

loc_000D244A: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC874)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x28); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D2514; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x28)) */

loc_000D245D: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D246Du); RECOMP_ABI_CALL(0x0020A2B0u, sub_0020A2B0); /* call 0x0020A2B0 */

loc_000D246D: ;
    edi = MEM32(esp + 0x54);
    MEM32(esp + 0x38) = 0x19;
    /* nop */

loc_000D2480: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + ebx)); /* movss */
    edx = MEM32(esp + 0x1C);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x74); /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + edx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = esi;
    MEMF(esp) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D24C1u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_000D24C1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + ebx)); /* movss */
    eax = MEM32(esp + 0x1C);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x74); /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = esi;
    MEMF(esp) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2502u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_000D2502: ;
    eax = MEM32(esp + 0x38);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x38) = eax;
    if ((_fa != 0)) goto loc_000D2480; /* jne: not equal / not zero */

loc_000D2514: ;
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D251Eu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_000D251E: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2528u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_000D2528: ;
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2532u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_000D2532: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x164);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000D254A: ;
    MEM32(esp + 0x1C) = 1;
    edi = esi + 0x7C;
    MEM32(esp + 0x40) = 4;
    /* nop */

loc_000D2560: ;
    eax = MEM32(esp + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(0x2DC3D0)); /* movss */
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0 = XMM_SCALAR(MEMF(esi + eax * 4 + 0x7C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + eax * 4 + 0x6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + -16); /* subss */
    PUSH32(esp, 0x2E8D4C);
    PUSH32(esp, 2);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    PUSH32(esp, 0x54);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D25A6u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_000D25A6: ;
    MEM32(esp + 0x24) = eax;
    SET_LO8(eax, MEM8(esp + 0x33));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D27A2; /* je: equal / zero */

loc_000D25B9: ;
    ecx = esp + 0x120;
    PUSH32(esp, ecx);
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D25C9u); RECOMP_ABI_CALL(0x00044FF0u, sub_00044FF0); /* call 0x00044FF0 */

loc_000D25C9: ;
    PUSH32(esp, eax);
    edx = esp + 0x70;
    PUSH32(esp, edx);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D25D9u); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_000D25D9: ;
    ecx = MEM32(esp + 0x58);
    edx = MEM32(esp + 0x5C);
    eax = MEM32(esp + 0x60);
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x44) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x6C);
    MEM32(esp + 0x48) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x70);
    MEM32(esp + 0x4C) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x74);
    MEM32(esp + 0x34) = eax;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEM32(esp + 0x30) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEM32(esp + 0x2C) = ecx;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm4 = xmm0; /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm7.f[0]; /* subss */
    ecx = esp + 0x88;
    PUSH32(esp, ecx);
    xmm7 = xmm0; /* movaps */
    xmm6 = xmm4; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    edx = esp + 0x30;
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0xA8) = xmm4.f[0]; /* movss */
    PUSH32(esp, edx);
    eax = esp + 0xA8;
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] - xmm7.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    PUSH32(esp, eax);
    ecx = esp + 0xEC;
    MEMF(esp + 0xAC) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D26EAu); RECOMP_ABI_CALL(0x000D1A10u, sub_000D1A10); /* call 0x000D1A10 */

loc_000D26EA: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000D26F0: ;
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + -16); /* addss */
    ecx = esp + 0xE0;
    PUSH32(esp, ecx);
    edx = esp + 0xBC;
    PUSH32(esp, edx);
    eax = esp + 0x9C;
    MEMF(esp + 0xC0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0xC8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2747u); RECOMP_ABI_CALL(0x0022F51Cu, sub_0022F51C); /* call 0x0022F51C */

loc_000D2747: ;
    eax = MEM32(esp + 0x9C);
    edx = MEM32(esp + 0x98);
    ecx = MEM32(esp + 0x94);
    MEM32(esp + 0xB0) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xB0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x78); /* addss */
    MEM32(esp + 0xB4) = eax;
    eax = MEM32(esp + 0x18);
    MEMF(eax + ebx * 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x54); /* subss */
    MEMF(eax + ebx * 4) = xmm0.f[0]; /* movss */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x14 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0xAC) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_000D26F0; /* jle: less or equal (signed <=) */

loc_000D279D: ;
    goto loc_000D2840;

loc_000D27A2: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000D27B0;

    /* nop */
    /* nop */

loc_000D27B0: ;
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + -16); /* addss */
    eax = esi + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0xC8;
    PUSH32(esp, ecx);
    edx = esp + 0x84;
    MEMF(esp + 0xCC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edx);
    MEMF(esp + 0xD4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xD8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2803u); RECOMP_ABI_CALL(0x0022F49Eu, sub_0022F49E); /* call 0x0022F49E */

loc_000D2803: ;
    ecx = MEM32(esp + 0x80);
    eax = MEM32(esp + 0x7C);
    MEM32(esp + 0xD8) = ecx;
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2823u); RECOMP_ABI_CALL(0x001F1530u, sub_001F1530); /* call 0x001F1530 */

loc_000D2823: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = MEM32(esp + 0x20);
    MEMF(eax + ebx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x14 (32-bit) */
    _cf = (int)(_fa < _fb);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x54)); /* fsub dword ptr [esi + 0x54] */
    MEMF(eax + ebx * 4 + -4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_000D27B0; /* jle: less or equal (signed <=) */

loc_000D2840: ;
    edx = MEM32(esp + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2850u); RECOMP_ABI_CALL(0x0020A2D0u, sub_0020A2D0); /* call 0x0020A2D0 */

loc_000D2850: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D2852: ;
    eax = MEM32(esp + 0x18);
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + -16); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + ebx * 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x74); /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    ecx = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2898u); RECOMP_ABI_CALL(0x0020D3B0u, sub_0020D3B0); /* call 0x0020D3B0 */

loc_000D2898: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x14 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000D2852; /* jle: less or equal (signed <=) */

loc_000D289E: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D28A8u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_000D28A8: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x44);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x40) = eax;
    if ((_fa != 0)) goto loc_000D2560; /* jne: not equal / not zero */

loc_000D28C6: ;
    ecx = MEM32(esp + 0x164);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
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
 * sub_000D28E0
 * Original: 0x000D28E0 - 0x000D2980 (160 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D28E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D28E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D297E; /* je: equal / zero */

loc_000D28EE: ;
    PUSH32(esp, 0x000D28F3u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_000D28F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x78) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D297E; /* jne: not equal / not zero */

loc_000D28FC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esi + 0x74);
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D297E; /* jne: not equal / not zero */

loc_000D2912: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    ecx = 0x30C0B0;
    PUSH32(esp, 0x000D2921u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_000D2921: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D297D; /* je: equal / zero */

loc_000D2925: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x000D292Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D2929u); } /* indirect call */
    }

loc_000D292F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D297D; /* je: equal / zero */

loc_000D2933: ;
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(0x643844);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D2942u); RECOMP_ABI_CALL(0x00013A20u, sub_00013A20); /* call 0x00013A20 */

loc_000D2942: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D297D; /* je: equal / zero */

loc_000D2946: ;
    eax = MEM32(eax + 0x70);
    PUSH32(esp, edi);
    ecx = 0x30D4B0;
    MEM32(esi + 0x6C) = eax;
    PUSH32(esp, 0x000D2957u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_000D2957: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x6C)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2970; /* je: equal / zero */

loc_000D2960: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2DC08C); /* addss */
    POP32(esp, edi);
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D2970: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E169C); /* addss */
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */

loc_000D297D: ;
    POP32(esp, edi);

loc_000D297E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D2980
 * Original: 0x000D2980 - 0x000D29F0 (112 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2980: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000D2988u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_000D2988: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x2E8DF4;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC8DC)); /* movss */
    MEMF(esi + 0xC8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    MEM32(esi + 0x28) = 0x2E8CD4;
    MEMF(esi + 0xCC) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xD0) = eax;
    MEM32(esi + 0xD4) = eax;
    MEM8(esi + 0x123) = LO8(eax);
    MEM8(esi + 0x122) = LO8(eax);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D29F0
 * Original: 0x000D29F0 - 0x000D2A0E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D29F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D29F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000D29F8u); RECOMP_ABI_CALL(0x000D2A10u, sub_000D2A10); /* call 0x000D2A10 */

loc_000D29F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2A08; /* je: equal / zero */

loc_000D29FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D2A05u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000D2A05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2A08: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D2A10
 * Original: 0x000D2A10 - 0x000D2A22 (18 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D2A10: ;
    MEM32(ecx) = 0x2E8DF4;
    MEM32(ecx + 0x28) = 0x2E6470;
    g_seh_ebp = ebp; sub_001FA0A0(); return; /* tail jmp 0x001FA0A0 */

}

/**
 * sub_000D2A30
 * Original: 0x000D2A30 - 0x000D2A9C (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2A30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2A30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000D2A38u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_000D2A38: ;
    MEM32(esi) = 0x2E8E08;
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
    PUSH32(esp, 0x000D2A95u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000D2A95: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D2AA0
 * Original: 0x000D2AA0 - 0x000D2B0C (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2AA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2AA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000D2AA8u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_000D2AA8: ;
    MEM32(esi) = 0x2E8E1C;
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
    PUSH32(esp, 0x000D2B05u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000D2B05: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D2B10
 * Original: 0x000D2B10 - 0x000D2B1C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D2B10: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000D2B20(); return; /* tail jmp 0x000D2B20 */

}

/**
 * sub_000D2B20
 * Original: 0x000D2B20 - 0x000D2B7D (93 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2B20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2B78; /* je: equal / zero */

loc_000D2B32: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_000D2B5B; /* je: equal / zero */

loc_000D2B55: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000D2B5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D2B59u); } /* indirect call */
    }

loc_000D2B5B: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_000D2B32; /* jne: not equal / not zero */

loc_000D2B78: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D2B80
 * Original: 0x000D2B80 - 0x000D2B8C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D2B80: ;
    eax = ecx + 0x78;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000D2B90(); return; /* tail jmp 0x000D2B90 */

}

/**
 * sub_000D2B90
 * Original: 0x000D2B90 - 0x000D2BED (93 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2B90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2BE8; /* je: equal / zero */

loc_000D2BA2: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_000D2BCB; /* je: equal / zero */

loc_000D2BC5: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000D2BCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D2BC9u); } /* indirect call */
    }

loc_000D2BCB: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFED0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFED0u;
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
    if (CMP_NE(_fa, _fb)) goto loc_000D2BA2; /* jne: not equal / not zero */

loc_000D2BE8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D2BF0
 * Original: 0x000D2BF0 - 0x000D2C4C (92 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2BF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x130);
    PUSH32(esp, 0x000D2C04u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D2C04: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2C14; /* je: equal / zero */

loc_000D2C0B: ;
    ecx = eax;
    PUSH32(esp, 0x000D2C12u); RECOMP_ABI_CALL(0x000D2980u, sub_000D2980); /* call 0x000D2980 */

loc_000D2C12: ;
    goto loc_000D2C16;

loc_000D2C14: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D2C16: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x1C;
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
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x130;
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
 * sub_000D2C50
 * Original: 0x000D2C50 - 0x000D2CDC (140 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2C50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2C50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000D2C58u); RECOMP_ABI_CALL(0x001FA0B0u, sub_001FA0B0); /* call 0x001FA0B0 */

loc_000D2C58: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x2E8E30;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x24) = edx;
    MEM32(esi + 0x38) = edx;
    MEM32(esi + 0x3C) = edx;
    MEM32(esi + 0x40) = edx;
    MEM32(esi + 0x44) = edx;
    MEM32(esi + 0x30) = 0x2E8D00;
    MEM32(esi + 0xC8) = edx;
    MEM32(esi + 0xCC) = edx;
    MEM32(esi + 0xD0) = edx;
    MEM32(esi + 0xD4) = edx;
    ecx = esi + 0x160;
    MEMF(esi + 0xE8) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xC0) = 0x2E8D20;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx) = 0x2E8CB4;
    PUSH32(esp, 0x000D2CC6u); RECOMP_ABI_CALL(0x000D1920u, sub_000D1920); /* call 0x000D1920 */

loc_000D2CC6: ;
    MEM32(esi + 0x1E0) = edx;
    MEM32(esi + 0x1E4) = edx;
    MEM8(esi + 0x238) = LO8(edx);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D2CE0
 * Original: 0x000D2CE0 - 0x000D2CFE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2CE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000D2CE8u); RECOMP_ABI_CALL(0x000D2D00u, sub_000D2D00); /* call 0x000D2D00 */

loc_000D2CE8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D2CF8; /* je: equal / zero */

loc_000D2CEF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D2CF5u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000D2CF5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2CF8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D2D00
 * Original: 0x000D2D00 - 0x000D2D1F (31 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D2D00: ;
    eax = 0x2E6470;
    MEM32(ecx) = 0x2E8E30;
    MEM32(ecx + 0x160) = eax;
    MEM32(ecx + 0xC0) = eax;
    MEM32(ecx + 0x30) = eax;
    g_seh_ebp = ebp; sub_001FA0A0(); return; /* tail jmp 0x001FA0A0 */

}

/**
 * sub_000D2D20
 * Original: 0x000D2D20 - 0x000D2D71 (81 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2D20(void)
{

loc_000D2D20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x30;
    PUSH32(esp, eax);
    ecx = 0x351E20;
    MEM32(esi + 0x1E0) = 0;
    PUSH32(esp, 0x000D2D3Bu); RECOMP_ABI_CALL(0x0020AF90u, sub_0020AF90); /* call 0x0020AF90 */

loc_000D2D3B: ;
    ecx = esi + 0xC0;
    PUSH32(esp, ecx);
    ecx = 0x351E20;
    PUSH32(esp, 0x000D2D4Cu); RECOMP_ABI_CALL(0x0020B800u, sub_0020B800); /* call 0x0020B800 */

loc_000D2D4C: ;
    edx = esi + 0x160;
    PUSH32(esp, edx);
    ecx = 0x351E20;
    PUSH32(esp, 0x000D2D5Du); RECOMP_ABI_CALL(0x0020AF90u, sub_0020AF90); /* call 0x0020AF90 */

loc_000D2D5D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000D2D64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D2D61u); } /* indirect call */
    }

loc_000D2D64: ;
    PUSH32(esp, esi);
    ecx = 0x351D98;
    PUSH32(esp, 0x000D2D6Fu); RECOMP_ABI_CALL(0x0014CE10u, sub_0014CE10); /* call 0x0014CE10 */

loc_000D2D6F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D2D80
 * Original: 0x000D2D80 - 0x000D2DA9 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D2D80: ;
    PUSH32(esp, esi);
    esi = MEM32(0x351E00);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2D9E; /* je: equal / zero */

loc_000D2D8E: ;
    edi = edi;

loc_000D2D90: ;
    esi = MEM32(esi);
    PUSH32(esp, 0x000D2D97u); RECOMP_ABI_CALL(0x000D2D20u, sub_000D2D20); /* call 0x000D2D20 */

loc_000D2D97: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2D90; /* jne: not equal / not zero */

loc_000D2D9E: ;
    ecx = 0x351E20;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00209700(); return; /* tail jmp 0x00209700 */

}

/**
 * sub_000D2DB0
 * Original: 0x000D2DB0 - 0x000D2DEF (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D2DB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x351E00);
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2DEC; /* je: equal / zero */

loc_000D2DBF: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);

loc_000D2DC4: ;
    _fa = (uint32_t)(MEM32(esi + 0x1E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1E0), ebx (32-bit) */
    edi = MEM32(edi);
    if (CMP_NE(_fa, _fb)) goto loc_000D2DE4; /* jne: not equal / not zero */

loc_000D2DCE: ;
    ecx = ebx;
    PUSH32(esp, 0x000D2DD5u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_000D2DD5: ;
    _fa = (uint32_t)(MEM32(esi + 0x1E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1E4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2DE4; /* jne: not equal / not zero */

loc_000D2DDD: ;
    ecx = esi;
    PUSH32(esp, 0x000D2DE4u); RECOMP_ABI_CALL(0x000D2D20u, sub_000D2D20); /* call 0x000D2D20 */

loc_000D2DE4: ;
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2DC4; /* jne: not equal / not zero */

loc_000D2DEB: ;
    POP32(esp, ebx);

loc_000D2DEC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D2DF0
 * Original: 0x000D2DF0 - 0x000D2F0D (285 bytes, 76 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D2DF0(void)
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

loc_000D2DF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000D2F05; /* je: equal / zero */

loc_000D2E0B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2E10u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_000D2E10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x78) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2F05; /* jne: not equal / not zero */

loc_000D2E19: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2E20u); RECOMP_ABI_CALL(0x000D1B10u, sub_000D1B10); /* call 0x000D1B10 */

loc_000D2E20: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2E27u); RECOMP_ABI_CALL(0x000D28E0u, sub_000D28E0); /* call 0x000D28E0 */

loc_000D2E27: ;
    xmm0 = XMM_SCALAR(MEMF(0x30E54C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC904); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x70); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2E4Cu); RECOMP_ABI_CALL(0x001F9E40u, sub_001F9E40); /* call 0x001F9E40 */

loc_000D2E4C: ;
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x74);
    edi = MEM32(eax + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2E7E; /* je: equal / zero */

loc_000D2E5C: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D2E63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D2E60u); } /* indirect call */
    }

loc_000D2E63: ;
    edx = MEM32(0x30C0B8);
    ecx = MEM32(0x30C0B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2E7E; /* jne: not equal / not zero */

loc_000D2E75: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xB0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    goto loc_000D2E8F;

loc_000D2E7E: ;
    ecx = MEM32(esi + 0x74);
    eax = esp + 0x90;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2E8Eu); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_000D2E8E: ;
    PUSH32(esp, eax);

loc_000D2E8F: ;
    ecx = esp + 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2E98u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000D2E98: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2EA6u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000D2EA6: ;
    edx = MEM32(esi + 0x70);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2EB4u); RECOMP_ABI_CALL(0x0022F7C6u, sub_0022F7C6); /* call 0x0022F7C6 */

loc_000D2EB4: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x6C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    ecx = esp + 0x10;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    PUSH32(esp, ecx);
    ecx = esi + 0x20;
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D2F05u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000D2F05: ;
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
 * sub_000D2F10
 * Original: 0x000D2F10 - 0x000D2F3F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2F10(void)
{

loc_000D2F10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x28;
    PUSH32(esp, eax);
    ecx = 0x351EF8;
    MEM32(esi + 0xD0) = 0;
    PUSH32(esp, 0x000D2F2Bu); RECOMP_ABI_CALL(0x0020B800u, sub_0020B800); /* call 0x0020B800 */

loc_000D2F2B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000D2F32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D2F2Fu); } /* indirect call */
    }

loc_000D2F32: ;
    PUSH32(esp, esi);
    ecx = 0x351E70;
    PUSH32(esp, 0x000D2F3Du); RECOMP_ABI_CALL(0x0014CE10u, sub_0014CE10); /* call 0x0014CE10 */

loc_000D2F3D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D2F40
 * Original: 0x000D2F40 - 0x000D2F69 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D2F40: ;
    PUSH32(esp, esi);
    esi = MEM32(0x351ED8);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D2F5E; /* je: equal / zero */

loc_000D2F4E: ;
    edi = edi;

loc_000D2F50: ;
    esi = MEM32(esi);
    PUSH32(esp, 0x000D2F57u); RECOMP_ABI_CALL(0x000D2F10u, sub_000D2F10); /* call 0x000D2F10 */

loc_000D2F57: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D2F50; /* jne: not equal / not zero */

loc_000D2F5E: ;
    ecx = 0x351EF8;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00209700(); return; /* tail jmp 0x00209700 */

}

/**
 * sub_000D2F70
 * Original: 0x000D2F70 - 0x000D318F (543 bytes, 138 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D2F70(void)
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

loc_000D2F70: ;
    SET_LO8(eax, MEM8(0x351D91));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000D318A; /* jne: not equal / not zero */

loc_000D2F83: ;
    eax = MEM32(0x41410C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D2F93; /* jne: not equal / not zero */

loc_000D2F8C: ;
    eax = 0x6438E0;
    goto loc_000D2F96;

loc_000D2F93: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D2F96: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x18) = eax;
    eax = esi + 0x88;
    MEM32(esp + 0x10) = ecx;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    MEM32(esp + 0x14) = edx;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
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
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2DC340)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000D318A; /* jbe: below or equal (unsigned <=) */

loc_000D2FF7: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D3002u); RECOMP_ABI_CALL(0x001F3400u, sub_001F3400); /* call 0x001F3400 */

loc_000D3002: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D318A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_000D3018: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2E8E44); /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D318A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2E8E44)) */

loc_000D303D: ;
    PUSH32(esp, 0x000D3042u); RECOMP_ABI_CALL(0x0020F910u, sub_0020F910); /* call 0x0020F910 */

loc_000D3042: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E2440); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D318A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 8)) */

loc_000D3059: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2E8E44); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D318A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2E8E44)) */

loc_000D306C: ;
    PUSH32(esp, 0x000D3071u); RECOMP_ABI_CALL(0x0020F920u, sub_0020F920); /* call 0x0020F920 */

loc_000D3071: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2E2440); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D318A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_000D3088: ;
    ecx = MEM32(0x842E20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xB486703Au);
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D309Bu); RECOMP_ABI_CALL(0x000C5840u, sub_000C5840); /* call 0x000C5840 */

loc_000D309B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D30B4; /* je: equal / zero */

loc_000D309F: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(0x7934C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D30AEu); RECOMP_ABI_CALL(0x000C2740u, sub_000C2740); /* call 0x000C2740 */

loc_000D30AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D30B4; /* je: equal / zero */

loc_000D30B2: ;
    SET_LO8(ebx, 1);

loc_000D30B4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D3189; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000D30C6: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3189; /* je: equal / zero */

loc_000D30CE: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xA0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xA4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D3103; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000D30FB: ;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    goto loc_000D3116;

loc_000D3103: ;
    xmm1 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D3116; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D3110: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_000D3116: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, 1);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2E2440)); /* fmul dword ptr [0x2e2440] */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D312Bu); RECOMP_ABI_CALL(0x002375B4u, sub_002375B4); /* call 0x002375B4 */

loc_000D312B: ;
    edx = MEM32(esi + 0x7C);
    if (0x18) _cf = (int)(((eax) >> (32 - (0x18))) & 1);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, 0xB486703Au);
    ecx = esi;
    PUSH32(esp, 0x000D3140u); RECOMP_ABI_CALL(0x0020A0D0u, sub_0020A0D0); /* call 0x0020A0D0 */

loc_000D3140: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2E55D8); /* subss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42400000);
    PUSH32(esp, 0x42400000);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2E42A0); /* subss */
    ecx = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000D3189u); RECOMP_ABI_CALL(0x0020A1C0u, sub_0020A1C0); /* call 0x0020A1C0 */

loc_000D3189: ;
    POP32(esp, ebx);

loc_000D318A: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
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
 * sub_000D3190
 * Original: 0x000D3190 - 0x000D3276 (230 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D3190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D3190: ;
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
    ecx = 0x351E70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D31A5u); RECOMP_ABI_CALL(0x000D2BF0u, sub_000D2BF0); /* call 0x000D2BF0 */

loc_000D31A5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D326E; /* je: equal / zero */

loc_000D31AF: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D326E; /* je: equal / zero */

loc_000D31BA: ;
    MEM32(esi + 0xD0) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D31C5u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_000D31C5: ;
    ecx = MEM32(esi + 0xD0);
    MEM32(esi + 0xD4) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM8(esi + 0x120) = 0;
    MEM8(esi + 0x121) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D31E9u); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_000D31E9: ;
    PUSH32(esp, eax);
    ecx = esi + 0xE0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D31F5u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000D31F5: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3DC)); /* movss */
    ecx = MEM32(ebp + 0xC);
    edi = esi + 0x28;
    MEM32(esi + 0xA8) = 0xA9512042u;
    MEMF(edi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC874)); /* movss */
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esi + 0xAC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D322Fu); RECOMP_ABI_CALL(0x000D17F0u, sub_000D17F0); /* call 0x000D17F0 */

loc_000D322F: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC094)); /* movss */
    MEM32(esi + 0xA4) = 0x808080;
    MEMF(edi + 0xA0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC34C)); /* movss */
    MEMF(edi + 0xA4) = xmm0.f[0]; /* movss */
    ecx = esi;
    MEM8(esi + 0x122) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D3267u); RECOMP_ABI_CALL(0x000D19C0u, sub_000D19C0); /* call 0x000D19C0 */

loc_000D3267: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D326Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D326Bu); } /* indirect call */
    }

loc_000D326E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D3280
 * Original: 0x000D3280 - 0x000D32BF (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D3280: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x351ED8);
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D32BC; /* je: equal / zero */

loc_000D328F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);

loc_000D3294: ;
    _fa = (uint32_t)(MEM32(esi + 0xD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD0), ebx (32-bit) */
    edi = MEM32(edi);
    if (CMP_NE(_fa, _fb)) goto loc_000D32B4; /* jne: not equal / not zero */

loc_000D329E: ;
    ecx = ebx;
    PUSH32(esp, 0x000D32A5u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_000D32A5: ;
    _fa = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D32B4; /* jne: not equal / not zero */

loc_000D32AD: ;
    ecx = esi;
    PUSH32(esp, 0x000D32B4u); RECOMP_ABI_CALL(0x000D2F10u, sub_000D2F10); /* call 0x000D2F10 */

loc_000D32B4: ;
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3294; /* jne: not equal / not zero */

loc_000D32BB: ;
    POP32(esp, ebx);

loc_000D32BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D32C0
 * Original: 0x000D32C0 - 0x000D3599 (729 bytes, 193 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D32C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000D32C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xD0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D32D9u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_000D32D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xD4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3589; /* jne: not equal / not zero */

loc_000D32E5: ;
    ecx = MEM32(esi + 0xD0);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D32F5u); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_000D32F5: ;
    PUSH32(esp, eax);
    ecx = esi + 0xE0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D3301u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000D3301: ;
    eax = esi + 0x110;
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(esi + 0xD0);
    MEM32(esp + 0x1C) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    MEM32(esp + 0x20) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_000D33D5; /* jne: not equal / not zero */

loc_000D3346: ;
    edi = MEM32(eax + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D33D5; /* je: equal / zero */

loc_000D3351: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D3358u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3355u); } /* indirect call */
    }

loc_000D3358: ;
    edx = MEM32(0x30C0B8);
    ecx = MEM32(0x30C0B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D33D5; /* jne: not equal / not zero */

loc_000D336A: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x000D3374u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D336Eu); } /* indirect call */
    }

loc_000D3374: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D33D5; /* je: equal / zero */

loc_000D3378: ;
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(0x643844);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D3387u); RECOMP_ABI_CALL(0x00013A20u, sub_00013A20); /* call 0x00013A20 */

loc_000D3387: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D33D5; /* je: equal / zero */

loc_000D338B: ;
    PUSH32(esp, edi);
    ecx = 0x30D4B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D3396u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_000D3396: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x120) = LO8(ecx);
    PUSH32(esp, edi);
    ecx = 0x30D350;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D33ACu); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_000D33AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = esp + 0x18;
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM8(esi + 0x121) = LO8(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D33C2u); RECOMP_ABI_CALL(0x001013E0u, sub_001013E0); /* call 0x001013E0 */

loc_000D33C2: ;
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D33E7;

loc_000D33D5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_000D33E7: ;
    MEMF(esi + 0xB8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esi + 0xB0) = xmm2.f[0]; /* movss */
    MEMF(esi + 0xB4) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xBC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esi + 0xC0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esi + 0xC4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC874)); /* movss */
    ecx = MEM32(esi + 0xD0);
    MEMF(esi + 0xAC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D3444u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_000D3444: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xD4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D34B6; /* jne: not equal / not zero */

loc_000D344C: ;
    ecx = MEM32(esi + 0xD0);
    edi = MEM32(ecx + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D34B6; /* je: equal / zero */

loc_000D3459: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D3460u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D345Du); } /* indirect call */
    }

loc_000D3460: ;
    edx = MEM32(0x30C0B8);
    ecx = MEM32(0x30C0B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D34B6; /* jne: not equal / not zero */

loc_000D3472: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000D3479u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3476u); } /* indirect call */
    }

loc_000D3479: ;
    edx = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    ecx = edi;
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D3486u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3483u); } /* indirect call */
    }

loc_000D3486: ;
    ecx = MEM32(0x30D4B8);
    edx = MEM32(0x30D4B4);
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D34B6; /* jne: not equal / not zero */

loc_000D349D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D34B6; /* jne: not equal / not zero */

loc_000D34A1: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x98); /* comiss */
    if ((_fca > _fcb)) goto loc_000D3589; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edi + 0x98)) */

loc_000D34B6: ;
    ecx = MEM32(esi + 0xD0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D34C1u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_000D34C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xD4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3590; /* jne: not equal / not zero */

loc_000D34CD: ;
    _fa = (uint32_t)(MEM8(esi + 0x122)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x122), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3590; /* jne: not equal / not zero */

loc_000D34DA: ;
    ecx = MEM32(esi + 0xD0);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D34EAu); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_000D34EA: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x41410C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000D3511; /* jne: not equal / not zero */

loc_000D350A: ;
    eax = 0x6438E0;
    goto loc_000D3514;

loc_000D3511: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D3514: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x2C) = eax;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x20); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 0x28) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm2 = xmm1; /* movaps */
    MEM32(esp + 0x24) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x2DEE90)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D3590; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000D3579: ;
    MEM8(esi + 0x123) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000D3589: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D3590u); RECOMP_ABI_CALL(0x000D2F10u, sub_000D2F10); /* call 0x000D2F10 */

loc_000D3590: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D35A0
 * Original: 0x000D35A0 - 0x000D35FC (92 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D35A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D35A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x240);
    PUSH32(esp, 0x000D35B4u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D35B4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D35C4; /* je: equal / zero */

loc_000D35BB: ;
    ecx = eax;
    PUSH32(esp, 0x000D35C2u); RECOMP_ABI_CALL(0x000D2C50u, sub_000D2C50); /* call 0x000D2C50 */

loc_000D35C2: ;
    goto loc_000D35C6;

loc_000D35C4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D35C6: ;
    edi = MEM32(esi + 0x74);
    edx = esi + 0x68;
    ecx = eax + 0x1C;
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
    _fb = (uint32_t)(0x240) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x240;
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
 * sub_000D3600
 * Original: 0x000D3600 - 0x000D3741 (321 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D3600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D3600: ;
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
    PUSH32(esp, edi);
    ecx = 0x351D98;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D3616u); RECOMP_ABI_CALL(0x000D35A0u, sub_000D35A0); /* call 0x000D35A0 */

loc_000D3616: ;
    esi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3738; /* je: equal / zero */

loc_000D3622: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3738; /* je: equal / zero */

loc_000D362D: ;
    MEM32(esi + 0x1E0) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D3638u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_000D3638: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3A0)); /* movss */
    ecx = MEM32(esi + 0x1E0);
    MEM32(esi + 0x1E4) = eax;
    eax = esp + 0x10;
    MEM8(esi + 0x230) = LO8(ebx);
    MEM8(esi + 0x231) = LO8(ebx);
    PUSH32(esp, eax);
    MEMF(esi + 0x234) = xmm0.f[0]; /* movss */
    ebx = esi + 0x1F0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D3670u); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_000D3670: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D3678u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000D3678: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC3DC)); /* movss */
    ecx = MEM32(ebp + 0xC);
    edi = esi + 0xC0;
    MEM32(esi + 0x140) = 0xA9512042u;
    MEMF(edi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC874)); /* movss */
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esi + 0x144) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D36B5u); RECOMP_ABI_CALL(0x000D17F0u, sub_000D17F0); /* call 0x000D17F0 */

loc_000D36B5: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D36BEu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000D36BE: ;
    ecx = esi + 0x30;
    PUSH32(esp, 0x3F800000);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D36CBu); RECOMP_ABI_CALL(0x000D1830u, sub_000D1830); /* call 0x000D1830 */

loc_000D36CB: ;
    ebx = esi + 0x160;
    ecx = ebx;
    MEM32(esi + 0x90) = 0x8000FFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D36E2u); RECOMP_ABI_CALL(0x000D1920u, sub_000D1920); /* call 0x000D1920 */

loc_000D36E2: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D36EBu); RECOMP_ABI_CALL(0x000D1950u, sub_000D1950); /* call 0x000D1950 */

loc_000D36EB: ;
    eax = esi + 0x1F0;
    PUSH32(esp, eax);
    ecx = esi + 0x180;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D36FDu); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000D36FD: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC880)); /* movss */
    MEMF(ebx + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC8AC)); /* movss */
    MEMF(ebx + 0x68) = xmm0.f[0]; /* movss */
    ecx = esi;
    MEM32(esi + 0x1C0) = 0x1000FFFF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D3728u); RECOMP_ABI_CALL(0x000D1770u, sub_000D1770); /* call 0x000D1770 */

loc_000D3728: ;
    eax = MEM32(esi + 0x30);
    ecx = esi + 0x30;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000D3731u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D372Eu); } /* indirect call */
    }

loc_000D3731: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D3738u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3735u); } /* indirect call */
    }

loc_000D3738: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000D3750
 * Original: 0x000D3750 - 0x000D3BB1 (1121 bytes, 291 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D3750(void)
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

loc_000D3750: ;
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
    edi = ecx;
    ecx = MEM32(edi + 0x1E0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D376Cu); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_000D376C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x1E4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3BA1; /* jne: not equal / not zero */

loc_000D3778: ;
    ecx = MEM32(edi + 0x1E0);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    esi = edi + 0x1F0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D378Eu); RECOMP_ABI_CALL(0x001ECA50u, sub_001ECA50); /* call 0x001ECA50 */

loc_000D378E: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D3796u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000D3796: ;
    eax = edi + 0x220;
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(edi + 0x1E0);
    MEM32(esp + 0x28) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) >> 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    MEM32(esp + 0x2C) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_000D3A76; /* jne: not equal / not zero */

loc_000D37DB: ;
    ebx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x20) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000D3A76; /* je: equal / zero */

loc_000D37EA: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D37F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D37EEu); } /* indirect call */
    }

loc_000D37F1: ;
    edx = MEM32(0x30C0B8);
    ecx = MEM32(0x30C0B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3A76; /* jne: not equal / not zero */

loc_000D3807: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x000D3811u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D380Bu); } /* indirect call */
    }

loc_000D3811: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D39C9; /* je: equal / zero */

loc_000D3819: ;
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(0x643844);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D3828u); RECOMP_ABI_CALL(0x00013A20u, sub_00013A20); /* call 0x00013A20 */

loc_000D3828: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3A76; /* je: equal / zero */

loc_000D3832: ;
    ecx = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x70)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    PUSH32(esp, ecx);
    ecx = 0x30D4B0;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D3852u); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_000D3852: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 0x20);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    ecx = 0x30D350;
    MEM8(edi + 0x230) = LO8(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D386Cu); RECOMP_ABI_CALL(0x00015A00u, sub_00015A00); /* call 0x00015A00 */

loc_000D386C: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x234)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM8(edi + 0x231) = LO8(eax);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D3890; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D3887: ;
    ecx = MEM32(edi + 0x234);
    PUSH32(esp, ecx);
    goto loc_000D38C2;

loc_000D3890: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3962; /* je: equal / zero */

loc_000D3898: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x6C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x60); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebx + 0x68); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000D38B4; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_000D38B1: ;
    xmm0 = xmm2; /* movaps */

loc_000D38B4: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2DC340); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_000D38C2: ;
    ecx = edi + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D38CAu); RECOMP_ABI_CALL(0x000D1830u, sub_000D1830); /* call 0x000D1830 */

loc_000D38CA: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esi + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 1);
    MEMF(esi + 0x18) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0);
    MEMF(esi + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0);
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0);
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    edx = esp + 0x23;
    PUSH32(esp, edx);
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    eax = esp + 0x44;
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    MEMF(esi) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D393Du); RECOMP_ABI_CALL(0x0012D6A0u, sub_0012D6A0); /* call 0x0012D6A0 */

loc_000D393D: ;
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    goto loc_000D3A69;

loc_000D3962: ;
    edx = MEM32(ebx + 0x6C);
    eax = MEM32(ebx + 0x68);
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x60)); /* movss */
    ecx = edx;
    MEM32(esp + 0x48) = edx;
    edx = MEM32(ebx + 0x74);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(ebx + 0x60);
    MEM32(esp + 0x3C) = ecx;
    ecx = edx;
    PUSH32(esp, ecx);
    MEM32(esp + 0x48) = edx;
    edx = eax;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x58);
    MEM32(esp + 0x38) = eax;
    eax = ecx;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x68)); /* movss */
    edx = MEM32(esp + 0x68);
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x70);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D39C4u); RECOMP_ABI_CALL(0x000D1850u, sub_000D1850); /* call 0x000D1850 */

loc_000D39C4: ;
    goto loc_000D3A76;

loc_000D39C9: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x234)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    ecx = edi + 0x30;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D39E5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D39DC: ;
    eax = MEM32(edi + 0x234);
    PUSH32(esp, eax);
    goto loc_000D39EA;

loc_000D39E5: ;
    PUSH32(esp, 0x3F800000);

loc_000D39EA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D39EFu); RECOMP_ABI_CALL(0x000D1830u, sub_000D1830); /* call 0x000D1830 */

loc_000D39EF: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    MEMF(esi + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D3A55u); RECOMP_ABI_CALL(0x00022D30u, sub_00022D30); /* call 0x00022D30 */

loc_000D3A55: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x34) = edx;
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x38) = eax;

loc_000D3A69: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */

loc_000D3A76: ;
    ecx = MEM32(edi + 0x1E0);
    SET_LO8(edx, MEM8(ecx + 0x30));
    SET_LO8(edx, LO8(edx) >> 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D3A98; /* je: equal / zero */

loc_000D3A87: ;
    eax = MEM32(edi + 0x160);
    ecx = edi + 0x160;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D3A96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3A93u); } /* indirect call */
    }

loc_000D3A96: ;
    goto loc_000D3AB1;

loc_000D3A98: ;
    SET_LO8(eax, MEM8(edi + 0x238));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3AB1; /* je: equal / zero */

loc_000D3AA2: ;
    edx = MEM32(edi + 0x160);
    ecx = edi + 0x160;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D3AB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3AAEu); } /* indirect call */
    }

loc_000D3AB1: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = edi + 0x160;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D3AC0u); RECOMP_ABI_CALL(0x000D2DF0u, sub_000D2DF0); /* call 0x000D2DF0 */

loc_000D3AC0: ;
    PUSH32(esp, esi);
    ecx = edi + 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D3AC9u); RECOMP_ABI_CALL(0x00011D80u, sub_00011D80); /* call 0x00011D80 */

loc_000D3AC9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(edi + 0x148) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(edi + 0x14C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(edi + 0x150) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(edi + 0x154) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(edi + 0x158) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(edi + 0x15C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC874)); /* movss */
    ecx = MEM32(edi + 0x1E0);
    MEMF(edi + 0x144) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D3B38u); RECOMP_ABI_CALL(0x001EBC10u, sub_001EBC10); /* call 0x001EBC10 */

loc_000D3B38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x1E4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x1E4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3BA8; /* jne: not equal / not zero */

loc_000D3B40: ;
    ecx = MEM32(edi + 0x1E0);
    esi = MEM32(ecx + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3BA8; /* je: equal / zero */

loc_000D3B4D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D3B54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3B51u); } /* indirect call */
    }

loc_000D3B54: ;
    edx = MEM32(0x30C0B8);
    ecx = MEM32(0x30C0B4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3BA8; /* jne: not equal / not zero */

loc_000D3B66: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000D3B6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3B6Au); } /* indirect call */
    }

loc_000D3B6D: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    ecx = esi;
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D3B7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3B77u); } /* indirect call */
    }

loc_000D3B7A: ;
    ecx = MEM32(0x30D4B8);
    edx = MEM32(0x30D4B4);
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3BA8; /* jne: not equal / not zero */

loc_000D3B91: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3BA8; /* jne: not equal / not zero */

loc_000D3B95: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x98); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D3BA8; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x98)) */

loc_000D3BA1: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D3BA8u); RECOMP_ABI_CALL(0x000D2D20u, sub_000D2D20); /* call 0x000D2D20 */

loc_000D3BA8: ;
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
 * sub_000D3BC0
 * Original: 0x000D3BC0 - 0x000D3E03 (579 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D3BC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3EB8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3BD2; /* je: equal / zero */

loc_000D3BCD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000D3BD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3BCFu); } /* indirect call */
    }

loc_000D3BD2: ;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    MEM32(0x351F48) = MEM32(0x351F48) - 1;
    _fa = (uint32_t)(MEM32(0x351F48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3C00; /* je: equal / zero */

loc_000D3BED: ;
    edx = MEM32(esi + 0x1B38);
    ecx = esi + 0x1B38;
    MEM8(esi + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000D3C00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3BFDu); } /* indirect call */
    }

loc_000D3C00: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x000D3C08u); RECOMP_ABI_CALL(0x000DC250u, sub_000DC250); /* call 0x000DC250 */

loc_000D3C08: ;
    eax = MEM32(esi + 0x2278);
    ecx = esi + 0x2278;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000D3C17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3C14u); } /* indirect call */
    }

loc_000D3C17: ;
    edx = MEM32(esi + 0x22DC);
    ecx = esi + 0x22DC;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D3C26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3C23u); } /* indirect call */
    }

loc_000D3C26: ;
    eax = MEM32(esi + 0x233C);
    ecx = esi + 0x233C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000D3C35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3C32u); } /* indirect call */
    }

loc_000D3C35: ;
    edx = MEM32(esi + 0x23A0);
    ecx = esi + 0x23A0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D3C44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3C41u); } /* indirect call */
    }

loc_000D3C44: ;
    eax = MEM32(esi + 0x2404);
    ecx = esi + 0x2404;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000D3C53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3C50u); } /* indirect call */
    }

loc_000D3C53: ;
    edx = MEM32(esi + 0x2FA4);
    ecx = esi + 0x2FA4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D3C62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3C5Fu); } /* indirect call */
    }

loc_000D3C62: ;
    eax = MEM32(esi + 0x3018);
    ecx = esi + 0x3018;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000D3C71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3C6Eu); } /* indirect call */
    }

loc_000D3C71: ;
    edx = MEM32(esi + 0x2468);
    ecx = esi + 0x2468;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D3C80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3C7Du); } /* indirect call */
    }

loc_000D3C80: ;
    eax = MEM32(esi + 0x24D0);
    ecx = esi + 0x24D0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000D3C8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3C8Cu); } /* indirect call */
    }

loc_000D3C8F: ;
    edx = MEM32(esi + 0x2560);
    ecx = esi + 0x2560;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D3C9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3C9Bu); } /* indirect call */
    }

loc_000D3C9E: ;
    eax = MEM32(esi + 0x25C8);
    ecx = esi + 0x25C8;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000D3CADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3CAAu); } /* indirect call */
    }

loc_000D3CAD: ;
    edx = MEM32(esi + 0x2628);
    ecx = esi + 0x2628;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D3CBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3CB9u); } /* indirect call */
    }

loc_000D3CBC: ;
    eax = MEM32(esi + 0x2A8C);
    ecx = esi + 0x2A8C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000D3CCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3CC8u); } /* indirect call */
    }

loc_000D3CCB: ;
    edx = MEM32(esi + 0x2AFC);
    ecx = esi + 0x2AFC;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D3CDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3CD7u); } /* indirect call */
    }

loc_000D3CDA: ;
    eax = MEM32(esi + 0x2B78);
    ecx = esi + 0x2B78;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000D3CE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3CE6u); } /* indirect call */
    }

loc_000D3CE9: ;
    edx = MEM32(esi + 0x2C10);
    ecx = esi + 0x2C10;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D3CF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3CF5u); } /* indirect call */
    }

loc_000D3CF8: ;
    eax = MEM32(esi + 0x2CCC);
    ecx = esi + 0x2CCC;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000D3D07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3D04u); } /* indirect call */
    }

loc_000D3D07: ;
    edx = MEM32(esi + 0x2D88);
    ecx = esi + 0x2D88;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D3D16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3D13u); } /* indirect call */
    }

loc_000D3D16: ;
    eax = MEM32(esi + 0x2F44);
    ecx = esi + 0x2F44;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000D3D25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3D22u); } /* indirect call */
    }

loc_000D3D25: ;
    edx = MEM32(esi + 0x39D8);
    ecx = esi + 0x39D8;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D3D34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3D31u); } /* indirect call */
    }

loc_000D3D34: ;
    eax = MEM32(esi + 0x3B14);
    ecx = esi + 0x3B14;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000D3D43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3D40u); } /* indirect call */
    }

loc_000D3D43: ;
    edx = MEM32(esi + 0x3B74);
    ecx = esi + 0x3B74;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D3D52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3D4Fu); } /* indirect call */
    }

loc_000D3D52: ;
    eax = MEM32(esi + 0x3BE4);
    ecx = esi + 0x3BE4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000D3D61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3D5Eu); } /* indirect call */
    }

loc_000D3D61: ;
    edx = MEM32(esi + 0x3C54);
    ecx = esi + 0x3C54;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D3D70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3D6Du); } /* indirect call */
    }

loc_000D3D70: ;
    eax = MEM32(esi + 0x3CC4);
    ecx = esi + 0x3CC4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000D3D7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3D7Cu); } /* indirect call */
    }

loc_000D3D7F: ;
    edx = MEM32(esi + 0x3D34);
    ecx = esi + 0x3D34;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D3D8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3D8Bu); } /* indirect call */
    }

loc_000D3D8E: ;
    ecx = esi + 0x3DA4;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000D3D99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3D96u); } /* indirect call */
    }

loc_000D3D99: ;
    edx = MEM32(esi + 0x3078);
    ecx = esi + 0x3078;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D3DA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3DA5u); } /* indirect call */
    }

loc_000D3DA8: ;
    eax = MEM32(esi + 0x3834);
    ecx = esi + 0x3834;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000D3DB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3DB4u); } /* indirect call */
    }

loc_000D3DB7: ;
    edx = MEM32(esi + 0x389C);
    ecx = esi + 0x389C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D3DC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3DC3u); } /* indirect call */
    }

loc_000D3DC6: ;
    eax = MEM32(esi + 0x3904);
    ecx = esi + 0x3904;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000D3DD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3DD2u); } /* indirect call */
    }

loc_000D3DD5: ;
    edx = MEM32(esi + 0x3970);
    ecx = esi + 0x3970;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000D3DE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3DE1u); } /* indirect call */
    }

loc_000D3DE4: ;
    eax = MEM32(esi + 0x3AA8);
    ecx = esi + 0x3AA8;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000D3DF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3DF0u); } /* indirect call */
    }

loc_000D3DF3: ;
    edx = MEM32(esi + 0x3E14);
    ecx = esi + 0x3E14;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

}

/**
 * sub_000D3E10
 * Original: 0x000D3E10 - 0x000D3E5D (77 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D3E10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x2E8E48;

loc_000D3E22: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3E36; /* jne: not equal / not zero */

loc_000D3E28: ;
    ebx = MEM32(eax + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3E36; /* jne: not equal / not zero */

loc_000D3E2F: ;
    ebx = MEM32(eax + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3E45; /* je: equal / zero */

loc_000D3E36: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D3E3F; /* jne: not equal / not zero */

loc_000D3E3A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3E4D; /* je: equal / zero */

loc_000D3E3F: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D3E22;

loc_000D3E45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D3E4D: ;
    POP32(esp, edi);
    eax = edx + edx * 2;
    eax = MEM32(eax * 4 + 0x2E8E50);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D3E60
 * Original: 0x000D3E60 - 0x000D3E92 (50 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D3E60: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3EB8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D3E72; /* je: equal / zero */

loc_000D3E6D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000D3E72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3E6Fu); } /* indirect call */
    }

loc_000D3E72: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x3EB8) = ecx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000D3E81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D3E7Eu); } /* indirect call */
    }

loc_000D3E81: ;
    PUSH32(esp, 0x148016C7);
    ecx = esi + 0x10;
    PUSH32(esp, 0x000D3E8Eu); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D3E8E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D3EA0
 * Original: 0x000D3EA0 - 0x000D3FF1 (337 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D3EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D3EA0: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x24 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D3FEE; /* ja: above (unsigned >) */

loc_000D3EAF: ;
    { uint32_t _jt = MEM32(edx * 4 + 0xD3FF4); /* switch: 37 entries, 36 targets */
    if (_jt == 0x000D3EB6u) goto loc_000D3EB6;
    if (_jt == 0x000D3EBFu) goto loc_000D3EBF;
    if (_jt == 0x000D3EC8u) goto loc_000D3EC8;
    if (_jt == 0x000D3ED1u) goto loc_000D3ED1;
    if (_jt == 0x000D3EDAu) goto loc_000D3EDA;
    if (_jt == 0x000D3EE3u) goto loc_000D3EE3;
    if (_jt == 0x000D3EECu) goto loc_000D3EEC;
    if (_jt == 0x000D3EF5u) goto loc_000D3EF5;
    if (_jt == 0x000D3EFEu) goto loc_000D3EFE;
    if (_jt == 0x000D3F07u) goto loc_000D3F07;
    if (_jt == 0x000D3F10u) goto loc_000D3F10;
    if (_jt == 0x000D3F19u) goto loc_000D3F19;
    if (_jt == 0x000D3F22u) goto loc_000D3F22;
    if (_jt == 0x000D3F2Bu) goto loc_000D3F2B;
    if (_jt == 0x000D3F34u) goto loc_000D3F34;
    if (_jt == 0x000D3F3Du) goto loc_000D3F3D;
    if (_jt == 0x000D3F46u) goto loc_000D3F46;
    if (_jt == 0x000D3F4Fu) goto loc_000D3F4F;
    if (_jt == 0x000D3F58u) goto loc_000D3F58;
    if (_jt == 0x000D3F61u) goto loc_000D3F61;
    if (_jt == 0x000D3F6Au) goto loc_000D3F6A;
    if (_jt == 0x000D3F73u) goto loc_000D3F73;
    if (_jt == 0x000D3F7Cu) goto loc_000D3F7C;
    if (_jt == 0x000D3F85u) goto loc_000D3F85;
    if (_jt == 0x000D3F8Eu) goto loc_000D3F8E;
    if (_jt == 0x000D3F97u) goto loc_000D3F97;
    if (_jt == 0x000D3FA0u) goto loc_000D3FA0;
    if (_jt == 0x000D3FA9u) goto loc_000D3FA9;
    if (_jt == 0x000D3FB2u) goto loc_000D3FB2;
    if (_jt == 0x000D3FBBu) goto loc_000D3FBB;
    if (_jt == 0x000D3FC4u) goto loc_000D3FC4;
    if (_jt == 0x000D3FCDu) goto loc_000D3FCD;
    if (_jt == 0x000D3FD6u) goto loc_000D3FD6;
    if (_jt == 0x000D3FDFu) goto loc_000D3FDF;
    if (_jt == 0x000D3FE8u) goto loc_000D3FE8;
    if (_jt == 0x000D3FEEu) goto loc_000D3FEE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D3EB6: ;
    eax = ecx + 0x2278;
    esp += 8; return; /* ret 4 */

loc_000D3EBF: ;
    eax = ecx + 0x22DC;
    esp += 8; return; /* ret 4 */

loc_000D3EC8: ;
    eax = ecx + 0x233C;
    esp += 8; return; /* ret 4 */

loc_000D3ED1: ;
    eax = ecx + 0x23A0;
    esp += 8; return; /* ret 4 */

loc_000D3EDA: ;
    eax = ecx + 0x2404;
    esp += 8; return; /* ret 4 */

loc_000D3EE3: ;
    eax = ecx + 0x2FA4;
    esp += 8; return; /* ret 4 */

loc_000D3EEC: ;
    eax = ecx + 0x3018;
    esp += 8; return; /* ret 4 */

loc_000D3EF5: ;
    eax = ecx + 0x2468;
    esp += 8; return; /* ret 4 */

loc_000D3EFE: ;
    eax = ecx + 0x24D0;
    esp += 8; return; /* ret 4 */

loc_000D3F07: ;
    eax = ecx + 0x2560;
    esp += 8; return; /* ret 4 */

loc_000D3F10: ;
    eax = ecx + 0x25C8;
    esp += 8; return; /* ret 4 */

loc_000D3F19: ;
    eax = ecx + 0x2628;
    esp += 8; return; /* ret 4 */

loc_000D3F22: ;
    eax = ecx + 0x2A8C;
    esp += 8; return; /* ret 4 */

loc_000D3F2B: ;
    eax = ecx + 0x2AFC;
    esp += 8; return; /* ret 4 */

loc_000D3F34: ;
    eax = ecx + 0x2B78;
    esp += 8; return; /* ret 4 */

loc_000D3F3D: ;
    eax = ecx + 0x2C10;
    esp += 8; return; /* ret 4 */

loc_000D3F46: ;
    eax = ecx + 0x2CCC;
    esp += 8; return; /* ret 4 */

loc_000D3F4F: ;
    eax = ecx + 0x2D88;
    esp += 8; return; /* ret 4 */

loc_000D3F58: ;
    eax = ecx + 0x2F44;
    esp += 8; return; /* ret 4 */

loc_000D3F61: ;
    eax = ecx + 0x3078;
    esp += 8; return; /* ret 4 */

loc_000D3F6A: ;
    eax = ecx + 0x389C;
    esp += 8; return; /* ret 4 */

loc_000D3F73: ;
    eax = ecx + 0x3834;
    esp += 8; return; /* ret 4 */

loc_000D3F7C: ;
    eax = ecx + 0x3904;
    esp += 8; return; /* ret 4 */

loc_000D3F85: ;
    eax = ecx + 0x3970;
    esp += 8; return; /* ret 4 */

loc_000D3F8E: ;
    eax = ecx + 0x39D8;
    esp += 8; return; /* ret 4 */

loc_000D3F97: ;
    eax = ecx + 0x3AA8;
    esp += 8; return; /* ret 4 */

loc_000D3FA0: ;
    eax = ecx + 0x3B14;
    esp += 8; return; /* ret 4 */

loc_000D3FA9: ;
    eax = ecx + 0x3B74;
    esp += 8; return; /* ret 4 */

loc_000D3FB2: ;
    eax = ecx + 0x3BE4;
    esp += 8; return; /* ret 4 */

loc_000D3FBB: ;
    eax = ecx + 0x3C54;
    esp += 8; return; /* ret 4 */

loc_000D3FC4: ;
    eax = ecx + 0x3CC4;
    esp += 8; return; /* ret 4 */

loc_000D3FCD: ;
    eax = ecx + 0x3D34;
    esp += 8; return; /* ret 4 */

loc_000D3FD6: ;
    eax = ecx + 0x3DA4;
    esp += 8; return; /* ret 4 */

loc_000D3FDF: ;
    eax = ecx + 0x3A40;
    esp += 8; return; /* ret 4 */

loc_000D3FE8: ;
    eax = ecx + 0x3E14;

loc_000D3FEE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D4090
 * Original: 0x000D4090 - 0x000D40E2 (82 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D4090: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7EFD1D6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7EFD1D6F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D40C1; /* je: equal / zero */

loc_000D409B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE6FD2518u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE6FD2518u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D40DF; /* jne: not equal / not zero */

loc_000D40A2: ;
    edx = MEM32(ecx + 0x3EB8);
    eax = ecx + 0x233C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D40DF; /* jne: not equal / not zero */

loc_000D40B2: ;
    edx = ecx + 0x2404;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_000D3E60(); return; /* tail jmp 0x000D3E60 */

loc_000D40C1: ;
    edx = MEM32(ecx + 0x3EB8);
    eax = ecx + 0x2FA4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D40DF; /* jne: not equal / not zero */

loc_000D40D1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x7EFD1D6F);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000D40DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D40DCu); } /* indirect call */
    }

loc_000D40DF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D40F0
 * Original: 0x000D40F0 - 0x000D4116 (38 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D40F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D40F0: ;
    eax = MEM32(ecx + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D4113; /* jl: less (signed <) */

loc_000D40F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x44) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D4113; /* jge: greater or equal (signed >=) */

loc_000D40FC: ;
    ecx = MEM32(ecx + eax * 4 + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4D510E33);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D4109u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4107u); } /* indirect call */
    }

loc_000D4109: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D410Fu); RECOMP_ABI_CALL(0x0010D240u, sub_0010D240); /* call 0x0010D240 */

loc_000D410F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D4113: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D4120
 * Original: 0x000D4120 - 0x000D413D (29 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D4120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4120: ;
    eax = MEM32(ecx + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D413A; /* jl: less (signed <) */

loc_000D4127: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x44) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D413A; /* jge: greater or equal (signed >=) */

loc_000D412C: ;
    ecx = MEM32(ecx + eax * 4 + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4D510E33);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D4139u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4137u); } /* indirect call */
    }

loc_000D4139: ;
    esp += 4; return; /* ret */

loc_000D413A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D4140
 * Original: 0x000D4140 - 0x000D418A (74 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4140: ;
    eax = MEM32(0x300E80);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D4153u); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_000D4153: ;
    eax = MEM32(edi + 0x44);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D4180; /* jle: less or equal (signed <=) */

loc_000D415F: ;
    PUSH32(esp, esi);
    esi = edi + 4;

loc_000D4163: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D416Bu); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000D416B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;
    eax = MEM32(edi + 0x44);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D4163; /* jl: less (signed <) */

loc_000D417F: ;
    POP32(esp, esi);

loc_000D4180: ;
    MEM32(edi + 0x44) = 0;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D4190
 * Original: 0x000D4190 - 0x000D41AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4190: ;
    SET_LO8(eax, MEM8(ecx + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D41A9; /* je: equal / zero */

loc_000D4197: ;
    eax = MEM32(ecx + 0x44);
    edx = MEM32(ecx + 0x48);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D41A9; /* jne: not equal / not zero */

loc_000D41A2: ;
    MEM32(ecx + 0x48) = 0;

loc_000D41A9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D41B0
 * Original: 0x000D41B0 - 0x000D41C1 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D41B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D41B0: ;
    eax = MEM32(ecx + 0x44);
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 4) = edx;
    MEM32(ecx + 0x44) = MEM32(ecx + 0x44) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D41D0
 * Original: 0x000D41D0 - 0x000D41F9 (41 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D41D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D41D0: ;
    eax = MEM32(ecx + 0x44);
    edx = MEM32(esp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x44) = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D41EE; /* jle: less or equal (signed <=) */

loc_000D41E0: ;
    PUSH32(esp, esi);

loc_000D41E1: ;
    esi = MEM32(ecx + eax * 4);
    MEM32(ecx + eax * 4 + 4) = esi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000D41E1; /* jg: greater (signed >) */

loc_000D41ED: ;
    POP32(esp, esi);

loc_000D41EE: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + edx * 4 + 4) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D4200
 * Original: 0x000D4200 - 0x000D423A (58 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D4200: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0x4322F8;
    PUSH32(esp, 0x000D420Du); RECOMP_ABI_CALL(0x00188670u, sub_00188670); /* call 0x00188670 */

loc_000D420D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D421C; /* je: equal / zero */

loc_000D4211: ;
    POP32(esp, esi);
    ecx = 0x4322F8;
    g_seh_ebp = ebp; sub_001893B0(); return; /* tail jmp 0x001893B0 */

loc_000D421C: ;
    ecx = 0x4322F8;
    PUSH32(esp, 0x000D4226u); RECOMP_ABI_CALL(0x00189270u, sub_00189270); /* call 0x00189270 */

loc_000D4226: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000D4230u); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_000D4230: ;
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000D3E60(); return; /* tail jmp 0x000D3E60 */

}

/**
 * sub_000D4240
 * Original: 0x000D4240 - 0x000D424A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D4240: ;
    ecx = 0x4322F8;
    g_seh_ebp = ebp; sub_00188630(); return; /* tail jmp 0x00188630 */

}

/**
 * sub_000D4250
 * Original: 0x000D4250 - 0x000D426E (30 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4250: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D426B; /* jne: not equal / not zero */

loc_000D4257: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D426B; /* jne: not equal / not zero */

loc_000D425E: ;
    ecx = MEM32(ecx + 0x4C);
    PUSH32(esp, 0xE6FD2518u);
    PUSH32(esp, 0x000D426Bu); RECOMP_ABI_CALL(0x000D4090u, sub_000D4090); /* call 0x000D4090 */

loc_000D426B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D4270
 * Original: 0x000D4270 - 0x000D429C (44 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D4270: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x60); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC410); /* comiss */
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D4299; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC410)) */

loc_000D4289: ;
    ecx = MEM32(ecx + 0x4C);
    MEM32(esp + 4) = 0xE6FD2518u;
    g_seh_ebp = ebp; sub_000D4090(); return; /* tail jmp 0x000D4090 */

loc_000D4299: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D42A0
 * Original: 0x000D42A0 - 0x000D42CC (44 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D42A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D42A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3600CC53) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3600CC53 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D42BF; /* je: equal / zero */

loc_000D42AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF3D5AFE4u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF3D5AFE4u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D42C9; /* jne: not equal / not zero */

loc_000D42B2: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0x45C) = eax;
    esp += 12; return; /* ret 8 */

loc_000D42BF: ;
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x458) = edx;

loc_000D42C9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D42D0
 * Original: 0x000D42D0 - 0x000D42E8 (24 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D42D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D42D0: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF3D5AFE4u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0xF3D5AFE4u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D42DF; /* je: equal / zero */

loc_000D42DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000D42DF: ;
    eax = MEM32(ecx + 0x45C);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D42F0
 * Original: 0x000D42F0 - 0x000D4331 (65 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D42F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D42F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x60);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = 0;
    if ((_fa == 0)) goto loc_000D4315; /* je: equal / zero */

loc_000D42FF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D4315; /* je: equal / zero */

loc_000D4302: ;
    _fa = (uint32_t)(MEM8(esi + 0x68)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x68), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4326; /* je: equal / zero */

loc_000D4307: ;
    MEM32(esi + 0x60) = ebx;
    MEM8(esi + 0x68) = LO8(ebx);
    MEM8(esi + 0x69) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000D4315: ;
    ecx = 0x4322F8;
    PUSH32(esp, 0x000D431Fu); RECOMP_ABI_CALL(0x00188670u, sub_00188670); /* call 0x00188670 */

loc_000D431F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4326; /* jne: not equal / not zero */

loc_000D4323: ;
    MEM32(esi + 0x60) = ebx;

loc_000D4326: ;
    MEM8(esi + 0x68) = LO8(ebx);
    MEM8(esi + 0x69) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D4340
 * Original: 0x000D4340 - 0x000D43DA (154 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D4340: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8866B515u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8866B515u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D43C1; /* ja: above (unsigned >) */

loc_000D434B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000D43BB; /* je: equal / zero */

loc_000D434D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD9C689F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD9C689F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4361; /* je: equal / zero */

loc_000D4354: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x37718DA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x37718DA0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D43C8; /* jne: not equal / not zero */

loc_000D435B: ;
    eax = MEM32(ecx + 0x6C);
    esp += 8; return; /* ret 4 */

loc_000D4361: ;
    ecx = MEM32(ecx + 0x60);
    eax = ecx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D43C8; /* ja: above (unsigned >) */

loc_000D436C: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xD43DC); /* switch: 9 entries, 9 targets */
    if (_jt == 0x000D4373u) goto loc_000D4373;
    if (_jt == 0x000D437Bu) goto loc_000D437B;
    if (_jt == 0x000D4383u) goto loc_000D4383;
    if (_jt == 0x000D438Bu) goto loc_000D438B;
    if (_jt == 0x000D4393u) goto loc_000D4393;
    if (_jt == 0x000D439Bu) goto loc_000D439B;
    if (_jt == 0x000D43A3u) goto loc_000D43A3;
    if (_jt == 0x000D43ABu) goto loc_000D43AB;
    if (_jt == 0x000D43B3u) goto loc_000D43B3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D4373: ;
    eax = 0x6B4641A0;
    esp += 8; return; /* ret 4 */

loc_000D437B: ;
    eax = 0x48EA952;
    esp += 8; return; /* ret 4 */

loc_000D4383: ;
    eax = 0x3ABA0738;
    esp += 8; return; /* ret 4 */

loc_000D438B: ;
    eax = 0x23AD9D47;
    esp += 8; return; /* ret 4 */

loc_000D4393: ;
    eax = 0x6DAB6C6B;
    esp += 8; return; /* ret 4 */

loc_000D439B: ;
    eax = 0x3985DC0;
    esp += 8; return; /* ret 4 */

loc_000D43A3: ;
    eax = 0xA420B927u;
    esp += 8; return; /* ret 4 */

loc_000D43AB: ;
    eax = 0xE6A8A879u;
    esp += 8; return; /* ret 4 */

loc_000D43B3: ;
    eax = 0x2F1D5480;
    esp += 8; return; /* ret 4 */

loc_000D43BB: ;
    eax = MEM32(ecx + 0x64);
    esp += 8; return; /* ret 4 */

loc_000D43C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF572AB8Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF572AB8Du (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D43CD; /* je: equal / zero */

loc_000D43C8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000D43CD: ;
    edx = MEM32(ecx + 0x60);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D4400
 * Original: 0x000D4400 - 0x000D4423 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4400: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D510E33) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4D510E33 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D441D; /* je: equal / zero */

loc_000D440B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC9075904u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC9075904u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4417; /* je: equal / zero */

loc_000D4412: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000D4417: ;
    eax = MEM32(ecx + 4);
    esp += 8; return; /* ret 4 */

loc_000D441D: ;
    eax = MEM32(ecx + 0x10);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D4430
 * Original: 0x000D4430 - 0x000D4456 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4430: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D510E33) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4D510E33 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D444C; /* je: equal / zero */

loc_000D443B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC9075904u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC9075904u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4453; /* jne: not equal / not zero */

loc_000D4442: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    esp += 12; return; /* ret 8 */

loc_000D444C: ;
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x10) = edx;

loc_000D4453: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D4460
 * Original: 0x000D4460 - 0x000D44CA (106 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D4460: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82F140F8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x82F140F8u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D449A; /* ja: above (unsigned >) */

loc_000D446B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000D4494; /* je: equal / zero */

loc_000D446D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2BD81064) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2BD81064 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D448E; /* je: equal / zero */

loc_000D4474: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34A08257) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x34A08257 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4488; /* je: equal / zero */

loc_000D447B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49485260) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x49485260 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D44AF; /* jne: not equal / not zero */

loc_000D4482: ;
    eax = MEM32(ecx + 0x24);
    esp += 8; return; /* ret 4 */

loc_000D4488: ;
    eax = MEM32(ecx + 0x1C);
    esp += 8; return; /* ret 4 */

loc_000D448E: ;
    eax = MEM32(ecx + 0x20);
    esp += 8; return; /* ret 4 */

loc_000D4494: ;
    eax = MEM32(ecx + 0x14);
    esp += 8; return; /* ret 4 */

loc_000D449A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4C53724u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA4C53724u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D44C4; /* je: equal / zero */

loc_000D44A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAC2EC1C2u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAC2EC1C2u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D44BE; /* je: equal / zero */

loc_000D44A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB70BBE56u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB70BBE56u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D44B8; /* je: equal / zero */

loc_000D44AF: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000D4400(); return; /* tail jmp 0x000D4400 */

loc_000D44B8: ;
    eax = MEM32(ecx + 0x2C);
    esp += 8; return; /* ret 4 */

loc_000D44BE: ;
    eax = MEM32(ecx + 0x28);
    esp += 8; return; /* ret 4 */

loc_000D44C4: ;
    eax = MEM32(ecx + 0x18);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D44D0
 * Original: 0x000D44D0 - 0x000D4543 (115 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D44D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D44D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D44E1u); RECOMP_ABI_CALL(0x000D4430u, sub_000D4430); /* call 0x000D4430 */

loc_000D44E1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4C53724u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA4C53724u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D4523; /* ja: above (unsigned >) */

loc_000D44E9: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000D451B; /* je: equal / zero */

loc_000D44EB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2BD81064) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2BD81064 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4513; /* je: equal / zero */

loc_000D44F3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34A08257) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x34A08257 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D450B; /* je: equal / zero */

loc_000D44FB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49485260) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x49485260 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D453E; /* jne: not equal / not zero */

loc_000D4503: ;
    MEM32(ecx + 0x24) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D450B: ;
    MEM32(ecx + 0x1C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D4513: ;
    MEM32(ecx + 0x20) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D451B: ;
    MEM32(ecx + 0x18) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D4523: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAC2EC1C2u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xAC2EC1C2u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D453B; /* je: equal / zero */

loc_000D452B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB70BBE56u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB70BBE56u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D453E; /* jne: not equal / not zero */

loc_000D4533: ;
    MEM32(ecx + 0x2C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D453B: ;
    MEM32(ecx + 0x28) = edi;

loc_000D453E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D4550
 * Original: 0x000D4550 - 0x000D45AD (93 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D4550: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4C53724u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA4C53724u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D458A; /* ja: above (unsigned >) */

loc_000D455B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000D4584; /* je: equal / zero */

loc_000D455D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2BD81064) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2BD81064 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D457E; /* je: equal / zero */

loc_000D4564: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34A08257) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x34A08257 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4578; /* je: equal / zero */

loc_000D456B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49485260) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x49485260 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4598; /* jne: not equal / not zero */

loc_000D4572: ;
    eax = MEM32(ecx + 0x20);
    esp += 8; return; /* ret 4 */

loc_000D4578: ;
    eax = MEM32(ecx + 0x18);
    esp += 8; return; /* ret 4 */

loc_000D457E: ;
    eax = MEM32(ecx + 0x1C);
    esp += 8; return; /* ret 4 */

loc_000D4584: ;
    eax = MEM32(ecx + 0x14);
    esp += 8; return; /* ret 4 */

loc_000D458A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAC2EC1C2u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAC2EC1C2u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D45A7; /* je: equal / zero */

loc_000D4591: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB70BBE56u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB70BBE56u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D45A1; /* je: equal / zero */

loc_000D4598: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000D4400(); return; /* tail jmp 0x000D4400 */

loc_000D45A1: ;
    eax = MEM32(ecx + 0x28);
    esp += 8; return; /* ret 4 */

loc_000D45A7: ;
    eax = MEM32(ecx + 0x24);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D45B0
 * Original: 0x000D45B0 - 0x000D4623 (115 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D45B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D45B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D45C1u); RECOMP_ABI_CALL(0x000D4430u, sub_000D4430); /* call 0x000D4430 */

loc_000D45C1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4C53724u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA4C53724u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D4603; /* ja: above (unsigned >) */

loc_000D45C9: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000D45FB; /* je: equal / zero */

loc_000D45CB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2BD81064) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2BD81064 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D45F3; /* je: equal / zero */

loc_000D45D3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34A08257) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x34A08257 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D45EB; /* je: equal / zero */

loc_000D45DB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49485260) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x49485260 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D461E; /* jne: not equal / not zero */

loc_000D45E3: ;
    MEM32(ecx + 0x20) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D45EB: ;
    MEM32(ecx + 0x18) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D45F3: ;
    MEM32(ecx + 0x1C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D45FB: ;
    MEM32(ecx + 0x14) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D4603: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAC2EC1C2u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xAC2EC1C2u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D461B; /* je: equal / zero */

loc_000D460B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB70BBE56u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB70BBE56u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D461E; /* jne: not equal / not zero */

loc_000D4613: ;
    MEM32(ecx + 0x28) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D461B: ;
    MEM32(ecx + 0x24) = edi;

loc_000D461E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D4630
 * Original: 0x000D4630 - 0x000D4658 (40 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4630: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15AE5C07) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15AE5C07 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4649; /* je: equal / zero */

loc_000D463B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x902E27B4u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x902E27B4u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4655; /* jne: not equal / not zero */

loc_000D4642: ;
    MEM8(ecx + 0x65) = 1;
    esp += 12; return; /* ret 8 */

loc_000D4649: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ecx + 0x64) = LO8(eax);

loc_000D4655: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D4660
 * Original: 0x000D4660 - 0x000D4684 (36 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4660: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x37718DA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x37718DA0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D467E; /* je: equal / zero */

loc_000D466B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE51B5A1Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE51B5A1Cu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4677; /* je: equal / zero */

loc_000D4672: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000D4677: ;
    eax = ZX8(MEM8(ecx + 0x65));
    esp += 8; return; /* ret 4 */

loc_000D467E: ;
    eax = MEM32(ecx + 0x60);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D4690
 * Original: 0x000D4690 - 0x000D46B4 (36 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4690: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x37718DA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x37718DA0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D46AE; /* je: equal / zero */

loc_000D469B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE51B5A1Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE51B5A1Cu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D46A7; /* je: equal / zero */

loc_000D46A2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000D46A7: ;
    eax = ZX8(MEM8(ecx + 0x64));
    esp += 8; return; /* ret 4 */

loc_000D46AE: ;
    eax = MEM32(ecx + 0x60);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D46C0
 * Original: 0x000D46C0 - 0x000D46F2 (50 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D46C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D46C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x37718DA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x37718DA0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D46EC; /* je: equal / zero */

loc_000D46CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x902E27B4u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x902E27B4u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D46E5; /* je: equal / zero */

loc_000D46D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE51B5A1Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE51B5A1Cu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D46DE; /* je: equal / zero */

loc_000D46D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000D46DE: ;
    eax = ZX8(MEM8(ecx + 0x66));
    esp += 8; return; /* ret 4 */

loc_000D46E5: ;
    eax = ZX8(MEM8(ecx + 0x65));
    esp += 8; return; /* ret 4 */

loc_000D46EC: ;
    eax = MEM32(ecx + 0x60);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D4700
 * Original: 0x000D4700 - 0x000D471E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4700: ;
    PUSH32(esp, 0x000D4705u); RECOMP_ABI_CALL(0x000D4140u, sub_000D4140); /* call 0x000D4140 */

loc_000D4705: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D470Cu); RECOMP_ABI_CALL(0x001592B0u, sub_001592B0); /* call 0x001592B0 */

loc_000D470C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D4713u); RECOMP_ABI_CALL(0x001F3290u, sub_001F3290); /* call 0x001F3290 */

loc_000D4713: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D471Au); RECOMP_ABI_CALL(0x00159260u, sub_00159260); /* call 0x00159260 */

loc_000D471A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D4720
 * Original: 0x000D4720 - 0x000D4761 (65 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4720: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4A03547E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4A03547E (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D474F; /* ja: above (unsigned >) */

loc_000D472B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000D4748; /* je: equal / zero */

loc_000D472D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF18E106) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF18E106 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4742; /* je: equal / zero */

loc_000D4734: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x420799CD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x420799CD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4756; /* jne: not equal / not zero */

loc_000D473B: ;
    eax = ZX8(MEM8(ecx + 0x6C));
    esp += 8; return; /* ret 4 */

loc_000D4742: ;
    eax = MEM32(ecx + 0x68);
    esp += 8; return; /* ret 4 */

loc_000D4748: ;
    eax = ZX8(MEM8(ecx + 0x6D));
    esp += 8; return; /* ret 4 */

loc_000D474F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x783132F6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x783132F6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D475B; /* je: equal / zero */

loc_000D4756: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000D475B: ;
    eax = MEM32(ecx + 0x64);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D4770
 * Original: 0x000D4770 - 0x000D47C4 (84 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4770: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4A03547E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4A03547E (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D47B3; /* ja: above (unsigned >) */

loc_000D477B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000D47A4; /* je: equal / zero */

loc_000D477D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF18E106) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF18E106 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D479A; /* je: equal / zero */

loc_000D4784: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x420799CD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x420799CD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D47C1; /* jne: not equal / not zero */

loc_000D478B: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ecx + 0x6C) = LO8(eax);
    esp += 12; return; /* ret 8 */

loc_000D479A: ;
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x68) = edx;
    esp += 12; return; /* ret 8 */

loc_000D47A4: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ecx + 0x6D) = LO8(eax);
    esp += 12; return; /* ret 8 */

loc_000D47B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x783132F6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x783132F6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D47C1; /* jne: not equal / not zero */

loc_000D47BA: ;
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x64) = edx;

loc_000D47C1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D47D0
 * Original: 0x000D47D0 - 0x000D47DE (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D47D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D47D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x60) = eax;
    MEM32(ecx + 0x64) = eax;
    MEM32(ecx + 0x68) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D47E0
 * Original: 0x000D47E0 - 0x000D47F5 (21 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D47E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D47E0: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x37718DA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x37718DA0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D47EF; /* je: equal / zero */

loc_000D47EA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000D47EF: ;
    eax = MEM32(ecx + 0x60);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D4800
 * Original: 0x000D4800 - 0x000D4820 (32 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D4800: ;
    eax = MEM32(ecx + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(ecx + 0xB8) = 0;
    ecx = 0x4322F8;
    if (CMP_NE(_fa, _fb)) goto loc_000D481B; /* jne: not equal / not zero */

loc_000D4816: ;
    g_seh_ebp = ebp; sub_00189230(); return; /* tail jmp 0x00189230 */

loc_000D481B: ;
    g_seh_ebp = ebp; sub_00189250(); return; /* tail jmp 0x00189250 */

}

/**
 * sub_000D4820
 * Original: 0x000D4820 - 0x000D483E (30 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000D4820: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x88) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x732CF97D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD8AF9647u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xD8AF9647u)) >> 32) & 1);
    eax = eax + 0xD8AF9647u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x54) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D4840
 * Original: 0x000D4840 - 0x000D489F (95 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4840: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D484Du); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_000D484D: ;
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x28) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000D489A; /* je: equal / zero */

loc_000D485F: ;
    eax = edi;
    edx = eax + 1;

loc_000D4864: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4864; /* jne: not equal / not zero */

loc_000D486B: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x2E8FB0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D487Bu); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_000D487B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x28) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000D489A; /* je: equal / zero */

loc_000D4885: ;
    ecx = edi;
    edx = eax;
    /* nop */

loc_000D4890: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4890; /* jne: not equal / not zero */

loc_000D489A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D48A0
 * Original: 0x000D48A0 - 0x000D48C1 (33 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D48A0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000D48A0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x30); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D48BB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000D48B4: ;
    eax = MEM32(ecx + 0x28);
    MEM32(ecx + 0x34) = eax;
    esp += 4; return; /* ret */

loc_000D48BB: ;
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000D48D0
 * Original: 0x000D48D0 - 0x000D48ED (29 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D48D0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000D48D0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x34); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x2C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D48E7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x2C)) */

loc_000D48E0: ;
    eax = MEM32(ecx + 0x2C);
    MEM32(ecx + 0x34) = eax;
    esp += 4; return; /* ret */

loc_000D48E7: ;
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000D48F0
 * Original: 0x000D48F0 - 0x000D4906 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D48F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D48F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D48FBu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_000D48FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D4910
 * Original: 0x000D4910 - 0x000D4965 (85 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4910: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D491Cu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_000D491C: ;
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000D4960; /* je: equal / zero */

loc_000D492D: ;
    eax = edi;
    edx = eax + 1;

loc_000D4932: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4932; /* jne: not equal / not zero */

loc_000D4939: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x2E8FD0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D4949u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_000D4949: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000D4960; /* je: equal / zero */

loc_000D4952: ;
    ecx = edi;
    edx = eax;

loc_000D4956: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D4956; /* jne: not equal / not zero */

loc_000D4960: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D4970
 * Original: 0x000D4970 - 0x000D49A4 (52 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4970: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D49A1; /* jne: not equal / not zero */

loc_000D4977: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D49A1; /* jne: not equal / not zero */

loc_000D497E: ;
    SET_LO8(edx, MEM8(0x440801));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = 2;
    if (CMP_NE(_fa, _fb)) goto loc_000D4992; /* jne: not equal / not zero */

loc_000D498D: ;
    eax = 1;

loc_000D4992: ;
    ecx = MEM32(ecx + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D499Bu); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_000D499B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D49A1u); RECOMP_ABI_CALL(0x000D3E60u, sub_000D3E60); /* call 0x000D3E60 */

loc_000D49A1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D49B0
 * Original: 0x000D49B0 - 0x000D49D2 (34 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D49B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D49B0: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x4C) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x44) = eax;
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x54) = edx;
    MEM32(ecx + 0x58) = eax;
    MEM8(ecx + 0x5C) = LO8(eax);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D49E0
 * Original: 0x000D49E0 - 0x000D49E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D49E0(void)
{

loc_000D49E0: ;
    eax = 0xE31E29B5u;
    esp += 4; return; /* ret */

}

/**
 * sub_000D49F0
 * Original: 0x000D49F0 - 0x000D49F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D49F0(void)
{

loc_000D49F0: ;
    MEM32(ecx) = 0x2E9038;
    esp += 4; return; /* ret */

}

/**
 * sub_000D4A00
 * Original: 0x000D4A00 - 0x000D4A04 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4A00(void)
{

loc_000D4A00: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_000D4A10
 * Original: 0x000D4A10 - 0x000D4A14 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4A10(void)
{

loc_000D4A10: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_000D4A20
 * Original: 0x000D4A20 - 0x000D4A24 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4A20(void)
{

loc_000D4A20: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_000D4A30
 * Original: 0x000D4A30 - 0x000D4A3A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4A30(void)
{

loc_000D4A30: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D4A40
 * Original: 0x000D4A40 - 0x000D4A44 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4A40(void)
{

loc_000D4A40: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_000D4A50
 * Original: 0x000D4A50 - 0x000D4A5A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4A50(void)
{

loc_000D4A50: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x24) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D4A60
 * Original: 0x000D4A60 - 0x000D4A64 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4A60(void)
{

loc_000D4A60: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_000D4A70
 * Original: 0x000D4A70 - 0x000D4A7A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4A70(void)
{

loc_000D4A70: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D4A80
 * Original: 0x000D4A80 - 0x000D4A87 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4A80: ;
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) | 2;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D4A90
 * Original: 0x000D4A90 - 0x000D4A98 (8 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4A90: ;
    eax = MEM32(ecx + 0x18);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D4AA0
 * Original: 0x000D4AA0 - 0x000D4ABF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4AA0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E8FF0;
    if (TEST_Z(_fa, _fb)) goto loc_000D4AB9; /* je: equal / zero */

loc_000D4AB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D4AB6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000D4AB6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4AB9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D4AC0
 * Original: 0x000D4AC0 - 0x000D4ADF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D4AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4AC0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2E9038;
    if (TEST_Z(_fa, _fb)) goto loc_000D4AD9; /* je: equal / zero */

loc_000D4AD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D4AD6u); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000D4AD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D4AD9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D4AE0
 * Original: 0x000D4AE0 - 0x000D51B7 (1751 bytes, 426 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D4AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D4AE0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ecx = esi + 0x10;
    MEM32(esi + 0x3EC4) = edi;
    MEM32(esi) = ebp;
    MEM8(esi + 5) = 0;
    MEM8(esi + 6) = 0;
    PUSH32(esp, 0x000D4B04u); RECOMP_ABI_CALL(0x000DD210u, sub_000DD210); /* call 0x000DD210 */

loc_000D4B04: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x3EB8) = ebp;
    MEMF(esi + 0x3EC8) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x3EBC) = 0;
    MEM8(esi + 0x3ECC) = 0;
    MEM32(esi + 0x3EC0) = 0xC4F8E3DFu;
    MEM32(0x351F48) = MEM32(0x351F48) + 1;
    _fa = (uint32_t)(MEM32(0x351F48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = 0x4322F8;
    MEM32(esi + 8) = ebp;
    MEM32(esi + 0xC) = ebp;
    PUSH32(esp, 0x000D4B44u); RECOMP_ABI_CALL(0x00188610u, sub_00188610); /* call 0x00188610 */

loc_000D4B44: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D512E; /* ja: above (unsigned >) */

loc_000D4B4D: ;
    PUSH32(esp, ebx);
    { uint32_t _jt = MEM32(edi * 4 + 0xD51B8); /* switch: 12 entries, 12 targets */
    if (_jt == 0x000D4B55u) goto loc_000D4B55;
    if (_jt == 0x000D4D06u) goto loc_000D4D06;
    if (_jt == 0x000D4EA3u) goto loc_000D4EA3;
    if (_jt == 0x000D4EBEu) goto loc_000D4EBE;
    if (_jt == 0x000D4EFFu) goto loc_000D4EFF;
    if (_jt == 0x000D4F35u) goto loc_000D4F35;
    if (_jt == 0x000D4F50u) goto loc_000D4F50;
    if (_jt == 0x000D4F67u) goto loc_000D4F67;
    if (_jt == 0x000D4F8Eu) goto loc_000D4F8E;
    if (_jt == 0x000D4FBCu) goto loc_000D4FBC;
    if (_jt == 0x000D500Du) goto loc_000D500D;
    if (_jt == 0x000D50FEu) goto loc_000D50FE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D4B55: ;
    eax = MEM32(esi + 0x1B38);
    ecx = esi + 0x1B38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000D4B66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4B63u); } /* indirect call */
    }

loc_000D4B66: ;
    edx = MEM32(esi + 0x2278);
    edi = esi + 0x2278;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(esi + 4) = 1;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4B7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4B79u); } /* indirect call */
    }

loc_000D4B7C: ;
    eax = MEM32(esi + 0x3078);
    ebx = esi + 0x3078;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4B8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4B8Bu); } /* indirect call */
    }

loc_000D4B8E: ;
    edx = MEM32(esi + 0x22DC);
    ecx = esi + 0x22DC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4B9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4B9Bu); } /* indirect call */
    }

loc_000D4B9E: ;
    eax = MEM32(esi + 0x233C);
    ecx = esi + 0x233C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4BAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4BABu); } /* indirect call */
    }

loc_000D4BAE: ;
    edx = MEM32(esi + 0x23A0);
    ecx = esi + 0x23A0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D4BBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4BBCu); } /* indirect call */
    }

loc_000D4BBF: ;
    eax = MEM32(esi + 0x2404);
    ebp = esi + 0x2404;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4BD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4BCEu); } /* indirect call */
    }

loc_000D4BD1: ;
    edx = MEM32(esi + 0x2FA4);
    ecx = esi + 0x2FA4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4BE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4BDEu); } /* indirect call */
    }

loc_000D4BE1: ;
    eax = MEM32(esi + 0x3018);
    ecx = esi + 0x3018;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4BF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4BEEu); } /* indirect call */
    }

loc_000D4BF1: ;
    edx = MEM32(esi + 0x2468);
    ecx = esi + 0x2468;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4C01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4BFEu); } /* indirect call */
    }

loc_000D4C01: ;
    eax = MEM32(esi + 0x24D0);
    ecx = esi + 0x24D0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4C11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4C0Eu); } /* indirect call */
    }

loc_000D4C11: ;
    edx = MEM32(esi + 0x2560);
    ecx = esi + 0x2560;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4C21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4C1Eu); } /* indirect call */
    }

loc_000D4C21: ;
    eax = MEM32(esi + 0x25C8);
    ecx = esi + 0x25C8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4C31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4C2Eu); } /* indirect call */
    }

loc_000D4C31: ;
    edx = MEM32(esi + 0x2628);
    ecx = esi + 0x2628;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4C41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4C3Eu); } /* indirect call */
    }

loc_000D4C41: ;
    eax = MEM32(esi + 0x2A8C);
    ecx = esi + 0x2A8C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4C51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4C4Eu); } /* indirect call */
    }

loc_000D4C51: ;
    edx = MEM32(esi + 0x2AFC);
    ecx = esi + 0x2AFC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4C61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4C5Eu); } /* indirect call */
    }

loc_000D4C61: ;
    eax = MEM32(esi + 0x2B78);
    ecx = esi + 0x2B78;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4C71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4C6Eu); } /* indirect call */
    }

loc_000D4C71: ;
    edx = MEM32(esi + 0x2C10);
    ecx = esi + 0x2C10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4C81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4C7Eu); } /* indirect call */
    }

loc_000D4C81: ;
    eax = MEM32(esi + 0x2D88);
    ecx = esi + 0x2D88;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4C91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4C8Eu); } /* indirect call */
    }

loc_000D4C91: ;
    edx = MEM32(esi + 0x2F44);
    ecx = esi + 0x2F44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4CA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4C9Eu); } /* indirect call */
    }

loc_000D4CA1: ;
    eax = MEM32(esi + 0x39D8);
    ecx = esi + 0x39D8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4CB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4CAEu); } /* indirect call */
    }

loc_000D4CB1: ;
    edx = MEM32(esi + 0x3A40);
    ecx = esi + 0x3A40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4CC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4CBEu); } /* indirect call */
    }

loc_000D4CC1: ;
    eax = MEM32(esi + 0x3E14);
    ecx = esi + 0x3E14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4CD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4CCEu); } /* indirect call */
    }

loc_000D4CD1: ;
    MEM32(esi + 0x30EC) = 0x24;
    SET_LO8(eax, MEM8(0x413FCB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4CF2; /* je: equal / zero */

loc_000D4CE4: ;
    edi = ebp;
    MEM8(0x413FCB) = 0;
    goto loc_000D5125;

loc_000D4CF2: ;
    SET_LO8(eax, MEM8(0x413FCA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5125; /* je: equal / zero */

loc_000D4CFF: ;
    edi = ebx;
    goto loc_000D5125;

loc_000D4D06: ;
    edx = MEM32(esi + 0x2278);
    ecx = esi + 0x2278;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4D16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4D13u); } /* indirect call */
    }

loc_000D4D16: ;
    eax = MEM32(esi + 0x3078);
    ebp = esi + 0x3078;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4D28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4D25u); } /* indirect call */
    }

loc_000D4D28: ;
    edx = MEM32(esi + 0x22DC);
    ecx = esi + 0x22DC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4D38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4D35u); } /* indirect call */
    }

loc_000D4D38: ;
    eax = MEM32(esi + 0x233C);
    ecx = esi + 0x233C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4D48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4D45u); } /* indirect call */
    }

loc_000D4D48: ;
    edx = MEM32(esi + 0x23A0);
    ecx = esi + 0x23A0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D4D5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4D57u); } /* indirect call */
    }

loc_000D4D5A: ;
    eax = MEM32(esi + 0x2404);
    ebx = esi + 0x2404;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4D6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4D69u); } /* indirect call */
    }

loc_000D4D6C: ;
    edx = MEM32(esi + 0x2FA4);
    ecx = esi + 0x2FA4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4D7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4D79u); } /* indirect call */
    }

loc_000D4D7C: ;
    eax = MEM32(esi + 0x3018);
    ecx = esi + 0x3018;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4D8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4D89u); } /* indirect call */
    }

loc_000D4D8C: ;
    edx = MEM32(esi + 0x2468);
    ecx = esi + 0x2468;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4D9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4D99u); } /* indirect call */
    }

loc_000D4D9C: ;
    eax = MEM32(esi + 0x24D0);
    ecx = esi + 0x24D0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4DACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4DA9u); } /* indirect call */
    }

loc_000D4DAC: ;
    edx = MEM32(esi + 0x2560);
    ecx = esi + 0x2560;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4DBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4DB9u); } /* indirect call */
    }

loc_000D4DBC: ;
    eax = MEM32(esi + 0x25C8);
    ecx = esi + 0x25C8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4DCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4DC9u); } /* indirect call */
    }

loc_000D4DCC: ;
    edx = MEM32(esi + 0x2628);
    ecx = esi + 0x2628;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4DDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4DD9u); } /* indirect call */
    }

loc_000D4DDC: ;
    eax = MEM32(esi + 0x2A8C);
    ecx = esi + 0x2A8C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4DECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4DE9u); } /* indirect call */
    }

loc_000D4DEC: ;
    edx = MEM32(esi + 0x2AFC);
    ecx = esi + 0x2AFC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4DFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4DF9u); } /* indirect call */
    }

loc_000D4DFC: ;
    eax = MEM32(esi + 0x2B78);
    ecx = esi + 0x2B78;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4E0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4E09u); } /* indirect call */
    }

loc_000D4E0C: ;
    edx = MEM32(esi + 0x2C10);
    ecx = esi + 0x2C10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4E1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4E19u); } /* indirect call */
    }

loc_000D4E1C: ;
    eax = MEM32(esi + 0x2D88);
    ecx = esi + 0x2D88;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4E2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4E29u); } /* indirect call */
    }

loc_000D4E2C: ;
    edx = MEM32(esi + 0x2F44);
    ecx = esi + 0x2F44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4E3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4E39u); } /* indirect call */
    }

loc_000D4E3C: ;
    eax = MEM32(esi + 0x39D8);
    ecx = esi + 0x39D8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4E4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4E49u); } /* indirect call */
    }

loc_000D4E4C: ;
    edx = MEM32(esi + 0x3A40);
    ecx = esi + 0x3A40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4E5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4E59u); } /* indirect call */
    }

loc_000D4E5C: ;
    eax = MEM32(esi + 0x3E14);
    edi = esi + 0x3E14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4E6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4E6Bu); } /* indirect call */
    }

loc_000D4E6E: ;
    MEM32(esi + 0x30EC) = 0x24;
    SET_LO8(eax, MEM8(0x413FCB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D4E8F; /* je: equal / zero */

loc_000D4E81: ;
    edi = ebx;
    MEM8(0x413FCB) = 0;
    goto loc_000D5125;

loc_000D4E8F: ;
    SET_LO8(eax, MEM8(0x413FCA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5125; /* je: equal / zero */

loc_000D4E9C: ;
    edi = ebp;
    goto loc_000D5125;

loc_000D4EA3: ;
    edx = MEM32(esi + 0x39D8);
    ecx = esi + 0x39D8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4EB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4EB0u); } /* indirect call */
    }

loc_000D4EB3: ;
    edi = esi + 0x3834;
    goto loc_000D511D;

loc_000D4EBE: ;
    edx = MEM32(esi + 0x39D8);
    ecx = esi + 0x39D8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4ECEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4ECBu); } /* indirect call */
    }

loc_000D4ECE: ;
    eax = MEM32(esi + 0x389C);
    edi = esi + 0x389C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4EE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4EDDu); } /* indirect call */
    }

loc_000D4EE0: ;
    edx = MEM32(esi + 0x3DA4);
    ecx = esi + 0x3DA4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4EF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4EEDu); } /* indirect call */
    }

loc_000D4EF0: ;
    MEM32(esi + 0x3E04) = 2;
    goto loc_000D5125;

loc_000D4EFF: ;
    eax = MEM32(esi + 0x39D8);
    ecx = esi + 0x39D8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4F0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4F0Cu); } /* indirect call */
    }

loc_000D4F0F: ;
    edx = MEM32(esi + 0x3904);
    edi = esi + 0x3904;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4F21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4F1Eu); } /* indirect call */
    }

loc_000D4F21: ;
    ecx = esi + 0x2C10;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000D4F2Eu); RECOMP_ABI_CALL(0x000D4820u, sub_000D4820); /* call 0x000D4820 */

loc_000D4F2E: ;
    eax = MEM32(ecx);
    goto loc_000D5121;

loc_000D4F35: ;
    edx = MEM32(esi + 0x39D8);
    ecx = esi + 0x39D8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4F45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4F42u); } /* indirect call */
    }

loc_000D4F45: ;
    edi = esi + 0x3970;
    goto loc_000D511D;

loc_000D4F50: ;
    edx = MEM32(esi + 0x39D8);
    edi = esi + 0x39D8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4F62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4F5Fu); } /* indirect call */
    }

loc_000D4F62: ;
    goto loc_000D5125;

loc_000D4F67: ;
    eax = MEM32(esi + 0x39D8);
    ecx = esi + 0x39D8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4F77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4F74u); } /* indirect call */
    }

loc_000D4F77: ;
    edx = MEM32(esi + 0x3A40);
    edi = esi + 0x3A40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4F89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4F86u); } /* indirect call */
    }

loc_000D4F89: ;
    goto loc_000D5125;

loc_000D4F8E: ;
    eax = MEM32(esi + 0x39D8);
    ecx = esi + 0x39D8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4F9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4F9Bu); } /* indirect call */
    }

loc_000D4F9E: ;
    edx = MEM32(esi + 0x3AA8);
    edi = esi + 0x3AA8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4FB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4FADu); } /* indirect call */
    }

loc_000D4FB0: ;
    MEM8(esi + 0x3B0F) = 0;
    goto loc_000D5125;

loc_000D4FBC: ;
    eax = MEM32(esi + 0x39D8);
    ecx = esi + 0x39D8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4FCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4FC9u); } /* indirect call */
    }

loc_000D4FCC: ;
    edx = MEM32(esi + 0x3904);
    ecx = esi + 0x3904;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D4FDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4FD9u); } /* indirect call */
    }

loc_000D4FDC: ;
    eax = MEM32(esi + 0x3AA8);
    edi = esi + 0x3AA8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D4FEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D4FEBu); } /* indirect call */
    }

loc_000D4FEE: ;
    ecx = esi + 0x2C10;
    PUSH32(esp, 1);
    MEM8(esi + 0x3B0F) = 1;
    PUSH32(esp, 0x000D5002u); RECOMP_ABI_CALL(0x000D4820u, sub_000D4820); /* call 0x000D4820 */

loc_000D5002: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D5008u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5005u); } /* indirect call */
    }

loc_000D5008: ;
    goto loc_000D5125;

loc_000D500D: ;
    eax = MEM32(esi + 0x39D8);
    ecx = esi + 0x39D8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D501Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D501Au); } /* indirect call */
    }

loc_000D501D: ;
    edx = MEM32(esi + 0x2A8C);
    ecx = esi + 0x2A8C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D502Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D502Au); } /* indirect call */
    }

loc_000D502D: ;
    eax = MEM32(esi + 0x2AFC);
    ecx = esi + 0x2AFC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D503Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D503Au); } /* indirect call */
    }

loc_000D503D: ;
    edx = MEM32(esi + 0x2B78);
    ecx = esi + 0x2B78;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D504Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D504Au); } /* indirect call */
    }

loc_000D504D: ;
    ecx = esi + 0x2C10;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000D505Au); RECOMP_ABI_CALL(0x000D4820u, sub_000D4820); /* call 0x000D4820 */

loc_000D505A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D5060u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D505Du); } /* indirect call */
    }

loc_000D5060: ;
    ecx = esi + 0x2CCC;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D506Cu); RECOMP_ABI_CALL(0x000D4820u, sub_000D4820); /* call 0x000D4820 */

loc_000D506C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D5072u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D506Fu); } /* indirect call */
    }

loc_000D5072: ;
    eax = MEM32(esi + 0x2D88);
    ecx = esi + 0x2D88;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D5082u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D507Fu); } /* indirect call */
    }

loc_000D5082: ;
    edx = MEM32(esi + 0x3BE4);
    ecx = esi + 0x3BE4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D5092u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D508Fu); } /* indirect call */
    }

loc_000D5092: ;
    eax = MEM32(esi + 0x3C54);
    ecx = esi + 0x3C54;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esi + 0x3C44) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D50A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D50A5u); } /* indirect call */
    }

loc_000D50A8: ;
    edx = MEM32(esi + 0x3CC4);
    ecx = esi + 0x3CC4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esi + 0x3CB4) = 1;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D50C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D50BFu); } /* indirect call */
    }

loc_000D50C2: ;
    eax = MEM32(esi + 0x3D34);
    ecx = esi + 0x3D34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esi + 0x3D24) = 2;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D50DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D50D9u); } /* indirect call */
    }

loc_000D50DC: ;
    edx = MEM32(esi + 0x3B74);
    ecx = esi + 0x3B74;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esi + 0x3D94) = 3;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D50F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D50F3u); } /* indirect call */
    }

loc_000D50F6: ;
    edi = esi + 0x3B14;
    goto loc_000D511D;

loc_000D50FE: ;
    edx = MEM32(esi + 0x39D8);
    ecx = esi + 0x39D8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000D510Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D510Bu); } /* indirect call */
    }

loc_000D510E: ;
    edi = esi + 0x2C10;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x000D511Du); RECOMP_ABI_CALL(0x000D4820u, sub_000D4820); /* call 0x000D4820 */

loc_000D511D: ;
    eax = MEM32(edi);
    ecx = edi;

loc_000D5121: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000D5125u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5122u); } /* indirect call */
    }

loc_000D5125: ;
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D512Du); RECOMP_ABI_CALL(0x000D3E60u, sub_000D3E60); /* call 0x000D3E60 */

loc_000D512D: ;
    POP32(esp, ebx);

loc_000D512E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, edi);
    MEMF(esi + 0x3E78) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3E98) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3E7C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3E9C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3E80) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3EA0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3E84) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3EA4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3E88) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3EA8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3E8C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3EAC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3E90) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3EB0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3E94) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3EB4) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D51F0
 * Original: 0x000D51F0 - 0x000D54B0 (704 bytes, 195 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D51F0(void)
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

loc_000D51F0: ;
    SET_LO8(eax, MEM8(0x413FBC));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(0x413F90);
    if (CMP_EQ(_fa, _fb)) goto loc_000D5223; /* je: equal / zero */

loc_000D5205: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x118); PUSH32(esp, 0x000D520Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5207u); } /* indirect call */
    }

loc_000D520D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D54A9; /* je: equal / zero */

loc_000D5215: ;
    MEM8(0x413FBC) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000D5223: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x000D5228u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5225u); } /* indirect call */
    }

loc_000D5228: ;
    ecx = MEM32(0x413F90);
    edx = MEM32(ecx);
    eax = ZX8(LO8(eax));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x000D5240u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D523Du); } /* indirect call */
    }

loc_000D5240: ;
    ecx = MEM32(0x413F90);
    edx = MEM32(ecx);
    eax = ZX8(LO8(eax));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000D5258u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5255u); } /* indirect call */
    }

loc_000D5258: ;
    ecx = MEM32(0x413F90);
    edx = MEM32(ecx);
    eax = ZX8(LO8(eax));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000D5270u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D526Du); } /* indirect call */
    }

loc_000D5270: ;
    ecx = MEM32(0x413F90);
    edx = MEM32(ecx);
    eax = ZX8(LO8(eax));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000D5288u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5285u); } /* indirect call */
    }

loc_000D5288: ;
    ecx = MEM32(0x413F90);
    edx = MEM32(ecx);
    eax = ZX8(LO8(eax));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000D52A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D529Du); } /* indirect call */
    }

loc_000D52A0: ;
    ecx = MEM32(0x413F90);
    edx = MEM32(ecx);
    eax = ZX8(LO8(eax));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x000D52B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D52B5u); } /* indirect call */
    }

loc_000D52B8: ;
    ecx = MEM32(0x413F90);
    edx = MEM32(ecx);
    eax = ZX8(LO8(eax));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x110); PUSH32(esp, 0x000D52D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D52CDu); } /* indirect call */
    }

loc_000D52D3: ;
    ecx = MEM32(0x413F90);
    edx = MEM32(ecx);
    eax = ZX8(LO8(eax));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x000D52EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D52E8u); } /* indirect call */
    }

loc_000D52EE: ;
    fp_push(MEMF(0x2DD440)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000D5321; /* jbe: below or equal (unsigned <=) */

loc_000D52FA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D5321; /* jp: parity */

loc_000D530D: ;
    ecx = MEM32(0x413F90);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x000D531Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5315u); } /* indirect call */
    }

loc_000D531B: ;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_000D5321: ;
    ecx = MEM32(0x413F90);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x000D532Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5329u); } /* indirect call */
    }

loc_000D532F: ;
    fp_push(MEMF(0x2DD440)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000D5362; /* jbe: below or equal (unsigned <=) */

loc_000D533D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D5362; /* jp: parity */

loc_000D5350: ;
    ecx = MEM32(0x413F90);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x000D535Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5358u); } /* indirect call */
    }

loc_000D535E: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_000D5362: ;
    ecx = MEM32(0x413F90);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x000D5370u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D536Au); } /* indirect call */
    }

loc_000D5370: ;
    fp_push(MEMF(0x2DD440)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000D53A3; /* jbe: below or equal (unsigned <=) */

loc_000D537C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D53A3; /* jp: parity */

loc_000D538F: ;
    ecx = MEM32(0x413F90);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x000D539Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5397u); } /* indirect call */
    }

loc_000D539D: ;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_000D53A3: ;
    ecx = MEM32(0x413F90);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x000D53B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D53ABu); } /* indirect call */
    }

loc_000D53B1: ;
    fp_push(MEMF(0x2DD440)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000D53E4; /* jbe: below or equal (unsigned <=) */

loc_000D53BF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D53E4; /* jp: parity */

loc_000D53D2: ;
    ecx = MEM32(0x413F90);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x000D53E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D53DAu); } /* indirect call */
    }

loc_000D53E0: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_000D53E4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + 0x3E78;
    edi = edi;

loc_000D53F0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + esi * 4 + 0xC)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D5475; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000D53FE: ;
    ecx = MEM32(ebx + 0x3EB8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000D540Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5409u); } /* indirect call */
    }

loc_000D540C: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D542B; /* jp: parity */

loc_000D541D: ;
    ecx = MEM32(ebx + 0x3EB8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000D542Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5428u); } /* indirect call */
    }

loc_000D542B: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x30); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D5494; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000D5443: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    xmm0 = XMM_SCALAR(MEMF(0x2DC340)); /* movss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000D5460; /* jnp: not parity */

loc_000D5458: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DDA40)); /* movss */

loc_000D5460: ;
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx + 0x3EB8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000D5473u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5470u); } /* indirect call */
    }

loc_000D5473: ;
    goto loc_000D5494;

loc_000D5475: ;
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D548C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000D547E: ;
    ecx = MEM32(ebx + 0x3EB8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000D548Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5489u); } /* indirect call */
    }

loc_000D548C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */

loc_000D5494: ;
    ecx = MEM32(esp + esi * 4 + 0xC);
    MEM32(edi) = ecx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000D53F0; /* jl: less (signed <) */

loc_000D54A7: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000D54A9: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
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
 * sub_000D54B0
 * Original: 0x000D54B0 - 0x000D54FE (78 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D54B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D54B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x50);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D54E9; /* je: equal / zero */

loc_000D54BB: ;
    PUSH32(esp, 0x7778750A);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D54C7u); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_000D54C7: ;
    ecx = MEM32(esi + 0x4C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x626EE9B2);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x58) = eax;
    PUSH32(esp, 0x000D54DDu); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D54DD: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D54E6u); RECOMP_ABI_CALL(0x000D3E60u, sub_000D3E60); /* call 0x000D3E60 */

loc_000D54E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D54E9: ;
    PUSH32(esp, 0xFB3B6989u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D54F5u); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_000D54F5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x58) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5500
 * Original: 0x000D5500 - 0x000D5566 (102 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5500: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D5564; /* jne: not equal / not zero */

loc_000D550A: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5564; /* je: equal / zero */

loc_000D5511: ;
    PUSH32(esp, 0x2E909C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D551Fu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D551F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5556; /* je: equal / zero */

loc_000D5526: ;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x7954FE35;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 0x10) = 0x82A09C0Fu;
    PUSH32(esp, 0x000D5550u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D5550: ;
    MEM8(esi + 0x5C) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D5556: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D5560u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D5560: ;
    MEM8(esi + 0x5C) = 1;

loc_000D5564: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5570
 * Original: 0x000D5570 - 0x000D55DB (107 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D5570: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x44);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D55D4; /* jle: less or equal (signed <=) */

loc_000D557C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx + 4;
    PUSH32(esp, ebp);

loc_000D5586: ;
    ebp = MEM32(esi);
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D55A6; /* je: equal / zero */

loc_000D558D: ;
    ebp = MEM32(ecx + 0x44);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D5586; /* jl: less (signed <) */

loc_000D5598: ;
    edx = MEM32(ecx + 0x44);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x44) = edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000D55A6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D55D1; /* jl: less (signed <) */

loc_000D55AA: ;
    eax = MEM32(ecx + edx * 4 + 4);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    edi = ecx + edx * 4 + 4;
    esi = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_000D55D1; /* jge: greater or equal (signed >=) */

loc_000D55B9: ;
    edx = edi;
    goto loc_000D55C0;

    /* nop */

loc_000D55C0: ;
    edi = MEM32(edx + 4);
    MEM32(edx) = edi;
    edi = MEM32(ecx + 0x44);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D55C0; /* jl: less (signed <) */

loc_000D55D1: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);

loc_000D55D4: ;
    MEM32(ecx + 0x44) = MEM32(ecx + 0x44) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D55E0
 * Original: 0x000D55E0 - 0x000D5628 (72 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D55E0(void)
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

loc_000D55E0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x60); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC34C); /* comiss */
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D5625; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC34C)) */

loc_000D55F9: ;
    ecx = MEM32(ecx + 0x4C);
    _fa = (uint32_t)(MEM32(ecx + 0x3EC4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x3EC4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D5615; /* jne: not equal / not zero */

loc_000D5605: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x000D560Cu); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_000D560C: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000D3E60(); return; /* tail jmp 0x000D3E60 */

loc_000D5615: ;
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x000D561Cu); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_000D561C: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000D3E60(); return; /* tail jmp 0x000D3E60 */

loc_000D5625: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D5630
 * Original: 0x000D5630 - 0x000D564A (26 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D5630: ;
    ecx = MEM32(ecx + 0x4C);
    PUSH32(esp, 0x60CC3602);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D5640u); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D5640: ;
    ecx = 0x4322F8;
    g_seh_ebp = ebp; sub_00189210(); return; /* tail jmp 0x00189210 */

}

/**
 * sub_000D5650
 * Original: 0x000D5650 - 0x000D566F (31 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5650: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0x4322F8;
    PUSH32(esp, 0x000D565Du); RECOMP_ABI_CALL(0x00188B20u, sub_00188B20); /* call 0x00188B20 */

loc_000D565D: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x9351BC74u);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D566Du); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D566D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5670
 * Original: 0x000D5670 - 0x000D56D3 (99 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5670: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0x3C0480;
    PUSH32(esp, 0x000D567Du); RECOMP_ABI_CALL(0x00189200u, sub_00189200); /* call 0x00189200 */

loc_000D567D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D5683u); RECOMP_ABI_CALL(0x00178970u, sub_00178970); /* call 0x00178970 */

loc_000D5683: ;
    eax = MEM32(esi + 0x60);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000D56BE; /* jne: not equal / not zero */

loc_000D568E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xAEF39CCFu);
    MEM32(0x42BE30) = 0x8D8DD364u;
    MEM32(0x42BE60) = 0x4249D707;
    MEM32(0x42BE64) = 0xC2CBD863u;
    PUSH32(esp, 0x000D56B8u); RECOMP_ABI_CALL(0x0017A0A0u, sub_0017A0A0); /* call 0x0017A0A0 */

loc_000D56B8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000D56BE: ;
    PUSH32(esp, 0xC2CBD863u);
    PUSH32(esp, 0x4249D707);
    PUSH32(esp, 0x000D56CDu); RECOMP_ABI_CALL(0x0017A0A0u, sub_0017A0A0); /* call 0x0017A0A0 */

loc_000D56CD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D56E0
 * Original: 0x000D56E0 - 0x000D574C (108 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D56E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D56E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x60);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000D5707; /* je: equal / zero */

loc_000D56E9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D56FB; /* je: equal / zero */

loc_000D56EC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000D574A; /* jne: not equal / not zero */

loc_000D56EF: ;
    ecx = 0x4322F8;
    PUSH32(esp, 0x000D56F9u); RECOMP_ABI_CALL(0x0018BD10u, sub_0018BD10); /* call 0x0018BD10 */

loc_000D56F9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000D56FB: ;
    ecx = 0x4322F8;
    PUSH32(esp, 0x000D5705u); RECOMP_ABI_CALL(0x0018BCB0u, sub_0018BCB0); /* call 0x0018BCB0 */

loc_000D5705: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000D5707: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1833A8BC);
    ecx = 0x414150;
    PUSH32(esp, 0x000D571Au); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_000D571A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D572D; /* jne: not equal / not zero */

loc_000D571E: ;
    PUSH32(esp, 0xC0498FD3u);
    ecx = 0x3C0480;
    PUSH32(esp, 0x000D572Du); RECOMP_ABI_CALL(0x000443D0u, sub_000443D0); /* call 0x000443D0 */

loc_000D572D: ;
    ecx = 0x3C0480;
    PUSH32(esp, 0x000D5737u); RECOMP_ABI_CALL(0x00189200u, sub_00189200); /* call 0x00189200 */

loc_000D5737: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D573Du); RECOMP_ABI_CALL(0x00178970u, sub_00178970); /* call 0x00178970 */

loc_000D573D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x4322F8;
    PUSH32(esp, 0x000D574Au); RECOMP_ABI_CALL(0x0018BED0u, sub_0018BED0); /* call 0x0018BED0 */

loc_000D574A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5750
 * Original: 0x000D5750 - 0x000D587A (298 bytes, 91 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5750: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x2E911C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = 0xB5196F2Fu;
    MEM32(esi + 0x58) = ebx;
    MEM8(esi + 0x5C) = LO8(ebx);
    PUSH32(esp, 0x000D5781u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D5781: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = 0x82A09C0Fu;
    if (CMP_EQ(_fa, _fb)) goto loc_000D57A9; /* je: equal / zero */

loc_000D578D: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x73836C52;
    MEM32(eax + 8) = 5;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = edi;
    goto loc_000D57AB;

loc_000D57A9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D57AB: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D57B3u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D57B3: ;
    PUSH32(esp, 0x2E90FC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D57C0u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D57C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D57E3; /* je: equal / zero */

loc_000D57C7: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0xD8AF9647u;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = edi;
    goto loc_000D57E5;

loc_000D57E3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D57E5: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D57EDu); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D57ED: ;
    PUSH32(esp, 0x2E90DC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D57FAu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D57FA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D581D; /* je: equal / zero */

loc_000D5801: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x941EE5E8u;
    MEM32(eax + 8) = 0xE;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = edi;
    goto loc_000D581F;

loc_000D581D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D581F: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D5827u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D5827: ;
    PUSH32(esp, 0x2E90BC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D5834u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D5834: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5857; /* je: equal / zero */

loc_000D583B: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x24229818;
    MEM32(eax + 8) = 0xC;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = edi;
    goto loc_000D5859;

loc_000D5857: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D5859: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D5861u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D5861: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1833A8BC);
    ecx = 0x414150;
    MEM8(esi + 0x60) = LO8(ebx);
    PUSH32(esp, 0x000D5874u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_000D5874: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D5880
 * Original: 0x000D5880 - 0x000D58A1 (33 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5880: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000D5888u); RECOMP_ABI_CALL(0x000D5500u, sub_000D5500); /* call 0x000D5500 */

loc_000D5888: ;
    MEM8(0x413FB4) = 1;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x17ADB307);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D589Fu); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D589F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D58B0
 * Original: 0x000D58B0 - 0x000D595A (170 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D58B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D58B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D592B; /* jne: not equal / not zero */

loc_000D58BA: ;
    ecx = 0x4322F8;
    PUSH32(esp, 0x000D58C4u); RECOMP_ABI_CALL(0x00188680u, sub_00188680); /* call 0x00188680 */

loc_000D58C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5924; /* je: equal / zero */

loc_000D58C8: ;
    PUSH32(esp, 0x2E913C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D58D6u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D58D6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5911; /* je: equal / zero */

loc_000D58DD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0xBBABAFF5u;
    MEM32(eax + 8) = 3;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 0x10) = 0x82A09C0Fu;
    PUSH32(esp, 0x000D5909u); RECOMP_ABI_CALL(0x000D41D0u, sub_000D41D0); /* call 0x000D41D0 */

loc_000D5909: ;
    MEM8(esi + 0x60) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D5911: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D591Cu); RECOMP_ABI_CALL(0x000D41D0u, sub_000D41D0); /* call 0x000D41D0 */

loc_000D591C: ;
    MEM8(esi + 0x60) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D5924: ;
    SET_LO8(eax, MEM8(esi + 0x60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5956; /* je: equal / zero */

loc_000D592B: ;
    ecx = 0x4322F8;
    PUSH32(esp, 0x000D5935u); RECOMP_ABI_CALL(0x00188680u, sub_00188680); /* call 0x00188680 */

loc_000D5935: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D5956; /* jne: not equal / not zero */

loc_000D5939: ;
    PUSH32(esp, 0xBBABAFF5u);
    ecx = esi;
    PUSH32(esp, 0x000D5945u); RECOMP_ABI_CALL(0x000D5570u, sub_000D5570); /* call 0x000D5570 */

loc_000D5945: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5952; /* je: equal / zero */

loc_000D5949: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D594Fu); RECOMP_ABI_CALL(0x001F6B60u, sub_001F6B60); /* call 0x001F6B60 */

loc_000D594F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D5952: ;
    MEM8(esi + 0x60) = 0;

loc_000D5956: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D5960
 * Original: 0x000D5960 - 0x000D5986 (38 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D5960: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7EFD1D6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x7EFD1D6F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D5983; /* jne: not equal / not zero */

loc_000D596A: ;
    eax = MEM32(ecx);
    MEM8(ecx + 0x60) = 1;
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = 5;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

loc_000D5983: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D5990
 * Original: 0x000D5990 - 0x000D5A2E (158 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000D5990: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x44) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D59A1; /* jge: greater or equal (signed >=) */

loc_000D599B: ;
    ecx = MEM32(esi + eax * 4 + 4);
    goto loc_000D59A3;

loc_000D59A1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D59A3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x6C); /* addss */
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000D59FA; /* je: equal / zero */

loc_000D59B7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x82F140F8u);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000D59C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D59BFu); } /* indirect call */
    }

loc_000D59C1: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D59D2; /* je: equal / zero */

loc_000D59C7: ;
    PUSH32(esp, edi);
    ecx = 0x3C0480;
    PUSH32(esp, 0x000D59D2u); RECOMP_ABI_CALL(0x0014F580u, sub_0014F580); /* call 0x0014F580 */

loc_000D59D2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x64) (32-bit) */
    MEM32(esi + 0x68) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000D59F9; /* je: equal / zero */

loc_000D59DA: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x6824F2A4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x64) = edi;
    PUSH32(esp, 0x000D59EDu); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D59ED: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x70) = 1;

loc_000D59F9: ;
    POP32(esp, edi);

loc_000D59FA: ;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5A2A; /* je: equal / zero */

loc_000D5A01: ;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5A2A; /* je: equal / zero */

loc_000D5A08: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC340); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D5A2A; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x2DC340)) */

loc_000D5A16: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0xECFB3DA5u);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D5A26u); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D5A26: ;
    MEM8(esi + 0x70) = 0;

loc_000D5A2A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D5A30
 * Original: 0x000D5A30 - 0x000D5AA7 (119 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5A30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    PUSH32(esp, 0x2E915C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2C);
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = 0xC0BA6ABBu;
    MEM32(esi + 0x58) = ebx;
    MEM8(esi + 0x5C) = LO8(ebx);
    PUSH32(esp, 0x000D5A60u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D5A60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5A98; /* je: equal / zero */

loc_000D5A67: ;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(eax + 4) = 0xF8B89B6;
    MEM32(eax + 8) = 3;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0xADC0F9BFu;
    MEM32(eax) = 0x2E9030;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = ebx;
    PUSH32(esp, 0x000D5A93u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D5A93: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000D5A98: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D5AA2u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D5AA2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D5AB0
 * Original: 0x000D5AB0 - 0x000D5E15 (869 bytes, 244 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5AB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000D5AB8u); RECOMP_ABI_CALL(0x000D5500u, sub_000D5500); /* call 0x000D5500 */

loc_000D5AB8: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0xC4207977u);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D5AC8u); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D5AC8: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D5E13; /* jle: less or equal (signed <=) */

loc_000D5AD3: ;
    eax = MEM32(0x3C04A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC3C67997u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC3C67997u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D5C7F; /* ja: above (unsigned >) */

loc_000D5AE3: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000D5BFF; /* je: equal / zero */

loc_000D5AE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x707E723D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x707E723D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5B7F; /* je: equal / zero */

loc_000D5AF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB5D9D774u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB5D9D774u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D5C95; /* jne: not equal / not zero */

loc_000D5AFF: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4FD3CD39);
    PUSH32(esp, 0x4D510E33);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D5B11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5B0Eu); } /* indirect call */
    }

loc_000D5B11: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD78758A5u);
    PUSH32(esp, 0x34A08257);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5B23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5B20u); } /* indirect call */
    }

loc_000D5B23: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB71DA972u);
    PUSH32(esp, 0xA4C53724u);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D5B35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5B32u); } /* indirect call */
    }

loc_000D5B35: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2D2FB3D5);
    PUSH32(esp, 0x2BD81064);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5B47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5B44u); } /* indirect call */
    }

loc_000D5B47: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF93E255Du);
    PUSH32(esp, 0x49485260);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D5B59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5B56u); } /* indirect call */
    }

loc_000D5B59: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x48F33F5D);
    PUSH32(esp, 0xAC2EC1C2u);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5B6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5B68u); } /* indirect call */
    }

loc_000D5B6B: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8F5B2C09u);
    PUSH32(esp, 0xB70BBE56u);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D5B7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5B7Au); } /* indirect call */
    }

loc_000D5B7D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D5B7F: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF174401);
    PUSH32(esp, 0x4D510E33);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5B91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5B8Eu); } /* indirect call */
    }

loc_000D5B91: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x992317F2u);
    PUSH32(esp, 0x34A08257);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D5BA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5BA0u); } /* indirect call */
    }

loc_000D5BA3: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xEB7BEE57u);
    PUSH32(esp, 0xA4C53724u);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5BB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5BB2u); } /* indirect call */
    }

loc_000D5BB5: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2F327902);
    PUSH32(esp, 0x2BD81064);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D5BC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5BC4u); } /* indirect call */
    }

loc_000D5BC7: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xEFC928DAu);
    PUSH32(esp, 0x49485260);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5BD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5BD6u); } /* indirect call */
    }

loc_000D5BD9: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2557E6DA);
    PUSH32(esp, 0xAC2EC1C2u);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D5BEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5BE8u); } /* indirect call */
    }

loc_000D5BEB: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1DD2B2DE);
    PUSH32(esp, 0xB70BBE56u);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5BFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5BFAu); } /* indirect call */
    }

loc_000D5BFD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D5BFF: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8818EAD7u);
    PUSH32(esp, 0x4D510E33);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D5C11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5C0Eu); } /* indirect call */
    }

loc_000D5C11: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB670B328u);
    PUSH32(esp, 0x34A08257);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5C23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5C20u); } /* indirect call */
    }

loc_000D5C23: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAE70B871u);
    PUSH32(esp, 0xA4C53724u);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D5C35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5C32u); } /* indirect call */
    }

loc_000D5C35: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x43C359B8);
    PUSH32(esp, 0x2BD81064);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5C47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5C44u); } /* indirect call */
    }

loc_000D5C47: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5F015500);
    PUSH32(esp, 0x49485260);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D5C59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5C56u); } /* indirect call */
    }

loc_000D5C59: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x94901300u);
    PUSH32(esp, 0xAC2EC1C2u);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5C6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5C68u); } /* indirect call */
    }

loc_000D5C6B: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x95C83C24u);
    PUSH32(esp, 0xB70BBE56u);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D5C7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5C7Au); } /* indirect call */
    }

loc_000D5C7D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D5C7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD46EB4C7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD46EB4C7u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5D95; /* je: equal / zero */

loc_000D5C8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE8E4793Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE8E4793Eu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5D15; /* je: equal / zero */

loc_000D5C95: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBAE4BE8Eu);
    PUSH32(esp, 0x4D510E33);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5CA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5CA4u); } /* indirect call */
    }

loc_000D5CA7: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB670B328u);
    PUSH32(esp, 0x34A08257);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D5CB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5CB6u); } /* indirect call */
    }

loc_000D5CB9: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAE70B871u);
    PUSH32(esp, 0xA4C53724u);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5CCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5CC8u); } /* indirect call */
    }

loc_000D5CCB: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x43C359B8);
    PUSH32(esp, 0x2BD81064);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D5CDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5CDAu); } /* indirect call */
    }

loc_000D5CDD: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5F015500);
    PUSH32(esp, 0x49485260);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5CEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5CECu); } /* indirect call */
    }

loc_000D5CEF: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x94901300u);
    PUSH32(esp, 0xAC2EC1C2u);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D5D01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5CFEu); } /* indirect call */
    }

loc_000D5D01: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x95C83C24u);
    PUSH32(esp, 0xB70BBE56u);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5D13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5D10u); } /* indirect call */
    }

loc_000D5D13: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D5D15: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA1E49733u);
    PUSH32(esp, 0x4D510E33);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D5D27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5D24u); } /* indirect call */
    }

loc_000D5D27: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x713BC8D9);
    PUSH32(esp, 0x34A08257);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5D39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5D36u); } /* indirect call */
    }

loc_000D5D39: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA3AD872Cu);
    PUSH32(esp, 0xA4C53724u);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D5D4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5D48u); } /* indirect call */
    }

loc_000D5D4B: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBF0B65A9u);
    PUSH32(esp, 0x2BD81064);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5D5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5D5Au); } /* indirect call */
    }

loc_000D5D5D: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA20E59A1u);
    PUSH32(esp, 0x49485260);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D5D6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5D6Cu); } /* indirect call */
    }

loc_000D5D6F: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD79D17A1u);
    PUSH32(esp, 0xAC2EC1C2u);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5D81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5D7Eu); } /* indirect call */
    }

loc_000D5D81: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x29FA333D);
    PUSH32(esp, 0xB70BBE56u);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D5D93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5D90u); } /* indirect call */
    }

loc_000D5D93: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D5D95: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA0E495A0u);
    PUSH32(esp, 0x4D510E33);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5DA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5DA4u); } /* indirect call */
    }

loc_000D5DA7: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB6A730C6u);
    PUSH32(esp, 0x34A08257);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D5DB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5DB6u); } /* indirect call */
    }

loc_000D5DB9: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x66FA8921);
    PUSH32(esp, 0xA4C53724u);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5DCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5DC8u); } /* indirect call */
    }

loc_000D5DCB: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x93D3D176u);
    PUSH32(esp, 0x2BD81064);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D5DDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5DDAu); } /* indirect call */
    }

loc_000D5DDD: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F3B5D1E);
    PUSH32(esp, 0x49485260);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5DEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5DECu); } /* indirect call */
    }

loc_000D5DEF: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x93A8171Eu);
    PUSH32(esp, 0xAC2EC1C2u);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D5E01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5DFEu); } /* indirect call */
    }

loc_000D5E01: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E6DDE02);
    PUSH32(esp, 0xB70BBE56u);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D5E13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5E10u); } /* indirect call */
    }

loc_000D5E13: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D5E20
 * Original: 0x000D5E20 - 0x000D5EA3 (131 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D5E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5E20: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + 0x44) = eax;
    MEM32(ebp + 0x48) = eax;
    MEM32(ebp + 0x4C) = ecx;
    MEM32(ebp + 0x50) = eax;
    MEM32(ebp + 0x54) = 0x802EA615u;
    MEM32(ebp + 0x58) = eax;
    MEM8(ebp + 0x5C) = LO8(eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D5E46: ;
    PUSH32(esp, 0x2E917C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D5E53u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D5E53: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5E85; /* je: equal / zero */

loc_000D5E5C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D5E62u); RECOMP_ABI_CALL(0x0015EE00u, sub_0015EE00); /* call 0x0015EE00 */

loc_000D5E62: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x2E9028;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0xA;
    MEM32(esi + 0xC) = 0xFA1BC4F8u;
    MEM32(esi + 0x10) = 0x82A09C0Fu;
    goto loc_000D5E87;

loc_000D5E85: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D5E87: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x000D5E8Fu); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D5E8F: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000D5E46; /* jb: below (unsigned <) */

loc_000D5E97: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x60) = eax;
    MEM32(ebp + 0x64) = eax;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D5EB0
 * Original: 0x000D5EB0 - 0x000D5F2F (127 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D5EB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + 0x44) = ebx;
    MEM32(ebp + 0x48) = ebx;
    MEM32(ebp + 0x4C) = eax;
    MEM32(ebp + 0x50) = ebx;
    MEM32(ebp + 0x54) = 0x372ABC45;
    MEM32(ebp + 0x58) = ebx;
    MEM8(ebp + 0x5C) = LO8(ebx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D5ED7: ;
    PUSH32(esp, 0x2E919C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D5EE4u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D5EE4: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5F12; /* je: equal / zero */

loc_000D5EED: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D5EF3u); RECOMP_ABI_CALL(0x0015EE10u, sub_0015EE10); /* call 0x0015EE10 */

loc_000D5EF3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x2E9028;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = 0x82A09C0Fu;
    goto loc_000D5F14;

loc_000D5F12: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D5F14: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x000D5F1Cu); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D5F1C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000D5ED7; /* jb: below (unsigned <) */

loc_000D5F22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x60) = ebx;
    MEM32(ebp + 0x64) = ebx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D5F30
 * Original: 0x000D5F30 - 0x000D5FA1 (113 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5F30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    PUSH32(esp, 0x2E91BC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = 0xD571CA7Du;
    MEM32(esi + 0x58) = ebx;
    MEM8(esi + 0x5C) = LO8(ebx);
    PUSH32(esp, 0x000D5F60u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D5F60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D5F92; /* je: equal / zero */

loc_000D5F67: ;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x24229818;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0x82A09C0Fu;
    PUSH32(esp, 0x000D5F8Du); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D5F8D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000D5F92: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D5F9Cu); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D5F9C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D5FB0
 * Original: 0x000D5FB0 - 0x000D6009 (89 bytes, 29 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D5FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D5FB0: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    esi = ecx;
    PUSH32(esp, 0x000D5FC4u); RECOMP_ABI_CALL(0x000D47D0u, sub_000D47D0); /* call 0x000D47D0 */

loc_000D5FC4: ;
    edi = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x58) = eax;
    MEM8(esi + 0x5C) = LO8(eax);
    eax = esp + 8;
    PUSH32(esp, 0x2E91DC);
    PUSH32(esp, eax);
    MEM32(esi + 0x4C) = edx;
    MEM32(esi + 0x54) = 0x24229818;
    PUSH32(esp, 0x000D5FF0u); RECOMP_ABI_CALL(0x001789B0u, sub_001789B0); /* call 0x001789B0 */

loc_000D5FF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x50F6F4D5);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x3C); PUSH32(esp, 0x000D5FFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D5FFBu); } /* indirect call */
    }

loc_000D5FFE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D6010
 * Original: 0x000D6010 - 0x000D607A (106 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6010: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x5B44783D);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x458) = 0;
    PUSH32(esp, 0x000D602Du); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D602D: ;
    PUSH32(esp, 0x41600000);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0xC2700000u);
    PUSH32(esp, 0xC3020000u);
    PUSH32(esp, 0x80505050u);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x2E91EC);
    ecx = esi + 0x7C;
    PUSH32(esp, 0x000D605Cu); RECOMP_ABI_CALL(0x000BD350u, sub_000BD350); /* call 0x000BD350 */

loc_000D605C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x460) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x45C) = 0;
    MEM8(0x413FB4) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D6080
 * Original: 0x000D6080 - 0x000D609C (28 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D6080: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0xFE69DC55u);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D6093u); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D6093: ;
    ecx = esi + 0x7C;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000BCF70(); return; /* tail jmp 0x000BCF70 */

}

/**
 * sub_000D60A0
 * Original: 0x000D60A0 - 0x000D60E1 (65 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D60A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D60A0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x460); /* addss */
    PUSH32(esp, eax);
    ecx = esi + 0x7C;
    MEMF(esi + 0x460) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000D60C6u); RECOMP_ABI_CALL(0x000BDC40u, sub_000BDC40); /* call 0x000BDC40 */

loc_000D60C6: ;
    _fa = (uint32_t)(MEM32(esi + 0x458)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x458), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D60DD; /* jne: not equal / not zero */

loc_000D60CF: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D60DD; /* je: equal / zero */

loc_000D60D6: ;
    ecx = esi;
    PUSH32(esp, 0x000D60DDu); RECOMP_ABI_CALL(0x000D54B0u, sub_000D54B0); /* call 0x000D54B0 */

loc_000D60DD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D60F0
 * Original: 0x000D60F0 - 0x000D61D6 (230 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D60F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D60F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000D60F9u); RECOMP_ABI_CALL(0x00178960u, sub_00178960); /* call 0x00178960 */

loc_000D60F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11E1FC01) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11E1FC01 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6111; /* je: equal / zero */

loc_000D6100: ;
    PUSH32(esp, 0x000D6105u); RECOMP_ABI_CALL(0x00178960u, sub_00178960); /* call 0x00178960 */

loc_000D6105: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x59C00449) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x59C00449 (32-bit) */
    eax = 0xA20CA488u;
    if (CMP_NE(_fa, _fb)) goto loc_000D6116; /* jne: not equal / not zero */

loc_000D6111: ;
    eax = 0x941EE5E8u;

loc_000D6116: ;
    ecx = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x2E9218);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = ecx;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = ebx;
    MEM8(esi + 0x5C) = LO8(ebx);
    PUSH32(esp, 0x000D613Eu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D613E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6165; /* je: equal / zero */

loc_000D6145: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0xB84CF80Cu;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0x82A09C0Fu;
    goto loc_000D6167;

loc_000D6165: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D6167: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D616Fu); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D616F: ;
    PUSH32(esp, 0x2E91F8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D617Cu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D617C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D61A3; /* je: equal / zero */

loc_000D6183: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0xFEE675A0u;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0x82A09C0Fu;
    goto loc_000D61A5;

loc_000D61A3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D61A5: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D61ADu); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D61AD: ;
    PUSH32(esp, 0x000D61B2u); RECOMP_ABI_CALL(0x00178960u, sub_00178960); /* call 0x00178960 */

loc_000D61B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11E1FC01) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11E1FC01 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D61BE; /* je: equal / zero */

loc_000D61B9: ;
    PUSH32(esp, 0x000D61BEu); RECOMP_ABI_CALL(0x00178960u, sub_00178960); /* call 0x00178960 */

loc_000D61BE: ;
    MEM32(esi + 0x60) = ebx;
    MEM8(esi + 0x68) = LO8(ebx);
    MEM8(esi + 0x69) = LO8(ebx);
    MEM32(esi + 0x6C) = ebx;
    MEM32(esi + 0x64) = 0x6724F404;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D61E0
 * Original: 0x000D61E0 - 0x000D6526 (838 bytes, 228 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D61E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D61E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x242336);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x4F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4F4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x2E92E0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = 0x6C5EA88F;
    MEM32(esi + 0x58) = ebx;
    MEM8(esi + 0x5C) = LO8(ebx);
    PUSH32(esp, 0x000D622Du); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D622D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = 0x82A09C0Fu;
    if (CMP_EQ(_fa, _fb)) goto loc_000D6254; /* je: equal / zero */

loc_000D623C: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x8036B649u;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = edi;
    goto loc_000D6256;

loc_000D6254: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D6256: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D625Eu); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D625E: ;
    PUSH32(esp, 0x2E92C0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D626Bu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D626B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D628A; /* je: equal / zero */

loc_000D6272: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x9E48C6A;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = edi;
    goto loc_000D628C;

loc_000D628A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D628C: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D6294u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D6294: ;
    PUSH32(esp, 0x2E92A0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D62A1u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D62A1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D62C0; /* je: equal / zero */

loc_000D62A8: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x3B0D83E4;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = edi;
    goto loc_000D62C2;

loc_000D62C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D62C2: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D62CAu); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D62CA: ;
    PUSH32(esp, 0x2E9280);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D62D7u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D62D7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D62F6; /* je: equal / zero */

loc_000D62DE: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x66D6FCB3;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = edi;
    goto loc_000D62F8;

loc_000D62F6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D62F8: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D6300u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D6300: ;
    PUSH32(esp, 0x2E9260);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D630Du); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D630D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D632C; /* je: equal / zero */

loc_000D6314: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x91C94F31u;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = edi;
    goto loc_000D632E;

loc_000D632C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D632E: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D6336u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D6336: ;
    PUSH32(esp, 0x2E9240);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D6343u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D6343: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6362; /* je: equal / zero */

loc_000D634A: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0xA935EF9Cu;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = edi;
    goto loc_000D6364;

loc_000D6362: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D6364: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D636Cu); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D636C: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000D6375u); RECOMP_ABI_CALL(0x00209100u, sub_00209100); /* call 0x00209100 */

loc_000D6375: ;
    ecx = esp + 0xE0;
    MEM32(esp + 0x50C) = ebx;
    PUSH32(esp, 0x000D6388u); RECOMP_ABI_CALL(0x001EEF80u, sub_001EEF80); /* call 0x001EEF80 */

loc_000D6388: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2E9238);
    ecx = esp + 0x18;
    MEM8(esp + 0x514) = 1;
    MEM32(esi + 0x164) = ebp;
    MEM32(esi + 0x160) = ebx;
    MEM32(esi + 0x1B8) = ebp;
    MEM32(esi + 0x1B4) = ebx;
    PUSH32(esp, 0x000D63B7u); RECOMP_ABI_CALL(0x00209810u, sub_00209810); /* call 0x00209810 */

loc_000D63B7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D64E8; /* je: equal / zero */

loc_000D63BF: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0xE4;
    PUSH32(esp, 0x000D63D0u); RECOMP_ABI_CALL(0x001EF500u, sub_001EF500); /* call 0x001EF500 */

loc_000D63D0: ;
    edx = MEM32(esi + 0x160);
    PUSH32(esp, edx);
    PUSH32(esp, 0x468B4EEB);
    ecx = esp + 0xE8;
    PUSH32(esp, 0x000D63E8u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_000D63E8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6435; /* je: equal / zero */

loc_000D63EC: ;
    /* nop */

loc_000D63F0: ;
    PUSH32(esp, ebx);
    ecx = esp + 0xE4;
    PUSH32(esp, 0x000D63FDu); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_000D63FD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D6403u); RECOMP_ABI_CALL(0x00204D10u, sub_00204D10); /* call 0x00204D10 */

loc_000D6403: ;
    ecx = MEM32(esi + 0x160);
    MEM32(esi + ecx * 4 + 0x60) = eax;
    eax = MEM32(esi + 0x160);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x468B4EEB);
    ecx = esp + 0xE8;
    MEM32(esi + 0x160) = eax;
    PUSH32(esp, 0x000D6431u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_000D6431: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D63F0; /* jne: not equal / not zero */

loc_000D6435: ;
    eax = MEM32(esi + 0x1B4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xB7174C55u);
    ecx = esp + 0xE8;
    PUSH32(esp, 0x000D644Du); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_000D644D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6499; /* je: equal / zero */

loc_000D6451: ;
    PUSH32(esp, ebx);
    ecx = esp + 0xE4;
    PUSH32(esp, 0x000D645Eu); RECOMP_ABI_CALL(0x001EF0B0u, sub_001EF0B0); /* call 0x001EF0B0 */

loc_000D645E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D6464u); RECOMP_ABI_CALL(0x00204D10u, sub_00204D10); /* call 0x00204D10 */

loc_000D6464: ;
    ecx = MEM32(esi + 0x1B4);
    MEM32(esi + ecx * 4 + 0x174) = eax;
    eax = MEM32(esi + 0x1B4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0xB7174C55u);
    ecx = esp + 0xE8;
    MEM32(esi + 0x1B4) = eax;
    PUSH32(esp, 0x000D6495u); RECOMP_ABI_CALL(0x001EF620u, sub_001EF620); /* call 0x001EF620 */

loc_000D6495: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6451; /* jne: not equal / not zero */

loc_000D6499: ;
    ecx = MEM32(esi + 0x160);
    edx = MEM32(esi + 0x1B4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x168) = ebx;
    MEM32(esi + 0x16C) = ebx;
    MEM32(esi + 0x170) = ebx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    MEM32(esi + 0x164) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x1B8) = ecx;
    ecx = esp + 0xE0;
    PUSH32(esp, 0x000D64DFu); RECOMP_ABI_CALL(0x001EEFA0u, sub_001EEFA0); /* call 0x001EEFA0 */

loc_000D64DF: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000D64E8u); RECOMP_ABI_CALL(0x00209980u, sub_00209980); /* call 0x00209980 */

loc_000D64E8: ;
    ecx = esp + 0xE0;
    MEM8(esp + 0x50C) = LO8(ebx);
    PUSH32(esp, 0x000D64FBu); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_000D64FB: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x50C) = ebp;
    PUSH32(esp, 0x000D650Bu); RECOMP_ABI_CALL(0x00209200u, sub_00209200); /* call 0x00209200 */

loc_000D650B: ;
    ecx = MEM32(esp + 0x504);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x500) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x500;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D6530
 * Original: 0x000D6530 - 0x000D66C0 (400 bytes, 110 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6530: ;
    ecx = MEM32(ecx + 0x4C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x5A99854B);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D6543u); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D6543: ;
    ecx = 0x3C0480;
    PUSH32(esp, 0x000D654Du); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_000D654D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6554; /* jne: not equal / not zero */

loc_000D6551: ;
    PUSH32(esp, eax);
    goto loc_000D6588;

loc_000D6554: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 1) = eax;
    MEM16(esp + 5) = LO16(eax);
    ecx = 0x3C0480;
    MEM8(esp) = 0;
    MEM8(esp + 7) = LO8(eax);
    PUSH32(esp, 0x000D6571u); RECOMP_ABI_CALL(0x00113700u, sub_00113700); /* call 0x00113700 */

loc_000D6571: ;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x2DEA44);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D6581u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000D6581: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp;
    PUSH32(esp, edx);

loc_000D6588: ;
    ecx = 0x414150;
    PUSH32(esp, 0xFDCB76EDu);
    PUSH32(esp, 0x000D6597u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_000D6597: ;
    ecx = 0x3C0480;
    PUSH32(esp, 0x000D65A1u); RECOMP_ABI_CALL(0x00067650u, sub_00067650); /* call 0x00067650 */

loc_000D65A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D65A8; /* jne: not equal / not zero */

loc_000D65A5: ;
    PUSH32(esp, eax);
    goto loc_000D65DC;

loc_000D65A8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 1) = eax;
    MEM16(esp + 5) = LO16(eax);
    ecx = 0x3C0480;
    MEM8(esp) = 0;
    MEM8(esp + 7) = LO8(eax);
    PUSH32(esp, 0x000D65C5u); RECOMP_ABI_CALL(0x00067650u, sub_00067650); /* call 0x00067650 */

loc_000D65C5: ;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x2DEA44);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D65D5u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000D65D5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp;
    PUSH32(esp, edx);

loc_000D65DC: ;
    ecx = 0x414150;
    PUSH32(esp, 0x7305B8D3);
    PUSH32(esp, 0x000D65EBu); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_000D65EB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2E6CC4);
    PUSH32(esp, 0x000D65F7u); RECOMP_ABI_CALL(0x00204D10u, sub_00204D10); /* call 0x00204D10 */

loc_000D65F7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2E6CBC);
    PUSH32(esp, 0x000D6603u); RECOMP_ABI_CALL(0x00204D10u, sub_00204D10); /* call 0x00204D10 */

loc_000D6603: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2E6CB4);
    PUSH32(esp, 0x000D660Fu); RECOMP_ABI_CALL(0x00204D10u, sub_00204D10); /* call 0x00204D10 */

loc_000D660F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2E6CAC);
    PUSH32(esp, 0x000D661Bu); RECOMP_ABI_CALL(0x00204D10u, sub_00204D10); /* call 0x00204D10 */

loc_000D661B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2DC8F4);
    PUSH32(esp, 0x000D6627u); RECOMP_ABI_CALL(0x00204D10u, sub_00204D10); /* call 0x00204D10 */

loc_000D6627: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2DE2A4);
    PUSH32(esp, 0x000D6633u); RECOMP_ABI_CALL(0x00204D10u, sub_00204D10); /* call 0x00204D10 */

loc_000D6633: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3C0480;
    PUSH32(esp, 0x000D6640u); RECOMP_ABI_CALL(0x00194150u, sub_00194150); /* call 0x00194150 */

loc_000D6640: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5DA8B911) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5DA8B911 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D666C; /* ja: above (unsigned >) */

loc_000D6647: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000D6665; /* je: equal / zero */

loc_000D6649: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23E9891F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23E9891F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D665E; /* je: equal / zero */

loc_000D6650: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E520DCB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E520DCB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6673; /* jne: not equal / not zero */

loc_000D6657: ;
    PUSH32(esp, 0x2E6CC4);
    goto loc_000D667C;

loc_000D665E: ;
    PUSH32(esp, 0x2E6CAC);
    goto loc_000D667C;

loc_000D6665: ;
    PUSH32(esp, 0x2E6CBC);
    goto loc_000D667C;

loc_000D666C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xECA4A890u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xECA4A890u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6677; /* je: equal / zero */

loc_000D6673: ;
    PUSH32(esp, 0);
    goto loc_000D667C;

loc_000D6677: ;
    PUSH32(esp, 0x2E6CB4);

loc_000D667C: ;
    ecx = 0x414150;
    PUSH32(esp, 0x40FF3F78);
    PUSH32(esp, 0x000D668Bu); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_000D668B: ;
    ecx = 0x3C0480;
    PUSH32(esp, 0x000D6695u); RECOMP_ABI_CALL(0x000D4A10u, sub_000D4A10); /* call 0x000D4A10 */

loc_000D6695: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = 0x414150;
    if (CMP_NE(_fa, _fb)) goto loc_000D66AD; /* jne: not equal / not zero */

loc_000D669E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8762095);
    PUSH32(esp, 0x000D66A9u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_000D66A9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D66AD: ;
    PUSH32(esp, 0x2DC8F4);
    PUSH32(esp, 0x7305B8D3);
    PUSH32(esp, 0x000D66BCu); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_000D66BC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D66C0
 * Original: 0x000D66C0 - 0x000D6730 (112 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D66C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D66C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x2E9300);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM8(esi + 0x5C) = LO8(ebx);
    PUSH32(esp, 0x000D66ECu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D66EC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D671E; /* je: equal / zero */

loc_000D66F3: ;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0xAC7D791Eu;
    MEM32(eax + 8) = 3;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0x82A09C0Fu;
    PUSH32(esp, 0x000D6719u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D6719: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000D671E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D6728u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D6728: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D6730
 * Original: 0x000D6730 - 0x000D6788 (88 bytes, 24 insns)
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6730(void)
{

loc_000D6730: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(eax + 0xC) = 0;
    MEM32(eax) = 0x2E9320;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = edx;
    esp += 44; return; /* ret 40 */

}

/**
 * sub_000D6790
 * Original: 0x000D6790 - 0x000D683D (173 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6790: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    PUSH32(esp, 0x2E9348);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = 0xAB72FBCDu;
    MEM32(esi + 0x58) = ebx;
    MEM8(esi + 0x5C) = LO8(ebx);
    PUSH32(esp, 0x000D67C0u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D67C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D67E7; /* je: equal / zero */

loc_000D67C7: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x1CF22D9F;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0x82A09C0Fu;
    goto loc_000D67E9;

loc_000D67E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D67E9: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D67F1u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D67F1: ;
    PUSH32(esp, 0x2E9328);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D67FEu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D67FE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6825; /* je: equal / zero */

loc_000D6805: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x1F95C48D;
    MEM32(eax + 8) = 0x22;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0x82A09C0Fu;
    goto loc_000D6827;

loc_000D6825: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D6827: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D682Fu); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D682F: ;
    MEM32(esi + 0x60) = ebx;
    MEM8(esi + 0x64) = LO8(ebx);
    MEM8(esi + 0x65) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D6840
 * Original: 0x000D6840 - 0x000D68ED (173 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6840: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    PUSH32(esp, 0x2E9388);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = 0x1E1141C9;
    MEM32(esi + 0x58) = ebx;
    MEM8(esi + 0x5C) = LO8(ebx);
    PUSH32(esp, 0x000D6870u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D6870: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6897; /* je: equal / zero */

loc_000D6877: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x5F8F2771;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0x82A09C0Fu;
    goto loc_000D6899;

loc_000D6897: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D6899: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D68A1u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D68A1: ;
    PUSH32(esp, 0x2E9368);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D68AEu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D68AE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D68D5; /* je: equal / zero */

loc_000D68B5: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x69CAB575;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0x82A09C0Fu;
    goto loc_000D68D7;

loc_000D68D5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D68D7: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D68DFu); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D68DF: ;
    MEM32(esi + 0x60) = ebx;
    MEM8(esi + 0x64) = LO8(ebx);
    MEM8(esi + 0x65) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D68F0
 * Original: 0x000D68F0 - 0x000D6920 (48 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D68F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D68F0: ;
    edx = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x44) = eax;
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x4C) = edx;
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x54) = eax;
    MEM32(ecx + 0x58) = eax;
    MEM8(ecx + 0x5C) = LO8(eax);
    MEM32(ecx + 0x74) = 0xFFFFFFFFu;
    MEMF(ecx + 0x78) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x70) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D6920
 * Original: 0x000D6920 - 0x000D69B0 (144 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6920: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    PUSH32(esp, 0x2E93A8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = 0xAB72FBCDu;
    MEM32(esi + 0x58) = ebx;
    MEM8(esi + 0x5C) = LO8(ebx);
    PUSH32(esp, 0x000D6950u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D6950: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6977; /* je: equal / zero */

loc_000D6957: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x1CF22D9F;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0x82A09C0Fu;
    goto loc_000D6979;

loc_000D6977: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D6979: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D6981u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D6981: ;
    PUSH32(esp, 0x2044BD1C);
    ecx = 0x37DD10;
    PUSH32(esp, 0x000D6990u); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000D6990: ;
    MEM32(esi + 0x60) = ebx;
    MEM8(esi + 0x64) = LO8(ebx);
    MEM8(esi + 0x65) = LO8(ebx);
    MEM8(esi + 0x66) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D69B0
 * Original: 0x000D69B0 - 0x000D69D2 (34 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D69B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D69B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0xF3E0A232u);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D69C3u); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D69C3: ;
    ecx = 0x3C2700;
    PUSH32(esp, 0x000D69CDu); RECOMP_ABI_CALL(0x0015EF20u, sub_0015EF20); /* call 0x0015EF20 */

loc_000D69CD: ;
    MEM32(esi + 0x68) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D69E0
 * Original: 0x000D69E0 - 0x000D6D25 (837 bytes, 237 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D69E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D69E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x4C);
    PUSH32(esp, 0x67D18184);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D69F7u); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D69F7: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0xCAEB25C);
    ecx = 0x414150;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x000D6A13u); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_000D6A13: ;
    PUSH32(esp, 0x3C2700);
    PUSH32(esp, 0x000D6A1Du); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000D6A1D: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7492BE86) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7492BE86 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6AA6; /* je: equal / zero */

loc_000D6A2A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8092D16Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8092D16Au (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6AA6; /* je: equal / zero */

loc_000D6A32: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FCB149B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FCB149B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6AA6; /* je: equal / zero */

loc_000D6A3A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3BCB0E4F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3BCB0E4F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6AA6; /* je: equal / zero */

loc_000D6A42: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x83355920u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x83355920u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6AA6; /* je: equal / zero */

loc_000D6A4A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x883560FFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x883560FFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6AA6; /* je: equal / zero */

loc_000D6A52: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18D9371B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x18D9371B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6AA6; /* je: equal / zero */

loc_000D6A5A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1BD93BD4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1BD93BD4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6AA6; /* je: equal / zero */

loc_000D6A62: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC64B12BFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC64B12BFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6AA6; /* je: equal / zero */

loc_000D6A6A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC14B0AE0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC14B0AE0u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6AA6; /* je: equal / zero */

loc_000D6A72: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF9D8FDFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF9D8FDFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6AA6; /* je: equal / zero */

loc_000D6A7A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF4D8F620u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF4D8F620u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6AA6; /* je: equal / zero */

loc_000D6A82: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0AC08D8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xE0AC08D8u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6AA6; /* je: equal / zero */

loc_000D6A8A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE5AC10B7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xE5AC10B7u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6AA6; /* je: equal / zero */

loc_000D6A92: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC4B868A2u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC4B868A2u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6AA6; /* je: equal / zero */

loc_000D6A9A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC1B863E9u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC1B863E9u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6AA6; /* je: equal / zero */

loc_000D6AA2: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_000D6AA8;

loc_000D6AA6: ;
    SET_LO8(ecx, 1);

loc_000D6AA8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7492BE86) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7492BE86 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6ACC; /* je: equal / zero */

loc_000D6AB0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8092D16Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8092D16Au (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6ACC; /* je: equal / zero */

loc_000D6AB8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FCB149B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FCB149B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6ACC; /* je: equal / zero */

loc_000D6AC0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3BCB0E4F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3BCB0E4F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6ACC; /* je: equal / zero */

loc_000D6AC8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_000D6ACE;

loc_000D6ACC: ;
    SET_LO8(eax, 1);

loc_000D6ACE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6B7E; /* jne: not equal / not zero */

loc_000D6AD6: ;
    eax = MEM32(edi + 0x68);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEM32(esp + 8) = 0;
    if (CMP_A(_fa, _fb)) goto loc_000D6C2A; /* ja: above (unsigned >) */

loc_000D6AEB: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xD6D28); /* switch: 12 entries, 9 targets */
    if (_jt == 0x000D6AF2u) goto loc_000D6AF2;
    if (_jt == 0x000D6B15u) goto loc_000D6B15;
    if (_jt == 0x000D6B38u) goto loc_000D6B38;
    if (_jt == 0x000D6B5Bu) goto loc_000D6B5B;
    if (_jt == 0x000D6BA2u) goto loc_000D6BA2;
    if (_jt == 0x000D6BC2u) goto loc_000D6BC2;
    if (_jt == 0x000D6BE2u) goto loc_000D6BE2;
    if (_jt == 0x000D6C02u) goto loc_000D6C02;
    if (_jt == 0x000D6C2Au) goto loc_000D6C2A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D6AF2: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x751DF879);
    ecx = 0x414150;
    PUSH32(esp, 0x000D6B06u); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_000D6B06: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFB5470C1u);
    goto loc_000D6C20;

loc_000D6B15: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2AF49D1A);
    ecx = 0x414150;
    PUSH32(esp, 0x000D6B29u); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_000D6B29: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xDA618F92u);
    goto loc_000D6C20;

loc_000D6B38: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0xCDF06849u);
    ecx = 0x414150;
    PUSH32(esp, 0x000D6B4Cu); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_000D6B4C: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x69300E11);
    goto loc_000D6C20;

loc_000D6B5B: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6324DC77);
    ecx = 0x414150;
    PUSH32(esp, 0x000D6B6Fu); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_000D6B6F: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0xD5E5007Fu);
    goto loc_000D6C20;

loc_000D6B7E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6C2A; /* jne: not equal / not zero */

loc_000D6B86: ;
    eax = MEM32(edi + 0x68);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEM32(esp + 8) = 0;
    if (CMP_A(_fa, _fb)) goto loc_000D6C2A; /* ja: above (unsigned >) */

loc_000D6B9B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xD6D40); /* switch: 6 entries, 5 targets */
    if (_jt == 0x000D6BA2u) goto loc_000D6BA2;
    if (_jt == 0x000D6BC2u) goto loc_000D6BC2;
    if (_jt == 0x000D6BE2u) goto loc_000D6BE2;
    if (_jt == 0x000D6C02u) goto loc_000D6C02;
    if (_jt == 0x000D6C2Au) goto loc_000D6C2A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D6BA2: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x902ABA79u);
    ecx = 0x414150;
    PUSH32(esp, 0x000D6BB6u); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_000D6BB6: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x32028039);
    goto loc_000D6C20;

loc_000D6BC2: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x2736131A);
    ecx = 0x414150;
    PUSH32(esp, 0x000D6BD6u); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_000D6BD6: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0xD228ECDAu);
    goto loc_000D6C20;

loc_000D6BE2: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xBED50A49u);
    ecx = 0x414150;
    PUSH32(esp, 0x000D6BF6u); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_000D6BF6: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0xF5A01909u);
    goto loc_000D6C20;

loc_000D6C02: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F665277);
    ecx = 0x414150;
    PUSH32(esp, 0x000D6C16u); RECOMP_ABI_CALL(0x00122030u, sub_00122030); /* call 0x00122030 */

loc_000D6C16: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x341DD437);

loc_000D6C20: ;
    ecx = 0x3BF678;
    PUSH32(esp, 0x000D6C2Au); RECOMP_ABI_CALL(0x0015E4B0u, sub_0015E4B0); /* call 0x0015E4B0 */

loc_000D6C2A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8092D16Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8092D16Au (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6C43; /* jne: not equal / not zero */

loc_000D6C32: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF085FF47u);
    ecx = 0x3BF678;
    PUSH32(esp, 0x000D6C43u); RECOMP_ABI_CALL(0x0015E4B0u, sub_0015E4B0); /* call 0x0015E4B0 */

loc_000D6C43: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x2E940C);
    PUSH32(esp, 2);
    PUSH32(esp, 0x400);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D6C57u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_000D6C57: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    edi = 2;

loc_000D6C61: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2E93FC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D6C6Du); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000D6C6D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D6C73u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000D6C73: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x000D6C81u); RECOMP_ABI_CALL(0x00121BD0u, sub_00121BD0); /* call 0x00121BD0 */

loc_000D6C81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6C86; /* je: equal / zero */

loc_000D6C85: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000D6C86: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2E93E8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D6C92u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000D6C92: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D6C98u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000D6C98: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x000D6CA6u); RECOMP_ABI_CALL(0x00121BD0u, sub_00121BD0); /* call 0x00121BD0 */

loc_000D6CA6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6CAB; /* je: equal / zero */

loc_000D6CAA: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000D6CAB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2E93D8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D6CB7u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000D6CB7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D6CBDu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000D6CBD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x000D6CCBu); RECOMP_ABI_CALL(0x00121BD0u, sub_00121BD0); /* call 0x00121BD0 */

loc_000D6CCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6CD0; /* je: equal / zero */

loc_000D6CCF: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000D6CD0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2E93C8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D6CDCu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000D6CDC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D6CE2u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000D6CE2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x414150;
    PUSH32(esp, 0x000D6CF0u); RECOMP_ABI_CALL(0x00121BD0u, sub_00121BD0); /* call 0x00121BD0 */

loc_000D6CF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6CF5; /* je: equal / zero */

loc_000D6CF4: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000D6CF5: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xE (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D6C61; /* jle: less or equal (signed <=) */

loc_000D6CFF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x34 (32-bit) */
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_000D6D16; /* jne: not equal / not zero */

loc_000D6D05: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4051F27);
    ecx = 0x3BF678;
    PUSH32(esp, 0x000D6D16u); RECOMP_ABI_CALL(0x0015E4B0u, sub_0015E4B0); /* call 0x0015E4B0 */

loc_000D6D16: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D6D1Cu); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_000D6D1C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D6D60
 * Original: 0x000D6D60 - 0x000D6DF8 (152 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6D60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15AE5C07) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15AE5C07 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000D6DE8; /* je: equal / zero */

loc_000D6D6E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x902E27B4u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x902E27B4u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6DE0; /* je: equal / zero */

loc_000D6D75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFE7A118Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFE7A118Eu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D6DF4; /* jne: not equal / not zero */

loc_000D6D7C: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esi + 0x66) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000D6DF4; /* je: equal / zero */

loc_000D6D8C: ;
    PUSH32(esp, 0x2E942C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D6D9Au); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D6D9A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6DD1; /* je: equal / zero */

loc_000D6DA1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x4BDC8FC4;
    MEM32(eax + 8) = 0x11;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 0x10) = 0x82A09C0Fu;
    PUSH32(esp, 0x000D6DCDu); RECOMP_ABI_CALL(0x000D41D0u, sub_000D41D0); /* call 0x000D41D0 */

loc_000D6DCD: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D6DD1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D6DDCu); RECOMP_ABI_CALL(0x000D41D0u, sub_000D41D0); /* call 0x000D41D0 */

loc_000D6DDC: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D6DE0: ;
    MEM8(esi + 0x64) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D6DE8: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x65) = LO8(eax);

loc_000D6DF4: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D6E00
 * Original: 0x000D6E00 - 0x000D6EB9 (185 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6E00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    PUSH32(esp, 0x2E946C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = 0x1E1141C9;
    MEM32(esi + 0x58) = ebx;
    MEM8(esi + 0x5C) = LO8(ebx);
    PUSH32(esp, 0x000D6E30u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D6E30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6E57; /* je: equal / zero */

loc_000D6E37: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x5F8F2771;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0x82A09C0Fu;
    goto loc_000D6E59;

loc_000D6E57: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D6E59: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D6E61u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D6E61: ;
    PUSH32(esp, 0x2E944C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D6E6Eu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D6E6E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6E95; /* je: equal / zero */

loc_000D6E75: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x69CAB575;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0x82A09C0Fu;
    goto loc_000D6E97;

loc_000D6E95: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D6E97: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D6E9Fu); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D6E9F: ;
    PUSH32(esp, 0x5F261AFA);
    ecx = 0x37DD10;
    PUSH32(esp, 0x000D6EAEu); RECOMP_ABI_CALL(0x00152580u, sub_00152580); /* call 0x00152580 */

loc_000D6EAE: ;
    MEM32(esi + 0x60) = ebx;
    MEM8(esi + 0x64) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D6EC0
 * Original: 0x000D6EC0 - 0x000D6EE5 (37 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6EC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6EC0: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x44) = eax;
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x4C) = edx;
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x54) = 0x81122670u;
    MEM32(ecx + 0x58) = eax;
    MEM8(ecx + 0x5C) = LO8(eax);
    MEM32(ecx + 0x60) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D6EF0
 * Original: 0x000D6EF0 - 0x000D6F01 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6EF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6EF0: ;
    ecx = MEM32(ecx + 0x4C);
    PUSH32(esp, 0x9D7028A0u);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D6F00u); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D6F00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D6F10
 * Original: 0x000D6F10 - 0x000D6F85 (117 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6F10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    PUSH32(esp, 0x2E948C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = 0xAB72FBCDu;
    MEM32(esi + 0x58) = ebx;
    MEM8(esi + 0x5C) = LO8(ebx);
    PUSH32(esp, 0x000D6F40u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D6F40: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6F67; /* je: equal / zero */

loc_000D6F47: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x1CF22D9F;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0x82A09C0Fu;
    goto loc_000D6F69;

loc_000D6F67: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D6F69: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D6F71u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D6F71: ;
    MEM32(esi + 0x60) = ebx;
    MEM8(esi + 0x64) = LO8(ebx);
    MEM8(esi + 0x65) = LO8(ebx);
    MEM8(esi + 0x66) = LO8(ebx);
    MEM8(esi + 0x68) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D6F90
 * Original: 0x000D6F90 - 0x000D705A (202 bytes, 70 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D6F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D6F90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15AE5C07) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15AE5C07 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000D704A; /* je: equal / zero */

loc_000D6FA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x902E27B4u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x902E27B4u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D6FC4; /* je: equal / zero */

loc_000D6FA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFE7A118Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFE7A118Eu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D703F; /* jne: not equal / not zero */

loc_000D6FB4: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x68) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D6FC4: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x65) = LO8(ecx);
    SET_LO8(ecx, MEM8(esi + 0x67));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7043; /* jne: not equal / not zero */

loc_000D6FD9: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x44) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D703F; /* jge: greater or equal (signed >=) */

loc_000D6FE1: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + eax * 4 + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D703E; /* je: equal / zero */

loc_000D6FEA: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000D6FF5u); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_000D6FF5: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D701C; /* je: equal / zero */

loc_000D6FFB: ;
    eax = ZX8(MEM8(esi + 0x68));
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFE7A118Eu);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000D700Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D7009u); } /* indirect call */
    }

loc_000D700C: ;
    MEM32(edi + 0x50) = 0;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D701Cu); RECOMP_ABI_CALL(0x000D3E60u, sub_000D3E60); /* call 0x000D3E60 */

loc_000D701C: ;
    ebx = MEM32(ebx + 0xC);
    PUSH32(esp, 0xE50BDEE1u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D702Bu); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_000D702B: ;
    ecx = MEM32(esi + 0x4C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x58) = eax;
    PUSH32(esp, 0x000D703Du); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D703D: ;
    POP32(esp, edi);

loc_000D703E: ;
    POP32(esp, ebx);

loc_000D703F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D7043: ;
    MEM8(esi + 0x66) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D704A: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x64) = LO8(ecx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D7060
 * Original: 0x000D7060 - 0x000D72C4 (612 bytes, 181 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7060: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x4C713AB3);
    ecx = 0x414150;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = 0x18447439;
    MEM32(esi + 0x58) = ebx;
    MEM8(esi + 0x5C) = LO8(ebx);
    PUSH32(esp, 0x000D7093u); RECOMP_ABI_CALL(0x00121BD0u, sub_00121BD0); /* call 0x00121BD0 */

loc_000D7093: ;
    PUSH32(esp, 0x2E958C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    MEM8(esp + 0x1C) = (CMP_NE(_fa, _fb)) ? 1 : 0; /* setne */
    PUSH32(esp, 0x000D70A7u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D70A7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = 0x82A09C0Fu;
    if (CMP_EQ(_fa, _fb)) goto loc_000D70CF; /* je: equal / zero */

loc_000D70B3: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x10E1A3BF;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = edi;
    goto loc_000D70D1;

loc_000D70CF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D70D1: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D70D9u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D70D9: ;
    PUSH32(esp, 0x2E956C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D70E6u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D70E6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7109; /* je: equal / zero */

loc_000D70ED: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x8EAD97C8u;
    MEM32(eax + 8) = 0x1D;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = edi;
    goto loc_000D710B;

loc_000D7109: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D710B: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D7113u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D7113: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7152; /* jne: not equal / not zero */

loc_000D711B: ;
    PUSH32(esp, 0x2E954C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D7128u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D7128: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7234; /* je: equal / zero */

loc_000D7133: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x946E690Eu;
    MEM32(eax + 8) = 0x1F;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = edi;
    goto loc_000D7236;

loc_000D7152: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D723E; /* jne: not equal / not zero */

loc_000D715A: ;
    _fa = (uint32_t)(MEM8(0x403384)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x403384), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D723E; /* jne: not equal / not zero */

loc_000D7166: ;
    PUSH32(esp, 0x2E952C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D7173u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D7173: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7196; /* je: equal / zero */

loc_000D717A: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x4BDC8FC4;
    MEM32(eax + 8) = 0x11;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = edi;
    goto loc_000D7198;

loc_000D7196: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D7198: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D71A0u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D71A0: ;
    PUSH32(esp, 0x2E950C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D71ADu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D71AD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D71D0; /* je: equal / zero */

loc_000D71B4: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0xD8AF9647u;
    MEM32(eax + 8) = 0x12;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = edi;
    goto loc_000D71D2;

loc_000D71D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D71D2: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D71DAu); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D71DA: ;
    PUSH32(esp, 0x660E4490);
    PUSH32(esp, 0x000D71E4u); RECOMP_ABI_CALL(0x0008ED00u, sub_0008ED00); /* call 0x0008ED00 */

loc_000D71E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D723E; /* je: equal / zero */

loc_000D71EB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D71F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D71EFu); } /* indirect call */
    }

loc_000D71F2: ;
    edx = MEM32(0x30D88C);
    ecx = MEM32(0x30D888);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D723E; /* jne: not equal / not zero */

loc_000D7204: ;
    PUSH32(esp, 0x2E94EC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D7211u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D7211: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7234; /* je: equal / zero */

loc_000D7218: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x7A7BC81B;
    MEM32(eax + 8) = 0x21;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = edi;
    goto loc_000D7236;

loc_000D7234: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D7236: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D723Eu); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D723E: ;
    PUSH32(esp, 0x2E94CC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D724Bu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D724B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D726E; /* je: equal / zero */

loc_000D7252: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0xA20CA488u;
    MEM32(eax + 8) = 0xE;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = edi;
    goto loc_000D7270;

loc_000D726E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D7270: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D7278u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D7278: ;
    PUSH32(esp, 0x2E94AC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D7285u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D7285: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D72B4; /* je: equal / zero */

loc_000D728C: ;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0xDFD9AD;
    MEM32(eax + 8) = 0x20;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = edi;
    PUSH32(esp, 0x000D72AEu); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D72AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000D72B4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D72BEu); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D72BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D72D0
 * Original: 0x000D72D0 - 0x000D738A (186 bytes, 64 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D72D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000D72D0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x80));
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x660E4490);
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = 0x8EAD97C8u;
    MEM32(esi + 0x58) = ebx;
    MEM8(esi + 0x5C) = LO8(ebx);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D7306u); RECOMP_ABI_CALL(0x0008C7E0u, sub_0008C7E0); /* call 0x0008C7E0 */

loc_000D7306: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000D7363; /* je: equal / zero */

loc_000D730D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000D7314u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D7311u); } /* indirect call */
    }

loc_000D7314: ;
    edi = eax;
    ecx = edi;
    PUSH32(esp, 0x000D731Du); RECOMP_ABI_CALL(0x00011590u, sub_00011590); /* call 0x00011590 */

loc_000D731D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7328; /* je: equal / zero */

loc_000D7321: ;
    edi = 0x5308ED5E;
    goto loc_000D7363;

loc_000D7328: ;
    ecx = edi;
    PUSH32(esp, 0x000D732Fu); RECOMP_ABI_CALL(0x000115D0u, sub_000115D0); /* call 0x000115D0 */

loc_000D732F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D733A; /* je: equal / zero */

loc_000D7333: ;
    edi = 0x90B4FDCBu;
    goto loc_000D7363;

loc_000D733A: ;
    ecx = edi;
    PUSH32(esp, 0x000D7341u); RECOMP_ABI_CALL(0x000115A0u, sub_000115A0); /* call 0x000115A0 */

loc_000D7341: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D734C; /* je: equal / zero */

loc_000D7345: ;
    edi = 0x6C365503;
    goto loc_000D7363;

loc_000D734C: ;
    ecx = edi;
    PUSH32(esp, 0x000D7353u); RECOMP_ABI_CALL(0x00015000u, sub_00015000); /* call 0x00015000 */

loc_000D7353: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x89D61C5Au;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x90B4FDCBu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x90B4FDCBu)) >> 32) & 1);
    eax = eax + 0x90B4FDCBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_000D7363: ;
    ebx = MEM32(esi);
    eax = esp + 0xC;
    PUSH32(esp, 0x2E91DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D7374u); RECOMP_ABI_CALL(0x001789B0u, sub_001789B0); /* call 0x001789B0 */

loc_000D7374: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x3C); PUSH32(esp, 0x000D737Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D737Bu); } /* indirect call */
    }

loc_000D737E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x80)) >> 32) & 1);
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D7390
 * Original: 0x000D7390 - 0x000D73AA (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7390: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000D7398u); RECOMP_ABI_CALL(0x000D5500u, sub_000D5500); /* call 0x000D5500 */

loc_000D7398: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x8D3F9F0Bu);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D73A8u); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D73A8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D73B0
 * Original: 0x000D73B0 - 0x000D7460 (176 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D73B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D73B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    PUSH32(esp, 0x2E95CC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = 0x4709B959;
    MEM32(esi + 0x58) = ebx;
    MEM8(esi + 0x5C) = LO8(ebx);
    PUSH32(esp, 0x000D73E0u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D73E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7407; /* je: equal / zero */

loc_000D73E7: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x59BCD964;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0x82A09C0Fu;
    goto loc_000D7409;

loc_000D7407: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D7409: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D7411u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D7411: ;
    PUSH32(esp, 0x2E95AC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x000D741Eu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D741E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7445; /* je: equal / zero */

loc_000D7425: ;
    MEM32(eax) = 0x2E9028;
    MEM32(eax + 4) = 0x747FA046;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = 0x82A09C0Fu;
    goto loc_000D7447;

loc_000D7445: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D7447: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D744Fu); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D744F: ;
    MEM32(esi + 0x64) = ebx;
    MEM32(esi + 0x68) = ebx;
    MEM8(esi + 0x6C) = LO8(ebx);
    MEM8(esi + 0x6D) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D7460
 * Original: 0x000D7460 - 0x000D752A (202 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7460: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2E95EC);
    PUSH32(esp, 2);
    PUSH32(esp, 0x400);
    esi = ecx;
    PUSH32(esp, 0x000D7476u); RECOMP_ABI_CALL(0x001F7230u, sub_001F7230); /* call 0x001F7230 */

loc_000D7476: ;
    edi = eax;
    eax = MEM32(0x413FC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D7483u); RECOMP_ABI_CALL(0x00121650u, sub_00121650); /* call 0x00121650 */

loc_000D7483: ;
    ebx = eax;
    eax = MEM32(esi + 0x60);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D74D2; /* je: equal / zero */

loc_000D748E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000D74B5; /* je: equal / zero */

loc_000D7491: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000D751D; /* jne: not equal / not zero */

loc_000D7498: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x983E0CC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D74A8u); RECOMP_ABI_CALL(0x000DF980u, sub_000DF980); /* call 0x000DF980 */

loc_000D74A8: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, edi);
    PUSH32(esp, 0x11AE3F85);
    goto loc_000D74ED;

loc_000D74B5: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x90AFBDE0u);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D74C5u); RECOMP_ABI_CALL(0x000DF980u, sub_000DF980); /* call 0x000DF980 */

loc_000D74C5: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C094133);
    goto loc_000D74ED;

loc_000D74D2: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x6429E61F);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D74E2u); RECOMP_ABI_CALL(0x000DF980u, sub_000DF980); /* call 0x000DF980 */

loc_000D74E2: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, edi);
    PUSH32(esp, 0x24657AB4);

loc_000D74ED: ;
    ecx = ebx;
    PUSH32(esp, 0x000D74F4u); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_000D74F4: ;
    ecx = MEM32(esi + 0x4C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D7500u); RECOMP_ABI_CALL(0x000DCA80u, sub_000DCA80); /* call 0x000DCA80 */

loc_000D7500: ;
    ecx = MEM32(esi + 0x4C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D750Du); RECOMP_ABI_CALL(0x000DF970u, sub_000DF970); /* call 0x000DF970 */

loc_000D750D: ;
    ecx = MEM32(esi + 0x4C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x961D7995u);
    PUSH32(esp, 0x000D751Du); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D751D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D7523u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_000D7523: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7530
 * Original: 0x000D7530 - 0x000D755E (46 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7530: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D755C; /* jle: less or equal (signed <=) */

loc_000D753A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000D755C; /* jg: greater (signed >) */

loc_000D753F: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D754Cu); RECOMP_ABI_CALL(0x000DF980u, sub_000DF980); /* call 0x000DF980 */

loc_000D754C: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x6DA09CED);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D755Cu); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D755C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7560
 * Original: 0x000D7560 - 0x000D75A9 (73 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7560: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x7C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D75A5; /* je: equal / zero */

loc_000D756A: ;
    eax = MEM32(esi + 0x8C);
    PUSH32(esp, eax);
    ecx = 0x3C0480;
    MEM8(esi + 0x7C) = 0;
    PUSH32(esp, 0x000D757Fu); RECOMP_ABI_CALL(0x0015EC50u, sub_0015EC50); /* call 0x0015EC50 */

loc_000D757F: ;
    ecx = MEM32(esi + 0x90);
    PUSH32(esp, ecx);
    ecx = 0x3C0480;
    PUSH32(esp, 0x000D7590u); RECOMP_ABI_CALL(0x0015EC70u, sub_0015EC70); /* call 0x0015EC70 */

loc_000D7590: ;
    edx = MEM32(esi + 0x94);
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    ecx = 0x3C0480;
    g_seh_ebp = ebp; sub_0015EC90(); return; /* tail jmp 0x0015EC90 */

loc_000D75A5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D75B0
 * Original: 0x000D75B0 - 0x000D7619 (105 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D75B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D75B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0x4322F8;
    PUSH32(esp, 0x000D75BDu); RECOMP_ABI_CALL(0x00188B20u, sub_00188B20); /* call 0x00188B20 */

loc_000D75BD: ;
    _fa = (uint32_t)(MEM8(esi + 0xB8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xB8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7617; /* jne: not equal / not zero */

loc_000D75C6: ;
    ecx = 0x4322F8;
    MEM8(esi + 0xB8) = 0;
    PUSH32(esp, 0x000D75D7u); RECOMP_ABI_CALL(0x0018BCB0u, sub_0018BCB0); /* call 0x0018BCB0 */

loc_000D75D7: ;
    eax = MEM32(esi + 0x4C);
    eax = MEM32(eax + 0x3EC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D75F9; /* jne: not equal / not zero */

loc_000D75E5: ;
    PUSH32(esp, 0xC2CBD863u);
    PUSH32(esp, 0x4249D707);
    PUSH32(esp, 0x000D75F4u); RECOMP_ABI_CALL(0x0017A0A0u, sub_0017A0A0); /* call 0x0017A0A0 */

loc_000D75F4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D75F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7617; /* jne: not equal / not zero */

loc_000D75FE: ;
    PUSH32(esp, 0xC2CBD863u);
    PUSH32(esp, 0x4249D707);
    PUSH32(esp, 0x000D760Du); RECOMP_ABI_CALL(0x0017A0A0u, sub_0017A0A0); /* call 0x0017A0A0 */

loc_000D760D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D7614u); RECOMP_ABI_CALL(0x00179430u, sub_00179430); /* call 0x00179430 */

loc_000D7614: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D7617: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7620
 * Original: 0x000D7620 - 0x000D7660 (64 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7620: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0x4322F8;
    PUSH32(esp, 0x000D762Du); RECOMP_ABI_CALL(0x00188670u, sub_00188670); /* call 0x00188670 */

loc_000D762D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D765C; /* jne: not equal / not zero */

loc_000D7631: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(MEM32(ecx + 0x3EC4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x3EC4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7655; /* jne: not equal / not zero */

loc_000D763D: ;
    eax = MEM32(esi + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D765C; /* je: equal / zero */

loc_000D7644: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D764Au); RECOMP_ABI_CALL(0x000D3E60u, sub_000D3E60); /* call 0x000D3E60 */

loc_000D764A: ;
    MEM32(esi + 0x64) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D7655: ;
    ecx = esi;
    PUSH32(esp, 0x000D765Cu); RECOMP_ABI_CALL(0x000D54B0u, sub_000D54B0); /* call 0x000D54B0 */

loc_000D765C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D7660
 * Original: 0x000D7660 - 0x000D768D (45 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7660: ;
    eax = MEM32(ecx + 0x88);
    MEM8(ecx + 0x8C) = 0;
    ecx = MEM32(ecx + 0x4C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7682; /* jne: not equal / not zero */

loc_000D7677: ;
    PUSH32(esp, 0x3680C473);
    PUSH32(esp, 0x000D7681u); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D7681: ;
    esp += 4; return; /* ret */

loc_000D7682: ;
    PUSH32(esp, 0x9630DC12u);
    PUSH32(esp, 0x000D768Cu); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D768C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7690
 * Original: 0x000D7690 - 0x000D771B (139 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7690: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = esp + 0x114;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D76AEu); RECOMP_ABI_CALL(0x002380E4u, sub_002380E4); /* call 0x002380E4 */

loc_000D76AE: ;
    esi = MEM32(esp + 0x114);
    ecx = MEM32(esi + 0x4C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D76C8u); RECOMP_ABI_CALL(0x000DCA80u, sub_000DCA80); /* call 0x000DCA80 */

loc_000D76C8: ;
    ecx = MEM32(esp + 0x10C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D76DBu); RECOMP_ABI_CALL(0x000DF970u, sub_000DF970); /* call 0x000DF970 */

loc_000D76DB: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x961D7995u);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D76EBu); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D76EB: ;
    SET_LO8(eax, MEM8(esi + 0x8C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esi + 0x8D) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000D7713; /* je: equal / zero */

loc_000D76FC: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x677F164);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D770Cu); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D770C: ;
    MEM8(esi + 0x8E) = 1;

loc_000D7713: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D7720
 * Original: 0x000D7720 - 0x000D77B5 (149 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7720: ;
    eax = MEM32(0x413FC0);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000D7734u); RECOMP_ABI_CALL(0x00121650u, sub_00121650); /* call 0x00121650 */

loc_000D7734: ;
    edx = MEM32(esp + 0x10C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x400);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000D7750u); RECOMP_ABI_CALL(0x001211B0u, sub_001211B0); /* call 0x001211B0 */

loc_000D7750: ;
    ecx = MEM32(esi + 0x4C);
    eax = esp + 4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D7760u); RECOMP_ABI_CALL(0x000DCA80u, sub_000DCA80); /* call 0x000DCA80 */

loc_000D7760: ;
    ecx = MEM32(esp + 0x10C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D7773u); RECOMP_ABI_CALL(0x000DF970u, sub_000DF970); /* call 0x000DF970 */

loc_000D7773: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x961D7995u);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D7783u); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D7783: ;
    SET_LO8(eax, MEM8(esi + 0x8C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esi + 0x8D) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000D77AB; /* je: equal / zero */

loc_000D7794: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x677F164);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D77A4u); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D77A4: ;
    MEM8(esi + 0x8E) = 1;

loc_000D77AB: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D77C0
 * Original: 0x000D77C0 - 0x000D77FC (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D77C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D77C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x6DA09CED);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D77D3u); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D77D3: ;
    _fa = (uint32_t)(MEM8(esi + 0x8E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x8E), 1 (8-bit) */
    MEM8(esi + 0x8D) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000D77FA; /* jne: not equal / not zero */

loc_000D77E3: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x7CB348F9);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D77F3u); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D77F3: ;
    MEM8(esi + 0x8E) = 0;

loc_000D77FA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7800
 * Original: 0x000D7800 - 0x000D780E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7800(void)
{

loc_000D7800: ;
    eax = MEM32(ecx + 0x7C);
    edx = MEM32(eax + 0x28);
    eax = MEM32(ecx + edx * 4 + 0x90);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7810
 * Original: 0x000D7810 - 0x000D7864 (84 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7810: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x242348);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2E9610;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x000D7844u); RECOMP_ABI_CALL(0x001F66F0u, sub_001F66F0); /* call 0x001F66F0 */

loc_000D7844: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = 0;
    MEM32(esi) = 0x2E9038;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D7870
 * Original: 0x000D7870 - 0x000D7874 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7870(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000D7870: ;
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D7880
 * Original: 0x000D7880 - 0x000D788E (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7880(void)
{

loc_000D7880: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D7890
 * Original: 0x000D7890 - 0x000D7894 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7890(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000D7890: ;
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D78A0
 * Original: 0x000D78A0 - 0x000D78AE (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D78A0(void)
{

loc_000D78A0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D78B0
 * Original: 0x000D78B0 - 0x000D78B4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D78B0(void)
{

loc_000D78B0: ;
    eax = MEM32(ecx + 0x38);
    esp += 4; return; /* ret */

}

/**
 * sub_000D78C0
 * Original: 0x000D78C0 - 0x000D78CA (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D78C0(void)
{

loc_000D78C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x38) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D78D0
 * Original: 0x000D78D0 - 0x000D78DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D78D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D78D0: ;
    MEM32(ecx) = 0x2E9698;
    g_seh_ebp = ebp; sub_000D7810(); return; /* tail jmp 0x000D7810 */

}

/**
 * sub_000D78E0
 * Original: 0x000D78E0 - 0x000D790B (43 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D78E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D78E0: ;
    edx = MEM32(ecx + 0x3C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D78EB; /* jge: greater or equal (signed >=) */

loc_000D78E8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D78EB: ;
    eax = MEM32(ecx + 0x2C);
    PUSH32(esp, esi);
    esi = eax + -1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_000D78FE; /* jl: less (signed <) */

loc_000D78F7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x2C) = eax;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000D78FE: ;
    _fa = (uint32_t)(MEM8(ecx + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x28), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D7908; /* je: equal / zero */

loc_000D7904: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x2C) = edx;

loc_000D7908: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7910
 * Original: 0x000D7910 - 0x000D7939 (41 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7910: ;
    edx = MEM32(ecx + 0x3C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D791B; /* jge: greater or equal (signed >=) */

loc_000D7918: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000D791B: ;
    eax = MEM32(ecx + 0x2C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D7929; /* jge: greater or equal (signed >=) */

loc_000D7923: ;
    MEM32(ecx + 0x2C) = eax;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000D7929: ;
    _fa = (uint32_t)(MEM8(ecx + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x28), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D7936; /* je: equal / zero */

loc_000D792F: ;
    MEM32(ecx + 0x2C) = 0;

loc_000D7936: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7940
 * Original: 0x000D7940 - 0x000D7993 (83 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7940: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x242348);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x2E9720;
    eax = MEM32(0x300E80);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x000D797Au); RECOMP_ABI_CALL(0x001FEC30u, sub_001FEC30); /* call 0x001FEC30 */

loc_000D797A: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x2E9038;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D79A0
 * Original: 0x000D79A0 - 0x000D79C5 (37 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D79A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D79A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    PUSH32(esp, eax);
    MEM32(esi) = edi;
    PUSH32(esp, 0x000D79BBu); RECOMP_ABI_CALL(0x000D4910u, sub_000D4910); /* call 0x000D4910 */

loc_000D79BB: ;
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D79D0
 * Original: 0x000D79D0 - 0x000D79F5 (37 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D79D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D79D0: ;
    _fa = (uint32_t)(MEM32(ecx + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x38), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D79F2; /* jl: less (signed <) */

loc_000D79D6: ;
    eax = MEM32(ecx + 0x28);
    edx = eax + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D79F2; /* jl: less (signed <) */

loc_000D79E0: ;
    edx = MEM32(ecx + 0x40);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ecx + 0x28) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_000D79EF; /* jae: above or equal (unsigned >=) */

loc_000D79EB: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x40) = edx;

loc_000D79EF: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000D79F2: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D7A00
 * Original: 0x000D7A00 - 0x000D7A2B (43 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7A00: ;
    edx = MEM32(ecx + 0x38);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D7A28; /* jl: less (signed <) */

loc_000D7A08: ;
    eax = MEM32(ecx + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D7A28; /* jge: greater or equal (signed >=) */

loc_000D7A10: ;
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x3C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ecx + 0x28) = eax;
    POP32(esp, esi);
    if (CMP_B(_fa, _fb)) goto loc_000D7A25; /* jb: below (unsigned <) */

loc_000D7A21: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x40) = edx;

loc_000D7A25: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000D7A28: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D7A30
 * Original: 0x000D7A30 - 0x000D7A41 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7A30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7A30: ;
    ecx = MEM32(ecx + 0x4C);
    PUSH32(esp, 0x1C436E88);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D7A40u); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D7A40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7A50
 * Original: 0x000D7A50 - 0x000D7A9F (79 bytes, 36 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7A50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    MEM32(ebx) = 0;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D7A68: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D7A6Eu); RECOMP_ABI_CALL(0x0015EFC0u, sub_0015EFC0); /* call 0x0015EFC0 */

loc_000D7A6E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7A85; /* je: equal / zero */

loc_000D7A75: ;
    _fa = (uint32_t)(MEM32(eax + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x64), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7A85; /* jne: not equal / not zero */

loc_000D7A7A: ;
    _fa = (uint32_t)(MEM32(eax + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x74), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7A85; /* jne: not equal / not zero */

loc_000D7A7F: ;
    _fa = (uint32_t)(MEM32(eax + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x70), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7A94; /* je: equal / zero */

loc_000D7A85: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000D7A68; /* jb: below (unsigned <) */

loc_000D7A8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_000D7A94: ;
    POP32(esp, edi);
    MEM32(ebx) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000D7AA0
 * Original: 0x000D7AA0 - 0x000D7B07 (103 bytes, 45 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7AA0: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    MEM32(ebx) = 0;
    if (CMP_B(_fa, _fb)) goto loc_000D7ABA; /* jb: below (unsigned <) */

loc_000D7AB4: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

loc_000D7ABA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_000D7AF3; /* jae: above or equal (unsigned >=) */

loc_000D7AC5: ;
    edi = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x18);
    /* nop */

loc_000D7AD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D7AD6u); RECOMP_ABI_CALL(0x0015EFC0u, sub_0015EFC0); /* call 0x0015EFC0 */

loc_000D7AD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7AED; /* je: equal / zero */

loc_000D7ADD: ;
    _fa = (uint32_t)(MEM32(eax + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x64), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7AED; /* jne: not equal / not zero */

loc_000D7AE2: ;
    _fa = (uint32_t)(MEM32(eax + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x74), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7AED; /* jne: not equal / not zero */

loc_000D7AE7: ;
    _fa = (uint32_t)(MEM32(eax + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x70), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7AFC; /* je: equal / zero */

loc_000D7AED: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000D7AD0; /* jb: below (unsigned <) */

loc_000D7AF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

loc_000D7AFC: ;
    POP32(esp, edi);
    MEM32(ebx) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000D7B10
 * Original: 0x000D7B10 - 0x000D7B76 (102 bytes, 41 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7B10: ;
    eax = MEM32(esp + 0x14);
    MEM32(eax) = 0;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D7B27; /* ja: above (unsigned >) */

loc_000D7B22: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 24; return; /* ret 20 */

loc_000D7B27: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax + -1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_000D7B60; /* jl: less (signed <) */

loc_000D7B31: ;
    edi = MEM32(esp + 0x18);
    ebp = MEM32(esp + 0x14);
    /* nop */

loc_000D7B40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D7B46u); RECOMP_ABI_CALL(0x0015EFC0u, sub_0015EFC0); /* call 0x0015EFC0 */

loc_000D7B46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7B5D; /* je: equal / zero */

loc_000D7B4D: ;
    _fa = (uint32_t)(MEM32(eax + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x64), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7B5D; /* jne: not equal / not zero */

loc_000D7B52: ;
    _fa = (uint32_t)(MEM32(eax + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x74), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7B5D; /* jne: not equal / not zero */

loc_000D7B57: ;
    _fa = (uint32_t)(MEM32(eax + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x70), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7B68; /* je: equal / zero */

loc_000D7B5D: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_000D7B40; /* jns: not sign (positive) */

loc_000D7B60: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_000D7B68: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    MEM32(ecx) = esi;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000D7B24
 * Original: 0x000D7B24 - 0x000D7B76 (82 bytes, 35 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7B24(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7B24: ;
    esp += 24; return; /* ret 20 */

    edi = MEM32(esp + 0x18);
    ebp = MEM32(esp + 0x14);
    /* nop */

loc_000D7B40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D7B46u); RECOMP_ABI_CALL(0x0015EFC0u, sub_0015EFC0); /* call 0x0015EFC0 */

loc_000D7B46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7B5D; /* je: equal / zero */

loc_000D7B4D: ;
    _fa = (uint32_t)(MEM32(eax + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x64), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7B5D; /* jne: not equal / not zero */

loc_000D7B52: ;
    _fa = (uint32_t)(MEM32(eax + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x74), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7B5D; /* jne: not equal / not zero */

loc_000D7B57: ;
    _fa = (uint32_t)(MEM32(eax + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x70), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7B68; /* je: equal / zero */

loc_000D7B5D: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_000D7B40; /* jns: not sign (positive) */

loc_000D7B60: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_000D7B68: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    MEM32(ecx) = esi;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000D7B80
 * Original: 0x000D7B80 - 0x000D7BA5 (37 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7B80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7B80: ;
    xmm0 = XMM_SCALAR(MEMF(0x2DC08C)); /* movss */
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 0x4C);
    PUSH32(esp, 0x15C3B035);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D7B9Du); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D7B9D: ;
    MEM8(0x413FE6) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7BB0
 * Original: 0x000D7BB0 - 0x000D7BC8 (24 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7BB0: ;
    MEM8(0x413FE6) = 0;
    ecx = MEM32(ecx + 0x4C);
    PUSH32(esp, 0x44CBC70D);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D7BC7u); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D7BC7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7BD0
 * Original: 0x000D7BD0 - 0x000D7C0B (59 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000D7BD0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x60)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D7BEB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_000D7BDE: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    goto loc_000D7BF2;

loc_000D7BEB: ;
    MEM8(0x413FB4) = 1;

loc_000D7BF2: ;
    ecx = MEM32(0x413F90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7C08; /* je: equal / zero */

loc_000D7BFC: ;
    eax = MEM32(ecx);
    MEM32(ecx + 0x1C) = 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000D7C08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D7C05u); } /* indirect call */
    }

loc_000D7C08: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D7C10
 * Original: 0x000D7C10 - 0x000D7C43 (51 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7C10: ;
    eax = MEM32(ecx + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7C42; /* je: equal / zero */

loc_000D7C19: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_000D7C20;

    /* nop */

loc_000D7C20: ;
    esi = MEM32(ecx + 0xC);
    eax = MEM32(ecx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = esi;
    esi = MEM32(eax);
    edi = MEM32(eax + 4);
    MEM32(eax + 8) = edx;
    MEM32(esi + 4) = edi;
    esi = MEM32(eax + 4);
    eax = MEM32(eax);
    MEM32(esi) = eax;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7C20; /* jne: not equal / not zero */

loc_000D7C40: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000D7C42: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7C50
 * Original: 0x000D7C50 - 0x000D7D02 (178 bytes, 70 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7C50: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3EB8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000D7C5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D7C5Cu); } /* indirect call */
    }

loc_000D7C5F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7C67; /* jne: not equal / not zero */

loc_000D7C65: ;
    edi = MEM32(esi);

loc_000D7C67: ;
    SET_LO8(eax, MEM8(esi + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7CE8; /* jne: not equal / not zero */

loc_000D7C6E: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7CB1; /* je: equal / zero */

loc_000D7C74: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D7C7Eu); RECOMP_ABI_CALL(0x000D3E10u, sub_000D3E10); /* call 0x000D3E10 */

loc_000D7C7E: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7CB6; /* je: equal / zero */

loc_000D7C84: ;
    edi = esi + 0x1B38;
    ecx = edi;
    PUSH32(esp, 0x000D7C91u); RECOMP_ABI_CALL(0x0010D8B0u, sub_0010D8B0); /* call 0x0010D8B0 */

loc_000D7C91: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D7C9Bu); RECOMP_ABI_CALL(0x0010D240u, sub_0010D240); /* call 0x0010D240 */

loc_000D7C9B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000D7CA6u); RECOMP_ABI_CALL(0x0010DF60u, sub_0010DF60); /* call 0x0010DF60 */

loc_000D7CA6: ;
    MEM32(esi) = ebp;
    MEM8(esi + 6) = 1;
    MEM8(esi + 5) = 0;
    POP32(esp, ebp);

loc_000D7CB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D7CB6: ;
    ebp = esi + 0x1B38;
    ecx = ebp;
    PUSH32(esp, 0x000D7CC3u); RECOMP_ABI_CALL(0x0010D8B0u, sub_0010D8B0); /* call 0x0010D8B0 */

loc_000D7CC3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D7CCDu); RECOMP_ABI_CALL(0x0010D240u, sub_0010D240); /* call 0x0010D240 */

loc_000D7CCD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000D7CD8u); RECOMP_ABI_CALL(0x0010DF60u, sub_0010DF60); /* call 0x0010DF60 */

loc_000D7CD8: ;
    POP32(esp, ebp);
    MEM32(esi) = edi;
    POP32(esp, edi);
    MEM8(esi + 6) = 1;
    MEM8(esi + 5) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000D7CE8: ;
    SET_LO8(eax, MEM8(esi + 0x1BB8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7CF9; /* je: equal / zero */

loc_000D7CF2: ;
    SET_LO8(eax, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7CB1; /* je: equal / zero */

loc_000D7CF9: ;
    POP32(esp, edi);
    MEM8(esi + 6) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D7D10
 * Original: 0x000D7D10 - 0x000D7EF8 (488 bytes, 123 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000D7D10: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x3EC8); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* comiss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEMF(esi + 0x3EC8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D7D3E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC08C)) */

loc_000D7D38: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D7D3Eu); RECOMP_ABI_CALL(0x000D51F0u, sub_000D51F0); /* call 0x000D51F0 */

loc_000D7D3E: ;
    SET_LO8(ebx, MEM8(0x413FBC));
    PUSH32(esp, 0x000D7D49u); RECOMP_ABI_CALL(0x00178950u, sub_00178950); /* call 0x00178950 */

loc_000D7D49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96E4CADCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x96E4CADCu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7DB9; /* je: equal / zero */

loc_000D7D50: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(eax, MEM8(esi + 0x3ECC));
    if (CMP_EQ(_fa, _fb)) goto loc_000D7D90; /* je: equal / zero */

loc_000D7D5A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7DB9; /* jne: not equal / not zero */

loc_000D7D5E: ;
    xmm0 = XMM_SCALAR(MEMF(0x4140D4)); /* movss */
    PUSH32(esp, 0);
    ecx = 0x4140CC;
    MEMF(esi + 0x3ED0) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000D7D7Au); RECOMP_ABI_CALL(0x001FFBB0u, sub_001FFBB0); /* call 0x001FFBB0 */

loc_000D7D7A: ;
    PUSH32(esp, 0x9D7028A0u);
    ecx = esi + 0x10;
    MEM8(esi + 0x3ECC) = 1;
    PUSH32(esp, 0x000D7D8Eu); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D7D8E: ;
    goto loc_000D7DB9;

loc_000D7D90: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7DB9; /* je: equal / zero */

loc_000D7D94: ;
    PUSH32(esp, 0x5DEBF7FE);
    ecx = esi + 0x10;
    PUSH32(esp, 0x000D7DA1u); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D7DA1: ;
    eax = MEM32(esi + 0x3ED0);
    PUSH32(esp, eax);
    ecx = 0x4140CC;
    MEM8(esi + 0x3ECC) = 0;
    PUSH32(esp, 0x000D7DB9u); RECOMP_ABI_CALL(0x001FFBB0u, sub_001FFBB0); /* call 0x001FFBB0 */

loc_000D7DB9: ;
    eax = MEM32(esi + 0x3EC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7DDB; /* jne: not equal / not zero */

loc_000D7DC3: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000D7DCBu); RECOMP_ABI_CALL(0x000D7C50u, sub_000D7C50); /* call 0x000D7C50 */

loc_000D7DCB: ;
    edx = MEM32(esi + 0x1B38);
    ecx = esi + 0x1B38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000D7DDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D7DD8u); } /* indirect call */
    }

loc_000D7DDB: ;
    PUSH32(esp, edi);
    ecx = esi + 0x10;
    PUSH32(esp, 0x000D7DE4u); RECOMP_ABI_CALL(0x000DDCE0u, sub_000DDCE0); /* call 0x000DDCE0 */

loc_000D7DE4: ;
    PUSH32(esp, edi);
    ecx = 0x4322F8;
    PUSH32(esp, 0x000D7DEFu); RECOMP_ABI_CALL(0x001893B0u, sub_001893B0); /* call 0x001893B0 */

loc_000D7DEF: ;
    SET_LO8(eax, MEM8(0x30EBA5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7EE6; /* je: equal / zero */

loc_000D7DFC: ;
    SET_LO8(eax, MEM8(0x413FE6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7EE6; /* je: equal / zero */

loc_000D7E09: ;
    xmm0 = XMM_SCALAR(MEMF(0x413FE8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC098); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D7EE6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC098)) */

loc_000D7E1E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7EE6; /* jne: not equal / not zero */

loc_000D7E26: ;
    ecx = 0x4322F8;
    PUSH32(esp, 0x000D7E30u); RECOMP_ABI_CALL(0x00188670u, sub_00188670); /* call 0x00188670 */

loc_000D7E30: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7EE6; /* jne: not equal / not zero */

loc_000D7E38: ;
    xmm0 = XMM_SCALAR(MEMF(0x413FEC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x413FE8); /* comiss */
    MEMF(0x413FEC) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D7E84; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x413FE8)) */

loc_000D7E57: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xAEF39CCFu);
    MEM32(0x42BE30) = 0xF3B3485Bu;
    MEM32(0x42BE60) = 0x59C00449;
    MEM32(0x42BE64) = 0x39D462F;
    PUSH32(esp, 0x000D7E81u); RECOMP_ABI_CALL(0x0017A0A0u, sub_0017A0A0); /* call 0x0017A0A0 */

loc_000D7E81: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D7E84: ;
    ecx = MEM32(0x413F90);
    eax = MEM32(ecx + 0xC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7EDB; /* jne: not equal / not zero */

loc_000D7E94: ;
    eax = MEM32(ecx + 0xC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7EDB; /* jne: not equal / not zero */

loc_000D7E9E: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D7EDE; /* jp: parity */

loc_000D7EAF: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D7EDE; /* jp: parity */

loc_000D7EBD: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000D7EDE; /* jp: parity */

loc_000D7ECB: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000D7EE6; /* jnp: not parity */

loc_000D7ED9: ;
    goto loc_000D7EDE;

loc_000D7EDB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000D7EDE: ;
    MEMF(0x413FEC) = xmm0.f[0]; /* movss */

loc_000D7EE6: ;
    ecx = MEM32(esi + 0x3EB8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000D7EF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D7EEFu); } /* indirect call */
    }

loc_000D7EF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D7F00
 * Original: 0x000D7F00 - 0x000D8027 (295 bytes, 107 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7F00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000D7F7C; /* jne: not equal / not zero */

loc_000D7F12: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D7F7C; /* jle: less or equal (signed <=) */

loc_000D7F19: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7F4C; /* jne: not equal / not zero */

loc_000D7F1D: ;
    eax = MEM32(esi + 0x48);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000D7F21: ;
    PUSH32(esp, 0x8A52018Cu);
    PUSH32(esp, 0);
    MEM32(esi + 0x48) = eax;
    PUSH32(esp, 0x000D7F30u); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_000D7F30: ;
    MEM32(esi + 0x58) = eax;
    eax = MEM32(esi + 0x44);
    ecx = eax + -1;
    eax = MEM32(esi + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D7F75; /* jle: less or equal (signed <=) */

loc_000D7F43: ;
    MEM32(esi + 0x48) = 0;
    goto loc_000D7F7C;

loc_000D7F4C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7F57; /* jne: not equal / not zero */

loc_000D7F51: ;
    eax = MEM32(esi + 0x48);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000D7F21;

loc_000D7F57: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7F61; /* je: equal / zero */

loc_000D7F5C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7F7C; /* jne: not equal / not zero */

loc_000D7F61: ;
    PUSH32(esp, 0xFB3B6989u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D7F6Du); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_000D7F6D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x58) = eax;
    goto loc_000D7F7C;

loc_000D7F75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D7F7C; /* jge: greater or equal (signed >=) */

loc_000D7F79: ;
    MEM32(esi + 0x48) = ecx;

loc_000D7F7C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8010; /* jne: not equal / not zero */

loc_000D7F85: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8021; /* jne: not equal / not zero */

loc_000D7F8E: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x2C422E5E);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D7F9Eu); RECOMP_ABI_CALL(0x000E0EB0u, sub_000E0EB0); /* call 0x000E0EB0 */

loc_000D7F9E: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x44) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D7FAC; /* jge: greater or equal (signed >=) */

loc_000D7FA6: ;
    edi = MEM32(esi + ecx * 4 + 4);
    goto loc_000D7FAE;

loc_000D7FAC: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D7FAE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8021; /* je: equal / zero */

loc_000D7FB2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8021; /* je: equal / zero */

loc_000D7FB6: ;
    ecx = MEM32(esi + ecx * 4 + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC9075904u);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000D7FC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D7FC1u); } /* indirect call */
    }

loc_000D7FC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7954FE35) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7954FE35 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D801A; /* je: equal / zero */

loc_000D7FCA: ;
    ecx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x000D7FD6u); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_000D7FD6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7FE6; /* je: equal / zero */

loc_000D7FDA: ;
    MEM32(eax + 0x50) = esi;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D7FE6u); RECOMP_ABI_CALL(0x000D3E60u, sub_000D3E60); /* call 0x000D3E60 */

loc_000D7FE6: ;
    edx = MEM32(esi);
    edi = MEM32(edi + 0xC);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000D7FF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D7FEDu); } /* indirect call */
    }

loc_000D7FF0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D7FF8u); RECOMP_ABI_CALL(0x001FFA60u, sub_001FFA60); /* call 0x001FFA60 */

loc_000D7FF8: ;
    ecx = MEM32(esi + 0x4C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x58) = eax;
    PUSH32(esp, 0x000D800Au); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D800A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D8010: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8021; /* jne: not equal / not zero */

loc_000D8015: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8021; /* jne: not equal / not zero */

loc_000D801A: ;
    ecx = esi;
    PUSH32(esp, 0x000D8021u); RECOMP_ABI_CALL(0x000D54B0u, sub_000D54B0); /* call 0x000D54B0 */

loc_000D8021: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D8030
 * Original: 0x000D8030 - 0x000D80BF (143 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8030: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000D8044u); RECOMP_ABI_CALL(0x000D7F00u, sub_000D7F00); /* call 0x000D7F00 */

loc_000D8044: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D80B9; /* jne: not equal / not zero */

loc_000D8049: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D80B9; /* jne: not equal / not zero */

loc_000D804E: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000D8058u); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_000D8058: ;
    edi = eax;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(esi + eax * 4 + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC9075904u);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D806Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D8068u); } /* indirect call */
    }

loc_000D806A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x73836C52) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x73836C52 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D80B2; /* je: equal / zero */

loc_000D8071: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBBABAFF5u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBBABAFF5u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D80A5; /* je: equal / zero */

loc_000D8078: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD8AF9647u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD8AF9647u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D80B9; /* jne: not equal / not zero */

loc_000D807F: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x000D8089u); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_000D8089: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D80B9; /* je: equal / zero */

loc_000D808D: ;
    ecx = MEM32(ecx + 0x3EB8);
    MEM32(eax + 0x64) = ecx;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D809Fu); RECOMP_ABI_CALL(0x000D3E60u, sub_000D3E60); /* call 0x000D3E60 */

loc_000D809F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D80A5: ;
    MEM32(edi + 0x60) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D80B2: ;
    MEM32(edi + 0x60) = 0;

loc_000D80B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D80C0
 * Original: 0x000D80C0 - 0x000D81F5 (309 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D80C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D80C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    PUSH32(esp, 0x2E97C4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x30);
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = 0x3B162B24;
    MEM32(esi + 0x58) = ebx;
    MEM8(esi + 0x5C) = LO8(ebx);
    PUSH32(esp, 0x000D80F0u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D80F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D812F; /* je: equal / zero */

loc_000D80F7: ;
    PUSH32(esp, 0x8F5B2C09u);
    PUSH32(esp, 0x48F33F5D);
    PUSH32(esp, 0xF93E255Du);
    PUSH32(esp, 0x2D2FB3D5);
    PUSH32(esp, 0xD78758A5u);
    PUSH32(esp, 0xB71DA972u);
    PUSH32(esp, 0x4FD3CD39);
    PUSH32(esp, 0xB5D9D774u);
    PUSH32(esp, 6);
    PUSH32(esp, 0xE8AFC378u);
    ecx = eax;
    PUSH32(esp, 0x000D812Du); RECOMP_ABI_CALL(0x000D6730u, sub_000D6730); /* call 0x000D6730 */

loc_000D812D: ;
    goto loc_000D8131;

loc_000D812F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D8131: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D8139u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D8139: ;
    PUSH32(esp, 0x2E97A4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x000D8146u); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D8146: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8185; /* je: equal / zero */

loc_000D814D: ;
    PUSH32(esp, 0x1DD2B2DE);
    PUSH32(esp, 0x2557E6DA);
    PUSH32(esp, 0xEFC928DAu);
    PUSH32(esp, 0x2F327902);
    PUSH32(esp, 0x992317F2u);
    PUSH32(esp, 0xEB7BEE57u);
    PUSH32(esp, 0xF174401);
    PUSH32(esp, 0x707E723D);
    PUSH32(esp, 6);
    PUSH32(esp, 0x4D4F8E69);
    ecx = eax;
    PUSH32(esp, 0x000D8183u); RECOMP_ABI_CALL(0x000D6730u, sub_000D6730); /* call 0x000D6730 */

loc_000D8183: ;
    goto loc_000D8187;

loc_000D8185: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D8187: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D818Fu); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D818F: ;
    PUSH32(esp, 0x2E9784);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x000D819Cu); RECOMP_ABI_CALL(0x001F71E0u, sub_001F71E0); /* call 0x001F71E0 */

loc_000D819C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D81DB; /* je: equal / zero */

loc_000D81A3: ;
    PUSH32(esp, 0x95C83C24u);
    PUSH32(esp, 0x94901300u);
    PUSH32(esp, 0x5F015500);
    PUSH32(esp, 0x43C359B8);
    PUSH32(esp, 0xB670B328u);
    PUSH32(esp, 0xAE70B871u);
    PUSH32(esp, 0x8818EAD7u);
    PUSH32(esp, 0xC3C67997u);
    PUSH32(esp, 6);
    PUSH32(esp, 0x698B84D3);
    ecx = eax;
    PUSH32(esp, 0x000D81D9u); RECOMP_ABI_CALL(0x000D6730u, sub_000D6730); /* call 0x000D6730 */

loc_000D81D9: ;
    goto loc_000D81DD;

loc_000D81DB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D81DD: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000D81E5u); RECOMP_ABI_CALL(0x000D41B0u, sub_000D41B0); /* call 0x000D41B0 */

loc_000D81E5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(esi + 0x70) = LO8(ebx);
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D8200
 * Original: 0x000D8200 - 0x000D823B (59 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D8200: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    edx = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_000D822E; /* jne: not equal / not zero */

loc_000D820D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D822E; /* jne: not equal / not zero */

loc_000D8212: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x60));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000D822E; /* jne: not equal / not zero */

loc_000D821B: ;
    ecx = MEM32(ecx + 0x4C);
    PUSH32(esp, 0x4E52F864);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D822Bu); RECOMP_ABI_CALL(0x000E0ED0u, sub_000E0ED0); /* call 0x000E0ED0 */

loc_000D822B: ;
    esp += 12; return; /* ret 8 */

loc_000D822E: ;
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000D7F00(); return; /* tail jmp 0x000D7F00 */

}

/**
 * sub_000D8240
 * Original: 0x000D8240 - 0x000D8290 (80 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8240: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000D8254u); RECOMP_ABI_CALL(0x000D7F00u, sub_000D7F00); /* call 0x000D7F00 */

loc_000D8254: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x2C422E5E);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D8264u); RECOMP_ABI_CALL(0x000E0EB0u, sub_000E0EB0); /* call 0x000E0EB0 */

loc_000D8264: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D828A; /* je: equal / zero */

loc_000D8268: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D828A; /* jne: not equal / not zero */

loc_000D826D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D828A; /* jne: not equal / not zero */

loc_000D8272: ;
    eax = MEM32(esi + 0x48);
    MEM32(esi + 0x64) = eax;
    eax = MEM32(esi + eax * 4 + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC9075904u);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D8287u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D8285u); } /* indirect call */
    }

loc_000D8287: ;
    MEM32(esi + 0x60) = eax;

loc_000D828A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D8290
 * Original: 0x000D8290 - 0x000D82FA (106 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8290: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000D82A4u); RECOMP_ABI_CALL(0x000D7F00u, sub_000D7F00); /* call 0x000D7F00 */

loc_000D82A4: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x2C422E5E);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D82B4u); RECOMP_ABI_CALL(0x000E0EB0u, sub_000E0EB0); /* call 0x000E0EB0 */

loc_000D82B4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D82F4; /* je: equal / zero */

loc_000D82B8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D82F4; /* jne: not equal / not zero */

loc_000D82BD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D82F4; /* jne: not equal / not zero */

loc_000D82C2: ;
    eax = MEM32(esi + 0x48);
    MEM32(esi + 0x64) = eax;
    eax = MEM32(esi + eax * 4 + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC9075904u);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D82D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D82D5u); } /* indirect call */
    }

loc_000D82D7: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 8);
    MEM32(esi + 0x60) = eax;
    PUSH32(esp, 0x000D82E4u); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_000D82E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D82F4; /* je: equal / zero */

loc_000D82E8: ;
    MEM32(eax + 0x64) = esi;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D82F4u); RECOMP_ABI_CALL(0x000D3E60u, sub_000D3E60); /* call 0x000D3E60 */

loc_000D82F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D8300
 * Original: 0x000D8300 - 0x000D836F (111 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8300: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000D8314u); RECOMP_ABI_CALL(0x000D7F00u, sub_000D7F00); /* call 0x000D7F00 */

loc_000D8314: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x2C422E5E);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D8324u); RECOMP_ABI_CALL(0x000E0EB0u, sub_000E0EB0); /* call 0x000E0EB0 */

loc_000D8324: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8369; /* je: equal / zero */

loc_000D8328: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8369; /* jne: not equal / not zero */

loc_000D832D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8369; /* jne: not equal / not zero */

loc_000D8332: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(esi + eax * 4 + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC9075904u);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D8342u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D8340u); } /* indirect call */
    }

loc_000D8342: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24229818) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24229818 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8369; /* jne: not equal / not zero */

loc_000D8349: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000D8353u); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_000D8353: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8369; /* je: equal / zero */

loc_000D8357: ;
    ecx = MEM32(ecx + 0x3EB8);
    MEM32(eax + 0x64) = ecx;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D8369u); RECOMP_ABI_CALL(0x000D3E60u, sub_000D3E60); /* call 0x000D3E60 */

loc_000D8369: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D8370
 * Original: 0x000D8370 - 0x000D83F1 (129 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000D8370: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x460)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2DC08C); /* comiss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D83B6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2DC08C)) */

loc_000D838E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D8395u); RECOMP_ABI_CALL(0x000D7F00u, sub_000D7F00); /* call 0x000D7F00 */

loc_000D8395: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D83B6; /* jne: not equal / not zero */

loc_000D839A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D83A7; /* jne: not equal / not zero */

loc_000D839F: ;
    MEM32(esi + 0x45C) = ebx;
    goto loc_000D83B6;

loc_000D83A7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D83B6; /* jne: not equal / not zero */

loc_000D83AC: ;
    MEM32(esi + 0x45C) = 0;

loc_000D83B6: ;
    _fa = (uint32_t)(MEM32(esi + 0x458)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x458), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D83EB; /* jne: not equal / not zero */

loc_000D83BF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D83EB; /* jne: not equal / not zero */

loc_000D83C4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D83EB; /* jne: not equal / not zero */

loc_000D83C9: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D83D3u); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_000D83D3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D83D9u); RECOMP_ABI_CALL(0x000D3E60u, sub_000D3E60); /* call 0x000D3E60 */

loc_000D83D9: ;
    PUSH32(esp, 0xC2CBD863u);
    PUSH32(esp, 0x59C00449);
    PUSH32(esp, 0x000D83E8u); RECOMP_ABI_CALL(0x0017A0A0u, sub_0017A0A0); /* call 0x0017A0A0 */

loc_000D83E8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D83EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D8400
 * Original: 0x000D8400 - 0x000D8553 (339 bytes, 109 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D8400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8400: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_000D842A; /* jne: not equal / not zero */

loc_000D8414: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000D841Bu); RECOMP_ABI_CALL(0x000D7F00u, sub_000D7F00); /* call 0x000D7F00 */

loc_000D841B: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(MEM32(eax + 0x3EB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x3EB8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D854D; /* jne: not equal / not zero */

loc_000D842A: ;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8437; /* je: equal / zero */

loc_000D8432: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D844B; /* jne: not equal / not zero */

loc_000D8437: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = 0x4322F8;
    PUSH32(esp, 0x000D8443u); RECOMP_ABI_CALL(0x00188630u, sub_00188630); /* call 0x00188630 */

loc_000D8443: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D854D; /* jne: not equal / not zero */

loc_000D844B: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x2C422E5E);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000D845Bu); RECOMP_ABI_CALL(0x000E0EB0u, sub_000E0EB0); /* call 0x000E0EB0 */

loc_000D845B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D853F; /* je: equal / zero */

loc_000D8463: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D853F; /* jne: not equal / not zero */

loc_000D846C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D854D; /* jne: not equal / not zero */

loc_000D8475: ;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8535; /* jne: not equal / not zero */

loc_000D8480: ;
    ecx = MEM32(esi + 0x48);
    ecx = MEM32(esi + ecx * 4 + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC9075904u);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D8490u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D848Eu); } /* indirect call */
    }

loc_000D8490: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF1B15E88u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF1B15E88u (32-bit) */
    MEM32(esi + 0x6C) = eax;
    if (CMP_A(_fa, _fb)) goto loc_000D850E; /* ja: above (unsigned >) */

loc_000D849A: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000D84F3; /* je: equal / zero */

loc_000D849C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10F71117) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10F71117 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D84D8; /* je: equal / zero */

loc_000D84A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB84CF80Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB84CF80Cu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8535; /* jne: not equal / not zero */

loc_000D84AE: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x000D84B8u); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_000D84B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8535; /* je: equal / zero */

loc_000D84BC: ;
    ecx = MEM32(ecx + 0x3EB8);
    MEM32(eax + 0x64) = ecx;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D84CEu); RECOMP_ABI_CALL(0x000D3E60u, sub_000D3E60); /* call 0x000D3E60 */

loc_000D84CE: ;
    POP32(esp, edi);
    MEM8(esi + 0x68) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D84D8: ;
    ecx = 0x4322F8;
    MEM32(esi + 0x60) = 2;
    PUSH32(esp, 0x000D84E9u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_000D84E9: ;
    POP32(esp, edi);
    MEM8(esi + 0x68) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D84F3: ;
    ecx = 0x4322F8;
    MEM32(esi + 0x60) = 1;
    PUSH32(esp, 0x000D8504u); RECOMP_ABI_CALL(0x00209040u, sub_00209040); /* call 0x00209040 */

loc_000D8504: ;
    POP32(esp, edi);
    MEM8(esi + 0x68) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D850E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFEE675A0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFEE675A0u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8535; /* jne: not equal / not zero */

loc_000D8515: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000D851Fu); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_000D851F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8535; /* je: equal / zero */

loc_000D8523: ;
    edx = MEM32(ecx + 0x3EB8);
    MEM32(eax + 0x64) = edx;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D8535u); RECOMP_ABI_CALL(0x000D3E60u, sub_000D3E60); /* call 0x000D3E60 */

loc_000D8535: ;
    POP32(esp, edi);
    MEM8(esi + 0x68) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000D853F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D854D; /* jne: not equal / not zero */

loc_000D8544: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D854D; /* jne: not equal / not zero */

loc_000D8549: ;
    MEM8(esi + 0x69) = 1;

loc_000D854D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D8560
 * Original: 0x000D8560 - 0x000D8973 (1043 bytes, 277 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D8560: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000D8577u); RECOMP_ABI_CALL(0x000D7F00u, sub_000D7F00); /* call 0x000D7F00 */

loc_000D8577: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D896A; /* jne: not equal / not zero */

loc_000D8580: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D896A; /* jne: not equal / not zero */

loc_000D8589: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(esi + eax * 4 + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC9075904u);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D8599u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D8597u); } /* indirect call */
    }

loc_000D8599: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8036B649u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8036B649u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D8816; /* ja: above (unsigned >) */

loc_000D85A4: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000D87DB; /* je: equal / zero */

loc_000D85AA: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9E48C6A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9E48C6A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D86E5; /* je: equal / zero */

loc_000D85B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B0D83E4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3B0D83E4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D879E; /* je: equal / zero */

loc_000D85C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x66D6FCB3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x66D6FCB3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D896A; /* jne: not equal / not zero */

loc_000D85CD: ;
    edx = MEM32(esi + 0x16C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esi + 0x16C) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_000D85E7; /* jle: less or equal (signed <=) */

loc_000D85E1: ;
    MEM32(esi + 0x16C) = ebx;

loc_000D85E7: ;
    esi = MEM32(esi + 0x16C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x15) = eax;
    MEM32(esp + 0x19) = eax;
    MEM32(esp + 0x1D) = eax;
    MEM32(esp + 0x21) = eax;
    MEM32(esp + 0x25) = eax;
    MEM32(esp + 0x29) = eax;
    MEM32(esp + 0x2D) = eax;
    MEM16(esp + 0x31) = LO16(eax);
    MEM8(esp + 0x33) = LO8(eax);
    eax = esi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM8(esp + 0x14) = LO8(ebx);
    if (CMP_A(_fa, _fb)) goto loc_000D868C; /* ja: above (unsigned >) */

loc_000D8620: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xD8974); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000D8627u) goto loc_000D8627;
    if (_jt == 0x000D863Fu) goto loc_000D863F;
    if (_jt == 0x000D8656u) goto loc_000D8656;
    if (_jt == 0x000D866Du) goto loc_000D866D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D8627: ;
    SET_LO16(ecx, MEM16(0x2E6CC4));
    SET_LO8(edx, MEM8(0x2E6CC6));
    MEM16(esp + 0x14) = LO16(ecx);
    MEM8(esp + 0x16) = LO8(edx);
    goto loc_000D868C;

loc_000D863F: ;
    eax = MEM32(0x2E6CBC);
    SET_LO16(ecx, MEM16(0x2E6CC0));
    MEM32(esp + 0x14) = eax;
    MEM16(esp + 0x18) = LO16(ecx);
    goto loc_000D868C;

loc_000D8656: ;
    edx = MEM32(0x2E6CB4);
    SET_LO16(eax, MEM16(0x2E6CB8));
    MEM32(esp + 0x14) = edx;
    MEM16(esp + 0x18) = LO16(eax);
    goto loc_000D868C;

loc_000D866D: ;
    ecx = MEM32(0x2E6CAC);
    SET_LO16(edx, MEM16(0x2E6CB0));
    SET_LO8(eax, MEM8(0x2E6CB2));
    MEM32(esp + 0x14) = ecx;
    MEM16(esp + 0x18) = LO16(edx);
    MEM8(esp + 0x1A) = LO8(eax);

loc_000D868C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D86B4; /* jne: not equal / not zero */

loc_000D8690: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40FF3F78);
    ecx = 0x414150;
    PUSH32(esp, 0x000D86A0u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_000D86A0: ;
    PUSH32(esp, ebx);
    ecx = 0x3C0480;
    PUSH32(esp, 0x000D86ABu); RECOMP_ABI_CALL(0x00063F80u, sub_00063F80); /* call 0x00063F80 */

loc_000D86AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000D86B4: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40FF3F78);
    ecx = 0x414150;
    PUSH32(esp, 0x000D86C8u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_000D86C8: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D86D2u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000D86D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x3C0480;
    PUSH32(esp, 0x000D86E0u); RECOMP_ABI_CALL(0x00063F80u, sub_00063F80); /* call 0x00063F80 */

loc_000D86E0: ;
    goto loc_000D893E;

loc_000D86E5: ;
    ecx = MEM32(esi + 0x168);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esi + 0x168) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_000D86FF; /* jle: less or equal (signed <=) */

loc_000D86F9: ;
    MEM32(esi + 0x168) = ebx;

loc_000D86FF: ;
    ecx = MEM32(esi + 0x168);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    MEM32(esp + 0x11) = eax;
    edx = esp + 0x10;
    MEM16(esp + 0x15) = LO16(eax);
    PUSH32(esp, 0x2DEA44);
    PUSH32(esp, edx);
    MEM8(esp + 0x18) = LO8(ebx);
    MEM8(esp + 0x1F) = LO8(eax);
    PUSH32(esp, 0x000D8728u); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000D8728: ;
    eax = MEM32(esi + 0x168);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = 0x414150;
    if (CMP_NE(_fa, _fb)) goto loc_000D8752; /* jne: not equal / not zero */

loc_000D873A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFDCB76EDu);
    PUSH32(esp, 0x000D8745u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_000D8745: ;
    PUSH32(esp, ebx);
    ecx = 0x3C0480;
    PUSH32(esp, 0x000D8750u); RECOMP_ABI_CALL(0x00202680u, sub_00202680); /* call 0x00202680 */

loc_000D8750: ;
    goto loc_000D879E;

loc_000D8752: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFDCB76EDu);
    PUSH32(esp, 0x000D8761u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_000D8761: ;
    ecx = MEM32(esi + 0x168);
    PUSH32(esp, ecx);
    ecx = 0x3C0480;
    PUSH32(esp, 0x000D8772u); RECOMP_ABI_CALL(0x00202680u, sub_00202680); /* call 0x00202680 */

loc_000D8772: ;
    PUSH32(esp, 0x2DC8F4);
    PUSH32(esp, 0x1833A8BC);
    ecx = 0x414150;
    PUSH32(esp, 0x000D8786u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_000D8786: ;
    PUSH32(esp, 0x2DC8F4);
    PUSH32(esp, 0x000D8790u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000D8790: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x3C0480;
    PUSH32(esp, 0x000D879Eu); RECOMP_ABI_CALL(0x000D4A70u, sub_000D4A70); /* call 0x000D4A70 */

loc_000D879E: ;
    ecx = MEM32(esi + 0x1B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D896A; /* jle: less or equal (signed <=) */

loc_000D87AC: ;
    eax = MEM32(esi + 0x1B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D896A; /* je: equal / zero */

loc_000D87BB: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, edi);
    MEM32(esi + 0x1B8) = edx;
    edx = MEM32(esi + edx * 4 + 0x174);
    POP32(esp, esi);
    MEM32(0x413FC0) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000D87DB: ;
    ecx = MEM32(esi + 0x160);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D896A; /* jle: less or equal (signed <=) */

loc_000D87E9: ;
    eax = MEM32(esi + 0x164);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D896A; /* je: equal / zero */

loc_000D87F8: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = 0x3C0480;
    MEM32(esi + 0x164) = edx;
    eax = MEM32(esi + edx * 4 + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D8811u); RECOMP_ABI_CALL(0x000443D0u, sub_000443D0); /* call 0x000443D0 */

loc_000D8811: ;
    goto loc_000D893E;

loc_000D8816: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91C94F31u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x91C94F31u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D88A8; /* je: equal / zero */

loc_000D8821: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA935EF9Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA935EF9Cu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D896A; /* jne: not equal / not zero */

loc_000D882C: ;
    PUSH32(esp, 0x8762095);
    ecx = 0x414150;
    PUSH32(esp, 0x000D883Bu); RECOMP_ABI_CALL(0x00121BD0u, sub_00121BD0); /* call 0x00121BD0 */

loc_000D883B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8877; /* je: equal / zero */

loc_000D8841: ;
    edi = 0x2DC8F4;
    esi = eax;
    ecx = 5;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_000D8877; /* jne: not equal / not zero */

loc_000D8853: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x8762095);
    ecx = 0x414150;
    PUSH32(esp, 0x000D8863u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_000D8863: ;
    PUSH32(esp, ebx);
    ecx = 0x3C0480;
    PUSH32(esp, 0x000D886Eu); RECOMP_ABI_CALL(0x00064050u, sub_00064050); /* call 0x00064050 */

loc_000D886E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000D8877: ;
    PUSH32(esp, 0x2DC8F4);
    PUSH32(esp, 0x8762095);
    ecx = 0x414150;
    PUSH32(esp, 0x000D888Bu); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_000D888B: ;
    PUSH32(esp, 0x2DC8F4);
    PUSH32(esp, 0x000D8895u); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000D8895: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x3C0480;
    PUSH32(esp, 0x000D88A3u); RECOMP_ABI_CALL(0x00064050u, sub_00064050); /* call 0x00064050 */

loc_000D88A3: ;
    goto loc_000D893E;

loc_000D88A8: ;
    edx = MEM32(esi + 0x170);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(esi + 0x170) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_000D88C4; /* jle: less or equal (signed <=) */

loc_000D88BE: ;
    MEM32(esi + 0x170) = ebx;

loc_000D88C4: ;
    ecx = MEM32(esi + 0x170);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    MEM32(esp + 0x11) = eax;
    edx = esp + 0x10;
    MEM16(esp + 0x15) = LO16(eax);
    PUSH32(esp, 0x2DEA44);
    PUSH32(esp, edx);
    MEM8(esp + 0x18) = LO8(ebx);
    MEM8(esp + 0x1F) = LO8(eax);
    PUSH32(esp, 0x000D88EDu); RECOMP_ABI_CALL(0x002370B8u, sub_002370B8); /* call 0x002370B8 */

loc_000D88ED: ;
    eax = MEM32(esi + 0x170);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = 0x414150;
    if (CMP_NE(_fa, _fb)) goto loc_000D891E; /* jne: not equal / not zero */

loc_000D88FF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7305B8D3);
    PUSH32(esp, 0x000D890Au); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_000D890A: ;
    PUSH32(esp, ebx);
    ecx = 0x3C0480;
    PUSH32(esp, 0x000D8915u); RECOMP_ABI_CALL(0x00150C20u, sub_00150C20); /* call 0x00150C20 */

loc_000D8915: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000D891E: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7305B8D3);
    PUSH32(esp, 0x000D892Du); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_000D892D: ;
    ecx = MEM32(esi + 0x170);
    PUSH32(esp, ecx);
    ecx = 0x3C0480;
    PUSH32(esp, 0x000D893Eu); RECOMP_ABI_CALL(0x00150C20u, sub_00150C20); /* call 0x00150C20 */

loc_000D893E: ;
    PUSH32(esp, 0x2DC8F4);
    ecx = 0x414150;
    PUSH32(esp, 0x1833A8BC);
    PUSH32(esp, 0x000D8952u); RECOMP_ABI_CALL(0x00121C20u, sub_00121C20); /* call 0x00121C20 */

loc_000D8952: ;
    PUSH32(esp, 0x2DC8F4);
    PUSH32(esp, 0x000D895Cu); RECOMP_ABI_CALL(0x001F29F0u, sub_001F29F0); /* call 0x001F29F0 */

loc_000D895C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3C0480;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D896Au); RECOMP_ABI_CALL(0x000D4A70u, sub_000D4A70); /* call 0x000D4A70 */

loc_000D896A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D8990
 * Original: 0x000D8990 - 0x000D8A17 (135 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8990: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x000D89A4u); RECOMP_ABI_CALL(0x000D7F00u, sub_000D7F00); /* call 0x000D7F00 */

loc_000D89A4: ;
    _fa = (uint32_t)(MEM8(esi + 0x64)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x64), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8A11; /* jne: not equal / not zero */

loc_000D89AA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8A11; /* jne: not equal / not zero */

loc_000D89AF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8A11; /* jne: not equal / not zero */

loc_000D89B4: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(esi + eax * 4 + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC9075904u);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D89C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D89C2u); } /* indirect call */
    }

loc_000D89C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1CF22D9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1CF22D9F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8A0A; /* je: equal / zero */

loc_000D89CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F95C48D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F95C48D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8A11; /* jne: not equal / not zero */

loc_000D89D2: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x000D89DCu); RECOMP_ABI_CALL(0x000D3EA0u, sub_000D3EA0); /* call 0x000D3EA0 */

loc_000D89DC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8A11; /* je: equal / zero */

loc_000D89E2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x59C00449);
    PUSH32(esp, 0x783132F6);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000D89F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D89F0u); } /* indirect call */
    }

loc_000D89F3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x39D462F);
    PUSH32(esp, 0xF18E106);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000D8A04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D8A01u); } /* indirect call */
    }

loc_000D8A04: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000D8A0A: ;
    MEM32(esi + 0x60) = 0x1CF22D9F;

loc_000D8A11: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
