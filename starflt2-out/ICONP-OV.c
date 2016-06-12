// ====== OVERLAY 'ICONP-OV' ======
// store offset = 0xf0b0
// overlay size   = 0x04b0

#include"cpu.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:    STAR-ID-CASE  codep:0x4b3b parp:0xf1df size:0x0012 C-string:'STAR_dash_ID_dash_CASE'
// 1870:    PLANET-ID-CA  codep:0x4b3b parp:0xf202 size:0x001e C-string:'PLANET_dash_ID_dash_CA'
// 1871:          BOX-ID  codep:0x4b3b parp:0xf22b size:0x002c C-string:'BOX_dash_ID'
// 1872:        SPACE-ID  codep:0x4b3b parp:0xf264 size:0x0040 C-string:'SPACE_dash_ID'
// 1873:    RUIN-ID-CASE  codep:0x4b3b parp:0xf2b5 size:0x0070 C-string:'RUIN_dash_ID_dash_CASE'
// 1874:       PLANET-ID  codep:0x4b3b parp:0xf333 size:0x0030 C-string:'PLANET_dash_ID'
// 1875:      UNK_0xf365  codep:0x224c parp:0xf365 size:0x0014 C-string:'UNK_0xf365'
// 1876:    STAR-IC-CASE  codep:0x4b3b parp:0xf38a size:0x006c C-string:'STAR_dash_IC_dash_CASE'
// 1877:    PLAN-IC-CASE  codep:0x4b3b parp:0xf407 size:0x0034 C-string:'PLAN_dash_IC_dash_CASE'
// 1878:          BOX-IC  codep:0x4b3b parp:0xf446 size:0x003a C-string:'BOX_dash_IC'
// 1879:       #IC-CASES  codep:0x4b3b parp:0xf48e size:0x0024 C-string:'_n_IC_dash_CASES'
// 1880:      UNK_0xf4b4  codep:0x224c parp:0xf4b4 size:0x0046 C-string:'UNK_0xf4b4'
// 1881:       ICON-PARM  codep:0x224c parp:0xf508 size:0x001e C-string:'ICON_dash_PARM'
// 1882:        +ICONBOX  codep:0x224c parp:0xf533 size:0x002d C-string:'_plus_ICONBOX'

// =================================
// =========== VARIABLES ===========
// =================================



// 0xf0c2: db 0x49 0x00 0x20 0x74 0x2e 0x11 0x01 0x20 0x74 0x14 0x49 0x01 0x94 0x73 0x19 0x1c 0x01 0x24 0x5d 0x6b 0x20 0x74 0x19 0x0b 0x01 0x94 0x73 0x44 0x1a 0x01 0x22 0x07 0x6f 0x20 0x74 0x44 0x19 0x01 0x20 0x74 0x44 0x18 0x01 0x94 0x73 0x20 0x01 0x01 0x17 0x49 0x6c 0x20 0x74 0x3d 0x1b 0x01 0x94 0x73 0x15 0x13 0x01 0x32 0xd1 0x6a 0x20 0x74 0x15 0x0c 0x01 0x20 0x74 0x17 0x0b 0x01 0x94 0x73 0x19 0x04 0x01 0x24 0x5d 0x6b 0x14 0x22 0x32 0x00 0x14 0x22 0x34 0x00 0x14 0x22 0x34 0x00 0x14 0x22 0x33 0x00 0x14 0x22 0x33 0x00 0x14 0x22 0x15 0x00 0x14 0x22 0x16 0x00 0x14 0x22 0x17 0x00 0x14 0x22 0x18 0x00 0x14 0x22 0x19 0x00 0x14 0x22 0x1a 0x00 0x14 0x22 0xfe 0x00 0x14 0x22 0x14 0x00 0x14 0x22 0x2c 0x00 0x14 0x22 0x2d 0x00 0x14 0x22 0x2e 0x00 0x14 0x22 0x2f 0x00 0x14 0x22 0x30 0x00 0x14 0x22 0x5f 0x00 0x14 0x22 0x60 0x00 0x14 0x22 0x62 0x00 0x4c 0x22 0x00 0x6a 0x2f 0x7a 0x90 0x16 0x4c 0x22 0x68 0xf1 0xfa 0xf0 0x92 0x0c 0x5d 0x17 0x5a 0x00 0x72 0x0f 0xdf 0x79 0x90 0x16 0x4c 0x22 0xc9 0xf0 0x92 0x0c 0x5d 0x17 0x1b 0x00 0x72 0x0f 0x90 0x16 0x4c 0x22 0xce 0xf0 0x92 0x0c 0xfa 0x15 0x30 0x00 0x5d 0x17 0x14 0x00 0x46 0x75 0xfa 0x15 0x08 0x00 0x60 0xf1 0x60 0x16 0x1c 0x00 0x5d 0x17 0x1d 0x00 0x46 0x75 0xfa 0x15 0x08 0x00 0x64 0xf1 0x60 0x16 0x0c 0x00 0xd6 0xf0 0x92 0x0c 0x5d 0x17 0x23 0x00 0x72 0x0f 0x60 0x16 0x06 0x00 0x5d 0x17 0x2b 0x00 0x90 0x16 'I  t.   t I  s   $]k t    sD  " o tD   tD   s    Il t=   s   2 j t    t    s   $]k "2  "4  "4  "3  "3  "   "   "   "   "   "   "   "   ",  "-  ".  "/  "0  "_  "`  "b L" j/z  L"h     ] Z r  y  L"    ]   r   L"      0 ]   Fu    ` `   ]   Fu    d `       ] # r `   ] +   '

// ================================================
// 0xf1ce: WORD 'STAR-ID-CASE' codep=0x4b3b parp=0xf1df
// ================================================
// 0xf1df: db 0x01 0x00 0x1a 0xf1 0x02 0x00 0x1e 0xf1 0x4c 0x22 0x2a 0x5c 0xae 0x0b 0xdd 0xf1 0x90 0x16 '        L"*\      '

// ================================================
// 0xf1f1: WORD 'PLANET-ID-CA' codep=0x4b3b parp=0xf202
// ================================================
// 0xf202: db 0x01 0x00 0x22 0xf1 0x02 0x00 0x26 0xf1 0x4c 0x22 0x2a 0x5c 0xae 0x0b 0x00 0xf2 0x90 0x16 0x4c 0x22 0x34 0x75 0x5d 0x17 0x32 0x00 0x72 0x0f 0x90 0x16 '  "   & L"*\      L"4u] 2 r   '

// ================================================
// 0xf220: WORD 'BOX-ID' codep=0x4b3b parp=0xf22b
// ================================================
// 0xf22b: db 0x02 0x00 0x4a 0x52 0x18 0x00 0xe9 0xf1 0x20 0x00 0x0c 0xf2 0x4c 0x22 0x3f 0x7a 0x22 0x75 0x29 0xf2 0xdf 0x79 0x90 0x16 0x4c 0x22 0x32 0x62 0xae 0x0b 0xfa 0x15 0x08 0x00 0x48 0xf1 0x60 0x16 0x04 0x00 0x30 0xf1 0x90 0x16 '  JR        L"?z"u)  y  L"2b      H `   0   '

// ================================================
// 0xf257: WORD 'SPACE-ID' codep=0x4b3b parp=0xf264
// ================================================
// 0xf264: db 0x09 0x00 0x4a 0x52 0x0b 0x00 0x39 0xf2 0x14 0x00 0x84 0xf1 0x17 0x00 0x3c 0x52 0x18 0x00 0xe9 0xf1 0x19 0x00 0x92 0xf1 0x20 0x00 0x0c 0xf2 0x2d 0x00 0x58 0x52 0x2e 0x00 0x16 0xf2 0x3c 0x00 0x16 0xf1 0x4c 0x22 0x32 0x62 0xae 0x0b 0xfa 0x15 0x0a 0x00 0x5d 0x17 0x31 0x00 0x60 0x16 0x06 0x00 0x5d 0x17 0x61 0x00 0x90 0x16 '  JR  9       <R            - XR.   <   L"2b      ] 1 `   ] a   '

// ================================================
// 0xf2a4: WORD 'RUIN-ID-CASE' codep=0x4b3b parp=0xf2b5
// ================================================
// 0xf2b5: db 0x04 0x00 0x45 0xf2 0x02 0x00 0x36 0xf1 0x04 0x00 0x36 0xf1 0x05 0x00 0x8e 0xf2 0x06 0x00 0x5e 0xf1 0x4c 0x22 0x68 0xf1 0xfa 0xf0 0x92 0x0c 0x7f 0x3b 0x46 0x12 0xfa 0x15 0x08 0x00 0x54 0xf1 0x60 0x16 0x04 0x00 0x58 0xf1 0xdf 0x79 0x90 0x16 0x4c 0x22 0xdb 0xf0 0x92 0x0c 0x90 0x16 0x4c 0x22 0x34 0x75 0xb4 0x0d 0x50 0x0e 0x97 0x3b 0x5f 0x12 0xfa 0x15 0x08 0x00 0x4c 0xf1 0x60 0x16 0x16 0x00 0x50 0x0e 0x5d 0x17 0x17 0x00 0x5f 0x12 0xfa 0x15 0x08 0x00 0x44 0xf1 0x60 0x16 0x04 0x00 0x28 0xf1 0x90 0x0e 0x32 0x0e 0x90 0x16 0x4c 0x22 0x34 0x75 0xb3 0xf2 0x90 0x16 '  E   6   6       ^ L"h     ;F     T `   X  y  L"      L"4u  P  ;_     L `   P ]   _     D `   (   2   L"4u    '

// ================================================
// 0xf325: WORD 'PLANET-ID' codep=0x4b3b parp=0xf333
// ================================================
// 0xf333: db 0x0b 0x00 0x6e 0x3a 0x29 0x00 0x1f 0xf3 0x2a 0x00 0x3e 0xf1 0x44 0x00 0xe7 0xf2 0x14 0x00 0x3a 0xf1 0x1a 0x00 0xef 0xf2 0x1c 0x00 0x2e 0xf1 0x1f 0x00 0x72 0xf1 0x21 0x00 0x52 0xf1 0x15 0x00 0xcb 0xf2 0x1b 0x00 0x42 0xf1 0x30 0x00 0x42 0xf1 '  n:)   * > D     :       .   r ! R       B 0 B '

// ================================================
// 0xf363: WORD 'UNK_0xf365' codep=0x224c parp=0xf365
// ================================================

void UNK_0xf365() // UNK_0xf365
{
  _at_INST_dash_C(); // @INST-C
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  SPACE_dash_ID(); // SPACE-ID
  return;

  label1:
  PLANET_dash_ID(); // PLANET-ID
}


// ================================================
// 0xf379: WORD 'STAR-IC-CASE' codep=0x4b3b parp=0xf38a
// ================================================
// 0xf38a: db 0x06 0x00 0x28 0x50 0x4d 0x00 0xd7 0x4f 0x4b 0x00 0x3e 0x50 0x47 0x00 0x4a 0x50 0x46 0x00 0x55 0x50 0x41 0x00 0xce 0x4f 0x42 0x00 0x0e 0x50 0x4c 0x22 0x34 0x75 0x88 0xf3 0x90 0x16 0x4c 0x22 0x0f 0x86 0xfa 0x15 0x08 0x00 0xd5 0x4f 0x60 0x16 0x04 0x00 0xc1 0x4f 0x90 0x16 0x4c 0x22 0xe3 0xf0 0x92 0x0c 0xfa 0x15 0x18 0x00 0xe8 0xf0 0x92 0x0c 0x89 0x12 0xfa 0x15 0x08 0x00 0x72 0x52 0x60 0x16 0x04 0x00 0x87 0x3b 0x60 0x16 0x04 0x00 0x64 0x52 0x90 0x16 0x4c 0x22 0x0f 0x86 0xfa 0x15 0x08 0x00 0xec 0x4f 0x60 0x16 0x04 0x00 0xd5 0x4f 0x90 0x16 '  (PM  OK >PG JPF UPA  OB  PL"4u    L"       O`    O  L"                  rR`    ;`   dR  L"       O`    O  '

// ================================================
// 0xf3f6: WORD 'PLAN-IC-CASE' codep=0x4b3b parp=0xf407
// ================================================
// 0xf407: db 0x05 0x00 0xee 0x4f 0x00 0x00 0xf9 0x4f 0x01 0x00 0xe3 0x4f 0x02 0x00 0x0e 0x50 0x03 0x00 0x55 0x50 0x04 0x00 0xe6 0xf3 0x4c 0x22 0xed 0xf0 0x92 0x0c 0x05 0xf4 0x90 0x16 0x4c 0x22 0x34 0x75 0xfa 0x15 0x08 0x00 0x7f 0x3b 0x60 0x16 0x04 0x00 0x72 0x52 0x90 0x16 '   O   O   O   P  UP    L"        L"4u    ;`   rR  '

// ================================================
// 0xf43b: WORD 'BOX-IC' codep=0x4b3b parp=0xf446
// ================================================
// 0xf446: db 0x02 0x00 0x74 0x52 0x18 0x00 0xa8 0xf3 0x20 0x00 0x21 0xf4 0x4c 0x22 0x3f 0x7a 0x22 0x75 0x44 0xf4 0xdf 0x79 0x90 0x16 0x4c 0x22 0x02 0xf1 0x92 0x0c 0xfa 0x15 0x16 0x00 0x8b 0x62 0xae 0x0b 0xfa 0x15 0x08 0x00 0x87 0x3b 0x60 0x16 0x04 0x00 0x72 0x52 0x60 0x16 0x04 0x00 0x64 0x52 0x90 0x16 '  tR      ! L"?z"uD  y  L"         b       ;`   rR`   dR  '

// ================================================
// 0xf480: WORD '#IC-CASES' codep=0x4b3b parp=0xf48e
// ================================================
// 0xf48e: db 0x08 0x00 0x74 0x52 0x0b 0x00 0x54 0xf4 0x17 0x00 0xa8 0xf3 0x20 0x00 0x21 0xf4 0x18 0x00 0xa8 0xf3 0x44 0x00 0xc2 0xf3 0x2d 0x00 0x2b 0xf4 0x2e 0x00 0xb0 0xf3 0x15 0x00 0x60 0xf4 '  tR  T       !     D   - + .     ` '

// ================================================
// 0xf4b2: WORD 'UNK_0xf4b4' codep=0x224c parp=0xf4b4
// ================================================

void UNK_0xf4b4() // UNK_0xf4b4
{
  _at_INST_dash_C(); // @INST-C
  _n_IC_dash_CASES(); // #IC-CASES
}

// 0xf4ba: db 0x4c 0x22 0x22 0x75 0x5d 0x17 0x17 0x00 0x5f 0x12 0xfa 0x15 0x14 0x00 0x32 0x62 0xae 0x0b 0x07 0xf1 0x92 0x0c 0x2e 0x0f 0xf5 0x12 0x3e 0x13 0x60 0x16 0x20 0x00 0x22 0x75 0x5d 0x17 0x2e 0x00 0x5f 0x12 0xfa 0x15 0x12 0x00 0x32 0x62 0xae 0x0b 0x07 0x13 0xc4 0xf0 0x92 0x0c 0x3e 0x13 0x60 0x16 0x04 0x00 0x2e 0x0f 0x90 0x16 'L""u]   _     2b      .   > `   "u] . _     2b        > `   .   '

// ================================================
// 0xf4fa: WORD 'ICON-PARM' codep=0x224c parp=0xf508
// ================================================
// entry

void ICON_dash_PARM() // ICON-PARM
{
  INST_dash_X(); // INST-X
  Push(Read16(Pop())); // @
  INST_dash_Y(); // INST-Y
  Push(Read16(Pop())); // @
  UNK_0xf365(); // UNK_0xf365
  UNK_0xf4b4(); // UNK_0xf4b4
  CI(); // CI
}

// 0xf518: db 0x4c 0x22 0xba 0xf4 0xfa 0x15 0x06 0x00 0x06 0xf5 0x50 0x99 0x90 0x16 'L"        P   '

// ================================================
// 0xf526: WORD '+ICONBOX' codep=0x224c parp=0xf533
// ================================================
// entry

void _plus_ICONBOX() // +ICONBOX
{
  Push(0xf51a);
  ALL(); // ALL
}

// 0xf53b: db 0x56 0x49 0x43 0x4f 0x4e 0x50 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x46 0x49 0x58 0x20 0x5c 0x00 'VICONP__________________________FIX \ '
  